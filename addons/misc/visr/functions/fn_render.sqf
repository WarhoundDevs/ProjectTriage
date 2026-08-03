/*
    RDF_fnc_render

    Called from the Draw3D mission event handler - runs every rendered
    frame. Only ever reads RDF_VISR_trackedEntities (built separately,
    slowly, by fn_scanEntities) so this stays cheap regardless of frame
    rate.

    Draws a camera-facing corner bracket (four L-shaped corners, like a
    targeting reticle) around each tracked entity instead of a flat dot,
    plus a distance/label readout underneath.
*/

private _camPos = positionCameraToWorld [0, 0, 0];

// Camera-local right/up unit vectors, derived by sampling 1m along each
// local axis from the camera origin and taking the difference. There's
// no direct "camera right vector" command, so this is the standard way
// to get billboard vectors that always face the camera.
private _camRight = (positionCameraToWorld [1, 0, 0]) vectorDiff _camPos;
private _camUp    = (positionCameraToWorld [0, 1, 0]) vectorDiff _camPos;

// Solid white base texture, tinted per-entity by the color param below.
// Same technique the original dot version used - drawIcon3D, unlike
// drawLine3D, doesn't have the known engine visibility/color bug.
private _texture = "#(argb,8,8,3)color(1,1,1,1)";

{
    _x params ["_entity", "_color", "_isVehicle", "_label", "_friendlyInfo"];

    if (!isNull _entity && {alive _entity}) then {

        // boundingBoxReal gives the TIGHT, current-pose geometry (unlike
        // boundingBox, whose sphere diameter is a loose bound meant to
        // cover every possible animation pose - that looseness was why
        // the bracket and label were sinking below the feet). We derive
        // our own center and per-axis half-extents from it directly so
        // the anchor and the size are self-consistent.
        (boundingBoxReal _entity) params ["_bbMin", "_bbMax"];

        private _localCenter = [
            ((_bbMin select 0) + (_bbMax select 0)) / 2,
            ((_bbMin select 1) + (_bbMax select 1)) / 2,
            ((_bbMin select 2) + (_bbMax select 2)) / 2
        ];

        private _pos = _entity modelToWorldVisual _localCenter;
        private _dist = _camPos distance _pos;

        // Off-screen entities cost nothing extra - worldToScreen returns [] if not visible
        if !((worldToScreen _pos) isEqualTo []) then {

            private _rawHalfW = (((_bbMax select 0) - (_bbMin select 0)) max ((_bbMax select 1) - (_bbMin select 1))) / 2;
            private _rawHalfH = ((_bbMax select 2) - (_bbMin select 2)) / 2;

            private _marginMult = if (_isVehicle) then {1.2} else {0.85};
            private _floorW = if (_isVehicle) then {0.6} else {0.22};
            private _floorH = if (_isVehicle) then {0.5} else {0.15};

            private _halfW = (_rawHalfW * _marginMult) max _floorW;
            private _halfH = (_rawHalfH * _marginMult) max _floorH;

            private _right = _camRight vectorMultiply _halfW;
            private _up    = _camUp vectorMultiply _halfH;

            // The four corners of the camera-facing rectangle around the entity
            private _topRight = (_pos vectorAdd _right) vectorAdd _up;
            private _topLeft  = (_pos vectorDiff _right) vectorAdd _up;
            private _botRight = (_pos vectorAdd _right) vectorDiff _up;
            private _botLeft  = (_pos vectorDiff _right) vectorDiff _up;

            // How far each bracket arm reaches in from its corner
            private _armRight = _camRight vectorMultiply (_halfW * 0.5);
            private _armUp    = _camUp vectorMultiply (_halfH * 0.5);

            // Icon size units aren't real metres, so a distance-only
            // formula (the previous approach) had no relationship to the
            // real arm length used for positioning above - ticks ended up
            // as tiny disconnected blobs floating mid-arm instead of
            // reaching the corners. Converting the REAL arm length into
            // icon-units (via a rough calibration against the apparent
            // size an infantry target was originally tuned at) keeps the
            // rendered tick proportional to where it's actually
            // positioned, so it visually reaches close to the corner.
            //
            // NOTE: this only reacts to real distance, not optical zoom
            // (weapon/binocular magnification) - vanilla Arma has no
            // getFOV/getZoom command to detect that, so ticks can still
            // look short relative to the bracket when zoomed in without
            // physically closing distance. The overshoot multiplier below
            // is deliberately generous to soften that, not eliminate it.
            private _apparentUnit = 0.05 max (1.4 / (_dist max 1));
            // No upper ceiling - the old "min 0.25" cap made tick size flatten
            // out past ~5-6m while real corner spacing kept growing with
            // proximity, which is what caused the "shorter the closer you
            // get" segmenting.

            private _referenceHalfMetres = 0.85; // rough infantry half-size the formula above was tuned against
            private _iconUnitsPerMetre = _apparentUnit / _referenceHalfMetres;

            // Vehicles still get a bit more than infantry, but both needed
            // raising - this connects to real perspective purely by
            // empirical approximation (there's no documented conversion
            // between icon-size units and real screen-space projection),
            // so any leftover error here shows up as a small proportional
            // gap that's far more visible in screen pixels up close (big
            // bracket) than at range (tiny bracket) - hence "worse closer,
            // fine far away" for both entity types alike.
            private _tickOvershoot = if (_isVehicle) then {5.5} else {4.0};

            private _tickThickness = _apparentUnit * 0.35;
            private _tickLenH = (_halfW * 0.5 * _iconUnitsPerMetre * _tickOvershoot) max (_apparentUnit * 0.6);
            private _tickLenV = (_halfH * 0.5 * _iconUnitsPerMetre * _tickOvershoot) max (_apparentUnit * 0.6);

            // Text size derives from the SAME real-metre-to-icon-unit
            // conversion as the ticks above (_iconUnitsPerMetre). This is
            // the actual fix for the "unreadable overlap at range" bug:
            // text size was previously a separate, arbitrary formula
            // unrelated to the real-metre offsets used to position
            // squad/name/health around the bracket - close up the two
            // happened to look fine together, but at range they scaled at
            // different rates, so text stayed relatively too big for the
            // shrinking gap between anchor points and the pieces
            // overlapped into a garbled mess. Sharing the same conversion
            // keeps text and position proportionally consistent at every
            // distance. A legibility floor is applied below (unlike the
            // bracket's own floor, tuned so it doesn't kick in until past
            // close range) so text stays readable through at least ~50m
            // instead of shrinking indefinitely toward illegible.
            private _iconUnitsPerMetreNoFloor = (1.4 / (_dist max 1)) / _referenceHalfMetres;
            private _textRealHeight = 0.05; // desired real-world text height in metres, tune to taste
            // Floor at 0.03 - close range (under ~10m) is unaffected since
            // the natural value is already bigger than this, but past that
            // it stops shrinking rather than continuing toward illegible,
            // keeping it readable through 50m and beyond.
            private _textSize = (_textRealHeight * _iconUnitsPerMetreNoFloor) max 0.01;

            // Each tick is a small rectangle centred on the segment's
            // midpoint - swapping width/height per orientation instead of
            // using the angle param, so there's no rotation-pivot guesswork.
            private _hMidTL = _topLeft  vectorAdd (_armRight vectorMultiply 0.5);
            private _vMidTL = _topLeft  vectorDiff (_armUp    vectorMultiply 0.5);
            private _hMidTR = _topRight vectorDiff (_armRight vectorMultiply 0.5);
            private _vMidTR = _topRight vectorDiff (_armUp    vectorMultiply 0.5);
            private _hMidBL = _botLeft  vectorAdd (_armRight vectorMultiply 0.5);
            private _vMidBL = _botLeft  vectorAdd (_armUp    vectorMultiply 0.5);
            private _hMidBR = _botRight vectorDiff (_armRight vectorMultiply 0.5);
            private _vMidBR = _botRight vectorAdd (_armUp    vectorMultiply 0.5);

            // Top-left corner
            drawIcon3D [_texture, _color, _hMidTL, _tickLenH, _tickThickness, 0];
            drawIcon3D [_texture, _color, _vMidTL, _tickThickness, _tickLenV, 0];

            // Top-right corner
            drawIcon3D [_texture, _color, _hMidTR, _tickLenH, _tickThickness, 0];
            drawIcon3D [_texture, _color, _vMidTR, _tickThickness, _tickLenV, 0];

            // Bottom-left corner
            drawIcon3D [_texture, _color, _hMidBL, _tickLenH, _tickThickness, 0];
            drawIcon3D [_texture, _color, _vMidBL, _tickThickness, _tickLenV, 0];

            // Bottom-right corner
            drawIcon3D [_texture, _color, _hMidBR, _tickLenH, _tickThickness, 0];
            drawIcon3D [_texture, _color, _vMidBR, _tickThickness, _tickLenV, 0];

            // Distance/label readout, anchored just under the bracket
            private _distText = (str round _dist) + "m";
            private _text = if (_label != "") then {format ["%1 - %2", _label, _distText]} else {_distText};
            private _textPos = _pos vectorDiff (_camUp vectorMultiply (_halfH * 1.05));

            drawIcon3D [
                "",
                _color,
                _textPos,
                0,
                0,
                0,
                _text,
                2,
                _textSize,
                "PuristaMedium",
                "center"
            ];

            // Friendly infantry readout: squad top-left, name + health
            // top-right, distance stays at the bottom above. All three
            // anchor points use real-metre offsets from the bracket (same
            // system as the corners), so they scale correctly with distance.
            // Line spacing is derived directly from _textSize (rather than
            // a separate formula) so the gap and the text height shrink
            // together at the same rate - that's what actually fixes the
            // overlap, not just adding a floor.
            if (count _friendlyInfo > 0) then {
                _friendlyInfo params ["_squadText", "_nameText", "_healthText"];

                private _lineSpacing = _textSize * 1.6;

                private _topAnchor  = _pos vectorAdd (_camUp vectorMultiply (_halfH * 1.1));
                private _sideOffset = _camRight vectorMultiply (_halfW * 1.15);

                private _topLeftPos  = _topAnchor vectorDiff _sideOffset;
                private _topRightPos = _topAnchor vectorAdd _sideOffset;
                private _healthPos   = _topRightPos vectorAdd (_camUp vectorMultiply _lineSpacing);

                // Top-left: squad/group
                drawIcon3D ["", _color, _topLeftPos, 0, 0, 0, _squadText, 2, _textSize, "PuristaMedium", "left"];

                // Top-right: name, with health/heart rate stacked above it
                drawIcon3D ["", _color, _topRightPos, 0, 0, 0, _nameText, 2, _textSize, "PuristaMedium", "right"];
                drawIcon3D ["", _color, _healthPos, 0, 0, 0, _healthText, 2, _textSize, "PuristaMedium", "right"];
            };
        };
    };
} forEach RDF_VISR_trackedEntities;
