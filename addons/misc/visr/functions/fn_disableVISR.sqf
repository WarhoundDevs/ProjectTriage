/*
    Disable VISR
*/

if (!hasInterface) exitWith {};

hintSilent "VISR OFFLINE";

[] call RDF_fnc_destroyPP;

if (RDF_VISR_pfhHandle != -1) then {
    [RDF_VISR_pfhHandle] call CBA_fnc_removePerFrameHandler;
    RDF_VISR_pfhHandle = -1;
};

RDF_VISR_trackedEntities = [];
