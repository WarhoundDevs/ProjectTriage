/*
    Enable VISR
*/

if (!hasInterface) exitWith {};

if !([] call RDF_fnc_canUse) exitWith {
    hint "VISR unavailable.";
    missionNamespace setVariable ["RDF_VISR_enabled", false];
};

hintSilent "VISR ONLINE";

[] call RDF_fnc_createPP;

// Entity scan runs on its own slower interval - Draw3D (every frame) just
// reads whatever fn_scanEntities last wrote to RDF_VISR_trackedEntities.
RDF_VISR_pfhHandle = [
    { [] call RDF_fnc_scanEntities; },
    0.25
] call CBA_fnc_addPerFrameHandler;
