class CfgPatches
{
	class 22nd_vehicles_apc_oryx
	{
		author="22nd Mod Team";
		addonRootClass="22nd_vehicles";
		requiredAddons[]=
		{
			"cba_main",
			"A3_Data_F",
			"OPTRE_Vehicles_M494",
	
		};
		requiredVersion=0.1;
		units[]=
		{
			"Warhound_APC_Oryx",
            "Warhound_APC_Oryx_AIE",
            "Warhound_APC_Oryx_AIE_RCWS",
            "Warhound_APC_Oryx_M37",
            "Warhound_APC_Oryx_M37_RCWS"
		};
	};
};

class CfgVehicles
{
    class OPTRE_M493_APC;
    class OPTRE_M493_AIE;
    class OPTRE_M493_AIE_RCWS;
    class OPTRE_M493_M37;
    class OPTRE_M493_M37_RCWS;
    class Warhound_APC_Oryx: OPTRE_M493_APC
    {
        scope=2;
        author="Gatt, Kidd";
        displayName="[22nd] M493 Oryx APC";
        faction="22nd_Faction";
        editorCategory="22nd_Warhound_Company";
        editorSubcategory="22nd_Warhound_Company_APCs";
        editorPreview="z\22ndRDF\addons\vehicles\ground\OryxAPC\Preview\OryxAPC.jpg";
        side=1;
        LODDriverTurnedIn=1100;
        hiddenSelectionsTextures[] = 
        {
            "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Base\22nd_standard_oryx_armor_base.paa",
            "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Base\22nd_standard_oryx_main_base.paa",
            "\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
            "\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
            "\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
            "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Base\22nd_standard_oryx_turret_base.paa",
            "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Base\22nd_standard_oryx_MG_base.paa"
        };
        textureList[] =
        {
            "OryxAPC_Urban",
            1,
            "OryxAPC_Woodland",
            0,
            "OryxAPC_Arid",
            0,
            "OryxAPC_Arctic",
            0,
            "OryxAPC_Jungle",
            0,
            "OryxAPC_OD",
            0,
        };
        class textureSources
        {
            class OryxAPC_Urban
            {
                displayName = "Urban Camo";
                author = "Astro";
                textures[] =
                {
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Urban\22nd_standard_oryx_armor_urb.paa",
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Urban\22nd_standard_oryx_main_urb.paa",
                    "\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
                    "\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
                    "\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Urban\22nd_standard_oryx_turret_urb.paa",
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Urban\22nd_standard_mg_urb.paa"
                };
            };
            class OryxAPC_Arid
            {
                displayName = "Arid Camo";
                author = "Astro";
                textures[] =
                {
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Arid\22nd_standard_oryx_armor_des.paa",
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Arid\22nd_standard_oryx_main_des.paa",
                    "\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_desert_ca.paa",
                    "\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_desert_ca.paa",
                    "\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_desert_ca.paa",
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Arid\22nd_standard_oryx_turret_des.paa",
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Arid\22nd_standard_mg_des.paa"
                };
            };
            class OryxAPC_Woodland
            {
                displayName = "Woodland Camo";
                author = "Astro";
                textures[] =
                {
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Woodland\22nd_standard_oryx_armor_WDL.paa",
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Woodland\22nd_standard_oryx_main_WDL.paa",
                    "\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_jungle_ca.paa",
                    "\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_jungle_ca.paa",
                    "\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_jungle_ca.paa",
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Woodland\22nd_standard_oryx_turret_WDL.paa",
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Woodland\22nd_standard_mg_WDL.paa"
                };
            };
            class OryxAPC_Arctic
            {
                displayName = "Arctic Camo";
                author = "Astro";
                textures[] =
                {
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Arctic\22nd_standard_oryx_armor_artic.paa",
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Arctic\22nd_standard_oryx_main_artic.paa",
                    "\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_tundra_ca.paa",
                    "\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_tundra_ca.paa",
                    "\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_tundra_ca.paa",
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Arctic\22nd_standard_oryx_turret_artic.paa",
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Arctic\22nd_standard_mg_artic.paa"
                };
            };
            class OryxAPC_Jungle
            {
                displayName = "Jungle Camo";
                author = "Astro";
                textures[] =
                {
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Jungle\22nd_standard_oryx_armor_jungle.paa",
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Jungle\22nd_standard_oryx_main_jungle.paa",
                    "\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
                    "\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
                    "\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Jungle\22nd_standard_oryx_turret_jungle.paa",
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Jungle\22nd_standard_mg_jungle.paa"
                };
            };
            class OryxAPC_OD
            {
                displayName = "OD Camo";
                author = "Astro";
                textures[] =
                {
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\OD\22nd_standard_oryx_armor_OD.paa",
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\OD\22nd_standard_oryx_main_OD.paa",
                    "\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
                    "\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
                    "\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\OD\22nd_standard_oryx_turret_OD.paa",
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\OD\22nd_standard_mg_OD.paa"
                };
            };
        };
    };
    class Warhound_APC_Oryx_AIE: OPTRE_M493_AIE
    {
        scope=2;
        author="Gatt, Kidd";
        displayName="[22nd] M493 Oryx APC AIE";
        faction="22nd_Faction";
        editorCategory="22nd_Warhound_Company";
        editorSubcategory="22nd_Warhound_Company_APCs";
        editorPreview="z\22ndRDF\addons\vehicles\ground\OryxAPC\Preview\OryxAPC.jpg";
        side=1;
        LODDriverTurnedIn=1100;
        hiddenSelectionsTextures[] =
        {
            "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Base\22nd_standard_oryx_armor_base.paa",
            "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Base\22nd_standard_oryx_main_base.paa",
            "\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
            "\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
            "\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
            "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Base\22nd_standard_oryx_turret_base.paa",
            "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Base\22nd_standard_oryx_MG_base.paa"
        };
        textureList[] =
        {
            "OryxAPC_AIE_Urban",
            1,
            "OryxAPC_AIE_Woodland",
            0,
            "OryxAPC_AIE_Arid",
            0,
            "OryxAPC_AIE_Arctic",
            0,
            "OryxAPC_AIE_Jungle",
            0,
            "OryxAPC_AIE_OD",
            0,
        };
        class textureSources
        {
            class OryxAPC_AIE_Urban
            {
                displayName = "Urban Camo";
                author = "Astro";
                textures[] =
                {
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Urban\22nd_standard_oryx_armor_urb.paa",
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Urban\22nd_standard_oryx_main_urb.paa",
                    "\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
                    "\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
                    "\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Urban\22nd_standard_oryx_turret_urb.paa",
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Urban\22nd_standard_mg_urb.paa"
                };
            };
            class OryxAPC_AIE_Arid
            {
                displayName = "Arid Camo";
                author = "Astro";
                textures[] =
                {
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Arid\22nd_standard_oryx_armor_des.paa",
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Arid\22nd_standard_oryx_main_des.paa",
                    "\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_desert_ca.paa",
                    "\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_desert_ca.paa",
                    "\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_desert_ca.paa",
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Arid\22nd_standard_oryx_turret_des.paa",
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Arid\22nd_standard_mg_des.paa"
                };
            };
            class OryxAPC_AIE_Woodland
            {
                displayName = "Woodland Camo";
                author = "Astro";
                textures[] =
                {
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Woodland\22nd_standard_oryx_armor_WDL.paa",
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Woodland\22nd_standard_oryx_main_WDL.paa",
                    "\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_jungle_ca.paa",
                    "\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_jungle_ca.paa",
                    "\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_jungle_ca.paa",
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Woodland\22nd_standard_oryx_turret_WDL.paa",
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Woodland\22nd_standard_mg_WDL.paa"
                };
            };
            class OryxAPC_AIE_Arctic
            {
                displayName = "Arctic Camo";
                author = "Astro";
                textures[] =
                {
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Arctic\22nd_standard_oryx_armor_artic.paa",
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Arctic\22nd_standard_oryx_main_artic.paa",
                    "\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_tundra_ca.paa",
                    "\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_tundra_ca.paa",
                    "\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_tundra_ca.paa",
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Arctic\22nd_standard_oryx_turret_artic.paa",
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Arctic\22nd_standard_mg_artic.paa"
                };
            };
            class OryxAPC_AIE_Jungle
            {
                displayName = "Jungle Camo";
                author = "Astro";
                textures[] =
                {
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Jungle\22nd_standard_oryx_armor_jungle.paa",
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Jungle\22nd_standard_oryx_main_jungle.paa",
                    "\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
                    "\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
                    "\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Jungle\22nd_standard_oryx_turret_jungle.paa",
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Jungle\22nd_standard_mg_jungle.paa"
                };
            };
            class OryxAPC_AIE_OD
            {
                displayName = "OD Camo";
                author = "Astro";
                textures[] =
                {
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\OD\22nd_standard_oryx_armor_OD.paa",
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\OD\22nd_standard_oryx_main_OD.paa",
                    "\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
                    "\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
                    "\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\OD\22nd_standard_oryx_turret_OD.paa",
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\OD\22nd_standard_mg_OD.paa"
                };
            };
        };
    };
    class Warhound_APC_Oryx_AIE_RCWS: OPTRE_M493_AIE_RCWS
    {
        scope=2;
        author="Gatt, Kidd";
        displayName="[22nd] M493 Oryx APC AIE RCWS";
        faction="22nd_Faction";
        editorCategory="22nd_Warhound_Company";
        editorSubcategory="22nd_Warhound_Company_APCs";
        editorPreview="z\22ndRDF\addons\vehicles\ground\OryxAPC\Preview\OryxAPC.jpg";
        side=1;
        LODDriverTurnedIn=1100;
        hiddenSelectionsTextures[] =
        {
            "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Base\22nd_standard_oryx_armor_base.paa",
            "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Base\22nd_standard_oryx_main_base.paa",
            "\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
            "\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
            "\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
            "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Base\22nd_standard_oryx_turret_base.paa",
            "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Base\22nd_standard_oryx_MG_base.paa"
        };
        textureList[] =
        {
            "OryxAPC_AIE_RCWS_Urban",
            1,
            "OryxAPC_AIE_RCWS_Woodland",
            0,
            "OryxAPC_AIE_RCWS_Arid",
            0,
            "OryxAPC_AIE_RCWS_Arctic",
            0,
            "OryxAPC_AIE_RCWS_Jungle",
            0,
            "OryxAPC_AIE_RCWS_OD",
            0,
        };
        class textureSources
        {
            class OryxAPC_AIE_RCWS_Urban
            {
                displayName = "Urban Camo";
                author = "Astro";
                textures[] =
                {
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Urban\22nd_standard_oryx_armor_urb.paa",
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Urban\22nd_standard_oryx_main_urb.paa",
                    "\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
                    "\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
                    "\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Urban\22nd_standard_oryx_turret_urb.paa",
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Urban\22nd_standard_mg_urb.paa"
                };
            };
            class OryxAPC_AIE_RCWS_Arid
            {
                displayName = "Arid Camo";
                author = "Astro";
                textures[] =
                {
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Arid\22nd_standard_oryx_armor_des.paa",
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Arid\22nd_standard_oryx_main_des.paa",
                    "\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_desert_ca.paa",
                    "\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_desert_ca.paa",
                    "\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_desert_ca.paa",
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Arid\22nd_standard_oryx_turret_des.paa",
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Arid\22nd_standard_mg_des.paa"
                };
            };
            class OryxAPC_AIE_RCWS_Woodland
            {
                displayName = "Woodland Camo";
                author = "Astro";
                textures[] =
                {
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Woodland\22nd_standard_oryx_armor_WDL.paa",
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Woodland\22nd_standard_oryx_main_WDL.paa",
                    "\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_jungle_ca.paa",
                    "\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_jungle_ca.paa",
                    "\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_jungle_ca.paa",
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Woodland\22nd_standard_oryx_turret_WDL.paa",
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Woodland\22nd_standard_mg_WDL.paa"
                };
            };
            class OryxAPC_AIE_RCWS_Arctic
            {
                displayName = "Arctic Camo";
                author = "Astro";
                textures[] =
                {
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Arctic\22nd_standard_oryx_armor_artic.paa",
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Arctic\22nd_standard_oryx_main_artic.paa",
                    "\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_tundra_ca.paa",
                    "\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_tundra_ca.paa",
                    "\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_tundra_ca.paa",
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Arctic\22nd_standard_oryx_turret_artic.paa",
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Arctic\22nd_standard_mg_artic.paa"
                };
            };
            class OryxAPC_AIE_RCWS_Jungle
            {
                displayName = "Jungle Camo";
                author = "Astro";
                textures[] =
                {
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Jungle\22nd_standard_oryx_armor_jungle.paa",
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Jungle\22nd_standard_oryx_main_jungle.paa",
                    "\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
                    "\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
                    "\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Jungle\22nd_standard_oryx_turret_jungle.paa",
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Jungle\22nd_standard_mg_jungle.paa"
                };
            };
            class OryxAPC_AIE_RCWS_OD
            {
                displayName = "OD Camo";
                author = "Astro";
                textures[] =
                {
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\OD\22nd_standard_oryx_armor_OD.paa",
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\OD\22nd_standard_oryx_main_OD.paa",
                    "\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
                    "\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
                    "\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\OD\22nd_standard_oryx_turret_OD.paa",
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\OD\22nd_standard_mg_OD.paa"
                };
            };
        };
    };
    class Warhound_APC_Oryx_M37: OPTRE_M493_M37
    {
        scope=2;
        author="Gatt, Kidd";
        displayName="[22nd] M493 Oryx APC M37";
        faction="22nd_Faction";
        editorCategory="22nd_Warhound_Company";
        editorSubcategory="22nd_Warhound_Company_APCs";
        editorPreview="z\22ndRDF\addons\vehicles\ground\OryxAPC\Preview\OryxAPC.jpg";
        side=1;
        LODDriverTurnedIn=1100;
        hiddenSelectionsTextures[] =
        {
            "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Base\22nd_standard_oryx_armor_base.paa",
            "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Base\22nd_standard_oryx_main_base.paa",
            "\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
            "\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
            "\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
            "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Base\22nd_standard_oryx_turret_base.paa",
            "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Base\22nd_standard_oryx_MG_base.paa"
        };
        textureList[] =
        {
            "OryxAPC_M37_Urban",
            1,
            "OryxAPC_M37_Woodland",
            0,
            "OryxAPC_M37_Arid",
            0,
            "OryxAPC_M37_Arctic",
            0,
            "OryxAPC_M37_Jungle",
            0,
            "OryxAPC_M37_OD",
            0,
        };
        class textureSources
        {
            class OryxAPC_M37_Urban
            {
                displayName = "Urban Camo";
                author = "Astro";
                textures[] =
                {
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Urban\22nd_standard_oryx_armor_urb.paa",
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Urban\22nd_standard_oryx_main_urb.paa",
                    "\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
                    "\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
                    "\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Urban\22nd_standard_oryx_turret_urb.paa",
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Urban\22nd_standard_mg_urb.paa"
                };
            };
            class OryxAPC_M37_Arid
            {
                displayName = "Arid Camo";
                author = "Astro";
                textures[] =
                {
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Arid\22nd_standard_oryx_armor_des.paa",
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Arid\22nd_standard_oryx_main_des.paa",
                    "\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_desert_ca.paa",
                    "\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_desert_ca.paa",
                    "\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_desert_ca.paa",
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Arid\22nd_standard_oryx_turret_des.paa",
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Arid\22nd_standard_mg_des.paa"
                };
            };
            class OryxAPC_M37_Woodland
            {
                displayName = "Woodland Camo";
                author = "Astro";
                textures[] =
                {
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Woodland\22nd_standard_oryx_armor_WDL.paa",
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Woodland\22nd_standard_oryx_main_WDL.paa",
                    "\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_jungle_ca.paa",
                    "\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_jungle_ca.paa",
                    "\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_jungle_ca.paa",
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Woodland\22nd_standard_oryx_turret_WDL.paa",
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Woodland\22nd_standard_mg_WDL.paa"
                };
            };
            class OryxAPC_M37_Arctic
            {
                displayName = "Arctic Camo";
                author = "Astro";
                textures[] =
                {
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Arctic\22nd_standard_oryx_armor_artic.paa",
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Arctic\22nd_standard_oryx_main_artic.paa",
                    "\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_tundra_ca.paa",
                    "\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_tundra_ca.paa",
                    "\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_tundra_ca.paa",
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Arctic\22nd_standard_oryx_turret_artic.paa",
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Arctic\22nd_standard_mg_artic.paa"
                };
            };
            class OryxAPC_M37_Jungle
            {
                displayName = "Jungle Camo";
                author = "Astro";
                textures[] =
                {
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Jungle\22nd_standard_oryx_armor_jungle.paa",
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Jungle\22nd_standard_oryx_main_jungle.paa",
                    "\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
                    "\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
                    "\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Jungle\22nd_standard_oryx_turret_jungle.paa",
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Jungle\22nd_standard_mg_jungle.paa"
                };
            };
            class OryxAPC_M37_OD
            {
                displayName = "OD Camo";
                author = "Astro";
                textures[] =
                {
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\OD\22nd_standard_oryx_armor_OD.paa",
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\OD\22nd_standard_oryx_main_OD.paa",
                    "\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
                    "\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
                    "\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\OD\22nd_standard_oryx_turret_OD.paa",
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\OD\22nd_standard_mg_OD.paa"
                };
            };
        };
    };
    class Warhound_APC_Oryx_M37_RCWS: OPTRE_M493_M37_RCWS
    {
        scope=2;
        author="Gatt, Kidd";
        displayName="[22nd] M493 Oryx APC M37 RCWS";
        faction="22nd_Faction";
        editorCategory="22nd_Warhound_Company";
        editorSubcategory="22nd_Warhound_Company_APCs";
        editorPreview="z\22ndRDF\addons\vehicles\ground\OryxAPC\Preview\OryxAPC.jpg";
        side=1;
        LODDriverTurnedIn=1100;
        hiddenSelectionsTextures[] =
        {
            "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Base\22nd_standard_oryx_armor_base.paa",
            "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Base\22nd_standard_oryx_main_base.paa",
            "\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
            "\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
            "\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
            "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Base\22nd_standard_oryx_turret_base.paa",
            "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Base\22nd_standard_oryx_MG_base.paa"
        };
        textureList[] =
        {
            "OryxAPC_M37_RCWS_Urban",
            1,
            "OryxAPC_M37_RCWS_Woodland",
            0,
            "OryxAPC_M37_RCWS_Arid",
            0,
            "OryxAPC_M37_RCWS_Arctic",
            0,
            "OryxAPC_M37_RCWS_Jungle",
            0,
            "OryxAPC_M37_RCWS_OD",
            0,
        };
        class textureSources
        {
            class OryxAPC_M37_RCWS_Urban
            {
                displayName = "Urban Camo";
                author = "Astro";
                textures[] =
                {
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Urban\22nd_standard_oryx_armor_urb.paa",
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Urban\22nd_standard_oryx_main_urb.paa",
                    "\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
                    "\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
                    "\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Urban\22nd_standard_oryx_turret_urb.paa",
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Urban\22nd_standard_mg_urb.paa"
                };
            };
            class OryxAPC_M37_RCWS_Arid
            {
                displayName = "Arid Camo";
                author = "Astro";
                textures[] =
                {
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Arid\22nd_standard_oryx_armor_des.paa",
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Arid\22nd_standard_oryx_main_des.paa",
                    "\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_desert_ca.paa",
                    "\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_desert_ca.paa",
                    "\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_desert_ca.paa",
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Arid\22nd_standard_oryx_turret_des.paa",
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Arid\22nd_standard_mg_des.paa"
                };
            };
            class OryxAPC_M37_RCWS_Woodland
            {
                displayName = "Woodland Camo";
                author = "Astro";
                textures[] =
                {
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Woodland\22nd_standard_oryx_armor_WDL.paa",
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Woodland\22nd_standard_oryx_main_WDL.paa",
                    "\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_jungle_ca.paa",
                    "\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_jungle_ca.paa",
                    "\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_jungle_ca.paa",
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Woodland\22nd_standard_oryx_turret_WDL.paa",
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Woodland\22nd_standard_mg_WDL.paa"
                };
            };
            class OryxAPC_M37_RCWS_Arctic
            {
                displayName = "Arctic Camo";
                author = "Astro";
                textures[] =
                {
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Arctic\22nd_standard_oryx_armor_artic.paa",
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Arctic\22nd_standard_oryx_main_artic.paa",
                    "\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_tundra_ca.paa",
                    "\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_tundra_ca.paa",
                    "\OPTRE_Vehicles_Tracked\Oryx\data\texture\camo\oryx_net_tundra_ca.paa",
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Arctic\22nd_standard_oryx_turret_artic.paa",
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Arctic\22nd_standard_mg_artic.paa"
                };
            };
            class OryxAPC_M37_RCWS_Jungle
            {
                displayName = "Jungle Camo";
                author = "Astro";
                textures[] =
                {
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Jungle\22nd_standard_oryx_armor_jungle.paa",
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Jungle\22nd_standard_oryx_main_jungle.paa",
                    "\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
                    "\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
                    "\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Jungle\22nd_standard_oryx_turret_jungle.paa",
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\Jungle\22nd_standard_mg_jungle.paa"
                };
            };
            class OryxAPC_M37_RCWS_OD
            {
                displayName = "OD Camo";
                author = "Astro";
                textures[] =
                {
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\OD\22nd_standard_oryx_armor_OD.paa",
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\OD\22nd_standard_oryx_main_OD.paa",
                    "\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
                    "\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
                    "\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa",
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\OD\22nd_standard_oryx_turret_OD.paa",
                    "z\22ndRDF\addons\vehicles\ground\OryxAPC\Standard\OD\22nd_standard_mg_OD.paa"
                };
            };
        };
    };
};
