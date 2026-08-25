
class CfgPatches
{
    class 22nd_weapons_magazines_gl
    {
        addonRootClass = "22nd_weapons";
        author = "22nd Mod Team";

        requiredVersion = 0.1;

        requiredAddons[] =
        {
			"cba_main",
            "A3_Data_F",
            "A3_Weapons_F",
            "OPTRE_Weapons_Ammo",
			"22nd_weapons_ammo_gl",
			"22nd_weapons_ammo",
            "22nd_weapons"
        };

        units[] = {};
        weapons[] ={};
    };
};


class CfgMagazines //Review and make sure ace ballistics and such is properly configured, also maybe make a "base" bullet for each calibre?
{

	
	class 1Rnd_HE_Grenade_shell;
	class 22nd_1Rnd_40mm_HE_base: 1Rnd_HE_Grenade_shell
	{
		author = "22nd Mod Team";
		displayNameShort = "HE-FRAG"; //UI in top right
		descriptionShort = "High Explosive Fragmentation <br />Shrapnel: High <br />Used in: M319, M302, M310";
		displayName = "40mm HE-FRAG";
		picture = "\A3\Weapons_f\Data\ui\gear_UGL_slug_CA.paa";
		initSpeed = 80;
		mass = 4;
	};

	

	class 22nd_1Rnd_40mm_HE_FRAG: 1Rnd_HE_Grenade_shell
	{
		displayNameShort = "HE-FRAG"; 
		descriptionShort = "High Explosive Fragmentation <br />Use for: Anti-personnel, Defensive <br />Used in: M319, M302, M310";
		displayName = "40mm HE-FRAG";
		picture = "\A3\Weapons_f\Data\ui\gear_UGL_slug_CA.paa";
		ammo = "22nd_G_40mm_HE";
		initSpeed = 80;
		mass = 4;
	};
	class 22nd_3Rnd_40mm_HE_FRAG: 22nd_1Rnd_40mm_HE_FRAG
	{
		count = 3;
		displayNameShort = "3rnd HE-FRAG"; 
		descriptionShort = "3rnd Stacked High Explosive Fragmentation <br />Use for: Anti-personnel, Defensive <br />Used in: M319";
		displayName = "3rnd Stack 40mm HE-FRAG";
		picture = "\A3\Weapons_f\Data\ui\gear_UGL_slug_CA.paa";
		initSpeed = 80;
		mass = 4;
	};

	class 22nd_1Rnd_40mm_HE_DP: 1Rnd_HE_Grenade_shell
	{
		displayNameShort = "HE-DP"; 
		descriptionShort = "High Explosive Dual-Purpose <br />Use: Light Vehicles, Offensive, anti-personnel   <br />Used in: M319, M302, M310";
		displayName = "40mm HE-DP";
		picture = "\A3\Weapons_f\Data\ui\gear_UGL_slug_CA.paa";
		ammo = "22nd_G_40mm_HEDP";
		initSpeed = 80;
		mass = 4;
	};
	class 22nd_3Rnd_40mm_HE_DP: 22nd_1Rnd_40mm_HE_DP
	{
		count = 3;
		displayNameShort = "3rnd HE-DP"; 
		descriptionShort = "3rnd Stacked High Explosive Dual-Purpose <br />Use for: Anti-personnel, Defensive <br />Used in: M319";
		displayName = "3rnd Stack 40mm HE-DP";
		picture = "\A3\Weapons_f\Data\ui\gear_UGL_slug_CA.paa";
		initSpeed = 80;
		mass = 4;
	};


    class 1Rnd_Smoke_Grenade_shell;
	class 22nd_1Rnd_40mm_smokeF_base: 1Rnd_Smoke_Grenade_shell
	{
		author = "Valkyrie";
		displayNameShort = "White Smoke"; //UI in top right
		descriptionShort = "40mm Smoke Flare Round - Red<br />Rounds: 1<br />Used in: M319, M302, M310";
		displayName = "Red Marker (White)";
		ammo = "G_40mm_Smoke";
		picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_white_CA.paa";
		initSpeed = 80;
		mass = 4;
	};


	class 22nd_1Rnd_40mm_smokeF_Red: 22nd_1Rnd_40mm_smokeF_base
	{
		displayNameShort = "Red Marker"; 
		descriptionShort = "40mm Marker Round - Red<br />Used for: Marking hostile assets<br />Used in: M302, M310";
		displayName = "Red Marker (Hostiles)";
		ammo = "22nd_G_40mm_smokeF_smokeRed";
		picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_red_CA.paa";
	};
	// class 22nd_3Rnd_40mm_smokeF_Red: 22nd_1Rnd_40mm_smokeF_base
	// {
	// 	count = 3;
	// 	displayNameShort = "3rnd Red Marker"; 
	// 	descriptionShort = "40mm 3rnd Stacked Marker Round - Red<br />Used for: Marking hostile assets / positions<br />Used in: M319, M302, M310";
	// 	displayName = "3rnd Red Marker (Hostiles)";
	// 	ammo = "22nd_G_40mm_smokeF_smokeRed";
	// 	picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_red_CA.paa";
	// };


	class 22nd_1Rnd_40mm_smokeF_Green: 22nd_1Rnd_40mm_smokeF_base
	{
		displayNameShort = "Green Marker"; 
		descriptionShort = "40mm Marker Round - Green<br />Rounds: 1<br />Used in: M319, M302, M310";
		displayName = "Green Marker (Green)";
		ammo = "22nd_G_40mm_smokeF_smokeGreen";
		picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_green_CA.paa";
	};
	// class 22nd_3Rnd_40mm_smokeF_Green: 22nd_1Rnd_40mm_smokeF_base
	// {
	// 	count = 3;
	// 	displayNameShort = "3rnd Green Marker"; 
	// 	descriptionShort = "3rnd Stacked 40mm Marker Round - Green<br />Rounds: 1<br />Used in: M319, M302, M310";
	// 	displayName = "Green Marker (Green)";
	// 	ammo = "22nd_G_40mm_smokeF_smokeGreen";
	// 	picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_green_CA.paa";
	// };


	class 22nd_1Rnd_40mm_smokeF_Blue: 22nd_1Rnd_40mm_smokeF_base
	{
		displayNameShort = "Blue Marker"; 
		descriptionShort = "40mm Marker Round - Blue<br />Used for marking LZs & Safe areas <br />Used in: M319, M302, M310";
		displayName = "Blue Marker (LZs and Safe areas}";
		ammo = "22nd_G_40mm_smokeF_smokeBlue";
		picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_blue_CA.paa"; 
	};
	// class 22nd_3Rnd_40mm_smokeF_Blue: 22nd_1Rnd_40mm_smokeF_base
	// {
	// 	count = 3;
	// 	displayNameShort = "3rnd Blue Marker"; 
	// 	descriptionShort = "3rnd Stacked 40mm Marker Round - Blue<br />Used for: marking friendly assets / positions/>Used in: M319, M302, M310";
	// 	displayName = "3rnd Blue Marker (Friendlies)";
	// 	ammo = "22nd_G_40mm_smokeF_smokeBlue";
	// 	picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_blue_CA.paa"; 
	// };


	class 22nd_1Rnd_40mm_smokeF_Purple: 22nd_1Rnd_40mm_smokeF_base
	{
		displayNameShort = "Purple Marker"; 
		descriptionShort = "40mm Marker Round - Purple<br />Used for: Marking position in case of MASS CAS<br />Used in: M319, M302, M310";
		displayName = "Red Marker (Purple)";
		ammo = "22nd_G_40mm_smokeF_smokePurple";
		picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_purple_CA.paa"; 
	};

	class 22nd_1Rnd_40mm_smokeF_Yellow: 22nd_1Rnd_40mm_smokeF_base
	{
		displayNameShort = "Yellow Marker"; 
		descriptionShort = "40mm Marker Round - Yellow<br />Rounds: 1<br />Used in: M319, M302, M310";
		displayName = "Yellow Marker (Resupply)";
		ammo = "22nd_G_40mm_smokeF_smokeYellow";
		picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_yellow_CA.paa"; 
	};

	class 22nd_1Rnd_40mm_smokeF_Orange: 22nd_1Rnd_40mm_smokeF_base
	{
		displayNameShort = "Orange Marker"; 
		descriptionShort = "40mm Marker Round - Orange<br />Rounds: 1<br />Used in: M319, M302, M310";
		displayName = "Orange Marker (Orange)";
		ammo = "22nd_G_40mm_smokeF_smokeOrange";
		picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_orange_CA.paa"; 
	};




	class UGL_FlareWhite_F;

	class 22nd_1Rnd_40mm_Flare_base: UGL_FlareWhite_F
	{
		author = "Valkyrie";

		ammo = "22nd_F_40mm_flareWhite";

		picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_white_CA.paa";

		initSpeed = 80;
		mass = 4;
	};

	class 22nd_1Rnd_40mm_Flare_White: 22nd_1Rnd_40mm_Flare_base
	{

		displayNameShort = "White Flare"; //UI in top right
		descriptionShort = "40mm  Flare Round - White <br />Rounds: 1<br />Used in: M319, M302, M310"; //inventory hover
		displayName = "White Flare (Illum)";

		ammo = "22nd_F_40mm_flareWhite";
		picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_white_CA.paa";
	};

	class 22nd_1Rnd_40mm_Flare_Red: 22nd_1Rnd_40mm_Flare_base //Red
	{

		displayNameShort = "Red Flare";
		descriptionShort = "40mm  Flare Round - Red<br />Rounds: 1<br />Used in: M319, M302, M310";
		displayName = "Red flare (Hostiles)";

		ammo = "22nd_F_40mm_flareRed";
		picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_red_CA.paa";
	};

	class 22nd_1Rnd_40mm_Flare_Green: 22nd_1Rnd_40mm_Flare_base //Green
	{

		displayNameShort = "Green Flare"; 
		descriptionShort = "40mm  Flare Round - Green<br />Rounds: 1<br />Used in: M319, M302, M310";
		displayName = "Green Flare";

		ammo = "22nd_F_40mm_flareGreen";
		picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_green_CA.paa";
	};

	class 22nd_1Rnd_40mm_Flare_Blue: 22nd_1Rnd_40mm_Flare_base // Blue
	{

		displayNameShort = "Blue Flare"; 
		descriptionShort = "40mm  Flare Round - Blue<br />Rounds: 1<br />Used in: M319, M302, M310";
		displayName = "Blue Flare (Friendly)";

		ammo = "22nd_F_40mm_flareBlue";
		picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_blue_CA.paa";
	};

	class 22nd_1Rnd_40mm_Flare_Purple: 22nd_1Rnd_40mm_Flare_base //Purple
	{

		displayNameShort = "Purple Flare"; 
		descriptionShort = "40mm  Flare Round - Purple<br />Rounds: 1<br />Used in: M319, M302, M310";
		displayName = "Purple Flare (Mass Cas)";

		ammo = "22nd_F_40mm_flarePurple";
		picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_purple_CA.paa";
	};

	class 22nd_1Rnd_40mm_Flare_Yellow: 22nd_1Rnd_40mm_Flare_base //Yellow
	{

		displayNameShort = "Yellow Flare"; 
		descriptionShort = "40mm  Flare Round - Yellow<br />Rounds: 1<br />Used in: M319, M302, M310";
		displayName = "Flare Round (Yellow)";

		ammo = "22nd_F_40mm_flareYellow";
		picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_yellow_CA.paa";
	};

	class 22nd_1Rnd_40mm_Flare_Orange: 22nd_1Rnd_40mm_Flare_base //Orange
	{

		displayNameShort = "Orange Flare"; 
		descriptionShort = "40mm  Flare Round - Orange<br />Rounds: 1<br />Used in: M319, M302, M310";
		displayName = "Flare Round (Orange)";

		ammo = "22nd_F_40mm_flareOrange";
		picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_orange_CA.paa";
	};

};


class CfgMagazineWells
{
	class 40MM_M319 //Bigger HE?, Crazy good concealment round, Crazy good illumination round
	{
		
		22nd_40mm_Magazines[] =
		{

			"22nd_3Rnd_40mm_HE_FRAG",
			"22nd_3Rnd_40mm_HE_DP",

			"22nd_1Rnd_40mm_HE_FRAG",
			"22nd_1Rnd_40mm_HE_DP",

			"OPTRE_3Rnd_SmokeBlue_Grenade_shell",
			"OPTRE_3Rnd_SmokeGreen_Grenade_shell",
			"OPTRE_3Rnd_SmokeOrange_Grenade_shell",
			"OPTRE_3Rnd_SmokePurple_Grenade_shell",
			"OPTRE_3Rnd_SmokeRed_Grenade_shell",
			"OPTRE_3Rnd_Smoke_Grenade_shell",
			"OPTRE_3Rnd_SmokeYellow_Grenade_shell",

			"3Rnd_SmokeBlue_Grenade_shell",
			"3Rnd_SmokeGreen_Grenade_shell",
			"3Rnd_SmokeOrange_Grenade_shell",
			"3Rnd_SmokePurple_Grenade_shell",
			"3Rnd_SmokeRed_Grenade_shell",
			"3Rnd_Smoke_Grenade_shell",
			"3Rnd_SmokeYellow_Grenade_shell",

			"OPTRE_1Rnd_SmokeBlue_Grenade_shell",
			"OPTRE_1Rnd_SmokeGreen_Grenade_shell",
			"OPTRE_1Rnd_SmokeOrange_Grenade_shell",
			"OPTRE_1Rnd_SmokePurple_Grenade_shell",
			"OPTRE_1Rnd_SmokeRed_Grenade_shell",
			"OPTRE_1Rnd_Smoke_Grenade_shell",
			"OPTRE_1Rnd_SmokeYellow_Grenade_shell",

			"ACE_40mm_Pike",
			"ACE_HuntIR_M203",
			"ACE_40mm_Flare_white",
			"ACE_40mm_Flare_green",
			"ACE_40mm_Flare_red",
			"ACE_40mm_Flare_ir",


			"OPTRE_signalSmokeB",
			"OPTRE_signalSmokeG",
			"OPTRE_signalSmokeO",
			"OPTRE_signalSmokeP",
			"OPTRE_signalSmokeR",
			"OPTRE_signalSmokeY",
	
			"1Rnd_SmokeBlue_Grenade_shell",
			"1Rnd_SmokeGreen_Grenade_shell",
			"1Rnd_SmokeOrange_Grenade_shell",
			"1Rnd_SmokePurple_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_SmokeYellow_Grenade_shell",
		};
	};

	class 40MM_M302
	{
		
		22nd_40mm_Magazines[] =
		{

			"22nd_1Rnd_40mm_HE_FRAG",
			"22nd_1Rnd_40mm_HE_DP",

			"OPTRE_1Rnd_SmokeBlue_Grenade_shell",
			"OPTRE_1Rnd_SmokeGreen_Grenade_shell",
			"OPTRE_1Rnd_SmokeOrange_Grenade_shell",
			"OPTRE_1Rnd_SmokePurple_Grenade_shell",
			"OPTRE_1Rnd_SmokeRed_Grenade_shell",
			"OPTRE_1Rnd_Smoke_Grenade_shell",
			"OPTRE_1Rnd_SmokeYellow_Grenade_shell",

			"ACE_40mm_Pike",
			"ACE_HuntIR_M203",
			"ACE_40mm_Flare_white",
			"ACE_40mm_Flare_green",
			"ACE_40mm_Flare_red",
			"ACE_40mm_Flare_ir",


			"OPTRE_signalSmokeB",
			"OPTRE_signalSmokeG",
			"OPTRE_signalSmokeO",
			"OPTRE_signalSmokeP",
			"OPTRE_signalSmokeR",
			"OPTRE_signalSmokeY",
	
			"1Rnd_SmokeBlue_Grenade_shell",
			"1Rnd_SmokeGreen_Grenade_shell",
			"1Rnd_SmokeOrange_Grenade_shell",
			"1Rnd_SmokePurple_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_SmokeYellow_Grenade_shell",
		};
	};

	class 40MM_M310
	{
		
		22nd_40mm_Magazines[] =
		{

			"OPTRE_1Rnd_SmokeBlue_Grenade_shell",
			"OPTRE_1Rnd_SmokeGreen_Grenade_shell",
			"OPTRE_1Rnd_SmokeOrange_Grenade_shell",
			"OPTRE_1Rnd_SmokePurple_Grenade_shell",
			"OPTRE_1Rnd_SmokeRed_Grenade_shell",
			"OPTRE_1Rnd_Smoke_Grenade_shell",
			"OPTRE_1Rnd_SmokeYellow_Grenade_shell",

			"ACE_HuntIR_M203",
			"ACE_40mm_Flare_white",
			"ACE_40mm_Flare_green",
			"ACE_40mm_Flare_red",
			"ACE_40mm_Flare_ir",


			"OPTRE_signalSmokeB",
			"OPTRE_signalSmokeG",
			"OPTRE_signalSmokeO",
			"OPTRE_signalSmokeP",
			"OPTRE_signalSmokeR",
			"OPTRE_signalSmokeY",
	
			"1Rnd_SmokeBlue_Grenade_shell",
			"1Rnd_SmokeGreen_Grenade_shell",
			"1Rnd_SmokeOrange_Grenade_shell",
			"1Rnd_SmokePurple_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_SmokeYellow_Grenade_shell",
		};
	};
};


//For insipiration / ideas

// class OPTRE_B_762x51_SLAP_Tracer: OPTRE_B_762x51_Tracer
// 	{
// 		aiAmmoUsageFlags = "64 + 128 + 256 + 512";
// 		cost = 0.25; //to encourage its use
// 		caliber = 1.4;
// 		hit = 10;
// 		triggerTime = 0.221; //500 meters
// 		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
// 		submunitionConeAngle = 0;
// 		submunitionCount = 1;
// 		submunitionAmmo = "OPTRE_B_762x51_SLAP_Submunition_Tracer";
// 		tracerScale = 4;
// 		deleteParentWhenTriggered = 1;
// 		//submunitionParentSpeedCoef = 1.5;
// 		//submunitionInitSpeed = 1000;
// 		// class EventHandlers
// 		// {
// 		// 	init = "systemChat format ['%1, velo:%2, dist:%3', time, vectorMagnitude (velocity (_this#0)), ace_player distance _this#0]";
// 		// };
// 	}; 
// 	class OPTRE_B_762x51_SLAP_Submunition_Tracer: OPTRE_B_762x51_Tracer
// 	{
// 		aiAmmoUsageFlags = "64 + 128 + 256 + 512";
// 		cost = 0.25; //to encourage its use
// 		model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
// 		tracerScale = 0.5;
// 		tracerStartTime = 0;
// 		tracerEndTime = 15;
// 		caliber = 15;
// 		hit = 18; //but remember the typical speed
// 		//15 = 0.41
// 		//762 is airFriction = -0.00103711;
// 		//airFriction = -0.00035;

// 		typicalSpeed = 900;//when it spawns at 0.221 seconds, its roughly 970 m/s
// 		// class EventHandlers
// 		// {
// 		// 	init = "systemChat format ['%1, velo:%2, dist:%3', time, vectorMagnitude (velocity (_this#0)), ace_player distance _this#0]";
// 		// };
// 	};
