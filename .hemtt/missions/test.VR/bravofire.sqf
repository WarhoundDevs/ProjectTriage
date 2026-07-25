_weapon = "ValkHalo_weapon_MA37";     //ValkHalo_AudioTest_Mag //ValkHalo_weapon_AudioTest
_mag = "ValkHalo_mag_Uni";
_firemode = "Single";


_units = [
    Test_25B,
    Test_100B,
    Test_300B,
    Test_600B,
    Test_1200B,
    Test_2400B,
    Test_4800B
];

{
    _x disableAI "PATH";

    _x disableAI "AUTOCOMBAT";
    _x disableAI "TARGET";
    _x disableAI "AUTOTARGET";
    _x disableAI "COVER";
    _x disableAI "SUPPRESSION";

    _x setUnitPos "UP";

    _x allowDamage false;

    _x allowFleeing 0;

} forEach _units;

{
    removeAllWeapons _x;
    removeAllMagazines _x;

    _x addMagazine _mag;
    _x addWeapon _weapon;
    _x selectWeapon _weapon;
} forEach _units;



sleep 1;

systemChat "Bravo, 25m";
Test_25B forceWeaponFire [_weapon, _firemode];

sleep 1.5;

systemChat "Bravo, 100m";
Test_100B forceWeaponFire [_weapon, _firemode];

sleep 1.5;

Test_300B forceWeaponFire [_weapon, _firemode];
sleep 0.8; 
systemChat "Bravo, 300m";

sleep 1.5;

Test_600B forceWeaponFire [_weapon, _firemode];
sleep 1.70;
systemChat "Bravo, 600m";


Test_1200B forceWeaponFire [_weapon, _firemode];
sleep 3.4;
systemChat "Bravo, 1200m";



Test_2400B forceWeaponFire [_weapon, _firemode];
sleep 7.5;
systemChat "Bravo, 2400m";


Test_4800B forceWeaponFire [_weapon, _firemode];
sleep 11.8;
systemChat "Bravo, 4800m";
