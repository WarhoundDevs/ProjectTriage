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
	class recoil_M6G
	{
		muzzleOuter[]={0,0.1,0,0};
		kickBack[]={0.0099999998,0.02};
		permanent=0;
		temporary=0.0099999998;
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
		descriptionShort = "M6G 12.7x40mm Magnum <br /> Packs a punch and can help substitute weapons with limited range";

		magazines[]=
		{
			"22nd_mag_M6G"
		};
		magazineWell[] = {};
		recoil="recoil_pistol_zubr";
		baseWeapon="";
		HUD_BulletInARows=1;
		HUD_TotalPosibleBullet=16;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=16;
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
			// class PointerSlot: PointerSlot
			// {
			// 	compatibleitems[]=
			// 	{
			// 		"OPTRE_M6G_Flashlight", "OPTRE_M6G_Laser", "OPTRE_M6G_Vis_Red_Laser"
			// 	};
			// };
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
					"22nd_MA37_Tail_SoundSet"
				};
			};
			reloadTime=0.025;
			recoil="recoil_pistol_light";
			recoilProne="recoil_prone_pistol_light";
		};
	};
};

