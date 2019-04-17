#include "script_component.hpp"

class CfgPatches
{
	class Manticore_Winter
	{
		units[] = { };
		weapons[] = {
			"A3_Armor_F_Beta_APC_Wheeled_01",
			"ace_realisticnames",
			"A3_Armor_F_Beta_APC_Tracked_01",
			"ace_repair",
			"A3_Armor_F_EPB_MBT_03",
			"ace_rearm",
			"ace_refuel",
			"A3_Boat_F_Boat_Armed_01",
			"A3_Characters_F",
			"asr_ai3_skills"
		};
		requiredVersion = 1.62;
		requiredAddons[] = {
			"Manticore_Loadout_Vanila",
			"Manticore_Loadout_RHS",
			"A3_Characters_F",
			"rhsusf_c_melb",
			"VSM_Multicam_Config",
			"Manticore_Uniform_Winter"
		};
		author = "SSgt. D.O'Hara [MVSA], Mattress";
	};
};


#include "CfgFactionClasses.hpp"
#include "CfgVehicles.hpp"
#include "CfgGroups.hpp"
