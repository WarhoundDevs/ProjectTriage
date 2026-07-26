class CfgPatches
{
	class 22nd_weapons_M310
	{
		author="22nd Mod Team";
		addonRootClass="22nd_weapons";
		requiredAddons[]=
		{
			"cba_main",
			"A3_Data_F",
			"A3_Weapons_F",
			"OPTRE_Weapons_GL", 
			"22nd_M319_sounds",
			"22nd_weapons_M319",
			"22nd_weapons_ammo",
			"22nd_weapons_magazines"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"22nd_M310"
		};
	};
};


class cfgRecoils
{
	class recoil_M310
	{
		muzzleOuter[]={0,0.1,0,0};
		kickBack[]={0.0099999998,0.02};
		permanent=0;
		temporary=0.0099999998;
	};
};

class OPTRE_M319M
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

class cfgWeapons
{


	class 22nd_M310: OPTRE_M319M
	{
		displayName="[22nd] M310 UTIL";
		canShootInWater=1;
		baseweapon="22nd_weapon_M310";
		scope=2;
		ArsenalScope=2;
		ACE_Overheating_mrbs=300000;
		recoil="recoil_M310";
		recoilProne="recoil_M310";
		magazines[]=
		{
			
			"22nd_1Rnd_40mm_smokeF_Blue" //Default round
		};
		magazineWell[] = 
		{
			"40MM_M310" //found in magazines > GL > config
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
			mass=10;
		};
	};
};

