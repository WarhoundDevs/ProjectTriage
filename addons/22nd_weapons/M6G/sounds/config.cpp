class CfgPatches
{
	class 22ndS_M6G_sounds
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
	class 22nd_M6G_closure_SoundShader: 22nd_Closure_Soundshader 
	{
		samples[]=
		{
			
			{
				"\addons\22nd_weapons\M6G\sounds\M6G_Closure.wav",
				1
			}
		};
		volume = 0; //remove or adjust value after closure is added
	};
	class 22nd_M6G_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"\addons\22nd_weapons\M6G\sounds\M6G_Close.wav",
				1
			}
		};
		volume=2;
		range=50;
		rangeCurve="closeShotCurve";
	};
	class 22nd_M6G_midShot_SoundShader
	{
		samples[]=
		{
			
			{
				"\addons\22nd_weapons\M6G\sounds\M6G_Close.wav",
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
	class 22nd_M6G_distShot_SoundShader
	{
		samples[]=
		{
			
			{
				"\addons\22nd_weapons\M6G\sounds\M6G_Close.wav",
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
	class 22nd_pistol_SoundSet;
	class 22nd_M6G_Shot_SoundSet: 22nd_pistol_SoundSet
	{
		soundShaders[]=
		{
			"22nd_M6G_Closure_SoundShader",
			"22nd_M6G_closeShot_SoundShader",
			"22nd_M6G_midShot_SoundShader",
			"22nd_M6G_distShot_SoundShader"
		};
		// volumeFactor=1;
		// frequencyRandomizer=1.1;
		// frequencyRandomizermin=0.34999999;
	};
};
