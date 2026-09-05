


class XtdGearModels
{
    class CfgWeapons
    {
        class 22nd_CH252C{

            label = "ECH252-AC";

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
                //    "Lamb",
                    "Enigmous"
                };

                class German
                {
                    label = "German";
                };
            //    class Lamb
            //    {
            //        label = "Lamb";
            //    };
                class Enigmous
                {
                    label = "Enigmous";
                };
            };
        };
    };
};
