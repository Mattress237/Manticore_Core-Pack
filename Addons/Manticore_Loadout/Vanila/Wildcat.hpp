class Manticore_Loadout_Vanila_Wildcat : Manticore_Vanilla_Heli_Wildcat
{
	displayName = "Wildcat Transport";
	scope = 2;
	side = 1;
	faction = "Manticore_Faction";
	
	#include "../Loadout/LoadoutBasicHeli.hpp"
};
class Manticore_Loadout_Vanila_Wildcat_dynamicLoadout : I_Heli_light_03_dynamicLoadout_F
{
	displayName = "Wildcat DynamicLoadout";
	scope = 2;
	side = 1;
	faction = "Manticore_Faction";
	
	#include "../Loadout/LoadoutBasicHeli.hpp"
};