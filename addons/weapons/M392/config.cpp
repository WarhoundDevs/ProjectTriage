class CfgPatches
{
	class 22nd_weapons_M392
	{
		author="22nd Mod Team";
		addonRootClass="22nd_weapons";
		requiredAddons[]=
		{
			"A3_Data_F",
			"A3_Weapons_F",
			"OPTRE_Weapons_DMR",
			"22nd_weapons_sound",
			"22nd_M392_sounds"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"22nd_M392"
		};
	};
};


class cfgRecoils
{
	class 22nd_recoil_M392
	{
		muzzleOuter[] = {0.06,1.5,0.5,0.4};
		muzzleInner[]={0,0,0.1,0.1};
		kickBack[] = {0.042,0.084};
		permanent=0;
		temporary=0.025;
	};
};


class OPTRE_M392_DMR
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

	class 22nd_M392: OPTRE_M392_DMR
	{
		displayName="[22nd] M392 DMR";
		canShootInWater=1;
		baseweapon="22nd_M392";
		scope=2;
		initspeed=1000;
		ArsenalScope=2;
		ACE_Overheating_mrbs=300000;
		recoil="22nd_recoil_M392";
		recoilProne="22nd_recoil_M392";
		magazines[]=
		{
			"22nd_25nd_762x51_HVAP",
			"22nd_32nd_762x51_FMJ"
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
			displayName="Single";
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class StandardSound: StandardSound
			{
				soundSetShot[]=
				{
					"22nd_M392_Shot_SoundSet", 
					"DMR03_tail_SoundSet",
					"DMR03_InteriorTail_SoundSet"
					
				};
			};
			class SilencedSound: SilencedSound
			{
				soundSetShot[]=
				{
					"22nd_Suppressed_MA37_Shot_Soundset",
					"22nd_MA37_Tail_SoundSet"
				};
			};
			multiplier=1;
			recoil="22nd_recoil_M392";
			recoilProne="22nd_recoil_M392";
			reloadTime=0.07;
			dispersion=0.0004363323;
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
					"optre_M392hb_scope",
					"optic_aco",
					"optre_ma5_buis",
					"",
					"optre_m393_acog",
					"optre_m7_sight",
					"optre_m393_eotech",
					"optre_m12_optic",
					"optre_m393_scope",
					"optre_m392_scope",
					"optic_mrco"
				};
			};
			mass=80;
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

