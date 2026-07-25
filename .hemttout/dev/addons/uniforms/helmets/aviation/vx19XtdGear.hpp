


class XtdGearModels
{
    class CfgWeapons
    {
        class 22nd_VX19
        {
            label = "22nd VX-19 Aviation Helmet";

            options[] =
            {
                "Variant",
                "Camouflage"
                
            };

             class Variant
            {
                label = "Variant";

                values[] =
                {
                    "Standard",
                    "HMHD",
                    "Manta",
                    "Cuban",
                    "Astro",
                    "Evans",
                    "Ras"
                };

                class Standard
                {
                    label = "Orca";
                    image="#(rgb,8,8,3)color(0.52,0.19,0,1)";
                };

                class HMHD
                {
                    label = "Hammerhead";
                    image="#(rgb,8,8,3)color(0.33,0.51,0.7)";
                    
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
                    image = "#(rgb,8,8,3)color(0.043,0.047,0.051,1)";
                };

                class Woodland
                {
                    label = "Woodland";
                    image = "#(rgb,8,8,3)color(0.15,0.18,0.11,1)";
                };

                class Arid
                {
                    label = "Arid";
                    image = "#(rgb,8,8,3)color(0.4,0.337,0.247,1)";
                };

                class Snow
                {
                    label = "Winter";
                    image = "#(rgb,8,8,3)color(0.765,0.765,0.765,1)";
                };
            };
        };
    };
};
       
       
