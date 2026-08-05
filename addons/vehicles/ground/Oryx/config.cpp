class CfgPatches
{
	class 22nd_vehicles_oryx
	{
		author="22nd Mod Team";
		addonRootClass="22nd_vehicles";
		requiredAddons[]=
		{
			"cba_main",
			"A3_Data_F",
			"OPTRE_Vehicles_M494",
	
		};
		requiredVersion=0.1;
		units[]=
		{
			"Warhound_Oryx",
            "Warhound_Oryx_Pike1A",
            "Warhound_Oryx_Pike11",
            "Warhound_Oryx_Pike12",
            "Warhound_Oryx_Pike13"
		};
	};
};

class CfgVehicles
{
    class OPTRE_M494;
    #include "Standard\config.hpp"
    #include "Pike1A\config.hpp"
    #include "Pike11\config.hpp"
    #include "Pike12\config.hpp"
    #include "Pike13\config.hpp"
};
