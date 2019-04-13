class CfgPatches
{
	class Manticore_Uniform_Winter
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
	//Uniform
	class VSM_Multicam_Crye_Uniform;
	class Manticore_ManticamCryeWinter_00_Base : VSM_Multicam_Crye_Uniform
	{
		author = "Mattress, VanSchmoozin";
		scope = 2;
		displayName = "Manticam Winter Crye Uniform (m0)";
		faction = "Manticore_Faction";
		uniformClass = "Manticore_ManticamCryeWinter_00";
		picture = "\Manticore_Uniform\Uniform\Winter\Data\Icon\Manticam_Logo_Winter.paa";
		hiddenSelections[] =
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[] =
		{
			"\Manticore_Uniform\Uniform\Winter\Data\VSM_Uniform_ARD_ManticamWinter_00.paa"
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
	class Manticore_ManticamCryeWinter_01_Base : Manticore_ManticamCryeWinter_00_Base
	{
		author = "Mattress, VanSchmoozin";
		displayName = "Manticam Winter Crye Uniform (m1)";
		uniformClass = "Manticore_ManticamCryeWinter_01_Base";
		hiddenSelections[] =
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[] =
		{
			"\Manticore_Uniform\Uniform\Winter\Data\VSM_Uniform_ARD_ManticamWinter_01.paa"
		};
	};
	class Manticore_ManticamCryeWinter_02_Base : Manticore_ManticamCryeWinter_00_Base
	{
		author = "Mattress, VanSchmoozin";
		displayName = "Manticam Winter Crye Uniform (m2)";
		uniformClass = "Manticore_ManticamCryeWinter_02_Base";
		hiddenSelections[] =
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[] =
		{
			"\Manticore_Uniform\Uniform\Winter\Data\VSM_Uniform_ARD_ManticamWinter_02.paa"
		};
	};
	//Backpack
	class B_AssaultPack_Base;
	class Manticore_ManticamCompactBagWinter : B_AssaultPack_Base
	{
		scope = 2;
		displayName = "Manticam Winter Compact Bag";
		author = "Mattress";
		picture = "\Manticore_Uniform\Uniform\Winter\Data\Icon\Manticam_Logo_Winter.paa";
		hiddenSelectionsTextures[] =
		{
			"\Manticore_Uniform\Uniform\Winter\Data\Vanilla_Backpack_Compact_ManticamWinter_00.paa"
		};
	};
	class Manticore_ManticamCompactBagWinter_Med : B_AssaultPack_Base
	{
		scope = 2;
		displayName = "Manticam Winter Compact Bag (Medical)";
		author = "Mattress";
		picture = "\Manticore_Uniform\Uniform\Winter\Data\Icon\Manticam_Logo_Winter.paa";
		hiddenSelectionsTextures[] =
		{
			"\Manticore_Uniform\Uniform\Winter\Data\Vanilla_Backpack_Compact_ManticamWinter_00_Med.paa"
		};
	};
	class B_Kitbag_Base;
	class Manticore_ManticamKitbagWinter : B_Kitbag_Base
	{
		scope = 2;
		displayName = "Manticam Winter Kitbag";
		author = "Mattress";
		picture = "\Manticore_Uniform\Uniform\Winter\Data\Icon\Manticam_Logo_Winter.paa";
		hiddenSelectionsTextures[] =
		{
			"\Manticore_Uniform\Uniform\Winter\Data\Vanilla_Backpack_Kitbag_ManticamWinter_00.paa"
		};
	};
	class Manticore_ManticamKitbagWinter_Med : B_Kitbag_Base
	{
		scope = 2;
		displayName = "Manticam Winter Kitbag (Medical)";
		author = "Mattress";
		picture = "\Manticore_Uniform\Uniform\Winter\Data\Icon\Manticam_Logo_Winter.paa";
		hiddenSelectionsTextures[] =
		{
			"\Manticore_Uniform\Uniform\Winter\Data\Vanilla_Backpack_Kitbag_ManticamWinter_00_Med.paa"
		};
	};
	class B_Carryall_Base;
	class Manticore_ManticamCarryallBagWinter : B_Carryall_Base
	{
		scope = 2;
		displayName = "Manticam Winter Carryall Bag";
		author = "Mattress";
		picture = "\Manticore_Uniform\Uniform\Winter\Data\Icon\Manticam_Logo_Winter.paa";
		hiddenSelectionsTextures[] =
		{
			"\Manticore_Uniform\Uniform\Winter\Data\Vanilla_Backpack_Carryall_ManticamWinter_00.paa"
		};
	};
	class Manticore_ManticamCarryallBagWinter_Med : B_Carryall_Base
	{
		scope = 2;
		displayName = "Manticam Winter Carryall Bag (Medical)";
		author = "Mattress";
		picture = "\Manticore_Uniform\Uniform\Winter\Data\Icon\Manticam_Logo_Winter.paa";
		hiddenSelectionsTextures[] =
		{
			"\Manticore_Uniform\Uniform\Winter\Data\Vanilla_Backpack_Carryall_ManticamWinter_00_Med.paa"
		};
	};
	//TFAR Backpacks
	class TFAR_rt1523g;
	class Manticore_ManticamRT1523gWinter : TFAR_rt1523g
	{
		author = "Mattress, Raspu, Gandi, Nkey";
		displayName = "RT-1523G (ASIP) Manticam Winter";
		//scope = 2;
		//scopeCurator = 2;
		//descriptionShort = "$STR_tfar_backpacks_RT1523G_Desc";
		picture = "\Manticore_Uniform\Uniform\Winter\Data\Icon\Manticam_Logo_Winter.paa";
		maximumLoad = 50;
		mass = 80;
		hiddenSelections[] =
		{
			"camo"
		};
		hiddenSelectionsTextures[] =
		{
			"\Manticore_Uniform\Uniform\Winter\Data\TFAR_rt1523g_ManticamWinter_00.paa"
		};
		/*tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "rt1523g_radio_dialog";
		tf_subtype = "digital_lr";*/
	};
	class TFAR_rt1523g_big;
	class Manticore_ManticamRT1523gBigWinter : TFAR_rt1523g_big
	{
		author = "Mattress, Raspu, Gandi, Nkey";
		displayName = "RT-1523G (ASIP) Big Manticam Winter";
		//descriptionShort = "$STR_tfar_backpacks_RT1523G_Big_Desc";
		picture = "\Manticore_Uniform\Uniform\Winter\Data\Icon\Manticam_Logo_Winter.paa";
		maximumLoad = 160;
		mass = 160;
		hiddenSelections[] =
		{
			"camo"
		};
		hiddenSelectionsTextures[] =
		{
			"\Manticore_Uniform\Uniform\Winter\Data\TFAR_rt1523gBig_ManticamWinter_00.paa"

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
	//Uniforms
	class VSM_Multicam_Crye_Camo;
	class Manticore_ManticamCryeWinter_00 : VSM_Multicam_Crye_Camo
	{
		scope = 2;
		displayName = "Manticore Winter Crye Uniform (m0)";
		author = "Mattress, VanSchmoozin";
		picture = "\Manticore_Uniform\Uniform\Winter\Data\Icon\Manticam_Logo_Winter.paa";
		class ItemInfo : UniformItem
		{
			uniformClass = "Manticore_ManticamCryeWinter_00_Base";
			containerClass = Supply70;
			mass = 35;
		};
	};
	class Manticore_ManticamCryeWinter_01 : Manticore_ManticamCryeWinter_00
	{
		displayName = "Manticore Winter Crye Uniform (m1)";
		author = "Mattress, VanSchmoozin";
		class ItemInfo : UniformItem
		{
			uniformClass = "Manticore_ManticamCryeWinter_01_Base";
			containerClass = Supply70;
			mass = 35;
		};
	};
	class Manticore_ManticamCryeWinter_02 : Manticore_ManticamCryeWinter_00
	{
		displayName = "Manticore Winter Crye Uniform (m2)";
		author = "Mattress, VanSchmoozin";
		class ItemInfo : UniformItem
		{
			uniformClass = "Manticore_ManticamCryeWinter_02_Base";
			containerClass = Supply70;
			mass = 35;
		};
	};
	//Vest
	class VSM_RAV_operator_MulticamTropic;
	class Manticore_ManticamRAVOperatorWinter : VSM_RAV_operator_MulticamTropic

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
			"\Manticore_Uniform\Uniform\Winter\Data\VSM_Vest_Chestrig_ManticamWinter_00.paa",
			"\Manticore_Uniform\Uniform\Winter\Data\VSM_Vest_BattleBelt_ManticamWinter_00.paa",
			"\Manticore_Uniform\Uniform\Winter\Data\VSM_Vest_DropHolster_ManticamWinter_00.paa",
			"\Manticore_Uniform\Uniform\Winter\Data\VSM_Vest_Serpa_ManticamWinter_00.paa",
			"\Manticore_Uniform\Uniform\Winter\Data\VSM_Vest_Gear_ManticamWinter_00.paa",
			"\Manticore_Uniform\Uniform\Winter\Data\VSM_Vest_Radio_ManticamWinter_00.paa",
			"\Manticore_Uniform\Uniform\Winter\Data\VSM_Vest_RAV_ManticamWinter_00.paa",
			"\Manticore_Uniform\Uniform\Winter\Data\VSM_Vest_Pouches_ManticamWinter_00.paa"
		};
		//descriptionShort = "$STR_A3_SP_AL_IV";
	};
	class VSM_RAV_MG_MulticamTropic;
	class Manticore_ManticamRAVGunnerWinter : VSM_RAV_MG_MulticamTropic
	{
		scope = 2;
		author = "Mattress, VanSchmoozin - Specter";
		displayName = "Manticam Winter Paraclete RAV(Gunner)";
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
			"\Manticore_Uniform\Uniform\Winter\Data\VSM_Vest_Chestrig_ManticamWinter_00.paa",
			"\Manticore_Uniform\Uniform\Winter\Data\VSM_Vest_BattleBelt_ManticamWinter_00.paa",
			"\Manticore_Uniform\Uniform\Winter\Data\VSM_Vest_BoxMag_ManticamWinter_00.paa",
			"\Manticore_Uniform\Uniform\Winter\Data\VSM_Vest_DropHolster_ManticamWinter_00.paa",
			"\Manticore_Uniform\Uniform\Winter\Data\VSM_Vest_Serpa_ManticamWinter_00.paa",
			"\Manticore_Uniform\Uniform\Winter\Data\VSM_Vest_Gear_ManticamWinter_00.paa",
			"\Manticore_Uniform\Uniform\Winter\Data\VSM_Vest_Radio_ManticamWinter_00.paa",
			"\Manticore_Uniform\Uniform\Winter\Data\VSM_Vest_RAV_ManticamWinter_00.paa",
			"\Manticore_Uniform\Uniform\Winter\Data\VSM_Vest_Pouches_ManticamWinter_00.paa"
		};
		//descriptionShort = "$STR_A3_SP_AL_IV";
	};
	class VSM_RAV_Breacher_MulticamTropic;
	class Manticore_ManticamRAVBreacherWinter : VSM_RAV_Breacher_MulticamTropic
	{
		scope = 2;
		author = "Mattress, VanSchmoozin - Specter";
		displayName = "Manticam Winter Paraclete RAV(Breacher)";
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
			"_VSMPouches",
			"_VSMButtPouch"
		};
		hiddenSelectionsTextures[] =
		{
			"\Manticore_Uniform\Uniform\Winter\Data\VSM_Vest_Chestrig_ManticamWinter_00.paa",
			"\Manticore_Uniform\Uniform\Winter\Data\VSM_Vest_BattleBelt_ManticamWinter_00.paa",
			"\Manticore_Uniform\Uniform\Winter\Data\VSM_Vest_DropHolster_ManticamWinter_00.paa",
			"\Manticore_Uniform\Uniform\Winter\Data\VSM_Vest_Serpa_ManticamWinter_00.paa",
			"\Manticore_Uniform\Uniform\Winter\Data\VSM_Vest_Gear_ManticamWinter_00.paa",
			"\Manticore_Uniform\Uniform\Winter\Data\VSM_Vest_Radio_ManticamWinter_00.paa",
			"\Manticore_Uniform\Uniform\Winter\Data\VSM_Vest_RAV_ManticamWinter_00.paa",
			"\Manticore_Uniform\Uniform\Winter\Data\VSM_Vest_Pouches_ManticamWinter_00.paa",
			"\Manticore_Uniform\Uniform\Winter\Data\VSM_Vest_ButtPouch_ManticamWinter_00.paa"
		};
		//descriptionShort = "$STR_A3_SP_AL_IV";
	};
	//Helmets
	class VSM_Mich2000_MulticamTropic;
	class Manticore_ManticamMich2000Winter_00 : VSM_Mich2000_MulticamTropic
	{
		author = "Mattress, VanSchmoozin";
		scope = 2;
		displayName = "Manticam Winter MICH 2000 (m0)";
		picture = "\Manticore_Uniform\Uniform\Winter\Data\Icon\Manticam_Logo_Winter.paa";
		hiddenSelections[] =
		{
			"_helmBase",
			"_helmStraps"
		};
		hiddenSelectionsTextures[] =
		{
			"\Manticore_Uniform\Uniform\Winter\Data\VSM_Helmet_Mich2000_ManticamWinter_00.paa",
			"\Manticore_Uniform\Uniform\Winter\Data\VSM_Helmet_ops_ManticamWinter_00.paa"
		};
	};
	class Manticore_ManticamMich2000Winter_01 : Manticore_ManticamMich2000Winter_00
	{
		author = "Mattress, VanSchmoozin";
		displayName = "Manticam Winter MICH 2000 (m1)";
		hiddenSelections[] =
		{
			"_helmBase",
			"_helmStraps"
		};
		hiddenSelectionsTextures[] =
		{
			"\Manticore_Uniform\Uniform\Winter\Data\VSM_Helmet_Mich2000_ManticamWinter_01.paa",
			"\Manticore_Uniform\Uniform\Winter\Data\VSM_Helmet_ops_ManticamWinter_00.paa"
		};
	};
	class Manticore_ManticamMich2000Winter_02 : Manticore_ManticamMich2000Winter_00
	{
		author = "Mattress, VanSchmoozin";
		displayName = "Manticam Winter MICH 2000 (m2)";
		hiddenSelections[] =
		{
			"_helmBase",
			"_helmStraps"
		};
		hiddenSelectionsTextures[] =
		{
			"\Manticore_Uniform\Uniform\Winter\Data\VSM_Helmet_Mich2000_ManticamWinter_02.paa",
			"\Manticore_Uniform\Uniform\Winter\Data\VSM_Helmet_ops_ManticamWinter_00.paa"
		};
	};
};