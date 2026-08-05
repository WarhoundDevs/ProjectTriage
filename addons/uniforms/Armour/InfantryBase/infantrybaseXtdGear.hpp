
class XtdGearModels
{
    class CfgWeapons
    {
        class 22nd_Infantry_AAE
        {
            label = "[22nd] M52A Arid";
            author = "Warhound Mod Team";
            options[] = // Class names for your options
            {
                "upperUniform",
                "lowerUniform",
                "ArmorPaint",
                "Shoulder",
                "Collar"
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
        };
    };  
};
       