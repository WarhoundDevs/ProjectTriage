    class W_Commando_Helmet_Urban : MA_Mjolnir_Commando_Helmet
    {
        scope=2;
        scopeArsenal=2;
        author= "Astro";
        displayName= "[22nd] Commando Urban";
        picture = "\22nd_uniforms\helmets\22ndRDF.paa";

        class XtdGearInfo
        {
            model = "W_Commando_Helmet";
            Camouflage = "Urban";
            Variant = "Base";
        };

        hiddenSelectionsTextures[]=
        {
            "\22nd_uniforms\helmets\Commando\22nd_Urban_Commando_Helm_co.paa",
            "MA_Armor\data\Helmets\Commando\Visors\Base_Commando_Visor_CO.paa"
        };
    };
    class W_Commando_Helmet_Winter : MA_Mjolnir_Commando_Helmet{
        scope=2;
        scopeArsenal=2;
        author= "Astro";
        displayName= "[22nd] Commando Snow";
        picture = "\22nd_uniforms\helmets\22ndRDF.paa";

        class XtdGearInfo
        {
            model = "W_Commando_Helmet";
            Camouflage = "Winter";
            Variant = "Base";
        };

        hiddenSelectionsTextures[]=
        {
            "\22nd_uniforms\helmets\Commando\22nd_Winter_Commando_Helm_co.paa",
            "MA_Armor\data\Helmets\Commando\Visors\Base_Commando_Visor_CO.paa"
        };
    };
    class W_Commando_Helmet_Woodland : MA_Mjolnir_Commando_Helmet{
        scope=2;
        scopeArsenal=2;
        author= "Astro";
        displayName= "[22nd] Commando Woodland";
        picture = "\22nd_uniforms\helmets\22ndRDF.paa";

        class XtdGearInfo
        {
            model = "W_Commando_Helmet";
            Camouflage = "Woodland";
            Variant = "Base";
        };

        hiddenSelectionsTextures[]=
        {
            "\22nd_uniforms\helmets\Commando\22nd_Woodland_Commando_Helm_co.paa",
            "MA_Armor\data\Helmets\Commando\Visors\Base_Commando_Visor_CO.paa"
        };
    };
    //Start Customs
    class 22nd_Commando_Custom_Test: MA_Mjolnir_Commando_Helmet{
        scope=2;
        scopeArsenal=2;
        author= "Astro";
        displayName= "[22nd] Commando Custom Test";
        picture = "\22nd_uniforms\helmets\22ndRDF.paa";

        class XtdGearInfo
        {
            model = "W_Commando_Helmet";
            Camouflage = "Woodland";
            Variant = "Test";
        };

        hiddenSelectionsTextures[]=
        {
            "\22nd_uniforms\helmets\Customs\Commando\Test\22nd_Commando_Custom_Test_Helm_co.paa",
            "MA_Armor\data\Helmets\Commando\Visors\Base_Commando_Visor_CO.paa"
        };
    };