    class W_Scout_Helmet_Urban : MA_Mjolnir_Scout_Helmet
    {
        scope=2;
        scopeArsenal=2;
        author= "Astro";
        displayName= "[22nd] Scout Urban";
        picture = "\W_Uniform\W_Helmets\22ndRDF.paa";

        class XtdGearInfo
        {
            model = "W_Scout_Helmet";
            Camouflage = "Urban";
            Variant = "Base";
        };

        hiddenSelectionsTextures[]=
        {
            "\W_Uniform\W_Helmets\Scout\22nd_Urban_Scout_Helm_co.paa",
            "MA_Armor\data\Helmets\H4_Scout\Scout_Visor_Blue_co.paa"
        };
    };
    class W_Scout_Helmet_Snow : MA_Mjolnir_Scout_Helmet{
        scope=2;
        scopeArsenal=2;
        author= "Astro";
        displayName= "[22nd] Scout Snow";
        picture = "\W_Uniform\W_Helmets\22ndRDF.paa";

        class XtdGearInfo
        {
            model = "W_Scout_Helmet";
            Camouflage = "Winter";
            Variant = "Base";
        };

        hiddenSelectionsTextures[]=
        {
            "\W_Uniform\W_Helmets\Scout\22nd_Winter_Scout_Helm_co.paa",
            "MA_Armor\data\Helmets\H4_Scout\Scout_Visor_Blue_co.paa"
        };
    };
    class W_Scout_Helmet_Woodland : MA_Mjolnir_Scout_Helmet{
        scope=2;
        scopeArsenal=2;
        author= "Astro";
        displayName= "[22nd] Scout Woodland";
        picture = "\W_Uniform\W_Helmets\22ndRDF.paa";

        class XtdGearInfo
        {
            model = "W_Scout_Helmet";
            Camouflage = "Woodland";
            Variant = "Base";
        };

        hiddenSelectionsTextures[]=
        {
            "\W_Uniform\W_Helmets\Scout\22nd_Woodland_Scout_Helm_co.paa",
            "MA_Armor\data\Helmets\H4_Scout\Scout_Visor_Blue_co.paa"
        };
    };
    //Start Customs
    class 22nd_Scout_Custom_Test : MA_Mjolnir_Scout_Helmet{
        scope=2;
        scopeArsenal=2;
        author= "Astro";
        displayName= "[22nd] Scout Custom Test";
        picture = "\W_Uniform\W_Helmets\22ndRDF.paa";

        class XtdGearInfo
        {
            model = "W_Scout_Helmet";
            Camouflage = "Woodland";
            Variant = "Test";
        };

        hiddenSelectionsTextures[]=
        {
            "\W_Uniform\W_Helmets\Customs\Scout\Test\22nd_Custom_Test_Helm_co.paa",
            "MA_Armor\data\Helmets\H4_Scout\Scout_Visor_Blue_co.paa"
        };
    };