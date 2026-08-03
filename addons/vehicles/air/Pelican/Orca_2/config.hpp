// class OPTRE_Pelican_armed;
class Warhound_Pelican_Orca_2: OPTRE_Pelican_armed
{
	features="Randomization: No";
	scope=2;
	scopeCurator=2;
	side=1;
	forceInGarage=1;
	author="The Canadian Nematoad";
	displayName="[22nd] Pelican Orca 2";
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
		"\z\22ndRDF\addons\vehicles\air\Pelican\Orca_2\WH_Pelican_ORCA_2_BLACK_co.paa", 
		""
	};
	class TextureSources
	{
		class Arid
		{
			displayName="Arid";
			author="Gatt";
			textures[]=
			{
				"\z\22ndRDF\addons\vehicles\air\Pelican\Orca_2\WH_Pelican_ORCA_2_ARID_co.paa",
				""
			};
		};
		class Night
		{
			displayName="Night";
			author="Gatt";
			textures[]=
			{
				"\z\22ndRDF\addons\vehicles\air\Pelican\Orca_2\WH_Pelican_ORCA_2_NIGHT_co.paa",
				""
			};
		};
		class Black
		{
			displayName="Black";
			author="Gatt";
			textures[]=
			{
				"\z\22ndRDF\addons\vehicles\air\Pelican\Orca_2\WH_Pelican_ORCA_2_BLACK_co.paa",
				""
			};
		};
		class Woodland
		{
			displayName="Woodland";
			author="Gatt";
			textures[]=
			{
				"\z\22ndRDF\addons\vehicles\air\Pelican\Orca_2\WH_Pelican_ORCA_2_WOODLAND_co.paa",
				""
			};
		};
		class Arctic
		{
			displayName="Arctic";
			author="Gatt";
			textures[]=
			{
				"\z\22ndRDF\addons\vehicles\air\Pelican\Orca_2\WH_Pelican_ORCA_2_ARCTIC_co.paa",
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
	};
};
