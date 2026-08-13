
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

class cfgSoundShaders 
{
	

    class 22nd_Closure_Soundshader 
	{
		volume = 0.42;
		range = 15;
		rangeCurve[] = {{0, 1},{5, 0.6},{15, 0}};	
		limitation = 1;	
	};
	
	class 22nd_LMG_Closure_Soundshader {
		volume = 0.42;
		range = 25;
		rangeCurve[] = {{0, 1},{10, 0.4},{20, 0}};	
		limitation = 1;	
	};		
	class 22nd_DMR_Closure_Soundshader {
		volume = 0.46;
		range = 25;
		rangeCurve[] = {{0, 1},{10, 0.6},{25, 0}};	
		limitation = 1;	
	};	
	class 22nd_Sniper_Closure_Soundshader {
		volume = 0.5;
		range = 25;
		rangeCurve[] = {{0, 1},{10, 0.6},{25, 0}};	
		limitation = 1;	
	};
	class 22nd_HMG_Closure_Soundshader {
		volume = 0.43;
		range = 100;
		rangeCurve[] = {{0, 1},{20, 0.7},{35, 0},{100, 0}};	
		limitation = 1;	
	};	

	// Rifle Tail

	class 22nd_rifle_tailInterior_close_SoundShader
	{
		samples[] = {{"\z\22ndRDF\addons\weapons\sound\Sounds\Rifle\rifle_tailInterior_close.wav",1}};
		volume = "1.68 * interior";
		rangeCurve[] = { {0,1}, {25,0} };
		range = 25;
		limitable = 1;
	};
	
	class 22nd_rifle_tailInterior_distant_SoundShader
	{
		samples[] = {{"\z\22ndRDF\addons\weapons\sound\Sounds\Rifle\rifle_tailInterior_distant.wav",1}};
		volume = "1.68 * interior";
		rangeCurve[] = { {0,0}, {25,1}, {100,0}, {300,0}  };
		range = 300;
		limitable = 1;
	};

	class 22nd_rifle_tailInterior_far_SoundShader
	{
		samples[] = {{"\z\22ndRDF\addons\weapons\sound\Sounds\Rifle\rifle_tailInterior_far.wav",1}};
		volume = "1.68 * interior";
		rangeCurve[] = { {0,0}, {25,0}, {100,1}, {300,0}   };
		range = 300;
		limitable = 1;
	};

	// Houses / Urban
	class 22nd_rifle_tailHouses_close_SoundShader
	{
		samples[] = {{"\z\22ndRDF\addons\weapons\sound\Sounds\Rifle\rifle_tailUrban_close.wav",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 50;
		rangeCurve[] = { {0,1}, {50,0} };
		limitable = 1;
	};

	class 22nd_rifle_tailHouses_distant_SoundShader
	{
		samples[] = {{"\z\22ndRDF\addons\weapons\sound\Sounds\Rifle\rifle_tailUrban_distant.wav",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 1000;
        rangeCurve[] = { {0,0.1}, {50,1}, {300,0}, {1000,0} };
		limitable = 1;
	};

	class 22nd_rifle_tailHouses_far_SoundShader
	{
		samples[] = {{"\z\22ndRDF\addons\weapons\sound\Sounds\Rifle\rifle_tailUrban_far.wav",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 1000;
        rangeCurve[] = { {0,0.1}, {50,0}, {300,1}, {1000,0} };
		limitable = 1;
	};


	// Trees
	class 22nd_rifle_tailTrees_close_SoundShader
	{
		samples[] = {{"\z\22ndRDF\addons\weapons\sound\Sounds\Rifle\rifle_tailForest_close.wav",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 50;
		rangeCurve[] = { {0,1}, {50,0} };
		limitable = 1;
	};

	class 22nd_rifle_tailTrees_distant_SoundShader
	{
		samples[] = {{"\z\22ndRDF\addons\weapons\sound\Sounds\Rifle\rifle_tailForest_distant.wav",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 1000;
        rangeCurve[] = { {0,0.1}, {50,1}, {300,0}, {1000,0} };
		limitable = 1;
	};

	class 22nd_rifle_tailTrees_far_SoundShader
	{
		samples[] = {{"\z\22ndRDF\addons\weapons\sound\Sounds\Rifle\rifle_tailForest_far.wav",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 1000;
        rangeCurve[] = { {0,0.1}, {50,0}, {300,1}, {1000,0} };
		limitable = 1;
	};


    // forest
	class 22nd_rifle_tailForest_close_SoundShader
	{
		samples[] = {{"\z\22ndRDF\addons\weapons\sound\Sounds\Rifle\rifle_tailForest_close.wav",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 50;
		rangeCurve[] = { {0,1}, {50,0} };
		limitable = 1;
	};

	class 22nd_rifle_tailForest_distant_SoundShader
	{
		samples[] = {{"\z\22ndRDF\addons\weapons\sound\Sounds\Rifle\rifle_tailForest_distant.wav",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 1000;
        rangeCurve[] = { {0,0.1}, {50,1}, {300,0}, {1000,0} };
		limitable = 1;
	};

	class 22nd_rifle_tailForest_far_SoundShader
	{
		samples[] = {{"\z\22ndRDF\addons\weapons\sound\Sounds\Rifle\rifle_tailForest_far.wav",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 1000;
        rangeCurve[] = { {0,0.1}, {50,0}, {300,1}, {1000,0} };
		limitable = 1;
	};


	//meadows
	class 22nd_rifle_tailMeadows_close_SoundShader
	{
		samples[] = {{"\z\22ndRDF\addons\weapons\sound\Sounds\Rifle\rifle_tailMeadows_close.wav",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 50;
		rangeCurve[] = { {0,2}, {50,0} };
		limitable = 1;
	};

	class 22nd_rifle_tailMeadows_distant_SoundShader
	{
		samples[] = {{"\z\22ndRDF\addons\weapons\sound\Sounds\Rifle\rifle_tailMeadows_distant.wav",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 1000;
        rangeCurve[] = { {0,0.1}, {50,1}, {300,0}, {1000,0} };
		limitable = 1;
	};

	class 22nd_rifle_tailMeadows_far_SoundShader
	{
		samples[] = {{"\z\22ndRDF\addons\weapons\sound\Sounds\Rifle\rifle_tailMeadows_far.wav",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 1000;
        rangeCurve[] = { {0,0.1}, {50,0}, {300,1}, {1000,0} };
		limitable = 1;
	};





	//MG
	class 22nd_MG_tailInterior_close_SoundShader
	{
		samples[] = {{"\z\22ndRDF\addons\weapons\sound\Sounds\MG\MG_tailInterior_close.wav",1}};
		volume = "1.68 * interior";
		rangeCurve[] = { {0,1}, {25,0} };
		range = 25;
		limitable = 1;
	};
	
	class 22nd_MG_tailInterior_distant_SoundShader
	{
		samples[] = {{"\z\22ndRDF\addons\weapons\sound\Sounds\MG\MG_tailInterior_distant.wav",1}};
		volume = "1.68 * interior";
		rangeCurve[] = { {0,0}, {25,1}, {100,0}, {300,0}  };
		range = 300;
		limitable = 1;
	};

	class 22nd_MG_tailInterior_far_SoundShader
	{
		samples[] = {{"\z\22ndRDF\addons\weapons\sound\Sounds\MG\MG_tailInterior_far.wav",1}};
		volume = "1.68 * interior";
		rangeCurve[] = { {0,0}, {25,0}, {100,1}, {300,0}   };
		range = 300;
		limitable = 1;
	};

	// Houses / Urban
	class 22nd_MG_tailHouses_close_SoundShader
	{
		samples[] = {{"\z\22ndRDF\addons\weapons\sound\Sounds\MG\MG_tailUrban_close.wav",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 50;
		rangeCurve[] = { {0,1}, {50,0} };
		limitable = 1;
	};

	class 22nd_MG_tailHouses_distant_SoundShader
	{
		samples[] = {{"\z\22ndRDF\addons\weapons\sound\Sounds\MG\MG_tailUrban_distant.wav",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 1000;
        rangeCurve[] = { {0,0.1}, {50,1}, {300,0}, {1000,0} };
		limitable = 1;
	};

	class 22nd_MG_tailHouses_far_SoundShader
	{
		samples[] = {{"\z\22ndRDF\addons\weapons\sound\Sounds\MG\MG_tailUrban_far.wav",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 1000;
        rangeCurve[] = { {0,0.1}, {50,0}, {300,1}, {1000,0} };
		limitable = 1;
	};


	// Trees
	class 22nd_MG_tailTrees_close_SoundShader
	{
		samples[] = {{"\z\22ndRDF\addons\weapons\sound\Sounds\MG\MG_tailForest_close.wav",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 50;
		rangeCurve[] = { {0,1}, {50,0} };
		limitable = 1;
	};

	class 22nd_MG_tailTrees_distant_SoundShader
	{
		samples[] = {{"\z\22ndRDF\addons\weapons\sound\Sounds\MG\MG_tailForest_distant.wav",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 1000;
        rangeCurve[] = { {0,0.1}, {50,1}, {300,0}, {1000,0} };
		limitable = 1;
	};

	class 22nd_MG_tailTrees_far_SoundShader
	{
		samples[] = {{"\z\22ndRDF\addons\weapons\sound\Sounds\MG\MG_tailForest_far.wav",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 1000;
        rangeCurve[] = { {0,0.1}, {50,0}, {300,1}, {1000,0} };
		limitable = 1;
	};


    // forest
	class 22nd_MG_tailForest_close_SoundShader
	{
		samples[] = {{"\z\22ndRDF\addons\weapons\sound\Sounds\MG\MG_tailForest_close.wav",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 50;
		rangeCurve[] = { {0,1}, {50,0} };
		limitable = 1;
	};

	class 22nd_MG_tailForest_distant_SoundShader
	{
		samples[] = {{"\z\22ndRDF\addons\weapons\sound\Sounds\MG\MG_tailForest_distant.wav",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 1000;
        rangeCurve[] = { {0,0.1}, {50,1}, {300,0}, {1000,0} };
		limitable = 1;
	};

	class 22nd_MG_tailForest_far_SoundShader
	{
		samples[] = {{"\z\22ndRDF\addons\weapons\sound\Sounds\MG\MG_tailForest_far.wav",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 1000;
        rangeCurve[] = { {0,0.1}, {50,0}, {300,1}, {1000,0} };
		limitable = 1;
	};


	//meadows
	class 22nd_MG_tailMeadows_close_SoundShader
	{
		samples[] = {{"\z\22ndRDF\addons\weapons\sound\Sounds\MG\MG_tailMeadows_close.wav",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 50;
		rangeCurve[] = { {0,1}, {50,0} };
		limitable = 1;
	};

	class 22nd_MG_tailMeadows_distant_SoundShader
	{
		samples[] = {{"\z\22ndRDF\addons\weapons\sound\Sounds\MG\MG_tailMeadows_distant.wav",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 1000;
        rangeCurve[] = { {0,0.1}, {50,1}, {300,0}, {1000,0} };
		limitable = 1;
	};

	class 22nd_MG_tailMeadows_far_SoundShader
	{
		samples[] = {{"\z\22ndRDF\addons\weapons\sound\Sounds\MG\MG_tailMeadows_far.wav",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 1000;
        rangeCurve[] = { {0,0.1}, {50,0}, {300,1}, {1000,0} };
		limitable = 1;
	};





	//Shotgun
	class 22nd_Shotgun_tailInterior_close_SoundShader
	{
		samples[] = {{"\z\22ndRDF\addons\weapons\sound\Sounds\Shotgun\Shotgun_tailInterior_close.wav",1}};
		volume = "1.68 * interior";
		rangeCurve[] = { {0,1}, {25,0} };
		range = 25;
		limitable = 1;
	};
	
	class 22nd_Shotgun_tailInterior_distant_SoundShader
	{
		samples[] = {{"\z\22ndRDF\addons\weapons\sound\Sounds\Shotgun\Shotgun_tailInterior_distant.wav",1}};
		volume = "1.68 * interior";
		rangeCurve[] = { {0,0}, {25,1}, {100,0}, {300,0}  };
		range = 300;
		limitable = 1;
	};

	class 22nd_Shotgun_tailInterior_far_SoundShader
	{
		samples[] = {{"\z\22ndRDF\addons\weapons\sound\Sounds\Shotgun\Shotgun_tailInterior_far.wav",1}};
		volume = "1.68 * interior";
		rangeCurve[] = { {0,0}, {25,0}, {100,1}, {300,0}   };
		range = 300;
		limitable = 1;
	};

	// Houses / Urban
	class 22nd_Shotgun_tailHouses_close_SoundShader
	{
		samples[] = {{"\z\22ndRDF\addons\weapons\sound\Sounds\Shotgun\Shotgun_tailUrban_close.wav",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 50;
		rangeCurve[] = { {0,1}, {50,0} };
		limitable = 1;
	};

	class 22nd_Shotgun_tailHouses_distant_SoundShader
	{
		samples[] = {{"\z\22ndRDF\addons\weapons\sound\Sounds\Shotgun\Shotgun_tailUrban_distant.wav",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 1000;
        rangeCurve[] = { {0,0.1}, {50,1}, {300,0}, {1000,0} };
		limitable = 1;
	};

	class 22nd_Shotgun_tailHouses_far_SoundShader
	{
		samples[] = {{"\z\22ndRDF\addons\weapons\sound\Sounds\Shotgun\Shotgun_tailUrban_far.wav",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 1000;
        rangeCurve[] = { {0,0.1}, {50,0}, {300,1}, {1000,0} };
		limitable = 1;
	};


	// Trees
	class 22nd_Shotgun_tailTrees_close_SoundShader
	{
		samples[] = {{"\z\22ndRDF\addons\weapons\sound\Sounds\Shotgun\Shotgun_tailForest_close.wav",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 50;
		rangeCurve[] = { {0,1}, {50,0} };
		limitable = 1;
	};

	class 22nd_Shotgun_tailTrees_distant_SoundShader
	{
		samples[] = {{"\z\22ndRDF\addons\weapons\sound\Sounds\Shotgun\Shotgun_tailForest_distant.wav",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 1000;
        rangeCurve[] = { {0,0.1}, {50,1}, {300,0}, {1000,0} };
		limitable = 1;
	};

	class 22nd_Shotgun_tailTrees_far_SoundShader
	{
		samples[] = {{"\z\22ndRDF\addons\weapons\sound\Sounds\Shotgun\Shotgun_tailForest_far.wav",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 1000;
        rangeCurve[] = { {0,0.1}, {50,0}, {300,1}, {1000,0} };
		limitable = 1;
	};


    // forest
	class 22nd_Shotgun_tailForest_close_SoundShader
	{
		samples[] = {{"\z\22ndRDF\addons\weapons\sound\Sounds\Shotgun\Shotgun_tailForest_close.wav",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 50;
		rangeCurve[] = { {0,1}, {50,0} };
		limitable = 1;
	};

	class 22nd_Shotgun_tailForest_distant_SoundShader
	{
		samples[] = {{"\z\22ndRDF\addons\weapons\sound\Sounds\Shotgun\Shotgun_tailForest_distant.wav",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 1000;
        rangeCurve[] = { {0,0.1}, {50,1}, {300,0}, {1000,0} };
		limitable = 1;
	};

	class 22nd_Shotgun_tailForest_far_SoundShader
	{
		samples[] = {{"\z\22ndRDF\addons\weapons\sound\Sounds\Shotgun\Shotgun_tailForest_far.wav",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 1000;
        rangeCurve[] = { {0,0.1}, {50,0}, {300,1}, {1000,0} };
		limitable = 1;
	};


	//meadows
	class 22nd_Shotgun_tailMeadows_close_SoundShader
	{
		samples[] = {{"\z\22ndRDF\addons\weapons\sound\Sounds\Shotgun\Shotgun_tailMeadows_close.wav",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 50;
		rangeCurve[] = { {0,1}, {50,0} };
		limitable = 1;
	};

	class 22nd_Shotgun_tailMeadows_distant_SoundShader
	{
		samples[] = {{"\z\22ndRDF\addons\weapons\sound\Sounds\Shotgun\Shotgun_tailMeadows_distant.wav",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 1000;
        rangeCurve[] = { {0,0.1}, {50,1}, {300,0}, {1000,0} };
		limitable = 1;
	};

	class 22nd_Shotgun_tailMeadows_far_SoundShader
	{
		samples[] = {{"\z\22ndRDF\addons\weapons\sound\Sounds\Shotgun\Shotgun_tailMeadows_far.wav",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 1000;
        rangeCurve[] = { {0,0.1}, {50,0}, {300,1}, {1000,0} };
		limitable = 1;
	};

	


	///SD///

	class 22nd_sdRifle_tailInterior_SoundShader
	{
		volume = "1.71 * interior";		
		range = 150;
		rangeCurve[] = {{0, 1}, {5, 1}, {110, 0}};		
		limitable = 1;	
	};
	class 22nd_sdRifle_tailExterior_SoundShader
	{
		samples[] = {{"\z\22ndRDF\addons\weapons\sound\Sounds\RifleOurdoors.wss",1}};
		volume = "0.85 * (1-(interior))";
		range = 100;
		limitation = 1;
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


	//Tails

	class 22nd_tail_SoundSet 
	{
		soundShaders[] = 
		{  
			"22nd_rifle_tailInterior_close_SoundShader",
			"22nd_rifle_tailInterior_distant_SoundShader",
			"22nd_rifle_tailInterior_far_SoundShader",

			"22nd_rifle_tailHouses_close_SoundShader",
			"22nd_rifle_tailHouses_distant_SoundShader",
			"22nd_rifle_tailHouses_far_SoundShader",

			"22nd_rifle_tailTrees_close_SoundShader",
			"22nd_rifle_tailTrees_distant_SoundShader",
			"22nd_rifle_tailTrees_far_SoundShader",

			"22nd_rifle_tailForest_close_SoundShader",
			"22nd_rifle_tailForest_distant_SoundShader",
			"22nd_rifle_tailForest_far_SoundShader",

			"22nd_rifle_tailMeadows_close_SoundShader",
			"22nd_rifle_tailMeadows_distant_SoundShader",
			"22nd_rifle_tailMeadows_far_SoundShader",
		};
		volumeFactor = 2;
		volumeCurve = "22nd_tail_soundCurve";
		stereoStartDistance = 0;
		stereoRadius = 15;
		occlusionFactor = 0.45;
		obstructionFactor = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 0;
		frequencyRandomizer = 0.25;
		soundShadersLimit = 2;
		sound3DProcessingType = "22nd_tail_3dproc";
		distanceFilter = "22nd_defaultDistanceFilter";		
	};
	

	class 22nd_tail_MG_SoundSet 
	{
		soundShaders[] = 
		{  
			"22nd_MG_tailInterior_close_SoundShader",
			"22nd_MG_tailInterior_distant_SoundShader",
			"22nd_MG_tailInterior_far_SoundShader",

			"22nd_MG_tailHouses_close_SoundShader",
			"22nd_MG_tailHouses_distant_SoundShader",
			"22nd_MG_tailHouses_far_SoundShader",

			"22nd_MG_tailTrees_close_SoundShader",
			"22nd_MG_tailTrees_distant_SoundShader",
			"22nd_MG_tailTrees_far_SoundShader",

			"22nd_MG_tailForest_close_SoundShader",
			"22nd_MG_tailForest_distant_SoundShader",
			"22nd_MG_tailForest_far_SoundShader",

			"22nd_MG_tailMeadows_close_SoundShader",
			"22nd_MG_tailMeadows_distant_SoundShader",
			"22nd_MG_tailMeadows_far_SoundShader",
		};
		volumeFactor =1.25;
		volumeCurve = "22nd_tail_soundCurve";
		stereoStartDistance = 0;
		stereoRadius = 15;
		occlusionFactor = 0.45;
		obstructionFactor = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 0;
		frequencyRandomizer = 0.25;
		soundShadersLimit = 2;
		sound3DProcessingType = "22nd_tail_3dproc";
		distanceFilter = "22nd_defaultDistanceFilter";		
	};	
	
	class 22nd_tail_Shotgun_SoundSet 
	{
		soundShaders[] = 
		{  
			"22nd_Shotgun_tailInterior_close_SoundShader",
			"22nd_Shotgun_tailInterior_distant_SoundShader",
			"22nd_Shotgun_tailInterior_far_SoundShader",

			"22nd_Shotgun_tailHouses_close_SoundShader",
			"22nd_Shotgun_tailHouses_distant_SoundShader",
			"22nd_Shotgun_tailHouses_far_SoundShader",

			"22nd_Shotgun_tailTrees_close_SoundShader",
			"22nd_Shotgun_tailTrees_distant_SoundShader",
			"22nd_Shotgun_tailTrees_far_SoundShader",

			"22nd_Shotgun_tailForest_close_SoundShader",
			"22nd_Shotgun_tailForest_distant_SoundShader",
			"22nd_Shotgun_tailForest_far_SoundShader",

			"22nd_Shotgun_tailMeadows_close_SoundShader",
			"22nd_Shotgun_tailMeadows_distant_SoundShader",
			"22nd_Shotgun_tailMeadows_far_SoundShader",
		};
		volumeFactor =1;
		volumeCurve = "22nd_tail_soundCurve";
		stereoStartDistance = 0;
		stereoRadius = 15;
		occlusionFactor = 0.45;
		obstructionFactor = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 0;
		frequencyRandomizer = 0.25;
		soundShadersLimit = 2;
		sound3DProcessingType = "22nd_tail_3dproc";
		distanceFilter = "22nd_defaultDistanceFilter";		
	};		
	
	class 22nd_tail_small_SoundSet 
	{
		soundShaders[] = {"22nd_rifle_tailInterior_SoundShader","22nd_rifle_tailTrees_SoundShader","22nd_rifle_tailForest_SoundShader","22nd_rifle_tailMeadows_SoundShader","22nd_rifle_tailHouses_SoundShader"};
		volumeFactor = 0.45;
		volumeCurve = "22nd_tail_soundCurve";
		stereoStartDistance = 0;
		stereoRadius = 16;
		occlusionFactor = 0.45;
		obstructionFactor = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 0;
		frequencyRandomizer = 2;
		frequencyRandomizerMin = 0.95;
		soundShadersLimit = 4;
		sound3DProcessingType = "22nd_tail_3dproc";
		distanceFilter = "22nd_defaultDistanceFilter";			
	};			
	class 22nd_tail_Launcher_SoundSet 
	{
		soundShaders[] = {"22nd_rifle_tailInterior_SoundShader","22nd_rifle_tailTrees_SoundShader","22nd_rifle_tailForest_SoundShader","22nd_rifle_tailMeadows_SoundShader","22nd_rifle_tailHouses_SoundShader"};
		volumeFactor = 0.60;
		volumeCurve = "22nd_tail_soundCurve";
		stereoStartDistance = 0;
		stereoRadius = 20;
		occlusionFactor = 0.45;
		obstructionFactor = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 0;
		frequencyRandomizer = 2;
		frequencyRandomizerMin = 0.95;		
		soundShadersLimit = 4;
		sound3DProcessingType = "22nd_tail_3dproc";
		distanceFilter = "22nd_defaultDistanceFilter";				
	};	

	class 22ndSD_tail_SoundSet 
	{
		soundShaders[] = {"22nd_rifle_tailInterior_SoundShader","22nd_sdRifle_tailExterior_SoundShader","alkHalo_sdRifle_tailInterior_SoundShader"};
		volumeFactor = 0.54;
		volumeCurve = "22nd_tail_soundCurve";
		stereoStartDistance = 0;
		stereoRadius = 2;
		occlusionFactor = 0.66;
		obstructionFactor = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 0;
		frequencyRandomizer = 2;
		frequencyRandomizerMin = 0.95;
		soundShadersLimit = 4;
		sound3DProcessingType = "22nd_tail_3dproc";
		distanceFilter = "22nd_defaultDistanceFilter";				
	};	
	class 22nd_tail_sniper_SoundSet 
	{
		soundShaders[] = {"22nd_rifle_tailInterior_SoundShader","22nd_rifle_tailTrees_SoundShader","22nd_rifle_tailForest_SoundShader","22nd_rifle_tailMeadows_SoundShader","22nd_rifle_tailHouses_SoundShader"};
		volumeFactor = 0.74;
		volumeCurve = "22nd_tail_soundCurve";
		stereoStartDistance = 0;
		stereoRadius = 40;
		occlusionFactor = 0.45;
		obstructionFactor = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 0;
		frequencyRandomizer = 2;
		frequencyRandomizerMin = 0.95;		
		soundShadersLimit = 4;
		sound3DProcessingType = "22nd_tail_3dproc";
		distanceFilter = "22nd_defaultDistanceFilter";					
	};	
	class 22ndSD_tail_Sniper_SoundSet 
	{
		soundShaders[] = {"22nd_rifle_tailInterior_SoundShader","22nd_rifle_tailTrees_SoundShader","22nd_rifle_tailForest_SoundShader","22nd_rifle_tailMeadows_SoundShader","22nd_rifle_tailHouses_SoundShader"};
		volumeFactor = 0.62;
		volumeCurve = "22nd_tail_soundCurve";
		stereoStartDistance = 2;
		stereoRadius = 20;
		occlusionFactor = 0.56;
		obstructionFactor = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 0;
		frequencyRandomizer = 2;
		frequencyRandomizerMin = 0.95;
		soundShadersLimit = 4;
		sound3DProcessingType = "22nd_tail_3dproc";
		distanceFilter = "22nd_defaultDistanceFilter";		
					
	};		
	class 22nd_tail_DMR_SoundSet 
	{
		soundShaders[] = {"22nd_rifle_tailInterior_SoundShader","22nd_rifle_tailTrees_SoundShader","22nd_rifle_tailForest_SoundShader","22nd_rifle_tailMeadows_SoundShader","22nd_rifle_tailHouses_SoundShader"};
		volumeFactor = 0.96;
		volumeCurve = "22nd_tail_soundCurve";
		stereoStartDistance = 0;
		stereoRadius = 30;
		occlusionFactor = 0.45;
		obstructionFactor = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 0;
		frequencyRandomizer = 2;
		frequencyRandomizerMin = 0.95;		
		soundShadersLimit = 4;
		sound3DProcessingType = "22nd_tail_3dproc";
		distanceFilter = "22nd_defaultDistanceFilter";				
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
