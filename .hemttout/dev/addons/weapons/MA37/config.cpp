
class CfgPatches
{
    class 22nd_weapons_MA37
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
            "22nd_weapons"
        };

        units[] = {};
        weapons[] =
        {
            "22nd_MA37",
			"22nd_MA37ICWS",
            "22nd_MA37GL",
			"22nd_MA37GL_ICWS",
            "22nd_MA37_Suppressor"
        };
    };
};

class CfgRecoils
{
    class 22nd_recoil_MA37
    {
        muzzleOuter[] = {0.06, 1, 0.4, 0.3};
        muzzleInner[] = {0, 0, 0.1, 0.1};
        kickBack[] = {0.028, 0.056};

        permanent = 0;
        temporary = 0.012;
    };
};
class UGL_F
{
	class single
	{
		class StandardSound;
	};
};

class OPTRE_MA37B
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
	

	class 22nd_MA37 : OPTRE_MA37B
	{
		scope = 2;
		descriptionShort = "MA37 7.62x51mm Service Rifle w/ integrated smart link optic <br /> Old faithful, jack of all trades";
		arsenalscope =2;
		access=3;
		aimTransitionSpeed=1.0;
		displayName = "[22nd] MA37 AR";
	    initSpeed=850;
		baseWeapon = "22nd_MA37";


		canShootInWater = 1;

		HUD_TotalPosibleBullet = 32;

		recoil = "22nd_recoil_MA37";
		recoilProne = "recoil_single_prone_mx";

		ACE_Overheating_mrbs = 300000;

		magazines[] =
		{
			"22nd_32nd_762x51_FMJ"
			// "22nd_mag_Uni_Tracer"
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
			reloadTime = 0.1;
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
					"22nd_MA37_Shot_SoundSet",
					"22nd_tail_SoundSet"
				};
			};

			class SilencedSound : BaseSoundModeType
			{
				soundSetShot[] =
				{
					"22nd_Suppressed_MA37_Shot_SoundSet",
					"22nd_MA37_Tail_SoundSet"
				};
			};
		};

			class FullAuto : FullAuto
		{
			displayName = "Full Auto";

			reloadTime = 0.1;
			dispersion = 0.001;

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
					"22nd_MA37_Shot_SoundSet",
					"22nd_tail_SoundSet"
				};
			};

			class SilencedSound : BaseSoundModeType
			{
				soundSetShot[] =
				{
					"22nd_Suppressed_MA37_Shot_SoundSet",
					"22nd_tail_SoundSet"
				};
			};
		};

		class LinkedItems 
		{
            class LinkedItemsOptic 
			{
                slot = "CowsSlot"; // Standard top rail/optic slot name
                item = "22nd_MA37_Smartlink_Scope"; // Class name of the optic you want integrated
            };
	    };


			class WeaponSlotsInfo : WeaponSlotsInfo
		{
			mass = 80;

			class MuzzleSlot : MuzzleSlot
			{
				compatibleItems[] =
				{
					"22nd_MA37_Suppressor"
				};
			};

			class CowsSlot : CowsSlot
			{
				compatibleItems[] =
				{
					"22nd_MA37_Smartlink_Scope"
				};
			};
			
		};
	};

	class 22nd_MA37ICWS : 22nd_MA37
	{
		scope = 2;
		aimTransitionSpeed=1.0;

		displayName = "[VK] MA37 ICWS";
		descriptionShort = "MA37 7.62x51mm Service Rifle w/ ICWS rail <br /> Old faithful, jack of all trades";
	    initSpeed=850;
		baseWeapon = "22nd_MA37ICWS";
		canShootInWater = 1;
		model="\OPTRE_Weapons\AR\MA37I.p3d";
		picture="\OPTRE_weapons\ar\icons\ma32b_icon.paa";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo_irons"
		};
		hiddenSelectionsTextures[]=
		{
			"optre_weapons\ar\data\ma37b_co.paa",
			"optre_weapons\ar\data\ma37b_cover_co.paa",
			"optre_weapons\ar\data\ironsights_co.paa"
		};

		HUD_TotalPosibleBullet = 32;

		
			class WeaponSlotsInfo : WeaponSlotsInfo
		{
			mass = 80;

			class CowsSlot : CowsSlot
			{
				compatibleItems[] =
				{
					"optic_aco",
					"optic_mrco",
					"optre_ma5_buis",
					"22nd_MA37_Smartlink_Scope",
					"optre_m7_sight",
					"optre_m12_optic",
					"optre_m392_scope",
					"optre_m393_acog",
					"optre_m393_eotech",
					"optre_m393_scope"
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



	class 22nd_MA37GL : 22nd_MA37
	{
		displayName = "[22nd] MA37 UGL";
		descriptionShort = "MA37 7.62x51mm Service Rifle w/ M302 and Integrated optics <br /> Old faithful, jack of all trades, M302 GL for grenadiers";
		access=3;
		baseWeapon = "22nd_MA37GL";

		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\OPTRE_Weapons\AR\data\anim\hand_anim_ma37.rtm",
			"Spartan_ManSkeleton",
			"\OPTRE_MJOLNIR\data\anims\OPTRE_anims\Weapons\hand_anim_ma37_Spartan.rtm"
		};
		model="\OPTRE_Weapons\AR\MA37GL.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3",
			"camo_reticle"
		};
		hiddenSelectionsTextures[]=
		{
			"optre_weapons\ar\data\ma37b_co.paa",
			"optre_weapons\ar\data\ammocounter37b_co.paa",
			"optre_weapons\ar\data\smartlink_co.paa",
			"optre_weapons\ar\data\cover_co.paa",
			"optre_weapons\ar\data\r_ar_ca.paa"
		};

		picture 			= "\OPTRE_weapons\ar\icons\ma37gl_icon.paa";
		pictureWire 		= "\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Prime\AssaultRifle\37_UGL.paa";
		pictureMjolnirHud   = "\OPTRE_Suit_Scripts\textures\weaponIcons\AssaultRifles\MA37GL_icon.paa";


		muzzles[] =
		{
			"This",
			"22nd_M301UGL"
		};

		class 22nd_M301UGL : UGL_F
		{
			displayName = "[VK] M301 Grenade Launcher";
			descriptionShort = "M301 GL";

			cursor = "EmptyCursor";
			cursorAim = "OPTRE_GRNDLNCH";

			useModelOptics = 0;
			useExternalOptic = 0;

			cameraDir = "OP_look";
			magazines[]=
				{
			
					"22nd_1Rnd_40mm_HE_FRAG" //Default round
				};
				magazineWell[] = 
				{
					"40MM_M302" //found in magazines > GL > config
				};
			discreteDistance[] =
			{
				100,
				200,
				300
			};

			discreteDistanceCameraPoint[] =
			{
				"OP_eye",
				"OP_eye2",
				"OP_eye3"
			};
			class Single: Single
		    {
				burst=1;
				sounds[]=
				{
					"StandardSound",
					"SilencedSound"
				};
				class StandardSound: StandardSound
				{
					soundSetShot[]=
					{
						"22nd_M319_Shot_SoundSet",
						"22nd_tail_Launcher_SoundSet"
					};
				};

				discreteDistanceInitIndex = 0;

				reloadAction = "GestureReloadMXUGL";

				
			};
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			mass = 80;

			class MuzzleSlot : MuzzleSlot
			{
				compatibleItems[] =
				{
					"22nd_MA37_Suppressor"
				};
			};
			
			class CowsSlot : CowsSlot
			{
				compatibleItems[] =
				{
					"OPTRE_MA37_Smartlink_Scope"
				};
			};
		};
	};


	class 22nd_MA37GL_ICWS : 22nd_MA37GL
	{
		displayName = "[VK] MA37 ICWS UGL";
		descriptionShort = "MA37 7.62x51mm Service Rifle w/ M302 and ICWS <br /> Old faithful, jack of all trades, M302 GL for grenadiers";
		access=3;
		baseWeapon = "22nd_MA37GL_ICWS";
		model="\OPTRE_Weapons\AR\MA37IGL.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3",
			"camo_irons"
		};
		hiddenSelectionsTextures[]=
		{
			"optre_weapons\ar\data\ma37b_co.paa",
			"optre_weapons\ar\data\ma37b_cover_co.paa",
			"optre_weapons\ar\data\smartlink_co.paa",
			"optre_weapons\ar\data\cover_co.paa",
			"optre_weapons\ar\data\ironsights_co.paa"
		};
		cursor="OPTRE_MA37";
		picture="\OPTRE_weapons\ar\icons\ma32bgl_icon.paa";
		pictureWire 		= "\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Prime\AssaultRifle\37_UGL.paa";
		pictureMjolnirHud   = "\OPTRE_Suit_Scripts\textures\weaponIcons\AssaultRifles\MA37GL_icon.paa";



		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			mass = 80;

			class MuzzleSlot : MuzzleSlot
			{
				compatibleItems[] =
				{
					"22nd_MA37_Suppressor"
				};
			};

			class CowsSlot : CowsSlot
			{
				compatibleItems[] =
				{
					"optic_aco",
					"optic_mrco",
					"optre_ma5_buis",
					"optre_ma5_smartlink",
					"optre_m7_sight",
					"optre_m12_optic",
					"optre_m392_scope",
					"optre_m393_acog",
					"optre_m393_eotech",
					"optre_m393_scope"
				};
			};
			
		};
	};



	//##############################################################ATTACHMENTS##################################################################
	
	
	class InventoryMuzzleItem_Base_F;
	class ace_muzzle_mzls_b;
	class 22nd_MA37_Suppressor: ace_muzzle_mzls_b
	{
		scope = 2;
		displayName = "MA37 Suppressor";
		
		model = "\A3\weapons_f\acc\acca_mzls_H_F";
		picture = "\A3\weapons_F\Data\UI\gear_acca_mzls_h_ca.paa";
		class ItemInfo: InventoryMuzzleItem_Base_F
		{	
		    picture = "\A3\weapons_F\Data\UI\gear_acca_mzls_h_ca.paa";
			soundTypeIndex = 1; // index of sound in sounds[] in weapon modes (inherited 1 from parent class) READ DIS, DIS BE COOL
			mass=1;
			class MagazineCoef
			{
				initSpeed = 0.625;
			};

			class AmmoCoef
			{
				hit = 1;
				visibleFire = 0.25;
				audibleFire = 0.25;
				visibleFireTime = 1;
				audibleFireTime = 1.0;
				cost = 1.0;
				typicalSpeed = 1;
				airFriction = 1.0;
			}; 
			model = "\A3\weapons_f\acc\acca_mzls_H_F";
			muzzleEnd = "zaslehPoint";		// memory point in muzzle supressor's model
			alternativeFire = "Zasleh2";	// class in cfgWeapons with model of muzzle flash	
	
			class MuzzleCoef
			{
				dispersionCoef = 1.0;
				artilleryDispersionCoef = 1.0;

				fireLightCoef = 0.1;

				recoilCoef = 1.0;
				recoilProneCoef = 1.0;

				minRangeCoef = 1.0; minRangeProbabCoef = 1.0;
				midRangeCoef = 1.0; midRangeProbabCoef = 1.0;
				maxRangeCoef = 1.0; maxRangeProbabCoef = 1.0;
			};
		};
	};
};


