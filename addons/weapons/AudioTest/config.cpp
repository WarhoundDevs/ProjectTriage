
class CfgPatches
{
    class 22nd_weapons_AudioTest
    {
        addonRootClass = "22nd_weapons";
        author = "22nd Mod Team";

        requiredVersion = 0.1;

        requiredAddons[] =
        {
			"cba_main",
            "A3_Data_F",
            "A3_Weapons_F",
            "OPTRE_Weapons_AR",
			"OPTRE_Weapons",
			"22nd_weapons_MA37",
            "22nd_weapons"
        };

        units[] = {};
        weapons[] =
        {
            "22nd_weapon_AudioTest"
        };
    };
};


class 22nd_weapon_MA37
{
	class Single
	{
		class StandardSound;
		class SilencedSound;
	};
	class FullAuto
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
class CfgWeapons
{
	

	class 22nd_weapon_AudioTest : 22nd_weapon_MA37
	{
		scope = 0;
		arsenalscope =0;
		access=3;
		aimTransitionSpeed=1.0;
		author = "22nd Mod Team";
		displayName = "[22nd] AudioTest AR";
	    initSpeed=850;
		baseWeapon = "22nd_weapon_AudioTest";


		canShootInWater = 1;

		HUD_TotalPosibleBullet = 32;

		recoil = "22nd_recoil_AudioTest";
		recoilProne = "recoil_single_prone_mx";

		ACE_Overheating_mrbs = 300000;

		magazines[] =
		{
			"22nd_AudioTest_Mag",
			"22nd_mag_Uni"
		};
		magazineWell[] = {};
		modes[] =
		{
			"Single",
			"FullAuto",
			"close",
			"short",
			"medium",
			"far"
		};

		   class Single : Single
		{
			reloadTime = 0.095;
			dispersion = 0.001;

			minRange = 2;
			minRangeProbab = 0.5;

			midRange = 250;
			midRangeProbab = 0.7;

			maxRange = 450;
			maxRangeProbab = 0.3;
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect="DefaultRifle";
				closure1[]={};
				closure2[]={};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};

			class StandardSound : BaseSoundModeType
			{
				soundSetShot[] =
				{
					"22nd_AudioTest_Shot_SoundSet",
					"22nd_AudioTest_Tail_SoundSet"
				};
			};

			class SilencedSound : BaseSoundModeType
			{
				soundSetShot[] =
				{
					"22nd_Suppressed_AudioTest_Shot_SoundSet",
					"22nd_AudioTest_Tail_SoundSet"
				};
			};
		};

			class FullAuto : FullAuto
		{
			displayName = "Full Auto";

			reloadTime = 0.095;
			dispersion = 0.001;

			aiBurstTerminable = 1;

			minRange = 2;
			minRangeProbab = 0.5;

			midRange = 75;
			midRangeProbab = 0.7;

			maxRange = 150;
			maxRangeProbab = 0.05;

			aiRateOfFire = 2;
			aiRateOfFireDistance = 200;

			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect="DefaultRifle";
				closure1[]={};
				closure2[]={};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};

			class StandardSound : BaseSoundModeType
			{
				soundSetShot[] =
				{
					"22nd_AudioTest_Shot_SoundSet",
					"22nd_AudioTest_Tail_SoundSet"
				};
			};

			class SilencedSound : BaseSoundModeType
			{
				soundSetShot[] =
				{
					"22nd_Suppressed_AudioTest_Shot_SoundSet",
					"22nd_AudioTest_Tail_SoundSet"
				};
			};
		};
			class WeaponSlotsInfo : WeaponSlotsInfo
		{
			mass = 80;

			class MuzzleSlot : MuzzleSlot
			{
				compatibleItems[] =
				{
					"22nd_AudioTest_Suppressor"
				};
			};

			class CowsSlot : CowsSlot
			{
				compatibleItems[] =
				{
				};
			};
		};

		class OpticsModes
		{
			class sight
			{
				opticsID = 2;

				useModelOptics = 0;

				opticsPPEffects[] =
				{
					"OpticsCHAbera5",
					"OpticsBlur5"
				};

				opticsDisablePeripherialVision = 0.67;

				opticsZoomMin = 0.15;
				opticsZoomMax = 1.25;
				opticsZoomInit = 0.75;

				discreteInitIndex = 0;

				distanceZoomMin = 100;
				distanceZoomMax = 700;

				memoryPointCamera = "eye";

				visionMode[] = {};

				cameraDir = "";
			};
		};
	};
};




