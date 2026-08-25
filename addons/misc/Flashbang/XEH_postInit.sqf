["RDF22_flashbangRoundExploded", {
    params ["_posASL"];
    playSound3D ["A3\Sounds_F\arsenal\explosives\grenades\Explosion_HE_grenade_01.wss", objNull, false, _posASL, 5, 1.2, 400];
}] call CBA_fnc_addEventHandler;

["ace_firedPlayer", {
    params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile"];

    if (_ammo != "22nd_B_8g_Flash") exitWith {};

    [_projectile] spawn {
        params ["_projectile"];
        sleep 0.75;
        if (isNull _projectile) exitWith {};

        private _posASL = getPosASL _projectile;
        ["RDF22_flashbangRoundExploded", [_posASL]] call CBA_fnc_globalEvent;
        ["ace_flashbangExploded", [_posASL]] call CBA_fnc_globalEvent;
    };
}] call CBA_fnc_addEventHandler;
