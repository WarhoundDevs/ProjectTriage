
class XtdGearModels
{
    class CfgWeapons
    {
        class 22nd_Infantry_AAE
        {
            label = "[22nd] M52A Arid";
            author = "Warhound Mod Team";
            options[] =  //Class names for your options
            {
                "upperUniform",
                "lowerUniform",
                "Shoulder",
                "Collar",
                "ShoulderVariant"
            };
            // all options defined underneath the big options box, class names must match the array (Or is it list I forget)
            class upperUniform
            {
                label = "BDU Top";
                values[] =
                {
                    "Woodland",
                    "Winter",
                    "Brown",
                    "Olive",
                    "Gray",
                    
                };
                 class Woodland
                {
                    label = "Woodland";
                };
                 class Winter
                {
                    label = "Winter";
                };
                class Brown
                {
                    label = "Brown";
                };
                class Olive
                {
                    label = "Olive";
                };
                 class Gray
                {
                    label = "Gray";
                };
                
            };

            class lowerUniform
            {
                label = "BDU + Armor";
                values[] =
                {
                    "Woodland",
                    "Winter"
                };
                 class Woodland
                {
                    label = "Woodland";
                };
                 class Winter
                {
                    label = "Winter";
                };
            };

            
            class Shoulder
            {
                label = "Shoulders";
                values[] =
                {
                    "Light",
                    "Medium",
                    "Heavy",
                };
                class Light
                {
                    label = "Light";
                };
                class Medium
                {
                    label = "Medium";
                };
                class Heavy
                {
                    label = "Heavy";
                };
            };
            class Collar
            {
                label = "Collar";
                values[] =
                {
                    "High",
                    "Low"
                };
                class High
                {
                    label = "High";
                };
                class Low
                {
                    label = "Low";
                };
            };
            class ShoulderVariant
            {
                label = "Shoulder Variant";
                values[] =
                {
                    "Base",
                    "Pike1A",
                    "Pike11",
                    "Pike12",
                    "Pike13"
                };
                class Base
                {
                    label = "No Variant";
                };
                class Pike1A
                {
                    label = "Pike Actual";
                };
                class Pike11
                {
                    label = "Pike 1-1";
                };
                class Pike12
                {
                    label = "Pike 1-2";
                };
                class Pike13
                {
                    label = "Pike 1-3";
                };
            };
        };
        
        class 22nd_InfantryCustoms_AAE
        {
            label = "[22nd] M52A Arid";
            author = "Warhound Mod Team";
            options[] =  //Class names for your options
            {
                "custom",
                "upperUniform",
                "lowerUniform",
                "Shoulder",
                "Collar"
            };

            class custom
            {
                label = "Owner";
                values[] =
                {
                //    "Darling",
                    "German",
                    "Relic",
                //    "Rya",
                    "Sue",
                    "Wisha",
                //    "Yar",
                    "Zoey",
                    "Miles",
                };

               

            //    class Darling
            //    {
            //        label = "Darling";
            //        image="#(rgb,8,8,3)color(0.52,0.19,0,0.7)";
            //    };
                class German
                {
                    label = "German";
                    image="#(rgb,8,8,3)color(0.52,0.19,0,0.7)";
                };
                class Relic
                {
                    label = "Relic";
                    image="#(rgb,8,8,3)color(0.52,0.19,0,0.7)";
                };
            //    class Rya
            //    {
            //        label = "Rya";
            //        image="#(rgb,8,8,3)color(0.52,0.19,0,0.7)";
            //    };
                class Sue
                {
                    label = "Sue";
                    image="#(rgb,8,8,3)color(0.52,0.19,0,0.7)";
                };
                 class Wisha
                {
                    label = "Wisha";
                    image="#(rgb,8,8,3)color(0.52,0.19,0,0.7)";
                };
            //    class Yar
            //    {
            //        label = "Yar";
            //        image="#(rgb,8,8,3)color(0.52,0.19,0,0.7)";
            //    };
                class Zoey
                {
                    label = "Zoey";
                    image="#(rgb,8,8,3)color(0.52,0.19,0,0.7)";
                };
                class Miles
                {
                    label = "Miles";
                    image="#(rgb,8,8,3)color(0.52,0.19,0,0.7)";
                };
            };

            class upperUniform
            {
                label = "BDU Top";
                values[] =
                {
                    "Woodland",
                    "Winter",
                    "Brown",
                    "Olive",
                    "Gray",
                    
                };
                    class Woodland
                {
                    label = "Woodland";
                };
                    class Winter
                {
                    label = "Winter";
                };
                class Brown
                {
                    label = "Brown";
                };
                class Olive
                {
                    label = "Olive";
                };
                    class Gray
                {
                    label = "Gray";
                };
                
            };

            class lowerUniform
            {
                label = "BDU + Armor";
                values[] =
                {
                    "Woodland",
                    "Winter"
                };
                    class Woodland
                {
                    label = "Woodland";
                };
                    class Winter
                {
                    label = "Winter";
                };
            };

            
            class Shoulder
            {
                label = "Shoulders";
                values[] =
                {
                    "Light",
                    "Medium",
                    "Heavy",


                };
                class Light
                {
                    label = "Light";
                };
                class Medium
                {
                    label = "Medium";
                };
                class Heavy
                {
                    label = "Heavy";
                };
            };
            class Collar
            {
                label = "Collar";
                values[] =
                {
                    "High",
                    "Low"
                };
                class High
                {
                    label = "High";
                };
                class Low
                {
                    label = "Low";
                };
            };
        }; 
    };
};
       
