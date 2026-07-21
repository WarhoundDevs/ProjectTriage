    class W_AA_Helmet_Urban : MA_M56A_Helmet
    {
        scope=2;
        scopeArsenal=2;
        author= "Astro";
        displayName= "[22nd] Air Assault Urban";
        picture = "\W_Uniform\W_Helmets\22ndRDF.paa";

        class XtdGearInfo
        {
            model = "W_AA_Helmet";
            Camouflage = "Urban";
            Variant = "Base";
        };

        hiddenSelectionsTextures[]=
        {
            "\W_Uniform\W_Helmets\AA\22nd_AA_Helm_Urban_co.paa",
            "MA_Armor\data\Helmets\AA\AA_Visor_Blue_co.paa"
        };
    };
    class W_AA_Helmet_Snow : MA_M56A_Helmet{
        scope=2;
        scopeArsenal=2;
        author= "Astro";
        displayName= "[22nd] Air Assault Snow";
        picture = "\W_Uniform\W_Helmets\22ndRDF.paa";

        class XtdGearInfo
        {
            model = "W_AA_Helmet";
            Camouflage = "Winter";
            Variant = "Base";
        };

        hiddenSelectionsTextures[]=
        {
            "\W_Uniform\W_Helmets\AA\22nd_AA_Helm_Snow_co.paa",
            "MA_Armor\data\Helmets\AA\AA_Visor_Blue_co.paa"
        };
    };
    class W_AA_Helmet_Woodland : MA_M56A_Helmet{
        scope=2;
        scopeArsenal=2;
        author= "Astro";
        displayName= "[22nd] Air Assault Woodland";
        picture = "\W_Uniform\W_Helmets\22ndRDF.paa";

        class XtdGearInfo
        {
            model = "W_AA_Helmet";
            Camouflage = "Woodland";
            Variant = "Base";
        };

        hiddenSelectionsTextures[]=
        {
            "\W_Uniform\W_Helmets\AA\22nd_AA_Helm_Woodland_co.paa",
            "MA_Armor\data\Helmets\AA\AA_Visor_Blue_co.paa"
        };
    };
    //Start Customs
    class 22nd_AA_Custom_Hatty : MA_M56A_Helmet{
        scope=2;
        scopeArsenal=2;
        author= "Astro";
        displayName= "[22nd] AA Custom Hatty";
        picture = "\W_Uniform\W_Helmets\22ndRDF.paa";

        class XtdGearInfo
        {
            model = "W_AA_Helmet";
            Camouflage = "Woodland";
            Variant = "Hatty";
        };

        hiddenSelectionsTextures[]=
        {
            "\W_Uniform\W_Helmets\Customs\AA\Hatty\22nd_Hatty_Helm_Custom_co.paa",
            "MA_Armor\data\Helmets\AA\AA_Visor_Blue_co.paa"
        };
    };