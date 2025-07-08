class CfgPatches {
    class 22ndArmsRoom {
        units[] = { 
            //Base
            "22nd_ArmourBaseVar1_Light",
            "22nd_ArmourBaseVar1_LightC",
            "22nd_ArmourBaseVar1_Medium",
            "22nd_ArmourBaseVar1_MediumC",
            "22nd_ArmourBaseVar1_Heavy",
            "22nd_ArmourBaseVar1_HeavyC",
            "22nd_ArmourBaseVar2_Light",
            "22nd_ArmourBaseVar2_LightC",
            "22nd_ArmourBaseVar2_Medium",
            "22nd_ArmourBaseVar2_MediumC",
            "22nd_ArmourBaseVar2_Heavy",
            "22nd_ArmourBaseVar2_HeavyC",
            "22nd_ArmourBaseVar3_Light",
            "22nd_ArmourBaseVar3_LightC",
            "22nd_ArmourBaseVar3_Medium",
            "22nd_ArmourBaseVar3_MediumC",
            "22nd_ArmourBaseVar3_Heavy",
            "22nd_ArmourBaseVar3_HeavyC",
            //Arid
            "22nd_ArmourAridVar1_Light",
            "22nd_ArmourAridVar1_LightC",
            "22nd_ArmourAridVar1_Medium",
            "22nd_ArmourAridVar1_MediumC",
            "22nd_ArmourAridVar1_Heavy",
            "22nd_ArmourAridVar1_HeavyC",
            "22nd_ArmourAridVar2_Light",
            "22nd_ArmourAridVar2_LightC",
            "22nd_ArmourAridVar2_Medium",
            "22nd_ArmourAridVar2_MediumC",
            "22nd_ArmourAridVar2_Heavy",
            "22nd_ArmourAridVar2_HeavyC",
            "22nd_ArmourAridVar3_Light",
            "22nd_ArmourAridVar3_Medium",
            "22nd_ArmourAridVar3_Heavy",
            //Winter
            "22nd_ArmourWinterVar1_Light",
            "22nd_ArmourWinterVar1_LightC",
            "22nd_ArmourWinterVar1_Medium",
            "22nd_ArmourWinterVar1_MediumC",
            "22nd_ArmourWinterVar1_Heavy",
            "22nd_ArmourWinterVar1_HeavyC",
            
            /*
            *Start Customs
            *Current Customs: Raven
            */

            //Raven
            "22nd_ArmourRavenBase_Medium",
            "22nd_ArmourRavenArid_Medium",
            "22nd_ArmourRavenWinter_Medium",


        };
        weapons[] = {
            //Base
            "22nd_ArmourBaseVar1_Light",
            "22nd_ArmourBaseVar1_LightC",
            "22nd_ArmourBaseVar1_Medium",
            "22nd_ArmourBaseVar1_MediumC",
            "22nd_ArmourBaseVar1_Heavy",
            "22nd_ArmourBaseVar1_HeavyC",
            "22nd_ArmourBaseVar2_Light",
            "22nd_ArmourBaseVar2_LightC",
            "22nd_ArmourBaseVar2_Medium",
            "22nd_ArmourBaseVar2_MediumC",
            "22nd_ArmourBaseVar2_Heavy",
            "22nd_ArmourBaseVar2_HeavyC",
            "22nd_ArmourBaseVar3_Light",
            "22nd_ArmourBaseVar3_LightC",
            "22nd_ArmourBaseVar3_Medium",
            "22nd_ArmourBaseVar3_MediumC",
            "22nd_ArmourBaseVar3_Heavy",
            "22nd_ArmourBaseVar3_HeavyC",
            //Arid
            "22nd_ArmourAridVar1_Light",
            "22nd_ArmourAridVar1_LightC",
            "22nd_ArmourAridVar1_Medium",
            "22nd_ArmourAridVar1_MediumC",
            "22nd_ArmourAridVar1_Heavy",
            "22nd_ArmourAridVar1_HeavyC",
            "22nd_ArmourAridVar2_Light",
            "22nd_ArmourAridVar2_LightC",
            "22nd_ArmourAridVar2_Medium",
            "22nd_ArmourAridVar2_MediumC",
            "22nd_ArmourAridVar2_Heavy",
            "22nd_ArmourAridVar2_HeavyC",
            "22nd_ArmourAridVar3_Light",
            "22nd_ArmourAridVar3_Medium",
            "22nd_ArmourAridVar3_Heavy",
            //Winter
            "22nd_ArmourWinterVar1_Light",
            "22nd_ArmourWinterVar1_LightC",
            "22nd_ArmourWinterVar1_Medium",
            "22nd_ArmourWinterVar1_MediumC",
            "22nd_ArmourWinterVar1_Heavy",
            "22nd_ArmourWinterVar1_HeavyC",
            
            /*
            *Start Customs
            *Current Customs: Raven
            */

            //Raven
            "22nd_ArmourRavenBase_Medium",
            "22nd_ArmourRavenArid_Medium",
            "22nd_ArmourRavenWinter_Medium",

        }; // Link your uniform class
        requiredVersion = 1.0;
        requiredAddons[] = {"MA_Armor", "A3_Characters_F", "A3_Data_F_Mark"}; // Reference any required addons
    };
};
class CfgVehicles {
    class MA_Marine_BDU_Base;

    /*
    * Begin ArmourBase
    */

    // Begin Variant 1 - No Collar

    class 22nd_ArmourBaseVar1_Light: MA_Marine_BDU_Base {
        scope = 2; // Visible in editor
        author="Warhound Mod Team";
        uniformClass = "22nd_ArmourBaseVar1_Light"; // Custom uniform class
        hiddenSelections[] = {
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

        hiddenSelectionsTextures[] = {
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Woodland_TrooperUpperBDU_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Woodland_TrooperLowerBDU_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Woodland_TrooperCollar_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperUpperArmor_CO.paa", // Will need new texture
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperLowerArmor_CO.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
        };
    }; // Close 22nd_ArmourBaseVar1_Light

    class 22nd_ArmourBaseVar1_Medium: MA_Marine_BDU_Base {
        scope = 2; // Visible in editor
        author="Warhound Mod Team";
        uniformClass = "22nd_ArmourBaseVar1_Medium"; // Custom uniform class
        hiddenSelections[] = {
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
            // "Uni_Upper",
            // "Uni_Lower",
            "Uni_Collar",
            // "Armor_Underpad",
            // "Armor_Straps",
            // "Armor_Upper",
            // "Armor_Lower",
            "Shoulders_Lower1",
            // "Shoulders_Lower2",
            // "Shoulders_Upper"
        };

        hiddenSelectionsTextures[] = {
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Woodland_TrooperUpperBDU_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Woodland_TrooperLowerBDU_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Woodland_TrooperCollar_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperUpperArmor_CO.paa", // Will need new texture
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperLowerArmor_CO.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
        };
    }; // Close 22nd_ArmourBaseVar1_Medium

    class 22nd_ArmourBaseVar1_Heavy: MA_Marine_BDU_Base {
        scope = 2; // Visible in editor
        author="Warhound Mod Team";
        uniformClass = "22nd_ArmourBaseVar1_Heavy"; // Custom uniform class
        hiddenSelections[] = {
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
            // "Uni_Upper",
            // "Uni_Lower",
            "Uni_Collar",
            // "Armor_Underpad",
            // "Armor_Straps",
            // "Armor_Upper",
            // "Armor_Lower",
            // "Shoulders_Lower1",
            "Shoulders_Lower2",
            // "Shoulders_Upper"
        };

        hiddenSelectionsTextures[] = {
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Woodland_TrooperUpperBDU_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Woodland_TrooperLowerBDU_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Woodland_TrooperCollar_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperUpperArmor_CO.paa", // Will need new texture
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperLowerArmor_CO.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
        };
    }; // Close 22nd_ArmourBaseVar1_Heavy

    // Begin Variant 1 - Collar

    class 22nd_ArmourBaseVar1_LightC: MA_Marine_BDU_Base {
        scope = 2; // Visible in editor
        author="Warhound Mod Team";
        uniformClass = "22nd_ArmourBaseVar1_LightC"; // Custom uniform class
        hiddenSelections[] = {
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
          //"Uni_Collar",
          //"Armor_Underpad",
          //"Armor_Straps",
          //"Armor_Upper",
          //"Armor_Lower",
            "Shoulders_Lower1",
            "Shoulders_Lower2",
            "Shoulders_Upper"
        };

        hiddenSelectionsTextures[] = {
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Woodland_TrooperUpperBDU_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Woodland_TrooperLowerBDU_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Woodland_TrooperCollar_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperUpperArmor_CO.paa", // Will need new texture
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperLowerArmor_CO.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
        };
    }; // Close 22nd_ArmourBaseVar1_LightC

    class 22nd_ArmourBaseVar1_MediumC: MA_Marine_BDU_Base {
        scope = 2; // Visible in editor
        author="Warhound Mod Team";
        uniformClass = "22nd_ArmourBaseVar1_MediumC"; // Custom uniform class
        hiddenSelections[] = {
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
            // "Uni_Upper",
            // "Uni_Lower",
            // "Uni_Collar",
            // "Armor_Underpad",
            // "Armor_Straps",
            // "Armor_Upper",
            // "Armor_Lower",
            "Shoulders_Lower1",
            // "Shoulders_Lower2",
            // "Shoulders_Upper"
        };

        hiddenSelectionsTextures[] = {
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Woodland_TrooperUpperBDU_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Woodland_TrooperLowerBDU_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Woodland_TrooperCollar_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperUpperArmor_CO.paa", // Will need new texture
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperLowerArmor_CO.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
        };
    }; // Close 22nd_ArmourBaseVar1_MediumC

    class 22nd_ArmourBaseVar1_HeavyC: MA_Marine_BDU_Base {
        scope = 2; // Visible in editor
        author="Warhound Mod Team";
        uniformClass = "22nd_ArmourBaseVar1_HeavyC"; // Custom uniform class
        hiddenSelections[] = {
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
            // "Uni_Upper",
            // "Uni_Lower",
            // "Uni_Collar",
            // "Armor_Underpad",
            // "Armor_Straps",
            // "Armor_Upper",
            // "Armor_Lower",
            // "Shoulders_Lower1",
            "Shoulders_Lower2",
            // "Shoulders_Upper"
        };

        hiddenSelectionsTextures[] = {
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Woodland_TrooperUpperBDU_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Woodland_TrooperLowerBDU_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Woodland_TrooperCollar_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperUpperArmor_CO.paa", // Will need new texture
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperLowerArmor_CO.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
        };
    }; // Close 22nd_ArmourBaseVar1_HeavyC

    // Begin Variant 2 - No Collar

    class 22nd_ArmourBaseVar2_Light: MA_Marine_BDU_Base {
        scope = 2; // Visible in editor
        author="Warhound Mod Team";
        uniformClass = "22nd_ArmourBaseVar2_Light"; // Custom uniform class
        hiddenSelections[] = {
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

        hiddenSelectionsTextures[] = {
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Green_TrooperUpperBDU_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Woodland_TrooperLowerBDU_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Woodland_TrooperCollar_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperUpperArmor_CO.paa", // Will need new texture
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperLowerArmor_CO.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
        };
    }; // Close 22nd_ArmourBaseVar2_Light

    class 22nd_ArmourBaseVar2_Medium: MA_Marine_BDU_Base {
        scope = 2; // Visible in editor
        author="Warhound Mod Team";
        uniformClass = "22nd_ArmourBaseVar2_Medium"; // Custom uniform class
           hiddenSelections[] = {
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
            // "Uni_Upper",
            // "Uni_Lower",
            "Uni_Collar",
            // "Armor_Underpad",
            // "Armor_Straps",
            // "Armor_Upper",
            // "Armor_Lower",
            "Shoulders_Lower1",
            // "Shoulders_Lower2",
            // "Shoulders_Upper"
        };

        hiddenSelectionsTextures[] = {
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Green_TrooperUpperBDU_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Woodland_TrooperLowerBDU_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Woodland_TrooperCollar_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperUpperArmor_CO.paa", // Will need new texture
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperLowerArmor_CO.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
        };
    }; // Close 22nd_ArmourBaseVar2_Medium

    class 22nd_ArmourBaseVar2_Heavy: MA_Marine_BDU_Base {
        scope = 2; // Visible in editor
        author="Warhound Mod Team";
        uniformClass = "22nd_ArmourBaseVar2_Heavy"; // Custom uniform class
        hiddenSelections[] = {
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
            // "Uni_Upper",
            // "Uni_Lower",
            "Uni_Collar",
            // "Armor_Underpad",
            // "Armor_Straps",
            // "Armor_Upper",
            // "Armor_Lower",
            // "Shoulders_Lower1",
            "Shoulders_Lower2",
            // "Shoulders_Upper"
        };

        hiddenSelectionsTextures[] = {
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Green_TrooperUpperBDU_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Woodland_TrooperLowerBDU_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Woodland_TrooperCollar_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperUpperArmor_CO.paa", // Will need new texture
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperLowerArmor_CO.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
        };
    }; // Close 22nd_ArmourBaseVar2_Heavy

    // Begin Variant 2 - Collar

    class 22nd_ArmourBaseVar2_LightC: MA_Marine_BDU_Base {
        scope = 2; // Visible in editor
        author="Warhound Mod Team";
        uniformClass = "22nd_ArmourBaseVar2_LightC"; // Custom uniform class
        hiddenSelections[] = {
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
          //"Uni_Collar",
          //"Armor_Underpad",
          //"Armor_Straps",
          //"Armor_Upper",
          //"Armor_Lower",
            "Shoulders_Lower1",
            "Shoulders_Lower2",
            "Shoulders_Upper"
        };

        hiddenSelectionsTextures[] = {
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Green_TrooperUpperBDU_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Woodland_TrooperLowerBDU_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Green_TrooperCollar_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperUpperArmor_CO.paa", // Will need new texture
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperLowerArmor_CO.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
        };
    }; // Close 22nd_ArmourBaseVar2_LightC

    class 22nd_ArmourBaseVar2_MediumC: MA_Marine_BDU_Base {
        scope = 2; // Visible in editor
        author="Warhound Mod Team";
        uniformClass = "22nd_ArmourBaseVar2_MediumC"; // Custom uniform class
           hiddenSelections[] = {
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
            // "Uni_Upper",
            // "Uni_Lower",
            // "Uni_Collar",
            // "Armor_Underpad",
            // "Armor_Straps",
            // "Armor_Upper",
            // "Armor_Lower",
            "Shoulders_Lower1",
            // "Shoulders_Lower2",
            // "Shoulders_Upper"
        };

        hiddenSelectionsTextures[] = {
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Green_TrooperUpperBDU_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Woodland_TrooperLowerBDU_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Green_TrooperCollar_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperUpperArmor_CO.paa", // Will need new texture
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperLowerArmor_CO.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
        };
    }; // Close 22nd_ArmourBaseVar2_MediumC

    class 22nd_ArmourBaseVar2_HeavyC: MA_Marine_BDU_Base {
        scope = 2; // Visible in editor
        author="Warhound Mod Team";
        uniformClass = "22nd_ArmourBaseVar2_HeavyC"; // Custom uniform class
        hiddenSelections[] = {
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
            // "Uni_Upper",
            // "Uni_Lower",
            // "Uni_Collar",
            // "Armor_Underpad",
            // "Armor_Straps",
            // "Armor_Upper",
            // "Armor_Lower",
            // "Shoulders_Lower1",
            "Shoulders_Lower2",
            // "Shoulders_Upper"
        };

        hiddenSelectionsTextures[] = {
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Green_TrooperUpperBDU_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Woodland_TrooperLowerBDU_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Green_TrooperCollar_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperUpperArmor_CO.paa", // Will need new texture
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperLowerArmor_CO.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
        };
    }; // Close 22nd_ArmourBaseVar2_Heavy

    // Begin Variant 3 - No Collar

    class 22nd_ArmourBaseVar3_Light: MA_Marine_BDU_Base {
        scope = 2; // Visible in editor
        author="Warhound Mod Team";
        uniformClass = "22nd_ArmourBaseVar3_Light"; // Custom uniform class
        hiddenSelections[] = {
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

        hiddenSelectionsTextures[] = {
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Brown_TrooperUpperBDU_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Woodland_TrooperLowerBDU_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Woodland_TrooperCollar_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperUpperArmor_CO.paa", // Will need new texture
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperLowerArmor_CO.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
        };
    }; // Close 22nd_ArmourBaseVar3_Light

    class 22nd_ArmourBaseVar3_Medium: MA_Marine_BDU_Base {
        scope = 2; // Visible in editor
        author="Warhound Mod Team";
        uniformClass = "22nd_ArmourBaseVar3_Medium"; // Custom uniform class
           hiddenSelections[] = {
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
            // "Uni_Upper",
            // "Uni_Lower",
            "Uni_Collar",
            // "Armor_Underpad",
            // "Armor_Straps",
            // "Armor_Upper",
            // "Armor_Lower",
            "Shoulders_Lower1",
            // "Shoulders_Lower2",
            // "Shoulders_Upper"
        };

        hiddenSelectionsTextures[] = {
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Brown_TrooperUpperBDU_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Woodland_TrooperLowerBDU_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Woodland_TrooperCollar_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperUpperArmor_CO.paa", // Will need new texture
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperLowerArmor_CO.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
        };
    }; // Close 22nd_ArmourBaseVar3_Medium

    class 22nd_ArmourBaseVar3_Heavy: MA_Marine_BDU_Base {
        scope = 2; // Visible in editor
        author="Warhound Mod Team";
        uniformClass = "22nd_ArmourBaseVar3_Heavy"; // Custom uniform class
        hiddenSelections[] = {
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
            // "Uni_Upper",
            // "Uni_Lower",
            "Uni_Collar",
            // "Armor_Underpad",
            // "Armor_Straps",
            // "Armor_Upper",
            // "Armor_Lower",
            // "Shoulders_Lower1",
            "Shoulders_Lower2",
            // "Shoulders_Upper"
        };

        hiddenSelectionsTextures[] = {
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Brown_TrooperUpperBDU_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Woodland_TrooperLowerBDU_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Woodland_TrooperCollar_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperUpperArmor_CO.paa", // Will need new texture
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperLowerArmor_CO.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
        };
    }; // Close 22nd_ArmourBaseVar3_Heavy

    // Begin Variant 3 - Collar

    class 22nd_ArmourBaseVar3_LightC: MA_Marine_BDU_Base {
        scope = 2; // Visible in editor
        author="Warhound Mod Team";
        uniformClass = "22nd_ArmourBaseVar3_LightC"; // Custom uniform class
        hiddenSelections[] = {
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
          //"Uni_Collar",
          //"Armor_Underpad",
          //"Armor_Straps",
          //"Armor_Upper",
          //"Armor_Lower",
            "Shoulders_Lower1",
            "Shoulders_Lower2",
            "Shoulders_Upper"
        };

        hiddenSelectionsTextures[] = {
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Brown_TrooperUpperBDU_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Woodland_TrooperLowerBDU_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Brown_TrooperCollar_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperUpperArmor_CO.paa", // Will need new texture
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperLowerArmor_CO.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
        };
    }; // Close 22nd_ArmourBaseVar3_LightC

    class 22nd_ArmourBaseVar3_MediumC: MA_Marine_BDU_Base {
        scope = 2; // Visible in editor
        author="Warhound Mod Team";
        uniformClass = "22nd_ArmourBaseVar3_MediumC"; // Custom uniform class
           hiddenSelections[] = {
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
            // "Uni_Upper",
            // "Uni_Lower",
            // "Uni_Collar",
            // "Armor_Underpad",
            // "Armor_Straps",
            // "Armor_Upper",
            // "Armor_Lower",
            "Shoulders_Lower1",
            // "Shoulders_Lower2",
            // "Shoulders_Upper"
        };

        hiddenSelectionsTextures[] = {
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Brown_TrooperUpperBDU_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Woodland_TrooperLowerBDU_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Brown_TrooperCollar_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperUpperArmor_CO.paa", // Will need new texture
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperLowerArmor_CO.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
        };
    }; // Close 22nd_ArmourBaseVar3_MediumC

    class 22nd_ArmourBaseVar3_HeavyC: MA_Marine_BDU_Base {
        scope = 2; // Visible in editor
        author="Warhound Mod Team";
        uniformClass = "22nd_ArmourBaseVar3_HeavyC"; // Custom uniform class
        hiddenSelections[] = {
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
            // "Uni_Upper",
            // "Uni_Lower",
            // "Uni_Collar",
            // "Armor_Underpad",
            // "Armor_Straps",
            // "Armor_Upper",
            // "Armor_Lower",
            // "Shoulders_Lower1",
            "Shoulders_Lower2",
            // "Shoulders_Upper"
        };

        hiddenSelectionsTextures[] = {
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Brown_TrooperUpperBDU_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Woodland_TrooperLowerBDU_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Brown_TrooperCollar_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperUpperArmor_CO.paa", // Will need new texture
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperLowerArmor_CO.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
        };
    }; // Close 22nd_ArmourBaseVar3_HeavyC

    /*
    * Begin ArmourArid
    */

    // Begin Variant 1 - No Collar

    class 22nd_ArmourAridVar1_Light: MA_Marine_BDU_Base {
        scope = 2; // Visible in editor
        author="Warhound Mod Team";
        uniformClass = "22nd_ArmourAridVar1_Light"; // Custom uniform class
        hiddenSelections[] = {
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

        hiddenSelectionsTextures[] = {
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Desert_TrooperUpperBDU_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Desert_TrooperLowerBDU_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Desert_TrooperCollar_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperUpperArmor_CO.paa", // Will need new texture
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperLowerArmor_CO.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
        };
    }; // Close 22nd_ArmourAridVar1_Light

    class 22nd_ArmourAridVar1_Medium: MA_Marine_BDU_Base {
        scope = 2; // Visible in editor
        author="Warhound Mod Team";
        uniformClass = "22nd_ArmourAridVar1_Medium"; // Custom uniform class
        hiddenSelections[] = {
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
            // "Uni_Upper",
            // "Uni_Lower",
            "Uni_Collar",
            // "Armor_Underpad",
            // "Armor_Straps",
            // "Armor_Upper",
            // "Armor_Lower",
            "Shoulders_Lower1",
            // "Shoulders_Lower2",
            // "Shoulders_Upper"
        };

        hiddenSelectionsTextures[] = {
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Desert_TrooperUpperBDU_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Desert_TrooperLowerBDU_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Desert_TrooperCollar_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperUpperArmor_CO.paa", // Will need new texture
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperLowerArmor_CO.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
        };
    }; // Close 22nd_ArmourAridVar1_Medium

    class 22nd_ArmourAridVar1_Heavy: MA_Marine_BDU_Base {
        scope = 2; // Visible in editor
        author="Warhound Mod Team";
        uniformClass = "22nd_ArmourAridVar1_Heavy"; // Custom uniform class
        hiddenSelections[] = {
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
            // "Uni_Upper",
            // "Uni_Lower",
            "Uni_Collar",
            // "Armor_Underpad",
            // "Armor_Straps",
            // "Armor_Upper",
            // "Armor_Lower",
            // "Shoulders_Lower1",
            "Shoulders_Lower2",
            // "Shoulders_Upper"
        };

        hiddenSelectionsTextures[] = {
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Desert_TrooperUpperBDU_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Desert_TrooperLowerBDU_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Desert_TrooperCollar_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperUpperArmor_CO.paa", // Will need new texture
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperLowerArmor_CO.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
        };
    }; // Close 22nd_ArmourAridVar1_Heavy

    // Begin Variant 1 - Collar

    class 22nd_ArmourAridVar1_LightC: MA_Marine_BDU_Base {
        scope = 2; // Visible in editor
        author="Warhound Mod Team";
        uniformClass = "22nd_ArmourAridVar1_LightC"; // Custom uniform class
        hiddenSelections[] = {
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
          //"Uni_Collar",
          //"Armor_Underpad",
          //"Armor_Straps",
          //"Armor_Upper",
          //"Armor_Lower",
            "Shoulders_Lower1",
            "Shoulders_Lower2",
            "Shoulders_Upper"
        };

        hiddenSelectionsTextures[] = {
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Desert_TrooperUpperBDU_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Desert_TrooperLowerBDU_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Desert_TrooperCollar_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperUpperArmor_CO.paa", // Will need new texture
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperLowerArmor_CO.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
        };
    }; // Close 22nd_ArmourAridVar1_LightC

    class 22nd_ArmourAridVar1_MediumC: MA_Marine_BDU_Base {
        scope = 2; // Visible in editor
        author="Warhound Mod Team";
        uniformClass = "22nd_ArmourAridVar1_MediumC"; // Custom uniform class
        hiddenSelections[] = {
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
            // "Uni_Upper",
            // "Uni_Lower",
            // "Uni_Collar",
            // "Armor_Underpad",
            // "Armor_Straps",
            // "Armor_Upper",
            // "Armor_Lower",
            "Shoulders_Lower1",
            // "Shoulders_Lower2",
            // "Shoulders_Upper"
        };

        hiddenSelectionsTextures[] = {
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Desert_TrooperUpperBDU_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Desert_TrooperLowerBDU_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Desert_TrooperCollar_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperUpperArmor_CO.paa", // Will need new texture
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperLowerArmor_CO.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
        };
    }; // Close 22nd_ArmourAridVar1_MediumC

    class 22nd_ArmourAridVar1_HeavyC: MA_Marine_BDU_Base {
        scope = 2; // Visible in editor
        author="Warhound Mod Team";
        uniformClass = "22nd_ArmourAridVar1_HeavyC"; // Custom uniform class
        hiddenSelections[] = {
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
            // "Uni_Upper",
            // "Uni_Lower",
            // "Uni_Collar",
            // "Armor_Underpad",
            // "Armor_Straps",
            // "Armor_Upper",
            // "Armor_Lower",
            // "Shoulders_Lower1",
            "Shoulders_Lower2",
            // "Shoulders_Upper"
        };

        hiddenSelectionsTextures[] = {
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Desert_TrooperUpperBDU_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Desert_TrooperLowerBDU_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Desert_TrooperCollar_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperUpperArmor_CO.paa", // Will need new texture
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperLowerArmor_CO.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
        };
    }; // Close 22nd_ArmourAridVar1_HeavyC
    
    // Begin Variant 2 - No Collar

    class 22nd_ArmourAridVar2_Light: MA_Marine_BDU_Base {
        scope = 2; // Visible in editor
        author="Warhound Mod Team";
        uniformClass = "22nd_ArmourAridVar2_Light"; // Custom uniform class
        hiddenSelections[] = {
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

        hiddenSelectionsTextures[] = {
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Brown_TrooperUpperBDU_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Desert_TrooperLowerBDU_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Desert_TrooperCollar_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperUpperArmor_CO.paa", // Will need new texture
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperLowerArmor_CO.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
        };
    }; // Close 22nd_ArmourAridVar2_Light

    class 22nd_ArmourAridVar2_Medium: MA_Marine_BDU_Base {
        scope = 2; // Visible in editor
        author="Warhound Mod Team";
        uniformClass = "22nd_ArmourAridVar2_Medium"; // Custom uniform class
        hiddenSelections[] = {
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
            // "Uni_Upper",
            // "Uni_Lower",
            "Uni_Collar",
            // "Armor_Underpad",
            // "Armor_Straps",
            // "Armor_Upper",
            // "Armor_Lower",
            "Shoulders_Lower1",
            // "Shoulders_Lower2",
            // "Shoulders_Upper"
        };

        hiddenSelectionsTextures[] = {
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Brown_TrooperUpperBDU_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Desert_TrooperLowerBDU_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Desert_TrooperCollar_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperUpperArmor_CO.paa", // Will need new texture
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperLowerArmor_CO.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
        };
    }; // Close 22nd_ArmourAridVar2_Medium

    class 22nd_ArmourAridVar2_Heavy: MA_Marine_BDU_Base {
        scope = 2; // Visible in editor
        author="Warhound Mod Team";
        uniformClass = "22nd_ArmourAridVar2_Heavy"; // Custom uniform class
        hiddenSelections[] = {
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
            // "Uni_Upper",
            // "Uni_Lower",
            "Uni_Collar",
            // "Armor_Underpad",
            // "Armor_Straps",
            // "Armor_Upper",
            // "Armor_Lower",
            // "Shoulders_Lower1",
            "Shoulders_Lower2",
            // "Shoulders_Upper"
        };

        hiddenSelectionsTextures[] = {
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Brown_TrooperUpperBDU_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Desert_TrooperLowerBDU_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Desert_TrooperCollar_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperUpperArmor_CO.paa", // Will need new texture
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperLowerArmor_CO.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
        };
    }; // Close 22nd_ArmourAridVar2_Heavy
    
    // Begin Variant 2 - Collar

    class 22nd_ArmourAridVar2_LightC: MA_Marine_BDU_Base {
        scope = 2; // Visible in editor
        author="Warhound Mod Team";
        uniformClass = "22nd_ArmourAridVar2_LightC"; // Custom uniform class
        hiddenSelections[] = {
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
          //"Uni_Collar",
          //"Armor_Underpad",
          //"Armor_Straps",
          //"Armor_Upper",
          //"Armor_Lower",
            "Shoulders_Lower1",
            "Shoulders_Lower2",
            "Shoulders_Upper"
        };

        hiddenSelectionsTextures[] = {
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Brown_TrooperUpperBDU_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Desert_TrooperLowerBDU_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Brown_TrooperCollar_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperUpperArmor_CO.paa", // Will need new texture
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperLowerArmor_CO.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
        };
    }; // Close 22nd_ArmourAridVar2_LightC

    class 22nd_ArmourAridVar2_MediumC: MA_Marine_BDU_Base {
        scope = 2; // Visible in editor
        author="Warhound Mod Team";
        uniformClass = "22nd_ArmourAridVar2_MediumC"; // Custom uniform class
        hiddenSelections[] = {
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
            // "Uni_Upper",
            // "Uni_Lower",
            // "Uni_Collar",
            // "Armor_Underpad",
            // "Armor_Straps",
            // "Armor_Upper",
            // "Armor_Lower",
            "Shoulders_Lower1",
            // "Shoulders_Lower2",
            // "Shoulders_Upper"
        };

        hiddenSelectionsTextures[] = {
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Brown_TrooperUpperBDU_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Desert_TrooperLowerBDU_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Brown_TrooperCollar_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperUpperArmor_CO.paa", // Will need new texture
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperLowerArmor_CO.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
        };
    }; // Close 22nd_ArmourAridVar2_MediumC

    class 22nd_ArmourAridVar2_HeavyC: MA_Marine_BDU_Base {
        scope = 2; // Visible in editor
        author="Warhound Mod Team";
        uniformClass = "22nd_ArmourAridVar2_HeavyC"; // Custom uniform class
        hiddenSelections[] = {
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
            // "Uni_Upper",
            // "Uni_Lower",
            //"Uni_Collar",
            // "Armor_Underpad",
            // "Armor_Straps",
            // "Armor_Upper",
            // "Armor_Lower",
            // "Shoulders_Lower1",
            "Shoulders_Lower2",
            // "Shoulders_Upper"
        };

        hiddenSelectionsTextures[] = {
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Brown_TrooperUpperBDU_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Desert_TrooperLowerBDU_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Brown_TrooperCollar_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperUpperArmor_CO.paa", // Will need new texture
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperLowerArmor_CO.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
        };
    }; // Close 22nd_ArmourAridVar2_HeavyC

    /*
    * Begin ArmourSnow
    */

    // Begin Variant 1 - No Collar

    class 22nd_ArmourWinterVar1_Light: MA_Marine_BDU_Base {
        scope = 2; // Visible in editor
        author="Warhound Mod Team";
        uniformClass = "22nd_ArmourWinterVar1_Light"; // Custom uniform class
        hiddenSelections[] = {
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

        hiddenSelectionsTextures[] = {
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Winter_TrooperUpperBDU_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Winter_TrooperLowerBDU_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Winter_TrooperCollar_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_White_TrooperUpperArmor_CO.paa", // Will need new texture
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_White_TrooperLowerArmor_CO.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
        };
    }; // Close 22nd_ArmourWinterVar1_Light

    class 22nd_ArmourWinterVar1_Medium: MA_Marine_BDU_Base {
        scope = 2; // Visible in editor
        author="Warhound Mod Team";
        uniformClass = "22nd_ArmourWinterVar1_Medium"; // Custom uniform class
        hiddenSelections[] = {
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
            // "Uni_Upper",
            // "Uni_Lower",
            "Uni_Collar",
            // "Armor_Underpad",
            // "Armor_Straps",
            // "Armor_Upper",
            // "Armor_Lower",
            "Shoulders_Lower1",
            // "Shoulders_Lower2",
            // "Shoulders_Upper"
        };

        hiddenSelectionsTextures[] = {
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Winter_TrooperUpperBDU_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Winter_TrooperLowerBDU_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Winter_TrooperCollar_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_White_TrooperUpperArmor_CO.paa", // Will need new texture
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_White_TrooperLowerArmor_CO.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
        };
    }; // Close 22nd_ArmourWinterVar1_Medium

    class 22nd_ArmourWinterVar1_Heavy: MA_Marine_BDU_Base {
        scope = 2; // Visible in editor
        author="Warhound Mod Team";
        uniformClass = "22nd_ArmourWinterVar1_Heavy"; // Custom uniform class
        hiddenSelections[] = {
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
            // "Uni_Upper",
            // "Uni_Lower",
            "Uni_Collar",
            // "Armor_Underpad",
            // "Armor_Straps",
            // "Armor_Upper",
            // "Armor_Lower",
            // "Shoulders_Lower1",
            "Shoulders_Lower2",
            // "Shoulders_Upper"
        };

        hiddenSelectionsTextures[] = {
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Winter_TrooperUpperBDU_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Winter_TrooperLowerBDU_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Winter_TrooperCollar_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_White_TrooperUpperArmor_CO.paa", // Will need new texture
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_White_TrooperLowerArmor_CO.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
        };
    }; // Close 22nd_ArmourWinterVar1_Heavy

    // Begin Variant 1 - Collar

    class 22nd_ArmourWinterVar1_LightC: MA_Marine_BDU_Base {
        scope = 2; // Visible in editor
        author="Warhound Mod Team";
        uniformClass = "22nd_ArmourWinterVar1_LightC"; // Custom uniform class
        hiddenSelections[] = {
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
          //"Uni_Collar",
          //"Armor_Underpad",
          //"Armor_Straps",
          //"Armor_Upper",
          //"Armor_Lower",
            "Shoulders_Lower1",
            "Shoulders_Lower2",
            "Shoulders_Upper"
        };

        hiddenSelectionsTextures[] = {
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Winter_TrooperUpperBDU_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Winter_TrooperLowerBDU_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Winter_TrooperCollar_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_White_TrooperUpperArmor_CO.paa", // Will need new texture
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_White_TrooperLowerArmor_CO.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
        };
    }; // Close 22nd_ArmourWinterVar1_LightC

    class 22nd_ArmourWinterVar1_MediumC: MA_Marine_BDU_Base {
        scope = 2; // Visible in editor
        author="Warhound Mod Team";
        uniformClass = "22nd_ArmourWinterVar1_MediumC"; // Custom uniform class
        hiddenSelections[] = {
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
            // "Uni_Upper",
            // "Uni_Lower",
            // "Uni_Collar",
            // "Armor_Underpad",
            // "Armor_Straps",
            // "Armor_Upper",
            // "Armor_Lower",
            "Shoulders_Lower1",
            // "Shoulders_Lower2",
            // "Shoulders_Upper"
        };

        hiddenSelectionsTextures[] = {
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Winter_TrooperUpperBDU_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Winter_TrooperLowerBDU_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Winter_TrooperCollar_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_White_TrooperUpperArmor_CO.paa", // Will need new texture
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_White_TrooperLowerArmor_CO.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
        };
    }; // Close 22nd_ArmourWinterVar1_MediumC

    class 22nd_ArmourWinterVar1_HeavyC: MA_Marine_BDU_Base {
        scope = 2; // Visible in editor
        author="Warhound Mod Team";
        uniformClass = "22nd_ArmourWinterVar1_HeavyC"; // Custom uniform class
        hiddenSelections[] = {
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
            // "Uni_Upper",
            // "Uni_Lower",
            // "Uni_Collar",
            // "Armor_Underpad",
            // "Armor_Straps",
            // "Armor_Upper",
            // "Armor_Lower",
            // "Shoulders_Lower1",
            "Shoulders_Lower2",
            // "Shoulders_Upper"
        };

        hiddenSelectionsTextures[] = {
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Winter_TrooperUpperBDU_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Winter_TrooperLowerBDU_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Winter_TrooperCollar_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_White_TrooperUpperArmor_CO.paa", // Will need new texture
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_White_TrooperLowerArmor_CO.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
        };
    }; // Close 22nd_ArmourWinterVar1_HeavyC

    // Begin Variant 2 - No Collar

    class 22nd_ArmourWinterVar2_Light: MA_Marine_BDU_Base {
        scope = 2; // Visible in editor
        author="Warhound Mod Team";
        uniformClass = "22nd_ArmourWinterVar2_Light"; // Custom uniform class
        hiddenSelections[] = {
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

        hiddenSelectionsTextures[] = {
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_White_TrooperUpperBDU_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Winter_TrooperLowerBDU_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Winter_TrooperCollar_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_White_TrooperUpperArmor_CO.paa", // Will need new texture
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_White_TrooperLowerArmor_CO.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
        };
    }; // Close 22nd_ArmourWinterVar2_Light

    class 22nd_ArmourWinterVar2_Medium: MA_Marine_BDU_Base {
        scope = 2; // Visible in editor
        author="Warhound Mod Team";
        uniformClass = "22nd_ArmourWinterVar2_Medium"; // Custom uniform class
        hiddenSelections[] = {
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
            // "Uni_Upper",
            // "Uni_Lower",
            "Uni_Collar",
            // "Armor_Underpad",
            // "Armor_Straps",
            // "Armor_Upper",
            // "Armor_Lower",
            "Shoulders_Lower1",
            // "Shoulders_Lower2",
            // "Shoulders_Upper"
        };

        hiddenSelectionsTextures[] = {
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_White_TrooperUpperBDU_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Winter_TrooperLowerBDU_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Winter_TrooperCollar_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_White_TrooperUpperArmor_CO.paa", // Will need new texture
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_White_TrooperLowerArmor_CO.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
        };
    }; // Close 22nd_ArmourWinterVar2_Medium

    class 22nd_ArmourWinterVar2_Heavy: MA_Marine_BDU_Base {
        scope = 2; // Visible in editor
        author="Warhound Mod Team";
        uniformClass = "22nd_ArmourWinterVar2_Heavy"; // Custom uniform class
        hiddenSelections[] = {
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
            // "Uni_Upper",
            // "Uni_Lower",
            "Uni_Collar",
            // "Armor_Underpad",
            // "Armor_Straps",
            // "Armor_Upper",
            // "Armor_Lower",
            // "Shoulders_Lower1",
            "Shoulders_Lower2",
            // "Shoulders_Upper"
        };

        hiddenSelectionsTextures[] = {
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_White_TrooperUpperBDU_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Winter_TrooperLowerBDU_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Winter_TrooperCollar_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_White_TrooperUpperArmor_CO.paa", // Will need new texture
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_White_TrooperLowerArmor_CO.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
        };
    }; // Close 22nd_ArmourWinterVar2_Heavy

    // Begin Variant 2 - Collar

    class 22nd_ArmourWinterVar2_LightC: MA_Marine_BDU_Base {
        scope = 2; // Visible in editor
        author="Warhound Mod Team";
        uniformClass = "22nd_ArmourWinterVar2_LightC"; // Custom uniform class
        hiddenSelections[] = {
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
          //"Uni_Collar",
          //"Armor_Underpad",
          //"Armor_Straps",
          //"Armor_Upper",
          //"Armor_Lower",
            "Shoulders_Lower1",
            "Shoulders_Lower2",
            "Shoulders_Upper"
        };

        hiddenSelectionsTextures[] = {
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_White_TrooperUpperBDU_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Winter_TrooperLowerBDU_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_White_TrooperCollar_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_White_TrooperUpperArmor_CO.paa", // Will need new texture
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_White_TrooperLowerArmor_CO.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
        };
    }; // Close 22nd_ArmourWinterVar2_LightC

    class 22nd_ArmourWinterVar2_MediumC: MA_Marine_BDU_Base {
        scope = 2; // Visible in editor
        author="Warhound Mod Team";
        uniformClass = "22nd_ArmourWinterVar2_MediumC"; // Custom uniform class
        hiddenSelections[] = {
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
            // "Uni_Upper",
            // "Uni_Lower",
            // "Uni_Collar",
            // "Armor_Underpad",
            // "Armor_Straps",
            // "Armor_Upper",
            // "Armor_Lower",
            "Shoulders_Lower1",
            // "Shoulders_Lower2",
            // "Shoulders_Upper"
        };

        hiddenSelectionsTextures[] = {
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_White_TrooperUpperBDU_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Winter_TrooperLowerBDU_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_White_TrooperCollar_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_White_TrooperUpperArmor_CO.paa", // Will need new texture
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_White_TrooperLowerArmor_CO.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
        };
    }; // Close 22nd_ArmourWinterVar2_MediumC

    class 22nd_ArmourWinterVar2_HeavyC: MA_Marine_BDU_Base {
        scope = 2; // Visible in editor
        author="Warhound Mod Team";
        uniformClass = "22nd_ArmourWinterVar2_HeavyC"; // Custom uniform class
        hiddenSelections[] = {
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
            // "Uni_Upper",
            // "Uni_Lower",
            // "Uni_Collar",
            // "Armor_Underpad",
            // "Armor_Straps",
            // "Armor_Upper",
            // "Armor_Lower",
            // "Shoulders_Lower1",
            "Shoulders_Lower2",
            // "Shoulders_Upper"
        };

        hiddenSelectionsTextures[] = {
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_White_TrooperUpperBDU_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Winter_TrooperLowerBDU_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_White_TrooperCollar_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_White_TrooperUpperArmor_CO.paa", // Will need new texture
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_White_TrooperLowerArmor_CO.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
        };
    }; // Close 22nd_ArmourWinterVar2_HeavyC

    // Begin Variant 3 - No Collar

    class 22nd_ArmourWinterVar3_Light: MA_Marine_BDU_Base {
        scope = 2; // Visible in editor
        author="Warhound Mod Team";
        uniformClass = "22nd_ArmourWinterVar3_Light"; // Custom uniform class
        hiddenSelections[] = {
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

        hiddenSelectionsTextures[] = {
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Gray_TrooperUpperBDU_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Winter_TrooperLowerBDU_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Gray_TrooperCollar_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_White_TrooperUpperArmor_CO.paa", // Will need new texture
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_White_TrooperLowerArmor_CO.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
        };
    }; // Close 22nd_ArmourWinterVar3_Light

    class 22nd_ArmourWinterVar3_Medium: MA_Marine_BDU_Base {
        scope = 2; // Visible in editor
        author="Warhound Mod Team";
        uniformClass = "22nd_ArmourWinterVar3_Medium"; // Custom uniform class
        hiddenSelections[] = {
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
            // "Uni_Upper",
            // "Uni_Lower",
            "Uni_Collar",
            // "Armor_Underpad",
            // "Armor_Straps",
            // "Armor_Upper",
            // "Armor_Lower",
            "Shoulders_Lower1",
            // "Shoulders_Lower2",
            // "Shoulders_Upper"
        };

        hiddenSelectionsTextures[] = {
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Gray_TrooperUpperBDU_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Winter_TrooperLowerBDU_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Gray_TrooperCollar_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_White_TrooperUpperArmor_CO.paa", // Will need new texture
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_White_TrooperLowerArmor_CO.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
        };
    }; // Close 22nd_ArmourWinterVar3_Medium

    class 22nd_ArmourWinterVar3_Heavy: MA_Marine_BDU_Base {
        scope = 2; // Visible in editor
        author="Warhound Mod Team";
        uniformClass = "22nd_ArmourWinterVar3_Heavy"; // Custom uniform class
        hiddenSelections[] = {
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
            // "Uni_Upper",
            // "Uni_Lower",
            "Uni_Collar",
            // "Armor_Underpad",
            // "Armor_Straps",
            // "Armor_Upper",
            // "Armor_Lower",
            // "Shoulders_Lower1",
            "Shoulders_Lower2",
            // "Shoulders_Upper"
        };

        hiddenSelectionsTextures[] = {
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Gray_TrooperUpperBDU_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Winter_TrooperLowerBDU_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Gray_TrooperCollar_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_White_TrooperUpperArmor_CO.paa", // Will need new texture
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_White_TrooperLowerArmor_CO.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
        };
    }; // Close 22nd_ArmourWinterVar3_Heavy

    // Begin Variant 3 - Collar

    class 22nd_ArmourWinterVar3_LightC: MA_Marine_BDU_Base {
        scope = 2; // Visible in editor
        author="Warhound Mod Team";
        uniformClass = "22nd_ArmourWinterVar3_LightC"; // Custom uniform class
        hiddenSelections[] = {
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
          //"Uni_Collar",
          //"Armor_Underpad",
          //"Armor_Straps",
          //"Armor_Upper",
          //"Armor_Lower",
            "Shoulders_Lower1",
            "Shoulders_Lower2",
            "Shoulders_Upper"
        };

        hiddenSelectionsTextures[] = {
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Gray_TrooperUpperBDU_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Winter_TrooperLowerBDU_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Gray_TrooperCollar_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_White_TrooperUpperArmor_CO.paa", // Will need new texture
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_White_TrooperLowerArmor_CO.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
        };
    }; // Close 22nd_ArmourWinterVar3_LightC

    class 22nd_ArmourWinterVar3_MediumC: MA_Marine_BDU_Base {
        scope = 2; // Visible in editor
        author="Warhound Mod Team";
        uniformClass = "22nd_ArmourWinterVar3_MediumC"; // Custom uniform class
        hiddenSelections[] = {
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
            // "Uni_Upper",
            // "Uni_Lower",
            // "Uni_Collar",
            // "Armor_Underpad",
            // "Armor_Straps",
            // "Armor_Upper",
            // "Armor_Lower",
            "Shoulders_Lower1",
            // "Shoulders_Lower2",
            // "Shoulders_Upper"
        };

        hiddenSelectionsTextures[] = {
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Gray_TrooperUpperBDU_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Winter_TrooperLowerBDU_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Gray_TrooperCollar_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_White_TrooperUpperArmor_CO.paa", // Will need new texture
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_White_TrooperLowerArmor_CO.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
        };
    }; // Close 22nd_ArmourWinterVar3_MediumC

    class 22nd_ArmourWinterVar3_HeavyC: MA_Marine_BDU_Base {
        scope = 2; // Visible in editor
        author="Warhound Mod Team";
        uniformClass = "22nd_ArmourWinterVar3_HeavyC"; // Custom uniform class
        hiddenSelections[] = {
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
            // "Uni_Upper",
            // "Uni_Lower",
            // "Uni_Collar",
            // "Armor_Underpad",
            // "Armor_Straps",
            // "Armor_Upper",
            // "Armor_Lower",
            // "Shoulders_Lower1",
            "Shoulders_Lower2",
            // "Shoulders_Upper"
        };

        hiddenSelectionsTextures[] = {
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Gray_TrooperUpperBDU_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Winter_TrooperLowerBDU_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Gray_TrooperCollar_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_White_TrooperUpperArmor_CO.paa", // Will need new texture
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_White_TrooperLowerArmor_CO.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
            "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa",
        };
    }; // Close 22nd_ArmourWinterVar3_HeavyC

    /*
    * Begin Custom Armours
    */

    //Raven

    class 22nd_ArmourRavenBase_Medium: MA_Marine_BDU_Base {
        scope = 2; // Visible in editor
        author="Warhound Mod Team";
        uniformClass = "22nd_ArmourRavenBase_Medium"; // Custom uniform class
           hiddenSelections[] = {
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
            // "Uni_Upper",
            // "Uni_Lower",
            "Uni_Collar",
            // "Armor_Underpad",
            // "Armor_Straps",
            // "Armor_Upper",
            // "Armor_Lower",
            "Shoulders_Lower1",
            // "Shoulders_Lower2",
            // "Shoulders_Upper"
        };

        hiddenSelectionsTextures[] = {
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Green_TrooperUpperBDU_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Woodland_TrooperLowerBDU_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Woodland_TrooperCollar_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperUpperArmor_CO.paa", // Will need new texture
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperLowerArmor_CO.paa",
            "\W_Uniform\W_Armour\Custom\RavenShoulders.paa",
            "\W_Uniform\W_Armour\Custom\RavenShoulders.paa",
            "\W_Uniform\W_Armour\Custom\RavenShoulders.paa",
        };
    }; // Close 22nd_ArmourRavenBase_Medium

    class 22nd_ArmourRavenArid_Medium: MA_Marine_BDU_Base {
        scope = 2; // Visible in editor
        author="Warhound Mod Team";
        uniformClass = "22nd_ArmourRavenArid_Medium"; // Custom uniform class
           hiddenSelections[] = {
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
            // "Uni_Upper",
            // "Uni_Lower",
            "Uni_Collar",
            // "Armor_Underpad",
            // "Armor_Straps",
            // "Armor_Upper",
            // "Armor_Lower",
            "Shoulders_Lower1",
            // "Shoulders_Lower2",
            // "Shoulders_Upper"
        };

        hiddenSelectionsTextures[] = {
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Brown_TrooperUpperBDU_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Desert_TrooperLowerBDU_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Desert_TrooperCollar_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperUpperArmor_CO.paa", // Will need new texture
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperLowerArmor_CO.paa",
            "\W_Uniform\W_Armour\Custom\RavenShoulders.paa",
            "\W_Uniform\W_Armour\Custom\RavenShoulders.paa",
            "\W_Uniform\W_Armour\Custom\RavenShoulders.paa",
        };
    }; // Close 22nd_ArmourRavenArid_Medium

    class 22nd_ArmourRavenWinter_Medium: MA_Marine_BDU_Base {
        scope = 2; // Visible in editor
        author="Warhound Mod Team";
        uniformClass = "22nd_ArmourRavenWinter_Medium"; // Custom uniform class
           hiddenSelections[] = {
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
            // "Uni_Upper",
            // "Uni_Lower",
            "Uni_Collar",
            // "Armor_Underpad",
            // "Armor_Straps",
            // "Armor_Upper",
            // "Armor_Lower",
            "Shoulders_Lower1",
            // "Shoulders_Lower2",
            // "Shoulders_Upper"
        };

        hiddenSelectionsTextures[] = {
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Gray_TrooperUpperBDU_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Winter_TrooperLowerBDU_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Gray_TrooperCollar_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_White_TrooperUpperArmor_CO.paa", // Will need new texture
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_White_TrooperLowerArmor_CO.paa",
            "\W_Uniform\W_Armour\Custom\RavenShoulders.paa",
            "\W_Uniform\W_Armour\Custom\RavenShoulders.paa",
            "\W_Uniform\W_Armour\Custom\RavenShoulders.paa",
        };
    }; // Close 22nd_ArmourRavenWinter_Medium
};
class CfgWeapons {
    class MA_Marine_BDU_Base;
    class UniformItem;

    /*
    * Begin ArmourBase
    */

    // Begin Variant 1 - No Collar

    class 22nd_ArmourBaseVar1_Light: MA_Marine_BDU_Base {
        scope = 2;  // Visible in editor
        author="Warhound Mod Team";
        displayName = "Warhound Base Armour Variant 1 (L)"; // In-game name
        picture = "\W_Uniform\W_Armour\IconG.paa"; // Path to icon FUCKING CHANGE BEFORE PUSH
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier"; // Path to uniform model
        
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "22nd_ArmourBaseVar1_Light"; // Reference to the uniform class in CfgVehicles
            containerClass = "Supply90";
            mass = 80; // Adjust mass if needed
            hiddenSelections[] = {
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
            // "Armor_Underpad",
            // "Armor_Straps",
            // "Armor_Upper",
            // "Armor_Lower",
            "Shoulders_Lower1",
            "Shoulders_Lower2",
            // "Shoulders_Upper",
        };
            hiddenSelectionsTextures[] = {
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Woodland_TrooperUpperBDU_CO.paa", // Upper texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Woodland_TrooperLowerBDU_CO.paa", // Lower texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Woodland_TrooperCollar_CO.paa", // Collar texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa", // Soft padding texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa", // Armor straps texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperUpperArmor_CO.paa", // Upper armor texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperLowerArmor_CO.paa", // Lower armor texture
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa", // Shoulders texture
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa", // Shoulders texture (duplicate)
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa"  // Shoulders texture (duplicate)
            };
        };
    }; // Close 22nd_ArmourBaseVar1_Light

    class 22nd_ArmourBaseVar1_Medium: MA_Marine_BDU_Base {
        scope = 2;  // Visible in editor
        author="Warhound Mod Team";
        displayName = "Warhound Base Armour Variant 1 (M)"; // In-game name
        picture = "\W_Uniform\W_Armour\IconG.paa"; // Path to icon FUCKING CHANGE BEFORE PUSH
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier"; // Path to uniform model
        
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "22nd_ArmourBaseVar1_Medium"; // Reference to the uniform class in CfgVehicles
            containerClass = "Supply90";
            mass = 80; // Adjust mass if needed
            hiddenSelections[] = {
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
            // "Armor_Underpad",
            "Armor_Straps",
            "Armor_Upper",
            "Armor_Lower",
            "Shoulders_Lower1",
            // "Shoulders_Lower2",
            // "Shoulders_Upper"
        };
            hiddenSelectionsTextures[] = {
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Woodland_TrooperUpperBDU_CO.paa", // Upper texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Woodland_TrooperLowerBDU_CO.paa", // Lower texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Woodland_TrooperCollar_CO.paa", // Collar texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa", // Soft padding texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa", // Armor straps texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperUpperArmor_CO.paa", // Upper armor texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperLowerArmor_CO.paa", // Lower armor texture
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa", // Shoulders texture
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa", // Shoulders texture (duplicate)
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa"  // Shoulders texture (duplicate)
            };
        };
    };// Close 22nd_ArmourBaseVar1_Medium

    class 22nd_ArmourBaseVar1_Heavy: MA_Marine_BDU_Base {
        scope = 2;  // Visible in editor
        author="Warhound Mod Team";
        displayName = "Warhound Base Armour Variant 1 (H)"; // In-game name
        picture = "\W_Uniform\W_Armour\IconG.paa"; // Path to icon FUCKING CHANGE BEFORE PUSH
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier"; // Path to uniform model
        
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "22nd_ArmourBaseVar1_Heavy"; // Reference to the uniform class in CfgVehicles
            containerClass = "Supply90";
            mass = 80; // Adjust mass if needed
            hiddenSelections[] = {
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
            // "Armor_Underpad",
            "Armor_Straps",
            "Armor_Upper",
            "Armor_Lower",
            // "Shoulders_Lower1",
            "Shoulders_Lower2",
            // "Shoulders_Upper"
        };
            hiddenSelectionsTextures[] = {
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Woodland_TrooperUpperBDU_CO.paa", // Upper texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Woodland_TrooperLowerBDU_CO.paa", // Lower texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Woodland_TrooperCollar_CO.paa", // Collar texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa", // Soft padding texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa", // Armor straps texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperUpperArmor_CO.paa", // Upper armor texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperLowerArmor_CO.paa", // Lower armor texture
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa", // Shoulders texture
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa", // Shoulders texture (duplicate)
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa"  // Shoulders texture (duplicate)
            };
        };
    }; // Close 22nd_ArmourBaseVar1_Heavy

    // Begin Variant 1 - Collar

    class 22nd_ArmourBaseVar1_LightC: MA_Marine_BDU_Base {
        scope = 2;  // Visible in editor
        author="Warhound Mod Team";
        displayName = "Warhound Base Armour Variant 1 (LC)"; // In-game name
        picture = "\W_Uniform\W_Armour\IconG.paa"; // Path to icon FUCKING CHANGE BEFORE PUSH
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier"; // Path to uniform model
        
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "22nd_ArmourBaseVar1_LightC"; // Reference to the uniform class in CfgVehicles
            containerClass = "Supply90";
            mass = 80; // Adjust mass if needed
            hiddenSelections[] = {
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
            // "Uni_Collar",
            // "Armor_Underpad",
            // "Armor_Straps",
            // "Armor_Upper",
            // "Armor_Lower",
            "Shoulders_Lower1",
            "Shoulders_Lower2",
            // "Shoulders_Upper",
        };
            hiddenSelectionsTextures[] = {
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Woodland_TrooperUpperBDU_CO.paa", // Upper texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Woodland_TrooperLowerBDU_CO.paa", // Lower texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Woodland_TrooperCollar_CO.paa", // Collar texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa", // Soft padding texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa", // Armor straps texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperUpperArmor_CO.paa", // Upper armor texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperLowerArmor_CO.paa", // Lower armor texture
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa", // Shoulders texture
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa", // Shoulders texture (duplicate)
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa"  // Shoulders texture (duplicate)
            };
        };
    }; // Close 22nd_ArmourBaseVar1_LightC

    class 22nd_ArmourBaseVar1_MediumC: MA_Marine_BDU_Base {
        scope = 2;  // Visible in editor
        author="Warhound Mod Team";
        displayName = "Warhound Base Armour Variant 1 (MC)"; // In-game name
        picture = "\W_Uniform\W_Armour\IconG.paa"; // Path to icon FUCKING CHANGE BEFORE PUSH
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier"; // Path to uniform model
        
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "22nd_ArmourBaseVar1_MediumC"; // Reference to the uniform class in CfgVehicles
            containerClass = "Supply90";
            mass = 80; // Adjust mass if needed
            hiddenSelections[] = {
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
            //"Uni_Collar",
            // "Armor_Underpad",
            "Armor_Straps",
            "Armor_Upper",
            "Armor_Lower",
            "Shoulders_Lower1",
            // "Shoulders_Lower2",
            // "Shoulders_Upper"
        };
            hiddenSelectionsTextures[] = {
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Woodland_TrooperUpperBDU_CO.paa", // Upper texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Woodland_TrooperLowerBDU_CO.paa", // Lower texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Woodland_TrooperCollar_CO.paa", // Collar texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa", // Soft padding texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa", // Armor straps texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperUpperArmor_CO.paa", // Upper armor texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperLowerArmor_CO.paa", // Lower armor texture
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa", // Shoulders texture
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa", // Shoulders texture (duplicate)
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa"  // Shoulders texture (duplicate)
            };
        };
    };// Close 22nd_ArmourBaseVar1_Medium

    class 22nd_ArmourBaseVar1_HeavyC: MA_Marine_BDU_Base {
        scope = 2;  // Visible in editor
        author="Warhound Mod Team";
        displayName = "Warhound Base Armour Variant 1 (HC)"; // In-game name
        picture = "\W_Uniform\W_Armour\IconG.paa"; // Path to icon FUCKING CHANGE BEFORE PUSH
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier"; // Path to uniform model
        
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "22nd_ArmourBaseVar1_HeavyC"; // Reference to the uniform class in CfgVehicles
            containerClass = "Supply90";
            mass = 80; // Adjust mass if needed
            hiddenSelections[] = {
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
            // "Uni_Collar",
            // "Armor_Underpad",
            "Armor_Straps",
            "Armor_Upper",
            "Armor_Lower",
            // "Shoulders_Lower1",
            "Shoulders_Lower2",
            // "Shoulders_Upper"
        };
            hiddenSelectionsTextures[] = {
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Woodland_TrooperUpperBDU_CO.paa", // Upper texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Woodland_TrooperLowerBDU_CO.paa", // Lower texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Woodland_TrooperCollar_CO.paa", // Collar texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa", // Soft padding texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa", // Armor straps texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperUpperArmor_CO.paa", // Upper armor texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperLowerArmor_CO.paa", // Lower armor texture
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa", // Shoulders texture
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa", // Shoulders texture (duplicate)
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa"  // Shoulders texture (duplicate)
            };
        };
    }; // Close 22nd_ArmourBaseVar1_Heavy

    // Begin Variant 2

    class 22nd_ArmourBaseVar2_Light: MA_Marine_BDU_Base {
        scope = 2;  // Visible in editor
        author="Warhound Mod Team";
        displayName = "Warhound Base Armour Variant 2 (L)"; // In-game name
        picture = "\W_Uniform\W_Armour\IconG.paa"; // Path to icon FUCKING CHANGE BEFORE PUSH
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier"; // Path to uniform model
        
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "22nd_ArmourBaseVar2_Light"; // Reference to the uniform class in CfgVehicles
            containerClass = "Supply90";
            mass = 80; // Adjust mass if needed
            hiddenSelections[] = {
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
            // "Armor_Underpad",
            // "Armor_Straps",
            // "Armor_Upper",
            // "Armor_Lower",
            "Shoulders_Lower1",
            "Shoulders_Lower2",
            // "Shoulders_Upper",
        };
            hiddenSelectionsTextures[] = {
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Green_TrooperUpperBDU_CO.paa", // Upper texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Woodland_TrooperLowerBDU_CO.paa", // Lower texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Woodland_TrooperCollar_CO.paa", // Collar texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa", // Soft padding texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa", // Armor straps texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperUpperArmor_CO.paa", // Upper armor texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperLowerArmor_CO.paa", // Lower armor texture
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa", // Shoulders texture
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa", // Shoulders texture (duplicate)
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa"  // Shoulders texture (duplicate)
            };
        };
    }; // Close 22nd_ArmourBaseVar2_Light

    class 22nd_ArmourBaseVar2_Medium: MA_Marine_BDU_Base {
        scope = 2;  // Visible in editor
        author="Warhound Mod Team";
        displayName = "Warhound Base Armour Variant 2 (M)"; // In-game name
        picture = "\W_Uniform\W_Armour\IconG.paa"; // Path to icon FUCKING CHANGE BEFORE PUSH
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier"; // Path to uniform model
        
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "22nd_ArmourBaseVar2_Medium"; // Reference to the uniform class in CfgVehicles
            containerClass = "Supply90";
            mass = 80; // Adjust mass if needed
            hiddenSelections[] = {
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
            // "Armor_Underpad",
            "Armor_Straps",
            "Armor_Upper",
            "Armor_Lower",
            "Shoulders_Lower1",
            // "Shoulders_Lower2",
            // "Shoulders_Upper"
        };
            hiddenSelectionsTextures[] = {
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Green_TrooperUpperBDU_CO.paa", // Upper texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Woodland_TrooperLowerBDU_CO.paa", // Lower texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Woodland_TrooperCollar_CO.paa", // Collar texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa", // Soft padding texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa", // Armor straps texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperUpperArmor_CO.paa", // Upper armor texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperLowerArmor_CO.paa", // Lower armor texture
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa", // Shoulders texture
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa", // Shoulders texture (duplicate)
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa"  // Shoulders texture (duplicate)
            };
        };
    }; // Close 22nd_ArmourBaseVar2_Medium

    class 22nd_ArmourBaseVar2_Heavy: MA_Marine_BDU_Base {
        scope = 2;  // Visible in editor
        author="Warhound Mod Team";
        displayName = "Warhound Base Armour Variant 2 (H)"; // In-game name
        picture = "\W_Uniform\W_Armour\IconG.paa"; // Path to icon FUCKING CHANGE BEFORE PUSH
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier"; // Path to uniform model
        
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "22nd_ArmourBaseVar2_Heavy"; // Reference to the uniform class in CfgVehicles
            containerClass = "Supply90";
            mass = 80; // Adjust mass if needed
            hiddenSelections[] = {
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
            // "Armor_Underpad",
            "Armor_Straps",
            "Armor_Upper",
            "Armor_Lower",
            // "Shoulders_Lower1",
            "Shoulders_Lower2",
            // "Shoulders_Upper"
        };
            hiddenSelectionsTextures[] = {
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Green_TrooperUpperBDU_CO.paa", // Upper texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Woodland_TrooperLowerBDU_CO.paa", // Lower texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Woodland_TrooperCollar_CO.paa", // Collar texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa", // Soft padding texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa", // Armor straps texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperUpperArmor_CO.paa", // Upper armor texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperLowerArmor_CO.paa", // Lower armor texture
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa", // Shoulders texture
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa", // Shoulders texture (duplicate)
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa"  // Shoulders texture (duplicate)
            };
        };
    }; // Close 22nd_ArmourBaseVar2_Heavy

     // Begin Variant 2 Collar

    class 22nd_ArmourBaseVar2_LightC: MA_Marine_BDU_Base {
        scope = 2;  // Visible in editor
        author="Warhound Mod Team";
        displayName = "Warhound Base Armour Variant 2 (LC)"; // In-game name
        picture = "\W_Uniform\W_Armour\IconG.paa"; // Path to icon FUCKING CHANGE BEFORE PUSH
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier"; // Path to uniform model
        
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "22nd_ArmourBaseVar2_LightC"; // Reference to the uniform class in CfgVehicles
            containerClass = "Supply90";
            mass = 80; // Adjust mass if needed
            hiddenSelections[] = {
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
            // "Uni_Collar",
            // "Armor_Underpad",
            // "Armor_Straps",
            // "Armor_Upper",
            // "Armor_Lower",
            "Shoulders_Lower1",
            "Shoulders_Lower2",
            // "Shoulders_Upper",
        };
            hiddenSelectionsTextures[] = {
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Green_TrooperUpperBDU_CO.paa", // Upper texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Woodland_TrooperLowerBDU_CO.paa", // Lower texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Green_TrooperCollar_CO.paa", // Collar texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa", // Soft padding texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa", // Armor straps texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperUpperArmor_CO.paa", // Upper armor texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperLowerArmor_CO.paa", // Lower armor texture
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa", // Shoulders texture
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa", // Shoulders texture (duplicate)
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa"  // Shoulders texture (duplicate)
            };
        };
    }; // Close 22nd_ArmourBaseVar2_LightC

    class 22nd_ArmourBaseVar2_MediumC: MA_Marine_BDU_Base {
        scope = 2;  // Visible in editor
        author="Warhound Mod Team";
        displayName = "Warhound Base Armour Variant 2 (MC)"; // In-game name
        picture = "\W_Uniform\W_Armour\IconG.paa"; // Path to icon FUCKING CHANGE BEFORE PUSH
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier"; // Path to uniform model
        
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "22nd_ArmourBaseVar2_MediumC"; // Reference to the uniform class in CfgVehicles
            containerClass = "Supply90";
            mass = 80; // Adjust mass if needed
            hiddenSelections[] = {
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
            // "Uni_Collar",
            // "Armor_Underpad",
            "Armor_Straps",
            "Armor_Upper",
            "Armor_Lower",
            "Shoulders_Lower1",
            // "Shoulders_Lower2",
            // "Shoulders_Upper"
        };
            hiddenSelectionsTextures[] = {
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Green_TrooperUpperBDU_CO.paa", // Upper texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Woodland_TrooperLowerBDU_CO.paa", // Lower texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Green_TrooperCollar_CO.paa", // Collar texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa", // Soft padding texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa", // Armor straps texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperUpperArmor_CO.paa", // Upper armor texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperLowerArmor_CO.paa", // Lower armor texture
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa", // Shoulders texture
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa", // Shoulders texture (duplicate)
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa"  // Shoulders texture (duplicate)
            };
        };
    }; // Close 22nd_ArmourBaseVar2_MediumC

    class 22nd_ArmourBaseVar2_HeavyC: MA_Marine_BDU_Base {
        scope = 2;  // Visible in editor
        author="Warhound Mod Team";
        displayName = "Warhound Base Armour Variant 2 (HC)"; // In-game name
        picture = "\W_Uniform\W_Armour\IconG.paa"; // Path to icon FUCKING CHANGE BEFORE PUSH
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier"; // Path to uniform model
        
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "22nd_ArmourBaseVar2_HeavyC"; // Reference to the uniform class in CfgVehicles
            containerClass = "Supply90";
            mass = 80; // Adjust mass if needed
            hiddenSelections[] = {
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
            // "Uni_Collar",
            // "Armor_Underpad",
            "Armor_Straps",
            "Armor_Upper",
            "Armor_Lower",
            // "Shoulders_Lower1",
            "Shoulders_Lower2",
            // "Shoulders_Upper"
        };
            hiddenSelectionsTextures[] = {
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Green_TrooperUpperBDU_CO.paa", // Upper texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Woodland_TrooperLowerBDU_CO.paa", // Lower texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Green_TrooperCollar_CO.paa", // Collar texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa", // Soft padding texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa", // Armor straps texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperUpperArmor_CO.paa", // Upper armor texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperLowerArmor_CO.paa", // Lower armor texture
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa", // Shoulders texture
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa", // Shoulders texture (duplicate)
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa"  // Shoulders texture (duplicate)
            };
        };
    }; // Close 22nd_ArmourBaseVar2_HeavyC

    // Begin Variant 3

    class 22nd_ArmourBaseVar3_Light: MA_Marine_BDU_Base {
        scope = 2;  // Visible in editor
        author="Warhound Mod Team";
        displayName = "Warhound Base Armour Variant 3 (L)"; // In-game name
        picture = "\W_Uniform\W_Armour\IconG.paa"; // Path to icon FUCKING CHANGE BEFORE PUSH
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier"; // Path to uniform model
        
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "22nd_ArmourBaseVar3_Light"; // Reference to the uniform class in CfgVehicles
            containerClass = "Supply90";
            mass = 80; // Adjust mass if needed
            hiddenSelections[] = {
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
            // "Armor_Underpad",
            // "Armor_Straps",
            // "Armor_Upper",
            // "Armor_Lower",
            "Shoulders_Lower1",
            "Shoulders_Lower2",
            // "Shoulders_Upper",
        };
            hiddenSelectionsTextures[] = {
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Brown_TrooperUpperBDU_CO.paa", // Upper texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Woodland_TrooperLowerBDU_CO.paa", // Lower texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Woodland_TrooperCollar_CO.paa", // Collar texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa", // Soft padding texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa", // Armor straps texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperUpperArmor_CO.paa", // Upper armor texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperLowerArmor_CO.paa", // Lower armor texture
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa", // Shoulders texture
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa", // Shoulders texture (duplicate)
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa"  // Shoulders texture (duplicate)
            };
        };
    }; // Close 22nd_ArmourBaseVar3_Light

    class 22nd_ArmourBaseVar3_Medium: MA_Marine_BDU_Base {
        scope = 2;  // Visible in editor
        author="Warhound Mod Team";
        displayName = "Warhound Base Armour Variant 3 (M)"; // In-game name
        picture = "\W_Uniform\W_Armour\IconG.paa"; // Path to icon FUCKING CHANGE BEFORE PUSH
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier"; // Path to uniform model
        
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "22nd_ArmourBaseVar3_Medium"; // Reference to the uniform class in CfgVehicles
            containerClass = "Supply90";
            mass = 80; // Adjust mass if needed
            hiddenSelections[] = {
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
            // "Armor_Underpad",
            "Armor_Straps",
            "Armor_Upper",
            "Armor_Lower",
            "Shoulders_Lower1",
            // "Shoulders_Lower2",
            // "Shoulders_Upper"
        };
            hiddenSelectionsTextures[] = {
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Green_TrooperUpperBDU_CO.paa", // Upper texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Woodland_TrooperLowerBDU_CO.paa", // Lower texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Woodland_TrooperCollar_CO.paa", // Collar texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa", // Soft padding texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa", // Armor straps texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperUpperArmor_CO.paa", // Upper armor texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperLowerArmor_CO.paa", // Lower armor texture
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa", // Shoulders texture
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa", // Shoulders texture (duplicate)
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa"  // Shoulders texture (duplicate)
            };
        };
    }; // Close 22nd_ArmourBaseVar3_Medium
    
    class 22nd_ArmourBaseVar3_Heavy: MA_Marine_BDU_Base {
        scope = 2;  // Visible in editor
        author="Warhound Mod Team";
        displayName = "Warhound Base Armour Variant 3 (H)"; // In-game name
        picture = "\W_Uniform\W_Armour\IconG.paa"; // Path to icon FUCKING CHANGE BEFORE PUSH
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier"; // Path to uniform model
        
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "22nd_ArmourBaseVar3_Heavy"; // Reference to the uniform class in CfgVehicles
            containerClass = "Supply90";
            mass = 80; // Adjust mass if needed
            hiddenSelections[] = {
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
            // "Armor_Underpad",
            "Armor_Straps",
            "Armor_Upper",
            "Armor_Lower",
            // "Shoulders_Lower1",
            "Shoulders_Lower2",
            // "Shoulders_Upper"
        };
            hiddenSelectionsTextures[] = {
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Green_TrooperUpperBDU_CO.paa", // Upper texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Woodland_TrooperLowerBDU_CO.paa", // Lower texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Woodland_TrooperCollar_CO.paa", // Collar texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa", // Soft padding texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa", // Armor straps texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperUpperArmor_CO.paa", // Upper armor texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperLowerArmor_CO.paa", // Lower armor texture
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa", // Shoulders texture
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa", // Shoulders texture (duplicate)
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa"  // Shoulders texture (duplicate)
            };
        };
    }; // Close 22nd_ArmourBaseVar3_Heavy

    // Begin Variant 3 Collars

    class 22nd_ArmourBaseVar3_LightC: MA_Marine_BDU_Base {
        scope = 2;  // Visible in editor
        author="Warhound Mod Team";
        displayName = "Warhound Base Armour Variant 3 (LC)"; // In-game name
        picture = "\W_Uniform\W_Armour\IconG.paa"; // Path to icon FUCKING CHANGE BEFORE PUSH
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier"; // Path to uniform model
        
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "22nd_ArmourBaseVar3_LightC"; // Reference to the uniform class in CfgVehicles
            containerClass = "Supply90";
            mass = 80; // Adjust mass if needed
            hiddenSelections[] = {
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
            // "Uni_Collar",
            // "Armor_Underpad",
            // "Armor_Straps",
            // "Armor_Upper",
            // "Armor_Lower",
            "Shoulders_Lower1",
            "Shoulders_Lower2",
            // "Shoulders_Upper",
        };
            hiddenSelectionsTextures[] = {
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Brown_TrooperUpperBDU_CO.paa", // Upper texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Woodland_TrooperLowerBDU_CO.paa", // Lower texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Brown_TrooperCollar_CO.paa", // Collar texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa", // Soft padding texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa", // Armor straps texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperUpperArmor_CO.paa", // Upper armor texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperLowerArmor_CO.paa", // Lower armor texture
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa", // Shoulders texture
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa", // Shoulders texture (duplicate)
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa"  // Shoulders texture (duplicate)
            };
        };
    }; // Close 22nd_ArmourBaseVar3_LightC

    class 22nd_ArmourBaseVar3_MediumC: MA_Marine_BDU_Base {
        scope = 2;  // Visible in editor
        author="Warhound Mod Team";
        displayName = "Warhound Base Armour Variant 3 (MC)"; // In-game name
        picture = "\W_Uniform\W_Armour\IconG.paa"; // Path to icon FUCKING CHANGE BEFORE PUSH
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier"; // Path to uniform model
        
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "22nd_ArmourBaseVar3_MediumC"; // Reference to the uniform class in CfgVehicles
            containerClass = "Supply90";
            mass = 80; // Adjust mass if needed
            hiddenSelections[] = {
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
            // "Uni_Collar",
            // "Armor_Underpad",
            "Armor_Straps",
            "Armor_Upper",
            "Armor_Lower",
            "Shoulders_Lower1",
            // "Shoulders_Lower2",
            // "Shoulders_Upper"
        };
            hiddenSelectionsTextures[] = {
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Green_TrooperUpperBDU_CO.paa", // Upper texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Woodland_TrooperLowerBDU_CO.paa", // Lower texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Brown_TrooperCollar_CO.paa", // Collar texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa", // Soft padding texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa", // Armor straps texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperUpperArmor_CO.paa", // Upper armor texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperLowerArmor_CO.paa", // Lower armor texture
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa", // Shoulders texture
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa", // Shoulders texture (duplicate)
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa"  // Shoulders texture (duplicate)
            };
        };
    }; // Close 22nd_ArmourBaseVar3_MediumC

    class 22nd_ArmourBaseVar3_HeavyC: MA_Marine_BDU_Base {
        scope = 2;  // Visible in editor
        author="Warhound Mod Team";
        displayName = "Warhound Base Armour Variant 3 (HC)"; // In-game name
        picture = "\W_Uniform\W_Armour\IconG.paa"; // Path to icon FUCKING CHANGE BEFORE PUSH
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier"; // Path to uniform model
        
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "22nd_ArmourBaseVar3_HeavyC"; // Reference to the uniform class in CfgVehicles
            containerClass = "Supply90";
            mass = 80; // Adjust mass if needed
            hiddenSelections[] = {
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
            // "Uni_Collar",
            // "Armor_Underpad",
            "Armor_Straps",
            "Armor_Upper",
            "Armor_Lower",
            // "Shoulders_Lower1",
            "Shoulders_Lower2",
            // "Shoulders_Upper"
        };
            hiddenSelectionsTextures[] = {
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Green_TrooperUpperBDU_CO.paa", // Upper texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Woodland_TrooperLowerBDU_CO.paa", // Lower texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Brown_TrooperCollar_CO.paa", // Collar texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa", // Soft padding texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa", // Armor straps texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperUpperArmor_CO.paa", // Upper armor texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperLowerArmor_CO.paa", // Lower armor texture
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa", // Shoulders texture
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa", // Shoulders texture (duplicate)
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa"  // Shoulders texture (duplicate)
            };
        };
    }; // Close 22nd_ArmourBaseVar3_HeavyC

    /*
    * Begin ArmourArid
    */

    //Begin Variant 1 - No Collar

    class 22nd_ArmourAridVar1_Light: MA_Marine_BDU_Base {
        scope = 2;  // Visible in editor
        author="Warhound Mod Team";
        displayName = "Warhound Arid Armour Variant 1 (L)"; // In-game name
        picture = "\W_Uniform\W_Armour\IconG.paa"; // Path to icon FUCKING CHANGE BEFORE PUSH
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier"; // Path to uniform model
        
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "22nd_ArmourAridVar1_Light"; // Reference to the uniform class in CfgVehicles
            containerClass = "Supply90";
            mass = 80; // Adjust mass if needed
            hiddenSelections[] = {
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
            // "Armor_Underpad",
            // "Armor_Straps",
            // "Armor_Upper",
            // "Armor_Lower",
            "Shoulders_Lower1",
            "Shoulders_Lower2",
            // "Shoulders_Upper",
        };
            hiddenSelectionsTextures[] = {
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Desert_TrooperUpperBDU_CO.paa", // Upper texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Desert_TrooperLowerBDU_CO.paa", // Lower texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Desert_TrooperCollar_CO.paa", // Collar texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa", // Soft padding texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa", // Armor straps texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperUpperArmor_CO.paa", // Upper armor texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperLowerArmor_CO.paa", // Lower armor texture
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa", // Shoulders texture
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa", // Shoulders texture (duplicate)
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa"  // Shoulders texture (duplicate)
            };
        };
    }; // Close 22nd_ArmourAridVar1_Light

    class 22nd_ArmourAridVar1_Medium: MA_Marine_BDU_Base {
        scope = 2;  // Visible in editor
        author="Warhound Mod Team";
        displayName = "Warhound Arid Armour Variant 1 (M)"; // In-game name
        picture = "\W_Uniform\W_Armour\IconG.paa"; // Path to icon FUCKING CHANGE BEFORE PUSH
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier"; // Path to uniform model
        
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "22nd_ArmourAridVar1_Medium"; // Reference to the uniform class in CfgVehicles
            containerClass = "Supply90";
            mass = 80; // Adjust mass if needed
            hiddenSelections[] = {
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
            // "Armor_Underpad",
            "Armor_Straps",
            "Armor_Upper",
            "Armor_Lower",
            "Shoulders_Lower1",
            // "Shoulders_Lower2",
            // "Shoulders_Upper",
        };
            hiddenSelectionsTextures[] = {
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Desert_TrooperUpperBDU_CO.paa", // Upper texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Desert_TrooperLowerBDU_CO.paa", // Lower texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Desert_TrooperCollar_CO.paa", // Collar texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa", // Soft padding texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa", // Armor straps texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperUpperArmor_CO.paa", // Upper armor texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperLowerArmor_CO.paa", // Lower armor texture
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa", // Shoulders texture
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa", // Shoulders texture (duplicate)
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa"  // Shoulders texture (duplicate)
            };
        };
    }; // Close 22nd_ArmourAridVar1_Medium

    class 22nd_ArmourAridVar1_Heavy: MA_Marine_BDU_Base {
        scope = 2;  // Visible in editor
        author="Warhound Mod Team";
        displayName = "Warhound Arid Armour Variant 1 (H)"; // In-game name
        picture = "\W_Uniform\W_Armour\IconG.paa"; // Path to icon FUCKING CHANGE BEFORE PUSH
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier"; // Path to uniform model
        
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "22nd_ArmourAridVar1_Heavy"; // Reference to the uniform class in CfgVehicles
            containerClass = "Supply90";
            mass = 80; // Adjust mass if needed
            hiddenSelections[] = {
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
            // "Armor_Underpad",
            "Armor_Straps",
            "Armor_Upper",
            "Armor_Lower",
            // "Shoulders_Lower1",
            "Shoulders_Lower2",
            // "Shoulders_Upper",
        };
            hiddenSelectionsTextures[] = {
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Desert_TrooperUpperBDU_CO.paa", // Upper texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Desert_TrooperLowerBDU_CO.paa", // Lower texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Desert_TrooperCollar_CO.paa", // Collar texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa", // Soft padding texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa", // Armor straps texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperUpperArmor_CO.paa", // Upper armor texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperLowerArmor_CO.paa", // Lower armor texture
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa", // Shoulders texture
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa", // Shoulders texture (duplicate)
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa"  // Shoulders texture (duplicate)
            };
        };
    }; // Close 22nd_ArmourAridVar1_Heavy

    // Begin Arid Variant 1 - Collars

    class 22nd_ArmourAridVar1_LightC: MA_Marine_BDU_Base {
        scope = 2;  // Visible in editor
        author="Warhound Mod Team";
        displayName = "Warhound Arid Armour Variant 1 (LC)"; // In-game name
        picture = "\W_Uniform\W_Armour\IconG.paa"; // Path to icon FUCKING CHANGE BEFORE PUSH
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier"; // Path to uniform model
        
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "22nd_ArmourAridVar1_LightC"; // Reference to the uniform class in CfgVehicles
            containerClass = "Supply90";
            mass = 80; // Adjust mass if needed
            hiddenSelections[] = {
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
            // "Uni_Collar",
            // "Armor_Underpad",
            // "Armor_Straps",
            // "Armor_Upper",
            // "Armor_Lower",
            "Shoulders_Lower1",
            "Shoulders_Lower2",
            // "Shoulders_Upper",
        };
            hiddenSelectionsTextures[] = {
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Desert_TrooperUpperBDU_CO.paa", // Upper texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Desert_TrooperLowerBDU_CO.paa", // Lower texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Desert_TrooperCollar_CO.paa", // Collar texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa", // Soft padding texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa", // Armor straps texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperUpperArmor_CO.paa", // Upper armor texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperLowerArmor_CO.paa", // Lower armor texture
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa", // Shoulders texture
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa", // Shoulders texture (duplicate)
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa"  // Shoulders texture (duplicate)
            };
        };
    }; // Close 22nd_ArmourAridVar1_LightC

    class 22nd_ArmourAridVar1_MediumC: MA_Marine_BDU_Base {
        scope = 2;  // Visible in editor
        author="Warhound Mod Team";
        displayName = "Warhound Arid Armour Variant 1 (MC)"; // In-game name
        picture = "\W_Uniform\W_Armour\IconG.paa"; // Path to icon FUCKING CHANGE BEFORE PUSH
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier"; // Path to uniform model
        
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "22nd_ArmourAridVar1_MediumC"; // Reference to the uniform class in CfgVehicles
            containerClass = "Supply90";
            mass = 80; // Adjust mass if needed
            hiddenSelections[] = {
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
            // "Uni_Collar",
            // "Armor_Underpad",
            "Armor_Straps",
            "Armor_Upper",
            "Armor_Lower",
            "Shoulders_Lower1",
            // "Shoulders_Lower2",
            // "Shoulders_Upper",
        };
            hiddenSelectionsTextures[] = {
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Desert_TrooperUpperBDU_CO.paa", // Upper texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Desert_TrooperLowerBDU_CO.paa", // Lower texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Desert_TrooperCollar_CO.paa", // Collar texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa", // Soft padding texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa", // Armor straps texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperUpperArmor_CO.paa", // Upper armor texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperLowerArmor_CO.paa", // Lower armor texture
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa", // Shoulders texture
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa", // Shoulders texture (duplicate)
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa"  // Shoulders texture (duplicate)
            };
        };
    }; // Close 22nd_ArmourAridVar1_MediumC

    class 22nd_ArmourAridVar1_HeavyC: MA_Marine_BDU_Base {
        scope = 2;  // Visible in editor
        author="Warhound Mod Team";
        displayName = "Warhound Arid Armour Variant 1 (HC)"; // In-game name
        picture = "\W_Uniform\W_Armour\IconG.paa"; // Path to icon FUCKING CHANGE BEFORE PUSH
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier"; // Path to uniform model
        
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "22nd_ArmourAridVar1_HeavyC"; // Reference to the uniform class in CfgVehicles
            containerClass = "Supply90";
            mass = 80; // Adjust mass if needed
            hiddenSelections[] = {
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
            // "Uni_Collar",
            // "Armor_Underpad",
            "Armor_Straps",
            "Armor_Upper",
            "Armor_Lower",
            // "Shoulders_Lower1",
            "Shoulders_Lower2",
            // "Shoulders_Upper",
        };
            hiddenSelectionsTextures[] = {
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Desert_TrooperUpperBDU_CO.paa", // Upper texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Desert_TrooperLowerBDU_CO.paa", // Lower texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Desert_TrooperCollar_CO.paa", // Collar texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa", // Soft padding texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa", // Armor straps texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperUpperArmor_CO.paa", // Upper armor texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperLowerArmor_CO.paa", // Lower armor texture
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa", // Shoulders texture
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa", // Shoulders texture (duplicate)
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa"  // Shoulders texture (duplicate)
            };
        };
    }; // Close 22nd_ArmourAridVar1_HeavyC
    
    // Begin Arid Variant 2 - No Collars

    class 22nd_ArmourAridVar2_Light: MA_Marine_BDU_Base {
        scope = 2;  // Visible in editor
        author="Warhound Mod Team";
        displayName = "Warhound Arid Armour Variant 2 (L)"; // In-game name
        picture = "\W_Uniform\W_Armour\IconG.paa"; // Path to icon FUCKING CHANGE BEFORE PUSH
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier"; // Path to uniform model
        
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "22nd_ArmourAridVar2_Light"; // Reference to the uniform class in CfgVehicles
            containerClass = "Supply90";
            mass = 80; // Adjust mass if needed
            hiddenSelections[] = {
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
            // "Armor_Underpad",
            // "Armor_Straps",
            // "Armor_Upper",
            // "Armor_Lower",
            "Shoulders_Lower1",
            "Shoulders_Lower2",
            // "Shoulders_Upper",
        };
            hiddenSelectionsTextures[] = {
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Brown_TrooperUpperBDU_CO.paa", // Upper texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Desert_TrooperLowerBDU_CO.paa", // Lower texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Desert_TrooperCollar_CO.paa", // Collar texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa", // Soft padding texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa", // Armor straps texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperUpperArmor_CO.paa", // Upper armor texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperLowerArmor_CO.paa", // Lower armor texture
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa", // Shoulders texture
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa", // Shoulders texture (duplicate)
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa"  // Shoulders texture (duplicate)
            };
        };
    }; // Close 22nd_ArmourAridVar2_Light

    class 22nd_ArmourAridVar2_Medium: MA_Marine_BDU_Base {
        scope = 2;  // Visible in editor
        author="Warhound Mod Team";
        displayName = "Warhound Arid Armour Variant 2 (M)"; // In-game name
        picture = "\W_Uniform\W_Armour\IconG.paa"; // Path to icon FUCKING CHANGE BEFORE PUSH
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier"; // Path to uniform model
        
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "22nd_ArmourAridVar2_Medium"; // Reference to the uniform class in CfgVehicles
            containerClass = "Supply90";
            mass = 80; // Adjust mass if needed
            hiddenSelections[] = {
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
            // "Armor_Underpad",
            "Armor_Straps",
            "Armor_Upper",
            "Armor_Lower",
            "Shoulders_Lower1",
            // "Shoulders_Lower2",
            // "Shoulders_Upper",
        };
            hiddenSelectionsTextures[] = {
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Brown_TrooperUpperBDU_CO.paa", // Upper texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Desert_TrooperLowerBDU_CO.paa", // Lower texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Desert_TrooperCollar_CO.paa", // Collar texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa", // Soft padding texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa", // Armor straps texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperUpperArmor_CO.paa", // Upper armor texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperLowerArmor_CO.paa", // Lower armor texture
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa", // Shoulders texture
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa", // Shoulders texture (duplicate)
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa"  // Shoulders texture (duplicate)
            };
        };
    }; // Close 22nd_ArmourAridVar1_Medium

    class 22nd_ArmourAridVar2_Heavy: MA_Marine_BDU_Base {
        scope = 2;  // Visible in editor
        author="Warhound Mod Team";
        displayName = "Warhound Arid Armour Variant 2 (H)"; // In-game name
        picture = "\W_Uniform\W_Armour\IconG.paa"; // Path to icon FUCKING CHANGE BEFORE PUSH
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier"; // Path to uniform model
        
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "22nd_ArmourAridVar2_Heavy"; // Reference to the uniform class in CfgVehicles
            containerClass = "Supply90";
            mass = 80; // Adjust mass if needed
            hiddenSelections[] = {
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
            // "Armor_Underpad",
            "Armor_Straps",
            "Armor_Upper",
            "Armor_Lower",
            // "Shoulders_Lower1",
            "Shoulders_Lower2",
            // "Shoulders_Upper",
        };
            hiddenSelectionsTextures[] = {
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Brown_TrooperUpperBDU_CO.paa", // Upper texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Desert_TrooperLowerBDU_CO.paa", // Lower texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Desert_TrooperCollar_CO.paa", // Collar texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa", // Soft padding texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa", // Armor straps texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperUpperArmor_CO.paa", // Upper armor texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperLowerArmor_CO.paa", // Lower armor texture
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa", // Shoulders texture
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa", // Shoulders texture (duplicate)
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa"  // Shoulders texture (duplicate)
            };
        };
    }; // Close 22nd_ArmourAridVar2_Heavy

    // Begin Arid Variant 2 Collars

    class 22nd_ArmourAridVar2_LightC: MA_Marine_BDU_Base {
        scope = 2;  // Visible in editor
        author="Warhound Mod Team";
        displayName = "Warhound Arid Armour Variant 2 (LC)"; // In-game name
        picture = "\W_Uniform\W_Armour\IconG.paa"; // Path to icon FUCKING CHANGE BEFORE PUSH
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier"; // Path to uniform model
        
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "22nd_ArmourAridVar2_LightC"; // Reference to the uniform class in CfgVehicles
            containerClass = "Supply90";
            mass = 80; // Adjust mass if needed
            hiddenSelections[] = {
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
            // "Uni_Collar",
            // "Armor_Underpad",
            // "Armor_Straps",
            // "Armor_Upper",
            // "Armor_Lower",
            "Shoulders_Lower1",
            "Shoulders_Lower2",
            // "Shoulders_Upper",
        };
            hiddenSelectionsTextures[] = {
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Brown_TrooperUpperBDU_CO.paa", // Upper texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Desert_TrooperLowerBDU_CO.paa", // Lower texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Brown_TrooperCollar_CO.paa", // Collar texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa", // Soft padding texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa", // Armor straps texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperUpperArmor_CO.paa", // Upper armor texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperLowerArmor_CO.paa", // Lower armor texture
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa", // Shoulders texture
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa", // Shoulders texture (duplicate)
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa"  // Shoulders texture (duplicate)
            };
        };
    }; // Close 22nd_ArmourAridVar2_LightC

    class 22nd_ArmourAridVar2_MediumC: MA_Marine_BDU_Base {
        scope = 2;  // Visible in editor
        author="Warhound Mod Team";
        displayName = "Warhound Arid Armour Variant 2 (MC)"; // In-game name
        picture = "\W_Uniform\W_Armour\IconG.paa"; // Path to icon FUCKING CHANGE BEFORE PUSH
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier"; // Path to uniform model
        
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "22nd_ArmourAridVar2_MediumC"; // Reference to the uniform class in CfgVehicles
            containerClass = "Supply90";
            mass = 80; // Adjust mass if needed
            hiddenSelections[] = {
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
            // "Uni_Collar",
            // "Armor_Underpad",
            "Armor_Straps",
            "Armor_Upper",
            "Armor_Lower",
            "Shoulders_Lower1",
            // "Shoulders_Lower2",
            // "Shoulders_Upper",
        };
            hiddenSelectionsTextures[] = {
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Brown_TrooperUpperBDU_CO.paa", // Upper texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Desert_TrooperLowerBDU_CO.paa", // Lower texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Brown_TrooperCollar_CO.paa", // Collar texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa", // Soft padding texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa", // Armor straps texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperUpperArmor_CO.paa", // Upper armor texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperLowerArmor_CO.paa", // Lower armor texture
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa", // Shoulders texture
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa", // Shoulders texture (duplicate)
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa"  // Shoulders texture (duplicate)
            };
        };
    }; // Close 22nd_ArmourAridVar2_MediumC

    class 22nd_ArmourAridVar2_HeavyC: MA_Marine_BDU_Base {
        scope = 2;  // Visible in editor
        author="Warhound Mod Team";
        displayName = "Warhound Arid Armour Variant 2 (HC)"; // In-game name
        picture = "\W_Uniform\W_Armour\IconG.paa"; // Path to icon FUCKING CHANGE BEFORE PUSH
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier"; // Path to uniform model
        
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "22nd_ArmourAridVar2_HeavyC"; // Reference to the uniform class in CfgVehicles
            containerClass = "Supply90";
            mass = 80; // Adjust mass if needed
            hiddenSelections[] = {
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
            // "Uni_Collar",
            // "Armor_Underpad",
            "Armor_Straps",
            "Armor_Upper",
            "Armor_Lower",
            // "Shoulders_Lower1",
            "Shoulders_Lower2",
            // "Shoulders_Upper",
        };
            hiddenSelectionsTextures[] = {
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Brown_TrooperUpperBDU_CO.paa", // Upper texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Desert_TrooperLowerBDU_CO.paa", // Lower texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Brown_TrooperCollar_CO.paa", // Collar texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa", // Soft padding texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa", // Armor straps texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperUpperArmor_CO.paa", // Upper armor texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperLowerArmor_CO.paa", // Lower armor texture
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa", // Shoulders texture
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa", // Shoulders texture (duplicate)
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa"  // Shoulders texture (duplicate)
            };
        };
    }; // Close 22nd_ArmourAridVar2_HeavyC
    
    /*
    * Begin ArmourSnow
    */

    // Begin Winter Variant 1 - No Collars

    class 22nd_ArmourWinterVar1_Light: MA_Marine_BDU_Base {
        scope = 2;  // Visible in editor
        author="Warhound Mod Team";
        displayName = "Warhound Winter Armour Variant 1 (L)"; // In-game name
        picture = "\W_Uniform\W_Armour\IconG.paa"; // Path to icon FUCKING CHANGE BEFORE PUSH
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier"; // Path to uniform model
        
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "22nd_ArmourWinterVar1_Light"; // Reference to the uniform class in CfgVehicles
            containerClass = "Supply90";
            mass = 80; // Adjust mass if needed
            hiddenSelections[] = {
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
            // "Armor_Underpad",
            // "Armor_Straps",
            // "Armor_Upper",
            // "Armor_Lower",
            "Shoulders_Lower1",
            "Shoulders_Lower2",
            // "Shoulders_Upper",
        };
            hiddenSelectionsTextures[] = {
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Winter_TrooperUpperBDU_CO.paa", // Upper texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Winter_TrooperLowerBDU_CO.paa", // Lower texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Winter_TrooperCollar_CO.paa", // Collar texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa", // Soft padding texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa", // Armor straps texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_White_TrooperUpperArmor_CO.paa", // Upper armor texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_White_TrooperLowerArmor_CO.paa", // Lower armor texture
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa", // Shoulders texture
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa", // Shoulders texture (duplicate)
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa"  // Shoulders texture (duplicate)
            };
        };
    }; // Close 22nd_ArmourWinterVar1_Light

    class 22nd_ArmourWinterVar1_Medium: MA_Marine_BDU_Base {
        scope = 2;  // Visible in editor
        author="Warhound Mod Team";
        displayName = "Warhound Winter Armour Variant 1 (M)"; // In-game name
        picture = "\W_Uniform\W_Armour\IconG.paa"; // Path to icon FUCKING CHANGE BEFORE PUSH
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier"; // Path to uniform model
        
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "22nd_ArmourWinterVar1_Medium"; // Reference to the uniform class in CfgVehicles
            containerClass = "Supply90";
            mass = 80; // Adjust mass if needed
            hiddenSelections[] = {
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
            // "Armor_Underpad",
            "Armor_Straps",
            "Armor_Upper",
            "Armor_Lower",
            "Shoulders_Lower1",
            // "Shoulders_Lower2",
            // "Shoulders_Upper",
        };
            hiddenSelectionsTextures[] = {
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Winter_TrooperUpperBDU_CO.paa", // Upper texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Winter_TrooperLowerBDU_CO.paa", // Lower texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Winter_TrooperCollar_CO.paa", // Collar texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa", // Soft padding texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa", // Armor straps texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_White_TrooperUpperArmor_CO.paa", // Upper armor texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_White_TrooperLowerArmor_CO.paa", // Lower armor texture
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa", // Shoulders texture
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa", // Shoulders texture (duplicate)
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa"  // Shoulders texture (duplicate)
            };
        };
    }; // Close 22nd_ArmourWinterVar1_Medium

    class 22nd_ArmourWinterVar1_Heavy: MA_Marine_BDU_Base {
        scope = 2;  // Visible in editor
        author="Warhound Mod Team";
        displayName = "Warhound Winter Armour Variant 1 (H)"; // In-game name
        picture = "\W_Uniform\W_Armour\IconG.paa"; // Path to icon FUCKING CHANGE BEFORE PUSH
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier"; // Path to uniform model
        
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "22nd_ArmourWinterVar1_Heavy"; // Reference to the uniform class in CfgVehicles
            containerClass = "Supply90";
            mass = 80; // Adjust mass if needed
            hiddenSelections[] = {
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
            // "Armor_Underpad",
            "Armor_Straps",
            "Armor_Upper",
            "Armor_Lower",
            // "Shoulders_Lower1",
            "Shoulders_Lower2",
            // "Shoulders_Upper",
        };
            hiddenSelectionsTextures[] = {
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Winter_TrooperUpperBDU_CO.paa", // Upper texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Winter_TrooperLowerBDU_CO.paa", // Lower texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Winter_TrooperCollar_CO.paa", // Collar texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa", // Soft padding texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa", // Armor straps texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_White_TrooperUpperArmor_CO.paa", // Upper armor texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_White_TrooperLowerArmor_CO.paa", // Lower armor texture
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa", // Shoulders texture
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa", // Shoulders texture (duplicate)
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa"  // Shoulders texture (duplicate)
            };
        };
    }; // Close 22nd_ArmourWinterVar1_Heavy    

    // Begin Winter Variant 1 - Collars

    class 22nd_ArmourWinterVar1_LightC: MA_Marine_BDU_Base {
        scope = 2;  // Visible in editor
        author="Warhound Mod Team";
        displayName = "Warhound Winter Armour Variant 1 (LC)"; // In-game name
        picture = "\W_Uniform\W_Armour\IconG.paa"; // Path to icon FUCKING CHANGE BEFORE PUSH
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier"; // Path to uniform model
        
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "22nd_ArmourWinterVar1_LightC"; // Reference to the uniform class in CfgVehicles
            containerClass = "Supply90";
            mass = 80; // Adjust mass if needed
            hiddenSelections[] = {
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
            // "Uni_Collar",
            // "Armor_Underpad",
            // "Armor_Straps",
            // "Armor_Upper",
            // "Armor_Lower",
            "Shoulders_Lower1",
            "Shoulders_Lower2",
            // "Shoulders_Upper",
        };
            hiddenSelectionsTextures[] = {
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Winter_TrooperUpperBDU_CO.paa", // Upper texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Winter_TrooperLowerBDU_CO.paa", // Lower texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Winter_TrooperCollar_CO.paa", // Collar texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa", // Soft padding texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa", // Armor straps texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_White_TrooperUpperArmor_CO.paa", // Upper armor texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_White_TrooperLowerArmor_CO.paa", // Lower armor texture
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa", // Shoulders texture
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa", // Shoulders texture (duplicate)
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa"  // Shoulders texture (duplicate)
            };
        };
    }; // Close 22nd_ArmourWinterVar1_LightC

    class 22nd_ArmourWinterVar1_MediumC: MA_Marine_BDU_Base {
        scope = 2;  // Visible in editor
        author="Warhound Mod Team";
        displayName = "Warhound Winter Armour Variant 1 (MC)"; // In-game name
        picture = "\W_Uniform\W_Armour\IconG.paa"; // Path to icon FUCKING CHANGE BEFORE PUSH
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier"; // Path to uniform model
        
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "22nd_ArmourWinterVar1_MediumC"; // Reference to the uniform class in CfgVehicles
            containerClass = "Supply90";
            mass = 80; // Adjust mass if needed
            hiddenSelections[] = {
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
            // "Uni_Collar",
            // "Armor_Underpad",
            "Armor_Straps",
            "Armor_Upper",
            "Armor_Lower",
            "Shoulders_Lower1",
            // "Shoulders_Lower2",
            // "Shoulders_Upper",
        };
            hiddenSelectionsTextures[] = {
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Winter_TrooperUpperBDU_CO.paa", // Upper texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Winter_TrooperLowerBDU_CO.paa", // Lower texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Winter_TrooperCollar_CO.paa", // Collar texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa", // Soft padding texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa", // Armor straps texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_White_TrooperUpperArmor_CO.paa", // Upper armor texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_White_TrooperLowerArmor_CO.paa", // Lower armor texture
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa", // Shoulders texture
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa", // Shoulders texture (duplicate)
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa"  // Shoulders texture (duplicate)
            };
        };
    }; // Close 22nd_ArmourWinterVar1_MediumC

    class 22nd_ArmourWinterVar1_HeavyC: MA_Marine_BDU_Base {
        scope = 2;  // Visible in editor
        author="Warhound Mod Team";
        displayName = "Warhound Winter Armour Variant 1 (HC)"; // In-game name
        picture = "\W_Uniform\W_Armour\IconG.paa"; // Path to icon FUCKING CHANGE BEFORE PUSH
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier"; // Path to uniform model
        
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "22nd_ArmourWinterVar1_HeavyC"; // Reference to the uniform class in CfgVehicles
            containerClass = "Supply90";
            mass = 80; // Adjust mass if needed
            hiddenSelections[] = {
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
            // "Uni_Collar",
            // "Armor_Underpad",
            "Armor_Straps",
            "Armor_Upper",
            "Armor_Lower",
            // "Shoulders_Lower1",
            "Shoulders_Lower2",
            // "Shoulders_Upper",
        };
            hiddenSelectionsTextures[] = {
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Winter_TrooperUpperBDU_CO.paa", // Upper texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Winter_TrooperLowerBDU_CO.paa", // Lower texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Winter_TrooperCollar_CO.paa", // Collar texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa", // Soft padding texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa", // Armor straps texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_White_TrooperUpperArmor_CO.paa", // Upper armor texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_White_TrooperLowerArmor_CO.paa", // Lower armor texture
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa", // Shoulders texture
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa", // Shoulders texture (duplicate)
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa"  // Shoulders texture (duplicate)
            };
        };
    }; // Close 22nd_ArmourWinterVar1_HeavyC

    // Begin Winter Variant 2 - No Collar

    class 22nd_ArmourWinterVar2_Light: MA_Marine_BDU_Base {
        scope = 2;  // Visible in editor
        author="Warhound Mod Team";
        displayName = "Warhound Winter Armour Variant 2 (L)"; // In-game name
        picture = "\W_Uniform\W_Armour\IconG.paa"; // Path to icon FUCKING CHANGE BEFORE PUSH
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier"; // Path to uniform model
        
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "22nd_ArmourWinterVar2_Light"; // Reference to the uniform class in CfgVehicles
            containerClass = "Supply90";
            mass = 80; // Adjust mass if needed
            hiddenSelections[] = {
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
            // "Armor_Underpad",
            // "Armor_Straps",
            // "Armor_Upper",
            // "Armor_Lower",
            "Shoulders_Lower1",
            "Shoulders_Lower2",
            // "Shoulders_Upper",
        };
            hiddenSelectionsTextures[] = {
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_White_TrooperUpperBDU_CO.paa", // Upper texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Winter_TrooperLowerBDU_CO.paa", // Lower texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Winter_TrooperCollar_CO.paa", // Collar texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa", // Soft padding texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa", // Armor straps texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_White_TrooperUpperArmor_CO.paa", // Upper armor texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_White_TrooperLowerArmor_CO.paa", // Lower armor texture
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa", // Shoulders texture
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa", // Shoulders texture (duplicate)
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa"  // Shoulders texture (duplicate)
            };
        };
    }; // Close 22nd_ArmourWinterVar2_Light

    class 22nd_ArmourWinterVar2_Medium: MA_Marine_BDU_Base {
        scope = 2;  // Visible in editor
        author="Warhound Mod Team";
        displayName = "Warhound Winter Armour Variant 2 (M)"; // In-game name
        picture = "\W_Uniform\W_Armour\IconG.paa"; // Path to icon FUCKING CHANGE BEFORE PUSH
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier"; // Path to uniform model
        
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "22nd_ArmourWinterVar2_Medium"; // Reference to the uniform class in CfgVehicles
            containerClass = "Supply90";
            mass = 80; // Adjust mass if needed
            hiddenSelections[] = {
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
            // "Armor_Underpad",
            "Armor_Straps",
            "Armor_Upper",
            "Armor_Lower",
            "Shoulders_Lower1",
            // "Shoulders_Lower2",
            // "Shoulders_Upper",
        };
            hiddenSelectionsTextures[] = {
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_White_TrooperUpperBDU_CO.paa", // Upper texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Winter_TrooperLowerBDU_CO.paa", // Lower texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Winter_TrooperCollar_CO.paa", // Collar texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa", // Soft padding texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa", // Armor straps texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_White_TrooperUpperArmor_CO.paa", // Upper armor texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_White_TrooperLowerArmor_CO.paa", // Lower armor texture
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa", // Shoulders texture
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa", // Shoulders texture (duplicate)
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa"  // Shoulders texture (duplicate)
            };
        };
    }; // Close 22nd_ArmourWinterVar2_Medium

    class 22nd_ArmourWinterVar2_Heavy: MA_Marine_BDU_Base {
        scope = 2;  // Visible in editor
        author="Warhound Mod Team";
        displayName = "Warhound Winter Armour Variant 2 (H)"; // In-game name
        picture = "\W_Uniform\W_Armour\IconG.paa"; // Path to icon FUCKING CHANGE BEFORE PUSH
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier"; // Path to uniform model
        
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "22nd_ArmourWinterVar2_Heavy"; // Reference to the uniform class in CfgVehicles
            containerClass = "Supply90";
            mass = 80; // Adjust mass if needed
            hiddenSelections[] = {
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
            // "Armor_Underpad",
            "Armor_Straps",
            "Armor_Upper",
            "Armor_Lower",
            // "Shoulders_Lower1",
            "Shoulders_Lower2",
            // "Shoulders_Upper",
        };
            hiddenSelectionsTextures[] = {
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_White_TrooperUpperBDU_CO.paa", // Upper texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Winter_TrooperLowerBDU_CO.paa", // Lower texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Winter_TrooperCollar_CO.paa", // Collar texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa", // Soft padding texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa", // Armor straps texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_White_TrooperUpperArmor_CO.paa", // Upper armor texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_White_TrooperLowerArmor_CO.paa", // Lower armor texture
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa", // Shoulders texture
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa", // Shoulders texture (duplicate)
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa"  // Shoulders texture (duplicate)
            };
        };
    }; // Close 22nd_ArmourWinterVar1_Heavy

    // Begin Winter Variant 2 - Collar

    class 22nd_ArmourWinterVar2_LightC: MA_Marine_BDU_Base {
        scope = 2;  // Visible in editor
        author="Warhound Mod Team";
        displayName = "Warhound Winter Armour Variant 2 (LC)"; // In-game name
        picture = "\W_Uniform\W_Armour\IconG.paa"; // Path to icon FUCKING CHANGE BEFORE PUSH
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier"; // Path to uniform model
        
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "22nd_ArmourWinterVar2_LightC"; // Reference to the uniform class in CfgVehicles
            containerClass = "Supply90";
            mass = 80; // Adjust mass if needed
            hiddenSelections[] = {
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
            // "Uni_Collar",
            // "Armor_Underpad",
            // "Armor_Straps",
            // "Armor_Upper",
            // "Armor_Lower",
            "Shoulders_Lower1",
            "Shoulders_Lower2",
            // "Shoulders_Upper",
        };
            hiddenSelectionsTextures[] = {
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_White_TrooperUpperBDU_CO.paa", // Upper texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Winter_TrooperLowerBDU_CO.paa", // Lower texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_White_TrooperCollar_CO.paa", // Collar texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa", // Soft padding texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa", // Armor straps texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_White_TrooperUpperArmor_CO.paa", // Upper armor texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_White_TrooperLowerArmor_CO.paa", // Lower armor texture
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa", // Shoulders texture
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa", // Shoulders texture (duplicate)
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa"  // Shoulders texture (duplicate)
            };
        };
    }; // Close 22nd_ArmourWinterVar2_LightC

    class 22nd_ArmourWinterVar2_MediumC: MA_Marine_BDU_Base {
        scope = 2;  // Visible in editor
        author="Warhound Mod Team";
        displayName = "Warhound Winter Armour Variant 2 (MC)"; // In-game name
        picture = "\W_Uniform\W_Armour\IconG.paa"; // Path to icon FUCKING CHANGE BEFORE PUSH
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier"; // Path to uniform model
        
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "22nd_ArmourWinterVar2_MediumC"; // Reference to the uniform class in CfgVehicles
            containerClass = "Supply90";
            mass = 80; // Adjust mass if needed
            hiddenSelections[] = {
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
            // "Uni_Collar",
            // "Armor_Underpad",
            "Armor_Straps",
            "Armor_Upper",
            "Armor_Lower",
            "Shoulders_Lower1",
            // "Shoulders_Lower2",
            // "Shoulders_Upper",
        };
            hiddenSelectionsTextures[] = {
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_White_TrooperUpperBDU_CO.paa", // Upper texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Winter_TrooperLowerBDU_CO.paa", // Lower texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_White_TrooperCollar_CO.paa", // Collar texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa", // Soft padding texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa", // Armor straps texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_White_TrooperUpperArmor_CO.paa", // Upper armor texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_White_TrooperLowerArmor_CO.paa", // Lower armor texture
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa", // Shoulders texture
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa", // Shoulders texture (duplicate)
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa"  // Shoulders texture (duplicate)
            };
        };
    }; // Close 22nd_ArmourWinterVar2_MediumC

    class 22nd_ArmourWinterVar2_HeavyC: MA_Marine_BDU_Base {
        scope = 2;  // Visible in editor
        author="Warhound Mod Team";
        displayName = "Warhound Winter Armour Variant 2 (HC)"; // In-game name
        picture = "\W_Uniform\W_Armour\IconG.paa"; // Path to icon FUCKING CHANGE BEFORE PUSH
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier"; // Path to uniform model
        
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "22nd_ArmourWinterVar2_HeavyC"; // Reference to the uniform class in CfgVehicles
            containerClass = "Supply90";
            mass = 80; // Adjust mass if needed
            hiddenSelections[] = {
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
            // "Uni_Collar",
            // "Armor_Underpad",
            "Armor_Straps",
            "Armor_Upper",
            "Armor_Lower",
            // "Shoulders_Lower1",
            "Shoulders_Lower2",
            // "Shoulders_Upper",
        };
            hiddenSelectionsTextures[] = {
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_White_TrooperUpperBDU_CO.paa", // Upper texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Winter_TrooperLowerBDU_CO.paa", // Lower texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_White_TrooperCollar_CO.paa", // Collar texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa", // Soft padding texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa", // Armor straps texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_White_TrooperUpperArmor_CO.paa", // Upper armor texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_White_TrooperLowerArmor_CO.paa", // Lower armor texture
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa", // Shoulders texture
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa", // Shoulders texture (duplicate)
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa"  // Shoulders texture (duplicate)
            };
        };
    }; // Close 22nd_ArmourWinterVar1_HeavyC

    // Begin Winter Variant 3 - No Collar

    class 22nd_ArmourWinterVar3_Light: MA_Marine_BDU_Base {
        scope = 2;  // Visible in editor
        author="Warhound Mod Team";
        displayName = "Warhound Winter Armour Variant 3 (L)"; // In-game name
        picture = "\W_Uniform\W_Armour\IconG.paa"; // Path to icon FUCKING CHANGE BEFORE PUSH
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier"; // Path to uniform model
        
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "22nd_ArmourWinterVar3_Light"; // Reference to the uniform class in CfgVehicles
            containerClass = "Supply90";
            mass = 80; // Adjust mass if needed
            hiddenSelections[] = {
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
            // "Armor_Underpad",
            // "Armor_Straps",
            // "Armor_Upper",
            // "Armor_Lower",
            "Shoulders_Lower1",
            "Shoulders_Lower2",
            // "Shoulders_Upper",
        };
            hiddenSelectionsTextures[] = {
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Gray_TrooperUpperBDU_CO.paa", // Upper texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Winter_TrooperLowerBDU_CO.paa", // Lower texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Gray_TrooperCollar_CO.paa", // Collar texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa", // Soft padding texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa", // Armor straps texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_White_TrooperUpperArmor_CO.paa", // Upper armor texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_White_TrooperLowerArmor_CO.paa", // Lower armor texture
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa", // Shoulders texture
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa", // Shoulders texture (duplicate)
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa"  // Shoulders texture (duplicate)
            };
        };
    }; // Close 22nd_ArmourWinterVar3_Light

    class 22nd_ArmourWinterVar3_Medium: MA_Marine_BDU_Base {
        scope = 2;  // Visible in editor
        author="Warhound Mod Team";
        displayName = "Warhound Winter Armour Variant 3 (M)"; // In-game name
        picture = "\W_Uniform\W_Armour\IconG.paa"; // Path to icon FUCKING CHANGE BEFORE PUSH
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier"; // Path to uniform model
        
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "22nd_ArmourWinterVar3_Medium"; // Reference to the uniform class in CfgVehicles
            containerClass = "Supply90";
            mass = 80; // Adjust mass if needed
            hiddenSelections[] = {
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
            // "Armor_Underpad",
            "Armor_Straps",
            "Armor_Upper",
            "Armor_Lower",
            "Shoulders_Lower1",
            // "Shoulders_Lower2",
            // "Shoulders_Upper",
        };
            hiddenSelectionsTextures[] = {
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Gray_TrooperUpperBDU_CO.paa", // Upper texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Winter_TrooperLowerBDU_CO.paa", // Lower texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Gray_TrooperCollar_CO.paa", // Collar texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa", // Soft padding texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa", // Armor straps texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_White_TrooperUpperArmor_CO.paa", // Upper armor texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_White_TrooperLowerArmor_CO.paa", // Lower armor texture
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa", // Shoulders texture
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa", // Shoulders texture (duplicate)
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa"  // Shoulders texture (duplicate)
            };
        };
    }; // Close 22nd_ArmourWinterVar3_Medium

    class 22nd_ArmourWinterVar3_Heavy: MA_Marine_BDU_Base {
        scope = 2;  // Visible in editor
        author="Warhound Mod Team";
        displayName = "Warhound Winter Armour Variant 3 (H)"; // In-game name
        picture = "\W_Uniform\W_Armour\IconG.paa"; // Path to icon FUCKING CHANGE BEFORE PUSH
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier"; // Path to uniform model
        
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "22nd_ArmourWinterVar3_Heavy"; // Reference to the uniform class in CfgVehicles
            containerClass = "Supply90";
            mass = 80; // Adjust mass if needed
            hiddenSelections[] = {
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
            // "Armor_Underpad",
            "Armor_Straps",
            "Armor_Upper",
            "Armor_Lower",
            // "Shoulders_Lower1",
            "Shoulders_Lower2",
            // "Shoulders_Upper",
        };
            hiddenSelectionsTextures[] = {
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Gray_TrooperUpperBDU_CO.paa", // Upper texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Winter_TrooperLowerBDU_CO.paa", // Lower texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Gray_TrooperCollar_CO.paa", // Collar texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa", // Soft padding texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa", // Armor straps texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_White_TrooperUpperArmor_CO.paa", // Upper armor texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_White_TrooperLowerArmor_CO.paa", // Lower armor texture
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa", // Shoulders texture
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa", // Shoulders texture (duplicate)
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa"  // Shoulders texture (duplicate)
            };
        };
    }; // Close 22nd_ArmourWinterVar3_Heavy

    // Begin Winter Variant 3 - Collar

    class 22nd_ArmourWinterVar3_LightC: MA_Marine_BDU_Base {
        scope = 2;  // Visible in editor
        author="Warhound Mod Team";
        displayName = "Warhound Winter Armour Variant 3 (LC)"; // In-game name
        picture = "\W_Uniform\W_Armour\IconG.paa"; // Path to icon FUCKING CHANGE BEFORE PUSH
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier"; // Path to uniform model
        
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "22nd_ArmourWinterVar3_LightC"; // Reference to the uniform class in CfgVehicles
            containerClass = "Supply90";
            mass = 80; // Adjust mass if needed
            hiddenSelections[] = {
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
            // "Uni_Collar",
            // "Armor_Underpad",
            // "Armor_Straps",
            // "Armor_Upper",
            // "Armor_Lower",
            "Shoulders_Lower1",
            "Shoulders_Lower2",
            // "Shoulders_Upper",
        };
            hiddenSelectionsTextures[] = {
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Gray_TrooperUpperBDU_CO.paa", // Upper texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Winter_TrooperLowerBDU_CO.paa", // Lower texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Gray_TrooperCollar_CO.paa", // Collar texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa", // Soft padding texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa", // Armor straps texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_White_TrooperUpperArmor_CO.paa", // Upper armor texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_White_TrooperLowerArmor_CO.paa", // Lower armor texture
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa", // Shoulders texture
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa", // Shoulders texture (duplicate)
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa"  // Shoulders texture (duplicate)
            };
        };
    }; // Close 22nd_ArmourWinterVar3_LightC

    class 22nd_ArmourWinterVar3_MediumC: MA_Marine_BDU_Base {
        scope = 2;  // Visible in editor
        author="Warhound Mod Team";
        displayName = "Warhound Winter Armour Variant 3 (MC)"; // In-game name
        picture = "\W_Uniform\W_Armour\IconG.paa"; // Path to icon FUCKING CHANGE BEFORE PUSH
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier"; // Path to uniform model
        
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "22nd_ArmourWinterVar3_MediumC"; // Reference to the uniform class in CfgVehicles
            containerClass = "Supply90";
            mass = 80; // Adjust mass if needed
            hiddenSelections[] = {
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
            // "Uni_Collar",
            // "Armor_Underpad",
            "Armor_Straps",
            "Armor_Upper",
            "Armor_Lower",
            "Shoulders_Lower1",
            // "Shoulders_Lower2",
            // "Shoulders_Upper",
        };
            hiddenSelectionsTextures[] = {
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Gray_TrooperUpperBDU_CO.paa", // Upper texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Winter_TrooperLowerBDU_CO.paa", // Lower texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Gray_TrooperCollar_CO.paa", // Collar texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa", // Soft padding texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa", // Armor straps texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_White_TrooperUpperArmor_CO.paa", // Upper armor texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_White_TrooperLowerArmor_CO.paa", // Lower armor texture
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa", // Shoulders texture
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa", // Shoulders texture (duplicate)
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa"  // Shoulders texture (duplicate)
            };
        };
    }; // Close 22nd_ArmourWinterVar3_MediumC

    class 22nd_ArmourWinterVar3_HeavyC: MA_Marine_BDU_Base {
        scope = 2;  // Visible in editor
        author="Warhound Mod Team";
        displayName = "Warhound Winter Armour Variant 3 (HC)"; // In-game name
        picture = "\W_Uniform\W_Armour\IconG.paa"; // Path to icon FUCKING CHANGE BEFORE PUSH
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier"; // Path to uniform model
        
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "22nd_ArmourWinterVar3_HeavyC"; // Reference to the uniform class in CfgVehicles
            containerClass = "Supply90";
            mass = 80; // Adjust mass if needed
            hiddenSelections[] = {
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
            // "Uni_Collar",
            // "Armor_Underpad",
            "Armor_Straps",
            "Armor_Upper",
            "Armor_Lower",
            // "Shoulders_Lower1",
            "Shoulders_Lower2",
            // "Shoulders_Upper",
        };
            hiddenSelectionsTextures[] = {
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Gray_TrooperUpperBDU_CO.paa", // Upper texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Winter_TrooperLowerBDU_CO.paa", // Lower texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Gray_TrooperCollar_CO.paa", // Collar texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa", // Soft padding texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa", // Armor straps texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_White_TrooperUpperArmor_CO.paa", // Upper armor texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_White_TrooperLowerArmor_CO.paa", // Lower armor texture
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa", // Shoulders texture
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa", // Shoulders texture (duplicate)
                "\W_Uniform\W_Armour\Infantry\Base\22nd_Shoulders_Base.paa"  // Shoulders texture (duplicate)
            };
        };
    }; // Close 22nd_ArmourWinterVar3_HeavyC

    /*
    * Begin Custom Armours
    */

    // Raven

    class 22nd_ArmourRavenBase_Medium: MA_Marine_BDU_Base {
        scope = 2;  // Visible in editor
        author="Warhound Mod Team";
        displayName = "Warhound Raven Armour Base Variant (M)"; // In-game name
        picture = "\W_Uniform\W_Armour\IconG.paa"; // Path to icon FUCKING CHANGE BEFORE PUSH
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier"; // Path to uniform model
        
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "22nd_ArmourRavenBase_Medium"; // Reference to the uniform class in CfgVehicles
            containerClass = "Supply90";
            mass = 80; // Adjust mass if needed
            hiddenSelections[] = {
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
            // "Armor_Underpad",
            "Armor_Straps",
            "Armor_Upper",
            "Armor_Lower",
            "Shoulders_Lower1",
            // "Shoulders_Lower2",
            // "Shoulders_Upper"
        };
            hiddenSelectionsTextures[] = {
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Green_TrooperUpperBDU_CO.paa", // Upper texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Woodland_TrooperLowerBDU_CO.paa", // Lower texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Woodland_TrooperCollar_CO.paa", // Collar texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa", // Soft padding texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa", // Armor straps texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperUpperArmor_CO.paa", // Upper armor texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperLowerArmor_CO.paa", // Lower armor texture
                "\W_Uniform\W_Armour\Custom\RavenShoulders.paa", // Shoulders texture
                "\W_Uniform\W_Armour\Custom\RavenShoulders.paa", // Shoulders texture (duplicate)
                "\W_Uniform\W_Armour\Custom\RavenShoulders.paa"  // Shoulders texture (duplicate)
            };
        };
    }; // Close 22nd_ArmourRavenBase_Medium

    class 22nd_ArmourRavenArid_Medium: MA_Marine_BDU_Base {
        scope = 2;  // Visible in editor
        author="Warhound Mod Team";
        displayName = "Warhound Raven Armour Arid Variant (M)"; // In-game name
        picture = "\W_Uniform\W_Armour\IconG.paa"; // Path to icon FUCKING CHANGE BEFORE PUSH
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier"; // Path to uniform model
        
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "22nd_ArmourRavenArid_Medium"; // Reference to the uniform class in CfgVehicles
            containerClass = "Supply90";
            mass = 80; // Adjust mass if needed
            hiddenSelections[] = {
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
            // "Armor_Underpad",
            "Armor_Straps",
            "Armor_Upper",
            "Armor_Lower",
            "Shoulders_Lower1",
            // "Shoulders_Lower2",
            // "Shoulders_Upper"
        };
            hiddenSelectionsTextures[] = {
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Brown_TrooperUpperBDU_CO.paa", // Upper texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Desert_TrooperLowerBDU_CO.paa", // Lower texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Desert_TrooperCollar_CO.paa", // Collar texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa", // Soft padding texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa", // Armor straps texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperUpperArmor_CO.paa", // Upper armor texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_brown_TrooperLowerArmor_CO.paa", // Lower armor texture
                "\W_Uniform\W_Armour\Custom\RavenShoulders.paa", // Shoulders texture
                "\W_Uniform\W_Armour\Custom\RavenShoulders.paa", // Shoulders texture (duplicate)
                "\W_Uniform\W_Armour\Custom\RavenShoulders.paa"  // Shoulders texture (duplicate)
            };
        };
    }; // Close 22nd_ArmourRavenArid_Medium

    class 22nd_ArmourRavenWinter_Medium: MA_Marine_BDU_Base {
        scope = 2;  // Visible in editor
        author="Warhound Mod Team";
        displayName = "Warhound Raven Armour Winter Variant (M)"; // In-game name
        picture = "\W_Uniform\W_Armour\IconG.paa"; // Path to icon FUCKING CHANGE BEFORE PUSH
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier"; // Path to uniform model
        
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "22nd_ArmourRavenWinter_Medium"; // Reference to the uniform class in CfgVehicles
            containerClass = "Supply90";
            mass = 80; // Adjust mass if needed
            hiddenSelections[] = {
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
            // "Armor_Underpad",
            "Armor_Straps",
            "Armor_Upper",
            "Armor_Lower",
            "Shoulders_Lower1",
            // "Shoulders_Lower2",
            // "Shoulders_Upper"
        };
            hiddenSelectionsTextures[] = {
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Gray_TrooperUpperBDU_CO.paa", // Upper texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Winter_TrooperLowerBDU_CO.paa", // Lower texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Gray_TrooperCollar_CO.paa", // Collar texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa", // Soft padding texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa", // Armor straps texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_White_TrooperUpperArmor_CO.paa", // Upper armor texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_White_TrooperLowerArmor_CO.paa", // Lower armor texture
                "\W_Uniform\W_Armour\Custom\RavenShoulders.paa", // Shoulders texture
                "\W_Uniform\W_Armour\Custom\RavenShoulders.paa", // Shoulders texture (duplicate)
                "\W_Uniform\W_Armour\Custom\RavenShoulders.paa"  // Shoulders texture (duplicate)
            };
        };
    }; // Close 22nd_ArmourRavenWinter_Medium
};