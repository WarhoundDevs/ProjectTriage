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
			"22nd_M73_Suppressor"
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
			class SilencedSound: SilencedSound
			{
				soundSetShot[]=
				{
					"22nd_Suppressed_MA37_Shot_Soundset",
					"22nd_MA37_Tail_SoundSet"
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
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[]=
				{
					"22nd_M73_Suppressor"
				};
			};
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
	class InventoryMuzzleItem_Base_F;
	class optre_ma5suppressor;
	class 22nd_M73_Suppressor: optre_ma5suppressor
	{
		scope=2;
		displayName="M73 Suppressor";
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			soundTypeIndex=1;
			mass=1;
			class MagazineCoef
			{
				initSpeed=0.5;
			};
			class AmmoCoef
			{
				hit=1;
				visibleFire=0.30000001;
				audibleFire=0.30000001;
				visibleFireTime=1;
				audibleFireTime=1;
				cost=1;
				typicalSpeed=1;
				airFriction=1;
			};
			model="\A3\weapons_f\acc\acca_mzls_H_F";
			muzzleEnd="zaslehPoint";
			alternativeFire="Zasleh2";
			class MuzzleCoef
			{
				dispersionCoef="1.0f";
				artilleryDispersionCoef="1.0f";
				fireLightCoef="0.1f";
				recoilCoef="1.0f";
				recoilProneCoef="1.0f";
				minRangeCoef="1.0f";
				minRangeProbabCoef="1.0f";
				midRangeCoef="1.0f";
				midRangeProbabCoef="1.0f";
				maxRangeCoef="1.0f";
				maxRangeProbabCoef="1.0f";
			};
		};
	};
};

