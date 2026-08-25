
class CfgPatches
{
    class 22nd_weapons_AceExtd
    {
        addonRootClass = "22nd_weapons";
        author = "22nd Mod Team";

        requiredVersion = 0.1;

        requiredAddons[] =
        {
			"cba_main",
            "A3_Data_F",
            "A3_Weapons_F",
            "OPTRE_Weapons_AR",
			"OPTRE_Weapons",
            "22nd_weapons"
        };
		//Add any weapons utilising this system above^ + Optre base required addons to be safe
        units[] = {};
        weapons[] ={};
    };
};


class XtdGearModels
{
	class CfgWeapons
	{


		class 22nd_ACE_weapon_MA37 //"Model"
		{
			label="[22nd] MA37 (Rifleman)";
			author="22nd Mod Team";
			options[]=
			{
				"variant",
				"ugl"
			};
			class variant //Top Row  "Option"
			{
				alwaysSelectable=1;
				label="Variant";
				values[]= 
				{//Available labels
					"MA37",
					"MA37ICWS"
				};
				class MA37 //The options themselves  "Label"
				{
					label="MA37";
					image= "\OPTRE_weapons\ar\icons\ma40_icon.paa";
				};
				class MA37ICWS
				{
					label="MA37 ICWS";
					image="\OPTRE_weapons\ar\icons\ma32b_icon.paa";
				};
			};
			class ugl
			{
				alwaysSelectable=1;
				label="UGL (Grenadier)";
				values[]=
				{
					"None",
					"M301"
				};
				class None
				{
					label="None"; //Displayed text
					image="#(rgb,8,8,3)color(0.1,0.1,0.1,1)"; 
				};
				class M301
				{
					label="M301"; //Diisplayed text
					image="#(rgb,8,8,3)color(0.52,0.19,0,1)";
				};
			};
		};


		class 22nd_ACE_weapon_MG //"Model"
		{
			label="[22nd] Machine Guns";
			author="22nd Mod Team";
			options[]=
			{
				"Armaments"
			};
			class Armaments //Top Row  "Option"
			{
				alwaysSelectable=1;
				label="Armory";
				values[]= 
				{//Available labels
					"M247A1",
					"M73",
					"M250"
				};
				class M247A1 //The options themselves  "Label"
				{
					label="M247A1 LMG";
					image= "\OPTRE_Weapons_MG\m247a1\data\icon\M247A1.paa";
				};
				class M73
				{
					label="M73 LSW";
					image="\OPTRE_Weapons_MG\m73\data\icons\M73_1.paa";
				};
				class M250
				{
					label="M250 HMG";
					image="\OPTRE_Weapons_MG\m247a1\data\icon\M250.paa";
				};
			};
		};

		class 22nd_ACE_weapon_DMR //"Model"
		{
			label="[22nd] DMRs / Snipers";
			author="22nd Mod Team";
			options[]=
			{
				"Armaments"
			};
			class Armaments //Top Row  "Option"
			{
				alwaysSelectable=1;
				label="Armory";
				values[]= 
				{//Available labels
					"M392",
					"M393",
					"SRS99C"
				};
				class M392 //The options themselves  "Label"
				{
					label="M392 DMR";
					image= "\OPTRE_Weapons\DMR\icons\M392_CA.paa";
				};
				class M393
				{
					label="M393 EMR";
					image="\OPTRE_Weapons\DMR\icons\M395_Icon.paa";
				};
				class SRS99C
				{
					label="SRS99C";
					image="\OPTRE_weapons\sniper\icons\sniper2.paa";
				};
			};
		};

		class 22nd_ACE_weapon_M319 //"Model"
		{
			label="[22nd] M319 IGL /N";
			author="22nd Mod Team";
			options[]=
			{
				"Armaments"
			};
			class Armaments //Top Row  "Option"
			{
				alwaysSelectable=1;
				label="Armory";
				values[]= 
				{//Available labels
					"M319",
					"M319N"
				};
				class M319 //The options themselves  "Label"
				{
					label="M319 IGL";
					image= "\OPTRE_Weapons\gl\icons\m319_icon.paa";
				};
				class M319N
				{
					label="M319N IGL";
					image="\OPTRE_Weapons\gl\icons\m319n_icon.paa";
				};
			};
		};
	};
};

// image="#(rgb,8,8,3)color(0.7,0.7,0.7,1)"; RGB (Telling game its RGB), 8,8,3 ( Texture dimensions and color channels (3) ). Color RGB values, with alpha on end

class XtdGearInfos
{
	class CfgWeapons
	{
		class 22nd_MA37
		{ 
			model = "22nd_ACE_weapon_MA37"; 
			variant="MA37"; // is MA37
			ugl="None"; // does not have GL
		};
		class 22nd_MA37GL: 22nd_MA37
		{
			variant="MA37"; // is MA37
			ugl="M301"; // has GL
		};
		class 22nd_MA37ICWS: 22nd_MA37
		{
			variant="MA37ICWS"; // is MA37 ICWS
			ugl="None"; // does not have GL
		};
		class 22nd_MA37GL_ICWS: 22nd_MA37ICWS
		{
			variant="MA37ICWS"; // is MA37 ICWS
			ugl="M301"; // has GL
		};


		class 22nd_M247A1
		{ 
			model = "22nd_ACE_weapon_MG"; 
			Armaments="M247A1"; 
		};
		class 22nd_M73
		{
		    model = "22nd_ACE_weapon_MG"; 
			Armaments="M73"; 
		};

		class 22nd_M250
		{
		    model = "22nd_ACE_weapon_MG"; 
			Armaments="M250"; 
		};

		class 22nd_M392
		{
			model = "22nd_ACE_weapon_DMR"; 
			Armaments="M392"; 
		};

		class 22nd_M393
		{
			model = "22nd_ACE_weapon_DMR"; 
			Armaments="M393"; 
		};

		class 22nd_SRS99C
		{
		    model = "22nd_ACE_weapon_DMR"; 
			Armaments="SRS99C"; 
		};

		class 22nd_M319
		{
		    model = "22nd_ACE_weapon_M319"; 
			Armaments="M319"; 
		};

		class 22nd_M319N
		{
		    model = "22nd_ACE_weapon_M319"; 
			Armaments="M319N"; 
		};

	};
};
