class CfgPatches 
{
    class 22nd_uniforms_helmets_NVGs
    {
        units[] = {};
        weapons[] = 
        {
       
        "22nd_Infantry_Nightvision"
        };
        requiredVersion = 1.0;
        requiredAddons[] = 
        {
            "A3_Weapons_F",
            "ace_nightvision"
        }; // Reference any required addons
    };
};


class NVGoggles;



class CfgWeapons
{


  class 22nd_Infantry_Nightvision: NVGoggles 
  {
      scope = 1;
      modelOptics = "";
      author = "Warhound Mod Team";
      descriptionShort = "Biocular nightvision goggles";
      displayName = "NV Goggles (Bio)";
      // ace_nightvision_border = ""; // Edge mask for different tube configurations. Three types: mono, bino and quad.
      ace_nightvision_bluRadius = 0.13; // Edge blur radius.
      ace_nightvision_colorPreset[] = {0.0, {0.0, 0.0, 0.0, 0.0}, {1.1, 0.8, 1.9, 0.9}, {1, 1, 6, 0.0}}; 
      ace_nightvision_eyeCups = 1; // Does have eyecups.
      ace_nightvision_generation = 4; // Generation 4. Affects image quality.
  };
};

