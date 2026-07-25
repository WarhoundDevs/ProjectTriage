class 22nd_144_Falcon_Orca_5: OPTRE_UNSC_falcon_armed_S
{
    scope=2;
    scopeCurator=2;
    author="Astro";

    displayName="[22nd] UH-144 Falcon (Orca 5)";

    faction="22nd_Faction";
    editorCategory="22nd_Warhound_Company";
    editorSubcategory="22nd_Warhound_Company_Air_Vehicles";

    side=1;

    hiddenSelectionsTextures[] =
    {
        "W_Units\data\Vehicles\Falcon\Orca_5\22ndRDF_Falcon_Main_Black_Orca5_co.paa",
        "W_Units\data\Vehicles\Falcon\Orca_5\22ndRDF_Falcon_Attachments_Black_Orca5_co.paa",
        "\OPTRE_Vehicles_Air\falcon\data\falcon_interior_co.paa"
    };

    textureList[] =
	{
		"Arid",
		0,
		"Arctic",
		0,
		"Urban",
		1,
		"Woodland",
		0,
	};
    class textureSources
	{
		class Arid
		{
			displayName = "Arid";
			author = "Astro";
			textures[] =
			{
				"W_Units\data\Vehicles\Falcon\Orca_5\22ndRDF_Falcon_Main_Arid_Orca5_co.paa",
				"W_Units\data\Vehicles\Falcon\Orca_5\22ndRDF_Falcon_Attachments_Arid_Orca5_co.paa",
				"\OPTRE_Vehicles_Air\falcon\data\falcon_interior_co.paa",
			};
		};
		class Arctic
		{
			displayName = "Arctic";
			author = "Astro";
			textures[] =
			{
				"W_Units\data\Vehicles\Falcon\Orca_5\22ndRDF_Falcon_Main_Snow_Orca5_co.paa",
				"W_Units\data\Vehicles\Falcon\Orca_5\22ndRDF_Falcon_Attachments_Snow_Orca5_co.paa",
				"\OPTRE_Vehicles_Air\falcon\data\falcon_interior_co.paa",
			};
		};
		class Urban
		{
			displayName = "Urban";
			author = "Astro";
			textures[] =
			{
				"W_Units\data\Vehicles\Falcon\Orca_5\22ndRDF_Falcon_Main_Black_Orca5_co.paa",
				"W_Units\data\Vehicles\Falcon\Orca_5\22ndRDF_Falcon_Attachments_Black_Orca5_co.paa",
				"\OPTRE_Vehicles_Air\falcon\data\falcon_interior_co.paa",
			};
		};
		class Woodland
		{
			displayName = "Woodland";
			author = "Astro";
			textures[] =
			{
				"W_Units\data\Vehicles\Falcon\Orca_5\22ndRDF_Falcon_Main_Woodland_Orca5_co.paa",
				"W_Units\data\Vehicles\Falcon\Orca_5\22ndRDF_Falcon_Attachments_Woodland_Orca5_co.paa",
				"\OPTRE_Vehicles_Air\falcon\data\falcon_interior_co.paa",
			};
		};
	};
    crew="OPTRE_UNSC_Marine_Pilot";
};