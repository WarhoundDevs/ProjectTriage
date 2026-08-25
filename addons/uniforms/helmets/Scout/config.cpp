class CfgPatches 
{
    class 22nd_uniforms_helmets_Scout
    {
        units[] = {};
        weapons[] = 
        {
            "22nd_Scout_base",

            //WD
            "22nd_Scout_WDL",

            //Winter
            "22nd_Scout_WNT",

            //customs


            // Step 6. New Custom Above this text, spaced from previous name ^
            // Use "tab" or "shift tab" to help neaten up the block of class names when all highlighted.


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

////////////////////////////////////////////////////////// THIS IS A BIG CONFIG! Use EDIT>OUTLINING>TOGGLE ALL OUTLINING | TO COLLAPSE AND MAKE IT EASIER TO GET WHERE YOU NEED TO!!! //////////////////////////////////////////////////////////

/// !!! CUSTOM HPP DOES NOT GO HERE SCROLL FURTHER DOWN <3 !!!
#include "infantryXtdGear.hpp"

class MA_Mjolnir_Scout_Helmet
{
	class ItemInfo;
};

class CfgWeapons
{
    class 22nd_Scout_base : MA_Mjolnir_Scout_Helmet
    {
        scope = 1;
        scopeArsenal = 0;
        author = "22nd Mod Team";
        displayName = "[22nd] Scout base";
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


    //Scout Base
    class 22nd_Scout_WDL : 22nd_Scout_base{
        scope=0;
        scopeArsenal=0;
        author= "Astro";
        displayName= "[22nd] Scout Woodland";

        class XtdGearInfo
        {
            model = "22nd_Scout_Helmet";
            Custom = "Trooper";
            Camouflage = "WD";
        };

        hiddenSelectionsTextures[]=
        {
            "z\22ndRDF\addons\uniforms\helmets\Scout\data\base\22nd_Woodland_Scout_Helm_co.paa",
            "MA_Armor\data\Helmets\H4_Scout\Scout_Visor_Blue_co.paa"
        };
    };


    //Scout Winter

    class 22nd_Scout_WNT : 22nd_Scout_base{
        scope=0;
        scopeArsenal=0;
        author= "Astro";
        displayName= "[22nd] Scout Snow";

        class XtdGearInfo
        {
            model = "22nd_Scout_Helmet";
            Custom = "Trooper";
            Camouflage = "Winter";
        };

        hiddenSelectionsTextures[]=
        {
            "z\22ndRDF\addons\uniforms\helmets\Scout\data\base\22nd_Winter_Scout_Helm_co.paa",
            "MA_Armor\data\Helmets\H4_Scout\Scout_Visor_Blue_co.paa"
        };
    };


    //// CUSTOM INCLUDES GO UNDER HERE

};
