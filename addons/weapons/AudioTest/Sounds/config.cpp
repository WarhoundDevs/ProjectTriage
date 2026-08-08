
class CfgPatches
{
	class 22nd_AudioTester_sounds
	{
		author = "Valkyrie";
        addonRootClass = "22nd_weapons";
		requiredAddons[]=
		{
		    "cba_main",
			"A3_Data_F",
		    "A3_Weapons_F",
			"22nd_weapons"
		};
		units[]={};
		weapons[]={};
		requiredVersion = 0.1;
	};
};
//"22nd_Weapons\AudioTest\sounds\DC15p.wss",

class cfgSoundShaders 
{
	//###################################### SHOTS ######################################
	class 22nd_AudioTest_Closure_SoundShader
	{
		samples[] = {{"\z\22ndRDDF\addons\weapons\AudioTest\Sounds\AudioTest_Closure.wav",1}}; 
		volume = 0.5; 
		range = 3;
		rangeCurve[] = {{0,1},{3,0}};
	};
	class 22nd_AudioTest_closeShot_SoundShader
	{
		samples[] = {{"\z\22ndRDF\addons\weapons\AudioTest\Sounds\AudioTest_close.wav",1}};
		volume = 2; 
		range = 110;
		rangeCurve[] = {{0,1.25},{50,0.62},{110,0}};
	};
	class 22nd_AudioTest_midShot_SoundShader
	{
		samples[] = {{"\z\22ndRDF\addons\weapons\AudioTest\Sounds\AudioTest_distant.wav",1}};
		volume = 1;
		range = 1800;
		rangeCurve[] = {{0,0},{50,0.5},{300,0.9},{1800,0}};
	};
	class 22nd_AudioTest_distShot_SoundShader
	{
		samples[] = {{"\z\22ndRDF\addons\weapons\AudioTest\Sounds\AudioTest_far.wav",1}};
		volume = 1.0;
		range = 6000;
		rangeCurve[] = {{0,0},{50,0},{300,1},{6000,0}};
	};
	//###################################SUPPRESSED#############################################
	class 22nd_Suppressed_AudioTest_closeShot_SoundShader
	{
		samples[] = {{"\z\22ndRDF\addons\weapons\AudioTest\Sounds\AudioTest_S_close.wav",1}};
		volume = 1.5;
		range = 300;
		rangeCurve[] = {{0,1},{300,0}};
	};
	class 22nd_Suppressed_AudioTest_distShot_SoundShader
	{
		samples[] = {{"\z\22ndRDF\addons\weapons\AudioTest\Sounds\AudioTest_S_distant.wav",1}};
		volume = 1;
		range = 1000;
		rangeCurve[] = {{0,0},{50,0},{300,1},{1000,1}};
	};

	//###################################### TAILS ######################################
	class 22nd_AudioTest_tailInterior_SoundShader
	{
		samples[] = {{"\z\22ndRDF\addons\weapons\AudioTest\Sounds\RifleTailIIndoor.wss",1}};
		volume = "interior";
		range = 500;
		limitation = 0;
	};
	class 22nd_AudioTest_tailTrees_SoundShader
	{
		samples[] = {{"\z\22ndRDF\addons\weapons\AudioTest\Sounds\RifleTailWoods.wss",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 1800;
		limitation = 1;
	};
	class 22nd_AudioTest_tailForest_SoundShader
	{
		samples[] = {{"\z\22ndRDF\addons\weapons\AudioTest\Sounds\RifleTailWoods.wss",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 1800;
		limitation = 1;
	};
	class 22nd_AudioTest_tailMeadows_SoundShader
	{
		samples[] = {{"\z\22ndRDF\addons\weapons\AudioTest\Sounds\RifleOurdoors.wss",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 1800;
		limitation = 1;
	};
	class 22nd_AudioTest_tailHouses_SoundShader
	{
		samples[] = {{"\z\22ndRDF\addons\weapons\AudioTest\Sounds\RifleTailHouse.wss",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 1200;
		limitation = 1;
	};
};

class cfgSoundSets //on more info about soundSets look at the [[Arma_3_Sound:_cfgSoundSets|relevant wiki page]]
{  
	class 22nd_rifle_SoundSet;
	class 22nd_AudioTest_Shot_SoundSet: 22nd_rifle_SoundSet
	{
		soundShaders[] = {"22nd_AudioTest_Closure_SoundShader","22nd_AudioTest_closeShot_SoundShader","22nd_AudioTest_midShot_SoundShader","22nd_AudioTest_distShot_SoundShader"};
		// volumefactor=1.25;
		// volumerandomizer=0;
		// frequencyrandomizer=0.35;
		// frequencyrandomizermin=0.1;
		// volumeCurve = "22nd_weapons_basic_volumecurve";
		// sound3DProcessingType = "22nd_weapons_3dprocessor";
		// distanceFilter = "22nd_weapons_lowpass_filter";
		// occlusionfactor=0.35;
		// obstructionfactor=0.35;
		// spatial=1;
		// doppler=0;
		// loop=0;
		// soundshaderslimit=3;
	};
	class 22nd_Suppressed_AudioTest_Shot_Soundset
	{
		soundShaders[] = {"22nd_Suppressed_AudioTest_closeShot_SoundShader","22nd_Suppressed_AudioTest_distShot_SoundShader","22nd_AudioTest_tailInterior_SoundShader"};
		volumeFactor = 1;
		frequencyRandomizer = 0.3;
		frequencyRandomizermin = 0.05;
		volumeCurve = "22nd_weapons_basic_volumecurve";
		sound3DProcessingType = "22nd_weapons_3dprocessor";
		distanceFilter = "22nd_weapons_lowpass_filter";
		occlusionFactor=0.25;
        obstructionFactor=0.30000001;
		spatial = 1;
		doppler = 0;
	
		loop = 0;
	};
	class 22nd_AudioTest_Tail_SoundSet
	{
		soundShaders[] = {"22nd_AudioTest_tailTrees_SoundShader","22nd_AudioTest_tailForest_SoundShader","22nd_AudioTest_tailMeadows_SoundShader","22nd_AudioTest_tailHouses_SoundShader"};
		volumeFactor = 1.1;
		volumeCurve = "22nd_wpn_vl_sin";
		frequencyRandomizer = 1;
		sound3DProcessingType = "22nd_weapons_tails_3dprocessor";
		distanceFilter = "22nd_wpn_echo_lp_dia";
		spatial = 1;
		occlusionFactor=0.25;
        obstructionFactor=0;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 2;
	};
};

class Cfgsound3dprocessors
{
	class 22nd_weapons_3dprocessor
    {
       type="panner";
		innerrange=1;
		range=350;
		rangecurve[]=
		{
			{0,1},
			{0.0074999998,1},
			{0.0099999998,0.85000002},
			{0.050000001,0.28},
			{0.1,0.22},
			{0.2,0.12},
			{1,0}
		};
    };

    class 22nd_weapons_tails_3dprocessor
    {
        type="panner";
		innerrange=1;
		range=1000;
		rangecurve[]=
		{
			{0,1},
			{25,0.60000002},
			{60,0.22},
			{100,0.15000001},
			{1000,0}
		};
    };

	class 22nd_weapons_silenced_3dprocessor
	{
		type="panner";
		innerrange=1;
		range=500;
		rangecurve[]=
		{
			{0,1},
			{0.0074999998,1},
			{0.0099999998,0.85000002},
			{0.050000001,0.25999999},
			{0.1,0.18000001},
			{0.2,0.1},
			{1,0}
		};
	};


	class jsrs_2025_weapons_silenced_tails_3dprocessor
	{
		type="panner";
		innerrange=2;
		range=50;
		rangecurve[]=
		{
			{0,1},
			{20,0.38},
			{50,0}
		};
	};	
};

class cfgdistancefilters
{
   class 22nd_weapons_lowpass_filter
    {
       type="lowpassfilter";
		mincutofffrequency=800;
		qfactor=0.80000001;
		innerrange=100;
		range=5000;
		powerfactor=30;
    };
    class 22nd_wpn_echo_lp_dia
    {
        type="lowpassfilter";
		mincutofffrequency=17000;
		qfactor=1;
		innerrange=20;
		range=250;
		powerfactor=45;
    };
};

class Cfgsoundcurves
{
	class 22nd_weapons_basic_volumecurve
    {
        points[]=
		{
			{0,1},
			{0.001,1},
			{0.1,0.72000003},
			{0.2,0.5},
			{0.30000001,0.38},
			{0.40000001,0.28},
			{0.5,0.28},
			{0.60000002,0.18000001},
			{0.69999999,0.12},
			{0.80000001,0.059999999},
			{1,0}
		};
    };
    class 22nd_wpn_vl_sin
    {
       points[]=
		{
			{0,1},
			{0.1,0.62},
			{0.2,0.40000001},
			{0.30000001,0.23999999},
			{0.40000001,0.14},
			{0.5,0.079999998},
			{0.60000002,0.035},
			{0.80000001,0.015},
			{1,0}
		};
    };
	class 22nd_basic_processorcurve
    {
        points[]=
		{
			{0,1},
			{0.1,0.98000002},
			{0.2,0.95999998},
			{0.30000001,0.88},
			{0.40000001,0.75999999},
			{0.5,0.62},
			{0.60000002,0.41999999},
			{0.69999999,0.25999999},
			{0.80000001,0.15000001},
			{0.89999998,0.050000001},
			{1,0}
		};
    };
    class 22nd_weapons_processorcurve
    {
        points[]=
		{
			{0,1},
			{0.015,0.44999999},
			{0.050000001,0.18000001},
			{1,0}
		};
    };
};
