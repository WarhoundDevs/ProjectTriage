class OPTRE_Pelican_armed;
class OPTRE_Pelican_armed_single_seater;
class OPTRE_Pelican_armed_SOCOM;
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
	editorCategory="22nd_Warhound_Company";
	editorSubcategory="22nd_Warhound_Company_Air_Vehicles";
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
		"W_Units\data\Vehicles\Pelican\WH_Pelican_ARMY_BLACK_co.paa"
	};
	class TextureSources
	{
		class Manta
		{
			displayName="Manta";
			author="Gatt";
			textures[]=
			{
				"W_Units\data\Vehicles\Pelican\WH_Pelican_ORCA_1_co.paa"
			};
		};
		class Arid
		{
			displayName="Arid";
			author="Gatt";
			textures[]=
			{
				"W_Units\data\Vehicles\Pelican\WH_Pelican_ARMY_ARID_co.paa",
				""
			};
		};
		class Night
		{
			displayName="Night";
			author="Gatt";
			textures[]=
			{
				"W_Units\data\Vehicles\Pelican\WH_Pelican_ARMY_NIGHT_co.paa",
				""
			};
		};
		class Black
		{
			displayName="Black";
			author="Gatt";
			textures[]=
			{
				"W_Units\data\Vehicles\Pelican\WH_Pelican_ARMY_BLACK_co.paa",
				""
			};
		};
		class Woodland
		{
			displayName="Woodland";
			author="Gatt";
			textures[]=
			{
				"W_Units\data\Vehicles\Pelican\WH_Pelican_ARMY_WOOD_co.paa",
				""
			};
		};
		class Arctic
		{
			displayName="Arctic";
			author="Gatt";
			textures[]=
			{
				"W_Units\data\Vehicles\Pelican\WH_Pelican_ARMY_ARCTIC_co.paa",
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
class Warhound_Pelican_ARMY_Single_Seater: OPTRE_Pelican_armed_single_seater
{
	features="Randomization: No";
	scope=2;
	scopeCurator=2;
	forceInGarage=1;
	side=1;
	author="The Canadian Nematoad";
	displayName="[22nd] D77H-TCI/AV Pelican Single Seater";
	faction="22nd_Faction";
	crew="OPTRE_UNSC_Marine_Pilot";
	editorCategory="22nd_Warhound_Company";
	editorSubcategory="22nd_Warhound_Company_Air_Vehicles";
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
		"W_Units\data\Vehicles\Pelican\WH_Pelican_ARMY_BLACK_co.paa"
	};
	class TextureSources
	{
		class Arid_Single_Seater
		{
			displayName="Arid_Single_Seater";
			author="Gatt";
			textures[]=
			{
				"W_Units\data\Vehicles\Pelican\WH_Pelican_ARMY_ARID_co.paa",
				""
			};
		};
		class Night_Single_Seater
		{
			displayName="Night_Single_Seater";
			author="Gatt";
			textures[]=
			{
				"W_Units\data\Vehicles\Pelican\WH_Pelican_ARMY_NIGHT_co.paa",
				""
			};
		};
		class Black_Single_Seater
		{
			displayName="Black_Single_Seater";
			author="Gatt";
			textures[]=
			{
				"W_Units\data\Vehicles\Pelican\WH_Pelican_ARMY_BLACK_co.paa",
				""
			};
		};
		class Woodland_Single_Seater
		{
			displayName="Woodland_Single_Seater";
			author="Gatt";
			textures[]=
			{
				"W_Units\data\Vehicles\Pelican\WH_Pelican_ARMY_WOOD_co.paa",
				""
			};
		};
		class Arctic_Single_Seater
		{
			displayName="Arctic_Single_Seater";
			author="Gatt";
			textures[]=
			{
				"W_Units\data\Vehicles\Pelican\WH_Pelican_ARMY_ARCTIC_co.paa",
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
		"Arid_Single_Seater",
		1,
		"Woodland_Single_Seater",
		0,
		"Arctic_Single_Seater",
		0,
		"Night_Single_Seater",
		0,
		"Black_Single_Seater",
		0,
	};
};
class Warhound_Pelican_ARMY_SOCOM: OPTRE_Pelican_armed_SOCOM
{
	features="Randomization: No";
	scope=2;
	scopeCurator=2;
	forceInGarage=1;
	side=1;
	author="The Canadian Nematoad";
	displayName="[22nd] D77H-TCI/AV Pelican SOCOM (WIP)";
	faction="22nd_Faction";
	crew="OPTRE_UNSC_Marine_Pilot";
	editorCategory="22nd_Warhound_Company";
	editorSubcategory="22nd_Warhound_Company_Air_Vehicles";
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
		"W_Units\data\Vehicles\Pelican\WH_Pelican_ARMY_BLACK_co.paa"
	};
	class TextureSources
	{
		class Arid_SOCOM
		{
			displayName="Arid_SOCOM";
			author="Gatt";
			textures[]=
			{
				"W_Units\data\Vehicles\Pelican\WH_Pelican_ARMY_ARID_co.paa",
				""
			};
		};
		class Night_SOCOM
		{
			displayName="Night_SOCOM";
			author="Gatt";
			textures[]=
			{
				"W_Units\data\Vehicles\Pelican\WH_Pelican_ARMY_NIGHT_co.paa",
				""
			};
		};
		class Black_SOCOM
		{
			displayName="Black_SOCOM";
			author="Gatt";
			textures[]=
			{
				"W_Units\data\Vehicles\Pelican\WH_Pelican_ARMY_BLACK_co.paa",
				""
			};
		};
		class Woodland_SOCOM
		{
			displayName="Woodland_SOCOM";
			author="Gatt";
			textures[]=
			{
				"W_Units\data\Vehicles\Pelican\WH_Pelican_ARMY_WOOD_co.paa",
				""
			};
		};
		class Arctic_SOCOM
		{
			displayName="Arctic_SOCOM";
			author="Gatt";
			textures[]=
			{
				"W_Units\data\Vehicles\Pelican\WH_Pelican_ARMY_ARCTIC_co.paa",
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
		"Arid_SOCOM",
		1,
		"Woodland_SOCOM",
		0,
		"Arctic_SOCOM",
		0,
		"Night_SOCOM",
		0,
		"Black_SOCOM",
		0,
	};
};

#include "Orca_1\config.hpp"
#include "Orca_2\config.hpp"
#include "Orca_3\config.hpp"
#include "Orca_4\config.hpp"
