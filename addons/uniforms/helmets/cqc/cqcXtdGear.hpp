


class XtdGearModels
{
    class CfgWeapons
    {
       class 22nd_CQC_Helmet
       {

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
    };
};
       
       
