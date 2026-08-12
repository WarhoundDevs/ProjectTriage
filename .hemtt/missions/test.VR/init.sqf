

waitUntil {!isNull player};


// Global variables

WTF_dummy = objNull;

WTF_dummyClasses =
[
   "O_V_Soldier_LAT_hex_F",
    "OPTRE_FC_Elite_Major",
    "OPTRE_Ins_URF_Breacher",
    "URF_Soldier"
];


WTF_dummyIndex = 0;


WTF_dummyClass =
WTF_dummyClasses select WTF_dummyIndex;


// Damage data

WTF_lastDamage = 0;
WTF_totalDamage = 0;

WTF_lastWeapon = "Waiting...";
WTF_lastMagazine = "Waiting...";
WTF_lastProjectile = "Waiting...";

WTF_lastHitPoint = "Waiting...";
WTF_lastSelection = "Waiting...";

WTF_lastDistance = 0;

WTF_lastAmmo = "Waiting...";

WTF_lastCaliber = 0;

WTF_lastHitValue = 0;

WTF_lastVelocity = 0;

WTF_APScore = 0;

WTF_healthRemaining = 100;

WTF_shotsFired = 0;

WTF_averageDamage = 0;

WTF_APPerformance = "Waiting...";

WTF_APEffectiveness = 0; 

WTF_targetVestArmor = 0;

WTF_targetHelmetArmor = 0;

// Target data

WTF_targetClass = "No Target";

WTF_targetArmor = 0;
WTF_targetVest = "None";
WTF_targetHelmet = "None";


// Hitpoint tracking

WTF_hitPoints = [];
WTF_hitDamage = [];



// Compile scripts

WTF_updateDisplay = compile preprocessFileLineNumbers "scripts\updateDisplay.sqf";

WTF_collectHitData = compile preprocessFileLineNumbers "scripts\collectHitData.sqf";

WTF_damageLogger = compile preprocessFileLineNumbers "scripts\damageLogger.sqf";


// Actions

player addAction [
    "Spawn Test Dummy",
    {
        [] execVM "scripts\spawnDummy.sqf";
    }
];

player addAction [
    "Change Test Dummy",
    {

        WTF_dummyIndex =
        WTF_dummyIndex + 1;


        if (WTF_dummyIndex >= count WTF_dummyClasses) then
        {
            WTF_dummyIndex = 0;
        };


        WTF_dummyClass =
        WTF_dummyClasses select WTF_dummyIndex;


        hint format [
            "Test Dummy Changed:\n\n%1",
            WTF_dummyClass
        ];

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

player addEventHandler [
    "Fired",
    {
        if (!isNull WTF_dummy) then
        {
            WTF_shotsFired = WTF_shotsFired + 1;
        };
    }
];



// Start display

[] call WTF_updateDisplay;

