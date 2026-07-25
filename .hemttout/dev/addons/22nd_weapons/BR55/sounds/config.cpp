class CfgPatches
{
	class 22nd_weapons_BR55_sounds
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
	
	class 22nd_Closure_Soundshader;
	class 22nd_BR55_Closure_SoundShader: 22nd_Closure_Soundshader
	{
		samples[]=
		{
			
			{
				"\addons\22nd_weapons\BR55\sounds\BR55_Close.wss",
				1
			}
		};
		volume = 0; //remove or adjust value after closure is added
	};

	class 22nd_BR55_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"\z\22ndValkyrie\addons\22nd_weapons\BR55\sounds\BR55_Close.wss",
				1
			}
		};
		volume=1;
		range=50;
		rangeCurve="closeShotCurve";
	};
	class 22nd_BR55_midShot_SoundShader
	{
		samples[]=
		{
			
			{
				"\z\22ndValkyrie\addons\22nd_weapons\BR55\sounds\BR55_Close.wss",
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
	class 22nd_BR55_distShot_SoundShader
	{
		samples[]=
		{
			
			{
				"\z\22ndValkyrie\addons\22nd_weapons\BR55\sounds\BR55_Close.wss",
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
	class 22nd_rifle_SoundSet;
	class 22nd_SDrifle_SoundSet;
	class 22nd_BR55_Shot_SoundSet: 22nd_rifle_SoundSet
	{
		soundShaders[]=
		{
			"22nd_BR55_Closure_SoundShader",
			"22nd_BR55_closeShot_SoundShader",
			"22nd_BR55_midShot_SoundShader",
			"22nd_BR55_distShot_SoundShader"
		};
		// volumeFactor=1;
		// frequencyRandomizer=1.1;
		// frequencyRandomizermin=0.34999999;
		
	};
};
