class CfgPatches
{
	class Manticore_Uniform_Uniform_Woodland
	{
		addonRootClass = "Manticore_Uniform";
		units[] =
		{
		};
		weapons[] = {};
		requiredAddons[] =
		{
			"Manticore_Uniform",
			"VSM_Multicam_Config",
			"VSM_Vests_Config",
			"A3_Weapons_F",
			"VSM_HELMETS",
			"tfar_backpacks"
		};
	};
};

class CfgVehicles
{
	class B_AssaultPack_Base;
	class Manticore_Uniform_Uniform_ManticamWoodland_CompactBag : B_AssaultPack_Base
	{
		scope = 2;
		displayName = "Manticam Woodland Compact Bag";
		author = "Mattress";
		picture = "\Manticore_Uniform\Uniform\Winter\Data\Icon\Manticam_Logo_Winter.paa";
		hiddenSelectionsTextures[] =
		{
			"\Manticore_Uniform\Uniform\Woodland\Data\Vanilla_Backpack_Compact_ManticamWoodland_00.paa"
		};
	};
};