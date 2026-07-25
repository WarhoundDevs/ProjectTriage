class CfgPatches
{
	class 22nd_weapons_M45
	{
		units[]={};
		weapons[]=
		{
			"22nd_M45"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Data_F",
			"A3_Weapons_F",
			"OPTRE_Weapons_Shotgun",
			"22nd_weapons_sound",
			"22nd_M45_sounds",
			"22nd_ammo",
			"22nd_magazines"
		};
	};
};


class OPTRE_M45TAC 
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

class CfgWeapons
{

	/// I want to make "tactical barrel" for utiliy rounds
	class 22nd_M45: OPTRE_M45TAC 
	{
		dlc="";
		displayName="[22nd] M45 Tactical Shotgun";
		descriptionShort = "M45 8 Gauge Shotgun <br /> Best used for CQB enivroments and when hostiles need to be removed from existance. <br /> Operator can front load specialized rounds atop regular magazine (GL Slot)";
		baseWeapon="";
		magazines[]=
		{
			"22nd_mag_m45_Buck",
			"22nd_mag_M45_Slug"
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
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class StandardSound: StandardSound
			{
				soundSetShot[]=
				{
					"22nd_M45_Shot_SoundSet",
					"22nd_tail_DMR_SoundSet"
				};
			};
			class SilencedSound: StandardSound
			{
				soundSetShot[]=
				{
					"22nd_Suppressed_M45_Shot_Soundset",
					"22nd_MA37_Tail_SoundSet"
				};
			};
			dispersion=4.9999999e-005;
			minRange=2;
			minRangeProbab=0.2;
			midRange=75;
			midRangeProbab=0.34999999;
			maxRange=200;
			maxRangeProbab=0.44999999;
			distanceZoomMin=60;
			distanceZoomMax=60;
			recoil="recoil_single_ksg";
			recoilProne="recoil_single_prone_ksg";
			reloadTime=0.5;
		};

		class WeaponSlotsInfo: WeaponSlotsInfo
		{

			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[]=
				{
					"optre_m12_suppressor"
				};
			};

			class CowsSlot: CowsSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				displayName="$STR_A3_CowsSlot0";
				compatibleItems[]=
				{
					"optic_aco",
					"optre_m7_sight",
					"optre_m393_eotech",
					"optic_aco_smg",
					"optic_mrco"
				};
			};
		};
	};
};
