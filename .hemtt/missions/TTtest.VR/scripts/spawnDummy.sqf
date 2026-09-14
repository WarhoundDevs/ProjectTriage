/*
    Weapon Test Framework v0.2
    spawnDummy.sqf

    Creates a passive test target.
*/


// Remove old dummy if one exists

if (!isNull WTF_dummy) then
{
    deleteVehicle WTF_dummy;
};


// Spawn position

private _spawnPos = player modelToWorld [
    0,
    10,
    0
];


// Create dummy

WTF_dummy = createAgent [
    WTF_dummyClass,
    _spawnPos,
    [],
    0,
    "NONE"
];


// Make passive

WTF_dummy disableAI "TARGET";
WTF_dummy disableAI "AUTOTARGET";
WTF_dummy disableAI "FSM";

WTF_dummy setBehaviour "CARELESS";
WTF_dummy setCombatMode "BLUE";


// Stop movement

WTF_dummy forceSpeed 0;


// Make invulnerable temporarily during setup

WTF_dummy allowDamage false;


// Gather target information

WTF_targetClass = typeOf WTF_dummy;

WTF_targetVest = vest WTF_dummy;

WTF_targetHelmet = headgear WTF_dummy;

// Vest armor

if (WTF_targetVest != "") then
{
    WTF_targetVestArmor =
    getNumber (
        configFile >>
        "CfgWeapons" >>
        WTF_targetVest >>
        "ItemInfo" >>
        "HitpointsProtectionInfo" >>
        "Chest" >>
        "armor"
    );
};


// Helmet armor

if (WTF_targetHelmet != "") then
{
    WTF_targetHelmetArmor =
    getNumber (
        configFile >>
        "CfgWeapons" >>
        WTF_targetHelmet >>
        "ItemInfo" >>
        "HitpointsProtectionInfo" >>
        "Head" >>
        "armor"
    );
};


WTF_targetArmor =
getNumber (
    configFile >>
    "CfgVehicles" >>
    typeOf WTF_dummy >>
    "armor"
);


// Reset damage data

WTF_totalDamage = 0;

WTF_lastDamage = 0;

WTF_lastWeapon = "Waiting...";
WTF_lastProjectile = "Waiting...";
WTF_lastHitPoint = "Waiting...";
WTF_lastSelection = "Waiting...";


// Enable damage

WTF_dummy allowDamage true;


// Add damage handler

WTF_dummy addEventHandler [
    "HandleDamage",
    {
        _this call WTF_damageLogger;
    }
];


// Update display

[] call WTF_updateDisplay;
