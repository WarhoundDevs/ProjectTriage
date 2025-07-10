/*
class Splits_Pelican_base;
class Components;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateActiveRadar;
class SensorTemplatePassiveRadar;
class SensorTemplateLaser;
class SensorTemplateNV;
class DefaultVehicleSystemsDisplayManagerLeft;
class DefaultVehicleSystemsDisplayManagerRight;
*/
class Splits_UNSC_D77_TC_Pelican
{
	class components;
}
class 22ndRDF_Vehicle_Heavy_Pelican: Splits_UNSC_D77_TC_Pelican
{
	scope=2;
	scopeCurator=2;
	side=1;
	vehicleClass="Air";
	author="SplitJaw & DemonicOnPC";
	faction="22nd_Faction";
	editorCategory="22ndRDF_Warhound_Company";
	editorSubcategory="22ndRDF_Warhound_Company_Air_Vehicles";
	crew="OPTRE_UNSC_Marine_Soldier_Rifleman_AR";
	displayName="[22nd] D77-TC Heavy Pelican";
	/*weapons[]=
	{
		"Laserdesignator_pilotCamera"
	};
		magazines[]=
	{
		"Laserbatteries"
	};
	class pilotCamera // A class that creates a turret-like slewable secondary optics for the pilot. Used to simulate Targeting Pods.
	{
		class OpticsIn
		{
			class Wide
			{
				initAngleX			= 0; minAngleX=0; maxAngleX=0;
				initAngleY			= 0; minAngleY=0; maxAngleY=0;
				initFov				= 0.25; 			// Zoom level of the magnification mode. In this case discrete - min/max/init set to the same value
				minFov				= 0.25;
				maxFov				= 0.25;
				directionStabilized	= 1; 				// Allows stabilization of the turret
				visionMode[]		= {"Normal","Ti"};	// Available spectrum modes - in this case visible and thermal
				thermalMode[]		= {0,1};			// TI modes - in this case WHOT and BHOT
				gunnerOpticsModel	= "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d"; // model used for the reticle
				opticsPPEffects[]	= {};  				// post-process effects used in the optics
			};
			class Medium : Wide
			{
				opticsDisplayName	= "MFOV";
				initFov				= A3_FOV_DEG(6);
				minFov				= A3_FOV_DEG(6);
				maxFov				= A3_FOV_DEG(6);
				gunnerOpticsModel	= "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d";
			};
			class Narrow : Wide
			{
				initFov				= 0.125;
				minFov				= 0.125;
				maxFov				= 0.125;
				gunnerOpticsModel	= "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
			};
			showMiniMapInOptics				= true;
			pilotOpticsShowCursor 			= 1;
			showUAVViewInOptics				= false;
			showSlingLoadManagerInOptics	= false;
		};
	};*/
	hiddenSelectionsTextures[]=
	{
		"\Warhound_Units\data\Vehicles\Heavy_Pelican\Urban_body_co.paa",
		"\Warhound_Units\data\Vehicles\Heavy_Pelican\Urban_wings_co.paa",
		"\Warhound_Units\data\Vehicles\Heavy_Pelican\Urban_weaponry_co.paa"
	};
	textureList[]=
	{
		"Warhound_Urban",
		1,
		"Warhound_Woodland",
		1,
	};
	class textureSources
	{
		class Warhound_Urban
		{
			displayName="Warhound_Urban";
			author="SplitJaw";
			textures[]=
			{
				"\Warhound_Units\data\Vehicles\Heavy_Pelican\Urban_body_co.paa",
				"\Warhound_Units\data\Vehicles\Heavy_Pelican\Urban_wings_co.paa",
				"\Warhound_Units\data\Vehicles\Heavy_Pelican\Urban_weaponry_co.paa"
			};
		};
		class Warhound_Woodland
		{
			displayName="Warhound_Woodland";
			author="SplitJaw";
			textures[]=
			{
				"\Warhound_Units\data\Vehicles\Heavy_Pelican\Woodland_body_co.paa",
				"\Warhound_Units\data\Vehicles\Heavy_Pelican\Woodland_wings_co.paa",
				"\Warhound_Units\data\Vehicles\Heavy_Pelican\Woodland_weaponry_co.paa"
			};
		};
	};

	class Components: Components
	{
		class TransportPylonsComponent
		{
			uiPicture="\A3\Air_F_Exp\VTOL_02\Data\UI\VTOL_02_3DEN_CA.paa";
			class Pylons
			{
				class PylonRight1
				{
					attachment="Splits_PylonMissile_AA_Pelican_x2";
					priority=4;
					hardpoints[]=
					{
						"Splits_T_Missiles", "OPAEX_Hardpoint_D77-TC"
					};
					turret[]={};
					UIposition[]={0.25,0.1};
				};
				class PylonRight2
				{
					attachment="Splits_PylonMissile_AGM_Pelican_x2";
					priority=3;
					hardpoints[]=
					{
						"Splits_T_Missiles", "OPAEX_Hardpoint_D77-TC"
					};
					turret[]={};
					UIposition[]={0.25,0.2};
				};
				class PylonRight3
				{
					attachment="Splits_PylonMissile_AGM_Bottom_Pelican_x3";
					priority=2;
					hardpoints[]=
					{
						"Splits_B_Missiles", "OPAEX_Hardpoint_D77-TC"
					};
					turret[]={};
					UIposition[]={0.60000002,0.1};
				};
				class PylonRight4
				{
					attachment="Splits_PylonMissile_AGM_Bottom_Pelican_x3";
					priority=1;
					hardpoints[]=
					{
						"Splits_B_Missiles", "OPAEX_Hardpoint_D77-TC"
					};
					turret[]={};
					UIposition[]={0.60000002,0.2};
				};
				class PylonsLeft1: PylonRight1
				{
					UIposition[]={0.25,0.5};
					mirroredMissilePos=1;
				};
				class PylonsLeft2: PylonRight2
				{
					UIposition[]={0.25,0.40000001};
					mirroredMissilePos=1;
				};
				class PylonsLeft3: PylonRight3
				{
					UIposition[]={0.60000002,0.5};
					mirroredMissilePos=1;
				};
				class PylonsLeft4: PylonRight4
				{
					UIposition[]={0.60000002,0.40000001};
					mirroredMissilePos=1;
				};
			};
			class Presets
			{
				class Empty
				{
					displayName="$STR_empty";
					attachment[]={};
				};
				class Default
				{
					displayName="$STR_vehicle_default";
					attachment[]=
					{
						"Splits_PylonMissile_AA_Pelican_x2",
						"Splits_PylonMissile_AGM_Pelican_x2",
						"Splits_PylonMissile_AGM_Bottom_Pelican_x3",
						"Splits_PylonMissile_AGM_Bottom_Pelican_x3",
						"Splits_PylonMissile_AGM_Bottom_Pelican_x3",
						"Splits_PylonMissile_AGM_Bottom_Pelican_x3",
						"Splits_PylonMissile_AGM_Pelican_x2",
						"Splits_PylonMissile_AA_Pelican_x2"
					};
				};
				class AT
				{
					displayName="$STR_A3_cfgmagazines_titan_at_dns";
					attachment[]=
					{
						"Splits_PylonMissile_AA_Pelican_x2",
						"Splits_PylonMissile_AGM_Pelican_x2",
						"Splits_PylonMissile_AGM_Bottom_Pelican_x3",
						"Splits_PylonMissile_AGM_Bottom_Pelican_x3",
						"Splits_PylonMissile_AGM_Bottom_Pelican_x3",
						"Splits_PylonMissile_AGM_Bottom_Pelican_x3",
						"Splits_PylonMissile_AGM_Pelican_x2",
						"Splits_PylonMissile_AA_Pelican_x2"
					};
				};
				class HAT
				{
					displayName="$STR_A3_Heavy_AT_preset_displayName";
					attachment[]=
					{
						"Splits_PylonMissile_AA_Pelican_x2",
						"Splits_PylonMissile_AGM_Pelican_x2",
						"Splits_PylonMissile_AGM_Bottom_Pelican_x3",
						"Splits_PylonMissile_AGM_Bottom_Pelican_x3",
						"Splits_PylonMissile_AGM_Bottom_Pelican_x3",
						"Splits_PylonMissile_AGM_Bottom_Pelican_x3",
						"Splits_PylonMissile_AGM_Pelican_x2",
						"Splits_PylonMissile_AA_Pelican_x2"
					};
				};
				class CAS
				{
					displayName="$STR_A3_CAS_PRESET_DISPLAYNAME";
					attachment[]=
					{
						"Splits_PylonMissile_AA_Pelican_x2",
						"Splits_PylonMissile_AGM_Pelican_x2",
						"Splits_PylonMissile_AGM_Bottom_Pelican_x3",
						"Splits_PylonMissile_AGM_Bottom_Pelican_x3",
						"Splits_PylonMissile_AGM_Bottom_Pelican_x3",
						"Splits_PylonMissile_AGM_Bottom_Pelican_x3",
						"Splits_PylonMissile_AGM_Pelican_x2",
						"Splits_PylonMissile_AA_Pelican_x2"
					};
				};
			};
		};
		/*
		class SensorsManagerComponent
		{
			class Components
			{
				class IRSensorComponent: SensorTemplateIR
				{
					class AirTarget
					{
						minRange=500;
						maxRange=2000;
						objectDistanceLimitCoef=1;
						viewDistanceLimitCoef=1;
					};
					class GroundTarget
					{
						minRange=500;
						maxRange=2000;
						objectDistanceLimitCoef=1;
						viewDistanceLimitCoef=1;
					};
					maxTrackableSpeed=300;
					animDirection="mainGun";
					angleRangeHorizontal=46;
					angleRangeVertical=34;
					aimdown=-0.25;
				};
				class VisualSensorComponent: SensorTemplateVisual
				{
					class AirTarget
					{
						minRange=500;
						maxRange=1500;
						objectDistanceLimitCoef=1;
						viewDistanceLimitCoef=1;
					};
					class GroundTarget
					{
						minRange=500;
						maxRange=1500;
						objectDistanceLimitCoef=1;
						viewDistanceLimitCoef=1;
					};
					maxTrackableSpeed=300;
					animDirection="mainGun";
					angleRangeHorizontal=46;
					angleRangeVertical=34;
					aimdown=-0.25;
				};
				class ActiveRadarSensorComponent: SensorTemplateActiveRadar
				{
					class AirTarget
					{
						minRange=500;
						maxRange=6000;
						objectDistanceLimitCoef=-1;
						viewDistanceLimitCoef=-1;
					};
					class GroundTarget
					{
						minRange=500;
						maxRange=6000;
						objectDistanceLimitCoef=-1;
						viewDistanceLimitCoef=-1;
					};
					maxTrackableSpeed=3000;
					angleRangeHorizontal=120;
					angleRangeVertical=90;
					groundNoiseDistanceCoef=-1;
					maxGroundNoiseDistance=-1;
					minSpeedThreshold=0;
					maxSpeedThreshold=0;
					aimDown=30;
				};
				class PassiveRadarSensorComponent: SensorTemplatePassiveRadar
				{
				};
				class LaserSensorComponent: SensorTemplateLaser
				{
				};
				class NVSensorComponent: SensorTemplateNV
				{
				};
			};
		};
		class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
		{
			class Components: components
			{
				class EmptyDisplay
				{
					componentType="EmptyDisplayComponent";
				};
				class MinimapDisplay
				{
					componentType="MinimapDisplayComponent";
					resource="RscCustomInfoAirborneMiniMap";
				};
				class CrewDisplay
				{
					componentType="CrewDisplayComponent";
					resource="RscCustomInfoCrew";
				};
				class UAVDisplay
				{
					componentType="UAVFeedDisplayComponent";
				};
				class VehiclePrimaryGunnerDisplay
				{
					componentType="TransportFeedDisplayComponent";
					source="PrimaryGunner";
				};
				class VehicleMissileDisplay
				{
					componentType="TransportFeedDisplayComponent";
					source="Missile";
				};
				class SensorDisplay
				{
					componentType="SensorsDisplayComponent";
					range[]={4000,2000,16000,8000};
					resource="RscCustomInfoSensors";
				};
			};
		};
		class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
		{
			defaultDisplay="SensorDisplay";
			class Components: components
			{
				class EmptyDisplay
				{
					componentType="EmptyDisplayComponent";
				};
				class MinimapDisplay
				{
					componentType="MinimapDisplayComponent";
					resource="RscCustomInfoAirborneMiniMap";
				};
				class CrewDisplay
				{
					componentType="CrewDisplayComponent";
					resource="RscCustomInfoCrew";
				};
				class UAVDisplay
				{
					componentType="UAVFeedDisplayComponent";
				};
				class VehiclePrimaryGunnerDisplay
				{
					componentType="TransportFeedDisplayComponent";
					source="PrimaryGunner";
				};
				class VehicleMissileDisplay
				{
					componentType="TransportFeedDisplayComponent";
					source="Missile";
				};
				class SensorDisplay
				{
					componentType="SensorsDisplayComponent";
					range[]={4000,2000,16000,8000};
					resource="RscCustomInfoSensors";
				};
			};
		};
		*/
	};

};
