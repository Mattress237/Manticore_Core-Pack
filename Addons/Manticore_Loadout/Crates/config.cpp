class CfgPatches
{
	class Manticore_Loadout_Crates
	{
		addonRootClass = "Manticore_Loadout";
		units[] = {

			Manticore_CrateKit_UnguidedATLauncher,
			Manticore_CrateKit_GuidedATLauncher,
			Manticore_CrateKit_GuidedAALauncher,
			Manticore_CrateKit_DisposableATLauncher,
			Manticore_CrateKit_StandardRifle,
			Manticore_Loadout_Crate_Kit_Mk46_HLC,
			Manticore_Loadout_Crate_Kit_Mk48_HLC,
			Manticore_Loadout_Crate_Kit_M14_HLC,
			Manticore_Loadout_Crate_Kit_Mk11_RHS,
			Manticore_Loadout_Crate_Kit_M27_RHS,
			Manticore_CrateField_Fireteam,
			Manticore_CrateField_Squad,
			Manticore_CrateAmmo_StandardRifle,
			Manticore_CrateAmmo_UnguidedATLauncher,
			Manticore_CrateAmmo_GuidedATLauncher,
			Manticore_CrateAmmo_GuidedAALauncher,
			Manticore_Loadout_Crate_Ammo_Mk46_HLC,
			Manticore_Loadout_Crate_Ammo_Mk48_HLC,
			Manticore_Loadout_Crate_Ammo_M14_HLC,
			Manticore_Loadout_Crate_Ammo_Mk11_RHS,
			Manticore_Loadout_Crate_Ammo_M27_RHS,
			Manticore_CrateDemo_Demo,
			Manticore_CrateDemo_Mine,
			Manticore_CrateDemo_DemoMine,
			Manticore_CrateGrenade_Grenade,
			Manticore_CrateGrenade_FlareChem,
			Manticore_CrateGrenade_SmokFlareChem,
			Manticore_CrateGrenade_Smok,
			Manticore_CrateStatic_M2RHS,
			Manticore_CrateStatic_Mk19RHS,
			Manticore_CrateStatic_TOWRHS,
			Manticore_CrateStatic_Mk6Vanila,
			Manticore_CrateEquipment_General,
			Manticore_CrateEquipment_Medical
		};
		weapons[] = {};
		requiredAddons[] =
		{
			"Manticore_Loadout",
			"A3_Supplies_F_Exp_Ammoboxes",
			"A3_Supplies_F_Exp",
			"A3_Weapons_F_Ammoboxes",
			"A3_Supplies_F_Heli_Slingload",
			"A3_Supplies_F_Heli_CargoNets"
		};
	};
};

class CfgVehicles
{
#include "CratesInport.hpp"
#include "../LoadoutMacro.hpp"

#include "Kit.hpp"
#include "FieldKit.hpp"
#include "Ammo.hpp"
#include "Demo.hpp"
#include "GrenadesSmokFlare.hpp"
#include "Static.hpp"
#include "General.hpp"

};