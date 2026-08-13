
class CfgPatches
{
	class 22nd_MA37_sounds
	{
		author = "22nd Mod Team";
        addonRootClass = "22nd_weapons";
		requiredAddons[]=
		{
		    "cba_main",
			"A3_Data_F",
		    "A3_Weapons_F",
			"22nd_weapons_sound",
			"22nd_weapons"
		};
		units[]={};
		weapons[]={};
		requiredVersion = 0.1;
	};
};
//"22nd_Weapons\MA37\sounds\DC15p.wss",

class cfgSoundShaders 
{
	//###################################### SHOTS ######################################
	class 22nd_Closure_Soundshader;
	class 22nd_MA37_Closure_SoundShader: 22nd_Closure_Soundshader 
	{
		samples[] = {{"\z\22ndRDF\addons\weapons\MA37\Sounds\MA37_Closure.wav",1}}; 
		//volume = 0; //remove or adjust value after closure is added
	};
	class 22nd_MA37_closeShot_SoundShader
	{
		samples[] = {{"\z\22ndRDF\addons\weapons\MA37\Sounds\MA37_Close.wav",1}};
		volume=1;
		range=50;
		rangeCurve[] = {{0,1},{50,0}};
	};
	class 22nd_MA37_midShot_SoundShader
	{
		samples[] = {{"\z\22ndRDF\addons\weapons\MA37\Sounds\MA37_distant.wav",1}};
		volume=1;
		range = 3000;
        rangeCurve[] = { {0,0.2}, {50,1}, {300,0}, {3000,0} };
	};
	class 22nd_MA37_distShot_SoundShader
	{
		samples[] = {{"\z\22ndRDF\addons\weapons\MA37\Sounds\MA37_far.wav",1}};
		volume=1;
		range=4000;
		rangeCurve[] = { {0,0}, {50,0}, {300,1}, {3000,1}, {4000,0}  };
	};
	//###################################SUPPRESSED#############################################
	class 22nd_Suppressed_MA37_closeShot_SoundShader
	{
		samples[] = {{"\z\22ndRDF\addons\weapons\MA37\Sounds\MA37_S_close.wss",1}};
		volume = 1.5;
		range = 300;
		rangeCurve[] = {{0,1},{300,0}};
	};
	class 22nd_Suppressed_MA37_distShot_SoundShader
	{
		samples[] = {{"\z\22ndRDF\addons\weapons\MA37\Sounds\MA37_S_distant.wss",1}};
		volume = 1;
		range = 1000;
		rangeCurve[] = {{0,0},{50,0},{300,1},{1000,1}};
	};
};

class cfgSoundSets //on more info about soundSets look at the [[Arma_3_Sound:_cfgSoundSets|relevant wiki page]]
{
	class 22nd_rifle_SoundSet;
	class 22nd_SDrifle_SoundSet;
	class 22nd_MA37_Shot_SoundSet: 22nd_rifle_SoundSet
	{
		soundShaders[] = {"22nd_MA37_Closure_SoundShader","22nd_MA37_closeShot_SoundShader","22nd_MA37_midShot_SoundShader","22nd_MA37_distShot_SoundShader"};
		volumefactor=3;
		// frequencyrandomizer=0.35;
		// frequencyrandomizermin=0.1;
	
	};

	class 22nd_Suppressed_MA37_Shot_Soundset: 22nd_SDrifle_SoundSet
	{
		soundShaders[] = {"22nd_Suppressed_MA37_closeShot_SoundShader","22nd_Suppressed_MA37_distShot_SoundShader","22nd_MA37_tailInterior_SoundShader"};
		volumeFactor = 2.5;
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
};
