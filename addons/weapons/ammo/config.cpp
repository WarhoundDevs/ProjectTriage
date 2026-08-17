
class CfgPatches
{
    class 22nd_weapons_ammo
    {
        addonRootClass = "22nd_weapons_ammo";
        author = "22nd Mod Team";

        requiredVersion = 0.1;

        requiredAddons[] =
        {
			"cba_main",
            "A3_Data_F",
            "A3_Weapons_F",
            "OPTRE_Weapons_AR",
            "22nd_weapons"
        };

        units[] = {};
        weapons[] ={};
    };
};


class CfgAmmo //Review and make sure ace ballistics and such is properly configured, also maybe make a "base" bullet for each calibre?
{
	class BulletBase;
    class B_762x51_Ball;
    class B_12Gauge_Slug;
	class B_12Gauge_Pellets_Submunition;
	class B_12Gauge_Pellets_Submunition_Deploy;
	class B_65x39_Case;
	class B_65x39_Caseless;
	class B_45ACP_Ball_Yellow;
	class B_127x99_Ball;
	class B_127x33_Ball;
	class B_20mm_AP;

	/// Shotgun ///

	

	class 22nd_B_8g_Magnum: B_12Gauge_Pellets_Submunition_Deploy
	{
		hit=7;
		caliber=4;
		typicalSpeed=360;
		triggerDistance=0;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		tracerScale = 0.3;
		tracerStartTime = 0;
		tracerEndTime = 2;
	};
	

	class 22nd_B_8g_Moa: B_12Gauge_Pellets_Submunition_Deploy
	{
		hit=3.5;
		caliber=3;
		typicalSpeed=420;
		triggerDistance=0;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
		tracerScale = 0.1;
		tracerStartTime = 0;
		tracerEndTime = 2;
	};

	class 22nd_B_8g_Hound: B_12Gauge_Pellets_Submunition_Deploy
	{
		hit=12;
		airFriction = -0.00103711;
		caliber=3;
		typicalSpeed=700;
		triggerDistance=0;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerScale = 0.8;
		tracerStartTime = 0;
		tracerEndTime = 4;
	};

	class 22nd_B_8g_Flash: BulletBase
	{
		hit = 0;
        indirectHit = 0;
        indirectHitRange = 0;
		airFriction = -0.001;
		caliber=0.5;
		explosionEffects = "ExploFlashbang";  // reuse vanilla/ACE flash effect class name if present in your load order
        soundHit[] = {"", 0, 1};              // silence the default bullet-hit sound so it doesn't play alongside the bang
        multiSoundHit[] = {};
        multiSoundHitEffect[] = {};
		explosionTime = 1.3;
		deflecting = 80;
		deflectionSlowDown = 0.2;
		ace_grenades_flashbang = 1;
		ace_grenades_flashbangBangs = 1;
		ace_grenades_flashbangInterval = 0.05;
		ace_grenades_flashbangIntervalMaxDeviation = 0.001;
		timeToLive = 2;
		typicalSpeed=700;
		fuseDistance = 0;
		whistleOnFire = 0;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
		tracerScale = 1;
	};

	class 22nd_B_8g_Magnum_shell: B_12Gauge_Pellets_Submunition
	{
		submunitionAmmo="22nd_B_8g_Magnum";
		submunitionConeAngle=0.6;
		submunitionConeType[]=
		{
			"poissondisc",
			16
		};
		submunitionInitSpeed=400;
		submunitionParentSpeedCoef=0;
		triggerTime=0;
		timeToLive=6;
		triggerDistance=0;

		typicalSpeed=900;
		indirectHit=0;
		indirectHitRange=0;
		explosive=0;
		fuseDistance=0;
		hit=10;
		caliber=3;
		thrust=210;
	};

	class 22nd_B_8g_Moa_shell: B_12Gauge_Pellets_Submunition
	{
		submunitionAmmo="22nd_B_8g_Moa";
		submunitionConeAngle=1.2;
		submunitionConeType[]=
		{
			"poissondisc",
			32
		};

		submunitionInitSpeed=350;
		submunitionParentSpeedCoef=0;
		triggerTime=0;
		timeToLive=6;
		triggerDistance=0;

		typicalSpeed=900;
		indirectHit=0;
		indirectHitRange=0;
		explosive=0;
		fuseDistance=0;
		hit=10;
		caliber=3;
		thrust=210;
		
	};

	class 22nd_B_8g_Hound_shell: B_12Gauge_Pellets_Submunition
	{
		submunitionAmmo="22nd_B_8g_Hound";
		submunitionConeAngle=0.1;
		submunitionConeType[]=
		{
			"poissondisc",
			6
		};
		submunitionInitSpeed=600;
		submunitionParentSpeedCoef=0;
		triggerTime=0;
		timeToLive=6;
		triggerDistance=0;

		typicalSpeed=900;
		indirectHit=0;
		indirectHitRange=0;
		explosive=0;
		fuseDistance=0;
		hit=10;
		caliber=3;
		thrust=210;
	};

	class 22nd_B_8g_Slug_AP: B_12Gauge_Slug //switch to vanilla base class and make tracer
	{
		hit=40;
		caliber=4.5;
		typicalSpeed=360;
		triggerDistance=0;
	};

	class 22nd_B_8g_Slug_Flash: B_12Gauge_Slug //switch to vanilla base class and make tracer
	{
		hit=0;
		caliber=1;
		typicalSpeed=360;
		submunitionAmmo="22nd_B_8g_Flash";
		submunitionConeAngle=1;
		submunitionConeType[]=
		{
			"poissondisc",
			6
		};
		triggerOnImpact=1;
		submunitionInitSpeed=200;
		submunitionParentSpeedCoef=0;
		timeToLive=6;
	};

	/// Rifle ///

    class 22nd_B_762x51_FMJ : B_762x51_Ball //FMJ Used in MA37, 
    {
        caliber = 2.125;
        timetolive = 15;
        hit = 12;
		airFriction = -0.00032;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
    };

	class 22nd_B_762x51_HVAP : B_762x51_Ball //FMJ Used in MA37, 
    {
        caliber = 2.315;
        timetolive = 15;
		airFriction = -0.00025;
        hit = 18;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
    };

	class 22nd_B_95x40: B_65x39_Case
	{
		caliber=2.3;
		airFriction = -0.00030;
		hit=17;
		model="\A3\Weapons_f\Data\bullettracer\tracer_yellow";
	};
	
	class 22nd_B_114x90: B_127x99_Ball
	{
		caliber = 2.6;
		airFriction = -0.0022;
		hit = 24;
		model="\A3\Weapons_f\Data\bullettracer\tracer_yellow";
	};

	class 22nd_B_127x99: B_127x99_Ball
	{
		caliber = 2.6;
		
		hit = 35;
		model="\A3\Weapons_f\Data\bullettracer\tracer_yellow";
	};

	class 22nd_B_145x114: B_20mm_AP
	{
		caliber = 4.2;
		airFriction = -0.00015;
		hit = 80;
		model="\A3\Weapons_f\Data\bullettracer\tracer_yellow";
	};

	/// SMG + Pistol ///

    class 22nd_B_10x31: B_45ACP_Ball_Yellow
	{
		caliber=2.3;
		hit=4;
		airFriction = -0.00062437;
		model="\A3\Weapons_f\Data\bullettracer\tracer_yellow";
	};

	class 22nd_B_5x23: B_65x39_Caseless
	{
		caliber=1.8;
		airFriction = -0.00042437;
		hit=9;
		model="\A3\Weapons_f\Data\bullettracer\tracer_yellow";
	};

	class 22nd_B_127x40_FMJ: B_127x33_Ball
	{
		caliber=2.5;
		hit=18;
		airFriction = -0.00055706;
		cartridge = "FxCartridge_9mm";
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
