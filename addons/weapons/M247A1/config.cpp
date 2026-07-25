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
			"22nd_ammo",
			"22nd_magazines"
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
	class recoil_M247A1
	{
		muzzleOuter[]={0,0.1,0,0};
		kickBack[]={0.0099999998,0.02};
		permanent=0;
		temporary=0.0099999998;
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
		canShootInWater=1;
		baseweapon="22nd_weapon_M247A1";
		scope=2;
		ArsenalScope=2;
		HUD_TotalPosibleBullet=48;
		ACE_Overheating_mrbs=300000;
		recoil="recoil_M247A1";
		recoilProne="recoil_M247A1";
		magazines[]=
		{
			"22nd_125rnd_762x51_FMJ",
			"22nd_250rnd_762x51_FMJ"
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
					"22nd_tail_SoundSet"
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
			dispersion=0.00050000002;
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
			dispersion=0.00050000002;
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
			mass=40;
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

