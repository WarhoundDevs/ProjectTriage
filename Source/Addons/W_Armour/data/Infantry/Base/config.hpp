class 22nd_Helmet_Base: 22nd_Helmet_Base
{
    scope=2;
    scopeArsenal=2;
    displayName="[22nd] CH252 Helmet";
	hiddenSelectionsTextures[]=
    {
        "W_Armour\data\Infantry\Base\***.paa", // Changed file path to fit new structure. Needs new PAA file name.
        "W_Armour\data\Infantry\Base\***.paa",
        "W_Armour\data\Infantry\Base\***.paa",
        "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
        "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
        "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa"
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelections[]=
        {
            "camo1", // Helmet
            "camo2", // NVG Mount
            "camo3", // Helmet
            "camo4", // Eye Piece
            "camo5", // Eye Piece Glass
            "camo6", // Visor Glasses
        	//    "Helmet",
        	//    "NVGMount",
        	//    "EyePiece",
        	//    "EyePieceGlass",
        	"VisorGlasses",
			"VaccumCollar",
        	"Helmet_Chin",
        	"Closed_Visor",
			"Camo7", // Vaccum Collar.
        	"Camo8", // Helmet Chin.
        	"Camo9", // Closed Visor.
        };

    };
};