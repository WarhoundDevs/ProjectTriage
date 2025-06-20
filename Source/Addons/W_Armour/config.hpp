/**
* This file is used to call the configurations for all customised armour for the Aux Mod.
* This has been modified from the old config to standardise class names, simplify file paths and remove
* unncesscary config bloat, or configs for unused armour.
* ~ Raven
*/
class CfgPatches
{
	// class 22ndRDF_Warhound_Company_Armour
	class 22nd_Warhound_Company_Armour
	{
		author="Warhound Modding Team";
		units[]={};
	};
	class WarhoundAAE
	{
		author="DeeJay";
		requiredAddons[]=
		{
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
		};
	};
};
class CfgVehicles
{
	#include "data\uniform.hpp"  // Removed uniform_trooper in order to adhere to new standardisation. ~ Raven
};
class CfgWeapons
{
	// New filepaths for "Infantry", "Aviation" and "Custom" added due to change in file structure. ~ Raven
	#include "data\Infantry\config.hpp"
	#include "data\Aviation\config.hpp"
	#include "data\Custom\config.hpp"
};

// Thank you to Hertzel for providing the base for this config. - Evans

class XtdGearModels
{
	class CamoBase;
	class CfgWeapons
	{
		// #include "data\AAE_Config\VX19\GearModels_VX19.hpp"
		// #include "data\AAE_Config\Operator\GearModels_Operator.hpp"
		// #include "data\AAE_Config\Recon\GearModels_Recon.hpp"
		#include "data\AAE_Config\MA_Helmets\GearModels_MAHelmets.hpp"
		#include "data\AAE_Config\MA_Uniforms\GearModels_MAUniforms.hpp"
	};
};
class XtdGearInfos
{
	class CfgWeapons
	{
		// #include "data\AAE_Config\VX19\GearInfo_VX19.hpp"
		// #include "data\AAE_Config\Operator\GearInfo_Operator.hpp"
		// #include "data\AAE_Config\Recon\GearInfo_Recon.hpp"
		#include "data\AAE_Config\MA_Helmets\GearInfo_MAHelmets.hpp"
		#include "data\AAE_Config\MA_Uniforms\GearInfo_MAUniforms.hpp"
	};

};
