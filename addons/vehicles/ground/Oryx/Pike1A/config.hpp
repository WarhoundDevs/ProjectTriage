class Warhound_Oryx_Pike1A: Warhound_Oryx
{
	author="Astro";
	displayName="[22nd] Pike 1-A M494 Oryx IFV";
	hiddenSelectionsTextures[] =
	{
		"z\22ndRDF\addons\vehicles\ground\Oryx\Pike1A\Base\22nd_1A_oryx_armor_base.paa",
		"z\22ndRDF\addons\vehicles\ground\Oryx\Pike1A\Base\22nd_1A_oryx_main_base.paa",
		"\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
		"\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
		"\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
		"z\22ndRDF\addons\vehicles\ground\Oryx\Pike1A\Base\22nd_1A_oryx_turret_base.paa",
		"z\22ndRDF\addons\vehicles\ground\Oryx\Pike1A\Base\22nd_1A_oryx_MG_base.paa"
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
				"z\22ndRDF\addons\vehicles\ground\Oryx\Pike1A\Urban\22nd_1A_oryx_armor_urb.paa",
				"z\22ndRDF\addons\vehicles\ground\Oryx\Pike1A\Urban\22nd_1A_oryx_main_urb.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
				"z\22ndRDF\addons\vehicles\ground\Oryx\Pike1A\Urban\22nd_1A_oryx_turret_urb.paa",
				"z\22ndRDF\addons\vehicles\ground\Oryx\Pike1A\Urban\22nd_1A_mg_urb.paa"
			};
		};
		class Oryx_Arid
		{
			displayName = "Arid Camo";
			author = "Astro";
			textures[] =
			{
				"z\22ndRDF\addons\vehicles\ground\Oryx\Pike1A\Arid\22nd_1A_oryx_armor_des.paa",
				"z\22ndRDF\addons\vehicles\ground\Oryx\Pike1A\Arid\22nd_1A_oryx_main_des.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_desert_ca.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_desert_ca.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_desert_ca.paa",
				"z\22ndRDF\addons\vehicles\ground\Oryx\Pike1A\Arid\22nd_1A_oryx_turret_des.paa",
				"z\22ndRDF\addons\vehicles\ground\Oryx\Pike1A\Arid\22nd_1A_mg_des.paa"
			};
		};
		class Oryx_Woodland
		{
			displayName = "Woodland Camo";
			author = "Astro";
			textures[] =
			{
				"z\22ndRDF\addons\vehicles\ground\Oryx\Pike1A\Woodland\22nd_1A_oryx_armor_WDL.paa",
				"z\22ndRDF\addons\vehicles\ground\Oryx\Pike1A\Woodland\22nd_1A_oryx_main_WDL.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_jungle_ca.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_jungle_ca.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_jungle_ca.paa",
				"z\22ndRDF\addons\vehicles\ground\Oryx\Pike1A\Woodland\22nd_1A_oryx_turret_WDL.paa",
				"z\22ndRDF\addons\vehicles\ground\Oryx\Pike1A\Woodland\22nd_1A_mg_WDL.paa"
			};
		};
		class Oryx_Arctic
		{
			displayName = "Arctic Camo";
			author = "Astro";
			textures[] =
			{
				"z\22ndRDF\addons\vehicles\ground\Oryx\Pike1A\Arctic\22nd_1A_oryx_armor_artic.paa",
				"z\22ndRDF\addons\vehicles\ground\Oryx\Pike1A\Arctic\22nd_1A_oryx_main_artic.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_tundra_ca.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_tundra_ca.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_tundra_ca.paa",
				"z\22ndRDF\addons\vehicles\ground\Oryx\Pike1A\Arctic\22nd_1A_oryx_turret_artic.paa",
				"z\22ndRDF\addons\vehicles\ground\Oryx\Pike1A\Arctic\22nd_1A_mg_artic.paa"
			};
		};
		class Oryx_Jungle
		{
			displayName = "Jungle Camo";
			author = "Astro";
			textures[] =
			{
				"z\22ndRDF\addons\vehicles\ground\Oryx\Pike1A\Jungle\22nd_1A_oryx_armor_jungle.paa",
				"z\22ndRDF\addons\vehicles\ground\Oryx\Pike1A\Jungle\22nd_1A_oryx_main_jungle.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
				"z\22ndRDF\addons\vehicles\ground\Oryx\Pike1A\Jungle\22nd_1A_oryx_turret_jungle.paa",
				"z\22ndRDF\addons\vehicles\ground\Oryx\Pike1A\Jungle\22nd_1A_mg_jungle.paa"
			};
		};
		class Oryx_OD
		{
			displayName = "OD Camo";
			author = "Astro";
			textures[] =
			{
				"z\22ndRDF\addons\vehicles\ground\Oryx\Pike1A\OD\22nd_1A_oryx_armor_OD.paa",
				"z\22ndRDF\addons\vehicles\ground\Oryx\Pike1A\OD\22nd_1A_oryx_main_OD.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
				"z\22ndRDF\addons\vehicles\ground\Oryx\Pike1A\OD\22nd_1A_oryx_turret_OD.paa",
				"z\22ndRDF\addons\vehicles\ground\Oryx\Pike1A\OD\22nd_1A_mg_OD.paa"
			};
		};
	};
};
