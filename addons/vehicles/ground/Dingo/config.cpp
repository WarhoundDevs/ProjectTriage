class CfgPatches
{
	class 22nd_vehicles_dingo
	{
		author="22nd Mod Team";
		addonRootClass="22nd_vehicles";
		requiredAddons[]=
		{
			"cba_main",
			"A3_Data_F",
			"vehicle_Dingo",
	
		};
		requiredVersion=0.1;
		units[]=
		{
			"Warhound_Dingo_Troop",
			"Warhound_DingoRCWS",
			"Warhound_Dingo_Med",
			"Warhound_Dingo_Autocannon"
		};
	};
};

class CfgVehicles
{
    class SMT_DingoTroop;
	class SMT_DingoRCWS_minigun_troop;
	class SMT_DingoRCWS_autogun_troop;
	class SMT_DingoMed;
	#include "DingoTroop\config.hpp"
	#include "DingoAuto\config.hpp"
	#include "DingoMG\config.hpp"
	#include "DingoMed\config.hpp"
};
