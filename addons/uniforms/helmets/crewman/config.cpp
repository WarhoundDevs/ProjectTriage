class CfgPatches 
{
    class 22nd_uniforms_helmets_crewman
    {
        units[] = {};
        weapons[] = 
        {
            "22nd_CH252C_Helmet_Base",


            "22nd_CH252C_Helmet_Snow",
            "22nd_CH252C_Helmet_Woodland",

            //German Custom
            
            "22nd_CH252C_German_Woodland",
            "22nd_CH252C_German_Winter",

            //Lamb Custom
            
            "22nd_CH252C_Lamb_Woodland",
            "22nd_CH252C_Lamb_Winter",

            //Lamb Custom
            

        };
        requiredVersion = 1.0;
        requiredAddons[] = 
        {
            "V_FZ_Armor", 
            "A3_Characters_F",
            "A3_Data_F_Mark"
        }; // Reference any required addons
    };
};

// For customs remember to add a value under "variants"
#include "ch252cXtdGear.hpp"

class H_HelmetCrew_B
{
	class ItemInfo;
};



class CfgWeapons
{



class 22nd_CH252C_Helmet_Base: H_HelmetCrew_B
{
	displayName="[22nd] CH252C Base";
	author="22nd Mod Team";
	scope=1;
	scopeArsenal=0;
	scopeCurator=0;
    picture = "\A3\characters_f\Data\UI\icon_H_HelmetCrewB_CA.paa";
	class ItemInfo: ItemInfo
	{
		class HitpointsProtectionInfo
		{
			class Face
			{
				armor=5;
				hitpointName="HitFace";
				passThrough=0.1;
			};
			class Head
			{
				armor=20;
				hitPointName="HitHead";
				passThrough=0.1;
			};
			class Neck
			{
				armor=5;
				hitpointName="HitNeck";
				passThrough=0.1;
			};
		};
	};
};


    //BASE

    class 22nd_CH252C_Helmet_Snow : 22nd_CH252C_Helmet_Base
    {
        scope=2;
        scopeArsenal=2;
        author= "Astro";
        displayName= "[22nd] CH252-AC Snow";

        class XtdGearInfo
        {
            model = "22nd_CH252C";
            Camouflage = "Winter";
            Variant = "Base";
        };

        hiddenSelectionsTextures[]=
        {
            "\z\22ndRDF\addons\uniforms\helmets\crewman\data\base\crewmansnowcamo.paa"
        };
         class itemInfo: itemInfo
        {
            hiddenSelectionsTextures[]=
            {
                "\z\22ndRDF\addons\uniforms\helmets\crewman\data\base\crewmansnowcamo.paa"
            };
        };
    };

    class 22nd_CH252C_Helmet_Woodland : 22nd_CH252C_Helmet_Base{
        scope=2;
        scopeArsenal=2;
        displayName= "[22nd] CH252-AC Woodland";
        class XtdGearInfo
        {
            model = "22nd_CH252C";
            Camouflage = "Woodland";
            Variant = "Base";
        };
        hiddenSelectionsTextures[]=
        {
            "\z\22ndRDF\addons\uniforms\helmets\crewman\data\base\crewmanwdlndcamo.paa"
        };
         class itemInfo: itemInfo
        {
            hiddenSelectionsTextures[]=
            {
                "\z\22ndRDF\addons\uniforms\helmets\crewman\data\base\crewmanwdlndcamo.paa"
            };
        };
    };
   
    //// CUSTOM INCLUDES GO UNDER HERE

    #include "customHelmets/German/GermanCustomHelmet.hpp"

    #include "customHelmets/Lamb/LambCustomHelmet.hpp"

    #include "customHelmets/Enigmous/EnigmousCustomHelmet.hpp"

    
};
