class CfgPatches
{
	class 22nd_vehicles_elephant
	{
		author="22nd Mod Team";
		addonRootClass="22nd_vehicles";
		requiredAddons[]=
		{
			"cba_main",
			"A3_Data_F",
			"OPTRE_Vehicles_Elephant",
	
		};
		requiredVersion=0.1;
		units[]=
		{
			"Warhound_Elephant"
		};
	};
};

class CfgVehicles
{
    class OPTRE_M313_Base;
	class Warhound_Elephant: OPTRE_M313_Base
	{
		scope=2;
		scopeCurator=2;
		author="Warhound Mod Team";
		displayName="[22nd] M313 Elephant";
		faction="22nd_Faction";
		editorCategory="22nd_Warhound_Company";
		#include "W_physX.hpp"
		editorSubcategory="22nd_Warhound_Company_Tanks";
		side=1;
		hiddenSelections[] = {"camo_consoles","camo_exterior","camo_flooring","camo_hull","camo_interior","camo_tracks","camo_tracks2",};
			hiddenSelectionsTextures[] = 
			{
				"OPTRE_Vehicles_Tracked\Elephant\Data\camo\tan\consoles_co.paa",
				"OPTRE_Vehicles_Tracked\Elephant\Data\camo\tan\exterior_details_co.paa",
				"OPTRE_Vehicles_Tracked\Elephant\Data\camo\tan\flooring_co.paa",
				"OPTRE_Vehicles_Tracked\Elephant\Data\camo\tan\hull_co.paa",
				"OPTRE_Vehicles_Tracked\Elephant\Data\camo\tan\interior_co.paa",
				"OPTRE_Vehicles_Tracked\Elephant\Data\camo\tan\tracks_co.paa",
				"OPTRE_Vehicles_Tracked\Elephant\Data\camo\tan\tracks2_co.paa",
			};
	};
	texturelist[] = 
	{
		"Arid",
		1,
		"Woodland",
		0,
	};
	class textureSources
	{
		class Arid
		{
			displayName = "Arid";
			author = "Warhound Mod Team";
			textures[] =
			{
				"OPTRE_Vehicles_Tracked\Elephant\Data\camo\tan\consoles_co.paa",
				"OPTRE_Vehicles_Tracked\Elephant\Data\camo\tan\exterior_details_co.paa",
				"OPTRE_Vehicles_Tracked\Elephant\Data\camo\tan\flooring_co.paa",
				"OPTRE_Vehicles_Tracked\Elephant\Data\camo\tan\hull_co.paa",
				"OPTRE_Vehicles_Tracked\Elephant\Data\camo\tan\interior_co.paa",
				"OPTRE_Vehicles_Tracked\Elephant\Data\camo\tan\tracks_co.paa",
				"OPTRE_Vehicles_Tracked\Elephant\Data\camo\tan\tracks2_co.paa",
			};
		};
		class Woodland
		{
			displayName = "Woodland";
			author = "Warhound Mod Team";
			textures[] =
			{
				"OPTRE_Vehicles_Tracked\Elephant\Data\consoles_co.paa",
				"OPTRE_Vehicles_Tracked\Elephant\Data\exterior_details_co.paa",
				"OPTRE_Vehicles_Tracked\Elephant\Data\flooring_co.paa",
				"OPTRE_Vehicles_Tracked\Elephant\Data\hull_co.paa",
				"OPTRE_Vehicles_Tracked\Elephant\Data\interior_co.paa",
				"OPTRE_Vehicles_Tracked\Elephant\Data\tracks_co.paa",
				"OPTRE_Vehicles_Tracked\Elephant\Data\tracks2_co.paa",
			};
		};
	};
};
