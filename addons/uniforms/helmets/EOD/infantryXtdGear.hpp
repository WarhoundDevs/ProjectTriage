class XtdGearModels
{
    class CfgWeapons
    {
        class 22nd_EOD_Helmet
        {
            label = "EOD";
            author = "Warhound Mod Team";
            options[] =
            {
                "Custom",
                "Camouflage",
            };
             class Custom
            {
                label = "Trooper";
                values[] =
                {
                    "Trooper",
                    "Yogi"
                };
                class Trooper
                {
                    label = "WD";
                    image="#(rgb,8,8,3)color(0.52,0.19,0,0.7)";
                };
                class Yogi
                {
                    label = "Yogi";
                    image="#(rgb,8,8,3)color(0.52,0.19,0,0.7)";
                };
            };
            class Camouflage
            {
                label = "Camouflage";
                values[] =
                {
                    "WD",
                    "Winter"
                };
                class WD
                {
                    label = "WD";
                    image = "#(rgb,8,8,3)color(0.19,0.17,0.11,1)";
                };
                class Winter
                {
                    label = "Winter";
                    image = "#(rgb,8,8,3)color(0.7,0.7,0.7,1)";
                };
            };
        };



        class 22nd_ECH252C_Customs
        {
            label = "Custom ECH252-C";
            author = "Warhound Mod Team";
            options[] =
            {
                "Custom",
                "Camouflage",
            };
             class Custom ////// 10. ADD CUSTOM NAMES HERE /////
            {
                label = "Owner";
                values[] =
                {
                    "Yogi"
                };

                ////// 10. ONCE CLASS IS ADDED BELOW, ADD IT TO VALUES ABOVE ^

                class Yogi
                {
                    label = "Yogi";
                    image="#(rgb,8,8,3)color(0.52,0.19,0,0.7)";
                };   
            };
            class Camouflage
            {
                label = "Camouflage";
                values[] =
                {
                    "WD",
                    "Winter"

                };
                class WD
                {
                    label = "WD";
                    image = "#(rgb,8,8,3)color(0.19,0.17,0.11,1)";
                };
                class Winter
                {
                    label = "Winter";
                    image = "#(rgb,8,8,3)color(0.7,0.7,0.7,1)";
                };
            };
        };
    };
};
       
       
