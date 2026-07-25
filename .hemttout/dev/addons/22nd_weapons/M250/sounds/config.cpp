class CfgPatches
{
	class ValkHalo_M250_sounds
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
	class ValkHalo_HMG_Closure_Soundshader;
	class ValkHalo_M250_closure_SoundShader: ValkHalo_HMG_Closure_Soundshader
	{
		samples[]=
		{
			
			{
				"\addons\22nd_weapons\M250\sounds\M250_closure.wav",
				1
			}
		};
		volume = 0; //remove or adjust value after closure is added
		
	};
	class ValkHalo_M250_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"\addons\22nd_weapons\M250\sounds\M250_close.wav",
				1
			}
		};
		volume=4;
		range=100;
		rangeCurve[] = {{0,1.2},{50,0.62},{110,0}};
	};
	class ValkHalo_M250_midShot_SoundShader
	{
		samples[]=
		{
			
			{
				"\addons\22nd_weapons\M250\sounds\M250_distant.wav",
				1
			}
		};
		volume=1.4;
		range=1800;
		rangeCurve[] = {{0,0},{50,0.6},{300,1.2},{2400,0}};
	};
	class ValkHalo_M250_distShot_SoundShader
	{
		samples[]=
		{
			
			{
				"\addons\22nd_weapons\M250\sounds\M250_far.wav",
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
	class ValkHalo_hmg_SoundSet;
	class ValkHalo_M250_Shot_SoundSet: ValkHalo_hmg_SoundSet
	{
		soundShaders[]=
		{
			"ValkHalo_M250_closure_SoundShader",
			"ValkHalo_M250_closeShot_SoundShader",
			"ValkHalo_M250_midShot_SoundShader",
			"ValkHalo_M250_distShot_SoundShader"
		};
		// volumeFactor=1;
		// frequencyRandomizer=0.5;
		// frequencyRandomizermin=0.2;
	};
};
