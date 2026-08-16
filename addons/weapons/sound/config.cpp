
class CfgPatches
{
	class 22nd_weapons_sound //much credit goes to SigSound
	{
		author = "22nd Mod Team";
        addonRootClass = "22nd_weapons";
		requiredAddons[]=
		{
		    "cba_main",
			"A3_Data_F",
		    "A3_Weapons_F",
			"A3_Sounds_F",
			"A3_Sounds_F_exp",
			"A3_Weapons_f_exp",
			"22nd_weapons"
		};
		units[]={};
		weapons[]={};
		requiredVersion = 0.1;
	};
};

class CfgSoundSets 
{	
	class 22nd_Shot_SoundSet 
	{
		occlusionFactor = 0.35;
		obstructionFactor = 0.01;
		stereoRadius = 50;
		spatial = 1;
		doppler = 0;
		loop = 0;
		frequencyRandomizer = 0.25;
		frequencyRandomizerMin = 0.01;		
		soundShadersLimit = 2;
		sound3DProcessingType = "22nd_basic_3dproc";
		distanceFilter = "22nd_defaultDistanceFilter";	
	};	

	class 22nd_ShotSD_SoundSet : 22nd_Shot_SoundSet 
	{
		occlusionFactor = 0.35;
		obstructionFactor = 0.78;		
		distanceFilter = "22nd_SDDistanceFilter";
	};
	
	
	class 22nd_pistol_SoundSet : 22nd_Shot_SoundSet 
	{
		volumeFactor = 1;
		volumeCurve = "22nd_Pistol_soundCurve";	
	};	
	class 22nd_smg_SoundSet : 22nd_Shot_SoundSet 
	{
		volumeFactor = 1;
		volumeCurve = "22nd_SMG_soundCurve";	
	};
	
	class 22nd_rifle_SoundSet : 22nd_Shot_SoundSet 
	{
		volumeFactor = 1;
		volumeCurve = "22nd_Rifle_soundCurve";	
	};	
	class 22nd_shotgun_SoundSet : 22nd_Shot_SoundSet 
	{
		volumeFactor = 1;
		volumeCurve = "22nd_Shotgun_soundCurve";
	};
	
	class 22nd_dmr_SoundSet : 22nd_Shot_SoundSet 
	{
		volumeFactor = 1;
		volumeCurve = "22nd_DMR_soundCurve";	
	};
	class 22nd_sniper_SoundSet : 22nd_Shot_SoundSet 
	{
		volumeFactor = 1;
		volumeCurve = "22nd_Sniper_soundCurve";	
	};
	
	class 22nd_lmg_SoundSet : 22nd_Shot_SoundSet 
	{
		volumeFactor = 1;
		volumeCurve = "22nd_LMG_soundCurve";
	};		
	
	class 22nd_hmg_SoundSet : 22nd_Shot_SoundSet 
	{
		volumeFactor = 1;
		volumeCurve = "22nd_HMG_soundCurve";	
		frequencyRandomizer = 0;
		frequencyRandomizerMin = 1;			
	};		
	class 22nd_hmg_minigun_SoundSet : 22nd_Shot_SoundSet 
	{
		volumeFactor = 1;		
		frequencyRandomizer = 0;
		frequencyRandomizerMin = 1;		
		volumeCurve = "22nd_HMG_Minigun_soundCurve";
		soundShadersLimit = 6;		
	};			
	class 22nd_hmg_coax_SoundSet : 22nd_Shot_SoundSet 
	{
		volumeFactor = 1;
		volumeCurve = "22nd_HMG_soundCurve";
		frequencyRandomizer = 0.5;		
		frequencyRandomizerMin = 0.5;			
	};	
	
	class 22nd_launcher_SoundSet : 22nd_Shot_SoundSet 
	{
		volumeFactor = 1;
		volumeCurve = "22nd_Launcher_soundCurve";	
	};		
	class 22nd_Mortar_SoundSet : 22nd_Shot_SoundSet 
	{
		volumeFactor = 1;
		volumeCurve = "22nd_Launcher_soundCurve";	
	};	
	class 22nd_Grenadelauncher_SoundSet : 22nd_Shot_SoundSet 
	{
		volumeFactor = 4;
		volumeCurve = "22nd_GrenadeLauncher_soundCurve";
	};
	
//SD Shots	
	class 22nd_SDpistol_SoundSet : 22nd_ShotSD_SoundSet
	{
		volumeFactor = 0.81;
		volumeCurve = "22nd_Pistol_soundCurve";	
	};	
	class 22nd_SDsmg_SoundSet : 22nd_ShotSD_SoundSet 
	{
		volumeFactor = 0.81;
		volumeCurve = "22nd_SMG_soundCurve";	
	};
	
	class 22nd_SDrifle_SoundSet : 22nd_ShotSD_SoundSet 
	{
		volumeFactor = 0.72;
		volumeCurve = "22nd_Rifle_soundCurve";	
	};	

	class 22nd_SDdmr_SoundSet : 22nd_ShotSD_SoundSet 
	{
		volumeFactor = 0.76;
		volumeCurve = "22nd_DMR_soundCurve";	
	};
	class 22nd_SDsniper_SoundSet : 22nd_ShotSD_SoundSet 
	{
		volumeFactor = 0.78;
		volumeCurve = "22nd_Sniper_soundCurve";	
	};		
	class 22nd_SDshotgun_SoundSet : 22nd_ShotSD_SoundSet 
	{
		volumeFactor = 0.8;
		volumeCurve = "22nd_Shotgun_soundCurve";	
	};		
	
	class 22nd_SDlmg_SoundSet : 22nd_ShotSD_SoundSet 
	{
		volumeFactor = 0.71;
		volumeCurve = "22nd_LMG_soundCurve";
	};	



	
	
	

	



};



class CfgSoundCurves
{
	class 22nd_Pistol_soundCurve
	{
 		points[] = {
		{1, 1},{0.22, 0.91},{0.53, 0.67},{1, 0}};
	};	
	class 22nd_SMG_soundCurve
	{
 		points[] = {{1, 1},{0.23, 0.91},{0.57, 0.67},{1, 0}};
	};
	
	class 22nd_Rifle_soundCurve
	{
 		points[] = {{1, 1},{0.27, 0.91},{0.68, 0.68},{1, 0}};
	};	
		
	class 22nd_RifleAlt_soundCurve
	{
 		points[] = {{1, 1},{0.12, 0.99},{1, 0}};
	};	
	
	class 22nd_LMG_soundCurve
	{
 		points[] = {{1, 1},{0.28, 0.91},{0.3, 0.98},{0.7, 0.69},{1, 0}};
	};

	class 22nd_HMG_soundCurve
	{
 		points[] = {{1, 1},{0.61, 0.91},{0.83, 0.78},{1, 0}};
	};	

	class 22nd_HMG_Minigun_soundCurve
	{
 		points[] = {{1, 1},{0.5, 0.99},{0.61, 0.96},{0.80, 0.83},{1, 0}};
	};

	class 22nd_DMR_soundCurve
	{
 		points[] = {{1, 1},{0.39, 0.91},{0.57, 0.93},{1, 0}};
	};

	class 22nd_BoltactionRifle_soundCurve
	{
 		points[] = {{1, 1},{0.40, 0.91},{0.57, 0.93},{1, 0}};
	};

	class 22nd_Shotgun_soundCurve
	{
 		points[] = {{1, 1},{0.40, 0.91},{0.57, 0.93},{1, 0}};
	};

	class 22nd_Sniper_soundCurve
	{
 		points[] = {{1, 1},{0.40, 0.91},{0.57, 0.93},{1, 0}};
	};

	class 22nd_SniperHeavy_soundCurve
	{
 		points[] = {{1, 1},{0.50, 0.91},{0.74, 0.90},{1, 0}};
	};

	class 22nd_Launcher_soundCurve
	{
 		points[] = {{1, 1},{0.45, 0.91},{0.74, 0.90},{1, 0}};
	};

	class 22nd_GrenadeLauncher_soundCurve
	{
 		points[] = {{1, 1},{0.25, 0.91},{0.38, 0.93},{1, 0}};
	};
	
	class 22nd_CannonSmall_soundCurve
	{
 		points[] = {{1, 1},{0.30, 0.91},{0.85, 0.70},{1, 0}};
	};	
	class 22nd_tail_soundCurve
	{
 		points[] = {{0, 1},{0.2, 1},{0.25, 1},{0.3, 0.99},{0.4, 0.98},{0.45, 0.90},{0.5, 0.87},{0.71, 0.81},{0.8, 0.73},{0.88, 0.41},{0.90, 0.37},{0.91, 0.32},{0.93, 0.23},{0.96, 0.10},{0.98, 0.04},{0.99, 0.01},{1, 0}};
	};
};

class cfgDistanceFilters
{
	class 22nd_defaultDistanceFilter
	{
		type = "lowPassFilter";
		minCutoffFrequency = 280;
		qFactor = 1;
		innerRange = 210;
		range = 2800;
		powerFactor = 30;
	};			

	class 22nd_SDDistanceFilter
	{
		type = "lowPassFilter";
		minCutoffFrequency = 650;
		qFactor = 1;
		innerRange = 70;
		range = 900;
		powerFactor = 18;
	};
};

class CfgSound3DProcessors 
{
	class 22nd_basic_3dproc 
	{
		type = "panner";
		innerRange = 5;
		range = 40;
		rangeCurve = "LinearCurve";		
	};	

	class 22nd_tail_3dproc {
		type = "panner";
		innerRange = 3;
		range = 2200;
		rangeCurve[] = {{0, 1}, {1000, 0.97}, {2199, 0.01}, {2800, 0}};
	};	
};
