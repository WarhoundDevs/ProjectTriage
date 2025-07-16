class 22nd_Oryx_Pike12: Warhound_Oryx_Alpha //Will need to remove '_Alpha' and 'Alpha' once new aux mod release, currently there to avoid issues with main aux mod as they use the same class name. - Lex
{
	author="Kidd";
	displayName="[22nd] Pike 1-2 M494 Oryx IFV";
	hiddenSelectionsTextures[] =
	{
		"W_Units\data\Vehicles\Oryx\Pike12\Urban\22nd_pike12_oryx_armor_urban_co.paa",
		"W_Units\data\Vehicles\Oryx\Pike12\Urban\22nd_pike12_oryx_main_urban_co.paa",
		"\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
		"\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
		"\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
		"W_Units\data\Vehicles\Oryx\Standard\Urban\22nd_standard_oryx_turret_urban_co.paa",
		"W_Units\data\Vehicles\Oryx\Standard\Urban\22nd_standard_Scorp_mg_urban_co.paa"
	};
	textureList[] =
	{
		"Oryx_Urban",
		1,
		"Oryx_Woodland",
		0,
		"Oryx_Arid",
		0,
		"Oryx_Arctic",
		0,
	};
	class textureSources
	{
		class Oryx_Urban
		{
			displayName = "Urban Camo";
			author = "Kidd";
			textures[] =
			{
				"W_Units\data\Vehicles\Oryx\Pike12\Urban\22nd_pike12_oryx_armor_urban_co.paa",
				"W_Units\data\Vehicles\Oryx\Pike12\Urban\22nd_pike12_oryx_main_urban_co.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
				"W_Units\data\Vehicles\Oryx\Standard\Urban\22nd_standard_oryx_turret_urban_co.paa",
				"W_Units\data\Vehicles\Oryx\Standard\Urban\22nd_standard_Scorp_mg_urban_co.paa"
			};
		};
		class Oryx_Arid
		{
			displayName = "Arid Camo";
			author = "Kidd";
			textures[] =
			{
				"W_Units\data\Vehicles\Oryx\Pike12\Arid\22nd_pike12_oryx_armor_arid_co.paa",
				"W_Units\data\Vehicles\Oryx\Pike12\Arid\22nd_pike12_oryx_main_arid_co.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_desert_ca.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_desert_ca.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_desert_ca.paa",
				"W_Units\data\Vehicles\Oryx\Standard\Arid\22nd_standard_oryx_turret_arid_co.paa",
				"W_Units\data\Vehicles\Oryx\Standard\Arid\22nd_standard_Scorp_mg_arid_co.paa"
			};
		};
		class Oryx_Woodland
		{
			displayName = "Woodland Camo";
			author = "Kidd";
			textures[] =
			{
				"W_Units\data\Vehicles\Oryx\Pike12\Woodland\22nd_pike12_oryx_armor_woodland_co.paa",
				"W_Units\data\Vehicles\Oryx\Pike12\Woodland\22nd_pike12_oryx_main_woodland_co.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_jungle_ca.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_jungle_ca.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_jungle_ca.paa",
				"W_Units\data\Vehicles\Oryx\Standard\Woodland\22nd_standard_oryx_turret_woodland_co.paa",
				"W_Units\data\Vehicles\Oryx\Standard\Woodland\22nd_standard_Scorp_mg_woodland_co.paa"
			};
		};
		class Oryx_Arctic
		{
			displayName = "Arctic Camo";
			author = "Kidd";
			textures[] =
			{
				"W_Units\data\Vehicles\Oryx\Pike12\Arctic\22nd_pike12_oryx_armor_arctic_co.paa",
				"W_Units\data\Vehicles\Oryx\Pike12\Arctic\22nd_pike12_oryx_main_arctic_co.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_tundra_ca.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_tundra_ca.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_tundra_ca.paa",
				"W_Units\data\Vehicles\Oryx\Standard\Arctic\22nd_standard_oryx_turret_arctic_co.paa",
				"W_Units\data\Vehicles\Oryx\Standard\Arctic\22nd_standard_Scorp_mg_arctic_co.paa"
			};
		};
	};
};
