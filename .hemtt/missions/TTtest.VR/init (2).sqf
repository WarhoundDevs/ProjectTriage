// Weapon Test Framework v0.1

waitUntil {!isNull player};


// Global variables

WTF_dummy = objNull;

WTF_dummyClass = "B_Soldier_F";

WTF_lastHit = "No hits recorded";

WTF_lastDamage = 0;

WTF_totalDamage = 0;


cutRsc ["WeaponTesterHUD","PLAIN"];

sleep 2;

private _display = uiNamespace getVariable [
    "WeaponTesterHUD_Display",
    displayNull
];

if (isNull _display) then {
    hint "HUD FAILED TO LOAD";
}
else
{
    hint "HUD LOADED SUCCESSFULLY";

    private _ctrl = _display displayCtrl 1000;

    _ctrl ctrlSetText "WEAPON TESTER ONLINE";
};


// Compile scripts

WTF_updateHUD = compile preprocessFileLineNumbers "scripts\updateHUD.sqf";

WTF_collectHitData = compile preprocessFileLineNumbers "scripts\collectHitData.sqf";


// Player actions

player addAction [
    "Spawn Test Dummy",
    {
        [] execVM "scripts\spawnDummy.sqf";
    }
];


player addAction [
    "Heal Dummy",
    {
        [] execVM "scripts\healDummy.sqf";
    }
];


player addAction [
    "Delete Dummy",
    {
        [] execVM "scripts\deleteDummy.sqf";
    }
];


// Initial HUD update

[] call WTF_updateHUD;
