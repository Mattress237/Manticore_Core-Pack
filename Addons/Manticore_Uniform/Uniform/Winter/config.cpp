class CfgPatches
{
	class Manticore_Uniform_Uniform_Winter
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
			"VSM_HELMETS"
		};
	};
};

class CfgVehicles
{
	class VSM_Multicam_Crye_Uniform;
	class Manticore_Uniform_Uniform_Winter_Crye : VSM_Multicam_Crye_Uniform
	{
		author = "Mattress, VanSchmoozin";
		scope = 2;
		displayName = "Manticore Winter Camo (WIP)";
		faction = "Manticore_Faction";
		uniformClass = "Manticore_Uniform_Uniform_Winter_Crye";
		hiddenSelections[] =
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[] =
		{
			"\Manticore_Uniform\Uniform\Winter\Data\VSM_ARD_Test_00.paa"
		};
		weapons[] =
		{
			"Throw",
			"Put"
		};
		respawnWeapons[] =
		{
			"Throw",
			"Put"
		};
		magazines[] =
		{

		};
		respawnMagazines[] =
		{

		};
		linkedItems[] =
		{

		};
		respawnLinkedItems[] =
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};

	class B_AssaultPack_Base;
	class Manticore_Uniform_Uniform_Winter_CompactBag : B_AssaultPack_Base
	{
		scope = 2;
		displayName = "Manticam Winter Compact Bag";
		author = "Mattress";
		picture = "\Manticore_Uniform\Uniform\Winter\Data\Icon\Manticam_Logo_Winter.paa";
		hiddenSelectionsTextures[] =
		{
			"\Manticore_Uniform\Uniform\Winter\Data\Vanilla_Backpack_Compact_00.paa"
		};
	};
	class Manticore_Uniform_Uniform_Winter_CompactBag_Med : B_AssaultPack_Base
	{
		scope = 2;
		displayName = "Manticam Winter Compact Bag (Medical)";
		author = "Mattress";
		picture = "\Manticore_Uniform\Uniform\Winter\Data\Icon\Manticam_Logo_Winter.paa";
		hiddenSelectionsTextures[] =
		{
			"\Manticore_Uniform\Uniform\Winter\Data\Vanilla_Backpack_Compact_00_Med.paa"
		};
	};

	class B_Kitbag_Base;
	class Manticore_Uniform_Uniform_Winter_Kitbag : B_Kitbag_Base
	{
		scope = 2;
		displayName = "Manticam Winter Kitbag";
		author = "Mattress";
		picture = "\Manticore_Uniform\Uniform\Winter\Data\Icon\Manticam_Logo_Winter.paa";
		hiddenSelectionsTextures[] =
		{
			"\Manticore_Uniform\Uniform\Winter\Data\Vanilla_Backpack_Kitbag_00.paa"
		};
	};
	class Manticore_Uniform_Uniform_Winter_Kitbag_Med : B_Kitbag_Base
	{
		scope = 2;
		displayName = "Manticam Winter Kitbag (Medical)";
		author = "Mattress";
		picture = "\Manticore_Uniform\Uniform\Winter\Data\Icon\Manticam_Logo_Winter.paa";
		hiddenSelectionsTextures[] =
		{
			"\Manticore_Uniform\Uniform\Winter\Data\Vanilla_Backpack_Kitbag_00_Med.paa"
		};
	};

	class B_Carryall_Base;
	class Manticore_Uniform_Uniform_Winter_CarryallBag : B_Carryall_Base
	{
		scope = 2;
		displayName = "Manticam Winter Carryall Bag";
		author = "Mattress";
		picture = "\Manticore_Uniform\Uniform\Winter\Data\Icon\Manticam_Logo_Winter.paa";
		hiddenSelectionsTextures[] =
		{
			"\Manticore_Uniform\Uniform\Winter\Data\Vanilla_Backpack_Carryall_00.paa"
		};
	};
	class Manticore_Uniform_Uniform_Winter_CarryallBag_Med : B_Carryall_Base
	{
		scope = 2;
		displayName = "Manticam Winter Carryall Bag (Medical)";
		author = "Mattress";
		picture = "\Manticore_Uniform\Uniform\Winter\Data\Icon\Manticam_Logo_Winter.paa";
		hiddenSelectionsTextures[] =
		{
			"\Manticore_Uniform\Uniform\Winter\Data\Vanilla_Backpack_Carryall_00_Med.paa"
		};
	};
};

class cfgWeapons
{
	class ItemCore;
	class UniformItem;
	//class InventoryItem_Base_F;
	//class HeadgearItem;
	class Uniform_Base : ItemCore
	{
		class ItemInfo;
	};
	class VSM_Multicam_Crye_Camo;
	class Manticore_Uniform_Uniform_Winter_Crye : VSM_Multicam_Crye_Camo
	{
		scope = 2;
		displayName = "Manticore Winter Crye";
		author = "Mattress, VanSchmoozin";
		picture = "\Manticore_Uniform\Uniform\Winter\Data\Icon\Manticam_Logo_Winter.paa";
		class ItemInfo : UniformItem
		{
			uniformClass = "Manticore_Uniform_Uniform_Winter_Crye";
			containerClass = "Supply70";
			mass = 35;
		};
	};

	class VSM_RAV_operator_MulticamTropic;
	class Manticore_Uniform_Uniform_Winter_RAV_Operator : VSM_RAV_operator_MulticamTropic
	{
		scope = 2;
		author = "Mattress, VanSchmoozin - Specter";
		displayName = "Manticam Winter Paraclete RAV(Operator)";
		picture = "\Manticore_Uniform\Uniform\Winter\Data\Icon\Manticam_Logo_Winter.paa";
		hiddenSelections[] =
		{
			"_1961aPouches",
			"_battleBelt",
			"_DropHolster",
			"_Serpa",
			"_SOTGGear",
			"_SOTGRadio",
			"_vestBase",
			"_VSMPouches"
		};
		hiddenSelectionsTextures[] =
		{
			"\Manticore_Uniform\Uniform\Winter\Data\VSM_Vest_Chestrig_00.paa",
			"\Manticore_Uniform\Uniform\Winter\Data\VSM_Vest_BattleBelt_00.paa",
			"\Manticore_Uniform\Uniform\Winter\Data\VSM_Vest_DropHolster_00.paa",
			"\Manticore_Uniform\Uniform\Winter\Data\VSM_Vest_Serpa_00.paa",
			"\Manticore_Uniform\Uniform\Winter\Data\VSM_Vest_Gear_00.paa",
			"\Manticore_Uniform\Uniform\Winter\Data\VSM_Vest_Radio_00.paa",
			"\Manticore_Uniform\Uniform\Winter\Data\VSM_Vest_RAV_00.paa",
			"\Manticore_Uniform\Uniform\Winter\Data\VSM_Vest_Pouches_00.paa"
		};
		//descriptionShort = "$STR_A3_SP_AL_IV";
	};

	class VSM_RAV_MG_MulticamTropic;
	class Manticore_Uniform_Uniform_Winter_RAV_Gunner : VSM_RAV_MG_MulticamTropic
	{
		scope = 2;
		author = "Mattress, VanSchmoozin - Specter";
		displayName = "Manticam Winter Paraclete RAV (Gunner)";
		picture = "\Manticore_Uniform\Uniform\Winter\Data\Icon\Manticam_Logo_Winter.paa";
		hiddenSelections[] =
		{
			"_1961aPouches",
			"_battleBelt",
			"_boxmag",
			"_DropHolster",
			"_Serpa",
			"_SOTGGear",
			"_SOTGRadio",
			"_vestBase",
			"_VSMPouches"
		};
		hiddenSelectionsTextures[] =
		{
			"\Manticore_Uniform\Uniform\Winter\Data\VSM_Vest_Chestrig_00.paa",
			"\Manticore_Uniform\Uniform\Winter\Data\VSM_Vest_BattleBelt_00.paa",
			"\Manticore_Uniform\Uniform\Winter\Data\VSM_Vest_BoxMag_00.paa",
			"\Manticore_Uniform\Uniform\Winter\Data\VSM_Vest_DropHolster_00.paa",
			"\Manticore_Uniform\Uniform\Winter\Data\VSM_Vest_Serpa_00.paa",
			"\Manticore_Uniform\Uniform\Winter\Data\VSM_Vest_Gear_00.paa",
			"\Manticore_Uniform\Uniform\Winter\Data\VSM_Vest_Radio_00.paa",
			"\Manticore_Uniform\Uniform\Winter\Data\VSM_Vest_RAV_00.paa",
			"\Manticore_Uniform\Uniform\Winter\Data\VSM_Vest_Pouches_00.paa"
		};
		//descriptionShort = "$STR_A3_SP_AL_IV";
	};

	class VSM_Mich2000_MulticamTropic;
	class Manticore_Uniform_Uniform_Winter_Mich2000 : VSM_Mich2000_MulticamTropic
	{
		author = "Mattress, VanSchmoozin";
		scope = 2;
		displayName = "Manticam Winter MICH 2000";
		picture = "\VSM_Vests\Icons\VSM_MulticamTropic.paa";
		hiddenSelections[] =
		{
			"_helmBase",
			"_helmStraps"
		};
		hiddenSelectionsTextures[] =
		{
			"\Manticore_Uniform\Uniform\Winter\Data\VSM_Helmet_Mich2000_Winter_00.paa",
			"\Manticore_Uniform\Uniform\Winter\Data\VSM_Helmet_ops_Winter_00.paa"
		};
	};
};