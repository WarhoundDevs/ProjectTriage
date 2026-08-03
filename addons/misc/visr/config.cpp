class CfgPatches
{
    class 22nd_misc_VISR
    {
        name = "22nd RDF VISR";
        author = "22nd RDF";
        requiredVersion=0.5;

        requiredAddons[] =
        {
            "cba_main"
        };

        units[] = {};
        weapons[] = {};
    };
};

class CfgFunctions
{
    class RDF
    {
        class VISR
        {
            file = "\z\22ndRDF\addons\misc\VISR\functions";

            class toggleVISR {};
            class enableVISR {};
            class disableVISR {};
            class canUse {};
            class createPP {};
            class destroyPP {};
            class scanEntities {};
            class render {};
        };
    };
};

#include "\.include\x\cba\addons\main\script_macros_common.hpp"

class Extended_PreInit_EventHandlers {
    class RDF_VISR {
        init = "call compile preprocessFileLineNumbers '\z\22ndRDF\addons\misc\VISR\XEH_preInit.sqf'";
    };
};

class Extended_PostInit_EventHandlers {
    class RDF_VISR {
        init = "call compile preprocessFileLineNumbers '\z\22ndRDF\addons\misc\VISR\XEH_postInit.sqf'";
    };
};
