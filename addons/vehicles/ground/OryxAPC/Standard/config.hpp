class Warhound_Oryx: OPTRE_M494
{
	scope=2;
	author="Gatt, Kidd, Astro";
	displayName="[22nd] M494 Oryx IFV";
	faction="22nd_Faction";
	editorCategory="22nd_Warhound_Company";
	editorSubcategory="22nd_Warhound_Company_IFVs";
	editorPreview="\OPTRE_Vehicles_Tracked\Oryx\data\Preview\OPTRE_M494.jpg";
	side=1;
	LODDriverTurnedIn=1100;
	hiddenSelectionsTextures[] =
	{
		"z\22ndRDF\addons\vehicles\ground\Oryx\Standard\Base\22nd_standard_oryx_armor_base.paa",
		"z\22ndRDF\addons\vehicles\ground\Oryx\Standard\Base\22nd_standard_oryx_main_base.paa",
		"\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
		"\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
		"\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
		"z\22ndRDF\addons\vehicles\ground\Oryx\Standard\Base\22nd_standard_oryx_turret_base.paa",
		"z\22ndRDF\addons\vehicles\ground\Oryx\Standard\Base\22nd_standard_oryx_MG_base.paa"
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
				"z\22ndRDF\addons\vehicles\ground\Oryx\Standard\Urban\22nd_standard_oryx_armor_urb.paa",
				"z\22ndRDF\addons\vehicles\ground\Oryx\Standard\Urban\22nd_standard_oryx_main_urb.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
				"z\22ndRDF\addons\vehicles\ground\Oryx\Standard\Urban\22nd_standard_oryx_turret_urb.paa",
				"z\22ndRDF\addons\vehicles\ground\Oryx\Standard\Urban\22nd_standard_mg_urb.paa"
			};
		};
		class Oryx_Arid
		{
			displayName = "Arid Camo";
			author = "Astro";
			textures[] =
			{
				"z\22ndRDF\addons\vehicles\ground\Oryx\Standard\Arid\22nd_standard_oryx_armor_des.paa",
				"z\22ndRDF\addons\vehicles\ground\Oryx\Standard\Arid\22nd_standard_oryx_main_des.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_desert_ca.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_desert_ca.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_desert_ca.paa",
				"z\22ndRDF\addons\vehicles\ground\Oryx\Standard\Arid\22nd_standard_oryx_turret_des.paa",
				"z\22ndRDF\addons\vehicles\ground\Oryx\Standard\Arid\22nd_standard_mg_des.paa"
			};
		};
		class Oryx_Woodland
		{
			displayName = "Woodland Camo";
			author = "Astro";
			textures[] =
			{
				"z\22ndRDF\addons\vehicles\ground\Oryx\Standard\Woodland\22nd_standard_oryx_armor_WDL.paa",
				"z\22ndRDF\addons\vehicles\ground\Oryx\Standard\Woodland\22nd_standard_oryx_main_WDL.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_jungle_ca.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_jungle_ca.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_jungle_ca.paa",
				"z\22ndRDF\addons\vehicles\ground\Oryx\Standard\Woodland\22nd_standard_oryx_turret_WDL.paa",
				"z\22ndRDF\addons\vehicles\ground\Oryx\Standard\Woodland\22nd_standard_mg_WDL.paa"
			};
		};
		class Oryx_Arctic
		{
			displayName = "Arctic Camo";
			author = "Astro";
			textures[] =
			{
				"z\22ndRDF\addons\vehicles\ground\Oryx\Standard\Arctic\22nd_standard_oryx_armor_artic.paa",
				"z\22ndRDF\addons\vehicles\ground\Oryx\Standard\Arctic\22nd_standard_oryx_main_artic.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_tundra_ca.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_tundra_ca.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_tundra_ca.paa",
				"z\22ndRDF\addons\vehicles\ground\Oryx\Standard\Arctic\22nd_standard_oryx_turret_artic.paa",
				"z\22ndRDF\addons\vehicles\ground\Oryx\Standard\Arctic\22nd_standard_mg_artic.paa"
			};
		};
		class Oryx_Jungle
		{
			displayName = "Jungle Camo";
			author = "Astro";
			textures[] =
			{
				"z\22ndRDF\addons\vehicles\ground\Oryx\Standard\Jungle\22nd_standard_oryx_armor_jungle.paa",
				"z\22ndRDF\addons\vehicles\ground\Oryx\Standard\Jungle\22nd_standard_oryx_main_jungle.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
				"z\22ndRDF\addons\vehicles\ground\Oryx\Standard\Jungle\22nd_standard_oryx_turret_jungle.paa",
				"z\22ndRDF\addons\vehicles\ground\Oryx\Standard\Jungle\22nd_standard_mg_jungle.paa"
			};
		};
		class Oryx_OD
		{
			displayName = "OD Camo";
			author = "Astro";
			textures[] =
			{
				"z\22ndRDF\addons\vehicles\ground\Oryx\Standard\OD\22nd_standard_oryx_armor_OD.paa",
				"z\22ndRDF\addons\vehicles\ground\Oryx\Standard\OD\22nd_standard_oryx_main_OD.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
				"z\22ndRDF\addons\vehicles\ground\Oryx\Standard\OD\22nd_standard_oryx_turret_OD.paa",
				"z\22ndRDF\addons\vehicles\ground\Oryx\Standard\OD\22nd_standard_mg_OD.paa"
			};
		};
	};
	class TransportMagazines
	{
	};
	class TransportItems
	{
	};
	class TransportWeapons
	{
	};
	class RenderTargets
	{
		class GunnerCam
		{
			renderTarget="rendertarget1";
			class CameraView1
			{
				pointPosition="gunnerview";
				pointDirection="pip_gunner_dir";
				renderQuality=2;
				renderVisionMode=0;
				fov=0.75;
			};
		};
		class CommanderCam
		{
			renderTarget="rendertarget2";
			class CameraView1
			{
				pointPosition="commanderview";
				pointDirection="pip_commander_dir";
				renderQuality=2;
				renderVisionMode=0;
				fov=0.75;
			};
		};
	};
};
