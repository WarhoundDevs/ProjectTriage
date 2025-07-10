class CfgPatches
{
	class 22ndRDF_Warhound_Company_Units
	{
		author="Warhound Modding Team";
		#include "zeus.hpp"
	};
};
class CfgEditorCategories
{
	class 22ndRDF_Warhound_Company
	{
		displayName="Warhound Company";
	};
};
class CfgEditorSubcategories
{
	class 22ndRDF_Warhound_Company_Air_Vehicles
	{
		displayName="Air Vehicles";
	};
	class 22ndRDF_Warhound_Company_Cars
	{
		displayName="Cars";
	};
	class 22ndRDF_Warhound_Company_Tanks
	{
		displayName="Tanks";
	};
	class 22ndRDF_Warhound_Company_APCs
	{
		displayName="APCs";
	};
	class 22ndRDF_Warhound_Company_Infantry_Woodland
	{
		displayName="Troopers Woodland";
	};
	class 22ndRDF_Warhound_Company_Infantry_Reach
	{
		displayName="Troopers Reach";
	};
	class 22ndRDF_Warhound_Company_Infantry_Snow
	{
		displayName="Troopers Snow";
	};
	class 22ndRDF_Warhound_Company_Infantry_Arid
	{
		displayName="Troopers Snow";
	};
	class 22ndRDF_Warhound_Company_IFVs
	{
		displayName="IFVs";
	};
};
class CfgFactionClasses
{
	class 22nd_Faction
	{
		displayName="22nd Rapid Deployment Force";
		author="The Canadian Nematoad";
		priority=1;
		side=1;
		icon="\Warhound_Units\data\22nd_rdf.paa";
		flag="\Warhound_Units\data\22nd_rdf.paa";
	};
};
class CfgFunctions
{
	class V_FZ
	{
		class PelicanMagLiftSystem
		{
			file="Warhound_Units\data\Functions";
			class PelicanLoadValidate
			{
			};
			class PelicanUnLoadValidate
			{
			};
		};
	};
};
class CfgVehicles
{
	#include "data\Infantry\config.hpp"
	#include "data\Vehicles\config.hpp"
};
