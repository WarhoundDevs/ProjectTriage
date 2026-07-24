    class W_AA_Helmet_Urban : MA_M56A_Helmet
    {
        scope=2;
        scopeArsenal=2;
        author= "Astro";
        displayName= "[22nd] Air Assault Urban";
        picture = "\22nd_uniforms\helmets\22ndRDF.paa";

        class XtdGearInfo
        {
            model = "W_AA_Helmet";
            Camouflage = "Urban";
            Variant = "Base";
        };

        hiddenSelectionsTextures[]=
        {
            "\22nd_uniforms\helmets\AA\22nd_AA_Helm_Urban_co.paa",
            "MA_Armor\data\Helmets\AA\AA_Visor_Blue_co.paa"
        };
    };
    class W_AA_Helmet_Snow : MA_M56A_Helmet{
        scope=2;
        scopeArsenal=2;
        author= "Astro";
        displayName= "[22nd] Air Assault Snow";
        picture = "\22nd_uniforms\helmets\22ndRDF.paa";

        class XtdGearInfo
        {
            model = "W_AA_Helmet";
            Camouflage = "Winter";
            Variant = "Base";
        };

        hiddenSelectionsTextures[]=
        {
            "\22nd_uniforms\helmets\AA\22nd_AA_Helm_Snow_co.paa",
            "MA_Armor\data\Helmets\AA\AA_Visor_Blue_co.paa"
        };
    };
    class W_AA_Helmet_Woodland : MA_M56A_Helmet{
        scope=2;
        scopeArsenal=2;
        author= "Astro";
        displayName= "[22nd] Air Assault Woodland";
        picture = "\22nd_uniforms\helmets\22ndRDF.paa";

        class XtdGearInfo
        {
            model = "W_AA_Helmet";
            Camouflage = "Woodland";
            Variant = "Base";
        };

        hiddenSelectionsTextures[]=
        {
            "\22nd_uniforms\helmets\AA\22nd_AA_Helm_Woodland_co.paa",
            "MA_Armor\data\Helmets\AA\AA_Visor_Blue_co.paa"
        };
    };
    //Start Customs
    class 22nd_AA_Custom_Hatty : MA_M56A_Helmet{
        scope=2;
        scopeArsenal=2;
        author= "Astro";
        displayName= "[22nd] AA Custom Hatty";
        picture = "\22nd_uniforms\helmets\22ndRDF.paa";

        class XtdGearInfo
        {
            model = "W_AA_Helmet";
            Camouflage = "Woodland";
            Variant = "Hatty";
        };

        hiddenSelectionsTextures[]=
        {
            "\22nd_uniforms\helmets\Customs\AA\Hatty\22nd_Hatty_Helm_Custom_co.paa",
            "MA_Armor\data\Helmets\AA\AA_Visor_Blue_co.paa"
        };
    };