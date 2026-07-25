params [
    "_unit",
    "_selection",
    "_damage",
    "_source",
    "_projectile",
    "_hitPoint"
];


if (isNull _unit) exitWith {};


WTF_targetClass = typeOf _unit;

WTF_lastSelection = _selection;
WTF_lastHitPoint = _hitPoint;

WTF_lastDamage = _damage;

WTF_lastProjectile = _projectile;


if (!isNull _source) then {

    WTF_lastDistance = round (_source distance _unit);

    WTF_lastWeapon = currentWeapon _source;

    WTF_lastMagazine = currentMagazine _source;

};


WTF_totalDamage = WTF_totalDamage + _damage;


WTF_targetVest = vest _unit;

WTF_targetHelmet = headgear _unit;


WTF_targetArmor = getNumber (
    configFile >>
    "CfgVehicles" >>
    typeOf _unit >>
    "armor"
);


private _hitData = getAllHitPointsDamage _unit;


if ((count _hitData) > 0) then {

    WTF_hitPoints = _hitData select 0;

    WTF_hitDamage = _hitData select 2;

};


[] call WTF_updateHUD;