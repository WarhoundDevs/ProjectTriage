class CfgPatches 
{
    class 22nd_uniforms_helmets_Operator
    {
        units[] = {};
        weapons[] = 
        {
            "22nd_Operator_base",

            //WD
            "22nd_Operator_WDL",

            //Winter
            "22nd_Operator_WNT",

            //customs


            // Step 6. New Custom Above this text, spaced from previous name ^
            // Use "tab" or "shift tab" to help neaten up the block of class names when all highlighted.


        };

        requiredVersion = 1.0;
        requiredAddons[] = 
        {
            "A3_Characters_F",
            "A3_Data_F_Mark"
        }; // Reference any required addons
    };
};

////////////////////////////////////////////////////////// THIS IS A BIG CONFIG! Use EDIT>OUTLINING>TOGGLE ALL OUTLINING | TO COLLAPSE AND MAKE IT EASIER TO GET WHERE YOU NEED TO!!! //////////////////////////////////////////////////////////

/// !!! CUSTOM HPP DOES NOT GO HERE SCROLL FURTHER DOWN <3 !!!
#include "infantryXtdGear.hpp"

class OPTRE_UNSC_Operator_Helmet
{
	class ItemInfo;
};

class CfgWeapons
{
    class 22nd_Operator_base : OPTRE_UNSC_Operator_Helmet
    {
        scope = 0;
        scopeArsenal = 0;
        author = "22nd Mod Team";
        displayName = "[22nd] Operator base";
        model = "MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
        subItems[] = {"22nd_Infantry_Nightvision"};
        class ItemInfo : ItemInfo
        {
           subItems[] = {"22nd_Infantry_Nightvision"};
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


    //Operator Base
    class 22nd_Operator_WDL : 22nd_Operator_base{
        scope=0;
        scopeArsenal=0;
        author= "Astro";
        displayName= "[22nd] Operator Woodland";
        picture = "z\22ndRDF\addons\uniforms\helmets\Operator\data\base\22ndRDF.paa";
        hiddenSelections[]=
        {
            "camo1",
			"camo2",
			"camo_nvg"
        };

        class XtdGearInfo
        {
            model = "22nd_Operator_Helmet";
            Custom = "Trooper";
            Camouflage = "WD";
        };

        hiddenSelectionsTextures[]=
        {
            "z\22ndRDF\addons\uniforms\helmets\Operator\data\base\22nd_Operator_Helmet_Woodland_co.paa",
            "z\22ndRDF\addons\uniforms\helmets\Operator\data\base\22nd_Operator_Visor_co.paa"
        };
    };


    //Operator Winter

    class 22nd_Operator_WNT : 22nd_Operator_base{
        scope=0;
        scopeArsenal=0;
        author= "Astro";
        displayName= "[22nd] Operator Snow";
        picture = "z\22ndRDF\addons\uniforms\helmets\Operator\data\base\22ndRDF.paa";
        hiddenSelections[]=
        {
            "camo1",
			"camo2",
			"camo_nvg"
        };

        class XtdGearInfo
        {
            model = "22nd_Operator_Helmet";
            Custom = "Trooper";
            Camouflage = "Winter";
        };

        hiddenSelectionsTextures[]=
        {
            "z\22ndRDF\addons\uniforms\helmets\Operator\data\base\22nd_Operator_Helmet_Winter_co.paa",
            "z\22ndRDF\addons\uniforms\helmets\Operator\data\base\22nd_Operator_Visor_co.paa"
        };
    };


    //// CUSTOM INCLUDES GO UNDER HERE

};
