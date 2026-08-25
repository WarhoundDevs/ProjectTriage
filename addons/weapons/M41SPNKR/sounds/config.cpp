class CfgPatches
{
	class 22nd_M41SPNKR_sounds
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
	
	class 22nd_M41SPNKR_closure_SoundShader
	{
		samples[]=
		{
			
			{
				"\z\22ndRDF\addons\weapons\M41SPNKR\sounds\M41SPNKR_closure.wss",
				1
			}
		};
		volume = 0; //remove or adjust value after closure is added
		
	};
	class 22nd_M41SPNKR_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"\z\22ndRDF\addons\weapons\M41SPNKR\sounds\M41SPNKR_close.wss",
				1
			}
		};
		volume=1;
		range=100;
		rangeCurve[] = {{0,1.2},{50,0} };
	};
	class 22nd_M41SPNKR_midShot_SoundShader
	{
		samples[]=
		{
			
			{
				"\z\22ndRDF\addons\weapons\M41SPNKR\sounds\M41SPNKR_distant.wss",
				1
			}
		};
		volume=1.4;
		range=1800;
		rangeCurve[] = {{0,0},{50,1},{300,0},{1800,0}};
	};
	class 22nd_M41SPNKR_distShot_SoundShader
	{
		samples[]=
		{
			
			{
				"\z\22ndRDF\addons\weapons\M41SPNKR\sounds\M41SPNKR_far.wss",
				1
			}
		};
		volume=1;
		range=4000;
		rangeCurve[] = {{0,0},{50,0},{300,1},{4000,0}};
	};
};


class cfgSoundSets
{
	class 22nd_Grenadelauncher_SoundSet;
	class 22nd_M41SPNKR_Shot_SoundSet: 22nd_Grenadelauncher_SoundSet
	{
		soundShaders[]=
		{
			"22nd_M41SPNKR_closure_SoundShader",
			"22nd_M41SPNKR_closeShot_SoundShader",
			"22nd_M41SPNKR_midShot_SoundShader",
			"22nd_M41SPNKR_distShot_SoundShader"
		};
		// volumeFactor=1;
		// frequencyRandomizer=0.5;
		// frequencyRandomizermin=0.2;
	};
};
