class OPTRE_Pelican_armed;
class Warhound_Pelican_ARMY: OPTRE_Pelican_armed
{
	features="Randomization: No";
	scope=2;
	scopeCurator=2;
	forceInGarage=1;
	side=1;
	author="The Canadian Nematoad";
	displayName="[22nd] D77H-TCI/AV Pelican";
	faction="22nd_Faction";
	crew="OPTRE_UNSC_Marine_Pilot";
	editorCategory="22ndRDF_Warhound_Company";
	editorSubcategory="22ndRDF_Warhound_Company_Air_Vehicles";
	hiddenSelections[]=
	{
		"camo1",
		"camo3",
		"clan",
		"clan_text",
		"insignia"
	};
	hiddenSelectionsTextures[]=
	{
		"Warhound_Units\data\Vehicles\Pelican\WH_Pelican_ARMY_BLACK_co.paa"
	};
	class TextureSources
	{
		class Manta
		{
			displayName="Manta";
			author="Gatt";
			textures[]=
			{
				"Warhound_Units\data\Vehicles\Pelican\WH_Pelican_ORCA_1_co.paa"
			};
		};
		class Arid
		{
			displayName="Arid";
			author="Gatt";
			textures[]=
			{
				"Warhound_Units\data\Vehicles\Pelican\WH_Pelican_ARMY_ARID_co.paa",
				""
			};
		};
		class Night
		{
			displayName="Night";
			author="Gatt";
			textures[]=
			{
				"Warhound_Units\data\Vehicles\Pelican\WH_Pelican_ARMY_NIGHT_co.paa",
				""
			};
		};
		class Black
		{
			displayName="Black";
			author="Gatt";
			textures[]=
			{
				"Warhound_Units\data\Vehicles\Pelican\WH_Pelican_ARMY_BLACK_co.paa",
				""
			};
		};
		class Woodland
		{
			displayName="Woodland";
			author="Gatt";
			textures[]=
			{
				"Warhound_Units\data\Vehicles\Pelican\WH_Pelican_ARMY_WOOD_co.paa",
				""
			};
		};
		class Arctic
		{
			displayName="Arctic";
			author="Gatt";
			textures[]=
			{
				"Warhound_Units\data\Vehicles\Pelican\WH_Pelican_ARMY_ARCTIC_co.paa",
				""
			};
		};
		factions[]=
		{
			"BLU_F",
			"BLU_T_F",
			"22nd_Faction"
		};
	};
	textureList[]=
	{
		"Arid",
		1,
		"Woodland",
		0,
		"Arctic",
		0,
		"Night",
		0,
		"Black",
		0,
		"Manta",
		0
	};
};

#include "Orca_1\config.hpp"
#include "Orca_2\config.hpp"
#include "Orca_3\config.hpp"
#include "Orca_4\config.hpp"
