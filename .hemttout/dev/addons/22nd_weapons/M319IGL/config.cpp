class CfgPatches
{
	class 22nd_weapons_M319
	{
		author="Valkyrie";
		addonRootClass="22nd_weapons";
		requiredAddons[]=
		{
			"cba_main",
			"A3_Data_F",
			"A3_Weapons_F",
			"OPTRE_Weapons_GL", 
			"22nd_M319_sounds",
			"22nd_ammo",
			"22nd_magazines"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"22nd_M319",
			"22nd_M319N"
		};
	};
};


class cfgRecoils
{
	class recoil_M319
	{
		muzzleOuter[]={0,0.1,0,0};
		kickBack[]={0.0099999998,0.02};
		permanent=0;
		temporary=0.0099999998;
	};
};

class OPTRE_M319
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


	class 22nd_M319: OPTRE_M319
	{
		displayName="[22nd] M319 IGL";
		canShootInWater=1;
		baseweapon="22nd_M319";
		scope=2;
		ArsenalScope=2;
		HUD_TotalPosibleBullet=100;
		ACE_Overheating_mrbs=300000;
		recoil="recoil_M319";
		recoilProne="recoil_M319";
		magazines[]=
		{
			
			"22nd_1Rnd_40mm_HE_FRAG" //Default round
		};
		magazineWell[] = 
		{
			"40MM_M319" //found in magazines > GL > config
		};

		modes[]=
		{
			"Single",
			"close",
			"short",
			"medium",
			"far"
		};
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
					"22nd_M319_Shot_SoundSet",
					"22nd_tail_Launcher_SoundSet"
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
			class PointerSlot: PointerSlot
			{
				compatibleItems[]=
				{
					"OPTRE_BMR_Laser",
					"OPTRE_M12_Laser",
					"OPTRE_M45_Flashlight"
				};
			};
			mass=40;
		};
	};

	class 22nd_M319N : 22nd_M319
	{
		scope = 2;
		scopeArsenal = 2;
        model= "\OPTRE_Weapons\GL\M319N.p3d";
        displayName= "[22nd] M319N IGL";
        descriptionShort= "Grenade Launcher";
		baseWeapon=  "22nd_M319N";
		picture = "\OPTRE_Weapons\gl\icons\m319n_icon.paa";
        handAnim[] =
        {
        	"OFP2_ManSkeleton", "\OPTRE_Weapons\gl\data\anim\OPTRE_Handanim_M319N.rtm",
        	"Spartan_ManSkeleton", "\OPTRE_MJOLNIR\data\anims\OPTRE_anims\Weapons\m319n_Spartan_HandAnim.rtm"
        };
		hiddenSelections[] = {
			"camoBody", //optre_weapons\gl\data\gl_co.paa
			"camoLogo", //optre_weapons\gl\data\logos_ca.paa
			"camosight", 
			"camoreticle",
			"camoScope" //optre_weapons\gl\data\scope_co.paa
		};
		hiddenSelectionsTextures[] = {
			"optre_weapons\gl\data\gl_co.paa",
			"optre_weapons\gl\data\logos_ca.paa",
			"optre_weapons\br\data\gl\sight_co.paa",
			"optre_weapons\br\data\gl\ubgl_reticle.paa",
			"optre_weapons\gl\data\scope_co.paa"
		};
    };

};

