
class CfgPatches
{
    class 22nd_weapons_ammo_gl
    {
        addonRootClass = "22nd_weapons_ammo";
        author = "22nd Mod Team";

        requiredVersion = 0.1;

        requiredAddons[] =
        {
			"cba_main",
            "A3_Data_F",
            "A3_Weapons_F",
			"OPTRE_Weapons_GL",
            "OPTRE_Weapons_Ammo_Signal_Smoke",
            "22nd_weapons"
        };

        units[] = {};
        weapons[] ={};
    };
};


class CfgAmmo 
{

	// ACE_frag_tiny        For reference these are the ACE shrapnel types as seen here https://ace3.acemod.org/wiki/framework/frag-framework , HD sounds for high drag (so they won't go as far) , combined with a whole bunch of other settings on that page we can adjust the damage shrapnel does.
	// ACE_frag_tiny_HD
	// ACE_frag_small
	// ACE_frag_small_HD
	// ACE_frag_medium
	// ACE_frag_medium_HD
	// ACE_frag_large
	// ACE_frag_large_HD
	// ACE_frag_huge
	// ACE_frag_huge_HD



	class G_40mm_HE;
	class G_40mm_HEDP;
	class 22nd_G_40mm_HE: G_40mm_HE
	{
		hit = 80;
		caliber = 4;
		indirectHit = 15;
		indirectHitRange = 6;
		fuseDistance = 15; 
		suppressionRadiusHit = 24;

		ace_frag_charge = 32;
		ace_frag_classes[] = {"ACE_frag_small","ACE_frag_medium_HD","ACE_frag_medium"};
		ace_frag_force = 1;
		ace_frag_metal = 200;
	};

	class 22nd_G_40mm_HEDP: G_40mm_HEDP
	{
		hit = 80;
		caliber = 8;
		indirectHit = 12;
		indirectHitRange = 6;

		ace_frag_charge = 32;
		ace_frag_classes[] = {"ACE_frag_tiny_HD"};
		ace_frag_force = 1;
		ace_frag_metal = 50;
	};



	// class 22nd_G_40mm_HEDP
	// class 22nd_G_40mm_HE-T
	// class 22nd_G_40mm_Stinger
	// class 22nd_G_40mm_Flash


    ////// Smokes with Flares //////


	class G_40mm_Smoke;
	class F_40mm_White;
	class 22nd_G_40mm_smokeF_flareBase: G_40mm_Smoke
	{
		model="\A3\weapons_f\Ammo\UGL_Flare";					
		airFriction=0;
		sideairFriction=0;
		triggerTime=9.9999999e-009;
		coefGravity=0.1;
		thrust=50;
		simulation="shotIlluminating";
		effectFlare="OPTRE_FlareShell";
		explosionTime=0.1;
		timetolive=120;
		initspeed=25;
		size=5;
		typicalSpeed=25;
		flare=1;
		lightColor[]={0.84380001,0.1383,0.1353,1};
		smokeColor[]={0.84380001,0.1383,0.1353,1};
		brightness=1;
		intensity=1;
		flareSize=1;
		flareAirFriction=0;
	};
	class 22nd_G_40mm_smokeF_smokeBase: G_40mm_Smoke
	{
		effectsSmoke="SmokeShellRedEffect";
		fuseDistance=0;
		model="\A3\weapons_f\Ammo\UGL_slug";
		simulation="shotSmoke";
		submunitionAmmo="22nd_G_40mm_smokeF_flareBase";
		deleteParentWhenTriggered=0; //kinda neat 
		initspeed=25;
		deflecting = 0;
		deflectionSlowDown = -1;
		typicalSpeed=25;
		submunitionConeType[]=
		{
			"randomCenter",
			2
		};
		submunitionConeAngle=360;
		ACE_muzzleVelocities[]={25};
		triggerTime=1;
		smokeColor[]={0.84380001,0.1383,0.1353,1};
	};
	



	//Red//

	class 22nd_G_40mm_smokeF_flareRed: 22nd_G_40mm_smokeF_flareBase //Red Flare
	{
	lightColor[]={0.84380001,0.1383,0.1353,1};
	smokeColor[]={0.84380001,0.1383,0.1353,1};
	};
	class 22nd_G_40mm_smokeF_smokeRed: 22nd_G_40mm_smokeF_smokeBase //Red Smoke
	{
    smokeColor[]={0.84380001,0.1383,0.1353,1};
	submunitionAmmo="22nd_G_40mm_smokeF_flareRed"; // Flare goes here
	};


	//Orange//

	class 22nd_G_40mm_smokeF_flareOrange: 22nd_G_40mm_smokeF_flareBase  //Orange Flare
	{
		lightColor[]={0.66970003,0.22750001,0.10053,1};
		smokeColor[]={0.66970003,0.22750001,0.10053,1};
	};

	class 22nd_G_40mm_smokeF_smokeOrange: 22nd_G_40mm_smokeF_smokeBase //Orange Smoke
	{
		submunitionAmmo="22nd_G_40mm_smokeF_flareOrange";
		smokeColor[]={0.66970003,0.22750001,0.10053,1};
	};


	//Yellow


	class 22nd_G_40mm_smokeF_flareYellow: 22nd_G_40mm_smokeF_flareBase //Yellow Flare
	{
		lightColor[]={0.98830003,0.86059999,0.071900003,1};
		smokeColor[]={0.98830003,0.86059999,0.071900003,1};
	};

	class 22nd_G_40mm_smokeF_smokeYellow: 22nd_G_40mm_smokeF_smokeBase //Yellow Smoke
	{
		submunitionAmmo="22nd_G_40mm_smokeF_flareYellow";
		smokeColor[]={0.98830003,0.86059999,0.071900003,1};
	};


    //Green

	class 22nd_G_40mm_smokeF_flareGreen: 22nd_G_40mm_smokeF_flareBase //Green Flare
	{
		lightColor[]={0.25,0.5,0.25,1};
		smokeColor[]={0.25,0.5,0.25,1};
	};

	class 22nd_G_40mm_smokeF_smokeGreen: 22nd_G_40mm_smokeF_smokeBase //Green Smoke
	{
		submunitionAmmo="22nd_G_40mm_smokeF_flareGreen";
		smokeColor[]={0.25,0.5,0.25,1};
	};

	//Blue

	class 22nd_G_40mm_smokeF_flareBlue: 22nd_G_40mm_smokeF_flareBase
	{
		lightColor[]={0.1183,0.1867,1,1};
		smokeColor[]={0.1183,0.1867,1,1};
	};
	class 22nd_G_40mm_smokeF_smokeBlue: 22nd_G_40mm_smokeF_smokeBase
	{
		submunitionAmmo="22nd_G_40mm_smokeF_flareBlue";
		smokeColor[]={0.1183,0.1867,1,1};
	};


	//Purple

	class 22nd_G_40mm_smokeF_flarePurple: 22nd_G_40mm_smokeF_flareBase
	{
		lightColor[]={0.4341,0.1388,0.41440001,1};
		smokeColor[]={0.4341,0.1388,0.41440001,1};
	};
	class 22nd_G_40mm_smokeF_smokePurple: 22nd_G_40mm_smokeF_smokeBase
	{
		submunitionAmmo="22nd_G_40mm_smokeF_flarePurple";
		smokeColor[]={0.4341,0.1388,0.41440001,1};
	};



	////////// Flares /////////

    class 22nd_F_40mm_flarebase: F_40mm_White
	{
		affectedByWind = 1;
		flareSize = 50;
		brightness = 150000;
		intensity = 200000;
		lightColor[] = {0.5,0.5,0.5,0.5};
		smokeColor[] = {0.5,0.5,0.5,0.5};
		timeToLive = 90;
		flareAirFriction = -1.1;
	};

	 class 22nd_F_40mm_flareWhite: 22nd_F_40mm_flarebase
	{

		lightColor[] = {0.5,0.5,0.6,0.5};
		smokeColor[] = {0.5,0.5,0.6,0.5};
	};

	 class 22nd_F_40mm_flareRed: 22nd_F_40mm_flarebase
	{
		lightColor[] = {0.5,0.25,0.25,0};
		smokeColor[] = {0.5,0.5,0.5,0.5};
	};

	 class 22nd_F_40mm_flareGreen: 22nd_F_40mm_flarebase
	{

		lightColor[]={0.25,0.5,0.25,1};
		smokeColor[]={0.25,0.5,0.25,1};
	};

	class 22nd_F_40mm_flareBlue: 22nd_F_40mm_flarebase
	{

		lightColor[]={0.1183,0.1867,1,1};
		smokeColor[]={0.1183,0.1867,1,1};
	};

	class 22nd_F_40mm_flareYellow: 22nd_F_40mm_flarebase
	{

		lightColor[]={0.98830003,0.86059999,0.071900003,1};
		smokeColor[]={0.98830003,0.86059999,0.071900003,1};
	};

	class 22nd_F_40mm_flarePurple: 22nd_F_40mm_flarebase
	{

		lightColor[]={0.4341,0.1388,0.41440001,1};
		smokeColor[]={0.4341,0.1388,0.41440001,1};
	};

	class 22nd_F_40mm_flareOrange: 22nd_F_40mm_flarebase
	{

		lightColor[]={0.66970003,0.22750001,0.10053,1};
		smokeColor[]={0.66970003,0.22750001,0.10053,1};
	};


	////////// Impact Smokes /////////
	
	class G_40mm_SmokeRed;
	class G_40mm_SmokeGreen;
	class G_40mm_SmokeYellow;
	class G_40mm_SmokePurple;
	class G_40mm_SmokeBlue;
	class G_40mm_SmokeOrange; // gonna inherit from vanilla incase optre changes any values that affect function

	class 22nd_G_40mm_smokeWhite: G_40mm_Smoke
	{

		explosionEffects = "OPTRE_Effect_GL_White";
		deflecting=5;
		explosive = 1;
		simulation = "shotShell";
		explosionTime = 0;
		fuseDistance = 0;
		timetolive = 60;
	};
	class 22nd_G_40mm_smokeRed: G_40mm_SmokeRed
	{
		explosionEffects = "OPTRE_Effect_GL_Red";
		deflecting=5;
		explosive = 1;
		simulation = "shotShell";
		explosionTime = 0;
		fuseDistance = 0;
		timetolive = 60;
	};
	class 22nd_G_smokeGreen: G_40mm_SmokeGreen
	{
		explosionEffects = "OPTRE_Effect_GL_Green";
		deflecting=5;
		explosive = 1;
		simulation = "shotShell";
		explosionTime = 0;
		fuseDistance = 0;
		timetolive = 60;
	};
	class 22nd_G_smokeYellow: G_40mm_SmokeYellow
	{

		explosionEffects = "OPTRE_Effect_GL_Yellow";
		deflecting=5;
		explosive = 1;
		simulation = "shotShell";
		explosionTime = 0;
		fuseDistance = 0;
		timetolive = 60;
	};
	class 22nd_G_40mm_smokePurple: G_40mm_SmokePurple
	{

		explosionEffects = "OPTRE_Effect_GL_Purple";
		deflecting=5;
		explosive = 1;
		simulation = "shotShell";
		explosionTime = 0;
		fuseDistance = 0;
		timetolive = 60;
	};
	class 22nd_G_40mm_smokeBlue: G_40mm_SmokeBlue
	{
		explosionEffects = "OPTRE_Effect_GL_Blue";
		deflecting=5;
		explosive = 1;
		simulation = "shotShell";
		explosionTime = 0;
		fuseDistance = 0;
		timetolive = 60;
	};
	class 22nd_G_40mm_smokeOrange: G_40mm_SmokeOrange
	{
		explosionEffects = "OPTRE_Effect_GL_Orange";
		deflecting=5;
		explosive = 1;
		simulation = "shotShell";
		explosionTime = 0;
		fuseDistance = 0;
		timetolive = 60;
	};


	////////// Smoke Screen ////////// Will do after the standard stuff is in (cluster smoke round essentially)

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
