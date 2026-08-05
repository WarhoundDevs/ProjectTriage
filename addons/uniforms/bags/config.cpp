class cfgPatches
{
	class 22nd_uniforms_bags
	{
		author="The Warhound Mod Team";
		units[]=
		{
			"WH_AI_Radio",
			"WH_Invisible_Rucksack",
			"WH_Rucksack_Soft",
			"WH_Rucksack_Soft_Medical",
			"WH_Rucksack_Soft_Heavy",
			"WH_Rucksack_Soft_Snow",
			"WH_Rucksack_Soft_Medical_Snow",
			"WH_Rucksack_Soft_Heavy_Snow",
			"WH_Rucksack_Soft_WDL",
			"WH_Rucksack_Soft_Medical_WDL",
			"WH_Rucksack_Soft_Heavy_WDL"
		};
	};
};
#include "infantryXtdGear.hpp"


class CfgVehicles
{
	class OPTRE_UNSC_Rucksack;
	class OPTRE_UNSC_Rucksack_Medic;
	class OPTRE_UNSC_Rucksack_Heavy;
	class OPTRE_ANPRC_521_Green;
	class WH_AI_Radio: OPTRE_ANPRC_521_Green
	{
		author="The Warhound Mod Team";
		scope=2;
		scopeCurator=2;
		displayName="AI Radio Integration";
		model="z\22ndRDF\addons\uniforms\bags\data\WH_Invis_Tas.p3d";
		maximumLoad=250;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=25000;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
	};
	class WH_Invisible_Rucksack: OPTRE_UNSC_Rucksack
	{
		author="The Warhound Mod Team";
		scope=2;
		scopeCurator=2;
		displayName="[22nd] Invisible Backpack";
		model="z\22ndRDF\addons\uniforms\bags\data\WH_Invis_Tas.p3d";
		maximumLoad=250;
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"B_Addons",
			"B_Medic",
			"B_Radio"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
	};
	class WH_Rucksack_Soft: OPTRE_UNSC_Rucksack
	{
		author="The Warhound Mod Team";
		scope=2;
		scopeCurator=2;
		displayName="[22nd] UNSC Rucksack (MCAM)";
		maximumLoad=250;
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"B_Addons",
			"B_Medic",
			"B_Radio"
		};
        class XtdGearInfo
        {
            model = "22nd_Backpacks";
            Camoflauge = "MCAM";
            Variant = "Regular";
        };
		hiddenSelectionsTextures[]=
		{
			"z\22ndRDF\addons\uniforms\bags\data\soft_backpack_WH_co.paa"
		};
	};
	class WH_Rucksack_Soft_Medical: OPTRE_UNSC_Rucksack_Medic
	{
		author="The Warhound Mod Team";
		scope=2;
		scopeCurator=2;
		displayName="[22nd] UNSC Rucksack (MCAM Medical)";
		maximumLoad=500;
		hiddenSelections[]=
		{
			"camo",
			"B_Addons",
			"B_Radio"
		};
		class XtdGearInfo
        {
            model = "22nd_Backpacks";
            Camoflauge = "MCAM";
            Variant = "Medical";
        };
		hiddenSelectionsTextures[]=
		{
			"z\22ndRDF\addons\uniforms\bags\data\Soft_Backpack_WH_Medical_co.paa"
		};
	};
	class WH_Rucksack_Soft_Heavy: OPTRE_UNSC_Rucksack_Heavy
	{
		author="The Warhound Mod Team";
		scope=2;
		scopeCurator=2;
		displayName="[22nd] UNSC Rucksack (MCAM Heavy)";
		maximumLoad=360;
		hiddenSelections[]=
		{
			"camo",
			"B_Medic",
			"B_Radio"
		};
		class XtdGearInfo
        {
            model = "22nd_Backpacks";
            Camoflauge = "MCAM";
            Variant = "Heavy";
        };
		hiddenSelectionsTextures[]=
		{
			"z\22ndRDF\addons\uniforms\bags\data\Soft_Backpack_WH_co.paa"
		};
	};
	class WH_Rucksack_Soft_Snow: OPTRE_UNSC_Rucksack
	{
		author="The Warhound Mod Team";
		scope=2;
		scopeCurator=2;
		displayName="[22nd] UNSC Rucksack (Snow)";
		maximumLoad=250;
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"B_Addons",
			"B_Medic",
			"B_Radio"
		};
		class XtdGearInfo
        {
            model = "22nd_Backpacks";
            Camoflauge = "Snow";
            Variant = "Regular";
        };
		hiddenSelectionsTextures[]=
		{
			"z\22ndRDF\addons\uniforms\bags\data\Soft_Backpack_WH_Snow_co.paa"
		};
	};
	class WH_Rucksack_Soft_Medical_Snow: OPTRE_UNSC_Rucksack_Medic
	{
		author="The Warhound Mod Team";
		scope=2;
		scopeCurator=2;
		displayName="[22nd] UNSC Rucksack (Snow Medical)";
		maximumLoad=500;
		hiddenSelections[]=
		{
			"camo",
			"B_Addons",
			"B_Radio"
		};
		class XtdGearInfo
        {
            model = "22nd_Backpacks";
            Camoflauge = "Snow";
            Variant = "Medical";
        };
		hiddenSelectionsTextures[]=
		{
			"z\22ndRDF\addons\uniforms\bags\data\Soft_Backpack_WH_Medical_Snow_co.paa"
		};
	};
	class WH_Rucksack_Soft_Heavy_Snow: OPTRE_UNSC_Rucksack_Heavy
	{
		author="The Warhound Mod Team";
		scope=2;
		scopeCurator=2;
		displayName="[22nd] UNSC Rucksack (Snow Heavy)";
		maximumLoad=360;
		hiddenSelections[]=
		{
			"camo",
			"B_Medic",
			"B_Radio"
		};
		class XtdGearInfo
        {
            model = "22nd_Backpacks";
            Camoflauge = "Snow";
            Variant = "Heavy";
        };
		hiddenSelectionsTextures[]=
		{
			"z\22ndRDF\addons\uniforms\bags\data\Soft_Backpack_WH_Snow_co.paa"
		};
	};
	class WH_Rucksack_Soft_WDL: OPTRE_UNSC_Rucksack
	{
		author="The Warhound Mod Team";
		scope=2;
		scopeCurator=2;
		displayName="[22nd] UNSC Rucksack (Woodland)";
		maximumLoad=250;
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"B_Addons",
			"B_Medic",
			"B_Radio"
		};
		class XtdGearInfo
        {
            model = "22nd_Backpacks";
            Camoflauge = "Woodland";
            Variant = "Regular";
        };
		hiddenSelectionsTextures[]=
		{
			"z\22ndRDF\addons\uniforms\bags\data\Soft_Backpack_WH_WDL_co.paa"
		};
	};
	class WH_Rucksack_Soft_Medical_WDL: OPTRE_UNSC_Rucksack_Medic
	{
		author="The Warhound Mod Team";
		scope=2;
		scopeCurator=2;
		displayName="[22nd] UNSC Rucksack (Woodland Medical)";
		maximumLoad=500;
		hiddenSelections[]=
		{
			"camo",
			"B_Addons",
			"B_Radio"
		};
		class XtdGearInfo
        {
            model = "22nd_Backpacks";
            Camoflauge = "Woodland";
            Variant = "Medical";
        };
		hiddenSelectionsTextures[]=
		{
			"z\22ndRDF\addons\uniforms\bags\data\Soft_Backpack_WH_Medical_WDL_co.paa"
		};
	};
	class WH_Rucksack_Soft_Heavy_WDL: OPTRE_UNSC_Rucksack_Heavy
	{
		author="The Warhound Mod Team";
		scope=2;
		scopeCurator=2;
		displayName="[22nd] UNSC Rucksack (Woodland Heavy)";
		maximumLoad=360;
		hiddenSelections[]=
		{
			"camo",
			"B_Medic",
			"B_Radio"
		};
		class XtdGearInfo
        {
            model = "22nd_Backpacks";
            Camoflauge = "Woodland";
            Variant = "Heavy";
        };
		hiddenSelectionsTextures[]=
		{
			"z\22ndRDF\addons\uniforms\bags\data\Soft_Backpack_WH_WDL_co.paa"
		};
	};
};
