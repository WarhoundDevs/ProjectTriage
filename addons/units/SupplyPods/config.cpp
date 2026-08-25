class CfgPatches
{
	class 22nd_supply_pods
	{
		author="22nd Mod Team";
		addonRootClass="22nd_SupplyPods";
		requiredAddons[]=
		{
			"cba_main",
			"A3_Data_F",
			"OPTRE_Misc_Crates",
		};
		requiredVersion=0.1;
		units[]=
		{
			"22nd_SupplyPod_Empty",
			"22nd_SupplyPod_MA5K",
			"22nd_SupplyPod_37",
			"22nd_SupplyPod_DMR",
			"22nd_SupplyPod_Launcher",
			"22nd_SupplyPod_LMG",
			"22nd_SupplyPod_Medical",
			"22nd_SupplyPod_Pistol",
			"22nd_SupplyPod_Shotgun",
			"22nd_SupplyPod_SMG",
			"22nd_SupplyPod_Sniper"
		};
	};
};

class CfgVehicles
{
	class NATO_Box_Base;
	class OPTRE_Ammo_SupplyPod_Empty;
	class 22nd_SupplyPod_Empty: OPTRE_Ammo_SupplyPod_Empty
	{
        author="Astro";
        displayName="[22nd] Supply Pod (Empty)";
        editorPreview="z\22ndRDF\addons\units\SupplyPods\preview\22nd_Supply_Pod.jpg";
        hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"z\22ndRDF\addons\units\SupplyPods\data\22nd_Supply_Pod.paa"
		};
		transportMaxWeapons=2;
		transportMaxMagazines=20;
		maximumLoad=1000;
		transportMaxBackpacks=0;
		transportAmmo=0;
		transportRepair=0;
		transportFuel=0;
		supplyRadius=1.5;
		armor=10000;
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
    };
	class 22nd_SupplyPod_MA5K: 22nd_SupplyPod_Empty
	{
		dlc="OPTRE";
		displayName="[22nd] Supply Pod (MA5K)";
		author="The Warhound Mod Team";
		hiddenselectionstextures[]=
		{
			"z\22ndRDF\addons\units\SupplyPods\data\22nd_MA5K_Pod.paa"
		};
		class TransportMagazines
		{
			class xx_OPTRE_32Rnd_762x51_Mag
			{
				magazine="OPTRE_32Rnd_762x51_Mag";
				count=16;
			};
			class xx_OPTRE_32Rnd_762x51_Mag_tracer
			{
				magazine="OPTRE_32Rnd_762x51_Mag_Tracer";
				count=8;
			};
		};
		class TransportWeapons
		{
			class xx_OPTRE_MA5K
			{
				weapon="OPTRE_MA5K";
				count=1;
			};
		};
		class TransportItems
		{
		};
		editorPreview="z\22ndRDF\addons\units\SupplyPods\preview\22nd_MA5K_Pod.jpg";
	};
	class 22nd_SupplyPod_37: 22nd_SupplyPod_Empty
	{
		dlc="OPTRE";
		displayName="[22nd] Supply Pod (MA37)";
		author="The Warhound Mod Team";
		hiddenselectionstextures[]=
		{
			"z\22ndRDF\addons\units\SupplyPods\data\22nd_MA37_Pod.paa"
		};
		class TransportMagazines
		{
			class xx_OPTRE_32Rnd_762x51_Mag
			{
				magazine="OPTRE_32Rnd_762x51_Mag";
				count=16;
			};
			class xx_OPTRE_32Rnd_762x51_Mag_tracer
			{
				magazine="OPTRE_32Rnd_762x51_Mag_Tracer";
				count=8;
			};
		};
		class TransportWeapons
		{
			class xx_OPTRE_MA37
			{
				weapon="OPTRE_MA37";
				count=2;
			};
		};
		class TransportItems
		{
		};
		editorPreview="z\22ndRDF\addons\units\SupplyPods\preview\22nd_MA37_Pod.jpg";
	};
	class 22nd_SupplyPod_DMR: 22nd_SupplyPod_Empty
	{
		dlc="OPTRE";
		displayName="[22nd] Supply Pod (DMR)";
		author="The Warhound Mod Team";
		hiddenselectionstextures[]=
		{
			"z\22ndRDF\addons\units\SupplyPods\data\22nd_DMR_Pod.paa"
		};
		class TransportMagazines
		{
			class xx_OPTRE_15Rnd_762x51_Mag
			{
				magazine="OPTRE_15Rnd_762x51_Mag";
				count=25;
			};
		};
		class TransportWeapons
		{
			class xx_OPTRE_M392_DMR_ScopedRifle
			{
				weapon="OPTRE_M392_DMR_ScopedRifle";
				count=1;
			};
		};
		class TransportItems
		{
		};
		editorPreview="z\22ndRDF\addons\units\SupplyPods\preview\22nd_DMR_Pod.jpg";
	};
	class 22nd_SupplyPod_Launcher: 22nd_SupplyPod_Empty
	{
		dlc="OPTRE";
		displayName="[22nd] Supply Pod (Launcher)";
		author="The Warhound Mod Team";
		hiddenselectionstextures[]=
		{
			"z\22ndRDF\addons\units\SupplyPods\data\22nd_Launcher_Pod.paa"
		};
		class TransportMagazines
		{
			class xx_OPTRE_M41_Twin_HEAT
			{
				magazine="OPTRE_M41_Twin_HEAT";
				count=6;
			};
			class xx_OPTRE_M41_Twin_HEAP
			{
				magazine="OPTRE_M41_Twin_HEAP";
				count=4;
			};
		};
		class TransportWeapons
		{
			class xx_OPTRE_M41_SSR
			{
				weapon="OPTRE_M41_SSR";
				count=1;
			};
		};
		class TransportItems
		{
		};
		editorPreview="z\22ndRDF\addons\units\SupplyPods\preview\22nd_Launcher_Pod.jpg";
	};
	class 22nd_SupplyPod_LMG: 22nd_SupplyPod_Empty
	{
		dlc="OPTRE";
		displayName="[22nd] Supply Pod (LMG)";
		author="The Warhound Mod Team";
		hiddenselectionstextures[]=
		{
			"z\22ndRDF\addons\units\SupplyPods\data\22nd_LMG_Pod.paa"
		};
		class TransportMagazines
		{
			class xx_OPTRE_200Rnd_95x40_Box
			{
				magazine="OPTRE_200Rnd_95x40_Box";
				count=5;
			};
			class xx_OPTRE_200Rnd_95x40_Box_tracer
			{
				magazine="OPTRE_200Rnd_95x40_Box_tracer";
				count=2;
			};
		};
		class TransportWeapons
		{
			class xx_OPTRE_M73
			{
				weapon="OPTRE_M73";
				count=1;
			};
		};
		class TransportItems
		{
		};
		editorPreview="z\22ndRDF\addons\units\SupplyPods\preview\22nd_LMG_Pod.jpg";
	};
	class 22nd_SupplyPod_Medical: 22nd_SupplyPod_Empty
	{
		dlc="OPTRE";
		displayName="[22nd] Supply Pod (Medical)";
		author="The Warhound Mod Team";
		hiddenselectionstextures[]=
		{
			"z\22ndRDF\addons\units\SupplyPods\data\22nd_Medical_Pod.paa"
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
			class xx_OPTRE_Biofoam
			{
				name="OPTRE_Biofoam";
				count=10;
			};
			class xx_OPTRE_MedKit
			{
				name="OPTRE_MedKit";
				count=1;
			};
		};
		editorPreview="z\22ndRDF\addons\units\SupplyPods\preview\22nd_Medical_Pod.jpg";
	};
	class 22nd_SupplyPod_Pistol: 22nd_SupplyPod_Empty
	{
		dlc="OPTRE";
		displayName="[22nd] Supply Pod (Pistol)";
		author="The Warhound Mod Team";
		hiddenselectionstextures[]=
		{
			"z\22ndRDF\addons\units\SupplyPods\data\22nd_Pistol_Pod.paa"
		};
		class TransportMagazines
		{
			class xx_OPTRE_8Rnd_127x40_Mag
			{
				magazine="OPTRE_8Rnd_127x40_Mag";
				count=16;
			};
			class xx_OPTRE_8Rnd_127x40_Mag_tracer
			{
				magazine="OPTRE_8Rnd_127x40_Mag_tracer";
				count=4;
			};
		};
		class TransportWeapons
		{
			class xx_OPTRE_M6G_SF
			{
				weapon="OPTRE_M6G_SF";
				count=2;
			};
		};
		class TransportItems
		{
		};
		editorPreview="z\22ndRDF\addons\units\SupplyPods\preview\22nd_Pistol_Pod.jpg";
	};
	class 22nd_SupplyPod_Shotgun: 22nd_SupplyPod_Empty
	{
		dlc="OPTRE";
		displayName="[22nd] Supply Pod (Shotgun)";
		author="The Warhound Mod Team";
		hiddenselectionstextures[]=
		{
			"z\22ndRDF\addons\units\SupplyPods\data\22nd_Shotgun_Pod.paa"
		};
		class TransportMagazines
		{
			class xx_OPTRE_6Rnd_8Gauge_Pellets
			{
				magazine="OPTRE_6Rnd_8Gauge_Pellets";
				count=10;
			};
			class xx_OPTRE_6Rnd_8Gauge_Slugs
			{
				magazine="OPTRE_6Rnd_8Gauge_Slugs";
				count=10;
			};
		};
		class TransportWeapons
		{
			class xx_OPTRE_M45
			{
				weapon="OPTRE_M45";
				count=1;
			};
		};
		class TransportItems
		{
		};
		editorPreview="z\22ndRDF\addons\units\SupplyPods\preview\22nd_Shotgun_Pod.jpg";
	};
	class 22nd_SupplyPod_SMG: 22nd_SupplyPod_Empty
	{
		dlc="OPTRE";
		displayName="[22nd] Supply Pod (SMG)";
		author="The Warhound Mod Team";
		hiddenselectionstextures[]=
		{
			"z\22ndRDF\addons\units\SupplyPods\data\22nd_SMG_Pod.paa"
		};
		class TransportMagazines
		{
			class xx_OPTRE_60Rnd_5x23mm_Mag
			{
				magazine="OPTRE_60Rnd_5x23mm_Mag";
				count=15;
			};
			class xx_OPTRE_60Rnd_5x23mm_Mag_tracer
			{
				magazine="OPTRE_60Rnd_5x23mm_Mag_tracer";
				count=5;
			};
		};
		class TransportWeapons
		{
			class xx_OPTRE_M7
			{
				weapon="OPTRE_M7";
				count=1;
			};
		};
		class TransportItems
		{
		};
		editorPreview="z\22ndRDF\addons\units\SupplyPods\preview\22nd_SMG_Pod.jpg";
	};
	class 22nd_SupplyPod_Sniper: 22nd_SupplyPod_Empty
	{
		dlc="OPTRE";
		displayName="[22nd] Supply Pod (Sniper)";
		author="The Warhound Mod Team";
		hiddenselectionstextures[]=
		{
			"z\22ndRDF\addons\units\SupplyPods\data\22nd_Sniper_Pod.paa"
		};
		class TransportMagazines
		{
			class xx_OPTRE_4Rnd_145x114_APFSDS_Mag
			{
				magazine="OPTRE_4Rnd_145x114_APFSDS_Mag";
				count=12;
			};
			class xx_OPTRE_4Rnd_145x114_HVAP_Mag
			{
				magazine="OPTRE_4Rnd_145x114_HVAP_Mag";
				count=4;
			};
			class xx_OPTRE_4Rnd_145x114_HEDP_Mag
			{
				magazine="OPTRE_4Rnd_145x114_HEDP_Mag";
				count=4;
			};
		};
		class TransportWeapons
		{
			class xx_OPTRE_SRS99D_SC_LS
			{
				weapon="OPTRE_SRS99D_SC_LS";
				count=1;
			};
		};
		class TransportItems
		{
		};
		editorPreview="z\22ndRDF\addons\units\SupplyPods\preview\22nd_Sniper_Pod.jpg";
	};
};
