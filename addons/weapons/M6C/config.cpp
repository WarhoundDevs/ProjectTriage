class CfgPatches
{
	class 22nd_weapons_M6C
	{
		author="332nd Aux Team";
		addonRootClass="22nd_weapons";
		requiredAddons[]=
		{
			"A3_Data_F",
			"A3_Weapons_F",
			"22nd_weapons_sound",
			"22nd_M6C_sounds",
			"OPTRE_Weapons_Pistol",
			"OPTRE_Weapons_M6G",
			"OPTRE_Weapons_M6C"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"22nd_M6C"
		};
	};
};


class cfgRecoils
{
	class 22nd_recoil_M6C
	{
		muzzleInner[] = {0,0,0.1,0.1};
		muzzleOuter[] = {0.04,1,0.2,0.3};
		kickBack[] = {0.042,0.084};
		permanent=0;
		temporary = 0.036;
	};
};


class Mode_FullAuto;
class OPTRE_M6C
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
	//recoil needs to be lessened, audio overhauled
	class 22nd_M6C: OPTRE_M6C
	{
		dlc="";
		displayName="[22nd] M6C/S SOCOM";
		descriptionShort="12.7x40mm Handgun";
		dexterity = 3.5;
		inertia = 0.1;
		magazines[]=
		{
			"22nd_mag_M6C",
			"22nd_Ext_mag_M6C"
		};
		magazineWell[] = {};
		recoil="22nd_recoil_M6C";
		baseWeapon="";
		modes[] = {"Single","FullAuto"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=16;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[]=
				{
					"OPTRE_M6C_compensator"
				};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[]=
				{
					"OPTRE_M6C_Scope"
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[]=
				{
					"OPTRE_M6C_Laser"
				};
			};
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
					"22nd_M6C_Shot_SoundSet",
					"Makarov_Tail_SoundSet",
					"Makarov_InteriorTail_SoundSet"
				};
			};
			class SilencedSound: SilencedSound
			{
				soundSetShot[]=
				{
					"22nd_Suppressed_M6C_Shot_Soundset",
					"22nd_MA37_Tail_SoundSet"
				};
			};
			reloadTime=0.025;
			minRange=10;
			minRangeProbab=0.5;
			midRange=25;
			midRangeProbab=0.1;
			maxRange=100;
			maxRangeProbab=0.050000001;
			distanceZoomMin=100;
			distanceZoomMax=100;
			recoil="22nd_recoil_M6C";
			recoilProne="recoil_prone_pistol_light";
		};

		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class StandardSound
			{
				soundSetShot[]=
				{
					"22nd_M6C_Shot_SoundSet",
					"Makarov_Tail_SoundSet",
					"Makarov_InteriorTail_SoundSet"
				};
			};
			class SilencedSound
			{
				soundSetShot[]=
				{
					"22nd_Suppressed_M6C_Shot_Soundset",
					"22nd_MA37_Tail_SoundSet"
				};
			};
			reloadTime=0.05;
			minRange=10;
			minRangeProbab=0.5;
			midRange=25;
			midRangeProbab=0.1;
			maxRange=100;
			maxRangeProbab=0.050000001;
			distanceZoomMin=100;
			distanceZoomMax=100;
			textureType = "fastAuto";
			recoil="22nd_recoil_M6C";
			recoilProne="recoil_prone_pistol_light";
		};
	};


	/// ammo needs to be made, as well as optic and weapon sounds, review attachments
};

