class CfgPatches
{
	class 22nd_weapons_M44
	{
		author="22nd Mod Team";
		addonRootClass="22nd_weapons";
		requiredAddons[]=
		{
			"cba_main",
			"A3_Data_F",
			"A3_Weapons_F",
			"ace_nlaw",
			"OPTRE_Weapons_GL", 
			"22nd_M319_sounds",
			"22nd_weapons_ammo",
			"22nd_weapons_magazines"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"22nd_M44",
			"22nd_M44_ready",
			"22nd_M44_used"
		};
	};
};

#include "\z\22ndRDF\addons\main\script_macros.hpp"

class OPTRE_M44_Lykoi_Semi_Disposable_AT
{
	class Single
	{
		class StandardSound;
	};
	class WeaponSlotsInfo
	{
		class MuzzleSlot;
		class CowsSlot;
		class PointerSlot;
		class UnderBarrelSlot;
	};
};


class CBA_DisposableLaunchers 
{
    22nd_M44_ready[] = {"22nd_M44","22nd_M44_used"};
};


class cfgWeapons
{


	class 22nd_M44: OPTRE_M44_Lykoi_Semi_Disposable_AT
	{
		author="22nd Mod Team";
		displayName="[22nd] M44 LAT";
		canShootInWater=1;
		baseweapon="22nd_M44";
		scope=2;
		magazineReloadTime = 0.1;
		magazineReloadSwitchPhase = 0.1;
		ArsenalScope=2;
		ace_overpressure_angle = 60;
		ace_overpressure_range = 2;
		ace_overpressure_damage = 0.5;
		magazines[]=
		{
			
			"CBA_FakeLauncherMagazine" //Default round
		};
		GVAR(enabled) = 1;
        canLock = 1;
		magazineWell[] = {};
		// lockAcquire=1;
		// weaponlockdelay=0.5;
		// weaponlocksystem=2;
		// canLock=2;
		// cmImmunity=0.69999999;
		// ace_overpressure_priority=1;
		// ace_overpressure_angle=20;
		// ace_overpressure_range=2;
		// ace_overpressure_damage=0.25;
		// ace_overpressure_offset=1;
		
		class Single: Single
		{
			 dispersion = 0.0001;
			 sounds[]=
			{
				"StandardSound"
			};
			class StandardSound: StandardSound
			{
				soundSetShot[]=
				{
					"22nd_M44_Shot_SoundSet",
					"Launcher_RPG7_Tail_SoundSet"
				};
			};
		};
		class OpticsModes
		{
			class iron
			{
				cameraDir="eye_iron";
				discreteDistance[]={100};
				discreteDistanceCameraPoint[]=
				{
					"eye_200"
				};
				discreteDistanceInitIndex=0;
				distanceZoomMax=500;
				distanceZoomMin=200;
				opticsDisablePeripherialVision=0;
				opticsFlare=0;
				opticsID=1;
				opticsPPEffects[]={};
				opticsZoomInit=0.75;
				opticsZoomMax=1.25;
				opticsZoomMin=0.1;
				useModelOptics=0;
				visionMode[]={};
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			// class PointerSlot: PointerSlot
			// {
			// 	compatibleItems[]=
			// 	{
			// 		"OPTRE_BMR_Laser",
			// 		"OPTRE_M12_Laser",
			// 		"OPTRE_M45_Flashlight"
			// 	};
			// };
			mass=40;
		};
	};

	class 22nd_M44_ready: 22nd_M44 
	{ 
        scope = 1;
        scopeArsenal = 1;
        baseWeapon = "22nd_M44";
        magazines[]=
		{
			"22nd_1_rnd_Disposable_Mag"
		};
        // magazineWell[] = {"NLAW"} ;  restore magwell
		class OpticsModes
		{
			class iron
			{
				cameraDir="eye_iron";
				discreteDistance[]={100};
				discreteDistanceCameraPoint[]=
				{
					"eye_200"
				};
				discreteDistanceInitIndex=0;
				distanceZoomMax=500;
				distanceZoomMin=100;
				opticsDisablePeripherialVision=0;
				opticsFlare=0;
				opticsID=1;
				opticsPPEffects[]={};
				opticsZoomInit=0.75;
				opticsZoomMax=1.25;
				opticsZoomMin=0.1;
				useModelOptics=0;
				visionMode[]={};
			};
		};
        class EventHandlers 
		{
            fired = "call CBA_fnc_firedDisposable"; // this weapon eventhandler is required!
        };

        class WeaponSlotsInfo: WeaponSlotsInfo 
		{
            mass = 100;
        };
    };

    class 22nd_M44_used: 22nd_M44 
	{
        scope = 1;
        scopeArsenal = 1;
        baseWeapon = "22nd_M44";

        // displayName = CSTRING(UsedTube);
        // descriptionShort = CSTRING(UsedTubeDescription);
        weaponPoolAvailable = 0;

        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 100;
        };
    };




};

class ace_missileguidance_type_Nlaw;
class CfgMagazines 
{
    class OPTRE_M44_Lykoi_HEAT_mag;
    class 22nd_1_rnd_Disposable_Mag: OPTRE_M44_Lykoi_HEAT_mag 
	{
		ammo="22nd_M44_HEAT";
        scope = 2;
		initSpeed = 250;
        displayName = "AT Rocket";
        weight = 50;
    };
};

class CfgAmmo
{
	class M_NLAW_AT_F;
	class 22nd_M44_HEAT: M_NLAW_AT_F
	{

		allowAgainstInfantry=1;
		submunitionAmmo="22nd_M44_Lykoi_Penetrator";
		triggerOnImpact = 1; // The shaped charge only points downwards, so don't fire it in DA mode
		initTime = 0;
        maxSpeed = 750;
		coefGravity = 0;
		flightProfiles[] = {};
		hit = 50;
		sideairFriction = 0;
		airFriction = 0.09;
		indirectHit = 25;
		indirectHitRange = 4;
		ace_frag_skip = 0;
		ace_frag_classes[] = {"ace_frag_medium","ace_frag_medium_HD"};
		ace_frag_charge = 1040;
		ace_frag_gurney_c = 2700;
		ace_frag_gurney_k = 0.5;
		ace_frag_metal = 3850;
		ace_frag_force = 1;
        typicalSpeed =  750;
	    fuseDistance = 4;


        thrust = 700; // 400 * 0.5 == 200 - swift acceleration to expected speed
        thrustTime = 2;
        timeToLive = 1.5;
        warheadName = "HE";
	};
	class ammo_Penetrator_NLAW;
	class 22nd_M44_Lykoi_Penetrator: ammo_Penetrator_NLAW
	{
		caliber=20; //29 Goes through scorpion turret
		ace_vehicle_damage_incendiary = 1;
		warheadName="HEAT";
		hit = 525;
	};
};

class CfgVehicles 
{
    class Launcher_Base_F;
    class Weapon_22nd_M44: Launcher_Base_F 
	{
        class TransportMagazines 
		{
            delete OPTRE_M44_Lykoi_HEAT_mag;
        };
    };
};
