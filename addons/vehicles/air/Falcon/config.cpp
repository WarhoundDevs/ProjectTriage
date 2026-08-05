class CfgPatches
{
	class 22nd_vehicles_falcon
	{
		author="22nd Mod Team";
		addonRootClass="22nd_vehicles";
		requiredAddons[]=
		{
			"cba_main",
			"A3_Data_F",
			"OPTRE_Vehicles_Air_Falcon",
	
		};
		requiredVersion=0.1;
		units[]=
		{
			"Warhound_144_Falcon_Armed",
            "Warhound_144_Falcon_Unarmed",
            "Warhound_144S_Falcon_Armed",
            "Warhound_144S_Falcon_Unarmed",
            "Warhound_144_Falcon_Orca_5",
		};
	};
};

class CfgVehicles
{
    class OPTRE_UNSC_falcon_armed;
    class OPTRE_UNSC_falcon;
    class OPTRE_UNSC_falcon_armed_S;
    class OPTRE_UNSC_falcon_S;
    class Warhound_144_Falcon_Armed: OPTRE_UNSC_falcon_armed
    {
        scope=2;
        scopeCurator=2;
        author="Kidd";
        displayName="[22nd] UH-144 Falcon Armed";
        faction="22nd_Faction";
        editorCategory="22nd_Warhound_Company";
        editorSubcategory="22nd_Warhound_Company_Air_Vehicles";
        side=1;
        hiddenSelectionsTextures[] =
        {
            "z\22ndRDF\addons\vehicles\air\Falcon\Urban\22ndRDF_Falcon_Main_Black_co.paa",
            "z\22ndRDF\addons\vehicles\air\Falcon\Urban\22ndRDF_Falcon_Attachments_Black_co.paa",
            "\OPTRE_Vehicles_Air\falcon\data\falcon_interior_co.paa",
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
                author = "Kidd";
                textures[] =
                {
                    "z\22ndRDF\addons\vehicles\air\Falcon\Arid\22ndRDF_Falcon_Main_Arid_co.paa",
                    "z\22ndRDF\addons\vehicles\air\Falcon\Arid\22ndRDF_Falcon_Attachments_Arid_co.paa",
                    "\OPTRE_Vehicles_Air\falcon\data\falcon_interior_co.paa",
                };
            };
            class Arctic
            {
                displayName = "Arctic";
                author = "Kidd";
                textures[] =
                {
                    "z\22ndRDF\addons\vehicles\air\Falcon\Arctic\22ndRDF_Falcon_Main_Snow_co.paa",
                    "z\22ndRDF\addons\vehicles\air\Falcon\Arctic\22ndRDF_Falcon_Attachments_Snow_co.paa",
                    "\OPTRE_Vehicles_Air\falcon\data\falcon_interior_co.paa",
                };
            };
            class Urban
            {
                displayName = "Urban";
                author = "Kidd";
                textures[] =
                {
                    "z\22ndRDF\addons\vehicles\air\Falcon\Urban\22ndRDF_Falcon_Main_Black_co.paa",
                    "z\22ndRDF\addons\vehicles\air\Falcon\Urban\22ndRDF_Falcon_Attachments_Black_co.paa",
                    "\OPTRE_Vehicles_Air\falcon\data\falcon_interior_co.paa",
                };
            };
            class Woodland
            {
                displayName = "Woodland";
                author = "Kidd";
                textures[] =
                {
                    "z\22ndRDF\addons\vehicles\air\Falcon\Woodland\22ndRDF_Falcon_Main_Woodland_co.paa",
                    "z\22ndRDF\addons\vehicles\air\Falcon\Woodland\22ndRDF_Falcon_Attachments_Woodland_co.paa",
                    "\OPTRE_Vehicles_Air\falcon\data\falcon_interior_co.paa",
                };
            };
        };
    };
    class Warhound_144_Falcon_Unarmed: OPTRE_UNSC_falcon
    {
        scope=2;
        scopeCurator=2;
        author="Kidd";
        displayName="[22nd] UH-144 Falcon Unarmed";
        faction="22nd_Faction";
        editorCategory="22nd_Warhound_Company";
        editorSubcategory="22nd_Warhound_Company_Air_Vehicles";
        side=1;
        hiddenSelectionsTextures[] =
        {
            "z\22ndRDF\addons\vehicles\air\Falcon\Urban\22ndRDF_Falcon_Main_Black_co.paa",
            "z\22ndRDF\addons\vehicles\air\Falcon\Urban\22ndRDF_Falcon_Attachments_Black_co.paa",
            "\OPTRE_Vehicles_Air\falcon\data\falcon_interior_co.paa",
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
                author = "Kidd";
                textures[] =
                {
                    "z\22ndRDF\addons\vehicles\air\Falcon\Arid\22ndRDF_Falcon_Main_Arid_co.paa",
                    "z\22ndRDF\addons\vehicles\air\Falcon\Arid\22ndRDF_Falcon_Attachments_Arid_co.paa",
                    "\OPTRE_Vehicles_Air\falcon\data\falcon_interior_co.paa",
                };
            };
            class Arctic
            {
                displayName = "Arctic";
                author = "Kidd";
                textures[] =
                {
                    "z\22ndRDF\addons\vehicles\air\Falcon\Arctic\22ndRDF_Falcon_Main_Snow_co.paa",
                    "z\22ndRDF\addons\vehicles\air\Falcon\Arctic\22ndRDF_Falcon_Attachments_Snow_co.paa",
                    "\OPTRE_Vehicles_Air\falcon\data\falcon_interior_co.paa",
                };
            };
            class Urban
            {
                displayName = "Urban";
                author = "Kidd";
                textures[] =
                {
                    "z\22ndRDF\addons\vehicles\air\Falcon\Urban\22ndRDF_Falcon_Main_Black_co.paa",
                    "z\22ndRDF\addons\vehicles\air\Falcon\Urban\22ndRDF_Falcon_Attachments_Black_co.paa",
                    "\OPTRE_Vehicles_Air\falcon\data\falcon_interior_co.paa",
                };
            };
            class Woodland
            {
                displayName = "Woodland";
                author = "Kidd";
                textures[] =
                {
                    "z\22ndRDF\addons\vehicles\air\Falcon\Woodland\22ndRDF_Falcon_Main_Woodland_co.paa",
                    "z\22ndRDF\addons\vehicles\air\Falcon\Woodland\22ndRDF_Falcon_Attachments_Woodland_co.paa",
                    "\OPTRE_Vehicles_Air\falcon\data\falcon_interior_co.paa",
                };
            };
        };
    };
    class Warhound_144S_Falcon_Armed: OPTRE_UNSC_falcon_armed_S
    {
        scope=2;
        scopeCurator=2;
        author="Kidd";
        displayName="[22nd] UH-144S Falcon Armed";
        faction="22nd_Faction";
        editorCategory="22nd_Warhound_Company";
        editorSubcategory="22nd_Warhound_Company_Air_Vehicles";
        side=1;
        hiddenSelectionsTextures[] =
        {
            "z\22ndRDF\addons\vehicles\air\Falcon\Urban\22ndRDF_Falcon_Main_Black_co.paa",
            "z\22ndRDF\addons\vehicles\air\Falcon\Urban\22ndRDF_Falcon_Attachments_Black_co.paa",
            "\OPTRE_Vehicles_Air\falcon\data\falcon_interior_co.paa",
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
                author = "Kidd";
                textures[] =
                {
                    "z\22ndRDF\addons\vehicles\air\Falcon\Arid\22ndRDF_Falcon_Main_Arid_co.paa",
                    "z\22ndRDF\addons\vehicles\air\Falcon\Arid\22ndRDF_Falcon_Attachments_Arid_co.paa",
                    "\OPTRE_Vehicles_Air\falcon\data\falcon_interior_co.paa",
                };
            };
            class Arctic
            {
                displayName = "Arctic";
                author = "Kidd";
                textures[] =
                {
                    "z\22ndRDF\addons\vehicles\air\Falcon\Arctic\22ndRDF_Falcon_Main_Snow_co.paa",
                    "z\22ndRDF\addons\vehicles\air\Falcon\Arctic\22ndRDF_Falcon_Attachments_Snow_co.paa",
                    "\OPTRE_Vehicles_Air\falcon\data\falcon_interior_co.paa",
                };
            };
            class Urban
            {
                displayName = "Urban";
                author = "Kidd";
                textures[] =
                {
                    "z\22ndRDF\addons\vehicles\air\Falcon\Urban\22ndRDF_Falcon_Main_Black_co.paa",
                    "z\22ndRDF\addons\vehicles\air\Falcon\Urban\22ndRDF_Falcon_Attachments_Black_co.paa",
                    "\OPTRE_Vehicles_Air\falcon\data\falcon_interior_co.paa",
                };
            };
            class Woodland
            {
                displayName = "Woodland";
                author = "Kidd";
                textures[] =
                {
                    "z\22ndRDF\addons\vehicles\air\Falcon\Woodland\22ndRDF_Falcon_Main_Woodland_co.paa",
                    "z\22ndRDF\addons\vehicles\air\Falcon\Woodland\22ndRDF_Falcon_Attachments_Woodland_co.paa",
                    "\OPTRE_Vehicles_Air\falcon\data\falcon_interior_co.paa",
                };
            };
        };
    };
    class Warhound_144S_Falcon_Unarmed: OPTRE_UNSC_falcon_S
    {
        scope=2;
        scopeCurator=2;
        author="Kidd";
        displayName="[22nd] UH-144S Falcon Unarmed";
        faction="22nd_Faction";
        editorCategory="22nd_Warhound_Company";
        editorSubcategory="22nd_Warhound_Company_Air_Vehicles";
        side=1;
        hiddenSelectionsTextures[] =
        {
            "z\22ndRDF\addons\vehicles\air\Falcon\Urban\22ndRDF_Falcon_Main_Black_co.paa",
            "z\22ndRDF\addons\vehicles\air\Falcon\Urban\22ndRDF_Falcon_Attachments_Black_co.paa",
            "\OPTRE_Vehicles_Air\falcon\data\falcon_interior_co.paa",
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
                author = "Kidd";
                textures[] =
                {
                    "z\22ndRDF\addons\vehicles\air\Falcon\Arid\22ndRDF_Falcon_Main_Arid_co.paa",
                    "z\22ndRDF\addons\vehicles\air\Falcon\Arid\22ndRDF_Falcon_Attachments_Arid_co.paa",
                    "\OPTRE_Vehicles_Air\falcon\data\falcon_interior_co.paa",
                };
            };
            class Arctic
            {
                displayName = "Arctic";
                author = "Kidd";
                textures[] =
                {
                    "z\22ndRDF\addons\vehicles\air\Falcon\Arctic\22ndRDF_Falcon_Main_Snow_co.paa",
                    "z\22ndRDF\addons\vehicles\air\Falcon\Arctic\22ndRDF_Falcon_Attachments_Snow_co.paa",
                    "\OPTRE_Vehicles_Air\falcon\data\falcon_interior_co.paa",
                };
            };
            class Urban
            {
                displayName = "Urban";
                author = "Kidd";
                textures[] =
                {
                    "z\22ndRDF\addons\vehicles\air\Falcon\Urban\22ndRDF_Falcon_Main_Black_co.paa",
                    "z\22ndRDF\addons\vehicles\air\Falcon\Urban\22ndRDF_Falcon_Attachments_Black_co.paa",
                    "\OPTRE_Vehicles_Air\falcon\data\falcon_interior_co.paa",
                };
            };
            class Woodland
            {
                displayName = "Woodland";
                author = "Kidd";
                textures[] =
                {
                    "z\22ndRDF\addons\vehicles\air\Falcon\Woodland\22ndRDF_Falcon_Main_Woodland_co.paa",
                    "z\22ndRDF\addons\vehicles\air\Falcon\Woodland\22ndRDF_Falcon_Attachments_Woodland_co.paa",
                    "\OPTRE_Vehicles_Air\falcon\data\falcon_interior_co.paa",
                };
            };
        };
    };
    class Warhound_144_Falcon_Orca_5: OPTRE_UNSC_falcon_armed_S
    {
        scope=2;
        scopeCurator=2;
        author="Astro";
        displayName="[22nd] UH-144 Falcon (Orca 5)";
        faction="22nd_Faction";
        crew="OPTRE_UNSC_Marine_Pilot";
        editorCategory="22nd_Warhound_Company";
        editorSubcategory="22nd_Warhound_Company_Air_Vehicles";
        side=1;
        hiddenSelectionsTextures[] =
        {
            "z\22ndRDF\addons\vehicles\air\Falcon\Orca_5\22ndRDF_Falcon_Main_Black_Orca5_co.paa",
            "z\22ndRDF\addons\vehicles\air\Falcon\Orca_5\22ndRDF_Falcon_Attachments_Black_Orca5_co.paa",
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
                    "z\22ndRDF\addons\vehicles\air\Falcon\Orca_5\22ndRDF_Falcon_Main_Arid_Orca5_co.paa",
                    "z\22ndRDF\addons\vehicles\air\Falcon\Orca_5\22ndRDF_Falcon_Attachments_Arid_Orca5_co.paa",
                    "\OPTRE_Vehicles_Air\falcon\data\falcon_interior_co.paa",
                };
            };
            class Arctic
            {
                displayName = "Arctic";
                author = "Astro";
                textures[] =
                {
                    "z\22ndRDF\addons\vehicles\air\Falcon\Orca_5\22ndRDF_Falcon_Main_Snow_Orca5_co.paa",
                    "z\22ndRDF\addons\vehicles\air\Falcon\Orca_5\22ndRDF_Falcon_Attachments_Snow_Orca5_co.paa",
                    "\OPTRE_Vehicles_Air\falcon\data\falcon_interior_co.paa",
                };
            };
            class Urban
            {
                displayName = "Urban";
                author = "Astro";
                textures[] =
                {
                    "z\22ndRDF\addons\vehicles\air\Falcon\Orca_5\22ndRDF_Falcon_Main_Black_Orca5_co.paa",
                    "z\22ndRDF\addons\vehicles\air\Falcon\Orca_5\22ndRDF_Falcon_Attachments_Black_Orca5_co.paa",
                    "\OPTRE_Vehicles_Air\falcon\data\falcon_interior_co.paa",
                };
            };
            class Woodland
            {
                displayName = "Woodland";
                author = "Astro";
                textures[] =
                {
                    "z\22ndRDF\addons\vehicles\air\Falcon\Orca_5\22ndRDF_Falcon_Main_Woodland_Orca5_co.paa",
                    "z\22ndRDF\addons\vehicles\air\Falcon\Orca_5\22ndRDF_Falcon_Attachments_Woodland_Orca5_co.paa",
                    "\OPTRE_Vehicles_Air\falcon\data\falcon_interior_co.paa",
                };
            };
        };
    };
};
