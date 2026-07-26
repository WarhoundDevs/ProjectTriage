


class XtdGearModels
{
    class CfgWeapons
    {
      class 22nd_Commando_Helmet
      {

            label = "22nd Commando Helmet";

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
       
       
