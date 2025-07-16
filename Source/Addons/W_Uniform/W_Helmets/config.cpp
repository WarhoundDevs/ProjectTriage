class CfgPatches {
    class 22ndArmsRoom {
        units[] = {
        };
        weapons[]={
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
            //Custom
        };
        requiredVersion = 1.0;
        requiredAddons[] = {"MA_Armor", "A3_Characters_F", "A3_Data_F_Mark"}; // Reference any required addons
    };
};

class CfgWeapons {

    class CH252_Helmet_Base;
    class ItemInfo;

    /*
    * Begin Base Helmets
    */

    class 22nd_HelmBase_Open: CH252_Helmet_Base {
        scope=2;
        scopeArsenal=2;
        author="Warhound Mod Team";
        displayName="[22nd] CHC252"
        model="MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
        picture=" "//Add Icon
        hiddenSelections[]=
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
        hiddenSelectionsTextures[]=
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
        class ItemInfo: ItemInfo
        {
            uniformModel="MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
            hiddenSelections[]=
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
            hiddenSelectionsTextures[]=
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
    
    class 22nd_HelmBase_Closed: CH252_Helmet_Base {
        scope=2;
        scopeArsenal=2;
        author="Warhound Mod Team";
        displayName="[22nd] ECHC252"
        model="MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
        picture=" "//Add Icon
        hiddenSelections[]=
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
        hiddenSelectionsTextures[]=
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
        class ItemInfo: ItemInfo
        {
            uniformModel="MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
            hiddenSelections[]=
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
            hiddenSelectionsTextures[]=
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

    class 22nd_HelmBase_Eye: CH252_Helmet_Base {
        scope=2;
        scopeArsenal=2;
        author="Warhound Mod Team";
        displayName="[22nd] CHC252 Eyepiece"
        model="MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
        picture=" "//Add Icon
        hiddenSelections[]=
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
        hiddenSelectionsTextures[]=
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
        class ItemInfo: ItemInfo
        {
            uniformModel="MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
            hiddenSelections[]=
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
            hiddenSelectionsTextures[]=
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

    class 22nd_HelmBase_Visor: CH252_Helmet_Base {
        scope=2;
        scopeArsenal=2;
        author="Warhound Mod Team";
        displayName="[22nd] CHC252 Visor"
        model="MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
        picture=" "//Add Icon
        hiddenSelections[]=
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
        hiddenSelectionsTextures[]=
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
        class ItemInfo: ItemInfo
        {
            uniformModel="MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
            hiddenSelections[]=
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
            hiddenSelectionsTextures[]=
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

    // Begin Winterized Variants

    class 22nd_HelmSnow_Open: CH252_Helmet_Base {
        scope=2;
        scopeArsenal=2;
        author="Warhound Mod Team";
        displayName="[22nd] CHC252/W"
        model="MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
        picture=" "//Add Icon
        hiddenSelections[]=
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
        hiddenSelectionsTextures[]=
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
        class ItemInfo: ItemInfo
        {
            uniformModel="MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
            hiddenSelections[]=
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
            hiddenSelectionsTextures[]=
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

    class 22nd_HelmSnow_Closed: CH252_Helmet_Base {
        scope=2;
        scopeArsenal=2;
        author="Warhound Mod Team";
        displayName="[22nd] ECHC252/W"
        model="MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
        picture=" "//Add Icon
        hiddenSelections[]=
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
        hiddenSelectionsTextures[]=
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
        class ItemInfo: ItemInfo
        {
            uniformModel="MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
            hiddenSelections[]=
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
            hiddenSelectionsTextures[]=
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

    class 22nd_HelmSnow_Eye: CH252_Helmet_Base {
        scope=2;
        scopeArsenal=2;
        author="Warhound Mod Team";
        displayName="[22nd] CHC252/W Eyepiece"
        model="MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
        picture=" "//Add Icon
        hiddenSelections[]=
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
        hiddenSelectionsTextures[]=
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
        class ItemInfo: ItemInfo
        {
            uniformModel="MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
            hiddenSelections[]=
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
            hiddenSelectionsTextures[]=
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

    class 22nd_HelmSnow_Visor: CH252_Helmet_Base {
        scope=2;
        scopeArsenal=2;
        author="Warhound Mod Team";
        displayName="[22nd] CHC252/W Visor"
        model="MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
        picture=" "//Add Icon
        hiddenSelections[]=
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
        hiddenSelectionsTextures[]=
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
        class ItemInfo: ItemInfo
        {
            uniformModel="MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
            hiddenSelections[]=
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
            hiddenSelectionsTextures[]=
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
};