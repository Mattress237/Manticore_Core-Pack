class CfgPatches
{
	class Manticore_Loadout
	{
		units[] =
		{
			//Crates
			Manticore_Loadout_Crate_General,
			Manticore_Loadout_Crate_Medical,
			Manticore_Loadout_Crate_Ammo_StandardRifle,
			Manticore_Loadout_Crate_Ammo_MAAWS_Vanila,
			Manticore_Loadout_Crate_Ammo_Metis_Vanila,
			Manticore_Loadout_Crate_Ammo_Stinger_RHS,
			Manticore_Loadout_Crate_Ammo_Mk46_HLC,
			Manticore_Loadout_Crate_Ammo_Mk48_HLC,
			Manticore_Loadout_Crate_Ammo_M14_HLC,
			Manticore_Loadout_Crate_Ammo_Mk11_RHS,
			Manticore_Loadout_Crate_Ammo_M27_RHS,
			Manticore_Loadout_Crate_Kit_MAAWS_Vanila,
			Manticore_Loadout_Crate_Kit_Metis_Vanila,
			Manticore_Loadout_Crate_Kit_Stinger_RHS,
			Manticore_Loadout_Crate_Kit_M136_RHS,
			Manticore_Loadout_Crate_Kit_StandardRifle,
			Manticore_Loadout_Crate_Kit_Mk46_HLC,
			Manticore_Loadout_Crate_Kit_Mk48_HLC,
			Manticore_Loadout_Crate_Kit_M14_HLC,
			Manticore_Loadout_Crate_Kit_Mk11_RHS,
			Manticore_Loadout_Crate_Kit_M27_RHS,
			Manticore_Loadout_Crate_Demo_Demo,
			Manticore_Loadout_Crate_Demo_Mine,
			Manticore_Loadout_Crate_Demo_DemoMine,
			Manticore_Loadout_Crate_Grenade_Grenade,
			Manticore_Loadout_Crate_Grenade_FlareChem,
			Manticore_Loadout_Crate_Grenade_SmokFlareChem,
			Manticore_Loadout_Crate_Grenade_Smok,
			Manticore_Loadout_Crate_Static_M2_RHS,
			Manticore_Loadout_Crate_Static_Mk19_RHS,
			Manticore_Loadout_Crate_Static_TOW_RHS,
			Manticore_Loadout_Crate_Static_Mk6_Vanila,
			Manticore_Loadout_Crate_Field_Fireteam,
			Manticore_Loadout_Crate_Field_Squad

		};
		weapons[] =
		{
			

		};
		version = "1.0";
		requiredAddons[] =
		{
			
			
			"A3_Supplies_F_Exp_Ammoboxes",
			"A3_Supplies_F_Exp",
			"A3_Weapons_F_Ammoboxes",
			"A3_Supplies_F_Heli_Slingload",
			"A3_Supplies_F_Heli_CargoNets",
			
			
			
			"rhsusf_c_hmmwv",
			"rhsusf_c_Cougar",
			"rhsusf_c_Caiman"


		};
		author = "Mattress";
		authorUrl = "http://steamcommunity.com/id/MR_Mattress/";
	};
};

class cfgFactionClasses
{
	class Manticore_Faction
	{
		displayName = "Manticore";
		priority = 3; // Position in list. 
		side = 1; // Opfor = 0, Blufor = 1, Indep = 2. 
		icon = ""; //Custom Icon 
	};
};

class CfgEditorCategories
{
	class Manticore_Categories
	{
		displayName = "Manticore";
	};
};

class CfgEditorSubcategories
{
	class Manticore_Categories_Supply
	{
		displayName = "Supply";
	};
};

class CfgVehicles
{
	///Macros
	#include "LoadoutMacro.hpp"

	///Inport
	#include "Inport.hpp"

	///3CBVehicles
	//#include "3CBVehicles\Manticore_Loadout_3CBVehicles.hpp"
	
	///RHS
	//#include "RHS\Manticore_Loadout_RHS.hpp"

	///Vanila
	//#include "Vanila\Manticore_Loadout_Vanila.hpp"
	
	///Crate
	#include "Crates\Manticore_Loadout_Crate.hpp"
};	