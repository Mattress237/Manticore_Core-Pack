class Manticore_Loadout_RHS_Artillery_M142 : rhsusf_M142_usarmy_WD
{
	displayName = "M142 HIMARS";
	scope = 2;
	side = 1;
	faction = "Manticore_Faction";
	//crew = "";

#include "../Loadout/LoadoutBasic.hpp"
	hiddenSelectionsTextures[] =
	{
		"rhsusf\addons\rhsusf_HIMARS\data\M142_Cab_MC_CO.paa",
		"rhsusf\addons\rhsusf_HIMARS\data\M142_Rear_MC_CO.paa",
		"rhsusf\addons\rhsusf_HIMARS\data\M142_Chassis_MC_co.paa",
		"rhsusf\addons\rhsusf_HIMARS\data\M142_Wheel_CO.paa",
		"rhsusf\addons\rhsusf_HIMARS\data\M142_Int_CO.paa"
	};
	class TextureSources
	{
		class RHS_Olive
		{
			displayName = "Olive";
			textures[] =
			{
				"rhsusf\addons\rhsusf_HIMARS\data\M142_Cab_MC_CO.paa",
				"rhsusf\addons\rhsusf_HIMARS\data\M142_Rear_MC_CO.paa",
				"rhsusf\addons\rhsusf_HIMARS\data\M142_Chassis_MC_co.paa",
				"rhsusf\addons\rhsusf_HIMARS\data\M142_Wheel_CO.paa",
				"rhsusf\addons\rhsusf_HIMARS\data\M142_Int_CO.paa"
			};
			factions[] = { "Manticore_Faction" };
		};
		class RHS_Woodland
		{
			displayName = "Woodland";
			textures[] =
			{
				"rhsusf\addons\rhsusf_HIMARS\data\M142_Cab_CO.paa",
				"rhsusf\addons\rhsusf_HIMARS\data\M142_Rear_CO.paa",
				"rhsusf\addons\rhsusf_HIMARS\data\M142_Chassis_co.paa",
				"rhsusf\addons\rhsusf_HIMARS\data\M142_Wheel_CO.paa",
				"rhsusf\addons\rhsusf_HIMARS\data\M142_Int_CO.paa"
			};
			factions[] = { "Manticore_Faction" };
		};
		class RHS_Desert
		{
			displayName = "Desert";
			textures[] =
			{
				"rhsusf\addons\rhsusf_HIMARS\data\M142_Cab_D_CO.paa",
				"rhsusf\addons\rhsusf_HIMARS\data\M142_Rear_D_CO.paa",
				"rhsusf\addons\rhsusf_HIMARS\data\M142_Chassis_D_co.paa",
				"rhsusf\addons\rhsusf_HIMARS\data\M142_Wheel_CO.paa",
				"rhsusf\addons\rhsusf_HIMARS\data\M142_Int_CO.paa"
			};
			factions[] = { "Manticore_Faction" };
		};
	};
	textureList[] = { "RHS_Olive",0,"RHS_Woodland",0,"RHS_Desert",0 };
};
class Manticore_Loadout_RHS_Artillery_M109A6 : rhsusf_m109_usarmy
{
	displayName = "M109A6";
	scope = 2;
	side = 1;
	faction = "Manticore_Faction";
	//crew = "";

#include "../Loadout/LoadoutBasic.hpp"
	hiddenSelectionsTextures[] =
	{
		"rhsusf\addons\rhsusf_m109\data\rhsusf_m109a6_01_wd_co.paa",
		"rhsusf\addons\rhsusf_m109\data\rhsusf_m109a6_02_wd_co.paa",
		"rhsusf\addons\rhsusf_m109\data\rhsusf_m109a6_03_wd_co.paa",
		"rhsusf\addons\rhsusf_m109\data\rhsusf_m109a6_mesh_wd_ca.paa",
		"rhsusf\addons\rhsusf_m109\data\rhsusf_m109a6_wheels_wd_co.paa"
	};
	class TextureSources
	{
		class RHS_Woodland
		{
			displayName = "Woodland";
			textures[] =
			{
				"rhsusf\addons\rhsusf_m109\data\rhsusf_m109a6_01_wd_co.paa",
				"rhsusf\addons\rhsusf_m109\data\rhsusf_m109a6_02_wd_co.paa",
				"rhsusf\addons\rhsusf_m109\data\rhsusf_m109a6_03_wd_co.paa",
				"rhsusf\addons\rhsusf_m109\data\rhsusf_m109a6_mesh_wd_ca.paa",
				"rhsusf\addons\rhsusf_m109\data\rhsusf_m109a6_wheels_wd_co.paa"
			};
			factions[] = { "Manticore_Faction" };
		};
		class RHS_Desert
		{
			displayName = "Desert";
			textures[] =
			{
				"rhsusf\addons\rhsusf_m109\data\rhsusf_m109a6_01_d_co.paa",
				"rhsusf\addons\rhsusf_m109\data\rhsusf_m109a6_02_d_co.paa",
				"rhsusf\addons\rhsusf_m109\data\rhsusf_m109a6_03_d_co.paa",
				"rhsusf\addons\rhsusf_m109\data\rhsusf_m109a6_mesh_d_ca.paa",
				"rhsusf\addons\rhsusf_m109\data\rhsusf_m109a6_wheels_d_co.paa"
			};
			factions[] = { "Manticore_Faction" };
		};
	};
	textureList[] = { "RHS_Woodland",0,"RHS_Desert",0 };
};