class Warhound_Dingo_Troop: SMT_DingoTroop
{
	scope=2;
	scopeCurator=2;
	forceInGarage=1;
	side=1;
	author= "The Warhound Mod Team";
	displayName="[22nd] M18-T IMV Troop";
	faction="22nd_Faction";
	editorCategory="22nd_Warhound_Company";
	editorSubcategory="22nd_Warhound_Company_Cars";
	editorPreview="\x\12thMEU\addons\Dingo\Data\preview.paa";
	crew = "OPTRE_UNSC_Marine_Pilot";
	hiddenSelectionsTextures[] =
	{
		"x\12thMEU\addons\dingo\data\textures\standard\Chassis_co.paa",
		"x\12thMEU\addons\dingo\data\textures\standard\Modules_co.paa",
		"x\12thMEU\addons\dingo\data\textures\standard\turret_co.paa",
		"x\12thMEU\addons\dingo\data\textures\standard\autoturret_co.paa",
		"x\12thMEU\addons\dingo\data\textures\standard\cloth_co.paa",
		"x\12thMEU\addons\dingo\data\logo.paa"
	};
	textureList[] =
	{
		"WH_Dingo_Urban",
		1,
		"WH_Dingo_Winter",
		0,
		"WH_Dingo_Woodland",
		0,
		"WH_Dingo_Arid",
		0
	};
	class TextureSources
	{
		class WH_Dingo_Urban
		{
			displayName="Default";
			author="The Warhound Mod Team";
			hiddenSelections[]=
			{
				"camo1",
				"camo7",
				"camo11",
				"camo12",
				"camo13",
				"unit"
			};
			textures[]=
			{
				"x\12thMEU\addons\dingo\data\textures\standard\Chassis_co.paa",
				"x\12thMEU\addons\dingo\data\textures\standard\Modules_co.paa",
				"x\12thMEU\addons\dingo\data\textures\standard\turret_co.paa",
				"x\12thMEU\addons\dingo\data\textures\standard\autoturret_co.paa",
				"x\12thMEU\addons\dingo\data\textures\standard\cloth_co.paa"
			};
		};
		class WH_Dingo_Winter
		{
			displayName="Winter";
			author="SamanthaNix";
			textures[]=
			{
				"x\12thMEU\addons\dingo\data\textures\winter\Chassis_co.paa",
				"x\12thMEU\addons\dingo\data\textures\winter\Modules_co.paa",
				"x\12thMEU\addons\dingo\data\textures\winter\turret_co.paa",
				"x\12thMEU\addons\dingo\data\textures\winter\autoturret_co.paa",
				"x\12thMEU\addons\dingo\data\textures\winter\cloth_co.paa"
			};
		};
		class WH_Dingo_Woodland
		{
			displayName="Forest";
			author="The Warhound Mod Team";
			textures[]=
			{
				"x\12thMEU\addons\dingo\data\textures\forest\Chassis_co.paa",
				"x\12thMEU\addons\dingo\data\textures\forest\Modules_co.paa",
				"x\12thMEU\addons\dingo\data\textures\forest\turret_co.paa",
				"x\12thMEU\addons\dingo\data\textures\forest\autoturret_co.paa",
				"x\12thMEU\addons\dingo\data\textures\forest\cloth_co.paa"
			};
		};
		class WH_Dingo_Arid
		{
			displayName="Desert";
			author="The Warhound Mod Team";
			textures[]=
			{
				"x\12thMEU\addons\dingo\data\textures\desert\Chassis_co.paa",
				"x\12thMEU\addons\dingo\data\textures\desert\Modules_co.paa",
				"x\12thMEU\addons\dingo\data\textures\desert\turret_co.paa",
				"x\12thMEU\addons\dingo\data\textures\desert\autoturret_co.paa",
				"x\12thMEU\addons\dingo\data\textures\desert\cloth_co.paa"
			};
		};
	};
};
class Warhound_DingoRCWS: SMT_DingoRCWS_minigun_troop
{
	scope=2;
	scopeCurator=2;
	forceInGarage=1;
	side=1;
	author= "The Warhound Mod Team";
	displayName="[22nd] M18-T2 IMV RCWS Chaingun";
	faction="22nd_Faction";
	editorCategory="22nd_Warhound_Company";
	editorSubcategory="22nd_Warhound_Company_Cars";
	editorPreview="\x\12thMEU\addons\Dingo\Data\preview.paa";
	crew = "OPTRE_UNSC_Marine_Pilot";
	hiddenSelectionsTextures[] =
	{
		"x\12thMEU\addons\dingo\data\textures\standard\Chassis_co.paa",
		"x\12thMEU\addons\dingo\data\textures\standard\Modules_co.paa",
		"x\12thMEU\addons\dingo\data\textures\standard\turret_co.paa",
		"x\12thMEU\addons\dingo\data\textures\standard\autoturret_co.paa",
		"x\12thMEU\addons\dingo\data\textures\standard\cloth_co.paa",
		"x\12thMEU\addons\dingo\data\logo.paa"
	};
	textureList[] =
	{
		"WH_Dingo_Urban",
		1,
		"WH_Dingo_Winter",
		0,
		"WH_Dingo_Woodland",
		0,
		"WH_Dingo_Arid",
		0
	};
	class TextureSources
	{
		class WH_Dingo_Urban
		{
			displayName="Default";
			author="The Warhound Mod Team";
			hiddenSelections[]=
			{
				"camo1",
				"camo7",
				"camo11",
				"camo12",
				"camo13",
				"unit"
			};
			textures[]=
			{
				"x\12thMEU\addons\dingo\data\textures\standard\Chassis_co.paa",
				"x\12thMEU\addons\dingo\data\textures\standard\Modules_co.paa",
				"x\12thMEU\addons\dingo\data\textures\standard\turret_co.paa",
				"x\12thMEU\addons\dingo\data\textures\standard\autoturret_co.paa",
				"x\12thMEU\addons\dingo\data\textures\standard\cloth_co.paa"
			};
		};
		class WH_Dingo_Winter
		{
			displayName="Winter";
			author="SamanthaNix";
			textures[]=
			{
				"x\12thMEU\addons\dingo\data\textures\winter\Chassis_co.paa",
				"x\12thMEU\addons\dingo\data\textures\winter\Modules_co.paa",
				"x\12thMEU\addons\dingo\data\textures\winter\turret_co.paa",
				"x\12thMEU\addons\dingo\data\textures\winter\autoturret_co.paa",
				"x\12thMEU\addons\dingo\data\textures\winter\cloth_co.paa"
			};
		};
		class WH_Dingo_Woodland
		{
			displayName="Forest";
			author="The Warhound Mod Team";
			textures[]=
			{
				"x\12thMEU\addons\dingo\data\textures\forest\Chassis_co.paa",
				"x\12thMEU\addons\dingo\data\textures\forest\Modules_co.paa",
				"x\12thMEU\addons\dingo\data\textures\forest\turret_co.paa",
				"x\12thMEU\addons\dingo\data\textures\forest\autoturret_co.paa",
				"x\12thMEU\addons\dingo\data\textures\forest\cloth_co.paa"
			};
		};
		class WH_Dingo_Arid
		{
			displayName="Desert";
			author="The Warhound Mod Team";
			textures[]=
			{
				"x\12thMEU\addons\dingo\data\textures\desert\Chassis_co.paa",
				"x\12thMEU\addons\dingo\data\textures\desert\Modules_co.paa",
				"x\12thMEU\addons\dingo\data\textures\desert\turret_co.paa",
				"x\12thMEU\addons\dingo\data\textures\desert\autoturret_co.paa",
				"x\12thMEU\addons\dingo\data\textures\desert\cloth_co.paa"
			};
		};
	};
};
class Warhound_Dingo_Autocannon: SMT_DingoRCWS_autogun_troop
{
	scope=2;
	scopeCurator=2;
	forceInGarage=1;
	side=1;
	author= "The Warhound Mod Team";
	displayName="[22nd] M18-T2 IMV RCWS Autocannon";
	faction="22nd_Faction";
	editorCategory="22nd_Warhound_Company";
	editorSubcategory="22nd_Warhound_Company_Cars";
	editorPreview="\x\12thMEU\addons\Dingo\Data\preview.paa";
	crew = "OPTRE_UNSC_Marine_Pilot";
	hiddenSelectionsTextures[] =
	{
		"x\12thMEU\addons\dingo\data\textures\standard\Chassis_co.paa",
		"x\12thMEU\addons\dingo\data\textures\standard\Modules_co.paa",
		"x\12thMEU\addons\dingo\data\textures\standard\turret_co.paa",
		"x\12thMEU\addons\dingo\data\textures\standard\autoturret_co.paa",
		"x\12thMEU\addons\dingo\data\textures\standard\cloth_co.paa",
		"x\12thMEU\addons\dingo\data\logo.paa"
	};
	textureList[] =
	{
		"WH_Dingo_Urban",
		1,
		"WH_Dingo_Winter",
		0,
		"WH_Dingo_Woodland",
		0,
		"WH_Dingo_Arid",
		0
	};
	class TextureSources
	{
		class WH_Dingo_Urban
		{
			displayName="Default";
			author="The Warhound Mod Team";
			hiddenSelections[]=
			{
				"camo1",
				"camo7",
				"camo11",
				"camo12",
				"camo13",
				"unit"
			};
			textures[]=
			{
				"x\12thMEU\addons\dingo\data\textures\standard\Chassis_co.paa",
				"x\12thMEU\addons\dingo\data\textures\standard\Modules_co.paa",
				"x\12thMEU\addons\dingo\data\textures\standard\turret_co.paa",
				"x\12thMEU\addons\dingo\data\textures\standard\autoturret_co.paa",
				"x\12thMEU\addons\dingo\data\textures\standard\cloth_co.paa"
			};
		};
		class WH_Dingo_Winter
		{
			displayName="Winter";
			author="SamanthaNix";
			textures[]=
			{
				"x\12thMEU\addons\dingo\data\textures\winter\Chassis_co.paa",
				"x\12thMEU\addons\dingo\data\textures\winter\Modules_co.paa",
				"x\12thMEU\addons\dingo\data\textures\winter\turret_co.paa",
				"x\12thMEU\addons\dingo\data\textures\winter\autoturret_co.paa",
				"x\12thMEU\addons\dingo\data\textures\winter\cloth_co.paa"
			};
		};
		class WH_Dingo_Woodland
		{
			displayName="Forest";
			author="The Warhound Mod Team";
			textures[]=
			{
				"x\12thMEU\addons\dingo\data\textures\forest\Chassis_co.paa",
				"x\12thMEU\addons\dingo\data\textures\forest\Modules_co.paa",
				"x\12thMEU\addons\dingo\data\textures\forest\turret_co.paa",
				"x\12thMEU\addons\dingo\data\textures\forest\autoturret_co.paa",
				"x\12thMEU\addons\dingo\data\textures\forest\cloth_co.paa"
			};
		};
		class WH_Dingo_Arid
		{
			displayName="Desert";
			author="The Warhound Mod Team";
			textures[]=
			{
				"x\12thMEU\addons\dingo\data\textures\desert\Chassis_co.paa",
				"x\12thMEU\addons\dingo\data\textures\desert\Modules_co.paa",
				"x\12thMEU\addons\dingo\data\textures\desert\turret_co.paa",
				"x\12thMEU\addons\dingo\data\textures\desert\autoturret_co.paa",
				"x\12thMEU\addons\dingo\data\textures\desert\cloth_co.paa"
			};
		};
	};
};
class Warhound_Dingo_Med: SMT_DingoMed
{
	scope=2;
	scopeCurator=2;
	forceInGarage=1;
	side=1;
	author= "The Warhound Mod Team";
	displayName="[22nd] M18-T2 IMV Medical";
	faction="22nd_Faction";
	editorCategory="22nd_Warhound_Company";
	editorSubcategory="22nd_Warhound_Company_Cars";
	editorPreview="\x\12thMEU\addons\Dingo\Data\preview.paa";
	crew = "OPTRE_UNSC_Marine_Pilot";
	hiddenSelectionsTextures[] =
	{
		"x\12thMEU\addons\dingo\data\textures\standard\Chassis_co.paa",
		"x\12thMEU\addons\dingo\data\textures\standard\Modules_co.paa",
		"x\12thMEU\addons\dingo\data\textures\standard\turret_co.paa",
		"x\12thMEU\addons\dingo\data\textures\standard\autoturret_co.paa",
		"x\12thMEU\addons\dingo\data\textures\standard\cloth_co.paa",
		"x\12thMEU\addons\dingo\data\logo.paa"
	};
	textureList[] =
	{
		"WH_Dingo_Urban",
		1,
		"WH_Dingo_Winter",
		0,
		"WH_Dingo_Woodland",
		0,
		"WH_Dingo_Arid",
		0
	};
	class TextureSources
	{
		class WH_Dingo_Urban
		{
			displayName="Default";
			author="The Warhound Mod Team";
			hiddenSelections[]=
			{
				"camo1",
				"camo7",
				"camo11",
				"camo12",
				"camo13",
				"unit"
			};
			textures[]=
			{
				"x\12thMEU\addons\dingo\data\textures\standard\Chassis_co.paa",
				"x\12thMEU\addons\dingo\data\textures\standard\Modules_co.paa",
				"x\12thMEU\addons\dingo\data\textures\standard\turret_co.paa",
				"x\12thMEU\addons\dingo\data\textures\standard\autoturret_co.paa",
				"x\12thMEU\addons\dingo\data\textures\standard\cloth_co.paa"
			};
		};
		class WH_Dingo_Winter
		{
			displayName="Winter";
			author="SamanthaNix";
			textures[]=
			{
				"x\12thMEU\addons\dingo\data\textures\winter\Chassis_co.paa",
				"x\12thMEU\addons\dingo\data\textures\winter\Modules_co.paa",
				"x\12thMEU\addons\dingo\data\textures\winter\turret_co.paa",
				"x\12thMEU\addons\dingo\data\textures\winter\autoturret_co.paa",
				"x\12thMEU\addons\dingo\data\textures\winter\cloth_co.paa"
			};
		};
		class WH_Dingo_Woodland
		{
			displayName="Forest";
			author="The Warhound Mod Team";
			textures[]=
			{
				"x\12thMEU\addons\dingo\data\textures\forest\Chassis_co.paa",
				"x\12thMEU\addons\dingo\data\textures\forest\Modules_co.paa",
				"x\12thMEU\addons\dingo\data\textures\forest\turret_co.paa",
				"x\12thMEU\addons\dingo\data\textures\forest\autoturret_co.paa",
				"x\12thMEU\addons\dingo\data\textures\forest\cloth_co.paa"
			};
		};
		class WH_Dingo_Arid
		{
			displayName="Desert";
			author="The Warhound Mod Team";
			textures[]=
			{
				"x\12thMEU\addons\dingo\data\textures\desert\Chassis_co.paa",
				"x\12thMEU\addons\dingo\data\textures\desert\Modules_co.paa",
				"x\12thMEU\addons\dingo\data\textures\desert\turret_co.paa",
				"x\12thMEU\addons\dingo\data\textures\desert\autoturret_co.paa",
				"x\12thMEU\addons\dingo\data\textures\desert\cloth_co.paa"
			};
		};
	};
};
