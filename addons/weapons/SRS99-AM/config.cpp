class CfgPatches
{
	class 22nd_weapons_SRS99C
	{
		author="Valkyrie";
		addonRootClass="22nd_weapons";
		requiredAddons[]=
		{
			"cba_main",
			"A3_Data_F",
			"A3_Weapons_F",
			"OPTRE_Weapons_Sniper",
			"22nd_SRS99C_sounds",
			"22nd_weapons_ammo",
			"22nd_weapons_magazines"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"22nd_SRS99C"
		};
	};
};


class cfgRecoils
{
	class recoil_SRS99C
	{
		muzzleOuter[]={0,0.1,0,0};
		kickBack[]={0.0099999998,0.02};
		permanent=0;
		temporary=0.0099999998;
	};
};

class OPTRE_SRS99C
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


	class 22nd_SRS99C: OPTRE_SRS99C
	{
		displayName="[22nd] SRS99C EMR";
		descriptionShort = "SRS99C EMR 10.2x74mm <br /> Harder hitting sibling of the DMR, lack spotting capabilites and ammo efficiency of the DMR but outranges it";
		canShootInWater=1;
		baseweapon="22nd_weapon_SRS99C";
		scope=2;
		ArsenalScope=2;
		HUD_TotalPosibleBullet=100;
		ACE_Overheating_mrbs=300000;
		recoil="recoil_SRS99C";
		recoilProne="recoil_SRS99C";
		magazines[]=
		{
			
			"22nd_mag_SRS99C"
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
					"22nd_SRS99C_Shot_SoundSet",
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
					"optre_SRS99C_sight",
					"optre_SRS99C_eotech",
					"optre_m12_optic",
					"optre_m392_scope"
				};
			};
			mass=40;
		};
		// class OpticsModes
		// {
		// 	class sight
		// 	{
		// 		opticsID=2;
		// 		useModelOptics=0;
		// 		opticsPPEffects[]=
		// 		{
		// 			"OpticsCHAbera5",
		// 			"OpticsBlur5"
		// 		};
		// 		opticsDisablePeripherialVision=0.67000002;
		// 		opticsZoomMin=0.375;
		// 		opticsZoomMax=1.1;
		// 		opticsZoomInit=0.75;
		// 		discreteInitIndex=0;
		// 		distanceZoomMin=100;
		// 		distanceZoomMax=700;
		// 		discreteDistance[]={100,200,300,400,500,600,700};
		// 		discreteDistanceInitIndex=0;
		// 		memoryPointCamera="eye";
		// 		visionMode[]={};
		// 		opticsFlare="true";
		// 		cameraDir="";
		// 	};
		// };
	};
};

