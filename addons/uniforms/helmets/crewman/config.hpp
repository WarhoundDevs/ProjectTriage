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
	};
};

    class W_CH252C_Helmet_Urban : W_CH252C_Helmet_Base
    {
        scope=2;
        scopeArsenal=2;
        author= "Astro";
        displayName= "[22nd] CH252C Urban";
        picture = "\22nd_uniforms\helmets\22ndRDF.paa";

        class XtdGearInfo
        {
            model = "W_CH252C_Helmet";
            Camouflage = "Urban";
            Variant = "Base";
        };

        hiddenSelectionsTextures[]=
        {
            "\22nd_uniforms\helmets\Crewman\crewmanurbancamo.paa"
        };
    };
    class W_CH252C_Helmet_Snow : W_CH252C_Helmet_Urban{
        scope=2;
        scopeArsenal=2;
        author= "Astro";
        displayName= "[22nd] CH252C Snow";
        picture = "\22nd_uniforms\helmets\22ndRDF.paa";

        class XtdGearInfo
        {
            model = "W_CH252C_Helmet";
            Camouflage = "Winter";
            Variant = "Base";
        };

        hiddenSelectionsTextures[]=
        {
            "\22nd_uniforms\helmets\Crewman\crewmansnowcamo.paa"
        };
    };
    class W_CH252C_Helmet_Arid : W_CH252C_Helmet_Urban{
        scope=2;
        scopeArsenal=2;
        author= "Astro";
        displayName= "[22nd] CH252C Arid";
        picture = "\22nd_uniforms\helmets\22ndRDF.paa";

        class XtdGearInfo
        {
            model = "W_CH252C_Helmet";
            Camouflage = "Arid";
            Variant = "Base";
        };

        hiddenSelectionsTextures[]=
        {
            "\22nd_uniforms\helmets\Crewman\crewmanaridcamo.paa"
        };
    };
    class W_CH252C_Helmet_Woodland : W_CH252C_Helmet_Urban{
        scope=2;
        scopeArsenal=2;
        author= "Astro";
        displayName= "[22nd] CH252C Woodland";
        picture = "\22nd_uniforms\helmets\22ndRDF.paa";

        class XtdGearInfo
        {
            model = "W_CH252C_Helmet";
            Camouflage = "Woodland";
            Variant = "Base";
        };

        hiddenSelectionsTextures[]=
        {
            "\22nd_uniforms\helmets\Crewman\crewmanwdlndcamo.paa"
        };
    };
    //End Base
    //Start German Custom
    class 22nd_CH252C_German_Urban : W_CH252C_Helmet_Base
    {
        scope=2;
        scopeArsenal=2;
        author= "Astro";
        displayName= "[22nd] CH252C Urban";
        picture = "\22nd_uniforms\helmets\22ndRDF.paa";

        class XtdGearInfo
        {
            model = "W_CH252C_Helmet";
            Camouflage = "Urban";
            Variant = "German";
        };

        hiddenSelectionsTextures[]=
        {
            "\22nd_uniforms\helmets\Customs\Crewman\German\22nd_German_crewmanurbancamo.paa"
        };
    };
    class 22nd_CH252C_German_Winter : W_CH252C_Helmet_Urban{
        scope=2;
        scopeArsenal=2;
        author= "Astro";
        displayName= "[22nd] CH252C Snow";
        picture = "\22nd_uniforms\helmets\22ndRDF.paa";

        class XtdGearInfo
        {
            model = "W_CH252C_Helmet";
            Camouflage = "Winter";
            Variant = "German";
        };

        hiddenSelectionsTextures[]=
        {
            "\22nd_uniforms\helmets\Customs\Crewman\German\22nd_German_crewmansnowcamo.paa"
        };
    };
    class 22nd_CH252C_German_Arid : W_CH252C_Helmet_Urban{
        scope=2;
        scopeArsenal=2;
        author= "Astro";
        displayName= "[22nd] CH252C Arid";
        picture = "\22nd_uniforms\helmets\22ndRDF.paa";

        class XtdGearInfo
        {
            model = "W_CH252C_Helmet";
            Camouflage = "Arid";
            Variant = "German";
        };

        hiddenSelectionsTextures[]=
        {
            "\22nd_uniforms\helmets\Customs\Crewman\German\22nd_German_crewmanaridcamo.paa"
        };
    };
    class 22nd_CH252C_German_Woodland : W_CH252C_Helmet_Urban{
        scope=2;
        scopeArsenal=2;
        author= "Astro";
        displayName= "[22nd] CH252C Woodland";
        picture = "\22nd_uniforms\helmets\22ndRDF.paa";

        class XtdGearInfo
        {
            model = "W_CH252C_Helmet";
            Camouflage = "Woodland";
            Variant = "German";
        };

        hiddenSelectionsTextures[]=
        {
            "\22nd_uniforms\helmets\Customs\Crewman\German\22nd_German_crewmanwdlndcamo.paa"
        };
    };
    //End German Custom
    //Start Lamb Custom
    class 22nd_CH252C_Lamb_Urban : W_CH252C_Helmet_Base
    {
        scope=2;
        scopeArsenal=2;
        author= "Astro";
        displayName= "[22nd] CH252C Urban";
        picture = "\22nd_uniforms\helmets\22ndRDF.paa";

        class XtdGearInfo
        {
            model = "W_CH252C_Helmet";
            Camouflage = "Urban";
            Variant = "Lamb";
        };

        hiddenSelectionsTextures[]=
        {
            "\22nd_uniforms\helmets\Customs\Crewman\Lamb\22nd_Lamb_crewmanurbancamo.paa"
        };
    };
    class 22nd_CH252C_Lamb_Winter : W_CH252C_Helmet_Urban{
        scope=2;
        scopeArsenal=2;
        author= "Astro";
        displayName= "[22nd] CH252C Snow";
        picture = "\22nd_uniforms\helmets\22ndRDF.paa";

        class XtdGearInfo
        {
            model = "W_CH252C_Helmet";
            Camouflage = "Winter";
            Variant = "Lamb";
        };

        hiddenSelectionsTextures[]=
        {
            "\22nd_uniforms\helmets\Customs\Crewman\Lamb\22nd_Lamb_crewmansnowcamo.paa"
        };
    };
    class 22nd_CH252C_Lamb_Arid : W_CH252C_Helmet_Urban{
        scope=2;
        scopeArsenal=2;
        author= "Astro";
        displayName= "[22nd] CH252C Arid";
        picture = "\22nd_uniforms\helmets\22ndRDF.paa";

        class XtdGearInfo
        {
            model = "W_CH252C_Helmet";
            Camouflage = "Arid";
            Variant = "Lamb";
        };

        hiddenSelectionsTextures[]=
        {
            "\22nd_uniforms\helmets\Customs\Crewman\Lamb\22nd_Lamb_crewmanaridcamo.paa"
        };
    };
    class 22nd_CH252C_Lamb_Woodland : W_CH252C_Helmet_Urban{
        scope=2;
        scopeArsenal=2;
        author= "Astro";
        displayName= "[22nd] CH252C Woodland";
        picture = "\22nd_uniforms\helmets\22ndRDF.paa";

        class XtdGearInfo
        {
            model = "W_CH252C_Helmet";
            Camouflage = "Woodland";
            Variant = "Lamb";
        };

        hiddenSelectionsTextures[]=
        {
            "\22nd_uniforms\helmets\Customs\Crewman\Lamb\22nd_Lamb_crewmanwdlndcamo.paa"
        };
    };
