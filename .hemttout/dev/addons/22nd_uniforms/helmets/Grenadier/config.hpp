    class W_Grenadier_Helmet_Urban : MA_Mjolnir_Grenadier_Helmet
    {
        scope=2;
        scopeArsenal=2;
        author= "Astro";
        displayName= "[22nd] Grenadier Urban";
        picture = "\22nd_uniforms\helmets\22ndRDF.paa";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
        class XtdGearInfo
        {
            model = "W_Grenadier_Helmet";
            Camouflage = "Urban";
            Variant = "Base";
        };

        hiddenSelectionsTextures[]=
        {
            "\22nd_uniforms\helmets\Grenadier\22nd_Urban_Grenadier_Helm_co.paa",
            "MA_Armor\data\Helmets\Grenadier\Visors\Base_Grenadier_Visor_CO.paa"
        };
    };
    class W_Grenadier_Helmet_Snow : MA_Mjolnir_Grenadier_Helmet{
        scope=2;
        scopeArsenal=2;
        author= "Astro";
        displayName= "[22nd] Grenadier Snow";
        picture = "\22nd_uniforms\helmets\22ndRDF.paa";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
        class XtdGearInfo
        {
            model = "W_Grenadier_Helmet";
            Camouflage = "Winter";
            Variant = "Base";
        };

        hiddenSelectionsTextures[]=
        {
            "\22nd_uniforms\helmets\Grenadier\22nd_Winter_Grenadier_Helm_co.paa",
            "MA_Armor\data\Helmets\Grenadier\Visors\Base_Grenadier_Visor_CO.paa"
        };
    };
    class W_Grenadier_Helmet_Woodland : MA_Mjolnir_Grenadier_Helmet{
        scope=2;
        scopeArsenal=2;
        author= "Astro";
        displayName= "[22nd] Grenadier Woodland";
        picture = "\22nd_uniforms\helmets\22ndRDF.paa";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
        class XtdGearInfo
        {
            model = "W_Grenadier_Helmet";
            Camouflage = "Woodland";
            Variant = "Base";
        };

        hiddenSelectionsTextures[]=
        {
            "\22nd_uniforms\helmets\Grenadier\22nd_Woodland_Grenadier_Helm_co.paa",
            "MA_Armor\data\Helmets\Grenadier\Visors\Base_Grenadier_Visor_CO.paa"
        };
    };
    //Start Customs
    class 22nd_Grenadier_Custom_Test : MA_Mjolnir_Grenadier_Helmet{
        scope=2;
        scopeArsenal=2;
        author= "Astro";
        displayName= "[22nd] Grenadier Custom Test";
        picture = "\22nd_uniforms\helmets\22ndRDF.paa";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
        class XtdGearInfo
        {
            model = "W_Grenadier_Helmet";
            Camouflage = "Woodland";
            Variant = "Test";
        };

        hiddenSelectionsTextures[]=
        {
            "\22nd_uniforms\helmets\Customs\Grenadier\Test\22nd_Gren_Custom_Test_Helm_co.paa",
            "MA_Armor\data\Helmets\Grenadier\Visors\Base_Grenadier_Visor_CO.paa"
        };
    };