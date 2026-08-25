class CfgPatches
{
	class 22nd_weapons_M73
	{
		author="Valkyrie";
		addonRootClass="22nd_weapons";
		requiredAddons[]=
		{
			"A3_Data_F",
			"A3_Weapons_F",
			"OPTRE_Weapons_MG_M73",
			"22nd_weapons_sound",
			"22nd_M73_sounds"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"22nd_M73",
		};
	};
};
class cfgRecoils
{
	class 22nd_recoil_M73
	{
		muzzleOuter[] = {0.03,1,0.3,0.3};
		muzzleInner[] = {0,0,0.1,0.1};
		kickBack[] = {0.028,0.056};
		permanent=0;
		temporary = 0.010;
	};
};


class OPTRE_M73
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
	class 22nd_M73: OPTRE_M73
	{
		displayName="[22nd] M73 LSW";
		descriptionShort = "M73 LSW <br /> Portable  <br /> Operator can front load specialized rounds atop regular magazine (GL Slot)";
		canShootInWater=1;
		baseweapon="";
		dexterity = 1.5;
		inertia = 0.5;
		ACE_Overheating_mrbs=300000;
		recoil="22nd_recoil_M73";
		recoilProne="22nd_recoil_M73";
		scope=2;
		ArsenalScope=2;
		magazines[]=
		{
			"22nd_100rnd_95x40_FMJ"
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
			displayName="Auto";
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class StandardSound: StandardSound
			{
				soundSetShot[]=
				{
					"22nd_M73_Shot_SoundSet",
					"Mk200_Tail_SoundSet",
					"Mk200_InteriorTail_SoundSet"
				};
			};
			multiplier=1;
			recoil="22nd_recoil_M73";
			recoilProne="22nd_recoil_M73";
			reloadTime=0.0923;
			dispersion=0.0006544985;
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
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				displayName="$STR_A3_CowsSlot0";
				compatibleItems[]=
				{
					"optre_m73_smartlink",
					"optic_aco",
					"optre_ma5_buis",
					"optre_m393_acog",
					"optre_m7_sight",
					"optre_m393_eotech",
					"optre_m12_optic",
					"optre_m393_scope",
					"optre_m392_scope",
					"optic_mrco"
				};
			};
			mass=95;
		};
	};
};
