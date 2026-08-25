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
				"\z\22ndRDF\addons\weapons\M6G\sounds\M6G_Closure.wss",
				1
			}
		};
		volume = 1; //remove or adjust value after closure is added
	};
	class 22nd_M6G_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"\z\22ndRDF\addons\weapons\M6G\sounds\M6G_close.wss",
				1
			}
		};
		volume=1;
		range=50;
		rangeCurve[] = {{0,1},{50,0}};
	};
	class 22nd_M6G_midShot_SoundShader
	{
		samples[]=
		{
			
			{
				"\z\22ndRDF\addons\weapons\M6G\sounds\M6G_distant.wss",
				1
			}
		};
		volume=1;
		range = 3000;
        rangeCurve[] = { {0,0.2}, {50,1}, {300,0}, {3000,0} };
	};
	class 22nd_M6G_distShot_SoundShader
	{
		samples[]=
		{
			
			{
				"\z\22ndRDF\addons\weapons\M6G\sounds\M6G_far.wss",
				1
			}
		};
		volume=1;
		range=4000;
		rangeCurve[] = { {0,0}, {50,0}, {300,1}, {3000,1}, {4000,0}  };
	};
};
class cfgSoundSets
{
	class 22nd_dmr_SoundSet;
	class 22nd_M6G_Shot_SoundSet: 22nd_dmr_SoundSet
	{
		soundShaders[]=
		{
			"22nd_M6G_Closure_SoundShader",
			"22nd_M6G_closeShot_SoundShader",
			"22nd_M6G_midShot_SoundShader",
			"22nd_M6G_distShot_SoundShader"
		};
		volumeFactor=2;
		// frequencyRandomizer=1.1;
		// frequencyRandomizermin=0.34999999;
	};
};
