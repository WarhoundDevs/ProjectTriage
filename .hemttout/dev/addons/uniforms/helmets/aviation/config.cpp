class CfgPatches 
{
    class 22nd_uniforms_helmets_aviation
    {
        units[] = {};
        weapons[] = 
        {
            "22nd_VX19_base",

            "22nd_VX19_Urban",
            "22nd_VX19_Woodland",
            "22nd_VX19_Winter",
            "22nd_VX19_Arid",

            "22nd_VX19_Urban_HMHD",
            "22nd_VX19_Woodland_HMHD",
            "22nd_VX19_Winter_HMHD",
            "22nd_VX19_Arid_HMHD",


            "22nd_HelmCustom_Manta_Urban",
            "22nd_HelmCustom_Manta_Woodland",
            "22nd_HelmCustom_Manta_Winter",
            "22nd_HelmCustom_Manta_Arid",


            "22nd_HelmCustom_Cuban_Urban",
            "22nd_HelmCustom_Cuban_Woodland",
            "22nd_HelmCustom_Cuban_Arid",
            "22nd_HelmCustom_Cuban_Snow",


            "22nd_HelmCustom_Astro_Urban",
            "22nd_HelmCustom_Astro_Woodland",
            "22nd_HelmCustom_Astro_Arid",
            "22nd_HelmCustom_Astro_Snow",


            "22nd_HelmCustom_Evans_Urban",
            "22nd_HelmCustom_Evans_Woodland",
            "22nd_HelmCustom_Evans_Arid",
            "22nd_HelmCustom_Evans_Snow",


            // "22nd_HelmCustom_Kamea_Urban"
            // "22nd_HelmCustom_Kamea_Woodland",
            // "22nd_HelmCustom_Kamea_Arid", 
            // "22nd_HelmCustom_Kamea_Snow",


            "22nd_HelmCustom_Ras_Urban",
            "22nd_HelmCustom_Ras_Woodland",
            "22nd_HelmCustom_Ras_Arid",
            "22nd_HelmCustom_Ras_Snow"
        };
        requiredVersion = 1.0;
        requiredAddons[] = 
        {
            "OPTRE_FC_Units_Marines", 
            "A3_Characters_F",
            "A3_Data_F_Mark"
        }; // Reference any required addons
    };
};

// For customs remember to add a value under "variants"
#include "vx19XtdGear.hpp"

class OPTRE_FC_VX19_Helmet
{
	// picture="\OPTRE_FC_Units\Marines\data\h3_pilothelmet_i_ca.paa";
	class ItemInfo;
};



class CfgWeapons
{



    class 22nd_VX19_base: OPTRE_FC_VX19_Helmet //our base helmet but also doubles as VX-19 Urban
    {
        scope = 0;
        scopeArsenal = 0;
        dlc="22nd_RDF";
        author = "Warhound Mod Team + OPTRE FC";
        displayName = "[22nd] VX-19 Urban";
        model = "\OPTRE_FC_Units\Marines\h3_pilothelmet.p3d";
        picture = "\z\22ndRDF\addons\uniforms\helmets\22ndRDF.paa";
        class ItemInfo : ItemInfo
		{
			mass = 40;
			// if defined, this headgear item gains functionality (visual modes) of given NVG item and will occupy its slot as well.
			// Currently works only for Headgear + NVG + Radio item combinations.
			// subItems[] = { "Integrated_NVG_F" };
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=20;
					passThrough=0.1;
				};
			};
		};
    };

    //ORCA
    class 22nd_VX19_Urban: 22nd_VX19_base
    {
        displayName = "[22nd] VX-19 Urban";
        scope = 2;
        scopeArsenal = 2;
        class XtdGearInfo
        {
            model = "22nd_VX19";
            Camouflage = "Urban";
            Variant = "Standard";
        };
        hiddenSelectionsTextures[] =
        {
            "\z\22ndRDF\addons\uniforms\helmets\aviation\data\orca\22nd_Air_Helm_Urban_Co.paa",
            "OPTRE_FC_Units\Marines\Data\h3_pilothelmet_visor_co.paa"
        };
  //       class ItemInfo : ItemInfo
		// {
		// 	hiddenSelectionsTextures[]=
		// 	{
		// 		  "\z\22ndRDF\addons\uniforms\helmets\aviation\data\orca\22nd_Air_Helm_Urban_Co.paa",
  //                 "OPTRE_FC_Units\Marines\Data\h3_pilothelmet_visor_co.paa"
		// 	};
		// };
    };

    class 22nd_VX19_Woodland: 22nd_VX19_base
    {
        displayName = "[22nd] VX-19 Woodland";
        scope=2;
        scopeArsenal=2;
        class XtdGearInfo
        {
            model = "22nd_VX19";
            Camouflage = "Woodland";
            Variant = "Standard";
        };
        hiddenSelectionsTextures[] =
        {
            "\z\22ndRDF\addons\uniforms\helmets\aviation\data\orca\22nd_Air_Helm_Woodland_Co.paa",
            "OPTRE_FC_Units\Marines\Data\h3_pilothelmet_visor_co.paa"
        };
    };

    class 22nd_VX19_Winter: 22nd_VX19_base
    {
        scope=2;
        scopeArsenal=2;
        displayName = "[22nd] VX-19 Winter";
        class XtdGearInfo
        {
            model = "22nd_VX19";
            Camouflage = "Winter";
            Variant = "Standard";
        };
        hiddenSelectionsTextures[] =
        {
            "\z\22ndRDF\addons\uniforms\helmets\aviation\data\orca\22nd_Air_Helm_Snow_Co.paa",
            "optre_fc_units\marines\data\h3_pilothelmet_visor_co.paa"
        };
        class ItemInfo : ItemInfo
		{
		    hiddenSelectionsTextures[] =
            {
                "addons\\z\22ndRDF\addons\uniforms\helmets\aviation\data\orca\22nd_Air_Helm_Snow_Co.paa",
                "optre_fc_units\marines\data\h3_pilothelmet_visor_co.paa"
            };
		};
    };

    class 22nd_VX19_Arid: 22nd_VX19_base
    {

        displayName = "[22nd] VX-19 Arid";
        scope=2;
        scopeArsenal=2;
        class XtdGearInfo
        {
            model = "22nd_VX19";
            Camouflage = "Arid";
            Variant = "Standard";
        };
        hiddenSelectionsTextures[] =
        {
            "\z\22ndRDF\addons\uniforms\helmets\aviation\data\orca\22nd_Air_Helm_Arid_Co.paa",
            "optre_fc_units\marines\data\h3_pilothelmet_visor_co.paa"
        };
        class ItemInfo : ItemInfo
		{
		    hiddenSelectionsTextures[] =
            {
                "\z\22ndRDF\addons\uniforms\helmets\aviation\data\orca\22nd_Air_Helm_Arid_Co.paa",
                "optre_fc_units\marines\data\h3_pilothelmet_visor_co.paa"
            };
		};
    };

    //HAMMERHEAD

    class 22nd_VX19_Urban_HMHD: 22nd_VX19_base
    {
        displayName = "[22nd] VX-19 Urban (Hammerhead)";
        scope=2;
        scopeArsenal=2;
        class XtdGearInfo
        {
            model = "22nd_VX19";
            Camouflage = "Urban";
            Variant = "HMHD";
        };
        hiddenSelectionsTextures[] =
        {
            "\z\22ndRDF\addons\uniforms\helmets\aviation\data\hammerhead\22nd_Air_Helm_Urban_HMHD_Co.paa",
            "OPTRE_FC_Units\Marines\Data\h3_pilothelmet_visor_co.paa"
        };
        class ItemInfo : ItemInfo
		{
		    hiddenSelectionsTextures[] =
            {
                 "\z\22ndRDF\addons\uniforms\helmets\aviation\data\hammerhead\22nd_Air_Helm_Urban_HMHD_Co.paa",
                 "OPTRE_FC_Units\Marines\Data\h3_pilothelmet_visor_co.paa"
            };
		};
    };


    class 22nd_VX19_Woodland_HMHD: 22nd_VX19_base
    {
 
        displayName = "[22nd] VX-19 Woodland (Hammerhead)";
        scope=2;
        scopeArsenal=2;
        class XtdGearInfo
        {
            model = "22nd_VX19";
            Camouflage = "Woodland";
            Variant = "HMHD";
        };
        hiddenSelectionsTextures[] =
        {
            "\z\22ndRDF\addons\uniforms\helmets\aviation\data\hammerhead\22nd_Air_Helm_Woodland_HMHD_Co.paa",
            "OPTRE_FC_Units\Marines\Data\h3_pilothelmet_visor_co.paa"
        };
        class ItemInfo : ItemInfo
		{
		    hiddenSelectionsTextures[] =
            {
                "\z\22ndRDF\addons\uniforms\helmets\aviation\data\hammerhead\22nd_Air_Helm_Woodland_HMHD_Co.paa",
                "OPTRE_FC_Units\Marines\Data\h3_pilothelmet_visor_co.paa"
            };
		};
    };


    class 22nd_VX19_Winter_HMHD: 22nd_VX19_base
    {
        displayName = "[22nd] VX-19 Winter (Hammerhead)";
        scope=2;
        scopeArsenal=2;
        class XtdGearInfo
        {
            model = "22nd_VX19";
            Camouflage = "Winter";
            Variant = "HMHD";
        };
        hiddenSelectionsTextures[] =
        {
            "\z\22ndRDF\addons\uniforms\helmets\aviation\data\hammerhead\22nd_Air_Helm_Snow_HMHD_Co.paa",
            "optre_fc_units\marines\data\h3_pilothelmet_visor_co.paa",
        };
    };


    class 22nd_VX19_Arid_HMHD: 22nd_VX19_base
    {
        displayName = "[22nd] VX-19 Arid (Hammerhead)";
        class XtdGearInfo
        {
            model = "22nd_VX19";
            Camouflage = "Arid";
            Variant = "HMHD";
        };
        hiddenSelectionsTextures[] =
        {
            "\z\22ndRDF\addons\uniforms\helmets\aviation\data\hammerhead\22nd_Air_Helm_Arid_HMHD_Co.paa",
            "optre_fc_units\marines\data\h3_pilothelmet_visor_co.paa",
        };
    };

    ////CUSTOMS


    //Manta
    class 22nd_HelmCustom_Manta_Urban: 22nd_VX19_base
    {
        displayName = "[22nd] VX-19 Manta (Urban)";
        scope=2;
        scopeArsenal=2;
        class XtdGearInfo
        {
            model = "22nd_VX19";
            Camouflage = "Urban";
            Variant = "Manta";
        };
        hiddenSelectionsTextures[] =
        {
            "\z\22ndRDF\addons\uniforms\helmets\aviation\data\customs\manta\22nd_Air_Helm_Manta_Urban_Co.paa",
            "optre_fc_units\marines\data\h3_pilothelmet_visor_co.paa"
        };
    };

    class 22nd_HelmCustom_Manta_Woodland: 22nd_VX19_base
    {
        scope=2;
        scopeArsenal=2;
        displayName = "[22nd] VX-19 Manta (Woodland)";
        class XtdGearInfo
        {
            model = "22nd_VX19";
            Camouflage = "Woodland";
            Variant = "Manta";
        };
        hiddenSelectionsTextures[] =
        {
            "\z\22ndRDF\addons\uniforms\helmets\aviation\data\customs\manta\22nd_Air_Helm_Manta_Woodland_Co.paa",
            "optre_fc_units\marines\data\h3_pilothelmet_visor_co.paa"
        };
    };

    class 22nd_HelmCustom_Manta_Arid: 22nd_VX19_base
    {
        displayName = "[22nd] VX-19 Manta (Arid)";
        scope=2;
        scopeArsenal=2;
        class XtdGearInfo
        {
            model = "22nd_VX19";
            Camouflage = "Arid";
            Variant = "Manta";
        };
        hiddenSelectionsTextures[] =
        {
            "\z\22ndRDF\addons\uniforms\helmets\aviation\data\customs\manta\22nd_Air_Helm_Manta_Arid_Co.paa",
            "optre_fc_units\marines\data\h3_pilothelmet_visor_co.paa"
        };
    };

    class 22nd_HelmCustom_Manta_Snow: 22nd_VX19_base
    {
        displayName = "[22nd] VX-19 Manta (Snow)";
        scope=2;
        scopeArsenal=2;
        class XtdGearInfo
        {
            model = "22nd_VX19";
            Camouflage = "Winter";
            Variant = "Manta";
        };
        hiddenSelectionsTextures[] =
        {
            "\z\22ndRDF\addons\uniforms\helmets\aviation\data\customs\manta\22nd_Air_Helm_Manta_Snow_Co.paa",
            "optre_fc_units\marines\data\h3_pilothelmet_visor_co.paa"
        };
    };


    //Cuban
    class 22nd_HelmCustom_Cuban_Urban: 22nd_VX19_base
    {
        displayName = "[22nd] VX-19 Cuban (Urban)";
        scope=2;
        scopeArsenal=2;
        class XtdGearInfo
        {
            model = "22nd_VX19";
            Camouflage = "Urban";
            Variant = "Cuban";
        };
        hiddenSelectionsTextures[] =
        {
            "\z\22ndRDF\addons\uniforms\helmets\aviation\data\customs\cuban\22nd_Air_Helm_Cuban_Urban_Co.paa", 
            "optre_fc_units\marines\data\h3_pilothelmet_visor_co.paa"
        };
    };

    class 22nd_HelmCustom_Cuban_Woodland: 22nd_VX19_base
    {
        displayName = "[22nd] VX-19 Cuban (Woodland)";
        scope=2;
        scopeArsenal=2;
        class XtdGearInfo
        {
            model = "22nd_VX19";
            Camouflage = "Woodland";
            Variant = "Cuban";
        };
        hiddenSelectionsTextures[] =
        {
            "\z\22ndRDF\addons\uniforms\helmets\aviation\data\customs\cuban\22nd_Air_Helm_Cuban_Woodland_Co.paa",
            "optre_fc_units\marines\data\h3_pilothelmet_visor_co.paa"
        };
    };

    class 22nd_HelmCustom_Cuban_Arid: 22nd_VX19_base
    {
        displayName = "[22nd] VX-19 Cuban (Arid)";
        scope=2;
        scopeArsenal=2;
        class XtdGearInfo
        {
            model = "22nd_VX19";
            Camouflage = "Arid";
            Variant = "Cuban";
        };
        hiddenSelectionsTextures[] =
        {
            "\z\22ndRDF\addons\uniforms\helmets\aviation\data\customs\cuban\22nd_Air_Helm_Cuban_Arid_Co.paa", 
            "optre_fc_units\marines\data\h3_pilothelmet_visor_co.paa"
        };
    };

    class 22nd_HelmCustom_Cuban_Snow: 22nd_VX19_base
    {
        displayName = "[22nd] VX-19 Cuban (Snow)";
        scope=2;
        scopeArsenal=2;
        class XtdGearInfo
        {
            model = "22nd_VX19";
            Camouflage = "Winter";
            Variant = "Cuban";
        };
        hiddenSelectionsTextures[] =
        {
            "\z\22ndRDF\addons\uniforms\helmets\aviation\data\hammerhead\22nd_Air_Helm_Cuban_Snow_Co.paa",
            "optre_fc_units\marines\data\h3_pilothelmet_visor_co.paa"
        };
    };
    

    //Astro
    class 22nd_HelmCustom_Astro_Urban: 22nd_VX19_base
    {
        displayName = "[22nd] VX-19 Astro (Urban)";
        scope=2;
        scopeArsenal=2;
        class XtdGearInfo
        {
            model = "22nd_VX19";
            Camouflage = "Urban";
            Variant = "Astro";
        };
        hiddenSelectionsTextures[] = 
        {
            "\z\22ndRDF\addons\uniforms\helmets\aviation\data\customs\astro\22nd_Air_Helm_Astro_Urban_Co.paa", 
            "\z\22ndRDF\addons\uniforms\helmets\aviation\data\customs\astro\h3_pilothelmet_visor_crack_co.paa"
        };
    };

    class 22nd_HelmCustom_Astro_Woodland : 22nd_VX19_base
    {
        displayName = "[22nd] VX-19 Astro (Woodland)";
        scope=2;
        scopeArsenal=2;
        class XtdGearInfo
        {
            model = "22nd_VX19";
            Camouflage = "Woodland";
            Variant = "Astro";
        };
        hiddenSelectionsTextures[] =
        {
            "\z\22ndRDF\addons\uniforms\helmets\aviation\data\customs\astro\22nd_Air_Helm_Astro_Woodland_Co.paa",
            "\z\22ndRDF\addons\uniforms\helmets\aviation\data\customs\astro\h3_pilothelmet_visor_crack_co.paa"
        };
    };

    class 22nd_HelmCustom_Astro_Arid : 22nd_VX19_base
    {
        displayName = "[22nd] VX-19 Astro (Arid)";
        scope=2;
        scopeArsenal=2;
        class XtdGearInfo
        {
            model = "22nd_VX19";
            Camouflage = "Arid";
            Variant = "Astro";
        };
        hiddenSelectionsTextures[] =
        {
            "\z\22ndRDF\addons\uniforms\helmets\aviation\data\customs\astro\22nd_Air_Helm_Astro_Arid_Co.paa",
            "\z\22ndRDF\addons\uniforms\helmets\aviation\data\customs\astro\h3_pilothelmet_visor_crack_co.paa"
        };
    };

    class 22nd_HelmCustom_Astro_Snow : 22nd_VX19_base
    {
        displayName = "[22nd] VX-19 Astro (Snow)";
        scope=2;
        scopeArsenal=2;
        class XtdGearInfo
        {
            model = "22nd_VX19";
            Camouflage = "Winter";
            Variant = "Astro";
        };
        hiddenSelectionsTextures[] =
        {
            "\z\22ndRDF\addons\uniforms\helmets\aviation\data\customs\astro\22nd_Air_Helm_Astro_Snow_Co.paa",
            "\z\22ndRDF\addons\uniforms\helmets\aviation\data\customs\astro\h3_pilothelmet_visor_crack_co.paa"
        };
    };


    //Evans
    class 22nd_HelmCustom_Evans_Urban : 22nd_VX19_base
    {
        displayName = "[22nd] VX-19 Evans (Urban)";
        scope=2;
        scopeArsenal=2;
        class XtdGearInfo
        {
            model = "22nd_VX19";
            Camouflage = "Urban";
            Variant = "Evans";
        };
        hiddenSelectionsTextures[] =
        {
            "\z\22ndRDF\addons\uniforms\helmets\aviation\data\customs\evans\22nd_Air_Helm_Evans_Urban_Co.paa",
            "optre_fc_units\marines\data\h3_pilothelmet_visor_co.paa"
        };
    };

    class 22nd_HelmCustom_Evans_Woodland : 22nd_VX19_base
    {
        displayName = "[22nd] VX-19 Evans (Woodland)";
        scope=2;
        scopeArsenal=2;
        class XtdGearInfo
        {
            model = "22nd_VX19";
            Camouflage = "Woodland";
            Variant = "Evans";
        };
        hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
        hiddenSelectionsTextures[] =
        {
            "\z\22ndRDF\addons\uniforms\helmets\aviation\data\customs\evans\22nd_Air_Helm_Evans_Woodland_Co.paa",
            "optre_fc_units\marines\data\h3_pilothelmet_visor_co.paa"
        };
    };

    class 22nd_HelmCustom_Evans_Arid : 22nd_VX19_base
    {
        displayName = "[22nd] VX-19 Evans (Arid)";
        scope=2;
        scopeArsenal=2;
        class XtdGearInfo
        {
            model = "22nd_VX19";
            Camouflage = "Arid";
            Variant = "Evans";
        };
        hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
        hiddenSelectionsTextures[] =
        {
            "\z\22ndRDF\addons\uniforms\helmets\aviation\data\customs\evans\22nd_Air_Helm_Evans_Arid_Co.paa",
            "optre_fc_units\marines\data\h3_pilothelmet_visor_co.paa"
        };
    };

    class 22nd_HelmCustom_Evans_Snow : 22nd_VX19_base
    {
        displayName = "[22nd] VX-19 Evans (Snow)";
        scope=2;
        scopeArsenal=2;
        class XtdGearInfo
        {
            model = "22nd_VX19";
            Camouflage = "Winter";
            Variant = "Evans";
        };
        hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
        hiddenSelectionsTextures[] =
        {
            "\z\22ndRDF\addons\uniforms\helmets\aviation\data\customs\evans\22nd_Air_Helm_Evans_Snow_Co.paa",
            "optre_fc_units\marines\data\h3_pilothelmet_visor_co.paa"
        };
    };
    

    //Kamea
    // class 22nd_HelmCustom_Kamea_Urban : 22nd_VX19_base
    // {
    //     displayName = "[22nd] VX-19 Kamea (Urban)";
    //     class XtdGearInfo
    //     {
    //         model = "22nd_VX19";
    //         Camouflage = "Urban";
    //         Variant = "Kamea";
    //     };
    //     hiddenSelectionsTextures[] =
    //     {
    //         "\z\22ndRDF\addons\uniforms\helmets\Customs\aviation\Kamea\22nd_Air_Helm_Kamea_Urban_Co.paa",
    //         "optre_fc_units\marines\data\h3_pilothelmet_visor_co.paa"
    //     };
    // };

    // class 22nd_HelmCustom_Kamea_Woodland : 22nd_VX19_base
    // {
    //     scope = 2;
    //     scopeArsenal = 2;
    //     author = "Warhound Mod Team";
    //     displayName = "[22nd] VX-19 Kamea (Woodland)";
    //     model = "\OPTRE_FC_Units\Marines\h3_pilothelmet.p3d";
    //     picture = "\z\22ndRDF\addons\uniforms\helmets\22ndRDF.paa";

    //     class XtdGearInfo
    //     {
    //         model = "22nd_VX19";
    //         Camouflage = "Woodland";
    //         Variant = "Kamea";
    //     };

    //     hiddenSelectionsTextures[] =
    //     {
    //         "\z\22ndRDF\addons\uniforms\helmets\Customs\aviation\Kamea\22nd_Air_Helm_Kamea_Woodland_Co.paa",
    //         "optre_fc_units\marines\data\h3_pilothelmet_visor_co.paa"
    //     };
    // };

    // class 22nd_HelmCustom_Kamea_Arid : 22nd_VX19_base
    // {
    //     scope = 2;
    //     scopeArsenal = 2;
    //     author = "Warhound Mod Team";
    //     displayName = "[22nd] VX-19 Kamea (Arid)";
    //     model = "\OPTRE_FC_Units\Marines\h3_pilothelmet.p3d";
    //     picture = "\z\22ndRDF\addons\uniforms\helmets\22ndRDF.paa";

    //     class XtdGearInfo
    //     {
    //         model = "22nd_VX19";
    //         Camouflage = "Arid";
    //         Variant = "Kamea";
    //     };

    //     hiddenSelectionsTextures[] =
    //     {
    //         "\z\22ndRDF\addons\uniforms\helmets\Customs\aviation\Kamea\22nd_Air_Helm_Kamea_Arid_Co.paa",
    //         "optre_fc_units\marines\data\h3_pilothelmet_visor_co.paa"
    //     };
    // };

    // class 22nd_HelmCustom_Kamea_Snow : 22nd_VX19_base
    // {
    //     scope = 2;
    //     scopeArsenal = 2;
    //     author = "Warhound Mod Team";
    //     displayName = "[22nd] VX-19 Kamea (Snow)";
    //     model = "\OPTRE_FC_Units\Marines\h3_pilothelmet.p3d";
    //     picture = "\z\22ndRDF\addons\uniforms\helmets\22ndRDF.paa";

    //     class XtdGearInfo
    //     {
    //         model = "22nd_VX19";
    //         Camouflage = "Winter";
    //         Variant = "Kamea";
    //     };

    //     hiddenSelectionsTextures[] =
    //     {
    //         "\z\22ndRDF\addons\uniforms\helmets\Customs\aviation\Kamea\22nd_Air_Helm_Kamea_Snow_Co.paa",
    //         "optre_fc_units\marines\data\h3_pilothelmet_visor_co.paa"
    //     };
    // };
    

    //Ras
    class 22nd_HelmCustom_Ras_Urban : 22nd_VX19_base
    {
        displayName = "[22nd] VX-19 Ras (Urban)";
        scope=2;
        scopeArsenal=2;
        class XtdGearInfo
        {
            model = "22nd_VX19";
            Camouflage = "Urban";
            Variant = "Ras";
        };
        hiddenSelectionsTextures[] =  
        {
            "\z\22ndRDF\addons\uniforms\helmets\aviation\data\customs\ras\22nd_Air_Helm_Ras_Urban_Co.paa",
            "optre_fc_units\marines\data\h3_pilothelmet_visor_co.paa"
        };
    };

    class 22nd_HelmCustom_Ras_Woodland : 22nd_VX19_base
    {
        displayName = "[22nd] VX-19 Ras (Woodland)";
        scope=2;
        scopeArsenal=2;
        class XtdGearInfo
        {
            model = "22nd_VX19";
            Camouflage = "Woodland";
            Variant = "Ras";
        };
        hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
        hiddenSelectionsTextures[] =
        {
            "\z\22ndRDF\addons\uniforms\helmets\aviation\data\customs\ras\22nd_Air_Helm_Ras_Woodland_Co.paa",
            "optre_fc_units\marines\data\h3_pilothelmet_visor_co.paa"
        };
    };

    class 22nd_HelmCustom_Ras_Arid : 22nd_VX19_base
    {
        displayName = "[22nd] VX-19 Ras (Arid)";
        scope=2;
        scopeArsenal=2;
        class XtdGearInfo
        {
            model = "22nd_VX19";
            Camouflage = "Arid";
            Variant = "Ras";
        };
        hiddenSelectionsTextures[] =
        {
            "\z\22ndRDF\addons\uniforms\helmets\aviation\data\customs\ras\22nd_Air_Helm_Ras_Arid_Co.paa",
            "optre_fc_units\marines\data\h3_pilothelmet_visor_co.paa"
        };
    };

    class 22nd_HelmCustom_Ras_Snow : 22nd_VX19_base
    {
        displayName = "[22nd] VX-19 Ras (Snow)";
        scope=2;
        scopeArsenal=2;
        class XtdGearInfo
        {
            model = "22nd_VX19";
            Camouflage = "Winter";
            Variant = "Ras";
        };
        hiddenSelectionsTextures[] =
        {
            "\z\22ndRDF\addons\uniforms\helmets\aviation\data\customs\ras\22nd_Air_Helm_Ras_Snow_Co.paa",
            "optre_fc_units\marines\data\h3_pilothelmet_visor_co.paa"
        };
    };
};

