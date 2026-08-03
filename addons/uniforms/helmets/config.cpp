class CfgPatches {
    class 22nd_uniforms_helmets_old{
        units[] = {
        };
        weapons[] = {
            
  
            //CERT UNLOCK HELMETS
           

            //EOD
            "W_EOD_Helmet_Woodland",
            "W_EOD_Helmet_Snow",
            "W_EOD_Helmet_Urban",
          

            //Custom EOD
            "22nd_EOD_Custom_Yogi",
         
            //Custom Scout
            "22nd_Scout_Custom_Test",
            //Custom JFO
            "22nd_JFO_Custom_Test",
            //Custom Commando
            "22nd_Commando_Custom_Test",
           
            //Custom Grenadier
            "22nd_Grenadier_Custom_Test",
            //Custom Gungnir
            "22nd_Gungnir_Helmet_Custom_Test",
            //Custom Operator
            "22nd_Operator_Custom_Test",
          
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
  
   // Close 22nd_HelmSnow_Visor
    
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