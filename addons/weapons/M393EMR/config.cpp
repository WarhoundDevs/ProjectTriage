class CfgPatches
{
	class 22nd_weapons_M393
	{
		author="Valkyrie";
		addonRootClass="22nd_weapons";
		requiredAddons[]=
		{
			"cba_main",
			"A3_Data_F",
			"A3_Weapons_F",
			"OPTRE_Weapons_DMR",
			"22nd_M393_sounds",
			"22nd_weapons_ammo",
			"22nd_weapons_magazines"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"22nd_M393"
		};
	};
};


class cfgRecoils
{
	class 22nd_recoil_M393
	{
		muzzleOuter[] = {0.1,2.5,0.6,0.5};
		muzzleInner[] = {0,0,0.1,0.1};
		kickBack[] = {0.084,0.112};
		permanent=0;
		temporary = 0.03;
	};
};

class OPTRE_M393_DMR
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


	class 22nd_M393: OPTRE_M393_DMR
	{
		displayName="[22nd] M393 EMR";
		descriptionShort = "M393 EMR 10.2x74mm <br /> Harder hitting sibling of the DMR, lack spotting capabilites and ammo efficiency of the DMR but outranges it";
		canShootInWater=1;
		baseweapon="22nd_weapon_M393";
		scope=2;
		ArsenalScope=2;
		dexterity = 1.2;
		inertia = 0.7;
		HUD_TotalPosibleBullet=15;
		ACE_Overheating_mrbs=300000;
		recoil="22nd_recoil_M393";
		recoilProne="22nd_recoil_M393";
		magazines[]=
		{
			
			"22nd_15nd_114x90_FMJ"
		};
		magazineWell[] = {};

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
					"22nd_M393_Shot_SoundSet",
					"DMR02_tail_SoundSet",
					"DMR02_InteriorTail_SoundSet"
				};
			};
			multiplier=1;
			recoil="22nd_recoil_M393";
			recoilProne="22nd_recoil_M393";
			reloadTime=0.20;
			dispersion=0.0002181662;
			minRange=2;
			minRangeProbab=0.5;
			midRange=250;
			midRangeProbab=0.69999999;
			maxRange=450;
			maxRangeProbab=0.30000001;
		};

		
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			
			class CowsSlot: CowsSlot
			{
				compatibleItems[]=
				{
					"OPTRE_SRM_Sight",
					"OPTRE_BMR_Scope",
					"OPTRE_M393_Scope",
					"OPTRE_BR45_Scope",
					"OPTRE_BR55HB_Scope",
					"optic_NVS",
					"optre_m12_optic",
					"optre_m392_scope",
					"optic_AMS",
				};
			};
			mass=95;
		};
	};
};

