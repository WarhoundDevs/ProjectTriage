/*
    Toggle VISR
*/

if (!hasInterface) exitWith {};

private _enabled = !(missionNamespace getVariable ["RDF_VISR_enabled", false]);

missionNamespace setVariable ["RDF_VISR_enabled", _enabled];

if (_enabled) then {
    [] call RDF_fnc_enableVISR;
} else {
    [] call RDF_fnc_disableVISR;
};
