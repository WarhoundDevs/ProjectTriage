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
			"22nd_weapons_ammo",
			"22nd_weapons_magazines"
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
	class EventHandlers;
	class WeaponSlotsInfo
	{
		class MuzzleSlot;
		class CowsSlot;
		class PointerSlot;
		class UnderBarrelSlot;
	};
};

class cfgRecoils
{
	class 22nd_recoil_M45
	{
		muzzleOuter[] = {1,3,0.6,0.6};
		muzzleInner[] = {0,0,0.1,0.1};
		kickBack[] = {0.08,0.1};
		permanent=0;
		temporary = 0.022;
	};
};

class CfgWeapons
{

	/// I want to make "tactical barrel" for utiliy rounds
	class 22nd_M45: OPTRE_M45TAC 
	{
		dlc="";
		displayName="[22nd] M45 Tactical Shotgun";
		descriptionShort = "M45 Tactical Shotgun 8 Gauge <br /> ROF: Pump Action <br />  Breacher's best friend, also has ability to front load utility rounds";
		baseWeapon="";
		magazines[]=
		{
			"22nd_6rnd_m45_Magnum",
			"22nd_6rnd_m45_Moa",
			"22nd_6rnd_m45_Hound",
			"22nd_6rnd_M45_Slug",
			"22nd_6rnd_m45_Flash",

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
			dispersion=0.0008726646;
			minRange=2;
			minRangeProbab=0.2;
			midRange=75;
			midRangeProbab=0.34999999;
			maxRange=200;
			maxRangeProbab=0.44999999;
			distanceZoomMin=60;
			distanceZoomMax=60;
			recoil="22nd_recoil_M45";
			recoilProne="22nd_recoil_M45";
			reloadTime=0.5;
		};
		muzzles[] =
		{
			"This",
			"22nd_M45alt"
		};
		class 22nd_M45alt : OPTRE_M45TAC
		{
			displayName = "[22nd] M45 Alternate load";
			descriptionShort = "M45 Alternate load";
			magazines[]=
			{
			
				"22nd_6rnd_m45_Magnum",
				"22nd_6rnd_m45_Moa",
				"22nd_6rnd_m45_Hound",
				"22nd_6rnd_M45_Slug",
				"22nd_6rnd_m45_Flash",

			};
			magazineWell[] = {};
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
				dispersion=0.0008726646;
				minRange=2;
				minRangeProbab=0.2;
				midRange=75;
				midRangeProbab=0.34999999;
				maxRange=200;
				maxRangeProbab=0.44999999;
				distanceZoomMin=60;
				distanceZoomMax=60;
				recoil="22nd_recoil_M45";
				recoilProne="22nd_recoil_M45";
				reloadTime=0.5;
			};
		};
		
		class WeaponSlotsInfo: WeaponSlotsInfo
		{

			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[]=
				{
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
					"Optre_Evo_Sight_Riser",
					"optic_MRCO",
					"OPTRE_M12_Optic_Red",
					"optic_Holosight_blk_F",
					"optic_Holosight_smg_blk_F",

				};
			};

			class PointerSlot: PointerSlot
			{
				compatibleitems[]=
				{
					"OPTRE_M45_Flashlight", "acc_flashlight", "OPTRE_BMR_Laser", "OPTRE_M12_Laser"
				};
			};

		}; 
	};
};
