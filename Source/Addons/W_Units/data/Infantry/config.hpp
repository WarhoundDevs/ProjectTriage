class B_Soldier_base_F;
class 22ndRdf_Trooper_Reach_Base: B_Soldier_base_F
{
	displayName="[22nd] Trooper Reach Base";
	author="The Canadian Nematoad";
	scope=0;
	scopeCurator=0;
	side=1;
	editorCategory="22ndRDF_Warhound_Company";
	backpack="";
	editorSubcategory="22ndRDF_Warhound_Company_Infantry_Reach";
	uniformClass="22ndRDF_Uniform_Base_MAInfantry_base_MS_Reach";
	hiddenSelectionsTextures[]=
	{
		"\a3\characters_f\blufor\data\clothing1_co.paa"
	};
	weapons[]=
	{
		"Throw",
		"Put"
	};
	respawnWeapons[]=
	{
		"Throw",
		"Put"
	};
	magazines[]=
	{
		"OPTRE_M2_Smoke"
	};
	respawnMagazines[]=
	{
		"OPTRE_M2_Smoke"
	};
	linkedItems[]=
	{
		"22ndRDF_Helmet_standard_Base_MAInfantry_Reach",
		"Marine_Pouches_Var0",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"ItemRadio"
	};
	respawnLinkedItems[]=
	{
		"22ndRDF_Helmet_standard_Base_MAInfantry_Reach",
		"Marine_Pouches_Var0",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"ItemRadio"
	};
};

class 22nd_UNSC_Test_Trooper: 22ndRdf_Trooper_Reach_Base
{
	displayName="Old";
};

#include "Reach\config.hpp"
