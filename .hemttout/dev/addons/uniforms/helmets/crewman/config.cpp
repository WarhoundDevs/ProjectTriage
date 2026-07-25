class CfgPatches 
{
    class 22nd_uniforms_helmets_crewman
    {
        units[] = {};
        weapons[] = 
        {
            "22nd_CH252C_Helmet_Base",


            "22nd_CH252C_Helmet_Urban",
            "22nd_CH252C_Helmet_Snow",
            "22nd_CH252C_Helmet_Arid",
            "22nd_CH252C_Helmet_Woodland",


            "22nd_CH252C_German_Urban",
            "22nd_CH252C_German_Woodland",
            "22nd_CH252C_German_Arid",
            "22nd_CH252C_German_Winter",


            "22nd_CH252C_Lamb_Urban",
            "22nd_CH252C_Lamb_Woodland",
            "22nd_CH252C_Lamb_Arid",
            "22nd_CH252C_Lamb_Winter",
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

class VES_CH252_MAR_Crew
{
	// picture="\OPTRE_FC_Units\Marines\data\h3_pilothelmet_i_ca.paa";
	class ItemInfo;
};



class CfgWeapons
{



class 22nd_CH252C_Helmet_Base: VES_CH252_MAR_Crew
{
	displayName="[22nd] CH252C Base";
	author="Warhound";
	scope=0;
	scopeArsenal=0;
	scopeCurator=0;
	class ItemInfo: ItemInfo
	{
		class HitpointsProtectionInfo
		{
			class Face
			{
				armor=25;
				hitpointName="HitFace";
				passThrough=0.1;
			};
			class Head
			{
				armor=25;
				hitPointName="HitHead";
				passThrough=0.1;
			};
			class Neck
			{
				armor=20;
				hitpointName="HitNeck";
				passThrough=0.1;
			};
		};
	};
};

    //BASE
    class 22nd_CH252C_Helmet_Urban : 22nd_CH252C_Helmet_Base
    {
        scope=2;
        scopeArsenal=2;
        author= "Astro";
        displayName= "[22nd] CH252C Urban";

        class XtdGearInfo
        {
            model = "22nd_CH252C";
            Camouflage = "Urban";
            Variant = "Base";
        };

        hiddenSelectionsTextures[]=
        {
            "\z\22ndRDF\addons\uniforms\helmets\crewman\data\base\crewmanurbancamo.paa"
        };
    };

    class 22nd_CH252C_Helmet_Snow : 22nd_CH252C_Helmet_Base{
        scope=2;
        scopeArsenal=2;
        author= "Astro";
        displayName= "[22nd] CH252C Snow";

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
    };
    class 22nd_CH252C_Helmet_Arid : 22nd_CH252C_Helmet_Base{
        scope=2;
        scopeArsenal=2;
        author= "Astro";
        displayName= "[22nd] CH252C Arid";

        class XtdGearInfo
        {
            model = "22nd_CH252C";
            Camouflage = "Arid";
            Variant = "Base";
        };

        hiddenSelectionsTextures[]=
        {
            "\z\22ndRDF\addons\uniforms\helmets\crewman\data\base\crewmanaridcamo.paa"
        };
    };
    class 22nd_CH252C_Helmet_Woodland : 22nd_CH252C_Helmet_Base{
        scope=2;
        scopeArsenal=2;
        author= "Astro";
        displayName= "[22nd] CH252C Woodland";

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
    };
    //End Base
    //Start German Custom
    class 22nd_CH252C_German_Urban : 22nd_CH252C_Helmet_Base
    {
        scope=2;
        scopeArsenal=2;
        author= "Astro";
        displayName= "[22nd] CH252C Urban";

        class XtdGearInfo
        {
            model = "22nd_CH252C";
            Camouflage = "Urban";
            Variant = "German";
        };

        hiddenSelectionsTextures[]=
        {
            "\z\22ndRDF\addons\uniforms\helmets\crewman\data\customs\German\22nd_German_crewmanurbancamo.paa"
        };
    };
    class 22nd_CH252C_German_Winter : 22nd_CH252C_Helmet_Base{
        scope=2;
        scopeArsenal=2;
        author= "Astro";
        displayName= "[22nd] CH252C Snow";

        class XtdGearInfo
        {
            model = "22nd_CH252C";
            Camouflage = "Winter";
            Variant = "German";
        };

        hiddenSelectionsTextures[]=
        {
            "\z\22ndRDF\addons\uniforms\helmets\crewman\data\customs\German\22nd_German_crewmansnowcamo.paa"
        };
    };
    class 22nd_CH252C_German_Arid : 22nd_CH252C_Helmet_Base{
        scope=2;
        scopeArsenal=2;
        author= "Astro";
        displayName= "[22nd] CH252C Arid";

        class XtdGearInfo
        {
            model = "22nd_CH252C";
            Camouflage = "Arid";
            Variant = "German";
        };

        hiddenSelectionsTextures[]=
        {
            "\z\22ndRDF\addons\uniforms\helmets\crewman\data\customs\German\22nd_German_crewmanaridcamo.paa"
        };
    };
    class 22nd_CH252C_German_Woodland : 22nd_CH252C_Helmet_Base{
        scope=2;
        scopeArsenal=2;
        author= "Astro";
        displayName= "[22nd] CH252C Woodland";

        class XtdGearInfo
        {
            model = "22nd_CH252C";
            Camouflage = "Woodland";
            Variant = "German";
        };

        hiddenSelectionsTextures[]=
        {
            "\z\22ndRDF\addons\uniforms\helmets\crewman\data\customs\German\22nd_German_crewmanwdlndcamo.paa"
        };
    };
    //End German Custom
    //Start Lamb Custom
    class 22nd_CH252C_Lamb_Urban : 22nd_CH252C_Helmet_Base
    {
        scope=2;
        scopeArsenal=2;
        author= "Astro";
        displayName= "[22nd] CH252C Urban";

        class XtdGearInfo
        {
            model = "22nd_CH252C";
            Camouflage = "Urban";
            Variant = "Lamb";
        };

        hiddenSelectionsTextures[]=
        {
            "\z\22ndRDF\addons\uniforms\helmets\crewman\data\customs\Lamb\22nd_Lamb_crewmanurbancamo.paa"
        };
    };
    class 22nd_CH252C_Lamb_Winter : 22nd_CH252C_Helmet_Base{
        scope=2;
        scopeArsenal=2;
        author= "Astro";
        displayName= "[22nd] CH252C Snow";

        class XtdGearInfo
        {
            model = "22nd_CH252C";
            Camouflage = "Winter";
            Variant = "Lamb";
        };

        hiddenSelectionsTextures[]=
        {
            "\z\22ndRDF\addons\uniforms\helmets\crewman\data\customs\Lamb\22nd_Lamb_crewmansnowcamo.paa"
        };
    };
    class 22nd_CH252C_Lamb_Arid : 22nd_CH252C_Helmet_Base{
        scope=2;
        scopeArsenal=2;
        author= "Astro";
        displayName= "[22nd] CH252C Arid";

        class XtdGearInfo
        {
            model = "22nd_CH252C";
            Camouflage = "Arid";
            Variant = "Lamb";
        };

        hiddenSelectionsTextures[]=
        {
            "\z\22ndRDF\addons\uniforms\helmets\crewman\data\customs\Lamb\22nd_Lamb_crewmanaridcamo.paa"
        };
    };
    class 22nd_CH252C_Lamb_Woodland : 22nd_CH252C_Helmet_Base{
        scope=2;
        scopeArsenal=2;
        author= "Astro";
        displayName= "[22nd] CH252C Woodland";

        class XtdGearInfo
        {
            model = "22nd_CH252C";
            Camouflage = "Woodland";
            Variant = "Lamb";
        };

        hiddenSelectionsTextures[]=
        {
            "\z\22ndRDF\addons\uniforms\helmets\crewman\data\customs\Lamb\22nd_Lamb_crewmanwdlndcamo.paa"
        };
    };
};