class CfgPatches
{
	class 22nd_wepaons_M250
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
			"22nd_ammo",
			"22nd_magazines"
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
	class recoil_M250
	{
		muzzleOuter[]={0,0.1,0,0};
		kickBack[]={0.0099999998,0.02};
		permanent=0;
		temporary=0.0099999998;
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
		HUD_TotalPosibleBullet=100;
		ACE_Overheating_mrbs=300000;
		recoil="recoil_M250";
		recoilProne="recoil_M250";
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
					"22nd_tail_SoundSet"
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
					"optre_M250_sight",
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

