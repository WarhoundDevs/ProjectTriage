class CfgPatches
{
	class 22nd_M250_sounds
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
	class 22nd_M250_closure_SoundShader: 22nd_HMG_Closure_Soundshader
	{
		samples[]=
		{
			
			{
				"\z\22ndRDF\addons\weapons\M250\sounds\M250_closure.wss",
				1
			}
		};
		volume = 0; //remove or adjust value after closure is added
		
	};
	class 22nd_M250_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"\z\22ndRDF\addons\weapons\M250\sounds\M250_close.wss",
				1
			}
		};
		volume=1;
		range=50;
		rangeCurve[] = {{0,1},{50,0}};
	};
	class 22nd_M250_midShot_SoundShader
	{
		samples[]=
		{
			
			{
				"\z\22ndRDF\addons\weapons\M250\sounds\M250_distant.wss",
				1
			}
		};
		volume=1;
		range = 3000;
        rangeCurve[] = { {0,0.2}, {50,1}, {300,0}, {3000,0} };
	};
	class 22nd_M250_distShot_SoundShader
	{
		samples[]=
		{
			
			{
				"\z\22ndRDF\addons\weapons\M250\sounds\M250_far.wss",
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
	class 22nd_hmg_SoundSet;
	class 22nd_M250_Shot_SoundSet: 22nd_hmg_SoundSet
	{
		soundShaders[]=
		{
			"22nd_M250_closure_SoundShader",
			"22nd_M250_closeShot_SoundShader",
			"22nd_M250_midShot_SoundShader",
			"22nd_M250_distShot_SoundShader"
		};
		// volumeFactor=1;
		// frequencyRandomizer=0.5;
		// frequencyRandomizermin=0.2;
	};
};
