class CfgPatches {
    class 22ndArmsRoom{
        units[] = {
        };
        weapons[] = {
            //Base
            "22nd_HelmBase_Open",
            "22nd_HelmBase_Closed",
            "22nd_HelmBase_Eye",
            "22nd_HelmBase_Visor",
            //Snow
            "22nd_HelmSnow_Open",
            "22nd_HelmSnow_Closed",
            "22nd_HelmSnow_Eye",
            "22nd_HelmSnow_Visor",
            //Aviation
            "22nd_VX19_Urban",
            "22nd_VX19_Woodland",
            "22nd_VX19_Arid",
            "22nd_VX19_Winter",
            "22nd_VX19_Urban_HMHD",
            "22nd_VX19_Woodland_HMHD",
            "22nd_VX19_Arid_HMHD",
            "22nd_VX19_Winter_HMHD",
            //OPEN MED
            // Base
            "22nd_HelmBase_Open_med",
            "22nd_HelmBase_Closed_med",
            "22nd_HelmBase_Eye_med",
            "22nd_HelmBase_Visor_med",
            //Snow
            "22nd_HelmSnow_Open_med",
            "22nd_HelmSnow_Closed_med",
            "22nd_HelmSnow_Eye_med",
            "22nd_HelmSnow_Visor_med",
            //Custom
            "22nd_VX19_Urban_Manta",
            "22nd_VX19_Woodland_Manta",
            "22nd_VX19_Arid_Manta",
            "22nd_VX19_Winter_Manta",
            "22nd_VX19_Urban_Cuban",
            "22nd_VX19_Woodland_Cuban",
            "22nd_VX19_Arid_Cuban",
            "22nd_VX19_Winter_Cuban",
            "22nd_VX19_Urban_Astro",
            "22nd_VX19_Woodland_Astro",
            "22nd_VX19_Arid_Astro",
            "22nd_VX19_Winter_Astro",
            "22nd_VX19_Urban_Evans",
            "22nd_VX19_Woodland_Evans",
            "22nd_VX19_Arid_Evans",
            "22nd_VX19_Winter_Evans",
            "22nd_VX19_Urban_Kamea",
            "22nd_VX19_Woodland_Kamea",
            "22nd_VX19_Arid_Kamea",
            "22nd_VX19_Winter_Kamea",
            "22nd_VX19_Urban_Ras",
            "22nd_VX19_Woodland_Ras",
            "22nd_VX19_Arid_Ras",
            "22nd_VX19_Winter_Ras",
            "22nd_HelmCustom_Alloy",
            "22nd_HelmCustom_Bay",
            "22nd_HelmCustom_Bee",
            "22nd_HelmCustom_Grims",
            "22nd_HelmCustom_Harper",
            "22nd_HelmCustom_Jacks",
            "22nd_HelmCustom_Perse",
            "22nd_HelmCustom_Relic",
            "22nd_HelmCustom_Sue"
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
//Added AAE functionality - 0905, Hertzel

class XtdGearModels
{
    class CfgWeapons
    {
        class WBase_AAE
        {
            label = "[22nd] CHC252 Base";
            author = "Warhound Mod Team";
            options[] =
            {
                "Variants",
                "Decal"
            };
            class Variants
            {
                label = "Variants";
                values[] =
                {
                    "Open",
                    "Closed",
                    "Visor",
                    "Eyepiece",

                };
                class Open
                {
                    label = "Open";
                };
                class Closed
                {
                    label = "Closed";
                };
                class Visor
                {
                    label = "Visor";
                };
                class Eyepiece
                {
                    label = "Eyepiece";
                };
            };
            class Decal
            {
                label = "Decal";
                values[] =
                {
                    "None",
                    "Medical",
                };
                class None
                {
                    label = "None";
                };
                class Medical
                {
                    label = "Medical";
                };
            };
        };
        class WSnow_AAE
        {
            label = "[22nd] CHC252 Winter";
            author = "Warhound Mod Team";
            options[] =
            {
                "Variants",
                "Decal"
            };
            class Variants
            {
                label = "Variants";
                values[] =
                {
                    "Open",
                    "Closed",
                    "Visor",
                    "Eyepiece",
                };
                class Open
                {
                    label = "Open";
                };
                class Closed
                {
                    label = "Closed";
                };
                class Visor
                {
                    label = "Visor";
                };
                class Eyepiece
                {
                    label = "Eyepiece";
                };
            };
            class Decal
            {
                label = "Decal";
                values[] =
                {
                    "None",
                    "Medical"
                };
                class None
                {
                    label = "None";
                };
                class Medical
                {
                    label = "Medical";
                };
            };
        };
        class 22nd_VX19
        {
            label = "22nd VX-19 Aviation Helmet";

            options[] =
            {
                "Camouflage",
                "Variant"
            };

            class Camouflage
            {
                label = "Camouflage";

                values[] =
                {
                    "Urban",
                    "Woodland",
                    "Arid",
                    "Winter"
                };

                class Urban
                {
                    label = "Urban";
                };

                class Woodland
                {
                    label = "Woodland";
                };

                class Arid
                {
                    label = "Arid";
                };

                class Snow
                {
                    label = "Winter";
                };
            };

            class Variant
            {
                label = "Variant";

                values[] =
                {
                    "Standard",
                    "HMHD"
                };

                class Standard
                {
                    label = "Orca";
                };

                class HMHD
                {
                    label = "Hammerhead";
                };
            };
        };
        class 22nd_VX19_Custom
        {
            label = "22nd VX-19 Aviation Helmet Customs";

            options[] =
            {
                "Camouflage",
                "Variant"
            };

            class Camouflage
            {
                label = "Camouflage";

                values[] =
                {
                    "Urban",
                    "Woodland",
                    "Arid",
                    "Winter"
                };

                class Urban
                {
                    label = "Urban";
                };

                class Woodland
                {
                    label = "Woodland";
                };

                class Arid
                {
                    label = "Arid";
                };

                class Snow
                {
                    label = "Winter";
                };
            };

            class Variant
            {
                label = "Variant";

                values[] =
                {
                    "Manta",
                    "Cuban",
                    "Astro",
                    "Evans",
                    "Kamea",
                    "Ras"
                };

                class Manta
                {
                    label = "Manta";
                };

                class Cuban
                {
                    label = "Cuban";
                };

                class Astro
                {
                    label = "Astro";
                };

                class Evans
                {
                    label = "Evans";
                };

                class Kamea
                {
                    label = "Kamea";
                };
                
                class Ras
                {
                    label = "Ras";
                };
            };
        };
        class WCustom_AAE
        {
            label = "[22nd] CHC252 Custom";
            author = "Warhound Mod Team";
            options[] =
            {
                "Custom",
            };
            class Custom
            {
                label = "Custom";
                values[] =
                {
                    "Alloy",
                    "Bay",
                    "Bee",
                    "Grims",
                    "Harper",
                    "Jacks",
                    "Perse",
                    "Relic",
                    "Sue"
                };
                class Alloy
                {
                    label = "Alloy";
                };
                class Bay
                {
                    label = "Bay";
                };
                class Bee
                {
                    label = "Bee";
                };
                class Grims
                {
                    label = "Grims";
                };
                class Harper
                {
                    label = "Harper";
                };
                class Jacks
                {
                    label = "Jacks";
                };
                class Perse
                {
                    label = "Perse";
                };
                class Relic
                {
                    label = "Relic";
                };
                class Sue
                {
                    label = "Sue";
                };
            };
        };
    };
};
class CfgWeapons {
    class CH252_Helmet_Base;
    class OPTRE_FC_VX19_Helmet;
    class ItemInfo;
    /*
    * Begin Base Helmets
    */
    class 22nd_HelmBase_Open : CH252_Helmet_Base{
        scope = 2;
        scopeArsenal = 2;
        author = "Warhound Mod Team";
        displayName = "[22nd] CHC252";
        model = "MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
        picture = "\W_Uniform\W_Helmets\22ndRDF.paa";
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
            model = "WBase_AAE";
            Variants = "Open";
            Decal = "None";
        };
        hiddenSelectionsTextures[] =
        {
            "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Base.paa",
            "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Base.paa",
            "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Base.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Base\VacSeal_Base_CO.paa",
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
                "Helmet_Chin",
                "Closed_Visor"
            };
            hiddenSelectionsTextures[] =
            {
                "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Base.paa", // Helmet Texture
                "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Base.paa", // Helmet Texture
                "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Base.paa", // Helmet Texture
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Eyepiece
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Eyepiece Glass
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Visor Glass
                "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Base\VacSeal_Base_CO.paa", // Vac Collar
                "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa", // Face Module Chin
                "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa" // Closed Visor
            };
        };
    };// Close 22nd_HelmBase_Open

    class 22nd_HelmBase_Closed : CH252_Helmet_Base{
        scope = 2;
        scopeArsenal = 2;
        author = "Warhound Mod Team";
        displayName = "[22nd] ECHC252";
        model = "MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
        picture = "\W_Uniform\W_Helmets\22ndRDF.paa";//Add Icon
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
            model = "WBase_AAE";
            Variants = "Closed";
            Decal = "None";
        };
        hiddenSelectionsTextures[] =
        {
            "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Base.paa",
            "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Base.paa",
            "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Base.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Base\VacSeal_Brown_CO.paa",
            "W_Uniform\W_Helmets\Infantry\22nd_Base_Helmet_Lower.paa",
            "W_Uniform\W_Helmets\Infantry\22nd_Base_Helmet_Lower.paa",
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
                "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Base.paa", // Helmet Texture
                "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Base.paa", // Helmet Texture
                "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Base.paa", // Helmet Texture
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Eyepiece
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Eyepiece Glass
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Visor Glass
                "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Base\VacSeal_Base_CO.paa", // Vac Collar
                "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa", // Face Module Chin
                "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa" // Closed Visor
            };
        };
    };// Close 22nd_HelmBase_Closed

    class 22nd_HelmBase_Eye : CH252_Helmet_Base{
        scope = 2;
        scopeArsenal = 2;
        author = "Warhound Mod Team";
        displayName = "[22nd] CHC252 Eyepiece";
        model = "MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
        picture = "\W_Uniform\W_Helmets\22ndRDF.paa";//Add Icon
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
            model = "WBase_AAE";
            Variants = "Eyepiece";
            Decal = "None";
        };
        hiddenSelectionsTextures[] =
        {
            "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Base.paa",
            "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Base.paa",
            "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Base.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Base\VacSeal_Base_CO.paa",
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
                      //"EyePiece",
                      //"EyePieceGlass",
                        "VisorGlasses",
                        "VaccumCollar",
                        "Helmet_Chin",
                        "Closed_Visor"
                    };
                    hiddenSelectionsTextures[] =
                    {
                        "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Base.paa", // Helmet Texture
                        "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Base.paa", // Helmet Texture
                        "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Base.paa", // Helmet Texture
                        "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Eyepiece
                        "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Eyepiece Glass
                        "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Visor Glass
                        "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Base\VacSeal_Base_CO.paa", // Vac Collar
                        "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa", // Face Module Chin
                        "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa" // Closed Visor
                    };
                };
        };// Close 22nd_HelmBase_Eye

    class 22nd_HelmBase_Visor : CH252_Helmet_Base{
        scope = 2;
        scopeArsenal = 2;
        author = "Warhound Mod Team";
        displayName = "[22nd] CHC252 Visor";
        model = "MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
        picture = "\W_Uniform\W_Helmets\22ndRDF.paa";//Add Icon
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
            model = "WBase_AAE";
            Variants = "Visor";
            Decal = "None";
        };
                hiddenSelectionsTextures[] =
                {
                    "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Base.paa",
                    "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Base.paa",
                    "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Base.paa",
                    "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
                    "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
                    "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
                    "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Base\VacSeal_Base_CO.paa",
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
                          //"VisorGlasses",
                            "VaccumCollar",
                            "Helmet_Chin",
                            "Closed_Visor"
                        };
                        hiddenSelectionsTextures[] =
                        {
                            "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Base.paa", // Helmet Texture
                            "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Base.paa", // Helmet Texture
                            "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Base.paa", // Helmet Texture
                            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Eyepiece
                            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Eyepiece Glass
                            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Visor Glass
                            "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Base\VacSeal_Base_CO.paa", // Vac Collar
                            "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa", // Face Module Chin
                            "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa" // Closed Visor
                        };
                    };
        };// Close 22nd_HelmBase_Visor

        // Begin Winterized Choices

    class 22nd_HelmSnow_Open : CH252_Helmet_Base{
        scope = 2;
        scopeArsenal = 2;
        author = "Warhound Mod Team";
        displayName = "[22nd] CHC252/W";
        model = "MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
        picture = "\W_Uniform\W_Helmets\22ndRDF.paa";//Add Icon
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
            "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Snow.paa",
            "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Snow.paa",
            "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Snow.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Base\VacSeal_Base_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa",
        };
        class XtdGearInfo
        {
            model = "WSnow_AAE";
            Variants = "Open";
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
                "VisorGlasses",
                "VaccumCollar",
                "Helmet_Chin",
                "Closed_Visor"
            };
              hiddenSelectionsTextures[] =
              {
                  "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Snow.paa",
                  "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Snow.paa",
                  "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Snow.paa",
                  "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
                  "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
                  "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
                  "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Base\VacSeal_Base_CO.paa",
                  "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa",
                  "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa",
              };
              
        };
    };  // Close 22nd_HelmSnow_Open

    class 22nd_HelmSnow_Closed : CH252_Helmet_Base{
        scope = 2;
        scopeArsenal = 2;
        author = "Warhound Mod Team";
        displayName = "[22nd] ECHC252/W";
        model = "MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
        picture = "\W_Uniform\W_Helmets\22ndRDF.paa";//Add Icon
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
            model = "WSnow_AAE";
            Variants = "Closed";
            Decal = "None";
        };
        hiddenSelectionsTextures[] =
        {
            "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Snow.paa",
            "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Snow.paa",
            "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Snow.paa",
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
                "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Snow.paa", // Helmet Texture
                "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Snow.paa", // Helmet Texture
                "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Snow.paa", // Helmet Texture
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Eyepiece
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Eyepiece Glass
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Visor Glass
                "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Base\VacSeal_Base_CO.paa", // Vac Collar
                "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa", // Face Module Chin
                "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa" // Closed Visor
            };
        };
    };// Close 22nd_HelmSnow_Closed

    class 22nd_HelmSnow_Eye : CH252_Helmet_Base{
        scope = 2;
        scopeArsenal = 2;
        author = "Warhound Mod Team";
        displayName = "[22nd] CHC252/W Eyepiece";
        model = "MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
        picture = "\W_Uniform\W_Helmets\22ndRDF.paa";//Add Icon
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
            "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Snow.paa", // Helmet Texture
            "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Snow.paa", // Helmet Texture
            "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Snow.paa", // Helmet Texture
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Base\VacSeal_Base_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa",
        };
        class XtdGearInfo
        {
            model = "WSnow_AAE";
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
                "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Snow.paa", // Helmet Texture
                "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Snow.paa", // Helmet Texture
                "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Snow.paa", // Helmet Texture
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Eyepiece
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Eyepiece Glass
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Visor Glass
                "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Base\VacSeal_Base_CO.paa", // Vac Collar
                "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa", // Face Module Chin
                "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa" // Closed Visor
            };
        };
    };// Close 22nd_HelmSnow_Eye
        class 22nd_HelmSnow_Visor : CH252_Helmet_Base{
            scope = 2;
            scopeArsenal = 2;
            author = "Warhound Mod Team";
            displayName = "[22nd] CHC252/W Visor";
            model = "MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
            picture = "\W_Uniform\W_Helmets\22ndRDF.paa";//Add Icon
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
                "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Snow.paa", // Helmet Texture
                "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Snow.paa", // Helmet Texture
                "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Snow.paa", // Helmet Texture
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Eyepiece
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Eyepiece Glass
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Visor Glass
                "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Base\VacSeal_Base_CO.paa", // Vac Collar
                "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa", // Face Module Chin
                "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa" // Closed Visor
            };
            class XtdGearInfo
            {
                model = "WSnow_AAE";
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
                            "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Snow.paa", // Helmet Texture
                            "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Snow.paa", // Helmet Texture
                            "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Snow.paa", // Helmet Texture
                            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Eyepiece
                            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Eyepiece Glass
                            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Visor Glass
                            "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Base\VacSeal_Base_CO.paa", // Vac Collar
                            "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa", // Face Module Chin
                            "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa" // Closed Visor
                        };
                };
        };// Close 22nd_HelmSnow_Visor

    //Start Medical
    // Most comments misnamed due to copy/paste from above
    //Textures referencing old - will be updated in future when I have the texture 

    class 22nd_HelmBase_Open_med : CH252_Helmet_Base{
        scope = 2;
        scopeArsenal = 2;
        author = "Warhound Mod Team";
        displayName = "[22nd] CHC252";
        model = "MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
        picture = "\W_Uniform\W_Helmets\22ndRDF.paa";//Add Icon
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
            "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Base_Med.paa",
            "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Base_Med.paa",
            "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Base_Med.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Base\VacSeal_Base_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa",
        };
        class XtdGearInfo
        {
            model = "WBase_AAE";
            Variants = "Open";
            Decal = "Medical";
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
                "Helmet_Chin",
                "Closed_Visor"
            };
            hiddenSelectionsTextures[] =
            {
                "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Base_Med.paa", // Helmet Texture
                "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Base_Med.paa", // Helmet Texture
                "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Base_Med.paa", // Helmet Texture
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Eyepiece
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Eyepiece Glass
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Visor Glass
                "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Base\VacSeal_Base_CO.paa", // Vac Collar
                "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa", // Face Module Chin
                "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa" // Closed Visor
            };
        };
    };// Close 22nd_HelmBase_Open

    class 22nd_HelmBase_Closed_med : CH252_Helmet_Base{
        scope = 2;
        scopeArsenal = 2;
        author = "Warhound Mod Team";
        displayName = "[22nd] ECHC252";
        model = "MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
        picture = "\W_Uniform\W_Helmets\22ndRDF.paa";//Add Icon
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
            model = "WBase_AAE";
            Variants = "Closed";
            Decal = "Medical";
        };
        hiddenSelectionsTextures[] =
        {
            "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Base_Med.paa",
            "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Base_Med.paa",
            "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Base_Med.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Base\VacSeal_Brown_CO.paa",
            "W_Uniform\W_Helmets\Infantry\22nd_Base_Helmet_Lower.paa",
            "W_Uniform\W_Helmets\Infantry\22nd_Base_Helmet_Lower.paa",
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
                "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Base_Med.paa", // Helmet Texture
                "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Base_Med.paa", // Helmet Texture
                "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Base_Med.paa", // Helmet Texture
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Eyepiece
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Eyepiece Glass
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Visor Glass
                "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Base\VacSeal_Base_CO.paa", // Vac Collar
                "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa", // Face Module Chin
                "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa" // Closed Visor
            };
        };
    };// Close 22nd_HelmBase_Closed

    class 22nd_HelmBase_Eye_med : CH252_Helmet_Base{
        scope = 2;
        scopeArsenal = 2;
        author = "Warhound Mod Team";
        displayName = "[22nd] CHC252 Eyepiece";
        model = "MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
        picture = "\W_Uniform\W_Helmets\22ndRDF.paa";//Add Icon
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
            model = "WBase_AAE";
            Variants = "Eyepiece";
            Decal = "Medical";
        };
        hiddenSelectionsTextures[] =
            {
                "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Base_Med.paa",
                "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Base_Med.paa",
                "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Base_Med.paa",
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
                "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Base\VacSeal_Base_CO.paa",
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
                    //"EyePiece",
                    //"EyePieceGlass",
                    "VisorGlasses",
                    "VaccumCollar",
                    "Helmet_Chin",
                    "Closed_Visor"
                };
                hiddenSelectionsTextures[] =
                {
                    "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Base_Med.paa", // Helmet Texture
                    "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Base_Med.paa", // Helmet Texture
                    "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Base_Med.paa", // Helmet Texture
                    "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Eyepiece
                    "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Eyepiece Glass
                    "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Visor Glass
                    "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Base\VacSeal_Base_CO.paa", // Vac Collar
                    "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa", // Face Module Chin
                    "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa" // Closed Visor
                };
            };
        };// Close 22nd_HelmBase_Eye

    class 22nd_HelmBase_Visor_med : CH252_Helmet_Base{
        scope = 2;
        scopeArsenal = 2;
        author = "Warhound Mod Team";
        displayName = "[22nd] CHC252 Visor";
        model = "MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
        picture = "\W_Uniform\W_Helmets\22ndRDF.paa";//Add Icon
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
            model = "WBase_AAE";
            Variants = "Visor";
            Decal = "Medical";
        };
        hiddenSelectionsTextures[] =
        {
            "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Base_Med.paa",
            "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Base_Med.paa",
            "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Base_Med.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Base\VacSeal_Base_CO.paa",
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
                //"VisorGlasses",
                "VaccumCollar",
                "Helmet_Chin",
                "Closed_Visor"
            };
            hiddenSelectionsTextures[] =
            {
                "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Base_Med.paa",
                "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Base_Med.paa",
                "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Base_Med.paa", // Helmet Texture
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Eyepiece
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Eyepiece Glass
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Visor Glass
                "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Base\VacSeal_Base_CO.paa", // Vac Collar
                "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa", // Face Module Chin
                "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa" // Closed Visor
            };
        };
    };// Close 22nd_HelmBase_Visor

        // Begin Winterized Choices

    class 22nd_HelmSnow_Open_med : CH252_Helmet_Base{
        scope = 2;
        scopeArsenal = 2;
        author = "Warhound Mod Team";
        displayName = "[22nd] CHC252/W";
        model = "MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
        picture = "\W_Uniform\W_Helmets\22ndRDF.paa";//Add Icon
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
            "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Snow_Med.paa",
            "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Snow_Med.paa",
            "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Snow_Med.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Base\VacSeal_Base_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa",
        };
        class XtdGearInfo
        {
            model = "WSnow_AAE";
            Variants = "Open";
            Decal = "Medical";
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
                "Helmet_Chin",
                "Closed_Visor"
            };
            hiddenSelectionsTextures[] =
            {
                "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Snow_Med.paa", // Helmet Texture
                "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Snow_Med.paa", // Helmet Texture
                "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Snow_Med.paa", // Helmet Texture
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Eyepiece
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Eyepiece Glass
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Visor Glass
                "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Base\VacSeal_Base_CO.paa", // Vac Collar
                "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa", // Face Module Chin
                "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa" // Closed Visor
            };
        };
    };  // Close 22nd_HelmSnow_Open

    class 22nd_HelmSnow_Closed_med : CH252_Helmet_Base{
        scope = 2;
        scopeArsenal = 2;
        author = "Warhound Mod Team";
        displayName = "[22nd] ECHC252/W";
        model = "MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
        picture = "\W_Uniform\W_Helmets\22ndRDF.paa";//Add Icon
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
            model = "WSnow_AAE";
            Variants = "Closed";
            Decal = "Medical";
        };
        hiddenSelectionsTextures[] =
        {
            "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Snow_Med.paa",
            "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Snow_Med.paa",
            "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Snow_Med.paa",
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
                "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Snow_Med.paa", // Helmet Texture
                "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Snow_Med.paa", // Helmet Texture
                "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Snow_Med.paa", // Helmet Texture
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Eyepiece
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Eyepiece Glass
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Visor Glass
                "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Base\VacSeal_Base_CO.paa", // Vac Collar
                "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa", // Face Module Chin
                "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa" // Closed Visor
            };
        };
    };// Close 22nd_HelmSnow_Closed

    class 22nd_HelmSnow_Eye_med : CH252_Helmet_Base{
        scope = 2;
        scopeArsenal = 2;
        author = "Warhound Mod Team";
        displayName = "[22nd] CHC252/W Eyepiece";
        model = "MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
        picture = "\W_Uniform\W_Helmets\22ndRDF.paa";//Add Icon
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
            "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Snow_Med.paa",
            "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Snow_Med.paa",
            "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Snow_Med.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Base\VacSeal_Base_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa",
        };
        class XtdGearInfo
        {
            model = "WSnow_AAE";
            Variants = "Eyepiece";
            Decal = "Medical";
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
                "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Snow_Med.paa", // Helmet Texture
                "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Snow_Med.paa", // Helmet Texture
                "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Snow_Med.paa", // Helmet Texture
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Eyepiece
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Eyepiece Glass
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Visor Glass
                "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Base\VacSeal_Base_CO.paa", // Vac Collar
                "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa", // Face Module Chin
                "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa" // Closed Visor
            };
        };
    };// Close 22nd_HelmSnow_Eye

    class 22nd_HelmSnow_Visor_med : CH252_Helmet_Base{
        scope = 2;
        scopeArsenal = 2;
        author = "Warhound Mod Team";
        displayName = "[22nd] CHC252/W Visor";
        model = "MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
        picture = "\W_Uniform\W_Helmets\22ndRDF.paa";//Add Icon
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
            model = "WSnow_AAE";
            Variants = "Visor";
            Decal = "Medical";
        };
        hiddenSelectionsTextures[] =
        {
            "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Snow_Med.paa",
            "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Snow_Med.paa",
            "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Snow_Med.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Base\VacSeal_Base_CO.paa",
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
                //"VisorGlasses",
                "VaccumCollar",
                "Helmet_Chin",
                "Closed_Visor"
            };
            hiddenSelectionsTextures[] =
            {
                "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Snow_Med.paa", // Helmet Texture
                "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Snow_Med.paa", // Helmet Texture
                "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Snow_Med.paa", // Helmet Texture
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Eyepiece
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Eyepiece Glass
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Visor Glass
                "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Base\VacSeal_Base_CO.paa", // Vac Collar
                "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa", // Face Module Chin
                "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa" // Closed Visor
            };
        };
    };// Close 22nd_HelmSnow_Visor
    
    // Begin Aviation Helmets
    class 22nd_VX19_Urban : OPTRE_FC_VX19_Helmet{
        scope = 2;
        scopeArsenal = 2;
        author = "Warhound Mod Team";
        displayName = "[22nd] VX-19 Urban";
        model = "\OPTRE_FC_Units\Marines\h3_pilothelmet.p3d";
        picture = "\W_Uniform\W_Helmets\22ndRDF.paa";

        class XtdGearInfo
        {
            model = "22nd_VX19";
            Camouflage = "Urban";
            Variant = "Standard";
        };

        hiddenSelectionsTextures[] =
        {
            "\W_Uniform\W_Helmets\Aviation\Orca\22nd_Air_Helm_Urban_Co.paa",
            "OPTRE_FC_Units\Marines\Data\h3_pilothelmet_visor_co.paa"
        };
    };
    class 22nd_VX19_Woodland : OPTRE_FC_VX19_Helmet{
        scope = 2;
        scopeArsenal = 2;
        author = "Warhound Mod Team";
        displayName = "[22nd] VX-19 Woodland";
        model = "\OPTRE_FC_Units\Marines\h3_pilothelmet.p3d";
        picture = "\W_Uniform\W_Helmets\22ndRDF.paa";

        class XtdGearInfo
        {
            model = "22nd_VX19";
            Camouflage = "Woodland";
            Variant = "Standard";
        };

        hiddenSelectionsTextures[] =
        {
            "\W_Uniform\W_Helmets\Aviation\Orca\22nd_Air_Helm_Woodland_Co.paa",
            "OPTRE_FC_Units\Marines\Data\h3_pilothelmet_visor_co.paa"
        };
    };
    class 22nd_VX19_Winter : OPTRE_FC_VX19_Helmet{
        scope = 2;
        scopeArsenal = 2;
        author = "Warhound Mod Team";
        displayName = "[22nd] VX-19 Winter";
        model = "\OPTRE_FC_Units\Marines\h3_pilothelmet.p3d";
        picture = "\W_Uniform\W_Helmets\22ndRDF.paa";

        class XtdGearInfo
        {
            model = "22nd_VX19";
            Camouflage = "Winter";
            Variant = "Standard";
        };

        hiddenSelectionsTextures[] =
        {
            "\W_Uniform\W_Helmets\Aviation\Orca\22nd_Air_Helm_Snow_Co.paa",
            "optre_fc_units\marines\data\h3_pilothelmet_visor_co.paa",
        };
    };
        class 22nd_VX19_Arid : OPTRE_FC_VX19_Helmet{
        scope = 2;
        scopeArsenal = 2;
        author = "Warhound Mod Team";
        displayName = "[22nd] VX-19 Arid";
        model = "\OPTRE_FC_Units\Marines\h3_pilothelmet.p3d";
        picture = "\W_Uniform\W_Helmets\22ndRDF.paa";

        class XtdGearInfo
        {
            model = "22nd_VX19";
            Camouflage = "Arid";
            Variant = "Standard";
        };

        hiddenSelectionsTextures[] =
        {
            "\W_Uniform\W_Helmets\Aviation\Orca\22nd_Air_Helm_Arid_Co.paa",
            "optre_fc_units\marines\data\h3_pilothelmet_visor_co.paa",
        };
    };
        class 22nd_VX19_Urban_HMHD : OPTRE_FC_VX19_Helmet{
        scope = 2;
        scopeArsenal = 2;
        author = "Warhound Mod Team";
        displayName = "[22nd] VX-19 Urban (Hammerhead)";
        model = "\OPTRE_FC_Units\Marines\h3_pilothelmet.p3d";
        picture = "\W_Uniform\W_Helmets\22ndRDF.paa";

        class XtdGearInfo
        {
            model = "22nd_VX19";
            Camouflage = "Urban";
            Variant = "HMHD";
        };

        hiddenSelectionsTextures[] =
        {
            "\W_Uniform\W_Helmets\Aviation\Hammerhead\22nd_Air_Helm_Urban_HMHD_Co.paa",
            "OPTRE_FC_Units\Marines\Data\h3_pilothelmet_visor_co.paa"
        };
    };
    class 22nd_VX19_Woodland_HMHD : OPTRE_FC_VX19_Helmet{
        scope = 2;
        scopeArsenal = 2;
        author = "Warhound Mod Team";
        displayName = "[22nd] VX-19 Woodland (Hammerhead)";
        model = "\OPTRE_FC_Units\Marines\h3_pilothelmet.p3d";
        picture = "\W_Uniform\W_Helmets\22ndRDF.paa";

        class XtdGearInfo
        {
            model = "22nd_VX19";
            Camouflage = "Woodland";
            Variant = "HMHD";
        };

        hiddenSelectionsTextures[] =
        {
            "\W_Uniform\W_Helmets\Aviation\Hammerhead\22nd_Air_Helm_Woodland_HMHD_Co.paa",
            "OPTRE_FC_Units\Marines\Data\h3_pilothelmet_visor_co.paa"
        };
    };
    class 22nd_VX19_Winter_HMHD : OPTRE_FC_VX19_Helmet{
        scope = 2;
        scopeArsenal = 2;
        author = "Warhound Mod Team";
        displayName = "[22nd] VX-19 Winter (Hammerhead)";
        model = "\OPTRE_FC_Units\Marines\h3_pilothelmet.p3d";
        picture = "\W_Uniform\W_Helmets\22ndRDF.paa";

        class XtdGearInfo
        {
            model = "22nd_VX19";
            Camouflage = "Winter";
            Variant = "HMHD";
        };

        hiddenSelectionsTextures[] =
        {
            "\W_Uniform\W_Helmets\Aviation\Hammerhead\22nd_Air_Helm_Snow_HMHD_Co.paa",
            "optre_fc_units\marines\data\h3_pilothelmet_visor_co.paa",
        };
    };
        class 22nd_VX19_Arid_HMHD : OPTRE_FC_VX19_Helmet{
        scope = 2;
        scopeArsenal = 2;
        author = "Warhound Mod Team";
        displayName = "[22nd] VX-19 Arid (Hammerhead)";
        model = "\OPTRE_FC_Units\Marines\h3_pilothelmet.p3d";
        picture = "\W_Uniform\W_Helmets\22ndRDF.paa";

        class XtdGearInfo
        {
            model = "22nd_VX19";
            Camouflage = "Arid";
            Variant = "HMHD";
        };

        hiddenSelectionsTextures[] =
        {
            "\W_Uniform\W_Helmets\Aviation\Hammerhead\22nd_Air_Helm_Arid_HMHD_Co.paa",
            "optre_fc_units\marines\data\h3_pilothelmet_visor_co.paa",
        };
    };

    /*
    * Begin Custom Helmets
    */
    //Begin 22_HelmCustom_Orca1
    class 22nd_HelmCustom_Manta_Urban : OPTRE_FC_VX19_Helmet
    {
        scope = 2;
        scopeArsenal = 2;
        author = "Warhound Mod Team";
        displayName = "[22nd] VX-19 Manta (Urban)";
        model = "\OPTRE_FC_Units\Marines\h3_pilothelmet.p3d";
        picture = "\W_Uniform\W_Helmets\22ndRDF.paa";

        class XtdGearInfo
        {
            model = "22nd_VX19_Custom";
            Camouflage = "Urban";
            Variant = "Manta";
        };

        hiddenSelectionsTextures[] =
        {
            "\W_Uniform\W_Helmets\Customs\Aviation\Manta\22nd_Air_Helm_Manta_Urban_Co.paa",
            "optre_fc_units\marines\data\h3_pilothelmet_visor_co.paa"
        };
    };

    class 22nd_HelmCustom_Manta_Woodland : OPTRE_FC_VX19_Helmet
    {
        scope = 2;
        scopeArsenal = 2;
        author = "Warhound Mod Team";
        displayName = "[22nd] VX-19 Manta (Woodland)";
        model = "\OPTRE_FC_Units\Marines\h3_pilothelmet.p3d";
        picture = "\W_Uniform\W_Helmets\22ndRDF.paa";

        class XtdGearInfo
        {
            model = "22nd_VX19_Custom";
            Camouflage = "Woodland";
            Variant = "Manta";
        };

        hiddenSelectionsTextures[] =
        {
            "\W_Uniform\W_Helmets\Customs\Aviation\Manta\22nd_Air_Helm_Manta_Woodland_Co.paa",
            "optre_fc_units\marines\data\h3_pilothelmet_visor_co.paa"
        };
    };

    class 22nd_HelmCustom_Manta_Arid : OPTRE_FC_VX19_Helmet
    {
        scope = 2;
        scopeArsenal = 2;
        author = "Warhound Mod Team";
        displayName = "[22nd] VX-19 Manta (Arid)";
        model = "\OPTRE_FC_Units\Marines\h3_pilothelmet.p3d";
        picture = "\W_Uniform\W_Helmets\22ndRDF.paa";

        class XtdGearInfo
        {
            model = "22nd_VX19_Custom";
            Camouflage = "Arid";
            Variant = "Manta";
        };

        hiddenSelectionsTextures[] =
        {
            "\W_Uniform\W_Helmets\Customs\Aviation\Manta\22nd_Air_Helm_Manta_Arid_Co.paa",
            "optre_fc_units\marines\data\h3_pilothelmet_visor_co.paa"
        };
    };

    class 22nd_HelmCustom_Manta_Snow : OPTRE_FC_VX19_Helmet
    {
        scope = 2;
        scopeArsenal = 2;
        author = "Warhound Mod Team";
        displayName = "[22nd] VX-19 Manta (Snow)";
        model = "\OPTRE_FC_Units\Marines\h3_pilothelmet.p3d";
        picture = "\W_Uniform\W_Helmets\22ndRDF.paa";

        class XtdGearInfo
        {
            model = "22nd_VX19_Custom";
            Camouflage = "Winter";
            Variant = "Manta";
        };

        hiddenSelectionsTextures[] =
        {
            "\W_Uniform\W_Helmets\Customs\Aviation\Manta\22nd_Air_Helm_Manta_Snow_Co.paa",
            "optre_fc_units\marines\data\h3_pilothelmet_visor_co.paa"
        };
    };//Close 22nd_HelmCustom_Orca1
    //Begin 22_HelmCustom_Orca2
    class 22nd_HelmCustom_Cuban_Urban : OPTRE_FC_VX19_Helmet
    {
        scope = 2;
        scopeArsenal = 2;
        author = "Warhound Mod Team";
        displayName = "[22nd] VX-19 Cuban (Urban)";
        model = "\OPTRE_FC_Units\Marines\h3_pilothelmet.p3d";
        picture = "\W_Uniform\W_Helmets\22ndRDF.paa";

        class XtdGearInfo
        {
            model = "22nd_VX19_Custom";
            Camouflage = "Urban";
            Variant = "Cuban";
        };

        hiddenSelectionsTextures[] =
        {
            "\W_Uniform\W_Helmets\Customs\Aviation\Cuban\22nd_Air_Helm_Cuban_Urban_Co.paa",
            "optre_fc_units\marines\data\h3_pilothelmet_visor_co.paa"
        };
    };

    class 22nd_HelmCustom_Cuban_Woodland : OPTRE_FC_VX19_Helmet
    {
        scope = 2;
        scopeArsenal = 2;
        author = "Warhound Mod Team";
        displayName = "[22nd] VX-19 Cuban (Woodland)";
        model = "\OPTRE_FC_Units\Marines\h3_pilothelmet.p3d";
        picture = "\W_Uniform\W_Helmets\22ndRDF.paa";

        class XtdGearInfo
        {
            model = "22nd_VX19_Custom";
            Camouflage = "Woodland";
            Variant = "Cuban";
        };

        hiddenSelectionsTextures[] =
        {
            "\W_Uniform\W_Helmets\Customs\Aviation\Cuban\22nd_Air_Helm_Cuban_Woodland_Co.paa",
            "optre_fc_units\marines\data\h3_pilothelmet_visor_co.paa"
        };
    };

    class 22nd_HelmCustom_Cuban_Arid : OPTRE_FC_VX19_Helmet
    {
        scope = 2;
        scopeArsenal = 2;
        author = "Warhound Mod Team";
        displayName = "[22nd] VX-19 Cuban (Arid)";
        model = "\OPTRE_FC_Units\Marines\h3_pilothelmet.p3d";
        picture = "\W_Uniform\W_Helmets\22ndRDF.paa";

        class XtdGearInfo
        {
            model = "22nd_VX19_Custom";
            Camouflage = "Arid";
            Variant = "Cuban";
        };

        hiddenSelectionsTextures[] =
        {
            "\W_Uniform\W_Helmets\Customs\Aviation\Cuban\22nd_Air_Helm_Cuban_Arid_Co.paa",
            "optre_fc_units\marines\data\h3_pilothelmet_visor_co.paa"
        };
    };

    class 22nd_HelmCustom_Cuban_Snow : OPTRE_FC_VX19_Helmet
    {
        scope = 2;
        scopeArsenal = 2;
        author = "Warhound Mod Team";
        displayName = "[22nd] VX-19 Cuban (Snow)";
        model = "\OPTRE_FC_Units\Marines\h3_pilothelmet.p3d";
        picture = "\W_Uniform\W_Helmets\22ndRDF.paa";

        class XtdGearInfo
        {
            model = "22nd_VX19_Custom";
            Camouflage = "Winter";
            Variant = "Cuban";
        };

        hiddenSelectionsTextures[] =
        {
            "\W_Uniform\W_Helmets\Customs\Aviation\Cuban\22nd_Air_Helm_Cuban_Snow_Co.paa",
            "optre_fc_units\marines\data\h3_pilothelmet_visor_co.paa"
        };
    };//Close 22nd_HelmCustom_Orca2
    //Begin 22_HelmCustom_Orca3
    class 22nd_HelmCustom_Astro_Urban : OPTRE_FC_VX19_Helmet
    {
        scope = 2;
        scopeArsenal = 2;
        author = "Warhound Mod Team";
        displayName = "[22nd] VX-19 Astro (Urban)";
        model = "\OPTRE_FC_Units\Marines\h3_pilothelmet.p3d";
        picture = "\W_Uniform\W_Helmets\22ndRDF.paa";

        class XtdGearInfo
        {
            model = "22nd_VX19_Custom";
            Camouflage = "Urban";
            Variant = "Astro";
        };

        hiddenSelectionsTextures[] =
        {
            "\W_Uniform\W_Helmets\Customs\Aviation\Astro\22nd_Air_Helm_Astro_Urban_Co.paa",
            "\W_Uniform\W_Helmets\Customs\Aviation\Astro\h3_pilothelmet_visor_crack_co.paa"
        };
    };

    class 22nd_HelmCustom_Astro_Woodland : OPTRE_FC_VX19_Helmet
    {
        scope = 2;
        scopeArsenal = 2;
        author = "Warhound Mod Team";
        displayName = "[22nd] VX-19 Astro (Woodland)";
        model = "\OPTRE_FC_Units\Marines\h3_pilothelmet.p3d";
        picture = "\W_Uniform\W_Helmets\22ndRDF.paa";

        class XtdGearInfo
        {
            model = "22nd_VX19_Custom";
            Camouflage = "Woodland";
            Variant = "Astro";
        };

        hiddenSelectionsTextures[] =
        {
            "\W_Uniform\W_Helmets\Customs\Aviation\Astro\22nd_Air_Helm_Astro_Woodland_Co.paa",
            "\W_Uniform\W_Helmets\Customs\Aviation\Astro\h3_pilothelmet_visor_crack_co.paa"
        };
    };

    class 22nd_HelmCustom_Astro_Arid : OPTRE_FC_VX19_Helmet
    {
        scope = 2;
        scopeArsenal = 2;
        author = "Warhound Mod Team";
        displayName = "[22nd] VX-19 Astro (Arid)";
        model = "\OPTRE_FC_Units\Marines\h3_pilothelmet.p3d";
        picture = "\W_Uniform\W_Helmets\22ndRDF.paa";

        class XtdGearInfo
        {
            model = "22nd_VX19_Custom";
            Camouflage = "Arid";
            Variant = "Astro";
        };

        hiddenSelectionsTextures[] =
        {
            "\W_Uniform\W_Helmets\Customs\Aviation\Astro\22nd_Air_Helm_Astro_Arid_Co.paa",
            "\W_Uniform\W_Helmets\Customs\Aviation\Astro\h3_pilothelmet_visor_crack_co.paa"
        };
    };

    class 22nd_HelmCustom_Astro_Snow : OPTRE_FC_VX19_Helmet
    {
        scope = 2;
        scopeArsenal = 2;
        author = "Warhound Mod Team";
        displayName = "[22nd] VX-19 Astro (Snow)";
        model = "\OPTRE_FC_Units\Marines\h3_pilothelmet.p3d";
        picture = "\W_Uniform\W_Helmets\22ndRDF.paa";

        class XtdGearInfo
        {
            model = "22nd_VX19_Custom";
            Camouflage = "Winter";
            Variant = "Astro";
        };

        hiddenSelectionsTextures[] =
        {
            "\W_Uniform\W_Helmets\Customs\Aviation\Astro\22nd_Air_Helm_Astro_Snow_Co.paa",
            "\W_Uniform\W_Helmets\Customs\Aviation\Astro\h3_pilothelmet_visor_crack_co.paa"
        };
    };//Close 22nd_HelmCustom_Orca3
    //Begin 22_HelmCustom_Orca4
    class 22nd_HelmCustom_Evans_Urban : OPTRE_FC_VX19_Helmet
    {
        scope = 2;
        scopeArsenal = 2;
        author = "Warhound Mod Team";
        displayName = "[22nd] VX-19 Evans (Urban)";
        model = "\OPTRE_FC_Units\Marines\h3_pilothelmet.p3d";
        picture = "\W_Uniform\W_Helmets\22ndRDF.paa";

        class XtdGearInfo
        {
            model = "22nd_VX19_Custom";
            Camouflage = "Urban";
            Variant = "Evans";
        };

        hiddenSelectionsTextures[] =
        {
            "\W_Uniform\W_Helmets\Customs\Aviation\Evans\22nd_Air_Helm_Evans_Urban_Co.paa",
            "optre_fc_units\marines\data\h3_pilothelmet_visor_co.paa"
        };
    };

    class 22nd_HelmCustom_Evans_Woodland : OPTRE_FC_VX19_Helmet
    {
        scope = 2;
        scopeArsenal = 2;
        author = "Warhound Mod Team";
        displayName = "[22nd] VX-19 Evans (Woodland)";
        model = "\OPTRE_FC_Units\Marines\h3_pilothelmet.p3d";
        picture = "\W_Uniform\W_Helmets\22ndRDF.paa";

        class XtdGearInfo
        {
            model = "22nd_VX19_Custom";
            Camouflage = "Woodland";
            Variant = "Evans";
        };

        hiddenSelectionsTextures[] =
        {
            "\W_Uniform\W_Helmets\Customs\Aviation\Evans\22nd_Air_Helm_Evans_Woodland_Co.paa",
            "optre_fc_units\marines\data\h3_pilothelmet_visor_co.paa"
        };
    };

    class 22nd_HelmCustom_Evans_Arid : OPTRE_FC_VX19_Helmet
    {
        scope = 2;
        scopeArsenal = 2;
        author = "Warhound Mod Team";
        displayName = "[22nd] VX-19 Evans (Arid)";
        model = "\OPTRE_FC_Units\Marines\h3_pilothelmet.p3d";
        picture = "\W_Uniform\W_Helmets\22ndRDF.paa";

        class XtdGearInfo
        {
            model = "22nd_VX19_Custom";
            Camouflage = "Arid";
            Variant = "Evans";
        };

        hiddenSelectionsTextures[] =
        {
            "\W_Uniform\W_Helmets\Customs\Aviation\Evans\22nd_Air_Helm_Evans_Arid_Co.paa",
            "optre_fc_units\marines\data\h3_pilothelmet_visor_co.paa"
        };
    };

    class 22nd_HelmCustom_Evans_Snow : OPTRE_FC_VX19_Helmet
    {
        scope = 2;
        scopeArsenal = 2;
        author = "Warhound Mod Team";
        displayName = "[22nd] VX-19 Evans (Snow)";
        model = "\OPTRE_FC_Units\Marines\h3_pilothelmet.p3d";
        picture = "\W_Uniform\W_Helmets\22ndRDF.paa";

        class XtdGearInfo
        {
            model = "22nd_VX19_Custom";
            Camouflage = "Winter";
            Variant = "Evans";
        };

        hiddenSelectionsTextures[] =
        {
            "\W_Uniform\W_Helmets\Customs\Aviation\Evans\22nd_Air_Helm_Evans_Snow_Co.paa",
            "optre_fc_units\marines\data\h3_pilothelmet_visor_co.paa"
        };
    };//Close 22nd_HelmCustom_Orca4
    //Begin 22_HelmCustom_Orca5
    class 22nd_HelmCustom_Kamea_Urban : OPTRE_FC_VX19_Helmet
    {
        scope = 2;
        scopeArsenal = 2;
        author = "Warhound Mod Team";
        displayName = "[22nd] VX-19 Kamea (Urban)";
        model = "\OPTRE_FC_Units\Marines\h3_pilothelmet.p3d";
        picture = "\W_Uniform\W_Helmets\22ndRDF.paa";

        class XtdGearInfo
        {
            model = "22nd_VX19_Custom";
            Camouflage = "Urban";
            Variant = "Kamea";
        };

        hiddenSelectionsTextures[] =
        {
            "\W_Uniform\W_Helmets\Customs\Aviation\Kamea\22nd_Air_Helm_Kamea_Urban_Co.paa",
            "optre_fc_units\marines\data\h3_pilothelmet_visor_co.paa"
        };
    };

    class 22nd_HelmCustom_Kamea_Woodland : OPTRE_FC_VX19_Helmet
    {
        scope = 2;
        scopeArsenal = 2;
        author = "Warhound Mod Team";
        displayName = "[22nd] VX-19 Kamea (Woodland)";
        model = "\OPTRE_FC_Units\Marines\h3_pilothelmet.p3d";
        picture = "\W_Uniform\W_Helmets\22ndRDF.paa";

        class XtdGearInfo
        {
            model = "22nd_VX19_Custom";
            Camouflage = "Woodland";
            Variant = "Kamea";
        };

        hiddenSelectionsTextures[] =
        {
            "\W_Uniform\W_Helmets\Customs\Aviation\Kamea\22nd_Air_Helm_Kamea_Woodland_Co.paa",
            "optre_fc_units\marines\data\h3_pilothelmet_visor_co.paa"
        };
    };

    class 22nd_HelmCustom_Kamea_Arid : OPTRE_FC_VX19_Helmet
    {
        scope = 2;
        scopeArsenal = 2;
        author = "Warhound Mod Team";
        displayName = "[22nd] VX-19 Kamea (Arid)";
        model = "\OPTRE_FC_Units\Marines\h3_pilothelmet.p3d";
        picture = "\W_Uniform\W_Helmets\22ndRDF.paa";

        class XtdGearInfo
        {
            model = "22nd_VX19_Custom";
            Camouflage = "Arid";
            Variant = "Kamea";
        };

        hiddenSelectionsTextures[] =
        {
            "\W_Uniform\W_Helmets\Customs\Aviation\Kamea\22nd_Air_Helm_Kamea_Arid_Co.paa",
            "optre_fc_units\marines\data\h3_pilothelmet_visor_co.paa"
        };
    };

    class 22nd_HelmCustom_Kamea_Snow : OPTRE_FC_VX19_Helmet
    {
        scope = 2;
        scopeArsenal = 2;
        author = "Warhound Mod Team";
        displayName = "[22nd] VX-19 Kamea (Snow)";
        model = "\OPTRE_FC_Units\Marines\h3_pilothelmet.p3d";
        picture = "\W_Uniform\W_Helmets\22ndRDF.paa";

        class XtdGearInfo
        {
            model = "22nd_VX19_Custom";
            Camouflage = "Winter";
            Variant = "Kamea";
        };

        hiddenSelectionsTextures[] =
        {
            "\W_Uniform\W_Helmets\Customs\Aviation\Kamea\22nd_Air_Helm_Kamea_Snow_Co.paa",
            "optre_fc_units\marines\data\h3_pilothelmet_visor_co.paa"
        };
    };//Close 22nd_HelmCustom_Orca5
    //Begin 22_HelmCustom_HMHD1
    class 22nd_HelmCustom_Ras_Urban : OPTRE_FC_VX19_Helmet
    {
        scope = 2;
        scopeArsenal = 2;
        author = "Warhound Mod Team";
        displayName = "[22nd] VX-19 Ras (Urban)";
        model = "\OPTRE_FC_Units\Marines\h3_pilothelmet.p3d";
        picture = "\W_Uniform\W_Helmets\22ndRDF.paa";

        class XtdGearInfo
        {
            model = "22nd_VX19_Custom";
            Camouflage = "Urban";
            Variant = "Ras";
        };

        hiddenSelectionsTextures[] =
        {
            "\W_Uniform\W_Helmets\Customs\Aviation\Ras\22nd_Air_Helm_Ras_Urban_Co.paa",
            "optre_fc_units\marines\data\h3_pilothelmet_visor_co.paa"
        };
    };

    class 22nd_HelmCustom_Ras_Woodland : OPTRE_FC_VX19_Helmet
    {
        scope = 2;
        scopeArsenal = 2;
        author = "Warhound Mod Team";
        displayName = "[22nd] VX-19 Ras (Woodland)";
        model = "\OPTRE_FC_Units\Marines\h3_pilothelmet.p3d";
        picture = "\W_Uniform\W_Helmets\22ndRDF.paa";

        class XtdGearInfo
        {
            model = "22nd_VX19_Custom";
            Camouflage = "Woodland";
            Variant = "Ras";
        };

        hiddenSelectionsTextures[] =
        {
            "\W_Uniform\W_Helmets\Customs\Aviation\Ras\22nd_Air_Helm_Ras_Woodland_Co.paa",
            "optre_fc_units\marines\data\h3_pilothelmet_visor_co.paa"
        };
    };

    class 22nd_HelmCustom_Ras_Arid : OPTRE_FC_VX19_Helmet
    {
        scope = 2;
        scopeArsenal = 2;
        author = "Warhound Mod Team";
        displayName = "[22nd] VX-19 Ras (Arid)";
        model = "\OPTRE_FC_Units\Marines\h3_pilothelmet.p3d";
        picture = "\W_Uniform\W_Helmets\22ndRDF.paa";

        class XtdGearInfo
        {
            model = "22nd_VX19_Custom";
            Camouflage = "Arid";
            Variant = "Ras";
        };

        hiddenSelectionsTextures[] =
        {
            "\W_Uniform\W_Helmets\Customs\Aviation\Ras\22nd_Air_Helm_Ras_Arid_Co.paa",
            "optre_fc_units\marines\data\h3_pilothelmet_visor_co.paa"
        };
    };

    class 22nd_HelmCustom_Ras_Snow : OPTRE_FC_VX19_Helmet
    {
        scope = 2;
        scopeArsenal = 2;
        author = "Warhound Mod Team";
        displayName = "[22nd] VX-19 Ras (Snow)";
        model = "\OPTRE_FC_Units\Marines\h3_pilothelmet.p3d";
        picture = "\W_Uniform\W_Helmets\22ndRDF.paa";

        class XtdGearInfo
        {
            model = "22nd_VX19_Custom";
            Camouflage = "Winter";
            Variant = "Ras";
        };

        hiddenSelectionsTextures[] =
        {
            "\W_Uniform\W_Helmets\Customs\Aviation\Ras\22nd_Air_Helm_Ras_Snow_Co.paa",
            "optre_fc_units\marines\data\h3_pilothelmet_visor_co.paa"
        };
    };//Close 22nd_HelmCustom_HMHD1
   // Begin 22nd_HelmCustom_Alloy
   class 22nd_HelmCustom_Alloy : CH252_Helmet_Base {
        scope = 2;
        scopeArsenal = 2;
        author = "Warhound Mod Team";
        displayName = "[22nd] CHC252 Custom Alloy";
        model = "MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
        picture = "\W_Uniform\W_Helmets\22ndRDF.paa";//Add Icon
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
            model = "WCustom_AAE";
            Variants = "Open";
            Custom = "Alloy";
        };
        hiddenSelectionsTextures[] =
        {
            "\W_Uniform\W_Helmets\Customs\22nd_HelmCustom_Alloy.paa",
            "\W_Uniform\W_Helmets\Customs\22nd_HelmCustom_Alloy.paa",
            "\W_Uniform\W_Helmets\Customs\22nd_HelmCustom_Alloy.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Base\VacSeal_Base_CO.paa",
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
                "Helmet_Chin",
                "Closed_Visor"
            };
            hiddenSelectionsTextures[] =
            {
                "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Base.paa", // Helmet Texture
                "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Base.paa", // Helmet Texture
                "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Base.paa", // Helmet Texture
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Eyepiece
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Eyepiece Glass
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Visor Glass
                "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Base\VacSeal_Base_CO.paa", // Vac Collar
                "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa", // Face Module Chin
                "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa" // Closed Visor
            };
        };
    };// Close 22nd_HelmCustom_Alloy
    // Begin 22nd_HelmCustom_Bay
   class 22nd_HelmCustom_Bay : CH252_Helmet_Base{
        scope = 2;
        scopeArsenal = 2;
        author = "Warhound Mod Team";
        displayName = "[22nd] CHC252 Custom Bay";
        model = "MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
        picture = "\W_Uniform\W_Helmets\22ndRDF.paa";//Add Icon
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
            model = "WCustom_AAE";
            Variants = "Open";
            Custom = "Bay";
        };
        hiddenSelectionsTextures[] =
        {
            "\W_Uniform\W_Helmets\Customs\22nd_HelmCustom_Bay.paa",
            "\W_Uniform\W_Helmets\Customs\22nd_HelmCustom_Bay.paa",
            "\W_Uniform\W_Helmets\Customs\22nd_HelmCustom_Bay.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Base\VacSeal_Base_CO.paa",
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
                "Helmet_Chin",
                "Closed_Visor"
            };
            hiddenSelectionsTextures[] =
            {
                "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Base.paa", // Helmet Texture
                "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Base.paa", // Helmet Texture
                "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Base.paa", // Helmet Texture
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Eyepiece
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Eyepiece Glass
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Visor Glass
                "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Base\VacSeal_Base_CO.paa", // Vac Collar
                "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa", // Face Module Chin
                "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa" // Closed Visor
            };
        };
    };// Close 22nd_HelmCustom_Bay
    // Begin 22nd_HelmCustom_Bee
    class 22nd_HelmCustom_Bee : CH252_Helmet_Base{
        scope = 2;
        scopeArsenal = 2;
        author = "Warhound Mod Team";
        displayName = "[22nd] CHC252 Custom Bee";
        model = "MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
        picture = "\W_Uniform\W_Helmets\22ndRDF.paa";//Add Icon
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
            model = "WCustom_AAE";
            Variants = "Open";
            Custom = "Bee";
        };
        hiddenSelectionsTextures[] =
        {
            "\W_Uniform\W_Helmets\Customs\22nd_HelmCustom_Bee.paa",
            "\W_Uniform\W_Helmets\Customs\22nd_HelmCustom_Bee.paa",
            "\W_Uniform\W_Helmets\Customs\22nd_HelmCustom_Bee.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Base\VacSeal_Base_CO.paa",
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
                "Helmet_Chin",
                "Closed_Visor"
            };
            hiddenSelectionsTextures[] =
            {
                "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Base.paa", // Helmet Texture
                "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Base.paa", // Helmet Texture
                "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Base.paa", // Helmet Texture
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Eyepiece
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Eyepiece Glass
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Visor Glass
                "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Base\VacSeal_Base_CO.paa", // Vac Collar
                "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa", // Face Module Chin
                "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa" // Closed Visor
            };
        };
    };// Close 22nd_HelmCustom_Bee
    // Begin 22nd_HelmCustom_Grims
   class 22nd_HelmCustom_Grims : CH252_Helmet_Base{
        scope = 2;
        scopeArsenal = 2;
        author = "Warhound Mod Team";
        displayName = "[22nd] CHC252 Custom Grimsdottir";
        model = "MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
        picture = "\W_Uniform\W_Helmets\22ndRDF.paa";//Add Icon
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
            model = "WCustom_AAE";
            Variants = "Eyepiece";
            Custom = "Grims";
        };
        hiddenSelectionsTextures[] =
        {
            "\W_Uniform\W_Helmets\Customs\22nd_HelmCustom_Grims.paa",
            "\W_Uniform\W_Helmets\Customs\22nd_HelmCustom_Grims.paa",
            "\W_Uniform\W_Helmets\Customs\22nd_HelmCustom_Grims.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Base\VacSeal_Base_CO.paa",
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
                //"EyePiece",
                //"EyePieceGlass",
                "VisorGlasses",
                "VaccumCollar",
                "Helmet_Chin",
                "Closed_Visor"
            };
            hiddenSelectionsTextures[] =
            {
                "\W_Uniform\W_Helmets\Customs\22nd_HelmCustom_Grims.paa", // Helmet Texture
                "\W_Uniform\W_Helmets\Customs\22nd_HelmCustom_Grims.paa", // Helmet Texture
                "\W_Uniform\W_Helmets\Customs\22nd_HelmCustom_Grims.paa", // Helmet Texture
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Eyepiece
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Eyepiece Glass
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Visor Glass
                "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Base\VacSeal_Base_CO.paa", // Vac Collar
                "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa", // Face Module Chin
                "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa" // Closed Visor
            };
        };
    };// Close 22nd_HelmCustom_Grims
    // Begin 22nd_HelmCustom_Harper
    class 22nd_HelmCustom_Harper : CH252_Helmet_Base{
        scope = 2;
        scopeArsenal = 2;
        author = "Warhound Mod Team";
        displayName = "[22nd] CHC252 Custom Harper";
        model = "MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
        picture = "\W_Uniform\W_Helmets\22ndRDF.paa";//Add Icon
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
            model = "WCustom_AAE";
            Variants = "Open";
            Custom = "Harper";
        };
        hiddenSelectionsTextures[] =
        {
            "\W_Uniform\W_Helmets\Customs\22nd_HelmCustom_Harper.paa",
            "\W_Uniform\W_Helmets\Customs\22nd_HelmCustom_Harper.paa",
            "\W_Uniform\W_Helmets\Customs\22nd_HelmCustom_Harper.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Base\VacSeal_Base_CO.paa",
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
                "Helmet_Chin",
                "Closed_Visor"
            };
            hiddenSelectionsTextures[] =
            {
                "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Base.paa", // Helmet Texture
                "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Base.paa", // Helmet Texture
                "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Base.paa", // Helmet Texture
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Eyepiece
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Eyepiece Glass
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Visor Glass
                "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Base\VacSeal_Base_CO.paa", // Vac Collar
                "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa", // Face Module Chin
                "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa" // Closed Visor
            };
        };
    };// Close 22nd_HelmCustom_Harper
    // Begin 22nd_HelmCustom_Jacks
    class 22nd_HelmCustom_Jacks : CH252_Helmet_Base{
        scope = 2;
        scopeArsenal = 2;
        author = "Warhound Mod Team";
        displayName = "[22nd] CHC252 Custom Jacks";
        model = "MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
        picture = "\W_Uniform\W_Helmets\22ndRDF.paa";//Add Icon
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
            model = "WCustom_AAE";
            Variants = "Open";
            Custom = "Jacks";
        };
        hiddenSelectionsTextures[] =
        {
            "\W_Uniform\W_Helmets\Customs\22nd_HelmCustom_Jacks.paa",
            "\W_Uniform\W_Helmets\Customs\22nd_HelmCustom_Jacks.paa",
            "\W_Uniform\W_Helmets\Customs\22nd_HelmCustom_Jacks.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Base\VacSeal_Base_CO.paa",
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
                "Helmet_Chin",
                "Closed_Visor"
            };
            hiddenSelectionsTextures[] =
            {
                "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Base.paa", // Helmet Texture
                "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Base.paa", // Helmet Texture
                "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Base.paa", // Helmet Texture
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Eyepiece
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Eyepiece Glass
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Visor Glass
                "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Base\VacSeal_Base_CO.paa", // Vac Collar
                "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa", // Face Module Chin
                "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa" // Closed Visor
            };
        };
    };// Close 22nd_HelmCustom_Jacks
    // Begin 22nd_HelmCustom_Perse
    class 22nd_HelmCustom_Perse : CH252_Helmet_Base{
        scope = 2;
        scopeArsenal = 2;
        author = "Warhound Mod Team";
        displayName = "[22nd] CHC252 Custom Persephone";
        model = "MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
        picture = "\W_Uniform\W_Helmets\22ndRDF.paa";//Add Icon
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
            model = "WCustom_AAE";
            Variants = "Open";
            Custom = "Perse";
        };
        hiddenSelectionsTextures[] =
        {
            "\W_Uniform\W_Helmets\Customs\22nd_HelmCustom_Perse.paa",
            "\W_Uniform\W_Helmets\Customs\22nd_HelmCustom_Perse.paa",
            "\W_Uniform\W_Helmets\Customs\22nd_HelmCustom_Perse.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Base\VacSeal_Base_CO.paa",
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
                "Helmet_Chin",
                "Closed_Visor"
            };
            hiddenSelectionsTextures[] =
            {
                "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Base.paa", // Helmet Texture
                "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Base.paa", // Helmet Texture
                "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Base.paa", // Helmet Texture
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Eyepiece
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Eyepiece Glass
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Visor Glass
                "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Base\VacSeal_Base_CO.paa", // Vac Collar
                "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa", // Face Module Chin
                "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa" // Closed Visor
            };
        };
    };// Close 22nd_HelmCustom_Perse
    // Begin 22nd_HelmCustom_Relic
    class 22nd_HelmCustom_Relic : CH252_Helmet_Base{
        scope = 2;
        scopeArsenal = 2;
        author = "Warhound Mod Team";
        displayName = "[22nd] CHC252 Custom Relic";
        model = "MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
        picture = "\W_Uniform\W_Helmets\22ndRDF.paa";//Add Icon
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
            model = "WCustom_AAE";
            Variants = "Open";
            Custom = "Relic";
        };
        hiddenSelectionsTextures[] =
        {
            "\W_Uniform\W_Helmets\Customs\22nd_HelmCustom_Relic.paa",
            "\W_Uniform\W_Helmets\Customs\22nd_HelmCustom_Relic.paa",
            "\W_Uniform\W_Helmets\Customs\22nd_HelmCustom_Relic.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Base\VacSeal_Base_CO.paa",
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
                "Helmet_Chin",
                "Closed_Visor"
            };
            hiddenSelectionsTextures[] =
            {
                "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Base.paa", // Helmet Texture
                "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Base.paa", // Helmet Texture
                "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Base.paa", // Helmet Texture
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Eyepiece
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Eyepiece Glass
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Visor Glass
                "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Base\VacSeal_Base_CO.paa", // Vac Collar
                "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa", // Face Module Chin
                "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa" // Closed Visor
            };
        };
    };// Close 22nd_HelmCustom_Relic
    // Begin 22nd_HelmCustom_Sue
    class 22nd_HelmCustom_Sue : CH252_Helmet_Base{
        scope = 2;
        scopeArsenal = 2;
        author = "Warhound Mod Team";
        displayName = "[22nd] CHC252 Custom Sue";
        model = "MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
        picture = "\W_Uniform\W_Helmets\22ndRDF.paa";//Add Icon
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
            model = "WCustom_AAE";
            Variants = "Open";
            Custom = "Sue";
        };
        hiddenSelectionsTextures[] =
        {
            "\W_Uniform\W_Helmets\Customs\22nd_HelmCustom_Sue.paa",
            "\W_Uniform\W_Helmets\Customs\22nd_HelmCustom_Sue.paa",
            "\W_Uniform\W_Helmets\Customs\22nd_HelmCustom_Sue.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Base\VacSeal_Base_CO.paa",
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
                "Helmet_Chin",
                "Closed_Visor"
            };
            hiddenSelectionsTextures[] =
            {
                "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Base.paa", // Helmet Texture
                "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Base.paa", // Helmet Texture
                "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Base.paa", // Helmet Texture
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Eyepiece
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Eyepiece Glass
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Visor Glass
                "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Base\VacSeal_Base_CO.paa", // Vac Collar
                "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa", // Face Module Chin
                "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa" // Closed Visor
            };
        };
    };// Close 22nd_HelmCustom_Harper
};
};