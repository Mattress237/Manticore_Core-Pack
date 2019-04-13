class CfgPatches
{
	class Manticore_Loadout_Vanila
	{
		addonRootClass = "Manticore_Loadout";
		units[] = 
		{
			Manticore_WildcatDynamicHeli_Load,
			Manticore_WildcatHeli_Load,
			Manticore_MerlinHeli_Load,
			Manticore_Wiesel2Cannon_Load,
			Manticore_Wiesel2AT_Load,
			Manticore_Wiesel2Scout_Load,
			Manticore_AH6Heli_Load,
			Manticore_MH6Heli_Load,
			Manticore_MH6StrippedHeli_Load,
			Manticore_UCAVDrone_Load,
			Manticore_FalconDrone_Load,
			Manticore_Loadout_Vanila_Drone_AR2,
			Manticore_StomperDrone_Load,
			Manticore_StomperArmedDrone_Load,
			Manticore_BadgerIFV_Load,
			Manticore_NamerAPC_Load,
			Manticore_NemmeraAPC_Load,
			Manticore_Bardelas_Load,
			Manticore_Leopard_Load,
			Manticore_SpeedboatMinigun_Load,
			Manticore_Sholef_Load,
			Manticore_Seara_Load,
			Manticore_PolarisUnarmed_Load,
			Manticore_PolarisArmed_Load,
			Manticore_PolarisAT_Load,
			Manticore_PolarisLight_Load,
			Manticore_Quadbike_Load,
			Manticore_Rooikat_Load,
			Manticore_RooikatUP_Load
		};
		weapons[] = {};
		requiredAddons[] =
		{
			"Manticore_Loadout",
			"Manticore_Vanilla_Tank",
			"Manticore_Vanilla_IFV",
			"Manticore_Vanilla_AA",
			"Manticore_Vanilla_APC",
			"Manticore_Vanilla_Boats",
			"Manticore_Vanilla_Artillery",
			"Manticore_Vanilla_Drone",
			"Manticore_Vanilla_Heli",
			"Manticore_Vanilla_Light"
		};
	};
};

class CfgVehicles
{
	#include "VanilaInport.hpp"
	#include "../LoadoutMacro.hpp"

	//Light Attack
	#include "Polaris.hpp"
	#include "Quadbike.hpp"
	//Heli
	#include "Wildcat.hpp"
	#include "Merlin.hpp"
	#include "LittleBird.hpp"
	//APC IFV
	#include "Badger.hpp"
	#include "Namer.hpp"
	#include "Nemmera.hpp"
	//AA
	#include "Bardelas.hpp"
	//Tank
	#include "Wiesel2.hpp"
	#include "Leopard.hpp"
	#include "Rooikat.hpp"
	//Atrillery
	#include "Artillery.hpp"
	//Naval
	#include "Speedboat.hpp"
	//Drone
	#include "Drone.hpp"
};