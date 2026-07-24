class CfgPatches
{
    class 22nd_Medical_ace
    {
        author="22nd Mod Team";
        requiredAddons[]=
        {
            "22nd_items",
            "OPTRE_ACE_Compat_Medical"
        };
        requiredVersion=0.1;
        units[]=
        {
            "22nd_Medigel_Item",
            "22nd_Biofoam_Item"
        };
        weapons[]=
        {
            "22nd_Medigel",
            "22nd_Biofoam"
        };
    };
};


class CfgWeapons
{
    class OPTRE_Medigel;
    class OPTRE_Biofoam;
    class CBA_MiscItem_ItemInfo;
    class 22nd_Medigel: OPTRE_Medigel
    {
        scope=2;
        displayName="[22nd] Medigel";
        picture="";
        model="\OPTRE_Weapons\items\Medigel.p3d";
        class ItemInfo: CBA_MiscItem_ItemInfo
        {
            mass=3;
        };
    };
    class 22nd_Biofoam: OPTRE_Biofoam
    {
        scope=2;
        displayName="[22nd] Biofoam";
        picture="";
        model="\OPTRE_Weapons\items\Biofoam.p3d";
        class ItemInfo: CBA_MiscItem_ItemInfo
        {
            mass=2;
        };
    };
};
class CfgVehicles
{
    class OPTRE_MedigelItem;
    class OPTRE_BiofoamItem;
    class 22nd_Medigel_Item: OPTRE_MedigelItem
    {
        scope=2;
        scopeCUrator=2;
        scopeArsenal=2;
        displayName="[22nd] Medigel Item";
        author="Article 2 Studios edits by Raven and 22nd Mod Team";
        vehicleClass="Items";
        class TransportItems
        {
            class _xx_22nd_Medigel
            {
                name="22nd_Medigel";
                count=1;
            };
        };
        mass=3;
    };
};


