#include "BIS_AddonInfo.hpp"
class CfgPatches
{
	class 22nd_maxwell
	{
		units[]=
		{
			"Maxwell"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{

		};
	};
};
class CfgVehicles
{
	class NATO_Box_Base;
	class MonkiBox_based: NATO_Box_Base
	{
		dlc="Maxwell";
		scope=2;
		scopecurator=2;
		vehicleClass="Maxwell";
		displayName="-";
		model="\22nd_misc\maxwell\Maxwell.p3d";
		author="Maxwell";
		icon="iconCrateWpns";
		transportMaxWeapons=1000;
		transportMaxMagazines=5000;
		maximumLoad=50000;
		transportMaxBackpacks=100;
		transportAmmo=1;
		transportRepair=1;
		transportFuel=1;
		supplyRadius=2.5;
		armor=1000;
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
	};
	class Maxwell: MonkiBox_based
	{
		dlc="Monki";
		scope=2;
		displayName="Maxwell";
		hiddenSelections[]=
		{
			"Dingus"
		};
		model="\22nd_misc\maxwell\Maxwell.p3d";
		author="Sex";
		transportMaxWeapons=50;
		transportMaxMagazines=1000;
		maximumLoad=500000;
		transportMaxBackpacks=10;
		transportAmmo=1;
		transportRepair=0;
		transportFuel=0;
		supplyRadius=2.5;
		armor=500;
		class TransportMagazines
		{
			
		};
	};
	
};
