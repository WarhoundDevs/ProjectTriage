class CfgPatches
{
	class 22nd_M393_sounds
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
	class 22nd_HMG_Closure_Soundshader;
	class 22nd_M393_closure_SoundShader: 22nd_HMG_Closure_Soundshader
	{
		samples[]=
		{
			
			{
				"\z\22ndRDF\addons\weapons\M393EMR\sounds\M393_closure.wav",
				1
			}
		};
		volume = 0; //remove or adjust value after closure is added
		
	};
	class 22nd_M393_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"\z\22ndRDF\addons\weapons\M393EMR\sounds\M393_close.wav",
				1
			}
		};
		volume=4;
		range=100;
		rangeCurve[] = {{0,1.2},{50,0.62},{110,0}};
	};
	class 22nd_M393_midShot_SoundShader
	{
		samples[]=
		{
			
			{
				"\z\22ndRDF\addons\weapons\M393EMR\sounds\M393_distant.wav",
				1
			}
		};
		volume=1.4;
		range=1800;
		rangeCurve[] = {{0,0},{50,0.6},{300,1.2},{2400,0}};
	};
	class 22nd_M393_distShot_SoundShader
	{
		samples[]=
		{
			
			{
				"\z\22ndRDF\addons\weapons\M393EMR\sounds\M393_far.wav",
				1
			}
		};
		volume=1.4;
		range=4000;
		rangeCurve[] = {{0,0},{50,0},{300,0.6},{2400,1.2},{6000,0}};
	};
};


class cfgSoundSets
{
	class 22nd_dmr_SoundSet;
	class 22nd_M393_Shot_SoundSet: 22nd_dmr_SoundSet
	{
		soundShaders[]=
		{
			"22nd_M393_closure_SoundShader",
			"22nd_M393_closeShot_SoundShader",
			"22nd_M393_midShot_SoundShader",
			"22nd_M393_distShot_SoundShader"
		};
		// volumeFactor=1;
		// frequencyRandomizer=0.5;
		// frequencyRandomizermin=0.2;
	};
};
