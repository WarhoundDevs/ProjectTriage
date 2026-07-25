class CfgPatches
{
	class 22nd_weapons_BR55
	{
		author="22nd Mod Team";
		addonRootClass="22nd_weapons";
		requiredAddons[]=
		{
			"A3_Data_F",
			"A3_Weapons_F",
			"OPTRE_Weapons_BR",
			"22nd_weapons_sound",
			"22nd_weapons"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"22nd_BR55",
			"22nd_BR55_Suppressor"
		};
	};
};


class cfgRecoils
{
	class recoil_BR55
	{
		muzzleOuter[]={0.05,0.060000002,0.030000001,0.030000001};
		muzzleInner[]={0,0,0.1,0.1};
		kickBack[]={0.02,0.039999999};
		permanent=0;
		temporary=0.015;
	};
};


class OPTRE_BR55
{
	class Burst
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



	class 22nd_BR55: OPTRE_BR55
	{
		displayName="[22nd] BR55";
		canShootInWater=1;
		baseweapon="";
		scope=2;
		ArsenalScope=2;
		ACE_Overheating_mrbs=300000;
		recoil="recoil_BR55";
		recoilProne="recoil_BR55";
		magazines[]=
		{
			"22nd_36nd_95x40_FMJ"
		};
		magazineWell[] = {};
		modes[]=
		{
			"Burst",
			"close",
			"short",
			"medium",
			"far"
		};
		class Burst: Burst
		{
			burst=3;
			displayName="Burst";
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class StandardSound: StandardSound
			{
				soundSetShot[]=
				{
					"22nd_BR55_Shot_SoundSet",
					"22nd_tail_SoundSet"
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
			textureType="burst";
			multiplier=1;
			recoil="recoil_single_primary_2outof10";
			recoilProne="recoil_single_primary_2outof10";
			reloadTime=0.07;
			dispersion=0.00019999999;
			minRange=2;
			minRangeProbab=0.5;
			midRange=250;
			midRangeProbab=0.69999999;
			maxRange=450;
			maxRangeProbab=0.30000001;
		};
		class close: Burst
		{
			burst=3;
			aiRateOfFire=0.3;
			aiRateOfFireDistance=50;
			minRange=0;
			minRangeProbab=0.050000001;
			midRange=30;
			midRangeProbab=0.69999999;
			maxRange=50;
			maxRangeProbab=0.039999999;
			showToPlayer=0;
		};
		class short: close
		{
			burst=3;
			aiRateOfFire=2;
			aiRateOfFireDistance=300;
			minRange=50;
			minRangeProbab=0.050000001;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=300;
			maxRangeProbab=0.039999999;
		};
		class medium: close
		{
			burst=2;
			aiRateOfFire=4;
			aiRateOfFireDistance=600;
			minRange=200;
			minRangeProbab=0.050000001;
			midRange=400;
			midRangeProbab=0.60000002;
			maxRange=600;
			maxRangeProbab=0.1;
		};
		class far: close
		{
			burst=3;
			aiRateOfFire=6;
			aiRateOfFireDistance=700;
			minRange=350;
			minRangeProbab=0.039999999;
			midRange=550;
			midRangeProbab=0.5;
			maxRange=700;
			maxRangeProbab=0.0099999998;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[]=
				{
					"22nd_BR55_Suppressor"
				};
			};
			class CowsSlot: CowsSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				displayName="$STR_A3_CowsSlot0";
				compatibleItems[]=
				{
					"optre_br55hb_scope",
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

	class InventoryMuzzleItem_Base_F;
	class optre_ma5suppressor;

	class 22nd_BR55_Suppressor: optre_ma5suppressor
	{
		scope=2;
		displayName="BR55 Suppressor";
		model="OPTRE_Weapons\ar\MA5Suppressor.p3d";
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			soundTypeIndex=1;
			mass=1;
			class MagazineCoef
			{
				initSpeed=0.55000001;
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
			model="OPTRE_Weapons\ar\MA5Suppressor.p3d";
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

