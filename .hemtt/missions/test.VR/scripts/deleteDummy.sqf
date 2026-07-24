/*
    Weapon Test Framework v0.2
    deleteDummy.sqf

    Removes current test dummy.
*/


if (isNull WTF_dummy) exitWith
{
    hint "No dummy exists.";
};


// Delete dummy

deleteVehicle WTF_dummy;


// Reset reference

WTF_dummy = objNull;


// Reset display variables

WTF_targetClass = "No Target";

WTF_targetVest = "None";

WTF_targetHelmet = "None";

WTF_targetArmor = 0;


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

WTF_healthRemaining = 100;

WTF_shotsFired = 0;

WTF_averageDamage = 0;

WTF_APPerformance = "Waiting...";

WTF_APEffectiveness = 0;


// Update display

[] call WTF_updateDisplay;


hint "Weapon Tester: Dummy deleted.";