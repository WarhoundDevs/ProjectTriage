class Warhound_Oryx_Pike12: Warhound_Oryx
{
	author="Kidd";
	displayName="[22nd] Pike 1-2 M494 Oryx IFV";
	hiddenSelectionsTextures[] =
	{
		"z\22ndRDF\addons\vehicles\ground\Oryx\Pike12\Base\22nd_12_oryx_armor_base.paa",
		"z\22ndRDF\addons\vehicles\ground\Oryx\Pike12\Base\22nd_12_oryx_main_base.paa",
		"\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
		"\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
		"\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
		"z\22ndRDF\addons\vehicles\ground\Oryx\Pike12\Base\22nd_12_oryx_turret_base.paa",
		"z\22ndRDF\addons\vehicles\ground\Oryx\Pike12\Base\22nd_12_oryx_MG_base.paa"
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
		"Oryx_Jungle",
		0,
		"Oryx_OD",
		0,
	};
	class textureSources
	{
		class Oryx_Urban
		{
			displayName = "Urban Camo";
			author = "Astro";
			textures[] =
			{
				"z\22ndRDF\addons\vehicles\ground\Oryx\Pike12\Urban\22nd_12_oryx_armor_urb.paa",
				"z\22ndRDF\addons\vehicles\ground\Oryx\Pike12\Urban\22nd_12_oryx_main_urb.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
				"z\22ndRDF\addons\vehicles\ground\Oryx\Pike12\Urban\22nd_12_oryx_turret_urb.paa",
				"z\22ndRDF\addons\vehicles\ground\Oryx\Pike12\Urban\22nd_12_mg_urb.paa"
			};
		};
		class Oryx_Arid
		{
			displayName = "Arid Camo";
			author = "Astro";
			textures[] =
			{
				"z\22ndRDF\addons\vehicles\ground\Oryx\Pike12\Arid\22nd_12_oryx_armor_des.paa",
				"z\22ndRDF\addons\vehicles\ground\Oryx\Pike12\Arid\22nd_12_oryx_main_des.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_desert_ca.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_desert_ca.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_desert_ca.paa",
				"z\22ndRDF\addons\vehicles\ground\Oryx\Pike12\Arid\22nd_12_oryx_turret_des.paa",
				"z\22ndRDF\addons\vehicles\ground\Oryx\Pike12\Arid\22nd_12_mg_des.paa"
			};
		};
		class Oryx_Woodland
		{
			displayName = "Woodland Camo";
			author = "Astro";
			textures[] =
			{
				"z\22ndRDF\addons\vehicles\ground\Oryx\Pike12\Woodland\22nd_12_oryx_armor_WDL.paa",
				"z\22ndRDF\addons\vehicles\ground\Oryx\Pike12\Woodland\22nd_12_oryx_main_WDL.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_jungle_ca.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_jungle_ca.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_jungle_ca.paa",
				"z\22ndRDF\addons\vehicles\ground\Oryx\Pike12\Woodland\22nd_12_oryx_turret_WDL.paa",
				"z\22ndRDF\addons\vehicles\ground\Oryx\Pike12\Woodland\22nd_12_mg_WDL.paa"
			};
		};
		class Oryx_Arctic
		{
			displayName = "Arctic Camo";
			author = "Astro";
			textures[] =
			{
				"z\22ndRDF\addons\vehicles\ground\Oryx\Pike12\Arctic\22nd_12_oryx_armor_artic.paa",
				"z\22ndRDF\addons\vehicles\ground\Oryx\Pike12\Arctic\22nd_12_oryx_main_artic.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_tundra_ca.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_tundra_ca.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_tundra_ca.paa",
				"z\22ndRDF\addons\vehicles\ground\Oryx\Pike12\Arctic\22nd_12_oryx_turret_artic.paa",
				"z\22ndRDF\addons\vehicles\ground\Oryx\Pike12\Arctic\22nd_12_mg_artic.paa"
			};
		};
		class Oryx_Jungle
		{
			displayName = "Jungle Camo";
			author = "Astro";
			textures[] =
			{
				"z\22ndRDF\addons\vehicles\ground\Oryx\Pike12\Jungle\22nd_12_oryx_armor_jungle.paa",
				"z\22ndRDF\addons\vehicles\ground\Oryx\Pike12\Jungle\22nd_12_oryx_main_jungle.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
				"z\22ndRDF\addons\vehicles\ground\Oryx\Pike12\Jungle\22nd_12_oryx_turret_jungle.paa",
				"z\22ndRDF\addons\vehicles\ground\Oryx\Pike12\Jungle\22nd_12_mg_jungle.paa"
			};
		};
		class Oryx_OD
		{
			displayName = "OD Camo";
			author = "Astro";
			textures[] =
			{
				"z\22ndRDF\addons\vehicles\ground\Oryx\Pike12\OD\22nd_12_oryx_armor_OD.paa",
				"z\22ndRDF\addons\vehicles\ground\Oryx\Pike12\OD\22nd_12_oryx_main_OD.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
				"z\22ndRDF\addons\vehicles\ground\Oryx\Pike12\OD\22nd_12_oryx_turret_OD.paa",
				"z\22ndRDF\addons\vehicles\ground\Oryx\Pike12\OD\22nd_12_mg_OD.paa"
			};
		};
	};
};
