
class CfgPatches
{
    class 22nd_weapons_attachments
    {
        addonRootClass = "22nd_weapons";

        requiredVersion = 0.1;

        requiredAddons[] =
        {
			"cba_main",
            "A3_Data_F",
            "A3_Weapons_F",
			"OPTRE_Weapons_AR",
            "22nd_weapons"
        };

        units[] = {};
        weapons[] =
		{
			"22nd_MA37_Smartlink_Scope"
		};
    };
};



class CfgWeapons
{
	class OPTRE_MA37_Smartlink_Scope
{

	class ItemInfo
	{
		class MA37_Irons;
		class MA37_Sight;
	};

};
	
	class 22nd_MA37_Smartlink_Scope: OPTRE_MA37_Smartlink_Scope
	{
		dlc="";
		author="22nd Mod Team";
		displayName="1-4x Smart Link Scope";
		descriptionShort="1-4x Smart Linked Scope";
		model="OPTRE_Weapons\AR\MA37_2x_Scope.p3d";
		inertia=0.1;
		class ItemInfo: ItemInfo
		{
			mass=4;
			modelOptics="\A3\Weapons_F\empty";
			optics=1;
			class OpticsModes
			{
				class 22nd_MA37_Irons: MA37_Irons 
				{
					opticsID=2;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						""
					};
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					opticsZoomMin=0.375;
					opticsZoomMax=1;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					visionMode[]={};
					distanceZoomMin=100;
					distanceZoomMax=600;
					discreteDistance[]={100,200,300,400,500,600};
					discreteDistanceInitIndex=0;
				};
				class 22nd_MA37_Sight: MA37_Sight
				{
					opticsID=1;
					useModelOptics=1;
					modelOptics[]=
					{
						"\OPTRE_Weapons\AR\MA37_2x_Scope.p3d"
					};
					opticsPPEffects[]=
					{
						"OpticsCHAbera2",
						"OpticsBlur2"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					opticsZoomMin="1 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					opticsZoomMax="4 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					opticsZoomInit="1 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					discretefov[]=
					{
						"1 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')",
						"4 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')"
					};
					discreteInitIndex=0;
					memoryPointCamera="opticView";
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
					distanceZoomMin=100;
					distanceZoomMax=600;
					discreteDistance[]={100,200,300,400,500,600};
					discreteDistanceInitIndex=0;
				};
			};
		};
	};



};

