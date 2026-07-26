class CfgPatches 
{
    class 22nd_uniforms_helmets_infantry
    {
        units[] = {};
        weapons[] = 
        {
            "22nd_Helm_base",


            //WD
            "22nd_HelmBase_Open",
            "22nd_HelmBase_Closed",
            "22nd_HelmBase_Eye",
            "22nd_HelmBase_Visor",

            "22nd_HelmBase_Open_med",
            "22nd_HelmBase_Closed_med",
            "22nd_HelmBase_Eye_med",
            "22nd_HelmBase_Visor_med",


            //Winter
            "22nd_HelmSnow_Open",        
            "22nd_HelmSnow_Closed",
            "22nd_HelmSnow_Eye",
            "22nd_HelmSnow_Visor",

            "22nd_HelmSnow_Open_med",
            "22nd_HelmSnow_Closed_med",
            "22nd_HelmSnow_Eye_med",
            "22nd_HelmSnow_Visor_med"


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

// For customs remember to add a value under "variants"
#include "infantryXtdGear.hpp"

class CH252_Helmet_Base
{
	class ItemInfo;
};

class CfgWeapons
{
    class 22nd_Helm_base : CH252_Helmet_Base
    {
        scope = 0;
        scopeArsenal = 0;
        author = "22nd Mod Team";
        displayName = "[22nd] ECH252-C base";
        model = "MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";

        class ItemInfo : ItemInfo
        {
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


    //Infantry Base
    class 22nd_HelmBase_Open: 22nd_Helm_base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[22nd] ECH252-C";
        picture = "\OPTRE_UNSC_Units\Army\icons\Army_Helmet_wdl.paa";
        hiddenSelections[] =
        {
            "camo1", // Helmet
            "camo2", // NVG Mount
            "camo3", // Helmet Strap
            "camo4", // Eyepiece
            "camo5", // Eyepiece Glass
            "camo6", // Glasses/Visor
            "camo7", // Vac Seal
            "Camo8", // Chin Module
            "Camo9", // Visor, Closed
            //"Helmet",
            //"NVGMount",
            //"HelmetStrap",
            "EyePiece",
            "EyePieceGlass",
            "VisorGlasses",
            "VaccumCollar",
            "Helmet_Chin",
            "Closed_Visor"
        };
        class XtdGearInfo
        {
            model = "22nd_ECH252C";
            Camouflage = "WD";
            Variants = "Open";
            Decal = "None";
        };
        hiddenSelectionsTextures[] =
        {
            "\z\22ndRDF\addons\uniforms\helmets\Infantry\data\base\22nd_Helmet_Base.paa",
            "\z\22ndRDF\addons\uniforms\helmets\Infantry\data\base\22nd_Helmet_Base.paa",
            "\z\22ndRDF\addons\uniforms\helmets\Infantry\data\base\22nd_Helmet_Base.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Base\VacSeal_Base_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa",
        };
        class itemInfo: itemInfo
        {
             hiddenSelections[] =
             {
                "camo1", // Helmet
                "camo2", // NVG Mount
                "camo3", // Helmet Strap
                "camo4", // Eyepiece
                "camo5", // Eyepiece Glass
                "camo6", // Glasses/Visor
                "camo7", // Vac Seal
                "Camo8", // Chin Module
                "Camo9", // Visor, Closed
                //"Helmet",
                //"NVGMount",
                //"HelmetStrap",
                "EyePiece",
                "EyePieceGlass",
                "VisorGlasses",
                "VaccumCollar",
                "Helmet_Chin",
                "Closed_Visor"
            };
             hiddenSelectionsTextures[] =
            {
                "\z\22ndRDF\addons\uniforms\helmets\Infantry\data\base\22nd_Helmet_Base.paa",
                "\z\22ndRDF\addons\uniforms\helmets\Infantry\data\base\22nd_Helmet_Base.paa",
                "\z\22ndRDF\addons\uniforms\helmets\Infantry\data\base\22nd_Helmet_Base.paa",
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
                "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Base\VacSeal_Base_CO.paa",
                "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa",
                "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa",
            };
        };
    };

    class 22nd_HelmBase_Closed : 22nd_Helm_base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[22nd] ECH252-C";
        hiddenSelections[] =
        {
            "camo1", // Helmet
            "camo2", // NVG Mount
            "camo3", // Helmet Strap
            "camo4", // Eyepiece
            "camo5", // Eyepiece Glass
            "camo6", // Glasses/Visor
            "camo7", // Vac Seal
            "Camo8", // Chin Module
            "Camo9", // Visor, Closed
            //"Helmet",
            //"NVGMount",
            //"HelmetStrap",
            "EyePiece",
            "EyePieceGlass",
            "VisorGlasses",
            "VaccumCollar",
            //"Helmet_Chin",
            //"Closed_Visor"
        };
        class XtdGearInfo
        {
            model = "22nd_ECH252C";
            Camouflage = "WD";
            Variants = "Closed";
            Decal = "None";
        };
        hiddenSelectionsTextures[] =
        {
            "\z\22ndRDF\addons\uniforms\helmets\Infantry\data\base\22nd_Helmet_Base.paa",
            "\z\22ndRDF\addons\uniforms\helmets\Infantry\data\base\22nd_Helmet_Base.paa",
            "\z\22ndRDF\addons\uniforms\helmets\Infantry\data\base\22nd_Helmet_Base.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Base\VacSeal_Brown_CO.paa",
            "\z\22ndRDF\addons\uniforms\helmets\Infantry\data\base\22nd_Base_Helmet_Lower.paa",
            "\z\22ndRDF\addons\uniforms\helmets\Infantry\data\base\22nd_Base_Helmet_Lower.paa",
        };
         class itemInfo: itemInfo
        {
            hiddenSelections[] =
            {
                "camo1", // Helmet
                "camo2", // NVG Mount
                "camo3", // Helmet Strap
                "camo4", // Eyepiece
                "camo5", // Eyepiece Glass
                "camo6", // Glasses/Visor
                "camo7", // Vac Seal
                "Camo8", // Chin Module
                "Camo9", // Visor, Closed
                //"Helmet",
                //"NVGMount",
                //"HelmetStrap",
                "EyePiece",
                "EyePieceGlass",
                "VisorGlasses",
                "VaccumCollar",
                //"Helmet_Chin",
                //"Closed_Visor"
            };
            hiddenSelectionsTextures[] =
            {
                "\z\22ndRDF\addons\uniforms\helmets\Infantry\data\base\22nd_Helmet_Base.paa",
                "\z\22ndRDF\addons\uniforms\helmets\Infantry\data\base\22nd_Helmet_Base.paa",
                "\z\22ndRDF\addons\uniforms\helmets\Infantry\data\base\22nd_Helmet_Base.paa",
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
                "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Base\VacSeal_Brown_CO.paa",
                "\z\22ndRDF\addons\uniforms\helmets\Infantry\data\base\22nd_Base_Helmet_Lower.paa",
                "\z\22ndRDF\addons\uniforms\helmets\Infantry\data\base\22nd_Base_Helmet_Lower.paa",
            };
        };
    };

    class 22nd_HelmBase_Eye : 22nd_Helm_base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[22nd] ECH252-C Eyepiece";
        hiddenSelections[] =
        {
            "camo1", // Helmet
            "camo2", // NVG Mount
            "camo3", // Helmet Strap
            "camo4", // Eyepiece
            "camo5", // Eyepiece Glass
            "camo6", // Glasses/Visor
            "camo7", // Vac Seal
            "Camo8", // Chin Module
            "Camo9", // Visor, Closed
            //"Helmet",
            //"NVGMount",
            //"HelmetStrap",
            //"EyePiece",
            //"EyePieceGlass",
            "VisorGlasses",
            "VaccumCollar",
            "Helmet_Chin",
            "Closed_Visor"
        };
        class XtdGearInfo
        {
            model = "22nd_ECH252C";
            Camouflage = "WD";
            Variants = "Eyepiece";
            Decal = "None";
        };
        hiddenSelectionsTextures[] =
        {
            "\z\22ndRDF\addons\uniforms\helmets\Infantry\data\base\22nd_Helmet_Base.paa",
            "\z\22ndRDF\addons\uniforms\helmets\Infantry\data\base\22nd_Helmet_Base.paa",
            "\z\22ndRDF\addons\uniforms\helmets\Infantry\data\base\22nd_Helmet_Base.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Base\VacSeal_Base_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa",
        };
        class itemInfo: itemInfo
        {
            hiddenSelections[] =
            {
                "camo1", // Helmet
                "camo2", // NVG Mount
                "camo3", // Helmet Strap
                "camo4", // Eyepiece
                "camo5", // Eyepiece Glass
                "camo6", // Glasses/Visor
                "camo7", // Vac Seal
                "Camo8", // Chin Module
                "Camo9", // Visor, Closed
                //"Helmet",
                //"NVGMount",
                //"HelmetStrap",
                //"EyePiece",
                //"EyePieceGlass",
                "VisorGlasses",
                "VaccumCollar",
                "Helmet_Chin",
                "Closed_Visor"
            };
            hiddenSelectionsTextures[] =
            {
                "\z\22ndRDF\addons\uniforms\helmets\Infantry\data\base\22nd_Helmet_Base.paa",
                "\z\22ndRDF\addons\uniforms\helmets\Infantry\data\base\22nd_Helmet_Base.paa",
                "\z\22ndRDF\addons\uniforms\helmets\Infantry\data\base\22nd_Helmet_Base.paa",
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
                "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Base\VacSeal_Base_CO.paa",
                "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa",
                "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa",
            };
        };
    };

    class 22nd_HelmBase_Visor : 22nd_Helm_base
    {
        scope = 2;
        scopeArsenal = 2;
        author = "Warhound Mod Team";
        displayName = "[22nd] ECH252-C Visor";
        model = "MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
        picture = "\22nd_uniforms\helmets\22ndRDF.paa";//Add Icon
        hiddenSelections[] =
        {
            "camo1", // Helmet
            "camo2", // NVG Mount
            "camo3", // Helmet Strap
            "camo4", // Eyepiece
            "camo5", // Eyepiece Glass
            "camo6", // Glasses/Visor
            "camo7", // Vac Seal
            "Camo8", // Chin Module
            "Camo9", // Visor, Closed
            //"Helmet",
            //"NVGMount",
            //"HelmetStrap",
            "EyePiece",
            "EyePieceGlass",
            //"VisorGlasses",
            "VaccumCollar",
            "Helmet_Chin",
            "Closed_Visor"
        };
        class XtdGearInfo
        {
            model = "22nd_ECH252C";
            Camouflage = "WD";
            Variants = "Visor";
            Decal = "None";
        };
        hiddenSelectionsTextures[] =
        {
            "\z\22ndRDF\addons\uniforms\helmets\Infantry\data\base\22nd_Helmet_Base.paa",
            "\z\22ndRDF\addons\uniforms\helmets\Infantry\data\base\22nd_Helmet_Base.paa",
            "\z\22ndRDF\addons\uniforms\helmets\Infantry\data\base\22nd_Helmet_Base.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Base\VacSeal_Base_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa",
        };
        class itemInfo: itemInfo
        {
            hiddenSelections[] =
            {
                "camo1", // Helmet
                "camo2", // NVG Mount
                "camo3", // Helmet Strap
                "camo4", // Eyepiece
                "camo5", // Eyepiece Glass
                "camo6", // Glasses/Visor
                "camo7", // Vac Seal
                "Camo8", // Chin Module
                "Camo9", // Visor, Closed
                //"Helmet",
                //"NVGMount",
                //"HelmetStrap",
                "EyePiece",
                "EyePieceGlass",
                //"VisorGlasses",
                "VaccumCollar",
                "Helmet_Chin",
                "Closed_Visor"
            };
            hiddenSelectionsTextures[] =
            {
                "\z\22ndRDF\addons\uniforms\helmets\Infantry\data\base\22nd_Helmet_Base.paa",
                "\z\22ndRDF\addons\uniforms\helmets\Infantry\data\base\22nd_Helmet_Base.paa",
                "\z\22ndRDF\addons\uniforms\helmets\Infantry\data\base\22nd_Helmet_Base.paa",
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
                "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Base\VacSeal_Base_CO.paa",
                "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa",
                "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa",
            };
        };
    };


    //Infantry Medic
    class 22nd_HelmBase_Open_med : 22nd_Helm_base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[22nd] ECH252-MED";
        hiddenSelections[] =
        {
            "camo1", // Helmet
            "camo2", // NVG Mount
            "camo3", // Helmet Strap
            "camo4", // Eyepiece
            "camo5", // Eyepiece Glass
            "camo6", // Glasses/Visor
            "camo7", // Vac Seal
            "Camo8", // Chin Module
            "Camo9", // Visor, Closed
            //"Helmet",
            //"NVGMount",
            //"HelmetStrap",
            "EyePiece",
            "EyePieceGlass",
            "VisorGlasses",
            "VaccumCollar",
            "Helmet_Chin",
            "Closed_Visor"
        };
        hiddenSelectionsTextures[] =
        {
            "\z\22ndRDF\addons\uniforms\helmets\Infantry\data\base\22nd_Helmet_Base_Med.paa", 
            "\z\22ndRDF\addons\uniforms\helmets\Infantry\data\base\22nd_Helmet_Base_Med.paa",
            "\z\22ndRDF\addons\uniforms\helmets\Infantry\data\base\22nd_Helmet_Base_Med.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Base\VacSeal_Base_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa"
        };
        class XtdGearInfo
        {
            model = "22nd_ECH252C";
            Camouflage = "WD";
            Variants = "Open";
            Decal = "Medical";
        };
        class itemInfo: itemInfo
        {
            hiddenSelections[] =
            {
                "camo1", // Helmet
                "camo2", // NVG Mount
                "camo3", // Helmet Strap
                "camo4", // Eyepiece
                "camo5", // Eyepiece Glass
                "camo6", // Glasses/Visor
                "camo7", // Vac Seal
                "Camo8", // Chin Module
                "Camo9", // Visor, Closed
                //"Helmet",
                //"NVGMount",
                //"HelmetStrap",
                "EyePiece",
                "EyePieceGlass",
                "VisorGlasses",
                "VaccumCollar",
                "Helmet_Chin",
                "Closed_Visor"
            };
            hiddenSelectionsTextures[] =
            {
                "\z\22ndRDF\addons\uniforms\helmets\Infantry\data\base\22nd_Helmet_Base_Med.paa", 
                "\z\22ndRDF\addons\uniforms\helmets\Infantry\data\base\22nd_Helmet_Base_Med.paa",
                "\z\22ndRDF\addons\uniforms\helmets\Infantry\data\base\22nd_Helmet_Base_Med.paa",
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
                "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Base\VacSeal_Base_CO.paa",
                "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa",
                "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa"
            };
        };
    };

    class 22nd_HelmBase_Closed_med : 22nd_Helm_base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[22nd] ECH252-MED Closed";
        hiddenSelections[] =
        {
            "camo1", // Helmet
            "camo2", // NVG Mount
            "camo3", // Helmet Strap
            "camo4", // Eyepiece
            "camo5", // Eyepiece Glass
            "camo6", // Glasses/Visor
            "camo7", // Vac Seal
            "Camo8", // Chin Module
            "Camo9", // Visor, Closed
            //"Helmet",
            //"NVGMount",
            //"HelmetStrap",
            "EyePiece",
            "EyePieceGlass",
            "VisorGlasses",
            "VaccumCollar",
            //"Helmet_Chin",
            //"Closed_Visor"
        };
        class XtdGearInfo
        {
            model = "22nd_ECH252C";
            Camouflage = "WD";
            Variants = "Closed";
            Decal = "Medical";
        };
        hiddenSelectionsTextures[] =
        {
            "\z\22ndRDF\addons\uniforms\helmets\Infantry\data\base\22nd_Helmet_Base_Med.paa",
            "\z\22ndRDF\addons\uniforms\helmets\Infantry\data\base\22nd_Helmet_Base_Med.paa",
            "\z\22ndRDF\addons\uniforms\helmets\Infantry\data\base\22nd_Helmet_Base_Med.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Base\VacSeal_Brown_CO.paa",
            "\z\22ndRDF\addons\uniforms\helmets\Infantry\data\base\22nd_Base_Helmet_Lower.paa",
            "\z\22ndRDF\addons\uniforms\helmets\Infantry\data\base\22nd_Base_Helmet_Lower.paa"
        };
        class itemInfo: itemInfo
        {
            hiddenSelections[] =
            {
                "camo1", // Helmet
                "camo2", // NVG Mount
                "camo3", // Helmet Strap
                "camo4", // Eyepiece
                "camo5", // Eyepiece Glass
                "camo6", // Glasses/Visor
                "camo7", // Vac Seal
                "Camo8", // Chin Module
                "Camo9", // Visor, Closed
                //"Helmet",
                //"NVGMount",
                //"HelmetStrap",
                "EyePiece",
                "EyePieceGlass",
                "VisorGlasses",
                "VaccumCollar",
                //"Helmet_Chin",
                //"Closed_Visor"
            };
            hiddenSelectionsTextures[] =
            {
                "\z\22ndRDF\addons\uniforms\helmets\Infantry\data\base\22nd_Helmet_Base_Med.paa",
                "\z\22ndRDF\addons\uniforms\helmets\Infantry\data\base\22nd_Helmet_Base_Med.paa",
                "\z\22ndRDF\addons\uniforms\helmets\Infantry\data\base\22nd_Helmet_Base_Med.paa",
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
                "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Base\VacSeal_Brown_CO.paa",
                "\z\22ndRDF\addons\uniforms\helmets\Infantry\data\base\22nd_Base_Helmet_Lower.paa",
                "\z\22ndRDF\addons\uniforms\helmets\Infantry\data\base\22nd_Base_Helmet_Lower.paa"
            };
        };
    };

    class 22nd_HelmBase_Eye_med : 22nd_Helm_base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[22nd] ECH252-MED Eyepiece ";
        hiddenSelections[] =
        {
            "camo1", // Helmet
            "camo2", // NVG Mount
            "camo3", // Helmet Strap
            "camo4", // Eyepiece
            "camo5", // Eyepiece Glass
            "camo6", // Glasses/Visor
            "camo7", // Vac Seal
            "Camo8", // Chin Module
            "Camo9", // Visor, Closed
            //"Helmet",
            //"NVGMount",
            //"HelmetStrap",
            //"EyePiece",
            //"EyePieceGlass",
            "VisorGlasses",
            "VaccumCollar",
            "Helmet_Chin",
            "Closed_Visor"
        };
        class XtdGearInfo
        {
            model = "22nd_ECH252C";
            Camouflage = "WD";
            Variants = "Eyepiece";
            Decal = "Medical";
        };
        hiddenSelectionsTextures[] =
        {
            "\z\22ndRDF\addons\uniforms\helmets\Infantry\data\base\22nd_Helmet_Base_Med.paa",
            "\z\22ndRDF\addons\uniforms\helmets\Infantry\data\base\22nd_Helmet_Base_Med.paa",
            "\z\22ndRDF\addons\uniforms\helmets\Infantry\data\base\22nd_Helmet_Base_Med.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Base\VacSeal_Base_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa"
        };
         class itemInfo: itemInfo
        {
            hiddenSelections[] =
            {
                "camo1", // Helmet
                "camo2", // NVG Mount
                "camo3", // Helmet Strap
                "camo4", // Eyepiece
                "camo5", // Eyepiece Glass
                "camo6", // Glasses/Visor
                "camo7", // Vac Seal
                "Camo8", // Chin Module
                "Camo9", // Visor, Closed
                //"Helmet",
                //"NVGMount",
                //"HelmetStrap",
                //"EyePiece",
                //"EyePieceGlass",
                "VisorGlasses",
                "VaccumCollar",
                "Helmet_Chin",
                "Closed_Visor"
            };
            hiddenSelectionsTextures[] =
            {
                "\z\22ndRDF\addons\uniforms\helmets\Infantry\data\base\22nd_Helmet_Base_Med.paa",
                "\z\22ndRDF\addons\uniforms\helmets\Infantry\data\base\22nd_Helmet_Base_Med.paa",
                "\z\22ndRDF\addons\uniforms\helmets\Infantry\data\base\22nd_Helmet_Base_Med.paa",
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
                "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Base\VacSeal_Base_CO.paa",
                "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa",
                "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa"
            };
        };
    };

    class 22nd_HelmBase_Visor_med : 22nd_Helm_base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[22nd] ECH252-MED Visor";
        hiddenSelections[] =
        {
            "camo1", // Helmet
            "camo2", // NVG Mount
            "camo3", // Helmet Strap
            "camo4", // Eyepiece
            "camo5", // Eyepiece Glass
            "camo6", // Glasses/Visor
            "camo7", // Vac Seal
            "Camo8", // Chin Module
            "Camo9", // Visor, Closed
            //"Helmet",
            //"NVGMount",
            //"HelmetStrap",
            "EyePiece",
            "EyePieceGlass",
            //"VisorGlasses",
            "VaccumCollar",
            "Helmet_Chin",
            "Closed_Visor"
        };
        class XtdGearInfo
        {
            model = "22nd_ECH252C";
            Camouflage = "WD";
            Variants = "Visor";
            Decal = "Medical";
        };
        hiddenSelectionsTextures[] =
        {
            "\z\22ndRDF\addons\uniforms\helmets\Infantry\data\base\22nd_Helmet_Base_Med.paa",
            "\z\22ndRDF\addons\uniforms\helmets\Infantry\data\base\22nd_Helmet_Base_Med.paa",
            "\z\22ndRDF\addons\uniforms\helmets\Infantry\data\base\22nd_Helmet_Base_Med.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Base\VacSeal_Base_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa",
        };
        class itemInfo: itemInfo
        {
            hiddenSelections[] =
            {
                "camo1", // Helmet
                "camo2", // NVG Mount
                "camo3", // Helmet Strap
                "camo4", // Eyepiece
                "camo5", // Eyepiece Glass
                "camo6", // Glasses/Visor
                "camo7", // Vac Seal
                "Camo8", // Chin Module
                "Camo9", // Visor, Closed
                //"Helmet",
                //"NVGMount",
                //"HelmetStrap",
                "EyePiece",
                "EyePieceGlass",
                //"VisorGlasses",
                "VaccumCollar",
                "Helmet_Chin",
                "Closed_Visor"
            };
             hiddenSelectionsTextures[] =
            {
                "\z\22ndRDF\addons\uniforms\helmets\Infantry\data\base\22nd_Helmet_Base_Med.paa",
                "\z\22ndRDF\addons\uniforms\helmets\Infantry\data\base\22nd_Helmet_Base_Med.paa",
                "\z\22ndRDF\addons\uniforms\helmets\Infantry\data\base\22nd_Helmet_Base_Med.paa",
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
                "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Base\VacSeal_Base_CO.paa",
                "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa",
                "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa",
            };
        };
    };


    //Infantry Winter

    class 22nd_HelmSnow_Open : 22nd_Helm_base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[22nd] ECH252-C/W";
        hiddenSelections[] =
        {
            "camo1", // Helmet
            "camo2", // NVG Mount
            "camo3", // Helmet Strap
            "camo4", // Eyepiece
            "camo5", // Eyepiece Glass
            "camo6", // Glasses/Visor
            "camo7", // Vac Seal
            "Camo8", // Chin Module
            "Camo9", // Visor, Closed
            //"Helmet",
            //"NVGMount",
            //"HelmetStrap",
            "EyePiece",
            "EyePieceGlass",
            "VisorGlasses",
            "VaccumCollar",
            "Helmet_Chin",
            "Closed_Visor"
        };
        hiddenSelectionsTextures[] =
        {
            "\z\22ndRDF\addons\uniforms\helmets\Infantry\data\base\22nd_Helmet_Snow.paa",
            "\z\22ndRDF\addons\uniforms\helmets\Infantry\data\base\22nd_Helmet_Snow.paa",
            "\z\22ndRDF\addons\uniforms\helmets\Infantry\data\base\22nd_Helmet_Snow.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Base\VacSeal_Base_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa"
        };
        class XtdGearInfo
        {
            model = "22nd_ECH252C";
            Camouflage = "Winter";
            Variants = "Open";
            Decal = "None";
        };
        class ItemInfo : ItemInfo
        {
            hiddenSelections[] =
            {
                "camo1", // Helmet
                "camo2", // NVG Mount
                "camo3", // Helmet Strap
                "camo4", // Eye Piece
                "camo5", // Eye Piece Glass
                "camo6", // Visor Glasses
                "camo7", // Vac Seal
                "Camo8", // Face Module Chin
                "Camo9", // Closed Visor
                //"Helmet",
                //"NVGMount",
                //"HelmetStrap",
                "EyePiece",
                "EyePieceGlass",
                "VisorGlasses",
                "VaccumCollar",
                "Helmet_Chin",
                "Closed_Visor"
            };
              hiddenSelectionsTextures[] =
              {
                  "\z\22ndRDF\addons\uniforms\helmets\Infantry\data\base\22nd_Helmet_Snow.paa",
                  "\z\22ndRDF\addons\uniforms\helmets\Infantry\data\base\22nd_Helmet_Snow.paa",
                  "\z\22ndRDF\addons\uniforms\helmets\Infantry\data\base\22nd_Helmet_Snow.paa",
                  "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
                  "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
                  "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
                  "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Base\VacSeal_Base_CO.paa",
                  "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa",
                  "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa",
              };
              
        };
    }; 

    class 22nd_HelmSnow_Closed : 22nd_Helm_base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[22nd] ECH252-C/W Closed";
        hiddenSelections[] =
        {
            "camo1", // Helmet
            "camo2", // NVG Mount
            "camo3", // Helmet Strap
            "camo4", // Eyepiece
            "camo5", // Eyepiece Glass
            "camo6", // Glasses/Visor
            "camo7", // Vac Seal
            "Camo8", // Chin Module
            "Camo9", // Visor, Closed
            //"Helmet",
            //"NVGMount",
            //"HelmetStrap",
            "EyePiece",
            "EyePieceGlass",
            "VisorGlasses",
            "VaccumCollar",
            //"Helmet_Chin",
            //"Closed_Visor"
        };
        class XtdGearInfo
        {
            model = "22nd_ECH252C";
            Camouflage = "Winter";
            Variants = "Closed";
            Decal = "None";
        };
        hiddenSelectionsTextures[] =
        {
            "\z\22ndRDF\addons\uniforms\helmets\Infantry\data\base\22nd_Helmet_Snow.paa",
            "\z\22ndRDF\addons\uniforms\helmets\Infantry\data\base\22nd_Helmet_Snow.paa",
            "\z\22ndRDF\addons\uniforms\helmets\Infantry\data\base\22nd_Helmet_Snow.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Base\VacSeal_Brown_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa",
        };
        class ItemInfo : ItemInfo
        {
            uniformModel = "MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
            hiddenSelections[] =
            {
                "camo1", // Helmet
                "camo2", // NVG Mount
                "camo3", // Helmet Strap
                "camo4", // Eye Piece
                "camo5", // Eye Piece Glass
                "camo6", // Visor Glasses
                "camo7", // Vac Seal
                "Camo8", // Face Module Chin
                "Camo9", // Closed Visor
                //"Helmet",
                //"NVGMount",
                //"HelmetStrap",
                "EyePiece",
                "EyePieceGlass",
                "VisorGlasses",
                "VaccumCollar",
                //"Helmet_Chin",
                //"Closed_Visor"
            };
            hiddenSelectionsTextures[] =
            {
                "\z\22ndRDF\addons\uniforms\helmets\Infantry\data\base\22nd_Helmet_Snow.paa", // Helmet Texture
                "\z\22ndRDF\addons\uniforms\helmets\Infantry\data\base\22nd_Helmet_Snow.paa", // Helmet Texture
                "\z\22ndRDF\addons\uniforms\helmets\Infantry\data\base\22nd_Helmet_Snow.paa", // Helmet Texture
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Eyepiece
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Eyepiece Glass
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Visor Glass
                "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Base\VacSeal_Base_CO.paa", // Vac Collar
                "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa", // Face Module Chin
                "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa" // Closed Visor
            };
        };
    };
    class 22nd_HelmSnow_Eye : 22nd_Helm_base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[22nd] ECH252-C/W Eyepiece";
        hiddenSelections[] =
        {
            "camo1", // Helmet
            "camo2", // NVG Mount
            "camo3", // Helmet Strap
            "camo4", // Eyepiece
            "camo5", // Eyepiece Glass
            "camo6", // Glasses/Visor
            "camo7", // Vac Seal
            "Camo8", // Chin Module
            "Camo9", // Visor, Closed
            //"Helmet",
            //"NVGMount",
            //"HelmetStrap",
            //"EyePiece",
            //"EyePieceGlass",
            "VisorGlasses",
            "VaccumCollar",
            "Helmet_Chin",
            "Closed_Visor"
        };
        hiddenSelectionsTextures[] =
        {
            "\z\22ndRDF\addons\uniforms\helmets\Infantry\data\base\22nd_Helmet_Snow.paa", // Helmet Texture
            "\z\22ndRDF\addons\uniforms\helmets\Infantry\data\base\22nd_Helmet_Snow.paa", // Helmet Texture
            "\z\22ndRDF\addons\uniforms\helmets\Infantry\data\base\22nd_Helmet_Snow.paa", // Helmet Texture
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Base\VacSeal_Base_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa",
        };
        class XtdGearInfo
        {
            model = "22nd_ECH252C";
            Camouflage = "Winter";
            Variants = "Eyepiece";
            Decal = "None";
        };
        class ItemInfo : ItemInfo
        {
            uniformModel = "MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
            hiddenSelections[] =
            {
                "camo1", // Helmet
                "camo2", // NVG Mount
                "camo3", // Helmet Strap
                "camo4", // Eye Piece
                "camo5", // Eye Piece Glass
                "camo6", // Visor Glasses
                "camo7", // Vac Seal
                "Camo8", // Face Module Chin
                "Camo9", // Closed Visor
                //"Helmet",
                //"NVGMount",
                //"HelmetStrap",
                //"EyePiece",
                //"EyePieceGlass",
                "VisorGlasses",
                "VaccumCollar",
                "Helmet_Chin",
                "Closed_Visor"
            };
            hiddenSelectionsTextures[] =
            {
                "\z\22ndRDF\addons\uniforms\helmets\Infantry\data\base\22nd_Helmet_Snow.paa", // Helmet Texture
                "\z\22ndRDF\addons\uniforms\helmets\Infantry\data\base\22nd_Helmet_Snow.paa", // Helmet Texture
                "\z\22ndRDF\addons\uniforms\helmets\Infantry\data\base\22nd_Helmet_Snow.paa", // Helmet Texture
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Eyepiece
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Eyepiece Glass
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Visor Glass
                "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Base\VacSeal_Base_CO.paa", // Vac Collar
                "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa", // Face Module Chin
                "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa" // Closed Visor
            };
        };
    };
    class 22nd_HelmSnow_Visor : 22nd_Helm_base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[22nd] ECH252-C/W Visor";
        hiddenSelections[] =
        {
            "camo1", // Helmet
            "camo2", // NVG Mount
            "camo3", // Helmet Strap
            "camo4", // Eye Piece
            "camo5", // Eye Piece Glass
            "camo6", // Visor Glasses
            "camo7", // Vac Seal
            "Camo8", // Face Module Chin
            "Camo9", // Closed Visor
            //"Helmet",
            //"NVGMount",
            //"HelmetStrap",
            "EyePiece",
            "EyePieceGlass",
            //"VisorGlasses",
            "VaccumCollar",
            "Helmet_Chin",
            "Closed_Visor"
        };
        hiddenSelectionsTextures[] =
        {
            "\z\22ndRDF\addons\uniforms\helmets\Infantry\data\base\22nd_Helmet_Snow.paa", // Helmet Texture
            "\z\22ndRDF\addons\uniforms\helmets\Infantry\data\base\22nd_Helmet_Snow.paa", // Helmet Texture
            "\z\22ndRDF\addons\uniforms\helmets\Infantry\data\base\22nd_Helmet_Snow.paa", // Helmet Texture
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Eyepiece
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Eyepiece Glass
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Visor Glass
            "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Base\VacSeal_Base_CO.paa", // Vac Collar
            "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa", // Face Module Chin
            "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa" // Closed Visor
        };
        class XtdGearInfo
        {
            model = "22nd_ECH252C";
            Camouflage = "Winter";
            Variants = "Visor";
            Decal = "None";
        };
        class ItemInfo : ItemInfo
        {
            uniformModel = "MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
            hiddenSelections[] =
            {
                "camo1", // Helmet
                "camo2", // NVG Mount
                "camo3", // Helmet Strap
                "camo4", // Eye Piece
                "camo5", // Eye Piece Glass
                "camo6", // Visor Glasses
                "camo7", // Vac Seal
                "Camo8", // Face Module Chin
                "Camo9", // Closed Visor
                //"Helmet",
                //"NVGMount",
                //"HelmetStrap",
                "EyePiece",
                "EyePieceGlass",
                //"VisorGlasses",
                "VaccumCollar",
                "Helmet_Chin",
                "Closed_Visor"
            };
            hiddenSelectionsTextures[] =
            {
                "\z\22ndRDF\addons\uniforms\helmets\Infantry\data\base\22nd_Helmet_Snow.paa", // Helmet Texture
                "\z\22ndRDF\addons\uniforms\helmets\Infantry\data\base\22nd_Helmet_Snow.paa", // Helmet Texture
                "\z\22ndRDF\addons\uniforms\helmets\Infantry\data\base\22nd_Helmet_Snow.paa", // Helmet Texture
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Eyepiece
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Eyepiece Glass
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Visor Glass
                "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Base\VacSeal_Base_CO.paa", // Vac Collar
                "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa", // Face Module Chin
                "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa" // Closed Visor
            };
        };
    };


    //Infantry Medic Winter
    class 22nd_HelmSnow_Open_med : 22nd_Helm_base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[22nd] ECH252-MED/W MED";
        hiddenSelections[] =
        {
            "camo1", // Helmet
            "camo2", // NVG Mount
            "camo3", // Helmet Strap
            "camo4", // Eyepiece
            "camo5", // Eyepiece Glass
            "camo6", // Glasses/Visor
            "camo7", // Vac Seal
            "Camo8", // Chin Module
            "Camo9", // Visor, Closed
            //"Helmet",
            //"NVGMount",
            //"HelmetStrap",
            "EyePiece",
            "EyePieceGlass",
            "VisorGlasses",
            "VaccumCollar",
            "Helmet_Chin",
            "Closed_Visor"
        };
        hiddenSelectionsTextures[] =
        {
            "\z\22ndRDF\addons\uniforms\helmets\Infantry\data\base\22nd_Helmet_Snow_Med.paa",
            "\z\22ndRDF\addons\uniforms\helmets\Infantry\data\base\22nd_Helmet_Snow_Med.paa",
            "\z\22ndRDF\addons\uniforms\helmets\Infantry\data\base\22nd_Helmet_Snow_Med.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Base\VacSeal_Base_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa"
        };
        class XtdGearInfo
        {
            model = "22nd_ECH252C";
            Camouflage = "Winter";
            Variants = "Open";
            Decal = "Medical";
        };
        class ItemInfo : ItemInfo
        {
            hiddenSelections[] =
            {
                "camo1", // Helmet
                "camo2", // NVG Mount
                "camo3", // Helmet Strap
                "camo4", // Eye Piece
                "camo5", // Eye Piece Glass
                "camo6", // Visor Glasses
                "camo7", // Vac Seal
                "Camo8", // Face Module Chin
                "Camo9", // Closed Visor
                //"Helmet",
                //"NVGMount",
                //"HelmetStrap",
                "EyePiece",
                "EyePieceGlass",
                "VisorGlasses",
                "VaccumCollar",
                "Helmet_Chin",
                "Closed_Visor"
            };
            hiddenSelectionsTextures[] =
            {
                "\z\22ndRDF\addons\uniforms\helmets\Infantry\data\base\22nd_Helmet_Snow_Med.paa", // Helmet Texture
                "\z\22ndRDF\addons\uniforms\helmets\Infantry\data\base\22nd_Helmet_Snow_Med.paa", // Helmet Texture
                "\z\22ndRDF\addons\uniforms\helmets\Infantry\data\base\22nd_Helmet_Snow_Med.paa", // Helmet Texture
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Eyepiece
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Eyepiece Glass
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Visor Glass
                "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Base\VacSeal_Base_CO.paa", // Vac Collar
                "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa", // Face Module Chin
                "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa" // Closed Visor
            };
        };
    };

    class 22nd_HelmSnow_Closed_med : 22nd_Helm_base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[22nd] ECH252-MED/W MED Closed";
        hiddenSelections[] =
        {
            "camo1", // Helmet
            "camo2", // NVG Mount
            "camo3", // Helmet Strap
            "camo4", // Eyepiece
            "camo5", // Eyepiece Glass
            "camo6", // Glasses/Visor
            "camo7", // Vac Seal
            "Camo8", // Chin Module
            "Camo9", // Visor, Closed
            //"Helmet",
            //"NVGMount",
            //"HelmetStrap",
            "EyePiece",
            "EyePieceGlass",
            "VisorGlasses",
            "VaccumCollar",
            //"Helmet_Chin",
            //"Closed_Visor"
        };
        class XtdGearInfo
        {
            model = "22nd_ECH252C";
            Camouflage = "Winter";
            Variants = "Closed";
            Decal = "Medical";
        };
        hiddenSelectionsTextures[] =
        {
            "\z\22ndRDF\addons\uniforms\helmets\Infantry\data\base\22nd_Helmet_Snow_Med.paa",
            "\z\22ndRDF\addons\uniforms\helmets\Infantry\data\base\22nd_Helmet_Snow_Med.paa",
            "\z\22ndRDF\addons\uniforms\helmets\Infantry\data\base\22nd_Helmet_Snow_Med.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Base\VacSeal_Brown_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa",
        };
        class ItemInfo : ItemInfo
        {
            hiddenSelections[] =
            {
                "camo1", // Helmet
                "camo2", // NVG Mount
                "camo3", // Helmet Strap
                "camo4", // Eye Piece
                "camo5", // Eye Piece Glass
                "camo6", // Visor Glasses
                "camo7", // Vac Seal
                "Camo8", // Face Module Chin
                "Camo9", // Closed Visor
                //"Helmet",
                //"NVGMount",
                //"HelmetStrap",
                "EyePiece",
                "EyePieceGlass",
                "VisorGlasses",
                "VaccumCollar",
                //"Helmet_Chin",
                //"Closed_Visor"
            };
            hiddenSelectionsTextures[] =
            {
                "\z\22ndRDF\addons\uniforms\helmets\Infantry\data\base\22nd_Helmet_Snow_Med.paa", // Helmet Texture
                "\z\22ndRDF\addons\uniforms\helmets\Infantry\data\base\22nd_Helmet_Snow_Med.paa", // Helmet Texture
                "\z\22ndRDF\addons\uniforms\helmets\Infantry\data\base\22nd_Helmet_Snow_Med.paa", // Helmet Texture
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Eyepiece
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Eyepiece Glass
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Visor Glass
                "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Base\VacSeal_Base_CO.paa", // Vac Collar
                "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa", // Face Module Chin
                "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa" // Closed Visor
            };
        };
    };

    class 22nd_HelmSnow_Eye_med : 22nd_Helm_base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[22nd] ECH252-MED/W Eyepiece";
        hiddenSelections[] =
        {
            "camo1", // Helmet
            "camo2", // NVG Mount
            "camo3", // Helmet Strap
            "camo4", // Eyepiece
            "camo5", // Eyepiece Glass
            "camo6", // Glasses/Visor
            "camo7", // Vac Seal
            "Camo8", // Chin Module
            "Camo9", // Visor, Closed
            //"Helmet",
            //"NVGMount",
            //"HelmetStrap",
            //"EyePiece",
            //"EyePieceGlass",
            "VisorGlasses",
            "VaccumCollar",
            "Helmet_Chin",
            "Closed_Visor"
        };
        hiddenSelectionsTextures[] =
        {
            "\z\22ndRDF\addons\uniforms\helmets\Infantry\data\base\22nd_Helmet_Snow_Med.paa",
            "\z\22ndRDF\addons\uniforms\helmets\Infantry\data\base\22nd_Helmet_Snow_Med.paa",
            "\z\22ndRDF\addons\uniforms\helmets\Infantry\data\base\22nd_Helmet_Snow_Med.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Base\VacSeal_Base_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa",
        };
        class XtdGearInfo
        {
            model = "22nd_ECH252C";
            Camouflage = "Winter";
            Variants = "Eyepiece";
            Decal = "Medical";
        };
        class ItemInfo : ItemInfo
        {
            hiddenSelections[] =
            {
                "camo1", // Helmet
                "camo2", // NVG Mount
                "camo3", // Helmet Strap
                "camo4", // Eye Piece
                "camo5", // Eye Piece Glass
                "camo6", // Visor Glasses
                "camo7", // Vac Seal
                "Camo8", // Face Module Chin
                "Camo9", // Closed Visor
                //"Helmet",
                //"NVGMount",
                //"HelmetStrap",
                //"EyePiece",
                //"EyePieceGlass",
                "VisorGlasses",
                "VaccumCollar",
                "Helmet_Chin",
                "Closed_Visor"
            };
            hiddenSelectionsTextures[] =
            {
                "\z\22ndRDF\addons\uniforms\helmets\Infantry\data\base\22nd_Helmet_Snow_Med.paa", // Helmet Texture
                "\z\22ndRDF\addons\uniforms\helmets\Infantry\data\base\22nd_Helmet_Snow_Med.paa", // Helmet Texture
                "\z\22ndRDF\addons\uniforms\helmets\Infantry\data\base\22nd_Helmet_Snow_Med.paa", // Helmet Texture
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Eyepiece
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Eyepiece Glass
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Visor Glass
                "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Base\VacSeal_Base_CO.paa", // Vac Collar
                "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa", // Face Module Chin
                "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa" // Closed Visor
            };
        };
    };

    class 22nd_HelmSnow_Visor_med : 22nd_Helm_base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[22nd] ECH252-MED/W Visor";
        hiddenSelections[] =
        {
            "camo1", // Helmet
            "camo2", // NVG Mount
            "camo3", // Helmet Strap
            "camo4", // Eyepiece
            "camo5", // Eyepiece Glass
            "camo6", // Glasses/Visor
            "camo7", // Vac Seal
            "Camo8", // Chin Module
            "Camo9", // Visor, Closed
            //"Helmet",
            //"NVGMount",
            //"HelmetStrap",
            "EyePiece",
            "EyePieceGlass",
            //"VisorGlasses",
            "VaccumCollar",
            "Helmet_Chin",
            "Closed_Visor"
        };
        class XtdGearInfo
        {
            model = "22nd_ECH252C";
            Camouflage = "Winter";
            Variants = "Visor";
            Decal = "Medical";
        };
        hiddenSelectionsTextures[] =
        {
            "\z\22ndRDF\addons\uniforms\helmets\Infantry\data\base\22nd_Helmet_Snow_Med.paa",
            "\z\22ndRDF\addons\uniforms\helmets\Infantry\data\base\22nd_Helmet_Snow_Med.paa",
            "\z\22ndRDF\addons\uniforms\helmets\Infantry\data\base\22nd_Helmet_Snow_Med.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Base\VacSeal_Base_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa",
        };
        class ItemInfo : ItemInfo
        {
            hiddenSelections[] =
            {
                "camo1", // Helmet
                "camo2", // NVG Mount
                "camo3", // Helmet Strap
                "camo4", // Eye Piece
                "camo5", // Eye Piece Glass
                "camo6", // Visor Glasses
                "camo7", // Vac Seal
                "Camo8", // Face Module Chin
                "Camo9", // Closed Visor
                //"Helmet",
                //"NVGMount",
                //"HelmetStrap",
                "EyePiece",
                "EyePieceGlass",
                //"VisorGlasses",
                "VaccumCollar",
                "Helmet_Chin",
                "Closed_Visor"
            };
            hiddenSelectionsTextures[] =
            {
                "\z\22ndRDF\addons\uniforms\helmets\Infantry\data\base\22nd_Helmet_Snow_Med.paa", // Helmet Texture
                "\z\22ndRDF\addons\uniforms\helmets\Infantry\data\base\22nd_Helmet_Snow_Med.paa", // Helmet Texture
                "\z\22ndRDF\addons\uniforms\helmets\Infantry\data\base\22nd_Helmet_Snow_Med.paa", // Helmet Texture
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Eyepiece
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Eyepiece Glass
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Visor Glass
                "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Base\VacSeal_Base_CO.paa", // Vac Collar
                "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa", // Face Module Chin
                "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa" // Closed Visor
            };
        };
    };

};


