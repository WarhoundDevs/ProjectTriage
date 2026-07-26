class CfgPatches 
{
    class 22nd_uniforms_helmets_AA
    {
        units[] = {};
        weapons[] = 
        {
        
        "22nd_AA_base",

        "22nd_AA_Helmet_Urban",
        "22nd_AA_Helmet_Snow",
        "22nd_AA_Helmet_Woodland",

        "22nd_AA_Custom_Hatty"


        };
        requiredVersion = 1.0;
        requiredAddons[] = 
        {
            "MA_Armor", 
            "A3_Characters_F",
            "A3_Data_F_Mark"
        }; // Reference any required addons
    };
};

// For customs remember to add a value under "variants"
#include "aaXtdGear.hpp"

class MA_M56A_Helmet
{
	class ItemInfo;
};



class CfgWeapons
{



    class 22nd_AA_base: MA_M56A_Helmet //our base helmet but also doubles as VX-19 Urban
    {
        scope = 0;
        scopeArsenal = 0;
        dlc="22nd_RDF";
        author = "Warhound Mod Team + Misriah Armory";
        displayName = "[22nd] Air Assault base";
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

    //Base
    class 22nd_AA_Helmet_Urban: 22nd_AA_base
    {
        scope=0;
        scopeArsenal=0;
        displayName= "[22nd] Air Assault Urban";

        class XtdGearInfo
        {
            model = "22nd_AA_Helmet";
            Camouflage = "Urban";
            Variant = "Base";
        };

        hiddenSelectionsTextures[]=
        {
            "\z\22ndRDF\addons\uniforms\helmets\AA\data\base\22nd_AA_Helm_Urban_co.paa",
            "MA_Armor\data\Helmets\AA\AA_Visor_Blue_co.paa"
        };
    };

    class 22nd_AA_Helmet_Snow: 22nd_AA_base
    {
        scope=0;
        scopeArsenal=0;
        displayName= "[22nd] Air Assault Snow";
        class XtdGearInfo
        {
            model = "22nd_AA_Helmet";
            Camouflage = "Winter";
            Variant = "Base";
        };
        hiddenSelectionsTextures[]=
        {
            "\z\22ndRDF\addons\uniforms\helmets\AA\data\base\22nd_AA_Helm_Snow_co.paa",
            "MA_Armor\data\Helmets\AA\AA_Visor_Blue_co.paa"
        };
    };

    class 22nd_AA_Helmet_Woodland: 22nd_AA_base
    {
        scope=0;
        scopeArsenal=0;
        displayName= "[22nd] Air Assault Woodland";
        class XtdGearInfo
        {
            model = "22nd_AA_Helmet";
            Camouflage = "Woodland";
            Variant = "Base";
        };
        hiddenSelectionsTextures[]=
        {
            "\z\22ndRDF\addons\uniforms\helmets\AA\data\base\22nd_AA_Helm_Woodland_co.paa",
            "MA_Armor\data\Helmets\AA\AA_Visor_Blue_co.paa"
        };
    };


    //Start Customs
    class 22nd_AA_Custom_Hatty: 22nd_AA_base
    {
        scope=0;
        scopeArsenal=0;
        displayName= "[22nd] AA Custom Hatty";
        class XtdGearInfo
        {
            model = "22nd_AA_Helmet";
            Camouflage = "Woodland";
            Variant = "Hatty";
        };
        hiddenSelectionsTextures[]=
        {
            "\z\22ndRDF\addons\uniforms\helmets\AA\data\customs\Hatty\22nd_Hatty_Helm_Custom_co.paa",
            "MA_Armor\data\Helmets\AA\AA_Visor_Blue_co.paa"
        };
    };
};

