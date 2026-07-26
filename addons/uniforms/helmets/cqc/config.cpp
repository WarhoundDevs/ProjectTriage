class CfgPatches 
{
    class 22nd_uniforms_helmets_cqc
    {
        units[] = {};
        weapons[] = 
        {
        
        "22nd_helmet_cqc_base",

        "22nd_CQC_Helmet_Urban",
        "22nd_CQC_Helmet_Snow",
        "22nd_CQC_Helmet_Woodland",

        "22nd_CQC_Woodland_Test",
        "22nd_CQC_Urban_Test",
        "22nd_CQC_Winter_Test"




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
#include "cqcXtdGear.hpp"

class MA_Mjolnir_CQC_Helmet
{
	class ItemInfo;
};



class CfgWeapons
{



    class 22nd_helmet_cqc_base: MA_Mjolnir_CQC_Helmet //our base helmet but also doubles as VX-19 Urban
    {
        scope = 0;
        scopeArsenal = 0;
        dlc="22nd_RDF";
        author = "Warhound Mod Team + Misriah Armory";
        displayName = "[22nd] cqc base";
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
    class 22nd_CQC_Helmet_Urban : 22nd_helmet_cqc_base
    {
        scope=0;
        scopeArsenal=0;
        displayName= "[22nd] CQC Urban";
        class XtdGearInfo
        {
            model = "22nd_CQC_Helmet";
            Camouflage = "Urban";
            Variant = "Base";
        };
        hiddenSelectionsTextures[]=
        {
            "\z\22ndRDF\addons\uniforms\helmets\cqc\data\base\22nd_Urban_CQC_Helm_co.paa",
            "MA_Armor\data\Helmets\CQC\Visors\Base_CQC_Visor_CO.paa",
        };
        class itemInfo: itemInfo
        {
            hiddenSelectionsTextures[]=
            {
                "\z\22ndRDF\addons\uniforms\helmets\cqc\data\base\22nd_Urban_CQC_Helm_co.paa",
                "MA_Armor\data\Helmets\CQC\Visors\Base_CQC_Visor_CO.paa",
            };
        };
    };

    class 22nd_CQC_Helmet_Snow : 22nd_helmet_cqc_base
    {
        scope=0;
        scopeArsenal=0;
        displayName= "[22nd] CQC Snow";
        class XtdGearInfo
        {
            model = "22nd_CQC_Helmet";
            Camouflage = "Winter";
            Variant = "Base";
        };
        hiddenSelectionsTextures[]=
        {
            "\z\22ndRDF\addons\uniforms\helmets\cqc\data\base\22nd_Winter_CQC_Helm_co.paa",
            "MA_Armor\data\Helmets\CQC\Visors\Base_CQC_Visor_CO.paa",
        };
        class itemInfo: itemInfo
        {
            hiddenSelectionsTextures[]=
            {
                "\z\22ndRDF\addons\uniforms\helmets\cqc\data\base\22nd_Winter_CQC_Helm_co.paa",
                "MA_Armor\data\Helmets\CQC\Visors\Base_CQC_Visor_CO.paa",
            };
        };
    };

    class 22nd_CQC_Helmet_Woodland : 22nd_helmet_cqc_base
    {
        scope=0;
        scopeArsenal=0;
        displayName= "[22nd] CQC Woodland";
        class XtdGearInfo
        {
            model = "22nd_CQC_Helmet";
            Camouflage = "Woodland";
            Variant = "Base";
        };

        hiddenSelectionsTextures[]=
        {
            "\z\22ndRDF\addons\uniforms\helmets\cqc\data\base\22nd_Woodland_CQC_Helm_co.paa",
            "MA_Armor\data\Helmets\CQC\Visors\Base_CQC_Visor_CO.paa",
        };
        class itemInfo: itemInfo
        {
            hiddenSelectionsTextures[]=
            {
                "\z\22ndRDF\addons\uniforms\helmets\cqc\data\base\22nd_Woodland_CQC_Helm_co.paa",
                "MA_Armor\data\Helmets\CQC\Visors\Base_CQC_Visor_CO.paa",
            };
        };
    };



    //Start Customs
    class 22nd_CQC_Woodland_Test : 22nd_helmet_cqc_base
    {
        scope=0;
        scopeArsenal=0;
        displayName= "[22nd] CQC Woodland Test";
        class XtdGearInfo
        {
            model = "22nd_CQC_Helmet";
            Camouflage = "Woodland";
            Variant = "Test";
        };
        hiddenSelectionsTextures[]=
        {
            "\z\22ndRDF\addons\uniforms\helmets\cqc\data\customs\test\22nd_CQC_Woodland_Test_Helm_co.paa",
            "MA_Armor\data\Helmets\CQC\Visors\Base_CQC_Visor_CO.paa",
        };
        class itemInfo: itemInfo
        {
            hiddenSelectionsTextures[]=
            {
                "\z\22ndRDF\addons\uniforms\helmets\cqc\data\customs\test\22nd_CQC_Woodland_Test_Helm_co.paa",
                "MA_Armor\data\Helmets\CQC\Visors\Base_CQC_Visor_CO.paa",
            };
        };
    };

    class 22nd_CQC_Urban_Test : MA_Mjolnir_CQC_Helmet
    {
        scope=0;
        scopeArsenal=0;
        displayName= "[22nd] CQC Urban Test";
        class XtdGearInfo
        {
            model = "22nd_CQC_Helmet";
            Camouflage = "Urban";
            Variant = "Test";
        };

        hiddenSelectionsTextures[]=
        {
            "\z\22ndRDF\addons\uniforms\helmets\cqc\data\customs\test\22nd_CQC_Urban_Test_Helm_co.paa",
            "MA_Armor\data\Helmets\CQC\Visors\Base_CQC_Visor_CO.paa",
        };
        class itemInfo: itemInfo
        {
            hiddenSelectionsTextures[]=
            {
                "\z\22ndRDF\addons\uniforms\helmets\cqc\data\customs\test\22nd_CQC_Urban_Test_Helm_co.paa",
                "MA_Armor\data\Helmets\CQC\Visors\Base_CQC_Visor_CO.paa",
            };
        };
    };

    class 22nd_CQC_Winter_Test : MA_Mjolnir_CQC_Helmet
    {
        scope=0;
        scopeArsenal=0;
        displayName= "[22nd] CQC Snow Test";
        class XtdGearInfo
        {
            model = "22nd_CQC_Helmet";
            Camouflage = "Winter";
            Variant = "Test";
        };
        hiddenSelectionsTextures[]=
        {
            "\z\22ndRDF\addons\uniforms\helmets\cqc\data\customs\test\22nd_CQC_Winter_Test_Helm_co.paa",
            "MA_Armor\data\Helmets\cqc\Visors\Base_CQC_Visor_CO.paa",
        };
        class itemInfo: itemInfo
        {
            hiddenSelectionsTextures[]=
            {
                "\z\22ndRDF\addons\uniforms\helmets\cqc\data\customs\test\22nd_CQC_Winter_Test_Helm_co.paa",
                "MA_Armor\data\Helmets\cqc\Visors\Base_CQC_Visor_CO.paa",
            };
        };
    };
};

