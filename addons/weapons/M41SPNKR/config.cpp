class CfgPatches
{
	class 22nd_weapons_M41SPNKR
	{
		author="Valkyrie";
		addonRootClass="22nd_weapons";
		requiredAddons[]=
		{
			"cba_main",
			"A3_Data_F",
			"A3_Weapons_F",
			"OPTRE_Weapons_Rockets",
			"SAG6_SPNKR",
			"OPTRE_ACE_Compat",
			"22nd_weapons_ammo",
			"22nd_weapons_magazines"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"22nd_M41SPNKR",
		};
	};
};


class cfgRecoils
{
	class recoil_M41SPNKR
	{
		muzzleOuter[] = {0.02,0.2,0.3,0.5};
		kickBack[] = {0,0.07};
		permanent=0;
		temporary = 0.18;
	};
};

class OPTRE_M41_SSR
{
	class Single
	{
		class StandardSound;
		class SilencedSound;
	};
	class WeaponSlotsInfo
	{
		class MuzzleSlot;
		class CowsSlot;
		class PointerSlot;
		class UnderBarrelSlot;
	};
};

class cfgWeapons
{
	class 22nd_M41SPNKR: OPTRE_M41_SSR
	{
		author = "22nd Mod Team + OPTRE";
		displayName="[22nd] M41SPNKR";
		canShootInWater=1;
		baseweapon="22nd_M41SPNKR";
		ace_overpressure_angle = 30;
		ace_overpressure_range = 8;
		ace_overpressure_damage = 0.6;
		weaponLockDelay = 1;
		scope=2;
		ArsenalScope=2;
		HUD_TotalPosibleBullet=2;
		ACE_Overheating_mrbs=300000;
		recoil="recoil_M41SPNKR";
		recoilProne="recoil_M41SPNKR";
		ace_reloadlaunchers_enabled = 1;
		magazines[]=
		{
			
			"22nd_2rnd_HEAT_SACLOS",
			"22nd_2rnd_AA_IR"
		};
		magazineWell[] = {};

		class Single: Single
		{
			burst=1;
			displayName="Full Auto";
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class StandardSound: StandardSound
			{
				soundSetShot[]=
				{
					"22nd_M41SPNKR_Shot_SoundSet",
					"Launcher_Titan_Tail_SoundSet"
				};
			};
			multiplier=1;
			recoil="recoil_single_primary_2outof10";
			recoilProne="recoil_single_primary_2outof10";
			reloadTime=0.20;
			dispersion=0.00050000002;
			minRange=2;
			minRangeProbab=0.5;
			midRange=250;
			midRangeProbab=0.69999999;
			maxRange=450;
			maxRangeProbab=0.30000001;
		};

		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=100;
		};
	};
};

class cfgAmmo
{
	class OPTRE_M41_Rocket_HEAT_G;
	class ammo_Penetrator_Vorona;
	class M_Titan_AA;

	class 22nd_M41SPNKR_HEAT_Penetrator: ammo_Penetrator_Vorona
	{
		caliber = 60; //29 Goes through scorpion turret
		ace_vehicle_damage_incendiary = 1;

		warheadName="HEAT";
		hit = 800;
	};

	class 22nd_R_HEAT_SACLOS: OPTRE_M41_Rocket_HEAT_G 
	{
			
			model = "\OPTRE_Weapons\Rockets\M41_rocket.p3d";
			warheadName ="TandemHEAT";
			ace_vehicle_damage_incendiary = 1;
			submunitionAmmo = "ammo_Penetrator_Vorona";
			effectsMissile = "missile2";
			effectsMissileInit = "RocketBackEffectsRPG";
			aiAmmoUsageFlags = "128 + 256 + 512"; //Vehicles, Aircraft, Armor
			lockType = 1; //Beam-riding
			airLock = 0;
			irLock = 1;
			laserLock = 0;
			nvLock = 0;
			ace_frag_skip = 0;
			ace_frag_classes[] = {"ace_frag_medium","ace_frag_medium_HD"};
			ace_frag_charge = 1040;
			ace_frag_gurney_c = 2700;
			ace_frag_gurney_k = 0.5;
			ace_frag_metal = 3850;
			ace_frag_force = 1;

			hit = 50;
			indirectHit = 25;
			indirectHitRange = 6;

			cmImmunity = 1; //was 0.75
			weaponLockSystem = "1 + 2 + 16";
			manualControl = 1;
			missileLockMinDistance = 15;
			missileLockMaxDistance = 5000;
			maneuvrability = 16;
			trackLead = 0;
			missileLockCone = 30;
			missileKeepLockedCone = 120;
			missileManualControlCone = 180;
			maxControlRange = 5000;
			flightProfiles[] = {"Direct"};

			// class Direct
			// {
			// };
	};

	class 22nd_R_AA_IR: M_Titan_AA 
	{
			
			model = "\OPTRE_Weapons\Rockets\M41_rocket.p3d";
			ace_vehicle_damage_incendiary = 1;
			effectsMissile = "missile4";
			effectsMissileInit = "RocketBackEffectsRPG";

			airLock = 1;
			irLock = 1;
			laserLock = 0;
			nvLock = 0;
			// ace_frag_skip = 0;
			// ace_frag_classes[] = {"ace_frag_medium","ace_frag_medium_HD"};
			// ace_frag_charge = 1040;
			// ace_frag_gurney_c = 2700;
			// ace_frag_gurney_k = 0.5;
			// ace_frag_metal = 3850;
			// ace_frag_force = 1;
			caliber = 2;
			hit = 450;
			indirectHit = 100;
			indirectHitRange = 6;
			thrust = 600;
			thrustTime = 5;
			cmImmunity = 0.92;
			weaponLockSystem = "2 + 16";
			missileLockMinDistance = 15;
			missileLockMaxDistance = 5000;
			maneuvrability = 20;
			trackLead = 1;
			missileLockCone = 30;
			missileKeepLockedCone = 180;
			maxControlRange = 5000;
	};
};
