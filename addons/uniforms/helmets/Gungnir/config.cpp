class CfgPatches 
{
    class 22nd_uniforms_helmets_Gungnir
    {
        units[] = {};
        weapons[] = 
        {
            "22nd_Gungnir_base",
            "22nd_Gungnir_AS_base",

            //WD
            "22nd_Gungnir_WDL",
            "22nd_Gungnir_AS_WDL",

            //Winter
            "22nd_Gungnir_WNT",
            "22nd_Gungnir_AS_WNT",

            //customs

            //Frog
            "22nd_Gungnir_Frog_WDL",
            "22nd_Gungnir_Frog_AS_WDL",
            "22nd_Gungnir_Frog_WNT",
            "22nd_Gungnir_Frog_AS_WNT",

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

class MA_Mjolnir_Gungnir_Helmet
{
	class ItemInfo;
};

class CfgWeapons
{
    class 22nd_Gungnir_base : MA_Mjolnir_Gungnir_Helmet
    {
        scope = 0;
        scopeArsenal = 0;
        author = "22nd Mod Team";
        displayName = "[22nd] Gungnir base";
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
    class 22nd_Gungnir_AS_base : MA_Mjolnir_Gungnir_Helmet
    {
        scope = 0;
        scopeArsenal = 0;
        author = "22nd Mod Team";
        displayName = "[22nd] Gungnir Armoured Soldier base";
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


    //Gungnir Woodland
    class 22nd_Gungnir_WDL : 22nd_Gungnir_base{
        scope=2;
        scopeArsenal=2;
        author= "Astro";
        displayName= "[22nd] Gungnir Woodland";
        picture = "z\22ndRDF\addons\uniforms\helmets\Gungnir\data\base\22ndRDF.paa";
        hiddenSelections[]=
        {
            "Camo1"
        };

        class XtdGearInfo
        {
            model = "22nd_Gungnir_Helmet";
            Custom = "Trooper";
            Armour = "Base";
            Camouflage = "WD";
        };

        hiddenSelectionsTextures[]=
        {
            "z\22ndRDF\addons\uniforms\helmets\Gungnir\data\base\WDL_Gungnir_Helmet_CO.paa",
        };
    };

    class 22nd_Gungnir_AS_WDL : 22nd_Gungnir_AS_base{
        scope=2;
        scopeArsenal=2;
        author= "Astro";
        displayName= "[22nd] Gungnir Woodland (Armoured Soldier)";
        picture = "z\22ndRDF\addons\uniforms\helmets\Gungnir\data\base\22ndRDF.paa";
        hiddenSelections[]=
        {
            "Camo1"
        };

        class XtdGearInfo
        {
            model = "22nd_Gungnir_Helmet";
            Custom = "Trooper";
            Armour = "AS";
            Camouflage = "WD";
        };

        hiddenSelectionsTextures[]=
        {
            "z\22ndRDF\addons\uniforms\helmets\Gungnir\data\base\WDL_AS_Gungnir_Helmet_CO.paa"
        };
    };


    //Gungnir Winter

    class 22nd_Gungnir_WNT : 22nd_Gungnir_base{
        scope=0;
        scopeArsenal=0;
        author= "Astro";
        displayName= "[22nd] Gungnir Snow";
        picture = "z\22ndRDF\addons\uniforms\helmets\Gungnir\data\base\22ndRDF.paa";
        hiddenSelections[]=
        {
            "Camo1"
        };

        class XtdGearInfo
        {
            model = "22nd_Gungnir_Helmet";
            Custom = "Trooper";
            Armour = "Base";
            Camouflage = "Winter";
        };

        hiddenSelectionsTextures[]=
        {
            "z\22ndRDF\addons\uniforms\helmets\Gungnir\data\base\WNT_Gungnir_Helmet_CO.paa"
        };
    };

    class 22nd_Gungnir_AS_WNT : 22nd_Gungnir_AS_base{
        scope=0;
        scopeArsenal=0;
        author= "Astro";
        displayName= "[22nd] Gungnir Snow (Armoured Soldier)";
        picture = "z\22ndRDF\addons\uniforms\helmets\Gungnir\data\base\22ndRDF.paa";
        hiddenSelections[]=
        {
            "Camo1"
        };

        class XtdGearInfo
        {
            model = "22nd_Gungnir_Helmet";
            Custom = "Trooper";
            Armour = "AS";
            Camouflage = "Winter";
        };

        hiddenSelectionsTextures[]=
        {
            "z\22ndRDF\addons\uniforms\helmets\Gungnir\data\base\WNT_AS_Gungnir_Helmet_CO.paa"
        };
    };


    //// CUSTOM INCLUDES GO UNDER HERE

    #include "customHelmets/Frog/FrogCustomHelmet.hpp"

};
