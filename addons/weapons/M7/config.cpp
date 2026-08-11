class CfgPatches
{
	class 22nd_weapons_M7
	{
		author="Valkyrie";
		addonRootClass="22nd_weapons";
		requiredAddons[]=
		{
			"A3_Data_F",
			"A3_Weapons_F",
			"OPTRE_Weapons_SMG", //find optre M7 addon
			"22nd_M7_sounds",
			"22nd_weapons_sound",
			"22nd_weapons_ammo",
			"22nd_weapons_magazines"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"22nd_M7"
		};
	};
};


class cfgRecoils
{
	class 22nd_recoil_M7
	{
		muzzleOuter[] = {0.2,0.4,0.3,0.2};
		kickBack[] = {0.02,0.03};
		permanent=0;
		temporary = 0.02;
	};
};


class OPTRE_M7
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


	class 22nd_M7: OPTRE_M7
	{
		displayName="[22nd] M7/S SMG";
		descriptionShort = "M7 Submachine gun 5x23mm <br /> Most useful for urban fighting or as a PDW, High ROF and is able to use specialized mags";
		canShootInWater=1;
		baseweapon="";
		scope=2;
		ArsenalScope=2;
		HUD_TotalPosibleBullet=48;
		ACE_Overheating_mrbs=300000;
		recoil="22nd_recoil_M7";
		recoilProne="22nd_recoil_M7";
		magazines[]=
		{
			"22nd_mag_M7",
			"22nd_mag_M7_AP",
			"22nd_mag_M7_SS"
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
					"22nd_M7_Shot_SoundSet",
					"22nd_tail_small_SoundSet"
				};
			};
			class SilencedSound: SilencedSound
			{
				soundSetShot[]=
				{
					"22nd_Suppressed_M7_Shot_Soundset",
					"22nd_MA37_Tail_SoundSet"
				};
			};
			multiplier=1;
			flashSize = 0.1;
			recoil="22nd_recoil_M7";
			recoilProne="22nd_recoil_M7";
			reloadTime=0.059999999;
			dispersion=0.001454441;
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
					"optre_m7_silencer"
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
					"optre_m7_sight",
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

