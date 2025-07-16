class Warhound_Oryx_Alpha: OPTRE_M494 //Will need to remove '_Alpha' and 'Alpha' once new aux mod release, currently there to avoid issues with main aux mod as they use the same class name. - Lex
{
	scope=2;
	author="Gatt, Kidd";
	displayName="[22nd] M494 Oryx IFV Alpha";
	faction="22nd_Faction";
	editorCategory="22nd_Warhound_Company";
	editorSubcategory="22nd_Warhound_Company_IFVs";
	editorPreview="\OPTRE_Vehicles_Tracked\Oryx\data\Preview\OPTRE_M494.jpg";
	side=1;
	LODDriverTurnedIn=1100;
	hiddenSelectionsTextures[] =
	{
		"W_Units\data\Vehicles\Oryx\Standard\Urban\22nd_standard_oryx_armor_urban_co.paa",
		"W_Units\data\Vehicles\Oryx\Standard\Urban\22nd_standard_oryx_main_urban_co.paa",
		"\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
		"\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
		"\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
		"W_Units\data\Vehicles\Oryx\Standard\Urban\22nd_standard_oryx_turret_urban_co.paa",
		"W_Units\data\Vehicles\Oryx\Standard\Urban\22nd_standard_Scorp_mg_urban_co.paa"
	};
	textureList[] =
	{
		"Oryx_Urban_Alpha",
		1,
		"Oryx_Woodland_Alpha",
		0,
		"Oryx_Arid_Alpha",
		0,
		"Oryx_Arctic_Alpha",
		0,
	};
	class textureSources
	{
		class Oryx_Urban_Alpha
		{
			displayName = "Urban Camo";
			author = "Kidd";
			textures[] =
			{
				"W_Units\data\Vehicles\Oryx\Standard\Urban\22nd_standard_oryx_armor_urban_co.paa",
				"W_Units\data\Vehicles\Oryx\Standard\Urban\22nd_standard_oryx_main_urban_co.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
				"W_Units\data\Vehicles\Oryx\Standard\Urban\22nd_standard_oryx_turret_urban_co.paa",
				"W_Units\data\Vehicles\Oryx\Standard\Urban\22nd_standard_Scorp_mg_urban_co.paa"
			};
		};
		class Oryx_Arid_Alpha
		{
			displayName = "Arid Camo";
			author = "Kidd";
			textures[] =
			{
				"W_Units\data\Vehicles\Oryx\Standard\Arid\22nd_standard_oryx_armor_arid_co.paa",
				"W_Units\data\Vehicles\Oryx\Standard\Arid\22nd_standard_oryx_main_arid_co.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_desert_ca.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_desert_ca.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_desert_ca.paa",
				"W_Units\data\Vehicles\Oryx\Standard\Arid\22nd_standard_oryx_turret_arid_co.paa",
				"W_Units\data\Vehicles\Oryx\Standard\Arid\22nd_standard_Scorp_mg_arid_co.paa"
			};
		};
		class Oryx_Woodland_Alpha
		{
			displayName = "Woodland Camo";
			author = "Kidd";
			textures[] =
			{
				"W_Units\data\Vehicles\Oryx\Standard\Woodland\22nd_standard_oryx_armor_woodland_co.paa",
				"W_Units\data\Vehicles\Oryx\Standard\Woodland\22nd_standard_oryx_main_woodland_co.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_jungle_ca.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_jungle_ca.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_jungle_ca.paa",
				"W_Units\data\Vehicles\Oryx\Standard\Woodland\22nd_standard_oryx_turret_woodland_co.paa",
				"W_Units\data\Vehicles\Oryx\Standard\Woodland\22nd_standard_Scorp_mg_woodland_co.paa"
			};
		};
		class Oryx_Arctic_Alpha
		{
			displayName = "Arctic Camo";
			author = "Kidd";
			textures[] =
			{
				"W_Units\data\Vehicles\Oryx\Standard\Arctic\22nd_standard_oryx_armor_arctic_co.paa",
				"W_Units\data\Vehicles\Oryx\Standard\Arctic\22nd_standard_oryx_main_arctic_co.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_tundra_ca.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_tundra_ca.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_tundra_ca.paa",
				"W_Units\data\Vehicles\Oryx\Standard\Arctic\22nd_standard_oryx_turret_arctic_co.paa",
				"W_Units\data\Vehicles\Oryx\Standard\Arctic\22nd_standard_Scorp_mg_arctic_co.paa"
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