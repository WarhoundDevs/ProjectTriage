class CfgPatches
{
	class 22nd_weapons_Equipment
	{
		author="22nd Mod Team";
		addonRootClass="22nd_weapons";
		requiredAddons[]=
		{
			"22nd_weapons"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
	};
};


class CfgAmmo
{

	/// Explosives ///

	class C7_Remote_Ammo;
	class 22nd_C7_Ammo_1: C7_Remote_Ammo
	{
		hit=8000;
		indirectHit=8000;
		indirectHitRange=1;
	};
	class 22nd_C7_Ammo_2: C7_Remote_Ammo
	{
		hit=8000;
		indirectHit=8000;
		indirectHitRange=2.5;
	};

	/// Lethal grenades ///

	class OPTRE_G_M9_Frag;
	class 22nd_ammo_Grenade_HEDP: OPTRE_G_M9_Frag
	{
		hit=40;
		indirectHit=30;
		indirectHitRange=10;
		explosionTime=4;
		deflectionSlowDown=0.40000001;
		ace_frag_skip = 1;
	};
	class 22nd_ammo_Grenade_HEFRAG: OPTRE_G_M9_Frag
	{
		hit=20;
		indirectHit=15;
		indirectHitRange=10;
		ace_frag_classes[]=
		{
			"ACE_frag_Large_HD"
		};
	};
	class mini_Grenade;
	class 22nd_ammo_Grenade_MINIFRAG: mini_Grenade
	{
		hit=20;
		indirectHit=10;
		explosionTime=3.5;
		indirectHitRange=6;
		ace_frag_classes[]=
		{
			"ACE_frag_medium"
		};
	};

	/// Less then lethal ///

	class 22nd_ammo_Grenade_STINGER: mini_Grenade
	{
		hit=1;
		model="\A3\Weapons_F_EPB\Ammo\O_IRstrobe_F.p3d";
		indirectHit=1;
		indirectHitRange=2;
		ace_frag_classes[]=
		{
			"ACE_frag_tiny_HD"
		};
		explosionTime=2.5;
		ace_frag_metal=800;
		ace_grenades_flashbang=1;
		ace_grenades_flashbangBangs=1;
		deflectionSlowDown=0.40000001;
	};
	class ACE_G_CTS9;
	class 22nd_ammo_Grenade_FLASH: ACE_G_CTS9
	{
		explosionTime=2;
		ace_grenades_flashbangBangs=3;
		ace_grenades_flashbangInterval=0.2;
		ace_grenades_flashbangIntervalMaxDeviation=0;
		deflectionSlowDown=0.40000001;
	};

	/// Smokes ///

	class OPTRE_G_M2_Smoke;
	class 22nd_ammo_Smoke_Impact_white: OPTRE_G_M2_Smoke
	{
		explosionTime=-1;
		deflectionSlowDown=0.5;
	};
	class OPTRE_G_M2_BSmoke;
	class 22nd_ammo_Smoke_Impact_blue: OPTRE_G_M2_BSmoke
	{
		explosionTime=-1;
		deflectionSlowDown=0.5;
	};
	class OPTRE_G_M2_GSmoke;
	class 22nd_ammo_Smoke_Impact_green: OPTRE_G_M2_GSmoke
	{
		explosionTime=-1;
		deflectionSlowDown=0.5;
	};
	class OPTRE_G_M2_RSmoke;
	class 22nd_ammo_Smoke_Impact_red: OPTRE_G_M2_RSmoke
	{
		explosionTime=-1;
		deflectionSlowDown=0.5;
	};
	class OPTRE_G_M2_PSmoke;
	class 22nd_ammo_Smoke_Impact_purple: OPTRE_G_M2_PSmoke
	{
		explosionTime=-1;
		deflectionSlowDown=0.5;
	};
	class OPTRE_G_M2_YSmoke;
	class 22nd_ammo_Smoke_Impact_yellow: OPTRE_G_M2_YSmoke
	{
		explosionTime=-1;
		deflectionSlowDown=0.5;
	};
	class OPTRE_G_M2_OSmoke;
	class 22nd_ammo_Smoke_Impact_orange: OPTRE_G_M2_OSmoke
	{
		explosionTime=-1;
		deflectionSlowDown=0.5;
	};
};

class CfgMagazines
{
	class C7_Remote_Mag;
	class 22nd_C7_Mag_1: C7_Remote_Mag
	{
		displayName="[22nd] 1pcs C7 Foam";
		mass=15;
		ammo="22nd_C7_Ammo_1";
	};
	class 22nd_C7_Mag_2: C7_Remote_Mag
	{
		displayName="[22nd] 2pcs C7 Foam";
		mass=30;
		ammo="22nd_C7_Ammo_2";
	};
	class OPTRE_M9_Frag;
	class 22nd_magazine_Grenade_HEDP: OPTRE_M9_Frag
	{
		displayName="[22nd] M7 HEDP";
		mass=8;
		displayNameShort="M7 HEDP";
		ammo="22nd_ammo_Grenade_HEDP";
	};
	class 22nd_magazine_Grenade_FRAG: OPTRE_M9_Frag
	{
		displayName="[22nd] M9 HE-FRAG";
		displayNameShort="M9 FRAG";
		mass=8;
		ammo="22nd_ammo_Grenade_HEFRAG";
	};
	class MiniGrenade;
	class 22nd_magazine_Grenade_MINI: MiniGrenade
	{
		displayName="[22nd] M5 MINI FRAG";
		displayNameShort="M3 MINI";
		mass=6;
		ammo="22nd_ammo_Grenade_MINIFRAG";
	};
	class 22nd_magazine_Grenade_STINGER: MiniGrenade
	{
		displayName="[22nd] M6 Stinger";
		displayNameShort="M6 Stinger";
		mass=6;
		model="\z\ace\addons\attach\data\ace_IRStrobe.p3d";
		picture="\A3\Weapons_F_EPB\Ammo\Data\UI\gear_O_IRstrobe_CA.paa";
		ammo="22nd_ammo_Grenade_STINGER";
	};
	class ACE_CTS9;
	class 22nd_magazine_Grenade_FLASH: ACE_CTS9
	{
		displayName="[22nd] M3 Flashbang";
		displayNameShort="M3 Flashbang";
		mass=4;
		ammo="22nd_ammo_Grenade_FLASH";
	};
	class OPTRE_M2_Smoke;
	class 22nd_magazine_SMOKE_IMPACT_WHITE: OPTRE_M2_Smoke
	{
		displayName="[22nd] White Impact Smoke ";
		displayNameShort="White Smoke";
		mass=4;
		scopeArsenal=2;
		ammo="22nd_ammo_Smoke_Impact_white";
	};
	class OPTRE_M2_Smoke_Blue;
	class 22nd_magazine_SMOKE_IMPACT_BLUE: OPTRE_M2_Smoke_Blue
	{
		displayName="[22nd] Blue Impact Smoke ";
		displayNameShort="Blue Smoke";
		mass=4;
		ammo="22nd_ammo_Smoke_Impact_blue";
	};
	class OPTRE_M2_Smoke_Green;
	class 22nd_magazine_SMOKE_IMPACT_GREEN: OPTRE_M2_Smoke_Green
	{
		displayName="[22nd] Green Impact Smoke ";
		displayNameShort="Green Smoke";
		mass=4;
		ammo="22nd_ammo_Smoke_Impact_green";
	};
	class OPTRE_M2_Smoke_Red;
	class 22nd_magazine_SMOKE_IMPACT_RED: OPTRE_M2_Smoke_Red
	{
		displayName="[22nd] Red Impact Smoke ";
		displayNameShort="Red Smoke";
		mass=4;
		ammo="22nd_ammo_Smoke_Impact_red";
	};
	class OPTRE_M2_Smoke_Purple;
	class 22nd_magazine_SMOKE_IMPACT_PURPLE: OPTRE_M2_Smoke_Purple
	{
		displayName="[22nd] Purple Impact Smoke";
		displayNameShort="Purple Smoke";
		mass=4;
		ammo="22nd_ammo_Smoke_Impact_purple";
	};
	class OPTRE_M2_Smoke_Yellow;
	class 22nd_magazine_SMOKE_IMPACT_YELLOW: OPTRE_M2_Smoke_Yellow
	{
		displayName="[22nd] Yellow Impact Smoke ";
		displayNameShort="Yellow Smoke";
		mass=4;
		ammo="22nd_ammo_Smoke_Impact_yellow";
	};
	class OPTRE_M2_Smoke_Orange;
	class 22nd_magazine_SMOKE_IMPACT_ORANGE: OPTRE_M2_Smoke_Orange
	{
		displayName="[22nd] Orange Impact Smoke ";
		displayNameShort="Orange Smoke";
		mass=4;
		ammo="22nd_ammo_Smoke_Impact_orange";
	};
};


class CfgWeapons
{
	class default;
	class GrenadeLauncher;
	class Throw: GrenadeLauncher
	{
		muzzles[]+=
		{
			"22nd_HEDP_Muzzle",
			"22nd_FRAG_Muzzle",
			"22nd_Mini_Muzzle",
			"22nd_FLASH_Muzzle",
			"22nd_Stinger_Muzzle",
			"22nd_Impact_white_Muzzle",
			"22nd_Impact_blue_Muzzle",
			"22nd_Impact_green_Muzzle",
			"22nd_Impact_red_Muzzle",
			"22nd_Impact_purple_Muzzle",
			"22nd_Impact_yellow_Muzzle",
			"22nd_Impact_orange_Muzzle"
		};

		class ThrowMuzzle;
		class 22nd_HEDP_Muzzle: ThrowMuzzle
		{
			magazines[]=
			{
				"22nd_magazine_Grenade_HEDP"
			};
		};
		class 22nd_FRAG_Muzzle: ThrowMuzzle
		{
			magazines[]=
			{
				"22nd_magazine_Grenade_FRAG"
			};
		};
		class 22nd_Mini_Muzzle: ThrowMuzzle
		{
			magazines[]=
			{
				"22nd_magazine_Grenade_MINI"
			};
		};
		class 22nd_Stinger_Muzzle: ThrowMuzzle
		{
			magazines[]=
			{
				"22nd_magazine_Grenade_STINGER"
			};
		};
		class 22nd_FLASH_Muzzle: ThrowMuzzle
		{
			magazines[]=
			{
				"22nd_magazine_Grenade_FLASH"
			};
		};
		class 22nd_Impact_white_Muzzle: ThrowMuzzle
		{
			magazines[]=
			{
				"22nd_magazine_SMOKE_IMPACT_WHITE"
			};
		};
		class 22nd_Impact_blue_Muzzle: ThrowMuzzle
		{
			magazines[]=
			{
				"22nd_magazine_SMOKE_IMPACT_BLUE"
			};
		};
		class 22nd_Impact_green_Muzzle: ThrowMuzzle
		{
			magazines[]=
			{
				"22nd_magazine_SMOKE_IMPACT_GREEN"
			};
		};
		class 22nd_Impact_red_Muzzle: ThrowMuzzle
		{
			magazines[]=
			{
				"22nd_magazine_SMOKE_IMPACT_RED"
			};
		};
		class 22nd_Impact_purple_Muzzle: ThrowMuzzle
		{
			magazines[]=
			{
				"22nd_magazine_SMOKE_IMPACT_PURPLE"
			};
		};
		class 22nd_Impact_yellow_Muzzle: ThrowMuzzle
		{
			magazines[]=
			{
				"22nd_magazine_SMOKE_IMPACT_YELLOW"
			};
		};
		class 22nd_Impact_orange_Muzzle: ThrowMuzzle
		{
			magazines[]=
			{
				"22nd_magazine_SMOKE_IMPACT_ORANGE"
			};
		};
	};


	class put: default
	{
		muzzles[]+=
		{
			"22nd_C7_1_Muzzle",
			"22nd_C7_2_Muzzle"
		};
		displayName="$STR_A3_CfgWeapons_Put0";
		class PutMuzzle;
		class 22nd_C7_1_Muzzle: PutMuzzle
		{
			autoreload=0;
			enableAttack=1;
			magazines[]=
			{
				"22nd_C7_Mag_1"
			};
			multiSoundHit[]=
			{
				"soundHit1",
				0.5,
				"soundHit2",
				0.5
			};
			displayName="[22nd] 1pc C7 Foam";
			showToPlayer=0;
		};
		class 22nd_C7_2_Muzzle: PutMuzzle
		{
			autoreload=0;
			enableAttack=1;
			magazines[]=
			{
				"22nd_C7_Mag_2"
			};
			multiSoundHit[]=
			{
				"soundHit1",
				0.5,
				"soundHit2",
				0.5
			};
			displayName="[22nd] 2pcs C7 Foam";
			showToPlayer=0;
		};
	};
};
