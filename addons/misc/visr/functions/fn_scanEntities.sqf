/*
    RDF_fnc_scanEntities

    Runs on a CBA per-frame handler (every 0.25s, NOT every frame) while
    VISR is enabled. Builds RDF_VISR_trackedEntities, which fn_render
    then draws from every single frame without doing any of this
    scanning work itself.

    Each entry: [object, colorArray, isVehicle (bool), label (string), friendlyInfo]

    friendlyInfo is only populated for friendly infantry: either [] (not
    applicable) or [squadText, nameText, healthText] - always these 3
    fixed slots when present, so fn_render can position each one
    independently (squad top-left, name+health top-right) rather than
    just stacking a generic list.

    Visibility rule (keeps this from being a wallhack):
    - Line-of-sight is checked for EVERYONE via checkVisibility - a
      teammate behind a wall doesn't show up, same as an enemy.
    - Friendlies / civilians: shown as soon as they're in LOS.
    - Hostiles: also need to have actually been spotted (knowsAbout
      threshold) on top of LOS - raw geometric visibility isn't the
      same as "the player noticed them in the bushes".
*/

if (!hasInterface) exitWith {};
if (isNull player) exitWith {};

private _range = 800;
private _visibilityThreshold = 0.1; // checkVisibility returns 0..1, tune to taste

private _colorFriendly = [0.25, 0.95, 1, 1];   // cyan
private _colorHostile  = [1, 0.2, 0.2, 1];     // red
private _colorNeutral  = [1, 0.85, 0.15, 1];   // yellow

// ace_medical_heartRate is set directly on the unit by ACE - reading it
// via getVariable is the correct approach; the ACE function that reads
// it internally (fnc_checkPulseLocal) is explicitly marked Public: No,
// meaning it's not meant to be called from outside ACE's own code.
//
// Rather than detect "is ACE loaded" via CfgPatches (fragile across ACE
// versions/configurations), just check whether the variable itself has a
// real value below. This also correctly falls back to the damage-based
// status if ACE is running in Basic medical mode, which likely doesn't
// track heart rate at all.

private _playerSide = side player;
private _playerPos  = getPosASL player;
private _playerEye  = eyePos player;

private _candidates = player nearEntities [["Man", "LandVehicle", "Air", "Ship"], _range];

private _result = [];

{
    private _entity = _x;

    if (_entity != player && {alive _entity} && {!isNull _entity}) then {

        private _entitySide = side _entity;
        private _isVehicle  = !(_entity isKindOf "Man");
        private _visible    = false;
        private _color      = _colorNeutral;

        // Single raycast-style check, shared by every branch below -
        // this is what makes LOS apply to friendlies too now
        private _canSee = ([_entity, "VIEW", player] checkVisibility [_playerEye, eyePos _entity]) > _visibilityThreshold;

        if (_canSee) then {
            if (_entitySide == _playerSide) then {
                _visible = true;
                _color = _colorFriendly;
            } else {
                if (_entitySide == civilian) then {
                    _visible = true;
                    _color = _colorNeutral;
                } else {
                    if ((player knowsAbout _entity) > 0.6) then {
                        _visible = true;
                        _color = _colorHostile;
                    };
                };
            };
        };

        if (_visible) then {
            private _label = if (_isVehicle) then {getText (configOf _entity >> "displayName")} else {""};

            private _friendlyInfo = [];
            if (!_isVehicle && {_entitySide == _playerSide}) then {
                private _squadText = groupId (group _entity);
                private _nameText  = name _entity;

                private _healthText = "";
                private _hr = _entity getVariable ["ace_medical_heartRate", -1];
                if (_hr >= 0) then {
                    private _hrStatus = switch (true) do {
                        case (_hr < 20):  {"Critical"};
                        case (_hr < 60):  {"Weak"};
                        case (_hr < 100): {"Normal"};
                        case (_hr < 140): {"Elevated"};
                        default           {"Critical"};
                    };
                    _healthText = format ["%1 bpm (%2)", round _hr, _hrStatus];
                };

                // Falls back to damage-based status if ace_medical_heartRate
                // was never set - either ACE isn't loaded, it's running in
                // Basic medical mode (which likely doesn't track heart rate),
                // or the unit spawned before ACE's medical init ran.
                if (_healthText == "") then {
                    private _dmg = damage _entity;
                    _healthText = switch (true) do {
                        case (_dmg < 0.1): {"Healthy"};
                        case (_dmg < 0.4): {"Injured"};
                        case (_dmg < 0.7): {"Badly Injured"};
                        default            {"Critical"};
                    };
                };

                _friendlyInfo = [_squadText, _nameText, _healthText];
            };

            _result pushBack [_entity, _color, _isVehicle, _label, _friendlyInfo];
        };
    };
} forEach _candidates;

// Keep it to the nearest 40 so fn_render never has to draw an unbounded list.
// Tuples are now 5 elements (0-4), so the temp distance field lands at
// index 5 and the final trim keeps indices 0-4.
if (count _result > 40) then {
    _result = _result apply {
        _x + [_playerPos distance getPosASL (_x select 0)] // append distance as element 5
    };
    _result = [_result, [], {_x select 5}, "ASCEND"] call BIS_fnc_sortBy;
    _result = _result select [0, 40];
    _result = _result apply { _x select [0, 5] }; // strip the distance back off
};

RDF_VISR_trackedEntities = _result;
