class CfgPatches
{
	class 22nd_vehicles_bayonet
	{
		author="22nd Mod Team";
		addonRootClass="22nd_vehicles";
		requiredAddons[]=
		{
			"cba_main",
			"A3_Data_F",
			"OPTRE_Plus",
	
		};
		requiredVersion=0.1;
		units[]=
		{
			"Warhound_Bayonet_Orca_Default",
            "Warhound_Bayonet_Orca_Stealth",
            "Warhound_Bayonet_Orca_3",
            "Warhound_Bayonet_Stealth_Orca3",
            "Warhound_Bayonet_Orca_4",
		};
	};
};

class CfgVehicles
{
    class B_Plane_Fighter_01_F;
    class OPTRE_bayonet_01;
    class OPTRE_bayonetstealth_01;
    class Warhound_Bayonet_Orca_Default: OPTRE_bayonet_01
    {
        side=1;
        scope=2;
        scopeCurator=2;
        editorCategory="22nd_Warhound_Company";
        editorSubcategory="22nd_Warhound_Company_Air_Vehicles";
        dlc="Cvics";
        author="DJ Tachanka";
        crew="OPTRE_UNSC_Marine_Pilot";
        displayName="[22nd] Bayonet (Orca)";
        class textureSources
        {
            class OrcaBayonetDefault
            {
                author="DJ Tachanka";
                displayName="Orca";
                textures[]=
                {
                    "z\22ndRDF\addons\vehicles\air\Bayonet\Bayonet_01_fuselage_Orca_co.paa",
                    "z\22ndRDF\addons\vehicles\air\Bayonet\Bayonet_02_fuselage_Orca_co.paa"
                };
            };
        };
        hiddenSelectionsTextures[]=
        {
            "z\22ndRDF\addons\vehicles\air\Bayonet\Bayonet_01_fuselage_Orca_co.paa",
            "z\22ndRDF\addons\vehicles\air\Bayonet\Bayonet_02_fuselage_Orca_co.paa"
        };
    };
    class Warhound_Bayonet_Orca_Stealth: OPTRE_bayonetstealth_01
    {
        side=1;
        scope=2;
        scopeCurator=2;
        editorCategory="22nd_Warhound_Company";
        editorSubcategory="22nd_Warhound_Company_Air_Vehicles";
        dlc="Cvics";
        author="DJ Tachanka";
        crew="OPTRE_UNSC_Marine_Pilot";
        displayName="[22nd] Bayonet Stealth (Orca)";
        class textureSources
        {
            class OrcaBayonetStealth
            {
                author="DJ Tachanka";
                displayName="Orca";
                textures[]=
                {
                    "z\22ndRDF\addons\vehicles\air\Bayonet\Bayonet_01_fuselage_Orca_co.paa",
                    "z\22ndRDF\addons\vehicles\air\Bayonet\Bayonet_02_fuselage_Orca_co.paa"
                };
            };
        };
        hiddenSelectionsTextures[]=
        {
            "z\22ndRDF\addons\vehicles\air\Bayonet\Bayonet_01_fuselage_Orca_co.paa",
            "z\22ndRDF\addons\vehicles\air\Bayonet\Bayonet_02_fuselage_Orca_co.paa"
        };
    };
    class Warhound_Bayonet_Orca_3: OPTRE_bayonet_01
    {
        side=1;
        scope=2;
        editorCategory="22nd_Warhound_Company";
        editorSubcategory="22nd_Warhound_Company_Air_Vehicles";
        dlc="Cvics";
        author="Astro";
        crew="OPTRE_UNSC_Marine_Pilot";
        displayName="[22nd] Bayonet (Orca 3)";
        class textureSources
        {
            class Orca3Bayonet
            {
                author="Astro";
                displayName="Orca 3";
                textures[]=
                {
                    "z\22ndRDF\addons\vehicles\air\Bayonet\Orca_3\Bayonet_01_fuselage_Orca3_co.paa",
                    "z\22ndRDF\addons\vehicles\air\Bayonet\Orca_3\Bayonet_02_fuselage_Orca3_co.paa"
                };
            };
        };
        hiddenSelectionsTextures[]=
        {
            "z\22ndRDF\addons\vehicles\air\Bayonet\Orca_3\Bayonet_01_fuselage_Orca3_co.paa",
            "z\22ndRDF\addons\vehicles\air\Bayonet\Orca_3\Bayonet_02_fuselage_Orca3_co.paa"
        };
    };
    class Warhound_Bayonet_Stealth_Orca3: OPTRE_bayonetstealth_01
    {
        side=1;
        scope=2;
        editorCategory="22nd_Warhound_Company";
        editorSubcategory="22nd_Warhound_Company_Air_Vehicles";
        dlc="Cvics";
        author="Astro";
        crew="OPTRE_UNSC_Marine_Pilot";
        displayName="[22nd] Bayonet Stealth (Orca 3)";
        class textureSources
        {
            class Orca3StealthBayonet
            {
                author="Astro";
                displayName="Orca 3";
                textures[]=
                {
                    "z\22ndRDF\addons\vehicles\air\Bayonet\Orca_3\Bayonet_01_fuselage_Orca3_co.paa",
                    "z\22ndRDF\addons\vehicles\air\Bayonet\Orca_3\Bayonet_02_fuselage_Orca3_co.paa"
                };
            };
        };
        hiddenSelectionsTextures[]=
        {
            "z\22ndRDF\addons\vehicles\air\Bayonet\Orca_3\Bayonet_01_fuselage_Orca3_co.paa",
            "z\22ndRDF\addons\vehicles\air\Bayonet\Orca_3\Bayonet_02_fuselage_Orca3_co.paa"
        };
    };
    class Warhound_Bayonet_Orca_4: OPTRE_bayonet_01
    {
        side=1;
        scope=2;
        editorCategory="22nd_Warhound_Company";
        editorSubcategory="22nd_Warhound_Company_Air_Vehicles";
        dlc="Cvics";
        author="DJ Tachanka";
        crew="OPTRE_UNSC_Marine_Pilot";
        displayName="[22nd] Bayonet (Orca 4)";
        class textureSources
        {
            class Orca4Bayonet
            {
                author="DJ Tachanka";
                displayName="Orca 4";
                textures[]=
                {
                    "z\22ndRDF\addons\vehicles\air\Bayonet\Orca_4\Bayonet_01_fuselage_Orca4_co.paa",
                    "z\22ndRDF\addons\vehicles\air\Bayonet\Bayonet_02_fuselage_Orca_co.paa"
                };
            };
        };
        hiddenSelectionsTextures[]=
        {
            "z\22ndRDF\addons\vehicles\air\Bayonet\Orca_4\Bayonet_01_fuselage_Orca4_co.paa",
            "z\22ndRDF\addons\vehicles\air\Bayonet\Bayonet_02_fuselage_Orca_co.paa"
        };
    };
};
