#include "BIS_AddonInfo.hpp"
#define _ARMA_

class CfgPatches
{
	class 22nd_Stetson
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.5;
		requiredAddons[] = {};
	};
};
class CfgVehicleClasses
{
	class 22nd_Stetson_Hat
	{
		displayName = "22nd UNSC Army Headgear";
	};
};
class CfgVehicles
{
	class B_Soldier_base_F;
};
class cfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class HeadgearItem;
	class 22nd_Stetson: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Cavalry Stetson";
		vehicleClass = "22nd_Stetson_Hat";
		author = "22nd Mod Team";
		picture = "addons\22nd_misc\UI\icon_h_stetson_ca.paa";
		model = "addons\22nd_misc\22nd_Stetson.p3d";
		hiddenSelectionsTextures[] = 
		{
			"\22nd_Stetsons\Data\Stetson_co.paa"
		};
		hiddenSelections[] = 
		{
			"Camo"
		};
		class ItemInfo: HeadgearItem
		{
			mass = 5;
			uniformmodel = "\22nd_Stetsons\22nd_Stetson";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.95;
			hiddenSelectionsTextures[] = 
			{
				"\22nd_Stetsons\Data\Stetson_co.paa"
			};
			hiddenSelections[] = 
			{
				"Camo"
			};
		};
	};
};
