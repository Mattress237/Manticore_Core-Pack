class Manticore_Loadout_3CBVehicles_LandRoverHMG : UK3CB_BAF_LandRover_WMIK_HMG_Green_A
{
	displayName = "LandRover HMG";
	scope = 2;
	side = 1;
	faction = "Manticore_Faction";
	//crew = "";

#include "../Loadout/LoadoutBasic_HMG.hpp"
	hiddenSelectionsTextures[] =
	{
		"","","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_base_baf_green_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_hardtop_baf_green_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_special_baf_green_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_mg-spg9_green_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\jackal_adds_green_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_wmik_pannier_green_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_wmik_misc_green_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_weapons\data\l112a1_gpmg\data\l112a1_mount_woodland_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\camonet_nato_green_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\flag_unionJack.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\clear_empty.paa","","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\clear_empty.paa",""
	};
	class TextureSources

	{
		class bf_Green
		{
			displayName = "Green";
			textures[] =
			{
				"","","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_base_baf_green_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_hardtop_baf_green_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_special_baf_green_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_mg-spg9_green_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\jackal_adds_green_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_wmik_pannier_green_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_wmik_misc_green_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_weapons\data\l112a1_gpmg\data\l112a1_mount_woodland_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\camonet_nato_green_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\flag_unionJack.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\clear_empty.paa","","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\clear_empty.paa",""
			};
			factions[] = { "Manticore_Faction" };
		};


		class bf_GreenBlack
		{
			displayName = "Green/Black";
			textures[] =
			{
				"","","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_base_baf_greenBlack_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_hardtop_baf_greenBlack_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_special_baf_greenBlack_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_mg-spg9_green_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\jackal_adds_green_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_wmik_pannier_green_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_wmik_misc_green_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_weapons\data\l112a1_gpmg\data\l112a1_mount_woodland_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\camonet_nato_green_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\flag_unionJack.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\clear_empty.paa","","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\clear_empty.paa",""
			};
			factions[] = { "Manticore_Faction" };
		};

		class bf_Sand
		{
			displayName = "Sand";
			textures[] =
			{
				"","","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_base_baf_sand2_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_hardtop_baf_sand_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_special_baf_sand_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_mg-spg9_sand_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\jackal_adds_sand_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_wmik_pannier_sand_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_wmik_misc_sand_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_weapons\data\l112a1_gpmg\data\l112a1_mount_sand_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\camonet_nato_sand_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\flag_unionJack.paa","","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\clear_empty.paa","","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\clear_empty.paa"
			};
			factions[] = { "Manticore_Faction" };
		};

	};
	textureList[] = { "bf_Green",0,"bf_GreenBlack",0,"bf_Sand",0 };
};
class Manticore_Loadout_3CBVehicles_LandRoverMilan : UK3CB_BAF_LandRover_WMIK_Milan_Green_A
{
	displayName = "LandRover Milan";
	scope = 2;
	side = 1;
	faction = "Manticore_Faction";
	//crew = "";

#include "../Loadout/LoadoutBasic_Milan.hpp"
	hiddenSelectionsTextures[] =
	{
		"","","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_base_baf_green_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_hardtop_baf_green_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_special_baf_green_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_mg-spg9_green_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\jackal_adds_green_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_wmik_pannier_green_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_wmik_misc_green_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_weapons\data\l112a1_gpmg\data\l112a1_mount_woodland_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\camonet_nato_green_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\flag_unionJack.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\clear_empty.paa","","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\clear_empty.paa",""
	};
	class TextureSources

	{
		class bf_Green
		{
			displayName = "Green";
			textures[] =
			{
				"","","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_base_baf_green_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_hardtop_baf_green_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_special_baf_green_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_mg-spg9_green_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\jackal_adds_green_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_wmik_pannier_green_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_wmik_misc_green_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_weapons\data\l112a1_gpmg\data\l112a1_mount_woodland_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\camonet_nato_green_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\flag_unionJack.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\clear_empty.paa","","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\clear_empty.paa",""
			};
			factions[] = { "Manticore_Faction" };
		};


		class bf_GreenBlack
		{
			displayName = "Green/Black";
			textures[] =
			{
				"","","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_base_baf_greenBlack_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_hardtop_baf_greenBlack_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_special_baf_greenBlack_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_mg-spg9_green_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\jackal_adds_green_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_wmik_pannier_green_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_wmik_misc_green_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_weapons\data\l112a1_gpmg\data\l112a1_mount_woodland_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\camonet_nato_green_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\flag_unionJack.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\clear_empty.paa","","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\clear_empty.paa",""
			};
			factions[] = { "Manticore_Faction" };
		};

		class bf_Sand
		{
			displayName = "Sand";
			textures[] =
			{
				"","","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_base_baf_sand2_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_hardtop_baf_sand_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_special_baf_sand_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_mg-spg9_sand_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\jackal_adds_sand_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_wmik_pannier_sand_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_wmik_misc_sand_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_weapons\data\l112a1_gpmg\data\l112a1_mount_sand_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\camonet_nato_sand_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\flag_unionJack.paa","","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\clear_empty.paa","","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\clear_empty.paa"
			};
			factions[] = { "Manticore_Faction" };
		};

	};
	textureList[] = { "bf_Green",0,"bf_GreenBlack",0,"bf_Sand",0 };
};
class Manticore_Loadout_3CBVehicles_LandRoverGPMG : UK3CB_BAF_LandRover_WMIK_GPMG_Green_A
{
	displayName = "LandRover GPMG";
	scope = 2;
	side = 1;
	faction = "Manticore_Faction";
	//crew = "";

#include "../Loadout/LoadoutBasic_GPMG.hpp"
	hiddenSelectionsTextures[] =
	{
		"","","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_base_baf_green_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_hardtop_baf_green_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_special_baf_green_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_mg-spg9_green_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\jackal_adds_green_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_wmik_pannier_green_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_wmik_misc_green_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_weapons\data\l112a1_gpmg\data\l112a1_mount_woodland_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\camonet_nato_green_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\flag_unionJack.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\clear_empty.paa","","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\clear_empty.paa",""
	};
	class TextureSources

	{
		class bf_Green
		{
			displayName = "Green";
			textures[] =
			{
				"","","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_base_baf_green_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_hardtop_baf_green_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_special_baf_green_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_mg-spg9_green_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\jackal_adds_green_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_wmik_pannier_green_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_wmik_misc_green_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_weapons\data\l112a1_gpmg\data\l112a1_mount_woodland_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\camonet_nato_green_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\flag_unionJack.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\clear_empty.paa","","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\clear_empty.paa",""
			};
			factions[] = { "Manticore_Faction" };
		};


		class bf_GreenBlack
		{
			displayName = "Green/Black";
			textures[] =
			{
				"","","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_base_baf_greenBlack_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_hardtop_baf_greenBlack_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_special_baf_greenBlack_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_mg-spg9_green_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\jackal_adds_green_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_wmik_pannier_green_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_wmik_misc_green_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_weapons\data\l112a1_gpmg\data\l112a1_mount_woodland_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\camonet_nato_green_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\flag_unionJack.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\clear_empty.paa","","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\clear_empty.paa",""
			};
			factions[] = { "Manticore_Faction" };
		};

		class bf_Sand
		{
			displayName = "Sand";
			textures[] =
			{
				"","","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_base_baf_sand2_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_hardtop_baf_sand_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_special_baf_sand_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_mg-spg9_sand_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\jackal_adds_sand_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_wmik_pannier_sand_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_wmik_misc_sand_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_weapons\data\l112a1_gpmg\data\l112a1_mount_sand_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\camonet_nato_sand_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\flag_unionJack.paa","","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\clear_empty.paa","","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\clear_empty.paa"
			};
			factions[] = { "Manticore_Faction" };
		};

	};
	textureList[] = { "bf_Green",0,"bf_GreenBlack",0,"bf_Sand",0 };
};
class Manticore_Loadout_3CBVehicles_LandRoverGMG : UK3CB_BAF_LandRover_WMIK_GMG_Green_A
{
	displayName = "LandRover GMG";
	scope = 2;
	side = 1;
	faction = "Manticore_Faction";
	//crew = "";

#include "../Loadout/LoadoutBasic_GMG.hpp"
	hiddenSelectionsTextures[] =
	{
		"","","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_base_baf_green_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_hardtop_baf_green_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_special_baf_green_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_mg-spg9_green_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\jackal_adds_green_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_wmik_pannier_green_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_wmik_misc_green_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_weapons\data\l112a1_gpmg\data\l112a1_mount_woodland_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\camonet_nato_green_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\flag_unionJack.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\clear_empty.paa","","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\clear_empty.paa",""
	};
	class TextureSources

	{
		class bf_Green
		{
			displayName = "Green";
			textures[] =
			{
				"","","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_base_baf_green_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_hardtop_baf_green_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_special_baf_green_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_mg-spg9_green_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\jackal_adds_green_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_wmik_pannier_green_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_wmik_misc_green_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_weapons\data\l112a1_gpmg\data\l112a1_mount_woodland_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\camonet_nato_green_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\flag_unionJack.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\clear_empty.paa","","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\clear_empty.paa",""
			};
			factions[] = { "Manticore_Faction" };
		};


		class bf_GreenBlack
		{
			displayName = "Green/Black";
			textures[] =
			{
				"","","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_base_baf_greenBlack_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_hardtop_baf_greenBlack_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_special_baf_greenBlack_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_mg-spg9_green_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\jackal_adds_green_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_wmik_pannier_green_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_wmik_misc_green_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_weapons\data\l112a1_gpmg\data\l112a1_mount_woodland_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\camonet_nato_green_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\flag_unionJack.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\clear_empty.paa","","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\clear_empty.paa",""
			};
			factions[] = { "Manticore_Faction" };
		};

		class bf_Sand
		{
			displayName = "Sand";
			textures[] =
			{
				"","","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_base_baf_sand2_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_hardtop_baf_sand_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_special_baf_sand_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_mg-spg9_sand_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\jackal_adds_sand_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_wmik_pannier_sand_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_wmik_misc_sand_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_weapons\data\l112a1_gpmg\data\l112a1_mount_sand_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\camonet_nato_sand_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\flag_unionJack.paa","","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\clear_empty.paa","","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\clear_empty.paa"
			};
			factions[] = { "Manticore_Faction" };
		};

	};
	textureList[] = { "bf_Green",0,"bf_GreenBlack",0,"bf_Sand",0 };
};
class Manticore_Loadout_3CBVehicles_LandRoverSoftTop : UK3CB_BAF_LandRover_Soft_Green_A
{
	displayName = "LandRover SoftTop";
	scope = 2;
	side = 1;
	faction = "Manticore_Faction";
	//crew = "";

#include "../Loadout/LoadoutBasic.hpp"
	hiddenSelectionsTextures[] =
	{
		"","","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_base_baf_green_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_hardtop_baf_green_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_special_baf_green_co.paa"
	};
	class TextureSources

	{
		class bf_Green
		{
			displayName = "Green";
			textures[] =
			{
				"","","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_base_baf_green_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_hardtop_baf_green_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_special_baf_green_co.paa"
			};
			factions[] = { "Manticore_Faction" };
		};


		class bf_GreenBlack
		{
			displayName = "Green/Black";
			textures[] =
			{
				"","","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_base_baf_greenBlack_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_hardtop_baf_green_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_special_baf_greenBlack_co.paa"
			};
			factions[] = { "Manticore_Faction" };
		};

		class bf_Sand
		{
			displayName = "Sand";
			textures[] =
			{
				"","","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_base_baf_sand_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_hardtop_baf_sand_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_special_baf_sand_co.paa"
			};
			factions[] = { "Manticore_Faction" };
		};
		class bf_Arctic
		{
			displayName = "Arctic";
			textures[] =
			{
				"","","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_base_baf_arctic_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_hardtop_baf_arctic_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_special_un_co.paa"
			};
			factions[] = { "Manticore_Faction" };
		};
	};
	textureList[] = { "bf_Green",0,"bf_GreenBlack",0,"bf_Sand",0,"bf_Arctic",0 };
};
class Manticore_Loadout_3CBVehicles_LandRoverHardTop : UK3CB_BAF_LandRover_Hard_Green_A
{
	displayName = "LandRover HardTop";
	scope = 2;
	side = 1;
	faction = "Manticore_Faction";
	//crew = "";

#include "../Loadout/LoadoutBasic.hpp"
	hiddenSelectionsTextures[] =
	{
		"","","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_base_baf_green_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_hardtop_baf_green_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_special_baf_green_co.paa"
	};
	class TextureSources

	{
		class bf_Green
		{
			displayName = "Green";
			textures[] =
			{
				"","","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_base_baf_green_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_hardtop_baf_green_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_special_baf_green_co.paa"
			};
			factions[] = { "Manticore_Faction" };
		};


		class bf_GreenBlack
		{
			displayName = "Green/Black";
			textures[] =
			{
				"","","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_base_baf_greenBlack_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_hardtop_baf_green_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_special_baf_greenBlack_co.paa"
			};
			factions[] = { "Manticore_Faction" };
		};

		class bf_Sand
		{
			displayName = "Sand";
			textures[] =
			{
				"","","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_base_baf_sand_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_hardtop_baf_sand_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_special_baf_sand_co.paa"
			};
			factions[] = { "Manticore_Faction" };
		};
		class bf_Arctic
		{
			displayName = "Arctic";
			textures[] =
			{
				"","","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_base_baf_arctic_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_hardtop_baf_arctic_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_special_un_co.paa"
			};
			factions[] = { "Manticore_Faction" };
		};
	};
	textureList[] = { "bf_Green",0,"bf_GreenBlack",0,"bf_Sand",0,"bf_Arctic",0 };
};
class Manticore_Loadout_3CBVehicles_LandRoverSnatch : UK3CB_BAF_LandRover_Snatch_Green_A
{
	displayName = "LandRover Snatch";
	scope = 2;
	side = 1;
	faction = "Manticore_Faction";
	//crew = "";

#include "../Loadout/LoadoutBasic.hpp"
	hiddenSelectionsTextures[] =
	{
		"","","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_base_baf_snatch_green_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_hardtop_baf_green_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_special_baf_green_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_snatch_baf_green_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\camonet_nato_green_co.paa"
	};
	class TextureSources

	{
		class bf_Green
		{
			displayName = "Green";
			textures[] =
			{
				"","","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_base_baf_snatch_green_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_hardtop_baf_green_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_special_baf_green_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_snatch_baf_green_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\camonet_nato_green_co.paa"
			};
			factions[] = { "Manticore_Faction" };
		};
		class bf_Sand
		{
			displayName = "Sand";
			textures[] =
			{
				"","","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_base_baf_snatch_sand_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_hardtop_baf_sand_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_special_baf_sand_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_snatch_baf_sand_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\camonet_nato_sand_co.paa"
			};
			factions[] = { "Manticore_Faction" };
		};
	};
	textureList[] = { "bf_Green",0,"bf_Sand",0, };
};
class Manticore_Loadout_3CBVehicles_LandRoverAmbulance : UK3CB_BAF_LandRover_Amb_Green_A
{
	displayName = "LandRover Ambulance";
	scope = 2;
	side = 1;
	faction = "Manticore_Faction";
	//crew = "";

#include "../Loadout/LoadoutMedical.hpp"
	hiddenSelectionsTextures[] =
	{
		"","","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_base_baf_green_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_hardtop_baf_green_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_special_baf_green_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_amb_ext_green_co.paa"
	};
	class TextureSources

	{
		class bf_Green
		{
			displayName = "Green";
			textures[] =
			{
				"","","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_base_baf_green_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_hardtop_baf_green_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_special_baf_green_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_amb_ext_green_co.paa"
			};
			factions[] = { "Manticore_Faction" };
		};
		class bf_Sand
		{
			displayName = "Sand";
			textures[] =
			{
				"","","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_base_baf_sand_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_hardtop_baf_sand_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_special_baf_sand_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_amb_ext_sand_co.paa"
			};
			factions[] = { "Manticore_Faction" };
		};
		class bf_UN
		{
			displayName = "UN";
			textures[] =
			{
				"","","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_base_un_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_hardtop_un_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_special_un_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_amb_ext_un_co.paa"
			};
			factions[] = { "Manticore_Faction" };
		};
	};
	textureList[] = { "bf_Green",0,"bf_Sand",0,"bf_UN",0 };
};
class Manticore_Loadout_3CBVehicles_LandRoverSoftTop_Med : UK3CB_BAF_LandRover_Soft_MERT_A
{
	displayName = "LandRover SoftTop Medical";
	scope = 2;
	side = 1;
	faction = "Manticore_Faction";
	//crew = "";

	#include "../Loadout/LoadoutMedical.hpp"
	hiddenSelectionsTextures[] = 
	{ 
		"","","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_base_baf_med_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_hardtop_baf_green_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_special_baf_green_co.paa"
	};
};
class Manticore_Loadout_3CBVehicles_LandRoverHardTop_Med : UK3CB_BAF_LandRover_Hard_MERT_A
{
	displayName = "LandRover HardTop Medical";
	scope = 2;
	side = 1;
	faction = "Manticore_Faction";
	//crew = "";

	#include "../Loadout/LoadoutMedical.hpp"
	hiddenSelectionsTextures[] =
	{
		"","","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_base_baf_med_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_hardtop_baf_green_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_special_baf_green_co.paa"
	};
};