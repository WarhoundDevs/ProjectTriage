class CfgPatches 
{
    class 22nd_uniforms_helmets_commando
    {
        units[] = {};
        weapons[] = 
        {
        
        "22nd_helmet_commando_base",

        "22nd_Commando_base_Urban",
        "22nd_Commando_base_Winter",
        "22nd_Commando_base_Woodland",

        "22nd_Commando_Custom_Test"



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
#include "commandoXtdGear.hpp"

class MA_Mjolnir_Commando_Helmet
{
	class ItemInfo;
};



class CfgWeapons
{



    class 22nd_helmet_commando_base: MA_Mjolnir_Commando_Helmet //our base helmet but also doubles as VX-19 Urban
    {
        scope = 0;
        scopeArsenal = 0;
        dlc="22nd_RDF";
        author = "Warhound Mod Team + Misriah Armory";
        displayName = "[22nd] Commando base";
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
    class 22nd_Commando_base_Urban: 22nd_helmet_commando_base
    {
        scope=0;
        scopeArsenal=0;
        displayName= "[22nd] Commando Urban";
        class XtdGearInfo
        {
            model = "22nd_Commando_Helmet";
            Camouflage = "Urban";
            Variant = "Base";
        };
        hiddenSelectionsTextures[]=
        {
            "\z\22ndRDF\addons\uniforms\helmets\commando\data\base\22nd_Urban_Commando_Helm_co.paa", 
            "MA_Armor\data\Helmets\Commando\Visors\Base_Commando_Visor_CO.paa"
        };
    };

    class 22nd_Commando_base_Winter: 22nd_helmet_commando_base
    {
        scope=0;
        scopeArsenal=0;
        displayName= "[22nd] Commando Snow";
        class XtdGearInfo
        {
            model = "22nd_Commando_Helmet";
            Camouflage = "Winter";
            Variant = "Base";
        };
        hiddenSelectionsTextures[]=
        {
            "\z\22ndRDF\addons\uniforms\helmets\commando\data\base\22nd_Winter_Commando_Helm_co.paa",  
            "MA_Armor\data\Helmets\Commando\Visors\Base_Commando_Visor_CO.paa"
        };
    };

    class 22nd_Commando_base_Woodland: 22nd_helmet_commando_base
    {
        scope=0;
        scopeArsenal=0;
        displayName= "[22nd] Commando Woodland";
        class XtdGearInfo
        {
            model = "22nd_Commando_Helmet";
            Camouflage = "Woodland";
            Variant = "Base";
        };
        hiddenSelectionsTextures[]=
        {
            "\z\22ndRDF\addons\uniforms\helmets\commando\data\base\22nd_Woodland_Commando_Helm_co.paa",
            "MA_Armor\data\Helmets\Commando\Visors\Base_Commando_Visor_CO.paa"
        };
    };


    //Start Customs
    class 22nd_Commando_Custom_Test: 22nd_helmet_commando_base
    {
        scope=0;
        scopeArsenal=0;
        displayName= "[22nd] Commando Custom Test";
        class XtdGearInfo
        {
            model = "22nd_Commando_Helmet";
            Camouflage = "Woodland";
            Variant = "Test";
        };
        hiddenSelectionsTextures[]=
        {
            "\z\22ndRDF\addons\uniforms\helmets\commando\data\customs\hatty\22nd_Commando_Custom_Test_Helm_co.paa",
            "MA_Armor\data\Helmets\Commando\Visors\Base_Commando_Visor_CO.paa"
        };
    };
};

