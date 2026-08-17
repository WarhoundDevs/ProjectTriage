class CfgPatches
{
	class 22nd_weapoons_M247A1
	{
		author="Valkyrie";
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
			"22nd_M247A1_sounds",
			"22nd_weapons_ammo",
			"22nd_weapons_magazines"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"22nd_M247A1"
		};
	};
};


class cfgRecoils
{
	class 22nd_recoil_m247A1
	{
		muzzleOuter[] = {0.3,0.8,0.4,0.3};
		muzzleInner[] = {0,0,0.1,0.1};
		kickBack[] = {0.03,0.06};
		permanent=0;
		temporary = 0.012;
	};
};

class OPTRE_M247A1
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


	class 22nd_M247A1: OPTRE_M247A1
	{
		displayName="[22nd] M247A1 (MG)";
		descriptionShort = "M247A1 LMG 762.2x51mm <br /> ROF: 750 RPM / 1000 RPM <br /> 3.5 MOA <br /> Queen of suppresion, Warhound armourers have added a high ROF setting not officially endorsed or supported by the UNSC";
		canShootInWater=1;
		baseweapon="22nd_weapon_M247A1";
		scope=2;
		ArsenalScope=2;
		dexterity = 0.9;
		inertia = 0.7;
		HUD_TotalPosibleBullet=250;
		ACE_Overheating_mrbs=300000;
		recoil="22nd_recoil_m247A1";
		recoilProne="22nd_recoil_m247A1";
		magazines[]=
		{
			"22nd_150rnd_762x51_FMJ",
			"22nd_300rnd_762x51_FMJ"
		};
		magazineWell[] = {};

		modes[]=
		{
			"FullAuto",
			"FullerAuto",
			"close",
			"short",
			"medium",
			"far"
		};
		class FullAuto: FullAuto
		{
			burst=1;
			displayName="Low ROF";
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class StandardSound: StandardSound
			{
				soundSetShot[]=
				{
					"22nd_M247A1_Shot_SoundSet",
					"SyndikatLMG_Tail_SoundSet",
					"SyndikatLMG_InteriorTail_SoundSet"
				};
			};
			class SilencedSound: SilencedSound
			{
				soundSetShot[]=
				{
					"22nd_Suppressed_M247A1_Shot_Soundset",
					"22nd_MA37_Tail_SoundSet"
				};
			};
			multiplier=1;
			recoil="recoil_single_primary_2outof10";
			recoilProne="recoil_single_primary_2outof10";
			reloadTime=0.08;
			dispersion=	0.0010181087;
			minRange=2;
			minRangeProbab=0.5;
			midRange=250;
			midRangeProbab=0.69999999;
			maxRange=450;
			maxRangeProbab=0.30000001;
		};

		class FullerAuto: FullAuto
		{
			burst=1;
			displayName="High ROF";
			multiplier=1;
			recoil="recoil_single_primary_2outof10";
			recoilProne="recoil_single_primary_2outof10";
			reloadTime=0.06;
			dispersion=	0.0010181087;
			textureType = "fastAuto"; //More bars on the select fire UI in the top right
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
				compatibleItems[]=
				{
					"optic_mrco",
					"optic_aco",
					"optic_aco_smg",
					"optic_hamr",
					"optre_M247A1_sight",
					"optre_m393_eotech",
					"optre_m12_optic",
					"optre_m392_scope"
				};
			};
			mass=100;
		};
		class OpticsModes
		{
			class sight
			{
				opticsID=2;
				useModelOptics=0;
				opticsPPEffects[]=
				{
					"OpticsCHAbera5",
					"OpticsBlur5"
				};
				opticsDisablePeripherialVision=0.67000002;
				opticsZoomMin=0.375;
				opticsZoomMax=1.1;
				opticsZoomInit=0.75;
				discreteInitIndex=0;
				distanceZoomMin=100;
				distanceZoomMax=700;
				discreteDistance[]={100,200,300,400,500,600,700};
				discreteDistanceInitIndex=0;
				memoryPointCamera="eye";
				visionMode[]={};
				opticsFlare="true";
				cameraDir="";
			};
		};
	};
};

