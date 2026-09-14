/*
    Weapon Test Framework v0.2
    damageLogger.sqf
*/


params [
    "_unit",
    "_selection",
    "_damage",
    "_source",
    "_projectile"
];


// Only track dummy

if (_unit != WTF_dummy) exitWith {};


// Hit location

WTF_lastSelection = _selection;

WTF_lastHitPoint = _selection;


// Damage

WTF_lastDamage = _damage;

WTF_totalDamage = WTF_totalDamage + _damage;



// Shooter information

if (!isNull _source) then
{
    WTF_lastWeapon = currentWeapon _source;

    WTF_lastMagazine = currentMagazine _source;

    WTF_lastDistance =
        round (_source distance _unit);
}
else
{
    WTF_lastWeapon = "No Source";
    WTF_lastMagazine = "No Source";
};


// Projectile

if (!isNil "_projectile" && {_projectile != ""}) then
{
    WTF_lastProjectile = _projectile;


    private _ammoConfig =
    configFile >>
    "CfgAmmo" >>
    _projectile;


    if (isClass _ammoConfig) then
    {

        WTF_lastCaliber =
        getNumber (_ammoConfig >> "caliber");


        WTF_lastHitValue =
        getNumber (_ammoConfig >> "hit");

    };
};

// Magazine muzzle velocity

if (!isNull _source) then
{

    private _magazine = currentMagazine _source;


    if (_magazine != "") then
    {

        private _magConfig =
        configFile >>
        "CfgMagazines" >>
        _magazine;


        if (isClass _magConfig) then
        {

            WTF_lastVelocity =
            getNumber (_magConfig >> "initSpeed");

        };
    };
};

// AP Score calculation
// caliber x velocity / 100

WTF_APScore =
round
(
    (
        WTF_lastCaliber *
        WTF_lastVelocity
    )
    / 100
    * 100
)
/ 100;


// Health remaining

WTF_healthRemaining =
round (
    (1 - damage WTF_dummy) * 100
);


// Average damage per shot

if (WTF_shotsFired > 0) then
{
    WTF_averageDamage =
    round (
        (WTF_totalDamage / WTF_shotsFired)
        * 100
    )
    / 100;
};

// AP vs Armor calculation


private _highestArmor =
WTF_targetArmor;


if (WTF_targetVestArmor > _highestArmor) then
{
    _highestArmor = WTF_targetVestArmor;
};


if (WTF_targetHelmetArmor > _highestArmor) then
{
    _highestArmor = WTF_targetHelmetArmor;
};



// Avoid divide by zero

if (_highestArmor > 0) then
{

    WTF_APEffectiveness =
    round (
        (WTF_APScore / _highestArmor)
        * 100
    );


    if (WTF_APEffectiveness >= 125) then
    {
        WTF_APPerformance = "HIGH";
    }
    else
    {
        if (WTF_APEffectiveness >= 100) then
        {
            WTF_APPerformance = "MEDIUM";
        }
        else
        {
            WTF_APPerformance = "LOW";
        };
    };

}
else
{
    WTF_APEffectiveness = 100;
    WTF_APPerformance = "NO ARMOR";
};

// Return damage

_damage;

[] call WTF_updateDisplay;
