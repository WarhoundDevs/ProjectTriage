
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
	class optic_Aco;
	class InventoryOpticsItem_Base_F;


	class 22nd_MA37_Smartlink_Scope: optic_Aco
	{
		dlc="";
		author="22nd Mod Team";
		displayName="1-4x Smart Link Scope";
		descriptionShort="1-4x Smart Linked Scope";
		model="OPTRE_Weapons\AR\MA37_2x_Scope.p3d";
		inertia=0.1;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=4;
			modelOptics="\A3\Weapons_F\empty";
			optics=1;
			class OpticsModes
			{
				class 22nd_MA37_Irons 
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
				class 22nd_MA37_Sight
				{
					opticsID=1;
					useModelOptics=1;
					modelOptics[] = {"\OPTRE_Weapons\BR\BR_Optic_2x.p3d","\OPTRE_Weapons\BR\BR_Optic_4x.p3d"};
					opticsPPEffects[]=
					{
						"OpticsCHAbera2",
						"OpticsBlur2"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					opticsZoomMin="2 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					opticsZoomMax="4 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					opticsZoomInit="2 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					discretefov[]=
					{
						"2 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')",
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

