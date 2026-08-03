/*
    RDF_fnc_createPP

    Creates (once) and enables the VISR "visor" post-process look:
    a cool cyan color grade + faint scanline-style film grain + a touch
    of chromatic aberration at the screen edges.

    Handles are created ONCE and cached in RDF_VISR_ppHandles - repeated
    calls just re-enable them, since ppEffectCreate/Destroy churn is
    wasteful and can eventually exhaust effect slots.
*/

if (!hasInterface) exitWith {};

if (RDF_VISR_ppHandles isEqualTo []) then {
    private _colorCorrection = ppEffectCreate ["ColorCorrections", 1501];
    private _filmGrain       = ppEffectCreate ["FilmGrain", 1502];
    private _chromAberration = ppEffectCreate ["ChromAberration", 1503];

    RDF_VISR_ppHandles = [_colorCorrection, _filmGrain, _chromAberration];
};

private _colorCorrection = RDF_VISR_ppHandles select 0;
private _filmGrain       = RDF_VISR_ppHandles select 1;
private _chromAberration = RDF_VISR_ppHandles select 2;

_colorCorrection ppEffectEnable true;
_colorCorrection ppEffectAdjust [
    1.0,                // brightness - no boost, avoid compounding clipping
    1.05,               // contrast - mild, was pushing bright values too hard
    0.02,               // gamma
    [0, 0.02, 0.03, 0], // colour add (r,g,b,a) - slight cyan lift in shadows
    [0.85, 0.98, 1.0, 1], // colour multiply (r,g,b,a) - capped at 1.0, still pulls red down for a cyan lean
    [0.299, 0.587, 0.114, 0] // standard luminance weights
];
_colorCorrection ppEffectCommit 0;

_filmGrain ppEffectEnable true;
_filmGrain ppEffectAdjust [0.035, 0.7, 0.6, 0, 1, 0]; // subtle noise, coloured
_filmGrain ppEffectCommit 0;

_chromAberration ppEffectEnable true;
_chromAberration ppEffectAdjust [0.01, 0.01, true]; // faint edge fringing
_chromAberration ppEffectCommit 0;
