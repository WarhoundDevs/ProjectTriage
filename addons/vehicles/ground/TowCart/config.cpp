class CfgPatches
{
	class 22nd_vehicles_tow_cart
	{
		author="22nd Mod Team";
		addonRootClass="22nd_vehicles";
		requiredAddons[]=
		{
			"cba_main",
			"A3_Data_F",
			"OPTRE_Vehicles_Cart",
	
		};
		requiredVersion=0.1;
		units[]=
		{
			"22nd_Tow_Cart"
		};
	};
};

class CfgVehicles
{
    class OPTRE_cart;
    class 22nd_Tow_Cart: OPTRE_cart
    {
        scope=2;
        author="Astro";
        displayName="[22nd] Tow Cart";
        faction="22nd_Faction";
        editorCategory="22nd_Warhound_Company";
        editorSubcategory="22nd_Warhound_Company_Cars";
        editorPreview="z\22ndRDF\addons\vehicles\ground\TowCart\OPTRE_cart.jpg";
        side=1;
        hiddenSelections[]=
		{
			"camo1",
			"clan",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"z\22ndRDF\addons\vehicles\ground\TowCart\22nd_TowCart_Yellow.paa"
		};
    };
};