class CfgPatches
{
	class Manticore_Loadout_RHS
	{
		addonRootClass = "Manticore_Loadout";
		units[] = {
			Manticore_M1043A2_Load,
			Manticore_M1043A2M2_Load,
			Manticore_M1043A2M19_Load,
			Manticore_M1045A2TOW_Load,
			Manticore_M11232DOpen_Load,
			Manticore_M11232DHalf_Load,
			Manticore_M11232DFull_Load,
			Manticore_M11234DOpen_Load,
			Manticore_M11234DHalf_Load,
			Manticore_M11234DFull_Load,
			Manticore_Cat1A2_Load,
			Manticore_Cat1A2M2_Load,
			Manticore_Cat1A2Mk19_Load,
			Manticore_M1220_Load,
			Manticore_M1220M2_Load,
			Manticore_M1220M2CROW_Load,
			Manticore_M1220M19_Load,
			Manticore_M1230M2_Load,
			Manticore_M1230M19_Load,
			Manticore_M1220A1Med_Load,
			Manticore_M113A3Unarmed_Load,
			Manticore_M113A3M2_Load,
			Manticore_M113A3M19_Load,
			Manticore_M113A3M240_Load,
			Manticore_M113A3Ammo_Load,
			Manticore_M113A3Medical_Load,
			Manticore_M2A3_Load,
			Manticore_M2A3BUSKI_Load,
			Manticore_M2A3BUSKIII_Load,
			Manticore_M6A2_Load,
			Manticore_M1083A1P2_Load,
			Manticore_M1083A1P2B_Load,
			Manticore_M1083A1P2BM2_Load,
			Manticore_M1083A1P2Flatbed_Load,
			Manticore_M1083A1P2BFlatbed_Load,
			Manticore_M1083A1P2BM2Flatbed_Load,
			Manticore_M977A4_Load,
			Manticore_M977A4B_Load,
			Manticore_M977A4BM2_Load,
			Manticore_M977A4Repair_Load,
			Manticore_M977A4BM2Repair_Load,
			Manticore_M977A4Ammo_Load,
			Manticore_M977A4BM2Ammo_Load,
			Manticore_M978A4_Load,
			Manticore_M978A4B_Load,
			Manticore_M142_Load,
			Manticore_M109A6_Load,
			Manticore_OH6MHeli_Load,
			Manticore_MH6MHeli_Load,
			Manticore_AH6MHeli_Load,
			Manticore_CH47FHeli_Load,
			Manticore_UH60MHeli_Load,
			Manticore_UH60M2Heli_Load,
			Manticore_UH60MEWSHeli_Load,
			Manticore_UH60MESSSHeli_Load,
			Manticore_UH60MMEVHeli_Load,
			Manticore_UH60MESSSMEVHeli_Load,
			Manticore_AH64DHeli_Load,
			Manticore_CH53EHeli_Load,
			Manticore_UH1YHeli_Load,
			Manticore_UH1YFFARHeli_Load,
			Manticore_UH1YUnarmedHeli_Load,
			Manticore_AH1ZHeli_Load,
			Manticore_MkVSOC_Load
		};
		weapons[] = {};
		requiredAddons[] =
		{
			"Manticore_Loadout",
			"Manticore_RHS_HUMVEE",
			"Manticore_RHS_MRAP",
			"Manticore_RHS_APC",
			"Manticore_RHS_Artillery",
			"Manticore_RHS_Heli",
			"Manticore_RHS_IFV",
			"Manticore_RHS_Naval",
			"Manticore_RHS_Truck"
		};
	};
};

class CfgVehicles
{
#include "RHSInport.hpp"
#include "../LoadoutMacro.hpp"

#include "Humvee.hpp"
#include "MRAP.hpp"
#include "APC.hpp"
#include "IFV.hpp"
#include "Truck.hpp"
#include "Artillery.hpp"
#include "Heli.hpp"
#include "Naval.hpp"
};

