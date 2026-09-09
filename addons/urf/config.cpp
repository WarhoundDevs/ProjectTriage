class CfgPatches
{
	class URF_Vehicle_Expansion
	{
		author="Grober Papa, repacked by The Warhound Mod Team";
		name="URF Vehicle Expansion";
		units[]=
		{
			"M400_Hammer_URF",
			"M115_Juggernaut_URF",
			"URF_SAM",
			"URF_Harpy",
			"URF_Nightingale",
			"URF_Witherwing",
			"URF_Raptor",
			"URF_Wombat",
			"URF_AV19Wyvern",
			"URF_VT19Wyvern",
			"URF_Coyote",
			"URF_CoyoteHMG",
			"URF_CoyoteAT",
			"URF_Ferret",
			"URF_PumaArmed",
			"URF_PumaUnarmed",
			"URF_BoltSam",
			"URF_BUZZ"

		};
		weapons[]={};
		magazines[]={};
		ammo[]={};
		requiredVersion=1;
		requiredAddons[]=
		{
			"cba_main",
			"A3_Data_F",
		};
	};
};

class CfgFactionClasses
{
    class 22nd_Ins
    {
        displayName = "United Rebel Front";
        side = 0;
        priority = 1;
    };
};

class cfgVehicles
{
	class O_MBT_02_arty_F;
	class M400_Hammer_URF: O_MBT_02_arty_F
	{
		author="Grober Papa, repacked by The Warhound Mod Team, repacked by The Warhound Mod Team";
		displayName="M400 Hammer";
		scope=2;
		scopeCurator=2;
		side=0;
		forceInGarage=1;
		faction="22nd_Ins";
		crew="OPTRE_Ins_URF_Crewman";
		typicalCargo[]=
		{
			"OPTRE_Ins_URF_Crewman",
			"OPTRE_Ins_URF_Crewman",
			"OPTRE_Ins_URF_Crewman"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"CamoNet"
		};
	class textureSources
		{
			class URF
			{
				author="Grober Papa, repacked by The Warhound Mod Team";
				displayName="URF";
				textures[]=
				{
					"z\22ndRDF\addons\urf\Camos\MBT_URF_Body.paa",
					"z\22ndRDF\addons\urf\Camos\Scorcher_URF_2.paa",
					"z\22ndRDF\addons\urf\Camos\MBT_URF_1.paa",
					"z\22ndRDF\addons\urf\Camos\Scorcher_URF_1.paa",
					"z\22ndRDF\addons\urf\Camos\URF_CamoNet.paa"
				};
			};
		};
		hiddenSelectionsTextures[]=
		{
				"z\22ndRDF\addons\urf\Camos\MBT_URF_Body.paa",
				"z\22ndRDF\addons\urf\Camos\Scorcher_URF_2.paa",
				"z\22ndRDF\addons\urf\Camos\MBT_URF_1.paa",
				"z\22ndRDF\addons\urf\Camos\Scorcher_URF_1.paa",
				"z\22ndRDF\addons\urf\Camos\URF_CamoNet.paa"
			};
		};
	class O_MBT_02_cannon_F;
	class M115_Juggernaut_URF: O_MBT_02_cannon_F
	{
		author="Grober Papa, repacked by The Warhound Mod Team";
		displayName="M115 Juggernaut";
		scope=2;
		scopeCurator=2;
		side=0;
		forceInGarage=1;
		faction="22nd_Ins";
		crew="OPTRE_Ins_URF_Crewman";
		typicalCargo[]=
		{
			"OPTRE_Ins_URF_Crewman",
			"OPTRE_Ins_URF_Crewman",
			"OPTRE_Ins_URF_Crewman"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"CamoNet"
		};
	class textureSources
		{
			class URF
			{
				author="Grober Papa, repacked by The Warhound Mod Team";
				displayName="URF";
				textures[]=
				{
					"z\22ndRDF\addons\urf\Camos\MBT_URF_Body2.paa",
					"z\22ndRDF\addons\urf\Camos\MBT_URF_Turret.paa",
					"z\22ndRDF\addons\urf\Camos\MBT_URF_1.paa",
					"z\22ndRDF\addons\urf\Camos\URF_CamoNet.paa"
				};
			};
		};
		hiddenSelectionsTextures[]=
		{
				"z\22ndRDF\addons\urf\Camos\MBT_URF_Body2.paa",
				"z\22ndRDF\addons\urf\Camos\MBT_URF_Turret.paa",
				"z\22ndRDF\addons\urf\Camos\MBT_URF_1.paa",
				"z\22ndRDF\addons\urf\Camos\URF_CamoNet.paa"
			};
		};
	class SAM_System_03_base_F;
	class URF_SAM: SAM_System_03_base_F
	{
		author="Grober Papa, repacked by The Warhound Mod Team";
		displayName="MIM-145 Defender";
		scope=2;
		scopeCurator=2;
		side=0;
		forceInGarage=1;
		faction="22nd_Ins";
		crew="O_UAV_AI";
		typicalCargo[]=
		{
			"B_UAV_AI"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
	class textureSources
		{
			class URF
			{
				author="Grober Papa, repacked by The Warhound Mod Team";
				displayName="URF";
				textures[]=
				{
				"z\22ndRDF\addons\urf\Camos\URF_SAM_1.paa",
				"z\22ndRDF\addons\urf\Camos\URF_SAM_2.paa"
				};
			};
		};
		hiddenSelectionsTextures[]=
		{
			"z\22ndRDF\addons\urf\Camos\URF_SAM_1.paa",
			"z\22ndRDF\addons\urf\Camos\URF_SAM_2.paa"
		};
	};
	class B_SAM_System_01_F;
	class URF_BoltSam: B_SAM_System_01_F
	{
		author="Grober Papa, repacked by The Warhound Mod Team";
		displayName="M92 Bolt SAM";
		scope=2;
		scopeCurator=2;
		side=0;
		forceInGarage=1;
		faction="22nd_Ins";
		crew="O_UAV_AI";
		typicalCargo[]=
		{
			"B_UAV_AI"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
	class textureSources
		{
			class URF
			{
				author="Grober Papa, repacked by The Warhound Mod Team";
				displayName="URF";
				textures[]=
				{
				"z\22ndRDF\addons\urf\Camos\URF_BOLT_SAM.paa"
				};
			};
		};
		hiddenSelectionsTextures[]=
		{
			"z\22ndRDF\addons\urf\Camos\URF_BOLT_SAM.paa"
		};
	};
	class B_AAA_System_01_F;
	class URF_BUZZ: B_AAA_System_01_F
	{
		author="Grober Papa, repacked by The Warhound Mod Team";
		displayName="M48 Buzzsaw CIWS";
		scope=2;
		scopeCurator=2;
		side=0;
		forceInGarage=1;
		faction="22nd_Ins";
		crew="O_UAV_AI";
		typicalCargo[]=
		{
			"B_UAV_AI"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
	class textureSources
		{
			class URF
			{
				author="Grober Papa, repacked by The Warhound Mod Team";
				displayName="URF";
				textures[]=
				{
				"z\22ndRDF\addons\urf\Camos\URF_Buzz2.paa",
				"z\22ndRDF\addons\urf\Camos\URF_Buzz1.paa"
				};
			};
		};
		hiddenSelectionsTextures[]=
		{
			"z\22ndRDF\addons\urf\Camos\URF_Buzz2.paa",
			"z\22ndRDF\addons\urf\Camos\URF_Buzz1.paa"
		};
	};
	class B_T_VTOL_01_armed_F;
	class URF_Harpy: B_T_VTOL_01_armed_F
	{
		author="Grober Papa, repacked by The Warhound Mod Team";
		displayName="D81A Harpy Gunship";
		scope=2;
		scopeCurator=2;
		side=0;
		forceInGarage=1;
		faction="22nd_Ins";
		crew="OPTRE_Ins_URF_Pilot";
		typicalCargo[]=
		{
			"OPTRE_Ins_URF_Pilot",
			"OPTRE_Ins_URF_Pilot",
			"OPTRE_Ins_URF_Pilot"
		};
		hiddenSelections[]=
		{
			"Camo_1",
			"Camo_2",
			"Camo_3",
			"Camo_4"
		};
	class textureSources
		{
			class URF
			{
				author="Grober Papa, repacked by The Warhound Mod Team";
				displayName="URF";
				textures[]=
				{
				"z\22ndRDF\addons\urf\Camos\URF_Harpy.paa",
				"z\22ndRDF\addons\urf\Camos\URF_Harpy2.paa",
				"z\22ndRDF\addons\urf\Camos\URF_Harpy3.paa",
				"z\22ndRDF\addons\urf\Camos\URF_Harpy4.paa"
				};
			};
		};
		hiddenSelectionsTextures[]=
		{
			"z\22ndRDF\addons\urf\Camos\URF_Harpy.paa",
			"z\22ndRDF\addons\urf\Camos\URF_Harpy2.paa",
			"z\22ndRDF\addons\urf\Camos\URF_Harpy3.paa",
			"z\22ndRDF\addons\urf\Camos\URF_Harpy4.paa"
		};
	};
	class B_T_VTOL_01_infantry_F;
	class URF_HarpyT: B_T_VTOL_01_infantry_F
	{
		author="Grober Papa, repacked by The Warhound Mod Team";
		displayName="D81 Harpy Transport";
		scope=2;
		scopeCurator=2;
		side=0;
		forceInGarage=1;
		faction="22nd_Ins";
		crew="OPTRE_Ins_URF_Pilot";
		typicalCargo[]=
		{
			"OPTRE_Ins_URF_Pilot",
			"OPTRE_Ins_URF_Pilot",
		};
		hiddenSelections[]=
		{
			"Camo_1",
			"Camo_2",
			"Camo_3",
			"Camo_4"
		};
	class textureSources
		{
			class URF
			{
				author="Grober Papa, repacked by The Warhound Mod Team";
				displayName="URF";
				textures[]=
				{
				"z\22ndRDF\addons\urf\Camos\URF_Harpy.paa",
				"z\22ndRDF\addons\urf\Camos\URF_Harpy2.paa",
				"z\22ndRDF\addons\urf\Camos\URF_Harpy3.paa",
				"z\22ndRDF\addons\urf\Camos\URF_Harpy4.paa"
				};
			};
		};
		hiddenSelectionsTextures[]=
		{
			"z\22ndRDF\addons\urf\Camos\URF_Harpy.paa",
			"z\22ndRDF\addons\urf\Camos\URF_Harpy2.paa",
			"z\22ndRDF\addons\urf\Camos\URF_Harpy3.paa",
			"z\22ndRDF\addons\urf\Camos\URF_Harpy4.paa"
		};
	};
	class DMNS_UNSC_Nightingale;
	class URF_Nightingale: DMNS_UNSC_Nightingale
	{
		author="Grober Papa, repacked by The Warhound Mod Team";
		displayName="EV-41 URF Nightingale";
		scope=2;
		scopeCurator=2;
		side=0;
		forceInGarage=1;
		faction="22nd_Ins";
		crew="OPTRE_Ins_URF_Pilot";
		typicalCargo[]=
		{
			"OPTRE_Ins_URF_Pilot",
			"OPTRE_Ins_URF_Pilot",
		};
	class textureSources
		{
			class URF
			{
				author="Grober Papa, repacked by The Warhound Mod Team";
				displayName="URF";
				textures[]=
				{
					"z\22ndRDF\addons\urf\Camos\NIGHTGALE_URF.paa"
				};
			};
		};
		hiddenSelectionsTextures[]=
		{
			"z\22ndRDF\addons\urf\Camos\NIGHTGALE_URF.paa"
		};
		textureList[]=
		{
			"URF",
			1
		};
		tf_range=25000;
		tf_isolatedAmount=0.40000001;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		enableRadio=1;
		};
	class I_Plane_Fighter_04_F;
	class URF_Witherwing: I_Plane_Fighter_04_F
	{
		author="Grober Papa, repacked by The Warhound Mod Team";
		displayName="V-F22 Witherwing";
		scope=2;
		scopeCurator=2;
		side=0;
		forceInGarage=1;
		faction="22nd_Ins";
		crew="OPTRE_Ins_URF_Pilot";
		typicalCargo[]=
		{
			"OPTRE_Ins_URF_Pilot"
		};
		hiddenSelections[]=
		{
			"Camo_01",
			"Camo_02",
			"Camo_03",
			"number_01",
			"number_02",
			"number_03"
		};
	class textureSources
		{
			class URF
			{
				author="Grober Papa, repacked by The Warhound Mod Team";
				displayName="URF";
				textures[]=
				{
				"z\22ndRDF\addons\urf\Camos\URF_Witherwing1.paa",
				"z\22ndRDF\addons\urf\Camos\URF_Witherwing2.paa",
				"z\22ndRDF\addons\urf\Camos\URF_Witherwing3.paa"
				};
			};
			class URFGrey
			{
				author="Grober Papa, repacked by The Warhound Mod Team";
				displayName="URF Grey";
				textures[]=
				{
				"z\22ndRDF\addons\urf\Camos\URF_Witherwing1_Grey.paa",
				"z\22ndRDF\addons\urf\Camos\URF_Witherwing2.paa",
				"z\22ndRDF\addons\urf\Camos\URF_Witherwing3.paa"
				};
			};
		};
		hiddenSelectionsTextures[]=
		{
			"z\22ndRDF\addons\urf\Camos\URF_Witherwing1.paa",
			"z\22ndRDF\addons\urf\Camos\URF_Witherwing2.paa",
			"z\22ndRDF\addons\urf\Camos\URF_Witherwing3.paa"
			};
			
		};
	class I_APC_Wheeled_03_cannon_F;
	class URF_Raptor: I_APC_Wheeled_03_cannon_F
	{
		author="Grober Papa, repacked by The Warhound Mod Team";
		displayName="M66 Raptor";
		scope=2;
		scopeCurator=2;
		side=0;
		forceInGarage=1;
		faction="22nd_Ins";
		crew="OPTRE_Ins_URF_Crewman";
		typicalCargo[]=
		{
			"OPTRE_Ins_URF_Crewman",
			"OPTRE_Ins_URF_Crewman",
			"OPTRE_Ins_URF_Crewman"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"CamoNet",
			"CamoSlat"
		};
	class textureSources
		{
			class URF
			{
				author="Grober Papa, repacked by The Warhound Mod Team";
				displayName="URF";
				textures[]=
				{
					"z\22ndRDF\addons\urf\Camos\URF_Gorgon1.paa",
					"z\22ndRDF\addons\urf\Camos\URF_Gorgon2.paa",
					"z\22ndRDF\addons\urf\Camos\URF_Gorgon3.paa",
					"z\22ndRDF\addons\urf\Camos\URF_Gorgon4.paa",
					"z\22ndRDF\addons\urf\Camos\URF_CamoNet.paa",
					"z\22ndRDF\addons\urf\Camos\URF_Gorgon5.paa",
				};
			};
		};
		hiddenSelectionsTextures[]=
		{
					"z\22ndRDF\addons\urf\Camos\URF_Gorgon1.paa",
					"z\22ndRDF\addons\urf\Camos\URF_Gorgon2.paa",
					"z\22ndRDF\addons\urf\Camos\URF_Gorgon3.paa",
					"z\22ndRDF\addons\urf\Camos\URF_Gorgon4.paa",
					"z\22ndRDF\addons\urf\Camos\URF_CamoNet.paa",
					"z\22ndRDF\addons\urf\Camos\URF_Gorgon5.paa",
			};
		};
	class B_UAV_05_F;
	class URF_Wombat: B_UAV_05_F
	{
		author="Grober Papa, repacked by The Warhound Mod Team";
		displayName="F-99 Wombat (URF)";
		scope=2;
		scopeCurator=2;
		side=0;
		forceInGarage=1;
		faction="22nd_Ins";
		crew="OPTRE_Ins_URF_Pilot";
		typicalCargo[]=
		{
			"OPTRE_Ins_URF_Pilot"
		};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"z\22ndRDF\addons\urf\Camos\URF_Bastardswoard1.paa",
			"z\22ndRDF\addons\urf\Camos\URF_Bastardswoard2.paa",
			"A3\Air_F_Jets\UAV_05\Data\UAV05_engine_fire_ca.paa"
		};
	};
	class O_T_VTOL_02_infantry_dynamicLoadout_F;
	class URF_AV19Wyvern: O_T_VTOL_02_infantry_dynamicLoadout_F
	{
		author="Grober Papa, repacked by The Warhound Mod Team";
		displayName="AV-19 Wyvern";
		scope=2;
		scopeCurator=2;
		side=0;
		forceInGarage=1;
		faction="22nd_Ins";
		crew="OPTRE_Ins_URF_Pilot";
		typicalCargo[]=
		{
			"OPTRE_Ins_URF_Pilot",
			"OPTRE_Ins_URF_Pilot"
		};
		hiddenSelections[]=
		{
			"Camo_1",
			"Camo_2",
			"Camo_3",
			"Camo_4"
		};
		class textureSources
		{
			class URF
			{
				author="Grober Papa, repacked by The Warhound Mod Team";
				displayName="URF";
				textures[]=
				{
					"z\22ndRDF\addons\urf\Camos\URF_Wyvern.paa",
					"z\22ndRDF\addons\urf\Camos\URF_Wyvern2.paa",
					"z\22ndRDF\addons\urf\Camos\URF_Wyvern3.paa",
					"z\22ndRDF\addons\urf\Camos\URF_Wyvern3.paa",
				};
			};
		};
		hiddenSelectionsTextures[]=
		{
			"z\22ndRDF\addons\urf\Camos\URF_Wyvern.paa",
			"z\22ndRDF\addons\urf\Camos\URF_Wyvern2.paa",
			"z\22ndRDF\addons\urf\Camos\URF_Wyvern3.paa",
			"z\22ndRDF\addons\urf\Camos\URF_Wyvern3.paa",
		};
	};
	class O_T_VTOL_02_vehicle_dynamicLoadout_F;
	class URF_VT19Wyvern: O_T_VTOL_02_vehicle_dynamicLoadout_F
	{
		author="Grober Papa, repacked by The Warhound Mod Team";
		displayName="VT-19 Wyvern";
		scope=2;
		scopeCurator=2;
		side=0;
		forceInGarage=1;
		faction="22nd_Ins";
		crew="OPTRE_Ins_URF_Pilot";
		typicalCargo[]=
		{
			"OPTRE_Ins_URF_Pilot",
			"OPTRE_Ins_URF_Pilot"
		};
		hiddenSelections[]=
		{
			"Camo_1",
			"Camo_2",
			"Camo_3",
			"Camo_4"
		};
		class textureSources
		{
			class URF
			{
				author="Grober Papa, repacked by The Warhound Mod Team";
				displayName="URF";
				textures[]=
				{
					"z\22ndRDF\addons\urf\Camos\URF_Wyvern.paa",
					"z\22ndRDF\addons\urf\Camos\URF_Wyvern2.paa",
					"z\22ndRDF\addons\urf\Camos\URF_Wyvern3.paa",
					"z\22ndRDF\addons\urf\Camos\URF_Wyvern3.paa",
				};
			};
		};
		hiddenSelectionsTextures[]=
		{
			"z\22ndRDF\addons\urf\Camos\URF_Wyvern.paa",
			"z\22ndRDF\addons\urf\Camos\URF_Wyvern2.paa",
			"z\22ndRDF\addons\urf\Camos\URF_Wyvern3.paa",
			"z\22ndRDF\addons\urf\Camos\URF_Wyvern3.paa",
		};
	};
	class B_T_LSV_01_unarmed_F;
	class URF_Coyote: B_T_LSV_01_unarmed_F
	{
		author="Grober Papa, repacked by The Warhound Mod Team";
		displayName="TR Coyote ATV";
		scope=2;
		scopeCurator=2;
		side=0;
		forceInGarage=1;
		faction="22nd_Ins";
		crew="OPTRE_Ins_URF_Rifleman_AR";
		typicalCargo[]=
		{
			"OPTRE_Ins_URF_Rifleman_AR",
		};
		hiddenSelections[]=
		{
			"Camo_1",
			"Camo_2",
			"Camo_3",
			"Camo_4",
			"camo_launcher",
			"camo_tube"
		};
		class textureSources
		{
			class URF
			{
				author="Grober Papa, repacked by The Warhound Mod Team";
				displayName="URF";
				textures[]=
				{
					"z\22ndRDF\addons\urf\Camos\URF_Coyote1.paa",
					"z\22ndRDF\addons\urf\Camos\URF_Coyote2.paa",
					"z\22ndRDF\addons\urf\Camos\URF_Coyote3.paa",
					"z\22ndRDF\addons\urf\Camos\URF_Coyote4.paa",
				};
			};
		};
		hiddenSelectionsTextures[]=
		{
			"z\22ndRDF\addons\urf\Camos\URF_Coyote1.paa",
			"z\22ndRDF\addons\urf\Camos\URF_Coyote2.paa",
			"z\22ndRDF\addons\urf\Camos\URF_Coyote3.paa",
			"z\22ndRDF\addons\urf\Camos\URF_Coyote4.paa",
		};
	};
	class B_T_LSV_01_armed_F;
	class URF_CoyoteHMG: B_T_LSV_01_armed_F
	{
		author="Grober Papa, repacked by The Warhound Mod Team";
		displayName="HMG Coyote ATV";
		scope=2;
		scopeCurator=2;
		side=0;
		forceInGarage=1;
		faction="22nd_Ins";
		crew="OPTRE_Ins_URF_Rifleman_AR";
		typicalCargo[]=
		{
			"OPTRE_Ins_URF_Rifleman_AR",
			"OPTRE_Ins_URF_Rifleman_AR",
			"OPTRE_Ins_URF_Rifleman_AR",

		};
		hiddenSelections[]=
		{
			"Camo_1",
			"Camo_2",
			"Camo_3",
			"Camo_4",
			"camo_launcher",
			"camo_tube"
		};
		class textureSources
		{
			class URF
			{
				author="Grober Papa, repacked by The Warhound Mod Team";
				displayName="URF";
				textures[]=
				{
					"z\22ndRDF\addons\urf\Camos\URF_Coyote1.paa",
					"z\22ndRDF\addons\urf\Camos\URF_Coyote2.paa",
					"z\22ndRDF\addons\urf\Camos\URF_Coyote3.paa",
					"z\22ndRDF\addons\urf\Camos\URF_Coyote4.paa",
				};
			};
		};
		hiddenSelectionsTextures[]=
		{
			"z\22ndRDF\addons\urf\Camos\URF_Coyote1.paa",
			"z\22ndRDF\addons\urf\Camos\URF_Coyote2.paa",
			"z\22ndRDF\addons\urf\Camos\URF_Coyote3.paa",
			"z\22ndRDF\addons\urf\Camos\URF_Coyote4.paa",
		};
	};
	class B_T_LSV_01_AT_F;
	class URF_CoyoteAT: B_T_LSV_01_AT_F
	{
		author="Grober Papa, repacked by The Warhound Mod Team";
		displayName="AT Coyote ATV";
		scope=2;
		scopeCurator=2;
		side=0;
		forceInGarage=1;
		faction="22nd_Ins";
		crew="OPTRE_Ins_URF_Rifleman_AR";
		typicalCargo[]=
		{
			"OPTRE_Ins_URF_Rifleman_AR",
			"OPTRE_Ins_URF_Rifleman_AR",
			"OPTRE_Ins_URF_Rifleman_AR",

		};
		hiddenSelections[]=
		{
			"Camo_1",
			"Camo_2",
			"Camo_3",
			"Camo_4",
			"camo_launcher",
			"camo_tube"
		};
		class textureSources
		{
			class URF
			{
				author="Grober Papa, repacked by The Warhound Mod Team";
				displayName="URF";
				textures[]=
				{
					"z\22ndRDF\addons\urf\Camos\URF_Coyote1.paa",
					"z\22ndRDF\addons\urf\Camos\URF_Coyote2.paa",
					"z\22ndRDF\addons\urf\Camos\URF_Coyote3.paa",
					"z\22ndRDF\addons\urf\Camos\URF_Coyote4.paa",
					"\A3\Weapons_F_Beta\Launchers\Titan\Data\Launcher_INDP_CO.paa",
					"\A3\Weapons_F_Beta\Launchers\Titan\Data\TubeM_INDP_CO.paa"
				};
			};
		};
		hiddenSelectionsTextures[]=
		{
			"z\22ndRDF\addons\urf\Camos\URF_Coyote1.paa",
			"z\22ndRDF\addons\urf\Camos\URF_Coyote2.paa",
			"z\22ndRDF\addons\urf\Camos\URF_Coyote3.paa",
			"z\22ndRDF\addons\urf\Camos\URF_Coyote4.paa",
			"\A3\Weapons_F_Beta\Launchers\Titan\Data\Launcher_INDP_CO.paa",
			"\A3\Weapons_F_Beta\Launchers\Titan\Data\TubeM_INDP_CO.paa"
		};
	};
	class B_APC_Wheeled_01_cannon_F;
	class URF_Ferret: B_APC_Wheeled_01_cannon_F
	{
		author="Grober Papa, repacked by The Warhound Mod Team";
		displayName="M620 Ferret";
		scope=2;
		scopeCurator=2;
		side=0;
		forceInGarage=1;
		faction="22nd_Ins";
		crew="OPTRE_Ins_URF_Crewman";
		typicalCargo[]=
		{
			"OPTRE_Ins_URF_Crewman",
			"OPTRE_Ins_URF_Crewman",
			"OPTRE_Ins_URF_Crewman"
		};
		hiddenSelections[]=
		{
			"camo1",
			"Camo2",
			"Camo3",
			"CamoNet",
			"CamoSlat"
		};
	class textureSources
		{
			class URF
			{
				author="Grober Papa, repacked by The Warhound Mod Team";
				displayName="URF";
				textures[]=
				{
					"z\22ndRDF\addons\urf\Camos\URF_Ferret1.paa",
					"z\22ndRDF\addons\urf\Camos\URF_Ferret3.paa",
					"z\22ndRDF\addons\urf\Camos\URF_Ferret2.paa",
					"z\22ndRDF\addons\urf\Camos\URF_CamoNet.paa",
					"z\22ndRDF\addons\urf\Camos\URF_Gorgon5.paa"
				};
			};
		};
		hiddenSelectionsTextures[]=
		{
					"z\22ndRDF\addons\urf\Camos\URF_Ferret1.paa",
					"z\22ndRDF\addons\urf\Camos\URF_Ferret3.paa",
					"z\22ndRDF\addons\urf\Camos\URF_Ferret2.paa",
					"z\22ndRDF\addons\urf\Camos\URF_CamoNet.paa",
					"z\22ndRDF\addons\urf\Camos\URF_Gorgon5.paa"
		};
	};
	class O_T_LSV_02_armed_F;
	class URF_PumaArmed: O_T_LSV_02_armed_F
	{
		author="Grober Papa, repacked by The Warhound Mod Team";
		displayName="Armed Puma";
		scope=2;
		scopeCurator=2;
		side=0;
		forceInGarage=1;
		faction="22nd_Ins";
		crew="OPTRE_Ins_URF_Rifleman_AR";
		typicalCargo[]=
		{
			"OPTRE_Ins_URF_Rifleman_AR",
			"OPTRE_Ins_URF_Rifleman_AR"
		};
		hiddenSelections[]=
		{
			"camo1",
			"Camo2"
		};
	class textureSources
		{
			class URF
			{
				author="Grober Papa, repacked by The Warhound Mod Team";
				displayName="URF";
				textures[]=
				{
					"z\22ndRDF\addons\urf\Camos\URF_Puma1.paa",
					"z\22ndRDF\addons\urf\Camos\URF_Puma2.paa"
				};
			};
		};
		hiddenSelectionsTextures[]=
		{
					"z\22ndRDF\addons\urf\Camos\URF_Puma1.paa",
					"z\22ndRDF\addons\urf\Camos\URF_Puma2.paa"
		};
	};
	class O_T_LSV_02_unarmed_F;
	class URF_PumaUnarmed: O_T_LSV_02_unarmed_F
	{
		author="Grober Papa, repacked by The Warhound Mod Team";
		displayName="Unarmed Puma";
		scope=2;
		scopeCurator=2;
		side=0;
		forceInGarage=1;
		faction="22nd_Ins";
		crew="OPTRE_Ins_URF_Rifleman_AR";
		typicalCargo[]=
		{
			"OPTRE_Ins_URF_Rifleman_AR"
		};
		hiddenSelections[]=
		{
			"camo1",
			"Camo2"
		};
	class textureSources
		{
			class URF
			{
				author="Grober Papa, repacked by The Warhound Mod Team";
				displayName="URF";
				textures[]=
				{
					"z\22ndRDF\addons\urf\Camos\URF_Puma1.paa",
					"z\22ndRDF\addons\urf\Camos\URF_Puma2.paa"
				};
			};
		};
		hiddenSelectionsTextures[]=
		{
					"z\22ndRDF\addons\urf\Camos\URF_Puma1.paa",
					"z\22ndRDF\addons\urf\Camos\URF_Puma2.paa"
		};
	};
};