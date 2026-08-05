class CfgPatches
{
	class 22nd_vehicles_hornet
	{
		author="22nd Mod Team";
		addonRootClass="22nd_vehicles";
		requiredAddons[]=
		{
			"cba_main",
			"A3_Data_F",
			"OPTRE_Vehicles_Hornet",
	
		};
		requiredVersion=0.1;
		units[]=
		{
			"Warhound_Hornet"
		};
	};
};

class CfgVehicles
{
    class OPTRE_UNSC_hornet;
    class OPTRE_UNSC_hornet_CAP;
    class OPTRE_UNSC_hornet_CAS;
    class Warhound_Hornet: OPTRE_UNSC_hornet
    {
        scope=2;
        scopeCurator=2;
        author="Kidd";
        displayName="[22nd] AV-14 Hornet";
        faction="22nd_Faction";
        crew="OPTRE_UNSC_Marine_Pilot";
        editorCategory="22nd_Warhound_Company";
        editorSubcategory="22nd_Warhound_Company_Air_Vehicles";
        side=1;
        hiddenSelectionsTextures[] =
        {
            "z\22ndRDF\addons\vehicles\air\Hornet\Urban\22nd_hornet_hull_urban_CO.paa",
        };
        textureList[] =
        {
            "Arid",
            0,
            "Arctic",
            0,
            "Urban",
            1,
            "Woodland",
            0,
        };
        class textureSources
        {
            class Arid
            {
                displayName = "Arid";
                author = "Kidd";
                textures[] =
                {
                    "z\22ndRDF\addons\vehicles\air\Hornet\Arid\22nd_hornet_hull_arid_CO.paa",
                };
            };
            class Arctic
            {
                displayName = "Arctic";
                author = "Kidd";
                textures[] =
                {
                    "z\22ndRDF\addons\vehicles\air\Hornet\Arctic\22nd_hornet_hull_snow_CO.paa",
                };
            };
            class Urban
            {
                displayName = "Urban";
                author = "Kidd";
                textures[] =
                {
                    "z\22ndRDF\addons\vehicles\air\Hornet\Urban\22nd_hornet_hull_urban_CO.paa",
                };
            };
            class Woodland
            {
                displayName = "Woodland";
                author = "Kidd";
                textures[] =
                {
                    "z\22ndRDF\addons\vehicles\air\Hornet\Woodland\22nd_hornet_hull_wood_CO.paa",
                };
            };
        };
    };
};
