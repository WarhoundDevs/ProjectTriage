
class CfgPatches
{
    class 22nd_weapons_magazines
    {
        addonRootClass = "22nd_weapons";

        requiredVersion = 0.1;

        requiredAddons[] =
        {
			"cba_main",
            "A3_Data_F",
            "A3_Weapons_F",
			"OPTRE_Weapons_Ammo", //find optre magazine dependency
            "22nd_weapons"
        };

        units[] = {};
        weapons[] ={};
    };
};


class CfgMagazines
{
	class OPTRE_32Rnd_762x51_Mag;
	class OPTRE_36Rnd_95x40_Mag;
	class OPTRE_60Rnd_5x23mm_Mag;
	class OPTRE_6Rnd_8Gauge_Pellets;
	class OPTRE_6Rnd_8Gauge_Slugs;
	
	class OPTRE_8Rnd_127x40_Mag;
	class OPTRE_16Rnd_127x40_Black_Mag;
	class OPTRE_12Rnd_127x40_Mag;
    class OPTRE_15Rnd_762x51_Mag;
	class OPTRE_4Rnd_145x114_APFSDS_Mag;
	class OPTRE_25Rnd_762x51_AP_Mag;
	


	////  naming convention               22nd_32nd_762x51_FMJ
	//                                    ^prefix  ^amount ^Ammo ^ Type

	/// Shotgun ///

	class 22nd_6rnd_m45_Magnum: OPTRE_6Rnd_8Gauge_Pellets
	{
		count=8;
		mass=8;
		initspeed=500;
		displayName="6rnd 08-GA 0000 Magnum";
		displayNameShort="6rnd 08 MAGNUM";
		descriptionShort="6rnd 08-GA 0000 Magnum";
		ammo="22nd_B_8g_Magnum_shell";
		tracersEvery=1;
	};

	class 22nd_2rnd_m45_Magnum: OPTRE_6Rnd_8Gauge_Pellets // Front load
	{
		count=2;
		mass=2;
		initspeed=500;
		displayName="2rnd FRONT 08-GA 0000 Magnum";
		displayNameShort="2rnd FRONT 08 MAGNUM";
		descriptionShort="6rnd 08-GA 0000 Magnum";
		ammo="22nd_B_8g_Magnum_shell";
		tracersEvery=1;
	};

	class 22nd_6rnd_m45_Moa: OPTRE_6Rnd_8Gauge_Pellets
	{
		count=8;
		mass=8;
		initspeed=500;
		displayName="6rnd 08-GA 00B Moa-shot";
		displayNameShort="6rnd 08 00B MOA";
		descriptionShort="6rnd 08-GA 00B Moa-shot";
		ammo="22nd_B_8g_Moa_shell";
		tracersEvery=1;
	};

	class 22nd_6rnd_m45_Hound: OPTRE_6Rnd_8Gauge_Pellets
	{
		count=8;
		mass=8;
		initspeed=500;
		displayName="6rnd 08-GA 0022 Hound-shot";
		displayNameShort="6rnd 08 HOUND";
		descriptionShort="6rnd 08-GA 0022 Hound-shot";
		ammo="22nd_B_8g_Hound_shell";
		tracersEvery=1;
	};

	class 22nd_6rnd_M45_Slug: OPTRE_6Rnd_8Gauge_Slugs
	{
		count=8;
		mass=8;
		initspeed=800;
		displayName="6rnd 08 Gauge AP Slug";
		displayNameShort="6rnd 8g AP Slug";
		descriptionShort="6rnd 8g AP Slug";
		ammo="22nd_B_8g_Slug_AP";
		tracersEvery=1;
	};

	class 22nd_6rnd_m45_Flash: OPTRE_6Rnd_8Gauge_Slugs
	{
		count=8;
		mass=8;
		initspeed=400;
		displayName="6rnd 08-GA Flash-shot";
		displayNameShort="6rnd 08 Flash";
		descriptionShort="6rnd 08-GA Flash";
		ammo="22nd_B_8g_Flash";
		tracersEvery=1;
	};

	class 22nd_3rnd_m45_Flash: OPTRE_6Rnd_8Gauge_Pellets
	{
		count=2;
		mass=8;
		initspeed=400;
		displayName="3rnd 08-GA Flash-shot";
		displayNameShort="3rnd 08 Flash";
		descriptionShort="3rnd 08-GA Flash";
		ammo="22nd_B_8g_Flash";
		tracersEvery=1;
	};

	/// Rifle ///
	class 22nd_32nd_762x51_FMJ : OPTRE_32Rnd_762x51_Mag /// Used in MA5C, DMR (back up), ///
	{
		displayName = "32rnd 762x51 FMJ magazine";
		displayNameShort = "32rnd 762x51 FMJ";
		descriptionShort = "32rnds of 762x51 Full Metal Jacket <br /> Specs:  High <br />Used in: M319, M302, M310";

		count = 32; 

		mass = 15;

		initSpeed = 800;

		ammo = "22nd_B_762x51_FMJ";

		tracersEvery = 3;

		modelSpecial = "";
		modelSpecialIsProxy = 0;
	};


	class 22nd_32rnd_762x51_Tracer : 22nd_32nd_762x51_FMJ
	{
		displayName = "32rnd Universal Mag (Tracer)";

		tracersEvery = 1;
	};

	class 22nd_36nd_95x40_FMJ: OPTRE_36Rnd_95x40_Mag
	{
		count=36;
		mass=15;
		initspeed=950;
		displayName="36rnd BR55 Mag";
		displayNameShort="36rnd 9.5x40";
		descriptionShort="36rnd 9.5x40";
		ammo="22nd_B_95x40";
		tracersEvery=1;
	};

	

	class 22nd_20nd_762x51_HVAP: OPTRE_15Rnd_762x51_Mag
	{
		count=20;
		mass=15;
		initspeed=950;
		displayName="36rnd BR55 Mag";
		displayNameShort="36rnd 9.5x40";
		descriptionShort="36rnd 9.5x40";
		ammo="22nd_B_762x51_HVAP";
		tracersEvery=1;
	};

	class 22nd_15nd_114x90_FMJ: OPTRE_25Rnd_762x51_AP_Mag
	{
		count=15;
		mass=15;
		initspeed=1050;
		displayName="36rnd BR55 Mag";
		displayNameShort="36rnd 9.5x40";
		descriptionShort="36rnd 9.5x40";
		ammo="22nd_B_114x90";
		tracersEvery=1;
	};

	
	class 22nd_6nd_145x114_APFSDS: OPTRE_4Rnd_145x114_APFSDS_Mag
	{
		count=6;
		mass=10;
		initspeed=1200;
		displayName="6rnd SRS99 APFSDS Mag";
		displayNameShort="6rnd 14.5x114";
		descriptionShort="6rnd 14.5x114";
		ammo="22nd_B_145x114";
		tracersEvery=1;
	};

	

	/// MG ///

	
	// M73 //

	class OPTRE_100rnd_95x40_Box;
	class 22nd_100rnd_95x40_tracer: OPTRE_100rnd_95x40_Box
	{
		count=100;
		mass=15;
		initspeed=950;
		displayName="100rnd M73 Box (Tracer)";
		displayNameShort="100rnd 95x40";
		descriptionShort="100rnd 95x40";
		ammo="22nd_B_95x40";
		tracersEvery=1;
	};
	class 22nd_100rnd_95x40_FMJ: OPTRE_100rnd_95x40_Box
	{
		count=100;
		mass=15;
		initspeed=950;
		displayName="100rnd M73 Box (Mixed)";
		displayNameShort="100rnd 762x51";
		descriptionShort="100rnd 762x51";
		ammo="22nd_B_95x40";
		tracersEvery=3;
	};


	// M247A1 //

	class OPTRE_200Rnd_762x51_M118_M247A1_Box;
	class 22nd_125rnd_762x51_FMJ: OPTRE_200Rnd_762x51_M118_M247A1_Box
	{
		count=125;
		mass=15;
		initspeed=750;
		displayName="125rnd M247A1 Box (Mixed)";
		displayNameShort="150rnd 762x51";
		descriptionShort="150rnd 762x51";
		ammo="22nd_B_762x51_FMJ";
		tracersEvery=3;
	};

	class 22nd_250rnd_762x51_FMJ: OPTRE_200Rnd_762x51_M118_M247A1_Box
	{
		count=250;
		mass=15;
		initspeed=750;
		displayName="250rnd M73 Box (Mixed)";
		displayNameShort="250rnd 762x51";
		descriptionShort="250rnd 762x51";
		ammo="22nd_B_762x51_FMJ";
		tracersEvery=3;
	};


	// m250

	class OPTRE_50Rnd_127x99_M250_Box;
	class 22nd_50rnd_127x99: OPTRE_50Rnd_127x99_M250_Box
	{
		count=100;
		mass=15;
		initspeed=800;
		displayName="100rnd M250 Box (FMJ)";
		displayNameShort="100rnd 127x99";
		descriptionShort="100rnd 127x99";
		ammo="22nd_B_127x99";
		tracersEvery=3;
	};


	/// SMG + Pistol ///

	class 22nd_mag_M6C: OPTRE_12Rnd_127x40_Mag
	{
		count=16;
		mass=6;
		initspeed=600;
		displayName="16rnd M6C mag";
		displayNameShort="16rnd 9.5x40";
		descriptionShort="16rnd 9.5x40";
		ammo="22nd_B_5x23";
		tracersEvery=1;
	};
	class 22nd_mag_M6C_AP: OPTRE_12Rnd_127x40_Mag
	{
		count=8;
		mass=6;
		initspeed=1000;
		displayName="8rnd AP M6C Mag";
		displayNameShort="8rnd AP 9.5x40";
		descriptionShort="8rnd AP 9.5x40";
		ammo="22nd_5x23_AP";
		tracersEvery=1;
	};
	class 22nd_mag_M6C_SS: OPTRE_12Rnd_127x40_Mag
	{
		count=16;
		mass=6;
		initspeed=320;
		displayName="16rnd SS M6C Mag";
		displayNameShort="16rnd SS 9.5x40";
		descriptionShort="16rnd SS 9.5x40";
		ammo="22nd_5x23_SS";
		tracersEvery=1;
	};

	class 22nd_8Rnd_127x40_Mag: OPTRE_8Rnd_127x40_Mag
	{
		count=8;
		mass=7;
		initspeed=900;
		displayName="8rnd AP M6G Mag";
		displayNameShort="8rnd AP 127x40";
		descriptionShort="8rnd AP 127x40";
		ammo="22nd_B_127x40_FMJ"; //change to magnum round
		tracersEvery=1;
	};

	class 22nd_16Rnd_127x40_Mag: OPTRE_16Rnd_127x40_Black_Mag
	{
		count=16;
		mass=15;
		initspeed=900;
		displayName="16rnd AP M6G Mag";
		displayNameShort="16rnd AP 127x40";
		descriptionShort="8rnd AP 127x40";
		ammo="22nd_B_127x40_FMJ"; //change to magnum round
		tracersEvery=1;
	};



	

	class 22nd_mag_M7: OPTRE_60Rnd_5x23mm_Mag
	{
		count=48;

		mass=12;

		initspeed=650;

		displayName="48rnd M7 Mag";
		displayNameShort="48rnd 9.5x40";
		descriptionShort="48rnd 9.5x40";

		ammo="22nd_B_5x23";
		tracersEvery=1;
	};
	class 22nd_mag_M7_AP: OPTRE_60Rnd_5x23mm_Mag
	{
		count=32;

		mass=12;

		initspeed=900;

		displayName="32rnd AP M7 Mag";
		displayNameShort="32rnd AP 9.5x40";
		descriptionShort="32rnd AP  9.5x40";

		ammo="22nd_B_5x23_AP";
		tracersEvery=1;
	};
	class 22nd_mag_M7_SS: OPTRE_60Rnd_5x23mm_Mag
	{
		count=48;

		mass=12;

		initspeed=320;

		displayName="48rnd SS M7 Mag";
		displayNameShort="48rnd SS 9.5x40";
		descriptionShort="48rnd SS 9.5x40";

		ammo="22nd_B_5x23_SS";
		tracersEvery=1;
	};

	class 22nd_AudioTest_Mag : 22nd_32nd_762x51_FMJ
	{
		displayName = "Audio Test Mag";
		displayNameShort = "32rnd 762x51";
		descriptionShort = "32rnd 762x51";
		scope = 1;
		count = 60;

		mass = 1;

		initSpeed = 900;

		ammo = "22nd_762x51";

		tracersEvery = 3;

		modelSpecial = "";
		modelSpecialIsProxy = 0;
	};
};

