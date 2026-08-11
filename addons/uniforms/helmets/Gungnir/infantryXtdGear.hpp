class XtdGearModels
{
    class CfgWeapons
    {
        class 22nd_Gungnir_Helmet
        {
            label = "Gungnir";
            author = "Warhound Mod Team";
            options[] =
            {
                "Custom",
                "Armour",
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
            class Armour
            {
                label = "Armour";
                values[] =
                {
                    "Base",
                    "AS"
                };
                class Base
                {
                    label = "Trooper";
                    image = "#(rgb,8,8,3)color(0.19,0.17,0.11,1)";
                };
                class AS
                {
                    label = "Armoured Soldier";
                    image = "#(rgb,8,8,3)color(0.7,0.7,0.7,1)";
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
       
       
