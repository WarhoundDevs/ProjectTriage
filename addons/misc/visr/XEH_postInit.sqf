if (!hasInterface) exitWith {};

[
    "VISR",                    // Mod/category
    "ToggleVISR",              // Unique action name
    "Toggle VISR",             // Display name
    {
        [] call RDF_fnc_toggleVISR;
    },
    {},
    [0x2F, [false, false, false]] // Default: V key
] call CBA_fnc_addKeybind;

// Draw3D fires every frame regardless of open dialogs/menus - render only reads
// the cache built by fn_scanEntities, so this stays cheap even at 60+ fps.
addMissionEventHandler
[
    "Draw3D",
    {
        if !(missionNamespace getVariable ["RDF_VISR_enabled", false]) exitWith {};

        call RDF_fnc_render;
    }
];
