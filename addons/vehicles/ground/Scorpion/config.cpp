class CfgPatches
{
	class 22nd_vehicles_scorpion
	{
		author="22nd Mod Team";
		addonRootClass="22nd_vehicles";
		requiredAddons[]=
		{
			"cba_main",
			"A3_Data_F",
			"OPTRE_Vehicles_Scorpion",
	
		};
		requiredVersion=0.1;
		units[]=
		{
			"Warhound_M808BM_Scorpion",
            "Warhound_M808BM_Lancer_Scorpion",
            "Warhound_M808BM_Lancer_Scorpion_Driverless"
		};
	};
};

class CfgVehicles
{
    class OPTRE_M808BM_UNSC;
    class OPTRE_M808BM_UNSC_Driverless;
    class DMNS_M808B_F;
    class Warhound_M808BM_Scorpion: OPTRE_M808BM_UNSC
    {
        scope=2;
        author="Kidd";
        displayName="[22nd] M808BM Scorpion";
        faction="22nd_Faction";
        editorCategory="22nd_Warhound_Company";
        editorSubcategory="22nd_Warhound_Company_Tanks";
        editorPreview="\OPTRE_Vehicles\Oryx\data\Preview\OPTRE_M494.jpg";
        side=1;
        hiddenSelectionsTextures[] =
        {
            "z\22ndRDF\addons\vehicles\ground\Scorpion\Urban\22nd_Scorp_Base_Black_co.paa",
            "z\22ndRDF\addons\vehicles\ground\Scorpion\Urban\22nd_Scorp_Tur_Black_co.paa",
            "z\22ndRDF\addons\vehicles\ground\Scorpion\22nd_det_3_black_co.paa",
            "z\22ndRDF\addons\vehicles\ground\Scorpion\22nd_scorp_decal_blank_ca.paa",
            "z\22ndRDF\addons\vehicles\ground\Scorpion\Urban\Scorp_net_wood_ca.paa",
            "z\22ndRDF\addons\vehicles\ground\Scorpion\Urban\Scorp_net_wood_ca.paa",
            "z\22ndRDF\addons\vehicles\ground\Scorpion\Urban\22nd_Scorp_Mine_Roller_Black_co.paa",
            "z\22ndRDF\addons\vehicles\ground\Scorpion\Urban\22nd_Scorp_MG_Black_co.paa"
        };
        textureList[] =
        {
            "Scorp_Urban",
            1,
            "Scorp_Woodland",
            0,
            "Scorp_Arid",
            0,
            "Scorp_Arctic",
            0,
        };
        class textureSources
        {
            class Scorp_Urban
            {
                displayName = "Scorp_Urban";
                author = "Kidd";
                textures[] =
                {
                    "z\22ndRDF\addons\vehicles\ground\Scorpion\Urban\22nd_Scorp_Base_Black_co.paa",
                    "z\22ndRDF\addons\vehicles\ground\Scorpion\Urban\22nd_Scorp_Tur_Black_co.paa",
                    "z\22ndRDF\addons\vehicles\ground\Scorpion\22nd_det_3_black_co.paa",
                    "z\22ndRDF\addons\vehicles\ground\Scorpion\22nd_scorp_decal_blank_ca.paa",
                    "z\22ndRDF\addons\vehicles\ground\Scorpion\Urban\Scorp_net_wood_ca.paa",
                    "z\22ndRDF\addons\vehicles\ground\Scorpion\Urban\Scorp_net_wood_ca.paa",
                    "z\22ndRDF\addons\vehicles\ground\Scorpion\Urban\22nd_Scorp_Mine_Roller_Black_co.paa",
                    "z\22ndRDF\addons\vehicles\ground\Scorpion\Urban\22nd_Scorp_MG_Black_co.paa"
                };
            };
            class Scorp_Arid
            {
                displayName = "Scorp_Arid";
                author = "Kidd";
                textures[] =
                {
                    "z\22ndRDF\addons\vehicles\ground\Scorpion\Arid\22nd_Scorp_Base_Desert_co.paa",
                    "z\22ndRDF\addons\vehicles\ground\Scorpion\Arid\22nd_Scorp_Tur_Desert_co.paa",
                    "z\22ndRDF\addons\vehicles\ground\Scorpion\22nd_det_3_black_co.paa",
                    "z\22ndRDF\addons\vehicles\ground\Scorpion\22nd_scorp_decal_blank_ca.paa",
                    "z\22ndRDF\addons\vehicles\ground\Scorpion\Arid\Scorp_net_desert_ca.paa",
                    "z\22ndRDF\addons\vehicles\ground\Scorpion\Arid\Scorp_net_desert_ca.paa",
                    "z\22ndRDF\addons\vehicles\ground\Scorpion\Arid\22nd_Scorp_Mine_Roller_Desert_co.paa",
                    "z\22ndRDF\addons\vehicles\ground\Scorpion\Arid\22nd_Scorp_MG_Desert_co.paa"
                };
            };
            class Scorp_Woodland
            {
                displayName = "Scorp_Woodland";
                author = "Kidd";
                textures[] =
                {
                    "z\22ndRDF\addons\vehicles\ground\Scorpion\Woodland\22nd_Scorp_Base_Woodland_co.paa",
                    "z\22ndRDF\addons\vehicles\ground\Scorpion\Woodland\22nd_Scorp_Tur_Woodland_co.paa",
                    "z\22ndRDF\addons\vehicles\ground\Scorpion\22nd_det_3_black_co.paa",
                    "z\22ndRDF\addons\vehicles\ground\Scorpion\22nd_scorp_decal_blank_ca.paa",
                    "z\22ndRDF\addons\vehicles\ground\Scorpion\Woodland\Scorp_net_jungle_ca.paa",
                    "z\22ndRDF\addons\vehicles\ground\Scorpion\Woodland\Scorp_net_jungle_ca.paa",
                    "z\22ndRDF\addons\vehicles\ground\Scorpion\Woodland\22nd_Scorp_Mine_Roller_Woodland_co.paa",
                    "z\22ndRDF\addons\vehicles\ground\Scorpion\Woodland\22nd_Scorp_MG_Woodland_co.paa"
                };
            };
            class Scorp_Arctic
            {
                displayName = "Scorp_Arctic";
                author = "Kidd";
                textures[] =
                {
                    "z\22ndRDF\addons\vehicles\ground\Scorpion\Arctic\22nd_Scorp_Base_Arctic_co.paa",
                    "z\22ndRDF\addons\vehicles\ground\Scorpion\Arctic\22nd_Scorp_Tur_Arctic_co.paa",
                    "z\22ndRDF\addons\vehicles\ground\Scorpion\22nd_det_3_black_co.paa",
                    "z\22ndRDF\addons\vehicles\ground\Scorpion\22nd_scorp_decal_blank_ca.paa",
                    "z\22ndRDF\addons\vehicles\ground\Scorpion\Arctic\Scorp_net_tundra_ca.paa",
                    "z\22ndRDF\addons\vehicles\ground\Scorpion\Arctic\Scorp_net_tundra_ca.paa",
                    "z\22ndRDF\addons\vehicles\ground\Scorpion\Arctic\22nd_Scorp_Mine_Roller_Arctic_co.paa",
                    "z\22ndRDF\addons\vehicles\ground\Scorpion\Arctic\22nd_Scorp_MG_Arctic_co.paa"
                };
            };
        };
    };
    class Warhound_M808BM_Lancer_Scorpion: OPTRE_M808BM_UNSC
    {
        scope=2;
        author="Kidd";
        displayName="[22nd] M808BM Lancer Scorpion";
        faction="22nd_Faction";
        editorCategory="22nd_Warhound_Company";
        editorSubcategory="22nd_Warhound_Company_Tanks";
        editorPreview="\OPTRE_Vehicles\Oryx\data\Preview\OPTRE_M494.jpg";
        side=1;
        hiddenSelectionsTextures[] =
        {
            "z\22ndRDF\addons\vehicles\ground\Scorpion\Urban\22nd_Scorp_Base_Black_co.paa",
            "z\22ndRDF\addons\vehicles\ground\Scorpion\Lancer\22nd_Scorp_Tur_Lancer_Black_co.paa",
            "z\22ndRDF\addons\vehicles\ground\Scorpion\22nd_det_3_black_co.paa",
            "z\22ndRDF\addons\vehicles\ground\Scorpion\Lancer\22nd_scorp_decal_Lancer_co.paa",
            "z\22ndRDF\addons\vehicles\ground\Scorpion\Urban\Scorp_net_wood_ca.paa",
            "z\22ndRDF\addons\vehicles\ground\Scorpion\Urban\Scorp_net_wood_ca.paa",
            "z\22ndRDF\addons\vehicles\ground\Scorpion\Urban\22nd_Scorp_Mine_Roller_Black_co.paa",
            "z\22ndRDF\addons\vehicles\ground\Scorpion\Urban\22nd_Scorp_MG_Black_co.paa"
        };
        textureList[] =
        {
            "Lancer_Scorp_Urban",
            1,
            "Lancer_Scorp_Woodland",
            0,
            "Lancer_Scorp_Arid",
            0,
            "Lancer_Scorp_Arctic",
            0,
        };
        class textureSources
        {
            class Lancer_Scorp_Urban
            {
                displayName = "Lancer_Scorp_Urban";
                author = "Kidd";
                textures[] =
                {
                    "z\22ndRDF\addons\vehicles\ground\Scorpion\Urban\22nd_Scorp_Base_Black_co.paa",
                    "z\22ndRDF\addons\vehicles\ground\Scorpion\Lancer\22nd_Scorp_Tur_Lancer_Black_co.paa",
                    "z\22ndRDF\addons\vehicles\ground\Scorpion\22nd_det_3_black_co.paa",
                    "z\22ndRDF\addons\vehicles\ground\Scorpion\Lancer\22nd_scorp_decal_Lancer_co.paa",
                    "z\22ndRDF\addons\vehicles\ground\Scorpion\Urban\Scorp_net_wood_ca.paa",
                    "z\22ndRDF\addons\vehicles\ground\Scorpion\Urban\Scorp_net_wood_ca.paa",
                    "z\22ndRDF\addons\vehicles\ground\Scorpion\Urban\22nd_Scorp_Mine_Roller_Black_co.paa",
                    "z\22ndRDF\addons\vehicles\ground\Scorpion\Urban\22nd_Scorp_MG_Black_co.paa"
                };
            };
            class Lancer_Scorp_Arid
            {
                displayName = "Lancer_Scorp_Arid";
                author = "Kidd";
                textures[] =
                {
                    "z\22ndRDF\addons\vehicles\ground\Scorpion\Arid\22nd_Scorp_Base_Desert_co.paa",
                    "z\22ndRDF\addons\vehicles\ground\Scorpion\Lancer\22nd_Scorp_Tur_Lancer_Desert_co.paa",
                    "z\22ndRDF\addons\vehicles\ground\Scorpion\22nd_det_3_black_co.paa",
                    "z\22ndRDF\addons\vehicles\ground\Scorpion\Lancer\22nd_scorp_decal_Lancer_co.paa",
                    "z\22ndRDF\addons\vehicles\ground\Scorpion\Arid\Scorp_net_desert_ca.paa",
                    "z\22ndRDF\addons\vehicles\ground\Scorpion\Arid\Scorp_net_desert_ca.paa",
                    "z\22ndRDF\addons\vehicles\ground\Scorpion\Arid\22nd_Scorp_Mine_Roller_Desert_co.paa",
                    "z\22ndRDF\addons\vehicles\ground\Scorpion\Arid\22nd_Scorp_MG_Desert_co.paa"
                };
            };
            class Lancer_Scorp_Woodland
            {
                displayName = "Lancer_Scorp_Woodland";
                author = "Kidd";
                textures[] =
                {
                    "z\22ndRDF\addons\vehicles\ground\Scorpion\Woodland\22nd_Scorp_Base_Woodland_co.paa",
                    "z\22ndRDF\addons\vehicles\ground\Scorpion\Lancer\22nd_Scorp_Tur_Lancer_Woodland_co.paa",
                    "z\22ndRDF\addons\vehicles\ground\Scorpion\22nd_det_3_black_co.paa",
                    "z\22ndRDF\addons\vehicles\ground\Scorpion\Lancer\22nd_scorp_decal_Lancer_co.paa",
                    "z\22ndRDF\addons\vehicles\ground\Scorpion\Woodland\Scorp_net_jungle_ca.paa",
                    "z\22ndRDF\addons\vehicles\ground\Scorpion\Woodland\Scorp_net_jungle_ca.paa",
                    "z\22ndRDF\addons\vehicles\ground\Scorpion\Woodland\22nd_Scorp_Mine_Roller_Woodland_co.paa",
                    "z\22ndRDF\addons\vehicles\ground\Scorpion\Woodland\22nd_Scorp_MG_Woodland_co.paa"
                };
            };
            class Lancer_Scorp_Arctic
            {
                displayName = "Lancer_Scorp_Arctic";
                author = "Kidd";
                textures[] =
                {
                    "z\22ndRDF\addons\vehicles\ground\Scorpion\Arctic\22nd_Scorp_Base_Arctic_co.paa",
                    "z\22ndRDF\addons\vehicles\ground\Scorpion\Lancer\22nd_Scorp_Tur_Lancer_Arctic_co.paa",
                    "z\22ndRDF\addons\vehicles\ground\Scorpion\22nd_det_3_black_co.paa",
                    "z\22ndRDF\addons\vehicles\ground\Scorpion\Lancer\22nd_scorp_decal_Lancer_co.paa",
                    "z\22ndRDF\addons\vehicles\ground\Scorpion\Arctic\Scorp_net_tundra_ca.paa",
                    "z\22ndRDF\addons\vehicles\ground\Scorpion\Arctic\Scorp_net_tundra_ca.paa",
                    "z\22ndRDF\addons\vehicles\ground\Scorpion\Arctic\22nd_Scorp_Mine_Roller_Arctic_co.paa",
                    "z\22ndRDF\addons\vehicles\ground\Scorpion\Arctic\22nd_Scorp_MG_Arctic_co.paa"
                };
            };
        };
    };
    class Warhound_M808BM_Lancer_Scorpion_Driverless: OPTRE_M808BM_UNSC_Driverless
    {
        scope=2;
        author="Kidd";
        displayName="[22nd] M808BM Lancer Scorpion Driverless";
        faction="22nd_Faction";
        editorCategory="22nd_Warhound_Company";
        editorSubcategory="22nd_Warhound_Company_Tanks";
        editorPreview="\OPTRE_Vehicles\Oryx\data\Preview\OPTRE_M494.jpg";
        side=1;
        hiddenSelectionsTextures[] =
        {
            "z\22ndRDF\addons\vehicles\ground\Scorpion\Urban\22nd_Scorp_Base_Black_co.paa",
            "z\22ndRDF\addons\vehicles\ground\Scorpion\Lancer\22nd_Scorp_Tur_Lancer_Black_co.paa",
            "z\22ndRDF\addons\vehicles\ground\Scorpion\22nd_det_3_black_co.paa",
            "z\22ndRDF\addons\vehicles\ground\Scorpion\Lancer\22nd_scorp_decal_Lancer_co.paa",
            "z\22ndRDF\addons\vehicles\ground\Scorpion\Urban\Scorp_net_wood_ca.paa",
            "z\22ndRDF\addons\vehicles\ground\Scorpion\Urban\Scorp_net_wood_ca.paa",
            "z\22ndRDF\addons\vehicles\ground\Scorpion\Urban\22nd_Scorp_Mine_Roller_Black_co.paa",
            "z\22ndRDF\addons\vehicles\ground\Scorpion\Urban\22nd_Scorp_MG_Black_co.paa"
        };
        textureList[] =
        {
            "Lancer_Scorp_Urban_Driverless",
            1,
            "Lancer_Scorp_Woodland_Driverless",
            0,
            "Lancer_Scorp_Arid_Driverless",
            0,
            "Lancer_Scorp_Arctic_Driverless",
            0,
        };
        class textureSources
        {
            class Lancer_Scorp_Urban_Driverless
            {
                displayName = "Lancer_Scorp_Urban_Driverless";
                author = "Kidd";
                textures[] =
                {
                    "z\22ndRDF\addons\vehicles\ground\Scorpion\Urban\22nd_Scorp_Base_Black_co.paa",
                    "z\22ndRDF\addons\vehicles\ground\Scorpion\Lancer\22nd_Scorp_Tur_Lancer_Black_co.paa",
                    "z\22ndRDF\addons\vehicles\ground\Scorpion\22nd_det_3_black_co.paa",
                    "z\22ndRDF\addons\vehicles\ground\Scorpion\Lancer\22nd_scorp_decal_Lancer_co.paa",
                    "z\22ndRDF\addons\vehicles\ground\Scorpion\Urban\Scorp_net_wood_ca.paa",
                    "z\22ndRDF\addons\vehicles\ground\Scorpion\Urban\Scorp_net_wood_ca.paa",
                    "z\22ndRDF\addons\vehicles\ground\Scorpion\Urban\22nd_Scorp_Mine_Roller_Black_co.paa",
                    "z\22ndRDF\addons\vehicles\ground\Scorpion\Urban\22nd_Scorp_MG_Black_co.paa"
                };
            };
            class Lancer_Scorp_Arid_Driverless
            {
                displayName = "Lancer_Scorp_Arid_Driverless";
                author = "Kidd";
                textures[] =
                {
                    "z\22ndRDF\addons\vehicles\ground\Scorpion\Arid\22nd_Scorp_Base_Desert_co.paa",
                    "z\22ndRDF\addons\vehicles\ground\Scorpion\Lancer\22nd_Scorp_Tur_Lancer_Desert_co.paa",
                    "z\22ndRDF\addons\vehicles\ground\Scorpion\22nd_det_3_black_co.paa",
                    "z\22ndRDF\addons\vehicles\ground\Scorpion\Lancer\22nd_scorp_decal_Lancer_co.paa",
                    "z\22ndRDF\addons\vehicles\ground\Scorpion\Arid\Scorp_net_desert_ca.paa",
                    "z\22ndRDF\addons\vehicles\ground\Scorpion\Arid\Scorp_net_desert_ca.paa",
                    "z\22ndRDF\addons\vehicles\ground\Scorpion\Arid\22nd_Scorp_Mine_Roller_Desert_co.paa",
                    "z\22ndRDF\addons\vehicles\ground\Scorpion\Arid\22nd_Scorp_MG_Desert_co.paa"
                };
            };
            class Lancer_Scorp_Woodland_Driverless
            {
                displayName = "Lancer_Scorp_Woodland_Driverless";
                author = "Kidd";
                textures[] =
                {
                    "z\22ndRDF\addons\vehicles\ground\Scorpion\Woodland\22nd_Scorp_Base_Woodland_co.paa",
                    "z\22ndRDF\addons\vehicles\ground\Scorpion\Lancer\22nd_Scorp_Tur_Lancer_Woodland_co.paa",
                    "z\22ndRDF\addons\vehicles\ground\Scorpion\22nd_det_3_black_co.paa",
                    "z\22ndRDF\addons\vehicles\ground\Scorpion\Lancer\22nd_scorp_decal_Lancer_co.paa",
                    "z\22ndRDF\addons\vehicles\ground\Scorpion\Woodland\Scorp_net_jungle_ca.paa",
                    "z\22ndRDF\addons\vehicles\ground\Scorpion\Woodland\Scorp_net_jungle_ca.paa",
                    "z\22ndRDF\addons\vehicles\ground\Scorpion\Woodland\22nd_Scorp_Mine_Roller_Woodland_co.paa",
                    "z\22ndRDF\addons\vehicles\ground\Scorpion\Woodland\22nd_Scorp_MG_Woodland_co.paa"
                };
            };
            class Lancer_Scorp_Arctic_Driverless
            {
                displayName = "Lancer_Scorp_Arctic_Driverless";
                author = "Kidd";
                textures[] =
                {
                    "z\22ndRDF\addons\vehicles\ground\Scorpion\Arctic\22nd_Scorp_Base_Arctic_co.paa",
                    "z\22ndRDF\addons\vehicles\ground\Scorpion\Lancer\22nd_Scorp_Tur_Lancer_Arctic_co.paa",
                    "z\22ndRDF\addons\vehicles\ground\Scorpion\22nd_det_3_black_co.paa",
                    "z\22ndRDF\addons\vehicles\ground\Scorpion\Lancer\22nd_scorp_decal_Lancer_co.paa",
                    "z\22ndRDF\addons\vehicles\ground\Scorpion\Arctic\Scorp_net_tundra_ca.paa",
                    "z\22ndRDF\addons\vehicles\ground\Scorpion\Arctic\Scorp_net_tundra_ca.paa",
                    "z\22ndRDF\addons\vehicles\ground\Scorpion\Arctic\22nd_Scorp_Mine_Roller_Arctic_co.paa",
                    "z\22ndRDF\addons\vehicles\ground\Scorpion\Arctic\22nd_Scorp_MG_Arctic_co.paa"
                };
            };
        };
    };
};
