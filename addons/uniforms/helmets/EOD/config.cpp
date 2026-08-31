class CfgPatches 
{
    class 22nd_uniforms_helmets_EOD
    {
        units[] = {};
        weapons[] = 
        {
            "22nd_EOD_base",

            //WD
            "22nd_EOD_WDL",

            //Winter
            "22nd_EOD_WNT",

            //customs

            //Yogi
            "22nd_EOD_Woodland_Yogi",
            "22nd_EOD_Winter_Yogi",

            //Miles
            "22nd_EOD_Woodland_Miles",
            "22nd_EOD_Winter_Miles",


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

class MA_M56E_Helmet
{
	class ItemInfo;
};

class CfgWeapons
{
    class 22nd_EOD_base : MA_M56E_Helmet
    {
        scope = 1;
        scopeArsenal = 0;
        author = "22nd Mod Team";
        displayName = "[22nd] M56E base";
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


    //EOD Base
    class 22nd_EOD_WDL : 22nd_EOD_base{
        scope=2;
        scopeArsenal=2;
        author= "Astro";
        displayName= "[22nd] EOD Woodland";

        class XtdGearInfo
        {
            model = "22nd_EOD_Helmet";
            Custom = "Trooper";
            Camouflage = "WD";
        };

        hiddenSelectionsTextures[]=
        {
            "z\22ndRDF\addons\uniforms\helmets\EOD\data\base\22nd_Woodland_EOD_Helmet_R_CO.paa",
            "z\22ndRDF\addons\uniforms\helmets\EOD\data\base\EOD_Visor_WH_co.paa"
        };
    };


    //EOD Winter

    class 22nd_EOD_WNT : 22nd_EOD_base{
        scope=2;
        scopeArsenal=2;
        author= "Astro";
        displayName= "[22nd] EOD Snow";

        class XtdGearInfo
        {
            model = "22nd_EOD_Helmet";
            Custom = "Trooper";
            Camouflage = "Winter";
        };

        hiddenSelectionsTextures[]=
        {
            "z\22ndRDF\addons\uniforms\helmets\EOD\data\base\22nd_Winter_EOD_Helmet_R_CO.paa",
            "z\22ndRDF\addons\uniforms\helmets\EOD\data\base\EOD_Visor_WH_co.paa"
        };
    };


    //// CUSTOM INCLUDES GO UNDER HERE

    #include "customHelmets/Yogi/YogiCustomHelmet.hpp"

    #include "customHelmets/Miles/MilesCustomHelmet.hpp"

};
