class CfgPatches
{
    class 22nd_misc_Flashbang
    {
        name = "22nd RDF Flashbang Rounds";
        author = "22nd RDF";
        requiredVersion = 0.5;

        requiredAddons[] =
        {
            "cba_main",
            "ace_main",
            "ace_grenades"
        };

        units[] = {};
        weapons[] = {};
    };
};

class CfgFunctions
{
    class RDF22
    {
        class Flashbang
        {
            file = "\z\22ndRDF\addons\misc\Flashbang\functions";
            // future flashbang-related functions go here as the addon grows
        };
    };
};

#include "\.include\x\cba\addons\main\script_macros_common.hpp"

class Extended_PreInit_EventHandlers {
    class RDF_Flashbang {
        init = "call compile preprocessFileLineNumbers '\z\22ndRDF\addons\misc\Flashbang\XEH_preInit.sqf'";
    };
};

class Extended_PostInit_EventHandlers {
    class RDF_Flashbang {
        init = "call compile preprocessFileLineNumbers '\z\22ndRDF\addons\misc\Flashbang\XEH_postInit.sqf'";
    };
};
