class Warhound_Oryx: OPTRE_M494
{
	scope=2;
	author="Gatt, Kidd";
	displayName="[22nd] M494 Oryx IFV";
	faction="22nd_Faction";
	editorCategory="22ndRDF_Warhound_Company";
	editorSubcategory="22ndRDF_Warhound_Company_IFVs";
	editorPreview="\OPTRE_Vehicles_Tracked\Oryx\data\Preview\OPTRE_M494.jpg";
	side=1;
	LODDriverTurnedIn=1100;
	hiddenSelectionsTextures[] =
	{
		"Warhound_Units\data\Vehicles\Oryx\Standard\Urban\22ndRDF_standard_oryx_armor_urban_co.paa",
		"Warhound_Units\data\Vehicles\Oryx\Standard\Urban\22ndRDF_standard_oryx_main_urban_co.paa",
		"\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
		"\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
		"\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
		"Warhound_Units\data\Vehicles\Oryx\Standard\Urban\22ndRDF_standard_oryx_turret_urban_co.paa",
		"Warhound_Units\data\Vehicles\Oryx\Standard\Urban\22ndRDF_standard_Scorp_mg_urban_co.paa"
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
				"Warhound_Units\data\Vehicles\Oryx\Standard\Urban\22ndRDF_standard_oryx_armor_urban_co.paa",
				"Warhound_Units\data\Vehicles\Oryx\Standard\Urban\22ndRDF_standard_oryx_main_urban_co.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
				"Warhound_Units\data\Vehicles\Oryx\Standard\Urban\22ndRDF_standard_oryx_turret_urban_co.paa",
				"Warhound_Units\data\Vehicles\Oryx\Standard\Urban\22ndRDF_standard_Scorp_mg_urban_co.paa"
			};
		};
		class Oryx_Arid
		{
			displayName = "Arid Camo";
			author = "Kidd";
			textures[] =
			{
				"Warhound_Units\data\Vehicles\Oryx\Standard\Arid\22ndRDF_standard_oryx_armor_arid_co.paa",
				"Warhound_Units\data\Vehicles\Oryx\Standard\Arid\22ndRDF_standard_oryx_main_arid_co.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_desert_ca.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_desert_ca.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_desert_ca.paa",
				"Warhound_Units\data\Vehicles\Oryx\Standard\Arid\22ndRDF_standard_oryx_turret_arid_co.paa",
				"Warhound_Units\data\Vehicles\Oryx\Standard\Arid\22ndRDF_standard_Scorp_mg_arid_co.paa"
			};
		};
		class Oryx_Woodland
		{
			displayName = "Woodland Camo";
			author = "Kidd";
			textures[] =
			{
				"Warhound_Units\data\Vehicles\Oryx\Standard\Woodland\22ndRDF_standard_oryx_armor_woodland_co.paa",
				"Warhound_Units\data\Vehicles\Oryx\Standard\Woodland\22ndRDF_standard_oryx_main_woodland_co.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_jungle_ca.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_jungle_ca.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_jungle_ca.paa",
				"Warhound_Units\data\Vehicles\Oryx\Standard\Woodland\22ndRDF_standard_oryx_turret_woodland_co.paa",
				"Warhound_Units\data\Vehicles\Oryx\Standard\Woodland\22ndRDF_standard_Scorp_mg_woodland_co.paa"
			};
		};
		class Oryx_Arctic
		{
			displayName = "Arctic Camo";
			author = "Kidd";
			textures[] =
			{
				"Warhound_Units\data\Vehicles\Oryx\Standard\Arctic\22ndRDF_standard_oryx_armor_arctic_co.paa",
				"Warhound_Units\data\Vehicles\Oryx\Standard\Arctic\22ndRDF_standard_oryx_main_arctic_co.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_tundra_ca.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_tundra_ca.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_tundra_ca.paa",
				"Warhound_Units\data\Vehicles\Oryx\Standard\Arctic\22ndRDF_standard_oryx_turret_arctic_co.paa",
				"Warhound_Units\data\Vehicles\Oryx\Standard\Arctic\22ndRDF_standard_Scorp_mg_arctic_co.paa"
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

class Warhound_APC_Oryx: OPTRE_M493_M37
{
	scope=2;
	author="Gatt, Kidd";
	displayName="[22nd] M493 Oryx APC";
	faction="22nd_Faction";
	editorCategory="22ndRDF_Warhound_Company";
	editorSubcategory="22ndRDF_Warhound_Company_APCs";
	editorPreview="\OPTRE_Vehicles_Tracked\Oryx\data\Preview\OPTRE_M493_AIE.jpg";
	side=1;
	LODDriverTurnedIn=1100;
	hiddenSelectionsTextures[] =
	{
		"Warhound_Units\data\Vehicles\Oryx\Standard\Urban\22ndRDF_standard_oryx_armor_urban_co.paa",
		"Warhound_Units\data\Vehicles\Oryx\Standard\Urban\22ndRDF_standard_oryx_main_urban_co.paa",
		"\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
		"\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
		"\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
		"Warhound_Units\data\Vehicles\Oryx\Standard\Urban\22ndRDF_standard_oryx_turret_urban_co.paa",
		"Warhound_Units\data\Vehicles\Oryx\Standard\Urban\22ndRDF_standard_Scorp_mg_urban_co.paa"
	};
	textureList[] =
	{
		"OryxAPC_Urban",
		1,
		"OryxAPC_Woodland",
		0,
		"OryxAPC_Arid",
		0,
		"OryxAPC_Arctic",
		0,
	}; // I have no clue what happened here, you can use the Garage textures now, but its the classname Oryx_(Color) instead of OryxAPC_(Color) but, it works?
	class textureSources
	{
		class OryxAPC_Urban
		{
			displayName = "Urban Camo";
			author = "Kidd";
			textures[] =
			{
				"Warhound_Units\data\Vehicles\Oryx\Standard\Urban\22ndRDF_standard_oryx_armor_urban_co.paa",
				"Warhound_Units\data\Vehicles\Oryx\Standard\Urban\22ndRDF_standard_oryx_main_urban_co.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
				"Warhound_Units\data\Vehicles\Oryx\Standard\Urban\22ndRDF_standard_oryx_turret_urban_co.paa",
				"Warhound_Units\data\Vehicles\Oryx\Standard\Urban\22ndRDF_standard_Scorp_mg_urban_co.paa"
			};
		};
		class OryxAPC_Arid
		{
			displayName = "Arid Camo";
			author = "Kidd";
			textures[] =
			{
				"Warhound_Units\data\Vehicles\Oryx\Standard\Arid\22ndRDF_standard_oryx_armor_arid_co.paa",
				"Warhound_Units\data\Vehicles\Oryx\Standard\Arid\22ndRDF_standard_oryx_main_arid_co.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_desert_ca.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_desert_ca.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_desert_ca.paa",
				"Warhound_Units\data\Vehicles\Oryx\Standard\Arid\22ndRDF_standard_oryx_turret_arid_co.paa",
				"Warhound_Units\data\Vehicles\Oryx\Standard\Arid\22ndRDF_standard_Scorp_mg_arid_co.paa"
			};
		};
		class OryxAPC_Woodland
		{
			displayName = "Woodland Camo";
			author = "Kidd";
			textures[] =
			{
				"Warhound_Units\data\Vehicles\Oryx\Standard\Woodland\22ndRDF_standard_oryx_armor_woodland_co.paa",
				"Warhound_Units\data\Vehicles\Oryx\Standard\Woodland\22ndRDF_standard_oryx_main_woodland_co.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_jungle_ca.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_jungle_ca.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_jungle_ca.paa",
				"Warhound_Units\data\Vehicles\Oryx\Standard\Woodland\22ndRDF_standard_oryx_turret_woodland_co.paa",
				"Warhound_Units\data\Vehicles\Oryx\Standard\Woodland\22ndRDF_standard_Scorp_mg_woodland_co.paa"
			};
		};
		class OryxAPC_Arctic
		{
			displayName = "Arctic Camo";
			author = "Kidd";
			textures[] =
			{
				"Warhound_Units\data\Vehicles\Oryx\Standard\Arctic\22ndRDF_standard_oryx_armor_arctic_co.paa",
				"Warhound_Units\data\Vehicles\Oryx\Standard\Arctic\22ndRDF_standard_oryx_main_arctic_co.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_tundra_ca.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_tundra_ca.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_tundra_ca.paa",
				"Warhound_Units\data\Vehicles\Oryx\Standard\Arctic\22ndRDF_standard_oryx_turret_arctic_co.paa",
				"Warhound_Units\data\Vehicles\Oryx\Standard\Arctic\22ndRDF_standard_Scorp_mg_arctic_co.paa"
			};
		};
	};
};
