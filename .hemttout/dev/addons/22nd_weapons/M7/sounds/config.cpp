class CfgPatches
{
	class 22nd_M7_sounds
	{
		author="Valkyrie";
		addonRootClass="22nd_weapons";
		requiredAddons[]=
		{
			"A3_Data_F",
			"A3_Weapons_F",
			"22nd_weapons_sound",
			"22nd_weapons"
		};
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
	};
};
class cfgSoundShaders
{
	class 22nd_Closure_Soundshader ;
	class 22nd_M7_Closure_SoundShader: 22nd_Closure_Soundshader 
	{
		samples[]=
		{
			
			{
				"addons\22nd_weapons\M7\sounds\M7_Closure.wss",
				1
			}
		};
		volume = 0; //remove or adjust value after closure is added
		range = 15;
		rangeCurve[] = {{0, 1},{5, 0.6},{15, 0}};	
		limitation = 1;	
	};
	class 22nd_M7_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"addons\22nd_weapons\M7\sounds\M7_Close.wav",
				1
			}
		};
		volume=1;
		range=50;
		rangeCurve[] = {{0,1.2},{50,0.62},{110,0}};
	};
	class 22nd_M7_midShot_SoundShader
	{
		samples[]=
		{
			
			{
				"\addons\22nd_weapons\M7\sounds\M7_distant.wav",
				1
			}
		};
		volume=1;
		range=1800;
		rangeCurve[] = {{0,0},{50,0.6},{300,1.2},{2400,0}};
	};
	class 22nd_M7_distShot_SoundShader
	{
		samples[]=
		{
			
			{
				"\addons\22nd_weapons\M7\sounds\M7_far.wav",
				1
			}
		};
		volume=1;
		range=4000;
		rangeCurve[] = {{0,0},{50,0},{300,0.6},{2400,1.2},{6000,0}};
	};
	class 22nd_Suppressed_M7_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"\addons\22nd_weapons\M7\Sounds\M7_close_Suppressed.wss",
				1
			}
		};
		volume=1.5;
		range=300;
		rangeCurve[]=
		{
			{0,1},
			{300,0}
		};
	};
	class 22nd_Suppressed_M7_closure_SoundShader
	{
		samples[]=
		{
			
			{
				"\addons\22nd_weapons\M7\Sounds\M7_close_Suppressed.wss",
				1
			}
		};
		volume=0.44668359;
		range=5;
	};
	class 22nd_Suppressed_M7_distShot_SoundShader
	{
		samples[]=
		{
			
			{
				"\addons\22nd_weapons\M7\Sounds\M7_close_Suppressed.wss",
				1
			}
		};
		volume=0.80000001;
		range=1000;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{300,1},
			{1000,1}
		};
	};
};
class cfgSoundSets
{
	class 22nd_smg_SoundSet;
	class 22nd_SDsmg_SoundSet;
	class 22nd_M7_Shot_SoundSet: 22nd_smg_SoundSet
	{
		soundShaders[]=
		{
			"22nd_M7_Closure_SoundShader",
			"22nd_M7_closeShot_SoundShader",
			"22nd_M7_midShot_SoundShader",
			"22nd_M7_distShot_SoundShader"
		};
		volumeFactor=1;
		frequencyRandomizer=0.5;
		frequencyRandomizermin=0.2;
		volumeCurve="22nd_weapons_basic_volumecurve";
		sound3DProcessingType="22nd_weapons_3dprocessor";
		distanceFilter="22nd_weapons_lowpass_filter";
		occlusionFactor=0.25;
		obstructionFactor=0.30000001;
		spatial=1;
		doppler=0;
		loop=0;
	};
	class 22nd_Suppressed_M7_Shot_Soundset: 22nd_SDsmg_SoundSet
	{
		soundShaders[]=
		{
			"22nd_Suppressed_M7_closure_SoundShader",
			"22nd_Suppressed_M7_closeShot_SoundShader",
			"22nd_Suppressed_M7_distShot_SoundShader",
			"22nd_MA5C_tailInterior_SoundShader"
		};
		volumeFactor=1;
		frequencyRandomizer=0.60000002;
		frequencyRandomizermin=0.25;
		volumeCurve="22nd_weapons_basic_volumecurve";
		sound3DProcessingType="22nd_weapons_3dprocessor";
		distanceFilter="22nd_weapons_lowpass_filter";
		occlusionFactor=0.25;
		obstructionFactor=0.30000001;
		spatial=1;
		doppler=0;
		loop=0;
	};
};
