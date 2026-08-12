
_weapon = "22nd_M247A1";     //22nd_AudioTest_Mag //22ndd_weapon_AudioTest
_mag = "22nd_125rnd_762x51_FMJ";
_firemode = "FullAuto";


_units = [
    Test_25A,
    Test_100A,
    Test_300A,
    Test_600A,
    Test_1200A,
    Test_2400A,
    Test_4800A
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

systemChat "Alpha, 25m";
Test_25A forceWeaponFire [_weapon, _firemode];

sleep 1.5;

systemChat "Alpha, 100m";
Test_100A forceWeaponFire [_weapon, _firemode];

sleep 1.5;

Test_300A forceWeaponFire [_weapon, _firemode];
sleep 0.8; 
systemChat "Alpha, 300m";

sleep 1.5;

Test_600A forceWeaponFire [_weapon, _firemode];
sleep 1.70;
systemChat "Alpha, 600m";


Test_1200A forceWeaponFire [_weapon, _firemode];
sleep 3.4;
systemChat "Alpha, 1200m";



Test_2400A forceWeaponFire [_weapon, _firemode];
sleep 7.5;
systemChat "Alpha, 2400m";


Test_4800A forceWeaponFire [_weapon, _firemode];
sleep 11.8;
systemChat "Alpha, 4800m";


