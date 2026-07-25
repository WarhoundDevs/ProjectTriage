    class W_Scout_Helmet_Urban : MA_Mjolnir_Scout_Helmet
    {
        scope=2;
        scopeArsenal=2;
        author= "Astro";
        displayName= "[22nd] Scout Urban";
        picture = "\22nd_uniforms\helmets\22ndRDF.paa";

        class XtdGearInfo
        {
            model = "W_Scout_Helmet";
            Camouflage = "Urban";
            Variant = "Base";
        };

        hiddenSelectionsTextures[]=
        {
            "\22nd_uniforms\helmets\Scout\22nd_Urban_Scout_Helm_co.paa",
            "MA_Armor\data\Helmets\H4_Scout\Scout_Visor_Blue_co.paa"
        };
    };
    class W_Scout_Helmet_Snow : MA_Mjolnir_Scout_Helmet{
        scope=2;
        scopeArsenal=2;
        author= "Astro";
        displayName= "[22nd] Scout Snow";
        picture = "\22nd_uniforms\helmets\22ndRDF.paa";

        class XtdGearInfo
        {
            model = "W_Scout_Helmet";
            Camouflage = "Winter";
            Variant = "Base";
        };

        hiddenSelectionsTextures[]=
        {
            "\22nd_uniforms\helmets\Scout\22nd_Winter_Scout_Helm_co.paa",
            "MA_Armor\data\Helmets\H4_Scout\Scout_Visor_Blue_co.paa"
        };
    };
    class W_Scout_Helmet_Woodland : MA_Mjolnir_Scout_Helmet{
        scope=2;
        scopeArsenal=2;
        author= "Astro";
        displayName= "[22nd] Scout Woodland";
        picture = "\22nd_uniforms\helmets\22ndRDF.paa";

        class XtdGearInfo
        {
            model = "W_Scout_Helmet";
            Camouflage = "Woodland";
            Variant = "Base";
        };

        hiddenSelectionsTextures[]=
        {
            "\22nd_uniforms\helmets\Scout\22nd_Woodland_Scout_Helm_co.paa",
            "MA_Armor\data\Helmets\H4_Scout\Scout_Visor_Blue_co.paa"
        };
    };
    //Start Customs
    class 22nd_Scout_Custom_Test : MA_Mjolnir_Scout_Helmet{
        scope=2;
        scopeArsenal=2;
        author= "Astro";
        displayName= "[22nd] Scout Custom Test";
        picture = "\22nd_uniforms\helmets\22ndRDF.paa";

        class XtdGearInfo
        {
            model = "W_Scout_Helmet";
            Camouflage = "Woodland";
            Variant = "Test";
        };

        hiddenSelectionsTextures[]=
        {
            "\22nd_uniforms\helmets\Customs\Scout\Test\22nd_Custom_Test_Helm_co.paa",
            "MA_Armor\data\Helmets\H4_Scout\Scout_Visor_Blue_co.paa"
        };
    };