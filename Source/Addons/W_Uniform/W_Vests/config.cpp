class cfgpatches {
        class 22ndArmsRoom{
            requiredAddons[]=
		    {
			    "OPTRE_Core",
			    "OPTRE_UNSC_Units",
			    "OPTRE_UNSC_Units_Army",
			    "OPTRE_Vehicles",
			    "OPTRE_Vehicles_Air",
			    "OPTRE_Vehicles_Tracked",
			    "OPTRE_Weapons",
			    "MA_Armor"
		    };
            units[] = {
                "22nd_MAKO_Vest", // this is for spawnable units, cfgvehicles specifically, you'd define say: '22nd rifleman' here. Unless you're actually making a new unit theres no need to touch this
            };
            weapons[]= {
            "22nd_MAKO_Vest", // ditto, but this is to let the editor recognize it and spawn it on said unit, this only fits weapons, vests and helmets (i think also nvgs?)
        };
    };
};
class cfgweapons
{
    class VestItem;
    class V_PlateCarrier1_rgr;
    class 22nd_MAKO_Vest: V_PlateCarrier1_rgr
    {
        displayName="[22nd] M.A.K.O. UA System";
        author = "Misriah Armory, Warhound"
        scope = 2;
        scopeArsenal = 2;
        picture = ""; //Add whatever pic here
        model = "MA_Armor\data\Vests\M52_ODST\M52_ODST_Vest.p3d";
        hiddenSelections[]=
        {
            "Camo1", //CQB Left
            "Camo2", //CQB Right
            "Camo3", //Marksman_Left
            "Camo4", //Marksman_Right
            "Camo5", //ODST_Bracer_Left
            "Camo6", //ODST_Bracer_Right
            "Camo7", //ODST_Chest
            "Camo8", //ODST_Left
            "Camo9", //ODST_Right
            "Camo10", //ChestPMLeft
            "Camo11", //ChestPMRight
            "Camo12", //ChestPouch
            "Camo13", //LShoulderRadio
            "Camo14", //RShoulderRadio
            "Camo15", //StomachPouch
            "Camo16", //TorsoPMLeft
            "Camo17", //TorsoPMRight
            "Camo18", //TorsoPouch
            "Camo19", //WaistBack
            "Camo20", //WaistGLeft
            "Camo21", //WaistGRight
            "Camo22", //WaistPLeft
            "Camo23", //WaistPRight
            "Camo24", //WaistRLeft
            "Camo25", //WaistRRight
            "Camo26", //WaistSLeft
            "Camo27", //WaistSRight
            "Camo28", //LegPouchL
            "Camo29", //LegPouchR
            "CQB_Left",
            "CQB_Right",
            "Marksman_Left",
            "Marksman_Right",
            //"ODST_Bracer_Left",
            //"ODST_Bracer_Right",
            //"ODST_Chest",
            "ODST_Left",
            "ODST_Right",
            "ChestPMLeft",
            "ChestPMRight",
            "ChestPouch",
            "LShoulderRadio",
            "RShoulderRadio",
            "StomachPouch",
            "TorsoPMLeft",
            "TorsoPMRight",
            "TorsoPouch",
            "WaistBack",
            "WaistGLeft",
            "WaistGRight",
            "WaistPLeft",
            "WaistPRight",
            "WaistRLeft",
            "WaistRRight",
            "WaistSLeft",
            "WaistSRight",
            "LegPouchL",
            "LegPouchR"
        };
        hiddenselectionsTextures[]=
        {
            "MA_Armor\data\Vests\M52_ODST\Color_Variants\MA_ODST_CQB_co.paa", //CQB Left
            "MA_Armor\data\Vests\M52_ODST\Color_Variants\MA_ODST_CQB_co.paa", //CQB Right
            "MA_Armor\data\Vests\M52_ODST\Color_Variants\MA_ODST_Marksman_co.paa", //Marksman_Left
            "MA_Armor\data\Vests\M52_ODST\Color_Variants\MA_ODST_Marksman_co.paa", //Marksman_Right
            "MA_Armor\data\Vests\M52_ODST\Color_Variants\MA_ODST_Vest_co.paa", //ODST_Bracer_Left
            "MA_Armor\data\Vests\M52_ODST\Color_Variants\MA_ODST_Vest_co.paa", //ODST_Bracer_Right
            "MA_Armor\data\Vests\M52_ODST\Color_Variants\MA_ODST_Vest_co.paa", //ODST_Chest
            "MA_Armor\data\Vests\M52_ODST\Color_Variants\MA_ODST_Shoulders_co.paa", //ODST_Left
            "MA_Armor\data\Vests\M52_ODST\Color_Variants\MA_ODST_Shoulders_co.paa", //ODST_Right
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMLeft
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMRight
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //ChestPouch
            "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //LShoulderRadio
            "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //RShoulderRadio
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //StomachPouch
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMLeft
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMRight
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //TorsoPouch
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistBack
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGLeft
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGRight
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPLeft
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPRight
            "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //WaistRLeft
            "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //WaistRRight
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSLeft
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSRight
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //LegPouchL
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"  //LegPouchR
        };
        class ItemInfo: VestItem
		{
			uniformModel="MA_Armor\data\Vests\M52_ODST\M52_ODST_Vest.p3d";
			containerClass = "Supply60";
            vestType = "Rebreather";
            mass = 20;
            passThrough = 0.1;
            modelSides[] = {6};
            hiddenSelections[]=
            {
                "Camo1", //CQB Left
                "Camo2", //CQB Right
                "Camo3", //Marksman_Left
                "Camo4", //Marksman_Right
                "Camo5", //ODST_Bracer_Left
                "Camo6", //ODST_Bracer_Right
                "Camo7", //ODST_Chest
                "Camo8", //ODST_Left
                "Camo9", //ODST_Right
                "Camo10", //ChestPMLeft
                "Camo11", //ChestPMRight
                "Camo12", //ChestPouch
                "Camo13", //LShoulderRadio
                "Camo14", //RShoulderRadio
                "Camo15", //StomachPouch
                "Camo16", //TorsoPMLeft
                "Camo17", //TorsoPMRight
                "Camo18", //TorsoPouch
                "Camo19", //WaistBack
                "Camo20", //WaistGLeft
                "Camo21", //WaistGRight
                "Camo22", //WaistPLeft
                "Camo23", //WaistPRight
                "Camo24", //WaistRLeft
                "Camo25", //WaistRRight
                "Camo26", //WaistSLeft
                "Camo27", //WaistSRight
                "Camo28", //LegPouchL
                "Camo29", //LegPouchR
                "CQB_Left",
                "CQB_Right",
                "Marksman_Left",
                "Marksman_Right",
                //"ODST_Bracer_Left",
                //"ODST_Bracer_Right",
                //"ODST_Chest",
                "ODST_Left",
                "ODST_Right",
                "ChestPMLeft",
                "ChestPMRight",
                "ChestPouch",
                "LShoulderRadio",
                "RShoulderRadio",
                "StomachPouch",
                "TorsoPMLeft",
                "TorsoPMRight",
                "TorsoPouch",
                "WaistBack",
                "WaistGLeft",
                "WaistGRight",
                "WaistPLeft",
                "WaistPRight",
                "WaistRLeft",
                "WaistRRight",
                "WaistSLeft",
                "WaistSRight",
                "LegPouchL",
                "LegPouchR"
            };
			class HitpointsProtectionInfo
            {
                class Neck
				{
					hitpointName="HitNeck";
					armor=40;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=40;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=40;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=40;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=40;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=40;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=40;
					passThrough=0.1;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=40;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=40;
					passThrough=0.1;
                };
            };
		};
    };
};