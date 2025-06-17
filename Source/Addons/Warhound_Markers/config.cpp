class CfgPatches
{
    class 22ndRDF_Warhound_Company_Markers
    {
		author="Warhound Modding Team";
		units[]={};
    };
};
class CfgMarkerClasses
{
    class 22ndRDF_Map_Markers
	{
		displayName="Warhound Markers";
    };
};
class CfgMarkers
{
    class 22ndRDF_Marker
    {
		name="[22nd] 22nd RDF";
        icon="Warhound_Markers\data\22nd_RDF.paa";
        color[]={0,0,0,1};
        size=40;
        shadow = 0;
        scope = 2;
		scopeCurator = 2;
        markerClass = "22ndRDF_Map_Markers";
    };
	#include "data\Pike\config.hpp"
	#include "data\Support\config.hpp"
};

#include "data\Spraypaint\config.hpp"
