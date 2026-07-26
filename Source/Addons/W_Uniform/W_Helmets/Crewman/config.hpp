class VES_CH252_URB_Crew
{
	class ItemInfo;
};
class W_CH252C_Helmet_Base: VES_CH252_URB_Crew
{
	displayName="[22nd] CH252C Base";
	author="Warhound";
	scope=0;
	scopeArsenal=0;
	scopeCurator=0;
	class ItemInfo: ItemInfo
	{
		class HitpointsProtectionInfo
		{
			class Face
			{
				armor=25;
				hitpointName="HitFace";
				passThrough=0.1;
			};
			class Head
			{
				armor=25;
				hitPointName="HitHead";
				passThrough=0.1;
			};
			class Neck
			{
				armor=20;
				hitpointName="HitNeck";
				passThrough=0.1;
			};
		};
	}
};

    class W_CH252C_Helmet_Snow : W_CH252C_Helmet_Base{
        scope=2;
        scopeArsenal=2;
        author= "Astro";
        displayName= "[22nd] CH252C Snow";
        picture = "\W_Uniform\W_Helmets\22ndRDF.paa";

        class XtdGearInfo
        {
            model = "W_CH252C_Helmet";
            Camouflage = "Winter";
            Variant = "Base";
        };

        hiddenSelectionsTextures[]=
        {
            "\W_Uniform\W_Helmets\Crewman\crewmansnowcamo.paa"
        };
    };
    class W_CH252C_Helmet_Woodland : W_CH252C_Helmet_Base{
        scope=2;
        scopeArsenal=2;
        author= "Astro";
        displayName= "[22nd] CH252C Woodland";
        picture = "\W_Uniform\W_Helmets\22ndRDF.paa";

        class XtdGearInfo
        {
            model = "W_CH252C_Helmet";
            Camouflage = "Woodland";
            Variant = "Base";
        };

        hiddenSelectionsTextures[]=
        {
            "\W_Uniform\W_Helmets\Crewman\crewmanwdlndcamo.paa"
        };
    };
    //End Base
    //Start German Custom
    class 22nd_CH252C_German_Winter : W_CH252C_Helmet_Base{
        scope=2;
        scopeArsenal=2;
        author= "Astro";
        displayName= "[22nd] CH252C Snow";
        picture = "\W_Uniform\W_Helmets\22ndRDF.paa";

        class XtdGearInfo
        {
            model = "W_CH252C_Helmet";
            Camouflage = "Winter";
            Variant = "German";
        };

        hiddenSelectionsTextures[]=
        {
            "\W_Uniform\W_Helmets\Customs\Crewman\German\22nd_German_crewmansnowcamo.paa"
        };
    };
    class 22nd_CH252C_German_Woodland : W_CH252C_Helmet_Base{
        scope=2;
        scopeArsenal=2;
        author= "Astro";
        displayName= "[22nd] CH252C Woodland";
        picture = "\W_Uniform\W_Helmets\22ndRDF.paa";

        class XtdGearInfo
        {
            model = "W_CH252C_Helmet";
            Camouflage = "Woodland";
            Variant = "German";
        };

        hiddenSelectionsTextures[]=
        {
            "\W_Uniform\W_Helmets\Customs\Crewman\German\22nd_German_crewmanwdlndcamo.paa"
        };
    };
    //End German Custom
    //Start Lamb Custom
    class 22nd_CH252C_Lamb_Winter : W_CH252C_Helmet_Base{
        scope=2;
        scopeArsenal=2;
        author= "Astro";
        displayName= "[22nd] CH252C Snow";
        picture = "\W_Uniform\W_Helmets\22ndRDF.paa";

        class XtdGearInfo
        {
            model = "W_CH252C_Helmet";
            Camouflage = "Winter";
            Variant = "Lamb";
        };

        hiddenSelectionsTextures[]=
        {
            "\W_Uniform\W_Helmets\Customs\Crewman\Lamb\22nd_Lamb_crewmansnowcamo.paa"
        };
    };
    class 22nd_CH252C_Lamb_Woodland : W_CH252C_Helmet_Base{
        scope=2;
        scopeArsenal=2;
        author= "Astro";
        displayName= "[22nd] CH252C Woodland";
        picture = "\W_Uniform\W_Helmets\22ndRDF.paa";

        class XtdGearInfo
        {
            model = "W_CH252C_Helmet";
            Camouflage = "Woodland";
            Variant = "Lamb";
        };

        hiddenSelectionsTextures[]=
        {
            "\W_Uniform\W_Helmets\Customs\Crewman\Lamb\22nd_Lamb_crewmanwdlndcamo.paa"
        };
    };
    //End Lamb Custom
    //Start Enigmous Custom
    class 22nd_CH252C_Enigmous_Winter : W_CH252C_Helmet_Base{
        scope=2;
        scopeArsenal=2;
        author= "Astro";
        displayName= "[22nd] CH252C Snow";
        picture = "\W_Uniform\W_Helmets\22ndRDF.paa";

        class XtdGearInfo
        {
            model = "W_CH252C_Helmet";
            Camouflage = "Winter";
            Variant = "Enigmous";
        };

        hiddenSelectionsTextures[]=
        {
            "\W_Uniform\W_Helmets\Customs\Crewman\Enigmous\22nd_Enigmous_crewmansnowcamo.paa"
        };
    };
    class 22nd_CH252C_Enigmous_Woodland : W_CH252C_Helmet_Base{
        scope=2;
        scopeArsenal=2;
        author= "Astro";
        displayName= "[22nd] CH252C Woodland";
        picture = "\W_Uniform\W_Helmets\22ndRDF.paa";

        class XtdGearInfo
        {
            model = "W_CH252C_Helmet";
            Camouflage = "Woodland";
            Variant = "Enigmous";
        };

        hiddenSelectionsTextures[]=
        {
            "\W_Uniform\W_Helmets\Customs\Crewman\Enigmous\22nd_Enigmous_crewmanwdlndcamo.paa"
        };
    };
    //End Enigmous Custom
