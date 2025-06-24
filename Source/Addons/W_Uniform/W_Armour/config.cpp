class CfgPatches {
    class WarhoundArmoury {
        units[] = { 
            //Base
            "22nd_ArmourBaseVar1_Light",
            "22nd_ArmourBaseVar1_Medium",
            "22nd_ArmourBaseVar1_Heavy",
            "22nd_ArmourBaseVar2_Light",
            "22nd_ArmourBaseVar2_Medium",
            "22nd_ArmourBaseVar2_Heavy",
            "22nd_ArmourBaseVar3_Light",
            "22nd_ArmourBaseVar3_Medium",
            "22nd_ArmourBaseVar3_Heavy",
            //Arid
            "22nd_ArmourAridVar1_Light",
            "22nd_ArmourAridVar1_Medium",
            "22nd_ArmourAridVar1_Heavy",
            "22nd_ArmourAridVar2_Light",
            "22nd_ArmourAridVar2_Medium",
            "22nd_ArmourAridVar2_Heavy",
            "22nd_ArmourAridVar3_Light",
            "22nd_ArmourAridVar3_Medium",
            "22nd_ArmourAridVar3_Heavy",
            //Winter
            "22nd_ArmourWinterVar1_Light",
            "22nd_ArmourWinterVar1_Medium",
            "22nd_ArmourWinterVar1_Heavy",
            // Customs
            // To Be Added


        };
        weapons[] = {
            //Base
            "22nd_ArmourBaseVar1_Light",
            "22nd_ArmourBaseVar1_Medium",
            "22nd_ArmourBaseVar1_Heavy",
            "22nd_ArmourBaseVar2_Light",
            "22nd_ArmourBaseVar2_Medium",
            "22nd_ArmourBaseVar2_Heavy",
            "22nd_ArmourBaseVar3_Light",
            "22nd_ArmourBaseVar3_Medium",
            "22nd_ArmourBaseVar3_Heavy",
            //Arid
            "22nd_ArmourAridVar1_Light",
            "22nd_ArmourAridVar1_Medium",
            "22nd_ArmourAridVar1_Heavy",
            "22nd_ArmourAridVar2_Light",
            "22nd_ArmourAridVar2_Medium",
            "22nd_ArmourAridVar2_Heavy",
            "22nd_ArmourAridVar3_Light",
            "22nd_ArmourAridVar3_Medium",
            "22nd_ArmourAridVar3_Heavy",
            //Winter
            "22nd_ArmourWinterVar1_Light",
            "22nd_ArmourWinterVar1_Medium",
            "22nd_ArmourWinterVar1_Heavy",
            // Customs
            // To Be Added

        }; // Link your uniform class
        requiredVersion = 1.0;
        requiredAddons[] = {"MA_Armor", "A3_Characters_F", "A3_Data_F_Mark"}; // Reference any required addons
    };
};
class CfgVehicles {
    class MA_Marine_BDU_Base;

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
            // "Uni_Upper",
            // "Uni_Lower",
             "Uni_Collar",
            // "Armor_Underpad",
            // "Armor_Straps",
            "Armor_Upper",
            // "Armor_Lower",
            // "Shoulders_Lower1",
            // "Shoulders_Lower2",
            // "Shoulders_Upper"
        };

        hiddenSelectionsTextures[] = {
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Woodland_TrooperUpperBDU_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Woodland_TrooperLowerBDU_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Woodland_TrooperCollar_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa",
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_green_TrooperUpperArmor_CO.paa", // Will need new texture
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_green_TrooperLowerArmor_CO.paa",
            "W_Uniform\W_Armour\Infantry\Base\MA_green_TrooperShoulders_CO.paa",
            "W_Uniform\W_Armour\Infantry\Base\MA_green_TrooperShoulders_CO.paa",
            "W_Uniform\W_Armour\Infantry\Base\MA_green_TrooperShoulders_CO.paa",
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
            "Armor_Underpad",
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
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_green_TrooperUpperArmor_CO.paa", // Will need new texture
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_green_TrooperLowerArmor_CO.paa",
            "W_Uniform\W_Armour\Infantry\Base\MA_green_TrooperShoulders_CO.paa",
            "W_Uniform\W_Armour\Infantry\Base\MA_green_TrooperShoulders_CO.paa",
            "W_Uniform\W_Armour\Infantry\Base\MA_green_TrooperShoulders_CO.paa",
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
            "Armor_Underpad",
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
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_green_TrooperUpperArmor_CO.paa", // Will need new texture
            "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_green_TrooperLowerArmor_CO.paa",
            "W_Uniform\W_Armour\Infantry\Base\MA_green_TrooperShoulders_CO.paa",
            "W_Uniform\W_Armour\Infantry\Base\MA_green_TrooperShoulders_CO.paa",
            "W_Uniform\W_Armour\Infantry\Base\MA_green_TrooperShoulders_CO.paa",
        };
    }; // Close 22nd_ArmourBaseVar1_Heavy
};
class CfgWeapons {
    class MA_Marine_BDU_Base;
    class UniformItem;

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
            // "Uni_Upper",
            // "Uni_Lower",
             "Uni_Collar",
            // "Armor_Underpad",
            // "Armor_Straps",
            // "Armor_Upper",
            // "Armor_Lower",
            "Shoulders_Lower1",
            "Shoulders_Lower2",
            "Shoulders_Upper",
        };
            hiddenSelectionsTextures[] = {
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Woodland_TrooperUpperBDU_CO.paa", // Upper texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Woodland_TrooperLowerBDU_CO.paa", // Lower texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_Woodland_TrooperCollar_CO.paa", // Collar texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa", // Soft padding texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa", // Armor straps texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_green_TrooperUpperArmor_CO.paa", // Upper armor texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_green_TrooperLowerArmor_CO.paa", // Lower armor texture
                "\W_Uniform\W_Armour\Infantry\Base\MA_green_TrooperShoulders_CO.paa", // Shoulders texture
                "\W_Uniform\W_Armour\Infantry\Base\MA_green_TrooperShoulders_CO.paa", // Shoulders texture (duplicate)
                "\W_Uniform\W_Armour\Infantry\Base\MA_green_TrooperShoulders_CO.paa"  // Shoulders texture (duplicate)
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
            // "Uni_Upper",
            // "Uni_Lower",
            "Uni_Collar",
            "Armor_Underpad",
            // "Armor_Straps",
            // "Armor_Upper",
            // "Armor_Lower",
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
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_green_TrooperUpperArmor_CO.paa", // Upper armor texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_green_TrooperLowerArmor_CO.paa", // Lower armor texture
                "\W_Uniform\W_Armour\Infantry\Base\MA_green_TrooperShoulders_CO.paa", // Shoulders texture
                "\W_Uniform\W_Armour\Infantry\Base\MA_green_TrooperShoulders_CO.paa", // Shoulders texture (duplicate)
                "\W_Uniform\W_Armour\Infantry\Base\MA_green_TrooperShoulders_CO.paa"  // Shoulders texture (duplicate)
            };
        };
    }; // Close 22nd_ArmourBaseVar1_Medium
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
            // "Uni_Upper",
            // "Uni_Lower",
            "Uni_Collar",
            "Armor_Underpad",
            // "Armor_Straps",
            // "Armor_Upper",
            // "Armor_Lower",
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
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_green_TrooperUpperArmor_CO.paa", // Upper armor texture
                "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_green_TrooperLowerArmor_CO.paa", // Lower armor texture
                "\W_Uniform\W_Armour\Infantry\Base\MA_green_TrooperShoulders_CO.paa", // Shoulders texture
                "\W_Uniform\W_Armour\Infantry\Base\MA_green_TrooperShoulders_CO.paa", // Shoulders texture (duplicate)
                "\W_Uniform\W_Armour\Infantry\Base\MA_green_TrooperShoulders_CO.paa"  // Shoulders texture (duplicate)
            };
        };
    }; // Close 22nd_ArmourBaseVar1_Heavy
};