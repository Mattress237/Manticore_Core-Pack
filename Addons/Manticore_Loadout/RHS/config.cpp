class CfgPatches
{
	class Manticore_Loadout_Vanila
	{
		addonRootClass = "Manticore_Loadout";
		requiredVersion = 1.8;
		units[] = {
			Manticore_Loadout_RHS_Humvee_M1043A2,
			Manticore_Loadout_RHS_Humvee_M1043A2_M2,
			Manticore_Loadout_RHS_Humvee_M1043A2_M19,
			Manticore_Loadout_RHS_Humvee_M1045A2_TOW,
			Manticore_Loadout_RHS_Humvee_M1123_2D_Open,
			Manticore_Loadout_RHS_Humvee_M1123_2D_Half,
			Manticore_Loadout_RHS_Humvee_M1123_2D_Full,
			Manticore_Loadout_RHS_Humvee_M1123_4D_Open,
			Manticore_Loadout_RHS_Humvee_M1123_4D_Half,
			Manticore_Loadout_RHS_Humvee_M1123_4D_Full,

			Manticore_Loadout_RHS_Mrap_Cat1A2,
			Manticore_Loadout_RHS_Mrap_Cat1A2_M2,
			Manticore_Loadout_RHS_Mrap_Cat1A2_Mk19,
			Manticore_Loadout_RHS_Mrap_M1220,
			Manticore_Loadout_RHS_Mrap_M1220_M2,
			Manticore_Loadout_RHS_Mrap_M1220_M2CROW,
			Manticore_Loadout_RHS_Mrap_M1220_M19,
			Manticore_Loadout_RHS_Mrap_M1230_M2,
			Manticore_Loadout_RHS_Mrap_M1230_M19,
			Manticore_Loadout_RHS_Mrap_M1220A1_Medical,

			Manticore_Loadout_RHS_APC_M113A3_Unarmed,
			Manticore_Loadout_RHS_APC_M113A3_M2,
			Manticore_Loadout_RHS_APC_M113A3_M19,
			Manticore_Loadout_RHS_APC_M113A3_M240,
			Manticore_Loadout_RHS_APC_M113A3_Ammo,
			Manticore_Loadout_RHS_APC_M113A3_Medical
		};
		weapons[] = {};
		requiredAddons[] =
		{
			"Manticore_Loadout",
			"rhsusf_c_hmmwv",
			"rhsusf_c_Cougar",
			"rhsusf_c_Caiman"
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
#include "Heli.hpp"
#include "Naval.hpp"
};

