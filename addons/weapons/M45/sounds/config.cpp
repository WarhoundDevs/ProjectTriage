class CfgPatches
{
	class 22nd_M45_sounds
	{
		author="Valkyrie";
		addonRootClass="22nd_weapons";
		requiredAddons[]=
		{
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
	class 22nd_Sniper_Closure_Soundshader;
	class 22nd_M45_Closure_SoundShader: 22nd_Sniper_Closure_Soundshader
	{
		samples[]=
		{
			
			{
				"\z\22ndRDF\addons\weapons\M45\sounds\M45_closure.wss",
				1
			}
		};
		volume = 0; //remove or adjust value after closure is added
	};
	class 22nd_M45_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"\z\22ndRDF\addons\weapons\M45\sounds\M45_close.wss",
				1
			}
		};
		volume=1.3;
		range=50;
		rangeCurve[] = {{0,1},{50,0}};
	};
	class 22nd_M45_midShot_SoundShader
	{
		samples[]=
		{
			
			{
				"\z\22ndRDF\addons\weapons\M45\sounds\M45_distant.wss",
				1
			}
		};
		volume=1.3;
		range = 3000;
        rangeCurve[] = { {0,0.2}, {50,1}, {300,0}, {3000,0} };
	};
	class 22nd_M45_distShot_SoundShader
	{
		samples[]=
		{
			
			{
				"\z\22ndRDF\addons\weapons\M45\sounds\M45_far.wss",
				1
			}
		};
		volume=1.5;
		range=4000;
		rangeCurve[] = { {0,0}, {50,0}, {300,1}, {3000,1}, {4000,0}  };
	};
	class 22nd_Suppressed_M45_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"\z\22ndRDF\addons\weapons\M45\sounds\M45_Close_Suppressed.wss",
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
	
	class 22nd_Suppressed_M45_distShot_SoundShader
	{
		samples[]=
		{
			
			{
				"\z\22ndRDF\addons\weapons\M45\sounds\M45_Close_Suppressed.wss",
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
	class 22nd_shotgun_SoundSet;
	class 22nd_M45_Shot_SoundSet: 22nd_shotgun_SoundSet
	{
		soundShaders[]=
		{
			"22nd_M45_Closure_SoundShader",
			"22nd_M45_closeShot_SoundShader",
			"22nd_M45_midShot_SoundShader",
			"22nd_M45_distShot_SoundShader"
		};
		volumeFactor=5.9;
		// frequencyRandomizer=1.1;
		// frequencyRandomizermin=0.1;
	};
	class 22nd_Suppressed_M45_Shot_Soundset
	{
		soundShaders[]=
		{
			"22nd_Suppressed_M45_closure_SoundShader",
			"22nd_Suppressed_M45_closeShot_SoundShader",
			"22nd_Suppressed_M45_distShot_SoundShader",
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
class cfgMods
{
	author="Halligan";
	timepacked="1676756876";
};
