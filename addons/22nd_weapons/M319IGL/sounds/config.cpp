class CfgPatches
{
	class ValkHalo_M319_sounds
	{
		author="Valkyrie";
		addonRootClass="ValkHalo_weapons";
		requiredAddons[]=
		{
			"A3_Data_F",
			"A3_Weapons_F",
			"ValkHalo_weapons_sound",
			"ValkHalo_weapons"
		};
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
	};
};

class cfgSoundShaders
{
	
	class ValkHalo_M319_closure_SoundShader
	{
		samples[]=
		{
			
			{
				"\addons\22nd_weapons\M319IGL\sounds\M319_closure.wav",
				1
			}
		};
		volume = 0; //remove or adjust value after closure is added
		
	};
	class ValkHalo_M319_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"\addons\22nd_weapons\M319IGL\sounds\M319_close.wav",
				1
			}
		};
		volume=1;
		range=100;
		rangeCurve[] = {{0,1.2},{50,0.62},{110,0}};
	};
	class ValkHalo_M319_midShot_SoundShader
	{
		samples[]=
		{
			
			{
				"\addons\22nd_weapons\M319IGL\sounds\M319_distant.wav",
				1
			}
		};
		volume=1.4;
		range=1800;
		rangeCurve[] = {{0,0},{50,0.6},{300,1.2},{2400,0}};
	};
	class ValkHalo_M319_distShot_SoundShader
	{
		samples[]=
		{
			
			{
				"\addons\22nd_weapons\M319IGL\sounds\M319_far.wav",
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
	class ValkHalo_Grenadelauncher_SoundSet;
	class ValkHalo_M319_Shot_SoundSet: ValkHalo_Grenadelauncher_SoundSet
	{
		soundShaders[]=
		{
			"ValkHalo_M319_closure_SoundShader",
			"ValkHalo_M319_closeShot_SoundShader",
			"ValkHalo_M319_midShot_SoundShader",
			"ValkHalo_M319_distShot_SoundShader"
		};
		// volumeFactor=1;
		// frequencyRandomizer=0.5;
		// frequencyRandomizermin=0.2;
	};
};
