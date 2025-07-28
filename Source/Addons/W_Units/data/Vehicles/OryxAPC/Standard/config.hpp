//All textures are in the OryxAPC folder, just copied the ones from the Oryx folder into the new folder and changed where the config pointed. That way changing them will be easier if there is a need. - Lex
//All classes also use the correct OPTRE classes, and their EditorPreview points towards new preview file.
class Warhound_APC_Oryx: OPTRE_M493_APC
{
	scope=2;
	author="Gatt, Kidd";
	displayName="[22nd] M493 Oryx APC Alpha";
	faction="22nd_Faction";
	editorCategory="22nd_Warhound_Company";
	editorSubcategory="22nd_Warhound_Company_APCs";
	editorPreview="W_Units\data\Vehicles\OryxAPC\Preview\OryxAPC.jpg";
	side=1;
	LODDriverTurnedIn=1100;
	hiddenSelectionsTextures[] = 
	{
		"W_Units\data\Vehicles\OryxAPC\Standard\Urban\22nd_standard_oryx_armor_urban_co.paa",
		"W_Units\data\Vehicles\OryxAPC\Standard\Urban\22nd_standard_oryx_main_urban_co.paa",
		"\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
		"\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
		"\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
		"W_Units\data\Vehicles\OryxAPC\Standard\Urban\22nd_standard_oryx_turret_urban_co.paa",
		"W_Units\data\Vehicles\OryxAPC\Standard\Urban\22nd_standard_Scorp_mg_urban_co.paa"
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
	}; // I have no clue what happened here, you can use the Garage textures now, but its the classname Oryx_(Color) instead of OryxAPC_(Color) but, it works? (I have no clue who wrote this comment but I'm keeping it - Lex)
	class textureSources
	{
		class OryxAPC_Urban
		{
			displayName = "Urban Camo";
			author = "Kidd";
			textures[] =
			{
				"W_Units\data\Vehicles\OryxAPC\Standard\Urban\22nd_standard_oryx_armor_urban_co.paa",
				"W_Units\data\Vehicles\OryxAPC\Standard\Urban\22nd_standard_oryx_main_urban_co.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
				"W_Units\data\Vehicles\OryxAPC\Standard\Urban\22nd_standard_oryx_turret_urban_co.paa",
				"W_Units\data\Vehicles\OryxAPC\Standard\Urban\22nd_standard_Scorp_mg_urban_co.paa"
			};
		};
		class OryxAPC_Arid
		{
			displayName = "Arid Camo";
			author = "Kidd";
			textures[] =
			{
				"W_Units\data\Vehicles\OryxAPC\Standard\Arid\22nd_standard_oryx_armor_arid_co.paa",
				"W_Units\data\Vehicles\OryxAPC\Standard\Arid\22nd_standard_oryx_main_arid_co.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_desert_ca.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_desert_ca.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_desert_ca.paa",
				"W_Units\data\Vehicles\OryxAPC\Standard\Arid\22nd_standard_oryx_turret_arid_co.paa",
				"W_Units\data\Vehicles\OryxAPC\Standard\Arid\22nd_standard_Scorp_mg_arid_co.paa"
			};
		};
		class OryxAPC_Woodland
		{
			displayName = "Woodland Camo";
			author = "Kidd";
			textures[] =
			{
				"W_Units\data\Vehicles\OryxAPC\Standard\Woodland\22nd_standard_oryx_armor_woodland_co.paa",
				"W_Units\data\Vehicles\OryxAPC\Standard\Woodland\22nd_standard_oryx_main_woodland_co.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_jungle_ca.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_jungle_ca.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_jungle_ca.paa",
				"W_Units\data\Vehicles\OryxAPC\Standard\Woodland\22nd_standard_oryx_turret_woodland_co.paa",
				"W_Units\data\Vehicles\OryxAPC\Standard\Woodland\22nd_standard_Scorp_mg_woodland_co.paa"
			};
		};
		class OryxAPC_Arctic
		{
			displayName = "Arctic Camo";
			author = "Kidd";
			textures[] =
			{
				"W_Units\data\Vehicles\OryxAPC\Standard\Arctic\22nd_standard_oryx_armor_arctic_co.paa",
				"W_Units\data\Vehicles\OryxAPC\Standard\Arctic\22nd_standard_oryx_main_arctic_co.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_tundra_ca.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_tundra_ca.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_tundra_ca.paa",
				"W_Units\data\Vehicles\OryxAPC\Standard\Arctic\22nd_standard_oryx_turret_arctic_co.paa",
				"W_Units\data\Vehicles\OryxAPC\Standard\Arctic\22nd_standard_Scorp_mg_arctic_co.paa"
			};
		};
	};
};
class Warhound_APC_Oryx_AIE: OPTRE_M493_AIE
{
	scope=2;
	author="Gatt, Kidd";
	displayName="[22nd] M493 Oryx APC AIE";
	faction="22nd_Faction";
	editorCategory="22nd_Warhound_Company";
	editorSubcategory="22nd_Warhound_Company_APCs";
	editorPreview="W_Units\data\Vehicles\OryxAPC\Preview\OryxAPC.jpg";
	side=1;
	LODDriverTurnedIn=1100;
	hiddenSelectionsTextures[] =
	{
		"W_Units\data\Vehicles\OryxAPC\Standard\Urban\22nd_standard_oryx_armor_urban_co.paa",
		"W_Units\data\Vehicles\OryxAPC\Standard\Urban\22nd_standard_oryx_main_urban_co.paa",
		"\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
		"\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
		"\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
		"W_Units\data\Vehicles\OryxAPC\Standard\Urban\22nd_standard_oryx_turret_urban_co.paa",
		"W_Units\data\Vehicles\OryxAPC\Standard\Urban\22nd_standard_Scorp_mg_urban_co.paa"
	};
	textureList[] =
	{
		"OryxAPC_AIE_Urban",
		1,
		"OryxAPC_AIE_Woodland",
		0,
		"OryxAPC_AIE_Arid",
		0,
		"OryxAPC_AIE_Arctic",
		0,
	};
	class textureSources
	{
		class OryxAPC_AIE_Urban
		{
			displayName = "Urban Camo";
			author = "Kidd";
			textures[] =
			{
				"W_Units\data\Vehicles\OryxAPC\Standard\Urban\22nd_standard_oryx_armor_urban_co.paa",
				"W_Units\data\Vehicles\OryxAPC\Standard\Urban\22nd_standard_oryx_main_urban_co.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
				"W_Units\data\Vehicles\OryxAPC\Standard\Urban\22nd_standard_oryx_turret_urban_co.paa",
				"W_Units\data\Vehicles\OryxAPC\Standard\Urban\22nd_standard_Scorp_mg_urban_co.paa"
			};
		};
		class OryxAPC_AIE_Arid
		{
			displayName = "Arid Camo";
			author = "Kidd";
			textures[] =
			{
				"W_Units\data\Vehicles\OryxAPC\Standard\Arid\22nd_standard_oryx_armor_arid_co.paa",
				"W_Units\data\Vehicles\OryxAPC\Standard\Arid\22nd_standard_oryx_main_arid_co.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_desert_ca.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_desert_ca.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_desert_ca.paa",
				"W_Units\data\Vehicles\OryxAPC\Standard\Arid\22nd_standard_oryx_turret_arid_co.paa",
				"W_Units\data\Vehicles\OryxAPC\Standard\Arid\22nd_standard_Scorp_mg_arid_co.paa"
			};
		};
		class OryxAPC_AIE_Woodland
		{
			displayName = "Woodland Camo";
			author = "Kidd";
			textures[] =
			{
				"W_Units\data\Vehicles\OryxAPC\Standard\Woodland\22nd_standard_oryx_armor_woodland_co.paa",
				"W_Units\data\Vehicles\OryxAPC\Standard\Woodland\22nd_standard_oryx_main_woodland_co.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_jungle_ca.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_jungle_ca.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_jungle_ca.paa",
				"W_Units\data\Vehicles\OryxAPC\Standard\Woodland\22nd_standard_oryx_turret_woodland_co.paa",
				"W_Units\data\Vehicles\OryxAPC\Standard\Woodland\22nd_standard_Scorp_mg_woodland_co.paa"
			};
		};
		class OryxAPC_AIE_Arctic
		{
			displayName = "Arctic Camo";
			author = "Kidd";
			textures[] =
			{
				"W_Units\data\Vehicles\OryxAPC\Standard\Arctic\22nd_standard_oryx_armor_arctic_co.paa",
				"W_Units\data\Vehicles\OryxAPC\Standard\Arctic\22nd_standard_oryx_main_arctic_co.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_tundra_ca.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_tundra_ca.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_tundra_ca.paa",
				"W_Units\data\Vehicles\OryxAPC\Standard\Arctic\22nd_standard_oryx_turret_arctic_co.paa",
				"W_Units\data\Vehicles\OryxAPC\Standard\Arctic\22nd_standard_Scorp_mg_arctic_co.paa"
			};
		};
	};
};
class Warhound_APC_Oryx_AIE_RCWS: OPTRE_M493_AIE_RCWS
{
	scope=2;
	author="Gatt, Kidd";
	displayName="[22nd] M493 Oryx APC AIE RCWS";
	faction="22nd_Faction";
	editorCategory="22nd_Warhound_Company";
	editorSubcategory="22nd_Warhound_Company_APCs";
	editorPreview="W_Units\data\Vehicles\OryxAPC\Preview\OryxAPC.jpg";
	side=1;
	LODDriverTurnedIn=1100;
	hiddenSelectionsTextures[] =
	{
		"W_Units\data\Vehicles\OryxAPC\Standard\Urban\22nd_standard_oryx_armor_urban_co.paa",
		"W_Units\data\Vehicles\OryxAPC\Standard\Urban\22nd_standard_oryx_main_urban_co.paa",
		"\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
		"\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
		"\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
		"W_Units\data\Vehicles\OryxAPC\Standard\Urban\22nd_standard_oryx_turret_urban_co.paa",
		"W_Units\data\Vehicles\OryxAPC\Standard\Urban\22nd_standard_Scorp_mg_urban_co.paa"
	};
	textureList[] =
	{
		"OryxAPC_AIE_RCWS_Urban",
		1,
		"OryxAPC_AIE_RCWS_Woodland",
		0,
		"OryxAPC_AIE_RCWS_Arid",
		0,
		"OryxAPC_AIE_RCWS_Arctic",
		0,
	};
	class textureSources
	{
		class OryxAPC_AIE_RCWS_Urban
		{
			displayName = "Urban Camo";
			author = "Kidd";
			textures[] =
			{
				"W_Units\data\Vehicles\OryxAPC\Standard\Urban\22nd_standard_oryx_armor_urban_co.paa",
				"W_Units\data\Vehicles\OryxAPC\Standard\Urban\22nd_standard_oryx_main_urban_co.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
				"W_Units\data\Vehicles\OryxAPC\Standard\Urban\22nd_standard_oryx_turret_urban_co.paa",
				"W_Units\data\Vehicles\OryxAPC\Standard\Urban\22nd_standard_Scorp_mg_urban_co.paa"
			};
		};
		class OryxAPC_AIE_RCWS_Arid
		{
			displayName = "Arid Camo";
			author = "Kidd";
			textures[] =
			{
				"W_Units\data\Vehicles\OryxAPC\Standard\Arid\22nd_standard_oryx_armor_arid_co.paa",
				"W_Units\data\Vehicles\OryxAPC\Standard\Arid\22nd_standard_oryx_main_arid_co.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_desert_ca.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_desert_ca.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_desert_ca.paa",
				"W_Units\data\Vehicles\OryxAPC\Standard\Arid\22nd_standard_oryx_turret_arid_co.paa",
				"W_Units\data\Vehicles\OryxAPC\Standard\Arid\22nd_standard_Scorp_mg_arid_co.paa"
			};
		};
		class OryxAPC_AIE_RCWS_Woodland
		{
			displayName = "Woodland Camo";
			author = "Kidd";
			textures[] =
			{
				"W_Units\data\Vehicles\OryxAPC\Standard\Woodland\22nd_standard_oryx_armor_woodland_co.paa",
				"W_Units\data\Vehicles\OryxAPC\Standard\Woodland\22nd_standard_oryx_main_woodland_co.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_jungle_ca.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_jungle_ca.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_jungle_ca.paa",
				"W_Units\data\Vehicles\OryxAPC\Standard\Woodland\22nd_standard_oryx_turret_woodland_co.paa",
				"W_Units\data\Vehicles\OryxAPC\Standard\Woodland\22nd_standard_Scorp_mg_woodland_co.paa"
			};
		};
		class OryxAPC_AIE_RCWS_Arctic
		{
			displayName = "Arctic Camo";
			author = "Kidd";
			textures[] =
			{
				"W_Units\data\Vehicles\OryxAPC\Standard\Arctic\22nd_standard_oryx_armor_arctic_co.paa",
				"W_Units\data\Vehicles\OryxAPC\Standard\Arctic\22nd_standard_oryx_main_arctic_co.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_tundra_ca.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_tundra_ca.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_tundra_ca.paa",
				"W_Units\data\Vehicles\OryxAPC\Standard\Arctic\22nd_standard_oryx_turret_arctic_co.paa",
				"W_Units\data\Vehicles\OryxAPC\Standard\Arctic\22nd_standard_Scorp_mg_arctic_co.paa"
			};
		};
	};
};
class Warhound_APC_Oryx_M37: OPTRE_M493_M37
{
	scope=2;
	author="Gatt, Kidd";
	displayName="[22nd] M493 Oryx APC M37";
	faction="22nd_Faction";
	editorCategory="22nd_Warhound_Company";
	editorSubcategory="22nd_Warhound_Company_APCs";
	editorPreview="W_Units\data\Vehicles\OryxAPC\Preview\OryxAPC.jpg";
	side=1;
	LODDriverTurnedIn=1100;
	hiddenSelectionsTextures[] =
	{
		"W_Units\data\Vehicles\OryxAPC\Standard\Urban\22nd_standard_oryx_armor_urban_co.paa",
		"W_Units\data\Vehicles\OryxAPC\Standard\Urban\22nd_standard_oryx_main_urban_co.paa",
		"\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
		"\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
		"\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
		"W_Units\data\Vehicles\OryxAPC\Standard\Urban\22nd_standard_oryx_turret_urban_co.paa",
		"W_Units\data\Vehicles\OryxAPC\Standard\Urban\22nd_standard_Scorp_mg_urban_co.paa"
	};
	textureList[] =
	{
		"OryxAPC_M37_Urban",
		1,
		"OryxAPC_M37_Woodland",
		0,
		"OryxAPC_M37_Arid",
		0,
		"OryxAPC_M37_Arctic",
		0,
	};
	class textureSources
	{
		class OryxAPC_M37_Urban
		{
			displayName = "Urban Camo";
			author = "Kidd";
			textures[] =
			{
				"W_Units\data\Vehicles\OryxAPC\Standard\Urban\22nd_standard_oryx_armor_urban_co.paa",
				"W_Units\data\Vehicles\OryxAPC\Standard\Urban\22nd_standard_oryx_main_urban_co.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
				"W_Units\data\Vehicles\OryxAPC\Standard\Urban\22nd_standard_oryx_turret_urban_co.paa",
				"W_Units\data\Vehicles\OryxAPC\Standard\Urban\22nd_standard_Scorp_mg_urban_co.paa"
			};
		};
		class OryxAPC_M37_Arid
		{
			displayName = "Arid Camo";
			author = "Kidd";
			textures[] =
			{
				"W_Units\data\Vehicles\OryxAPC\Standard\Arid\22nd_standard_oryx_armor_arid_co.paa",
				"W_Units\data\Vehicles\OryxAPC\Standard\Arid\22nd_standard_oryx_main_arid_co.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_desert_ca.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_desert_ca.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_desert_ca.paa",
				"W_Units\data\Vehicles\OryxAPC\Standard\Arid\22nd_standard_oryx_turret_arid_co.paa",
				"W_Units\data\Vehicles\OryxAPC\Standard\Arid\22nd_standard_Scorp_mg_arid_co.paa"
			};
		};
		class OryxAPC_M37_Woodland
		{
			displayName = "Woodland Camo";
			author = "Kidd";
			textures[] =
			{
				"W_Units\data\Vehicles\OryxAPC\Standard\Woodland\22nd_standard_oryx_armor_woodland_co.paa",
				"W_Units\data\Vehicles\OryxAPC\Standard\Woodland\22nd_standard_oryx_main_woodland_co.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_jungle_ca.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_jungle_ca.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_jungle_ca.paa",
				"W_Units\data\Vehicles\OryxAPC\Standard\Woodland\22nd_standard_oryx_turret_woodland_co.paa",
				"W_Units\data\Vehicles\OryxAPC\Standard\Woodland\22nd_standard_Scorp_mg_woodland_co.paa"
			};
		};
		class OryxAPC_M37_Arctic
		{
			displayName = "Arctic Camo";
			author = "Kidd";
			textures[] =
			{
				"W_Units\data\Vehicles\OryxAPC\Standard\Arctic\22nd_standard_oryx_armor_arctic_co.paa",
				"W_Units\data\Vehicles\OryxAPC\Standard\Arctic\22nd_standard_oryx_main_arctic_co.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_tundra_ca.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_tundra_ca.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_tundra_ca.paa",
				"W_Units\data\Vehicles\OryxAPC\Standard\Arctic\22nd_standard_oryx_turret_arctic_co.paa",
				"W_Units\data\Vehicles\OryxAPC\Standard\Arctic\22nd_standard_Scorp_mg_arctic_co.paa"
			};
		};
	};
};
class Warhound_APC_Oryx_M37_RCWS: OPTRE_M493_M37_RCWS
{
	scope=2;
	author="Gatt, Kidd";
	displayName="[22nd] M493 Oryx APC M37 RCWS";
	faction="22nd_Faction";
	editorCategory="22nd_Warhound_Company";
	editorSubcategory="22nd_Warhound_Company_APCs";
	editorPreview="W_Units\data\Vehicles\OryxAPC\Preview\OryxAPC.jpg";
	side=1;
	LODDriverTurnedIn=1100;
	hiddenSelectionsTextures[] =
	{
		"W_Units\data\Vehicles\OryxAPC\Standard\Urban\22nd_standard_oryx_armor_urban_co.paa",
		"W_Units\data\Vehicles\OryxAPC\Standard\Urban\22nd_standard_oryx_main_urban_co.paa",
		"\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
		"\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
		"\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
		"W_Units\data\Vehicles\OryxAPC\Standard\Urban\22nd_standard_oryx_turret_urban_co.paa",
		"W_Units\data\Vehicles\OryxAPC\Standard\Urban\22nd_standard_Scorp_mg_urban_co.paa"
	};
	textureList[] =
	{
		"OryxAPC_M37_RCWS_Urban",
		1,
		"OryxAPC_M37_RCWS_Woodland",
		0,
		"OryxAPC_M37_RCWS_Arid",
		0,
		"OryxAPC_M37_RCWS_Arctic",
		0,
	};
	class textureSources
	{
		class OryxAPC_M37_RCWS_Urban
		{
			displayName = "Urban Camo";
			author = "Kidd";
			textures[] =
			{
				"W_Units\data\Vehicles\OryxAPC\Standard\Urban\22nd_standard_oryx_armor_urban_co.paa",
				"W_Units\data\Vehicles\OryxAPC\Standard\Urban\22nd_standard_oryx_main_urban_co.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
				"W_Units\data\Vehicles\OryxAPC\Standard\Urban\22nd_standard_oryx_turret_urban_co.paa",
				"W_Units\data\Vehicles\OryxAPC\Standard\Urban\22nd_standard_Scorp_mg_urban_co.paa"
			};
		};
		class OryxAPC_M37_RCWS_Arid
		{
			displayName = "Arid Camo";
			author = "Kidd";
			textures[] =
			{
				"W_Units\data\Vehicles\OryxAPC\Standard\Arid\22nd_standard_oryx_armor_arid_co.paa",
				"W_Units\data\Vehicles\OryxAPC\Standard\Arid\22nd_standard_oryx_main_arid_co.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_desert_ca.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_desert_ca.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_desert_ca.paa",
				"W_Units\data\Vehicles\OryxAPC\Standard\Arid\22nd_standard_oryx_turret_arid_co.paa",
				"W_Units\data\Vehicles\OryxAPC\Standard\Arid\22nd_standard_Scorp_mg_arid_co.paa"
			};
		};
		class OryxAPC_M37_RCWS_Woodland
		{
			displayName = "Woodland Camo";
			author = "Kidd";
			textures[] =
			{
				"W_Units\data\Vehicles\OryxAPC\Standard\Woodland\22nd_standard_oryx_armor_woodland_co.paa",
				"W_Units\data\Vehicles\OryxAPC\Standard\Woodland\22nd_standard_oryx_main_woodland_co.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_jungle_ca.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_jungle_ca.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_jungle_ca.paa",
				"W_Units\data\Vehicles\OryxAPC\Standard\Woodland\22nd_standard_oryx_turret_woodland_co.paa",
				"W_Units\data\Vehicles\OryxAPC\Standard\Woodland\22nd_standard_Scorp_mg_woodland_co.paa"
			};
		};
		class OryxAPC_M37_RCWS_Arctic
		{
			displayName = "Arctic Camo";
			author = "Kidd";
			textures[] =
			{
				"W_Units\data\Vehicles\OryxAPC\Standard\Arctic\22nd_standard_oryx_armor_arctic_co.paa",
				"W_Units\data\Vehicles\OryxAPC\Standard\Arctic\22nd_standard_oryx_main_arctic_co.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_tundra_ca.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_tundra_ca.paa",
				"\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_tundra_ca.paa",
				"W_Units\data\Vehicles\OryxAPC\Standard\Arctic\22nd_standard_oryx_turret_arctic_co.paa",
				"W_Units\data\Vehicles\OryxAPC\Standard\Arctic\22nd_standard_Scorp_mg_arctic_co.paa"
			};
		};
	};
};