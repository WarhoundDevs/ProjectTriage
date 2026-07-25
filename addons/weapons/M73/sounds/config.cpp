class CfgPatches
{
	class 22nd_M73_sounds
	{
		author="valkyrie";
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
	class 22nd_LMG_Closure_Soundshader;
	class 22nd_M73_Closure_SoundShader: 22nd_LMG_Closure_Soundshader
	{
		samples[]=
		{
			
			{
				"\z\22ndRDF\addons\weapons\M73\sounds\M73_Close.wss",
				1
			}
		};
		volume = 0; //remove or adjust value after closure is added

	};
	class 22nd_M73_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"\z\22ndRDF\addons\weapons\M73\sounds\M73_Close.wss",
				1
			}
		};
		volume=1;
		range=50;
		rangeCurve="closeShotCurve";
	};
	class 22nd_M73_midShot_SoundShader
	{
		samples[]=
		{
			
			{
				"\z\22ndRDF\addons\weapons\M73\sounds\M73_Close.wss",
				1
			}
		};
		volume=0.79432821;
		range=1800;
		rangeCurve[]=
		{
			{0,0.2},
			{50,1},
			{300,0},
			{1800,0}
		};
	};
	class 22nd_M73_distShot_SoundShader
	{
		samples[]=
		{
			
			{
				"\z\22ndRDF\addons\weapons\M73\sounds\M73_Close.wss",
				1
			}
		};
		volume=1;
		range=4000;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{300,1},
			{4000,1}
		};
	};
};
class cfgSoundSets
{
	class 22nd_lmg_SoundSet;
	class 22nd_M73_Shot_SoundSet: 22nd_lmg_SoundSet
	{
		soundShaders[]=
		{
			"22nd_M73_Closure_SoundShader",
			"22nd_M73_closeShot_SoundShader",
			"22nd_M73_midShot_SoundShader",
			"22nd_M73_distShot_SoundShader"
		};
		volumeFactor=1.1;
		frequencyRandomizer=1.1;
		frequencyFactor=0.94999999;
		frequencyRandomizermin=0.34999999;
		volumeCurve="22nd_weapons_basic_volumecurve";
		sound3DProcessingType="22nd_weapons_3dprocessor";
		distanceFilter="22nd_weapons_lowpass_filter";
		occlusionFactor=0.15000001;
		obstructionFactor=0.30000001;
		spatial=1;
		doppler=0;
		loop=0;
	};
};
class cfgMods
{
	author="Halligan";
	timepacked="1676756876";
};
