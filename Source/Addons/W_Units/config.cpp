class CfgPatches
{
	class 22ndRDF_Warhound_Company_Units // General Units Class
	{
		author="Warhound Modding Team";
		#include "zeus.hpp"
	};
};

class CfgEditorCategories
{
	class 22ndRDF_Warhound_Company // Editor Category
	{
		displayName="Warhound Company";
	};
};

class CfgEditorSubcategories
{
	class 22ndRDF_Warhound_Company_Air_Vehicles // Airframes
	{
		displayName="Air Vehicles";
	};
	class 22ndRDF_Warhound_Company_Cars // Warthogs, Bulldogs etc.
	{
		displayName="Cars";
	};
	class 22ndRDF_Warhound_Company_Tanks // Tonks
	{
		displayName="Tanks";
	};
	class 22ndRDF_Warhound_Company_APCs // Oryx APCs etc.
	{
		displayName="APCs";
	};
	/*
	* Below will need changing with new armour variants.
	*/
	// class 22ndRDF_Warhound_Company_Infantry_Woodland 
	// {
	//	displayName="Troopers Woodland";
	// };
	// class 22ndRDF_Warhound_Company_Infantry_Reach
	// {
	// 	displayName="Troopers Reach";
	// };
	// class 22ndRDF_Warhound_Company_Infantry_Snow
	// {
	//	displayName="Troopers Snow";
	// };
	// class 22ndRDF_Warhound_Company_Infantry_Arid
	// {
	//	displayName="Troopers Snow";
	// };
	/*
	* End Changes
	*/
	class 22ndRDF_Warhound_Company_IFVs // Oryx IFVs etc.
	{
		displayName="IFVs";
	};
};
class CfgFactionClasses
{
	class 22nd_Faction // 22nd Faction Set-up
	{
		displayName="22nd Rapid Deployment Force";
		author="The Canadian Nematoad";
		priority=1;
		side=1;
		icon="\Warhound_Units\data\22nd_rdf.paa";
		flag="\Warhound_Units\data\22nd_rdf.paa";
	};
};

class CfgFunctions // Loading of appropriate scripts.
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

class CfgVehicles // Include Statements for other configs
{
	#include "data\Infantry\config.hpp"
	#include "data\Vehicles\config.hpp"
};
