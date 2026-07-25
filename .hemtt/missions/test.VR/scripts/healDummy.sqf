

// Check dummy exists

if (isNull WTF_dummy) exitWith
{
    hint "No dummy exists.";
};


// Save position

private _pos = getPosATL WTF_dummy;

private _dir = getDir WTF_dummy;


// Delete old dummy

deleteVehicle WTF_dummy;

sleep 0.2;


// Spawn fresh dummy

WTF_dummy = createAgent [
    WTF_dummyClass,
    _pos,
    [],
    0,
    "NONE"
];


// Restore facing direction

WTF_dummy setDir _dir;



// Make passive

WTF_dummy disableAI "TARGET";
WTF_dummy disableAI "AUTOTARGET";
WTF_dummy disableAI "FSM";

WTF_dummy setBehaviour "CARELESS";
WTF_dummy setCombatMode "BLUE";

WTF_dummy forceSpeed 0;



// Gather target information again

WTF_targetClass = typeOf WTF_dummy;

WTF_targetVest = vest WTF_dummy;

WTF_targetHelmet = headgear WTF_dummy;


WTF_targetArmor =
getNumber (
    configFile >>
    "CfgVehicles" >>
    typeOf WTF_dummy >>
    "armor"
);



// Reset data

WTF_totalDamage = 0;

WTF_lastDamage = 0;

WTF_lastWeapon = "Waiting...";

WTF_lastMagazine = "Waiting...";

WTF_lastProjectile = "Waiting...";

WTF_lastCaliber = 0;

WTF_lastHitValue = 0;

WTF_lastVelocity = 0;

WTF_APScore = 0;

WTF_lastHitPoint = "Waiting...";

WTF_lastSelection = "Waiting...";

WTF_lastDistance = 0;


WTF_hitPoints = [];

WTF_hitDamage = [];

WTF_healthRemaining = 100;

WTF_shotsFired = 0;

WTF_averageDamage = 0;

WTF_APPerformance = "Waiting...";

WTF_APEffectiveness = 0;



// Reattach damage handler

WTF_dummy addEventHandler [
    "HandleDamage",
    {
        _this call WTF_damageLogger;
    }
];



// Update display

[] call WTF_updateDisplay;


hint "Weapon Tester: Dummy reset.";