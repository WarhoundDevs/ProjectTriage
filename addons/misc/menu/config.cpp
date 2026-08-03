class CfgPatches
{
	class 22nd_LoadingScreens
	{
		author="22nd Mod Team";
		addonRootClass="22nd_misc";
		requiredAddons[]=
		{
			"22nd_misc"
		};
		skipWhenMissingDependencies = 1;
		requiredVersion = 0.5;
		units[]={};
		weapons[]={};
	};
};
class RscPicture
{
};
class RscStandardDisplay
{
};
class RscActiveText
{
};
class RscActivePicture: RscActiveText
{
};
class RscText
{
};
class RscTitles
{
	class SplashNoise
	{
		class BackgroundNoise: RscPicture
		{
			text="\1st_meu_main\_textures\LoadingScreens\MEUPIC1.paa";
		};
	};
	class brokenhud: SplashNoise
	{
		duration=100000000;
		class BackgroundNoise: RscPicture
		{
			text="\1st_meu_main\_textures\Misc\crackedhud.paa";
		};
	};
};
class RscDisplayMain: RscStandardDisplay
{
	class Controls
	{
		delete Spotlight1;
		delete Spotlight2;
		delete Spotlight3;
		delete BackgroundSpotlightRight;
		delete BackgroundSpotlightLeft;
		delete BackgroundSpotlight;
		class Logo: RscActivePicture
		{
			text="\22nd_misc\menu\_textures\LoadingScreens\Insignia.paa";
		};
	};
	enableDisplay=0;
	delete Spotlight;
	class RscActiveText;
	class RscActivePicture: RscActiveText
	{
		style=48;
		color[]={1,1,1,0.5};
		colorActive[]={1,1,1,1};
	};
	class controlsBackground
	{
		class LoadingPic: RscPicture
		{
			idc=1;
			x="SafeZoneX";
			y="SafeZoneY";
			h="SafeZoneH";
			w="SafeZoneW";
			text="\22nd_misc\menu\textures\LoadingScreens\mainMenu.jpg";
		};
	};
};
class RscDisplayLoading
{
	class Variants
	{
		class LoadingOne
		{
			idd=250;
			class controls
			{
				class LoadingPic: RscPicture
				{
					idc=1;
					x="SafeZoneX";
					y="SafeZoneY";
					h="SafeZoneH";
					w="SafeZoneW";
					text="\22nd_misc\menu\textures\LoadingScreens\startImage.jpg";
				};
			};
		};
		class Loading_West1: LoadingOne
		{
			class controls
			{
				class LoadingPic
				{
					idc=1;
					x="SafeZoneX";
					y="SafeZoneY";
					h="SafeZoneH";
					w="SafeZoneW";
					text="\22nd_misc\menu\textures\LoadingScreens\mainMenu.jpg";
				};
			};
		};
		class Loading_West2: LoadingOne
		{
			class controls
			{
				class LoadingPic
				{
					idc=1;
					x="SafeZoneX";
					y="SafeZoneY";
					h="SafeZoneH";
					w="SafeZoneW";
					text="\22nd_misc\menu\textures\LoadingScreens\mainMenu.jpg";
				};
			};
		};
		class Loading_East1: LoadingOne
		{
			class controls
			{
				class LoadingPic
				{
					idc=1;
					x="SafeZoneX";
					y="SafeZoneY";
					h="SafeZoneH";
					w="SafeZoneW";
					text="\22nd_misc\menu\textures\LoadingScreens\mainMenu.jpg";
				};
			};
		};
		class Loading_East2: LoadingOne
		{
			class controls
			{
				class LoadingPic
				{
					idc=1;
					x="SafeZoneX";
					y="SafeZoneY";
					h="SafeZoneH";
					w="SafeZoneW";
					text="\22nd_misc\menu\textures\LoadingScreens\mainMenu.jpg";
				};
			};
		};
	};
};
class RscDisplayLoadMission: RscStandardDisplay
{
	class controlsBackground
	{
		class LoadingPic: RscPicture
		{
			idc=1;
			x="SafeZoneX";
			y="SafeZoneY";
			h="SafeZoneH";
			w="SafeZoneW";
			text="\22nd_misc\menu\textures\LoadingScreens\mainMenu.jpg";
		};
	};
};
class RscDisplayStart: RscStandardDisplay
{
	class controls
	{
		class LoadingPic: RscPicture
		{
			idc=1;
			x="SafeZoneX";
			y="SafeZoneY";
			h="SafeZoneH";
			w="SafeZoneW";
			text="\22nd_misc\menu\textures\LoadingScreens\startImage.jpg";
		};
	};
};
class RscDisplayMPPlayers;
class RscDisplayClientWait: RscDisplayMPPlayers
{
	class LoadingPic: RscPicture
	{
		idc=1;
		x="SafeZoneX";
		y="SafeZoneY";
		h="SafeZoneH";
		w="SafeZoneW";
		text="\22nd_misc\menu\textures\LoadingScreens\mainMenu.jpg";
	};
};
class RscDisplayClient: RscStandardDisplay
{
	class controlsBackground
	{
		class LoadingPic: RscPicture
		{
			idc=1;
			x="SafeZoneX";
			y="SafeZoneY";
			h="SafeZoneH";
			w="SafeZoneW";
			text="\22nd_misc\menu\textures\LoadingScreens\mainMenu.jpg";
		};
	};
};
