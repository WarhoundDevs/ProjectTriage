class B_Plane_Fighter_01_F;
class OPTRE_bayonet_01;
class OPTRE_bayonetstealth_01;
class Warhound_Bayonet_Orca_Default: OPTRE_bayonet_01
{
	side=1;
	scope=2;
	scopeCurator=2;
	editorCategory="22ndRDF_Warhound_Company";
	editorSubcategory="22ndRDF_Warhound_Company_Air_Vehicles";
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
				"Warhound_Units\data\Vehicles\Bayonet\Bayonet_01_fuselage_Orca_co.paa",
				"Warhound_Units\data\Vehicles\Bayonet\Bayonet_02_fuselage_Orca_co.paa"
			};
		};
	};
	hiddenSelectionsTextures[]=
	{
		"Warhound_Units\data\Vehicles\Bayonet\Bayonet_01_fuselage_Orca_co.paa",
		"Warhound_Units\data\Vehicles\Bayonet\Bayonet_02_fuselage_Orca_co.paa"
	};
};
class Warhound_Bayonet_Orca_Stealth: OPTRE_bayonetstealth_01
{
	side=1;
	scope=2;
	scopeCurator=2;
	editorCategory="22ndRDF_Warhound_Company";
	editorSubcategory="22ndRDF_Warhound_Company_Air_Vehicles";
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
				"Warhound_Units\data\Vehicles\Bayonet\Bayonet_01_fuselage_Orca_co.paa",
				"Warhound_Units\data\Vehicles\Bayonet\Bayonet_02_fuselage_Orca_co.paa"
			};
		};
	};
	hiddenSelectionsTextures[]=
	{
		"Warhound_Units\data\Vehicles\Bayonet\Bayonet_01_fuselage_Orca_co.paa",
		"Warhound_Units\data\Vehicles\Bayonet\Bayonet_02_fuselage_Orca_co.paa"
	};
};
#include "Orca_4\config.hpp"
#include "Orca_3\config.hpp"
