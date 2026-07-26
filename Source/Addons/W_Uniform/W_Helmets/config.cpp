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
            //CERT UNLOCK HELMETS
            //Aviation
            "22nd_VX19_Urban",
            "22nd_VX19_Woodland",
            "22nd_VX19_Arid",
            "22nd_VX19_Winter",
            "22nd_VX19_Urban_HMHD",
            "22nd_VX19_Woodland_HMHD",
            "22nd_VX19_Arid_HMHD",
            "22nd_VX19_Winter_HMHD",
            //Crewman
            "W_CH252C_Helmet_Base",
            "W_CH252C_Helmet_Snow",
            "W_CH252C_Helmet_Woodland",
            //EOD
            "W_EOD_Helmet_Woodland",
            "W_EOD_Helmet_Snow",
            "W_EOD_Helmet_Urban",
            //Air Assault
            "W_AA_Helmet_Urban",
            "W_AA_Helmet_Woodland",
            "W_AA_Helmet_Snow",
            //Scout
            "W_Scout_Helmet_Urban",
            "W_Scout_Helmet_Woodland",
            "W_Scout_Helmet_Snow",
            //JFO
            "W_JFO_Helmet_Urban",
            "W_JFO_Helmet_Snow",
            "W_JFO_Helmet_Woodland",
            //Commando
            "W_Commando_Helmet_Urban",
            "W_Commando_Helmet_Woodland",
            "W_Commando_Helmet_Winter",
            //CQC
            "W_CQC_Helmet_Urban",
            "W_CQC_Helmet_Woodland",
            "W_CQC_Helmet_Winter",
            //Grenadier
            "W_Grenadier_Helmet_Urban",
            "W_Grenadier_Helmet_Woodland",
            "W_Grenadier_Helmet_Winter",
            //Gungnir
            "W_Gungnir_Helmet_Urban",
            "W_Gungnir_Helmet_Snow",
            "W_Gungnir_Helmet_Woodland",
            //Operator
            "W_Operator_Helmet_Urban",
            "W_Operator_Helmet_Snow",
            "W_Operator_Helmet_Woodland",
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
            //Custom VX19
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
            "22nd_VX19_Urban_Ras",
            "22nd_VX19_Woodland_Ras",
            "22nd_VX19_Arid_Ras",
            "22nd_VX19_Winter_Ras",
            //Custom Crewman
            "22nd_CH252C_German_Woodland",
            "22nd_CH252C_German_Winter",
            "22nd_CH252C_Lamb_Woodland",
            "22nd_CH252C_Lamb_Winter",
            "22nd_CH252C_Enigmous_Woodland",
            "22nd_CH252C_Enigmous_Winter",
            //Custom EOD
            "22nd_EOD_Custom_Yogi",
            //Custom AA
            "22nd_AA_Custom_Hatty",
            //Custom Scout
            "22nd_Scout_Custom_Test",
            //Custom JFO
            "22nd_JFO_Custom_Test",
            //Custom Commando
            "22nd_Commando_Custom_Test",
            //Custom CQC
            "22nd_CQC_Urban_Test",
            "22nd_CQC_Winter_Test",
            "22nd_CQC_Woodland_Test",
            //Custom Grenadier
            "22nd_Grenadier_Custom_Test",
            //Custom Gungnir
            "22nd_Gungnir_Helmet_Custom_Test",
            //Custom Operator
            "22nd_Operator_Custom_Test",
            //Custom Base
            "22nd_HelmCustom_Alloy",
            "22nd_HelmCustom_Bay",
            "22nd_HelmCustom_Bee",
            "22nd_HelmCustom_Grims",
            "22nd_HelmCustom_Harper",
            "22nd_HelmCustom_Jacks",
            "22nd_HelmCustom_Perse",
            "22nd_HelmCustom_Relic",
            "22nd_HelmCustom_Sue",
            "22nd_HelmCustom_Hoodie",
            "22nd_HelmCustom_Zoey",
            "22nd_HelmCustom_Yar",
            "22nd_HelmCustom_Darling",
            "22nd_HelmCustom_Ferret"
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
                
                class Ras
                {
                    label = "Ras";
                };
            };
        };
        class W_CH252C_Helmet{

            label = "22nd CH252C";

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
                    "Woodland",
                    "Winter"
                };

                class Woodland
                {
                    label = "Woodland";
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
                    "Base",
                    "German",
                    "Lamb",
                    "Enigmous"
                };

                class German
                {
                    label = "German";
                };
                class Lamb
                {
                    label = "Lamb";
                };

                class Enigmous
                {
                    label = "Enigmous";
                };
            };
        };
        class W_EOD_Helmet{

            label = "22nd EOD Helmet";

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
                    "Base",
                    "Yogi"
                };

                class Yogi
                {
                    label = "Yogi";
                };
            };
        };
        class W_AA_Helmet{

            label = "22nd Air Assault Helmet";

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
                    "Base",
                    "Hatty"
                };

                class Hatty
                {
                    label = "Hatty";
                };
            };
        };
        class W_Scout_Helmet{

            label = "22nd Scout Helmet";

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
                    "Base",
                    "Test"
                };

                class Test
                {
                    label = "Test";
                };
            };
        };
        class W_JFO_Helmet{

            label = "22nd JFO Helmet";

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
                    "Base",
                    "Test"
                };

                class Test
                {
                    label = "Test";
                };
            };
        };
        class W_Commando_Helmet{

            label = "22nd Commando Helmet";

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
                    "Base",
                    "Test"
                };

                class Test
                {
                    label = "Test";
                };
            };
        };
        class W_CQC_Helmet{

            label = "22nd CQC Helmet";

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
                    "Base",
                    "Test"
                };

                class Test
                {
                    label = "Test";
                };
            };
        };
        class W_Grenadier_Helmet{

            label = "22nd Grenadier Helmet";

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
                    "Base",
                    "Test"
                };

                class Test
                {
                    label = "Test";
                };
            };
        };
        class W_Gungnir_Helmet{

            label = "22nd Gungnir Helmet";

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
                    "Base",
                    "Test"
                };

                class Test
                {
                    label = "Test";
                };
            };
        };
        class W_Operator_Helmet{

            label = "22nd Operator Helmet";

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
                    "Base",
                    "Test"
                };

                class Test
                {
                    label = "Test";
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
                    "Sue",
                    "Hoodie",
                    "Zoey",
                    "Yar",
                    "Darling",
                    "Ferret"
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
                class Hoodie
                {
                    label = "Hoodie";
                };
                class Zoey
                {
                    label = "Zoey";
                };
                class Yar
                {
                    label = "Yar";
                };
                class Darling
                {
                    label = "Darling";
                };
                class Ferret
                {
                    label = "Ferret";
                };
            };
        };
    };
};
class CfgWeapons {
    class CH252_Helmet_Base;
    class OPTRE_FC_VX19_Helmet;
    class MA_M56E_Helmet;
    class MA_M56A_Helmet;
    class MA_Mjolnir_Scout_Helmet;
    class MA_Mjolnir_JFO_Helmet;
    class MA_Mjolnir_Commando_Helmet;
    class MA_Mjolnir_CQC_Helmet;
    class MA_Mjolnir_Grenadier_Helmet;
    class MA_Mjolnir_Gungnir_Helmet;
    class OPTRE_UNSC_Operator_Helmet;
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
    
    #include "Customs\config.hpp"
    #include "Aviation\config.hpp"
    #include "Crewman\config.hpp"
    #include "EOD\config.hpp"
    //#include "AA\config.hpp"
    //#include "Scout\config.hpp"
    //#include "JFO\config.hpp"
    //#include "Commando\config.hpp"
    //#include "CQC\config.hpp"
    //#include "Grenadier\config.hpp"
    //#include "Gungnir\config.hpp"
    //#include "Operator\config.hpp"
};