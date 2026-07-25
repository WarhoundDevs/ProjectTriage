


class XtdGearModels
{
    class CfgWeapons
    {
        class 22nd_CH252C{

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
                    "Base",
                    "German",
                    "Lamb"
                };

                class German
                {
                    label = "German";
                };
                class Lamb
                {
                    label = "Lamb";
                };
            };
        };
    };
};