class CfgPatches
{
	class 22nd_weapons_M250
	{
		author="22nd Mod Team";
		addonRootClass="22nd_weapons";
		requiredAddons[]=
		{
			"cba_main",
			"A3_Data_F",
			"A3_Weapons_F",
			"OPTRE_Weapons_MG",
			"OPTRE_Weapons_MG_M73",
			"OPTRE_Weapons_MG_M247",
			"OPTRE_Weapons_MG_M247a1", 
			"22nd_M250_sounds",
			"22nd_weapons_ammo",
			"22nd_weapons_magazines"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"22nd_M250"
		};
	};
};


class cfgRecoils
{
	class 22nd_recoil_M250
	{
		muzzleInner[] = {0,0,0.1,0.1};
		muzzleOuter[] = {0.1,1.5,0.6,0.4};
		kickBack[] = {0.056,0.072};
		permanent=0;
		temporary = 0.005;
	};
};

class OPTRE_M250
{
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

class cfgWeapons
{


	class 22nd_M250: OPTRE_M250
	{
		displayName="[22nd] M250 (MG)";
		canShootInWater=1;
		baseweapon="22nd_M250";
		scope=2;
		ArsenalScope=2;
		dexterity = 0.5;
		inertia = 0.9;
		HUD_TotalPosibleBullet=100;
		ACE_Overheating_mrbs=300000;
		recoil="22nd_recoil_M250";
		recoilProne="22nd_recoil_M250";
		magazines[]=
		{
			
			"22nd_50rnd_127x99"
		};
		magazineWell[] = {};

		modes[]=
		{
			"FullAuto",
			"close",
			"short",
			"medium",
			"far"
		};
		class FullAuto: FullAuto
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
					"22nd_M250_Shot_SoundSet",
					"HMG050_tail_SoundSet"
				};
			};
			multiplier=1;
			recoil="22nd_recoil_M250";
			recoilProne="22nd_recoil_M250";
			reloadTime=0.15;
			dispersion=0.0008726646;
			minRange=2;
			minRangeProbab=0.5;
			midRange=250;
			midRangeProbab=0.69999999;
			maxRange=450;
			maxRangeProbab=0.30000001;
		};

		
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			// class CowsSlot: CowsSlot
			// {
			// 	compatibleItems[]=
			// 	{
			// 		"optic_mrco",
			// 		"optic_aco",
			// 		"optic_aco_smg",
			// 		"optic_hamr",
			// 		"optre_M250_sight",
			// 		"optre_m393_eotech",
			// 		"optre_m12_optic",
			// 		"optre_m392_scope"
			// 	};
			// };
			mass=120;
		};
	};
};

