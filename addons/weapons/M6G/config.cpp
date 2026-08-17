class CfgPatches
{
	class 22nd_weapons_M6G
	{
		author="332nd Aux Team";
		addonRootClass="22nd_weapons";
		requiredAddons[]=
		{
			"A3_Data_F",
			"A3_Weapons_F",
			"22nd_weapons_sound",
			"OPTRE_Weapons_Pistol"
			
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"22nd_M6G"
		};
	};
};


class cfgRecoils
{
	class 22nd_recoil_M6G
	{
		muzzleInner[] = {0,0,0.1,0.1};
		muzzleOuter[] = {0.08,1.5,0.3,0.3};
		kickBack[] = {0.08,0.22};
		permanent=0;
		temporary = 0.15;
	};
};


class OPTRE_M6G
{
	class Single
	{
		class StandardSound;
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
	/// ammo needs to be made, as well as optic and weapon sounds, review attachments

	class 22nd_M6G: OPTRE_M6G
	{
		dlc="";
		displayName="[22nd] M6G";
		descriptionShort = "M6G 12.7x40mm Magnum <br /> Packs a hell of a punch and can help substitute for primary weapons with limited range";
		magazines[]=
		{
			"22nd_8Rnd_127x40_Mag",
			"22nd_16Rnd_127x40_Mag"
		};
		dexterity = 2;
		inertia = 0.2;
		magazineWell[] = {};
		recoil="22nd_recoil_M6G";
		baseWeapon="";
		HUD_BulletInARows=1;
		HUD_TotalPosibleBullet=16;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 32;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[]=
				{
					""
				};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[]=
				{
					"OPTRE_M6G_Scope"
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[]=
				{
					"OPTRE_M6G_Flashlight", "OPTRE_M6G_Laser", "OPTRE_M6G_Vis_Red_Laser"
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
					"22nd_M6G_Shot_SoundSet", 
					"Zubr_Tail_SoundSet",
					"Zubr_InteriorTail_SoundSet",
				};
			};
			flashSize = 0.5;
			reloadTime = 0.15;
			recoil="22nd_recoil_M6G";
			recoilProne = "recoil_prone_pistol_heavy";
		};
	};
};

