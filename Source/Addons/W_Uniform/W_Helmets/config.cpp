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
            "22nd_HelmAvi_Open",
            "22nd_HelmAvi_Closed",
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
            "22nd_HelmCustom_Grims",
            "22nd_HelmCustom_Bee",
            "22nd_HelmCustom_Harper",
        };
        requiredVersion = 1.0;
        requiredAddons[] = {"MA_Armor", "A3_Characters_F", "A3_Data_F_Mark"}; // Reference any required addons
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
                "Variant",
                "Decal"
            };
            class Variant
            {
                label = "Facewear Variants";
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
        class WSnow_AAE
        {
            label = "[22nd] CHC252 Winter";
            author = "Warhound Mod Team";
            options[] =
            {
                "Variant",
                "Decal"
            };
            class Variant
            {
                label = "Facewear Variants";
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
        class WCustom_AAE
        {
            label = "[22nd] CHC252 Custom";
            author = "Warhound Mod Team";
            options[] =
            {
                "Variant",
                "Decal"
            };
            class Variant
            {
                label = "Facewear Variants";
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
    };
};
    class CfgWeapons {

        class CH252_Helmet_Base;
        class ItemInfo;
        /*
        * Begin Base Helmets
        */
        class 22nd_HelmBase_Open : CH252_Helmet_Base{
            scope = 2;
            scopeArsenal = 2;
            author = "Warhound Mod Team";
            displayName = "[22nd] CHC252"
            model = "MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
            picture = "\W_Uniform\W_Helmets\22ndRDF.paa"//Add Icon
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
                Variant = "Open";
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
                        "\W_Uniform\W_Armour\Infantry\22nd_Helmet_Base.paa", // Helmet Texture
                        "\W_Uniform\W_Armour\Infantry\22nd_Helmet_Base.paa", // Helmet Texture
                        "\W_Uniform\W_Armour\Infantry\22nd_Helmet_Base.paa", // Helmet Texture
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
            displayName = "[22nd] ECHC252"
            model = "MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
            picture = "\W_Uniform\W_Helmets\22ndRDF.paa"//Add Icon
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
                Variant = "Closed";
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
                    "W_Uniform\W_Helmets\Infantry\22nd_Base_Helmet_Lower",
                    "W_Uniform\W_Helmets\Infantry\22nd_Base_Helmet_Lower",
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
                            "\W_Uniform\W_Armour\Infantry\22nd_Helmet_Base.paa", // Helmet Texture
                            "\W_Uniform\W_Armour\Infantry\22nd_Helmet_Base.paa", // Helmet Texture
                            "\W_Uniform\W_Armour\Infantry\22nd_Helmet_Base.paa", // Helmet Texture
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
            displayName = "[22nd] CHC252 Eyepiece"
            model = "MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
            picture = "\W_Uniform\W_Helmets\22ndRDF.paa"//Add Icon
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
                Variant = "Eyepiece";
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
                        "\W_Uniform\W_Armour\Infantry\22nd_Helmet_Base.paa", // Helmet Texture
                        "\W_Uniform\W_Armour\Infantry\22nd_Helmet_Base.paa", // Helmet Texture
                        "\W_Uniform\W_Armour\Infantry\22nd_Helmet_Base.paa", // Helmet Texture
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
            displayName = "[22nd] CHC252 Visor"
            model = "MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
            picture = "\W_Uniform\W_Helmets\22ndRDF.paa"//Add Icon
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
                Variant = "Visor";
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
                            "\W_Uniform\W_Armour\Infantry\22nd_Helmet_Base.paa", // Helmet Texture
                            "\W_Uniform\W_Armour\Infantry\22nd_Helmet_Base.paa", // Helmet Texture
                            "\W_Uniform\W_Armour\Infantry\22nd_Helmet_Base.paa", // Helmet Texture
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
            displayName = "[22nd] CHC252/W"
            model = "MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
            picture = "\W_Uniform\W_Helmets\22ndRDF.paa"//Add Icon
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
                model = "WSnow_AAE";
                Variant = "Open";
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
                        "\W_Uniform\W_Armour\Infantry\22nd_Helmet_Snow.paa", // Helmet Texture
                        "\W_Uniform\W_Armour\Infantry\22nd_Helmet_Snow.paa", // Helmet Texture
                        "\W_Uniform\W_Armour\Infantry\22nd_Helmet_Snow.paa", // Helmet Texture
                        "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Eyepiece
                        "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Eyepiece Glass
                        "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Visor Glass
                        "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Base\VacSeal_Base_CO.paa", // Vac Collar
                        "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa", // Face Module Chin
                        "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa" // Closed Visor
                    };
                };
        };  // Close 22nd_HelmSnow_Open

        class 22nd_HelmSnow_Closed : CH252_Helmet_Base{
            scope = 2;
            scopeArsenal = 2;
            author = "Warhound Mod Team";
            displayName = "[22nd] ECHC252/W"
            model = "MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
            picture = "\W_Uniform\W_Helmets\22ndRDF.paa"//Add Icon
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
                Variant = "Closed";
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
                            "\W_Uniform\W_Armour\Infantry\22nd_Helmet_Snow.paa", // Helmet Texture
                            "\W_Uniform\W_Armour\Infantry\22nd_Helmet_Snow.paa", // Helmet Texture
                            "\W_Uniform\W_Armour\Infantry\22nd_Helmet_Snow.paa", // Helmet Texture
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
            displayName = "[22nd] CHC252/W Eyepiece"
            model = "MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
            picture = "\W_Uniform\W_Helmets\22ndRDF.paa"//Add Icon
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
                model = "WSnow_AAE";
                Variant = "Eyepiece";
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
                        "\W_Uniform\W_Armour\Infantry\22nd_Helmet_Snow.paa", // Helmet Texture
                        "\W_Uniform\W_Armour\Infantry\22nd_Helmet_Snow.paa", // Helmet Texture
                        "\W_Uniform\W_Armour\Infantry\22nd_Helmet_Snow.paa", // Helmet Texture
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
            displayName = "[22nd] CHC252/W Visor"
            model = "MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
            picture = "\W_Uniform\W_Helmets\22ndRDF.paa"//Add Icon
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
                Variant = "Visor";
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
                            "\W_Uniform\W_Armour\Infantry\22nd_Helmet_Snow.paa", // Helmet Texture
                            "\W_Uniform\W_Armour\Infantry\22nd_Helmet_Snow.paa", // Helmet Texture
                            "\W_Uniform\W_Armour\Infantry\22nd_Helmet_Snow.paa", // Helmet Texture
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
          displayName = "[22nd] CHC252"
          model = "MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
          picture = "\W_Uniform\W_Helmets\22ndRDF.paa"//Add Icon
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
                Variant = "Open";
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
                      "\W_Uniform\W_Armour\Infantry\22nd_Helmet_Base_Med.paa", // Helmet Texture
                      "\W_Uniform\W_Armour\Infantry\22nd_Helmet_Base_Med.paa", // Helmet Texture
                      "\W_Uniform\W_Armour\Infantry\22nd_Helmet_Base_Med.paa", // Helmet Texture
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
            displayName = "[22nd] ECHC252"
            model = "MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
            picture = "\W_Uniform\W_Helmets\22ndRDF.paa"//Add Icon
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
                Variant = "Closed";
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
                    "W_Uniform\W_Helmets\Infantry\22nd_Base_Helmet_Lower",
                    "W_Uniform\W_Helmets\Infantry\22nd_Base_Helmet_Lower",
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
                            "\W_Uniform\W_Armour\Infantry\22nd_Helmet_Base_Med.paa", // Helmet Texture
                            "\W_Uniform\W_Armour\Infantry\22nd_Helmet_Base_Med.paa", // Helmet Texture
                            "\W_Uniform\W_Armour\Infantry\22nd_Helmet_Base_Med.paa", // Helmet Texture
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
            displayName = "[22nd] CHC252 Eyepiece"
            model = "MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
            picture = "\W_Uniform\W_Helmets\22ndRDF.paa"//Add Icon
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
                Variant = "Eyepiece";
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
                        "\W_Uniform\W_Armour\Infantry\22nd_Helmet_Base_Med.paa", // Helmet Texture
                        "\W_Uniform\W_Armour\Infantry\22nd_Helmet_Base_Med.paa", // Helmet Texture
                        "\W_Uniform\W_Armour\Infantry\22nd_Helmet_Base_Med.paa", // Helmet Texture
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
            displayName = "[22nd] CHC252 Visor"
            model = "MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
            picture = "\W_Uniform\W_Helmets\22ndRDF.paa"//Add Icon
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
                Variant = "Visor";
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
                            "\W_Uniform\W_Helmets\Infantry\22nd_Helmet_Base_Med.paa",, // Helmet Texture
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
            displayName = "[22nd] CHC252/W"
            model = "MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
            picture = "\W_Uniform\W_Helmets\22ndRDF.paa"//Add Icon
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
                  Variant = "Open";
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
                        "\W_Uniform\W_Armour\Infantry\22nd_Helmet_Snow_Med.paa", // Helmet Texture
                        "\W_Uniform\W_Armour\Infantry\22nd_Helmet_Snow_Med.paa", // Helmet Texture
                        "\W_Uniform\W_Armour\Infantry\22nd_Helmet_Snow_Med.paa", // Helmet Texture
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
            displayName = "[22nd] ECHC252/W"
            model = "MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
            picture = "\W_Uniform\W_Helmets\22ndRDF.paa"//Add Icon
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
                Variant = "Closed";
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
                            "\W_Uniform\W_Armour\Infantry\22nd_Helmet_Snow_Med.paa", // Helmet Texture
                            "\W_Uniform\W_Armour\Infantry\22nd_Helmet_Snow_Med.paa", // Helmet Texture
                            "\W_Uniform\W_Armour\Infantry\22nd_Helmet_Snow_Med.paa", // Helmet Texture
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
            displayName = "[22nd] CHC252/W Eyepiece"
            model = "MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
            picture = "\W_Uniform\W_Helmets\22ndRDF.paa"//Add Icon
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
                  Variant = "Eyepiece";
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
                        "\W_Uniform\W_Armour\Infantry\22nd_Helmet_Snow_Med.paa", // Helmet Texture
                        "\W_Uniform\W_Armour\Infantry\22nd_Helmet_Snow_Med.paa", // Helmet Texture
                        "\W_Uniform\W_Armour\Infantry\22nd_Helmet_Snow_Med.paa", // Helmet Texture
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
            displayName = "[22nd] CHC252/W Visor"
            model = "MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
            picture = "\W_Uniform\W_Helmets\22ndRDF.paa"//Add Icon
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
                Variant = "Visor";
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
                            "\W_Uniform\W_Armour\Infantry\22nd_Helmet_Snow_Med.paa", // Helmet Texture
                            "\W_Uniform\W_Armour\Infantry\22nd_Helmet_Snow_Med.paa", // Helmet Texture
                            "\W_Uniform\W_Armour\Infantry\22nd_Helmet_Snow_Med.paa", // Helmet Texture
                            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Eyepiece
                            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Eyepiece Glass
                            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Visor Glass
                            "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Base\VacSeal_Base_CO.paa", // Vac Collar
                            "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa", // Face Module Chin
                            "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa" // Closed Visor
                        };
                    };
        };// Close 22nd_HelmSnow_Visor
        
        //Begin Custom Helmets
        //Grimsdottir
        class 22nd_HelmCustom_Grims : CH252_Helmet_Base{
            scope = 2;
            scopeArsenal = 2;
            author = "Warhound Mod Team";
            displayName = "[22nd] CHC2505 Grimsdottir";
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
                Customs = "Grimsdottir";
                Decal = "None";
            };
            hiddenSelectionTextures[] =
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
                        "EyePiece",
                        "EyePieceGlass",
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
        //Bee
        class 22nd_HelmCustom_Bee : CH252_Helmet_Base{
            scope = 2;
            scopeArsenal = 2;
            author = "Warhound Mod Team";
            displayName = "[22nd] CHC2505 Bee";
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
                Customs = "Bee";
                Decal = "None";
            };
            hiddenSelectionTextures[] =
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
                        "\W_Uniform\W_Helmets\Customs\22nd_HelmCustom_Bee.paa", // Helmet Texture
                        "\W_Uniform\W_Helmets\Customs\22nd_HelmCustom_Bee.paa", // Helmet Texture
                        "\W_Uniform\W_Helmets\Customs\22nd_HelmCustom_Bee.paa", // Helmet Texture
                        "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Eyepiece
                        "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Eyepiece Glass
                        "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Visor Glass
                        "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Base\VacSeal_Base_CO.paa", // Vac Collar
                        "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa", // Face Module Chin
                        "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa" // Closed Visor
                    };
        };
        //Harper
        class 22nd_HelmCustom_Harper : CH252_Helmet_Base{
            scope = 2;
            scopeArsenal = 2;
            author = "Warhound Mod Team";
            displayName = "[22nd] CHC2505 Harper";
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
                Customs = "Harper";
                Decal = "None";
            };
            hiddenSelectionTextures[] =
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
                        "\W_Uniform\W_Helmets\Customs\22nd_HelmCustom_Harper.paa", // Helmet Texture
                        "\W_Uniform\W_Helmets\Customs\22nd_HelmCustom_Harper.paa", // Helmet Texture
                        "\W_Uniform\W_Helmets\Customs\22nd_HelmCustom_Harper.paa", // Helmet Texture
                        "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Eyepiece
                        "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Eyepiece Glass
                        "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa", // Visor Glass
                        "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Base\VacSeal_Base_CO.paa", // Vac Collar
                        "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa", // Face Module Chin
                        "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa" // Closed Visor
                    };
        };
    };