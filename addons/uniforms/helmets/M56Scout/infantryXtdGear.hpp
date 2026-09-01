class XtdGearModels
{
    class CfgWeapons
    {
        class 22nd_M56_Scout_Helmet
        {
            label = "M56 Scout";
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
                    "Trooper"
                };
                class Trooper
                {
                    label = "Trooper";
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
       
       
