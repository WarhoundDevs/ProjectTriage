/**
* This file contains the configurations for the Base uniforms and armour. This is the grey hard armour with
* its uniform variations underneath, these being:
* - Var1 - Camo Pants & Camo Shirt
* - Var2 - Camo Pants & Green Shirt
* - Var3 - Camo Pants & Brown Shirt
*
* Changes have been made to standardise class names and to modify paths to conform with the new file structure.
* Imported base class to condense configuration files and make this more streamlined.
* ~ Raven
*/

// Base Uniform Class
class B_Soldier_base_F;
class MA_Marine_BDU_Base;
class 22nd_Base_None: MA_Marine_BDU_Base
{
    scope=0;
    scopeArsenal=0;
    UniformClass="22nd_Base_None";
    hiddenSelections[]=
    {
        "Camo1",
        "Camo2",
        "Camo3",
        "Camo4",
        "Camo5",
        "Camo6",
        "Camo7",
        "Camo8",
        "Camo9",
        "Camo10",
        "Uni_Upper",
        "Uni_Lower",
        "Uni_Collar",
        "Armor_Underpad",
        "Armor_Straps",
        "Armor_Upper",
        "Armor_Lower",
        "Shoulders_Lower1",
        "Shoulders_Lower2",
        "Shoulders_Upper"
    };
    hiddenSelectionsTextures[]=
    {
        "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Base_TrooperUpperBDU_CO.paa",
        "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Base_TrooperLowerBDU_CO.paa",
        "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Base_TrooperCollar_CO.paa",
        "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa",
        "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa",
        "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Base_TrooperUpperArmor_CO.paa",
        "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Base_TrooperLowerArmor_CO.paa",
        "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Base_TrooperShoulders_CO.paa",
        "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Base_TrooperShoulders_CO.paa",
        "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Base_TrooperShoulders_CO.paa"
    };
};
// Woodland Variation 1 - Light
class 22nd_ArmourBaseWVar1_Light: 22nd_Base_None
{
    UniformClass="22nd_ArmourBaseWVar1_Light";
    hiddenSelections[]=
    {
        "Camo1",
        "Camo2",
        "Camo3",
        "Camo4",
        "Camo5",
        "Camo6",
        "Camo7",
        "Camo8",
        "Camo9",
        "Camo10",
        //"Uni_Upper",
        //"Uni_Lower",
        "Uni_Collar",
        //"Armor_Underpad",
        //"Armor_Straps",
        //"Armor_Upper",
        //"Armor_Lower",
        "Shoulders_Lower1",
        "Shoulders_Lower2",
        "Shoulders_Upper"
    };
	hiddenSelectionsTextures[]=
    {
        "Warhound_Armour\data\Standard\infantry\Woodland\MA_Woodland_TrooperUpperBDU_CO.paa",
        "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Woodland_TrooperLowerBDU_CO.paa",
        "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Woodland_TrooperCollar_CO.paa",
        "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa",
        "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa",
        "Warhound_Armour\data\Standard\infantry\Woodland\MA_green_TrooperUpperArmor_CO.paa",
        "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_green_TrooperLowerArmor_CO.paa",
        "Warhound_Armour\data\Standard\infantry\Woodland\MA_green_TrooperShoulders_CO.paa",
        "Warhound_Armour\data\Standard\infantry\Woodland\MA_green_TrooperShoulders_CO.paa",
        "Warhound_Armour\data\Standard\infantry\Woodland\MA_green_TrooperShoulders_CO.paa"
    };
};
// Woodland Variation 2 - Light
class 22nd_ArmourBaseWVar2_Light: 22nd_Base_None
{
    UniformClass="22nd_ArmourBaseWVar1_Light";
    hiddenSelections[]=
    {
        "Camo1",
        "Camo2",
        "Camo3",
        "Camo4",
        "Camo5",
        "Camo6",
        "Camo7",
        "Camo8",
        "Camo9",
        "Camo10",
        //"Uni_Upper",
        //"Uni_Lower",
        "Uni_Collar",
        //"Armor_Underpad",
        //"Armor_Straps",
        //"Armor_Upper",
        //"Armor_Lower",
        "Shoulders_Lower1",
        "Shoulders_Lower2",
        "Shoulders_Upper"
    };
	hiddenSelectionsTextures[]=
    {
        "Warhound_Armour\data\Standard\infantry\Woodland\MA_Green_TrooperUpperBDU_CO.paa",
        "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Woodland_TrooperLowerBDU_CO.paa",
        "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Woodland_TrooperCollar_CO.paa",
        "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa",
        "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa",
        "Warhound_Armour\data\Standard\infantry\Woodland\MA_green_TrooperUpperArmor_CO.paa",
        "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_green_TrooperLowerArmor_CO.paa",
        "Warhound_Armour\data\Standard\infantry\Woodland\MA_green_TrooperShoulders_CO.paa",
        "Warhound_Armour\data\Standard\infantry\Woodland\MA_green_TrooperShoulders_CO.paa",
        "Warhound_Armour\data\Standard\infantry\Woodland\MA_green_TrooperShoulders_CO.paa"
    };
};