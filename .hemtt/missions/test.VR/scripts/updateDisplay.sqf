/*
    Updates weapon tester display
*/

private _text = format [

"
TARGET

%1

DIST:
%2 m

HITPOINT:
%3

Selection:
%4

Health:
%5%%

BodyArmor:
%6

Vest Armor:
%7

Helmet Armor:
%8

DMG:
%9

TOTAL DMG:
%10

================================================

WEP:
%11

MAG:
%12

AMMO:
%13

================================================

CFG Caliber:
%14

CFG Hit:
%15

VEL:
%16 m/s






Shots Fired:
%17

AVG DMG:
%18

AP Score:
%19


AP Performance:
%20

AP Effectivness:
%21%%

",

WTF_targetClass,
WTF_lastDistance,
WTF_lastHitPoint,
WTF_lastSelection,

WTF_healthRemaining,
WTF_targetArmor,
WTF_targetVestArmor,
WTF_targetHelmetArmor,

WTF_lastDamage,
WTF_totalDamage,

WTF_lastWeapon,
WTF_lastMagazine,
WTF_lastProjectile,

WTF_lastCaliber,
WTF_lastHitValue,
WTF_lastVelocity,


WTF_shotsFired,
WTF_averageDamage,
WTF_APScore,
WTF_APPerformance,
WTF_APEffectiveness

];


hintSilent _text;