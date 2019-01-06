//Editor Notes
//Nameing: Kit = gun and ammo, Ammo = Ammo, General = Food, Water and Medical suply, 
//Field Kit = Resuply for a size of a group



///General
class Manticore_Loadout_Crate_General : Box_NATO_Equip_F
{
	displayName = "Equipment Crate (General) (TFM)";
	scope = 2;
	editorCategory = "Manticore_Categories";
	editorSubcategory = "Manticore_Categories_Supply";

	class TransportWeapons
	{
	};
	class TransportMagazines
	{
	};
	class TransportItems
	{
		_aceXDrink(80, 0, 0, 0, 0);
		_aceXFood(20, 20, 0, 20, 0, 0, 0, 20, 0, 0);
		
	};
	class TransportBackpacks
	{
	};
};
class Manticore_Loadout_Crate_Medical : Box_NATO_Equip_F
{
	displayName = "Equipment Crate (Medical) (TFM)";
	scope = 2;
	editorCategory = "Manticore_Categories";
	editorSubcategory = "Manticore_Categories_Supply";

	class TransportWeapons
	{
	};
	class TransportMagazines
	{
	};
	class TransportItems
	{
		_medicalBandage(70, 70, 70, 70);
		_medicalInjector(30, 30, 15, 15);
		_medicalSelin(20, 30, 20);
		_medicalAdv(2, 40, 2);
		_medicalMics(40, 20, 0);
		_aceXDrink(0, 20, 5, 5, 5);
		_aceXFood(10, 0, 10, 0, 0, 0, 0, 0, 10, 0);
	};
	class TransportBackpacks
	{
	};
};

///Ammo
class Manticore_Loadout_Crate_Ammo_StandardRifle : Box_NATO_Ammo_F
{
	displayName = "Ammocrate (G36k(KSK)) (Ammo) (TFM)";
	scope = 2;
	editorCategory = "Manticore_Categories";
	editorSubcategory = "Manticore_Categories_Supply";

	class TransportWeapons
	{
	};
	class TransportMagazines
	{
		_standardMag(50, 50);
		_UGLHE(30);
		_UGLFlare(20, 10, 20, 0, 0);
		_UGLSmoke(30,10,10,10,10,0,0)
		
	};
	class TransportItems
	{
	};
	class TransportBackpacks
	{
		class _xx_VSM_OGA_OD_Backpack_Kitbag
		{
			backpack = "VSM_OGA_OD_Backpack_Kitbag";
			count = 1;
		};
	};
};
class Manticore_Loadout_Crate_Ammo_MAAWS_Vanila : Box_NATO_WpsLaunch_F
{
	displayName = "Launcher Crate (MAAWS) (Ammo) (TFM)";
	scope = 2;
	editorCategory = "Manticore_Categories";
	editorSubcategory = "Manticore_Categories_Supply";

	class TransportWeapons
	{
	};
	class TransportMagazines
	{
		class _xx_MRAWS_HEAT_F
		{
			magazine = "MRAWS_HEAT_F";
			count = 12;
		};
		class _xx_MRAWS_HE_F
		{
			magazine = "MRAWS_HE_F";
			count = 6;
		};
	};
	class TransportItems
	{
	};
	class TransportBackpacks
	{
		class _xx_VSM_OGA_OD_Backpack_Kitbag
		{
			backpack = "VSM_OGA_OD_Backpack_Kitbag";
			count = 1;
		};
	};
};
class Manticore_Loadout_Crate_Ammo_Metis_Vanila : Box_NATO_WpsLaunch_F
{
	displayName = "Launcher Crate (Metis-M) (Ammo) (TFM)";
	scope = 2;
	editorCategory = "Manticore_Categories";
	editorSubcategory = "Manticore_Categories_Supply";

	class TransportWeapons
	{
	};
	class TransportMagazines
	{
		class _xx_Vorona_HEAT
		{
			magazine = "Vorona_HEAT";
			count = 10;
		};
		class _xx_Vorona_HE
		{
			magazine = "Vorona_HE";
			count = 4;
		};
	};
	class TransportItems
	{
	};
	class TransportBackpacks
	{
		class _xx_VSM_OGA_OD_Backpack_Kitbag
		{
			backpack = "VSM_OGA_OD_Backpack_Kitbag";
			count = 1;
		};
	};
};
class Manticore_Loadout_Crate_Ammo_Stinger_RHS : Box_NATO_WpsLaunch_F
{
	displayName = "Launcher Crate (Stinger) (Ammo) (TFM)";
	scope = 2;
	editorCategory = "Manticore_Categories";
	editorSubcategory = "Manticore_Categories_Supply";

	class TransportWeapons
	{
	};
	class TransportMagazines
	{
		class _xx_rhs_fim92_mag
		{
			magazine = "rhs_fim92_mag";
			count = 12;
		};
	};
	class TransportItems
	{
	};
	class TransportBackpacks
	{
		class _xx_VSM_OGA_OD_Backpack_Kitbag
		{
			backpack = "VSM_OGA_OD_Backpack_Kitbag";
			count = 1;
		};
	};
};
class Manticore_Loadout_Crate_Ammo_Mk46_HLC : Box_NATO_Ammo_F
{
	displayName = "Ammocrate (Mk46) (Ammo) (TFM)";
	scope = 2;
	editorCategory = "Manticore_Categories";
	editorSubcategory = "Manticore_Categories_Supply";

	class TransportWeapons
	{
	};
	class TransportMagazines
	{
		class _xx_hlc_200rnd_556x45_M_SAW
		{
			magazine = "hlc_200rnd_556x45_M_SAW";
			count = 16;
		};
	};
	class TransportItems
	{
	};
	class TransportBackpacks
	{
	};
};
class Manticore_Loadout_Crate_Ammo_Mk48_HLC : Box_NATO_Ammo_F
{
	displayName = "Ammocrate (Mk48) (Ammo) (TFM)";
	scope = 2;
	editorCategory = "Manticore_Categories";
	editorSubcategory = "Manticore_Categories_Supply";

	class TransportWeapons
	{
	};
	class TransportMagazines
	{
		class _xx_hlc_100Rnd_762x51_Mdim_M60E4
		{
			magazine = "hlc_100Rnd_762x51_Mdim_M60E4";
			count = 10;
		};
		class _xx_hlc_100Rnd_762x51_M_M60E4
		{
			magazine = "hlc_100Rnd_762x51_M_M60E4";
			count = 10;
		};
	};
	class TransportItems
	{
	};
	class TransportBackpacks
	{
	};
};
class Manticore_Loadout_Crate_Ammo_M14_HLC : Box_NATO_Ammo_F
{
	displayName = "Ammocrate (Troy M14) (Ammo) (TFM)";
	scope = 2;
	editorCategory = "Manticore_Categories";
	editorSubcategory = "Manticore_Categories_Supply";

	class TransportWeapons
	{
	};
	class TransportMagazines
	{
		class _xx_hlc_20Rnd_762x51_T_M14
		{
			magazine = "hlc_20Rnd_762x51_T_M14";
			count = 20;
		};
		class _xx_hlc_20Rnd_762x51_B_M14
		{
			magazine = "hlc_20Rnd_762x51_B_M14";
			count = 20;
		};
	};
	class TransportItems
	{
	};
	class TransportBackpacks
	{
	};
};
class Manticore_Loadout_Crate_Ammo_Mk11_RHS : Box_NATO_Ammo_F
{
	displayName = "Ammocrate (Mk 11 Mod 0) (Ammo) (TFM)";
	scope = 2;
	editorCategory = "Manticore_Categories";
	editorSubcategory = "Manticore_Categories_Supply";

	class TransportWeapons
	{
	};
	class TransportMagazines
	{
		class _xx_rhsusf_20Rnd_762x51_SR25_m993_Mag
		{
			magazine = "rhsusf_20Rnd_762x51_SR25_m993_Mag";
			count = 10;
		};
		class _xx_rhsusf_20Rnd_762x51_SR25_m62_Mag
		{
			magazine = "rhsusf_20Rnd_762x51_SR25_m62_Mag";
			count = 10;
		};
		class _xx_rhsusf_20Rnd_762x51_SR25_m118_special_Mag
		{
			magazine = "rhsusf_20Rnd_762x51_SR25_m118_special_Mag";
			count = 10;
		};
		class _xx_ACE_10Rnd_762x51_M118LR_Mag
		{
			magazine = "ACE_10Rnd_762x51_M118LR_Mag";
			count = 10;
		};
	};
	class TransportItems
	{
	};
	class TransportBackpacks
	{
	};
};
class Manticore_Loadout_Crate_Ammo_M27_RHS : Box_NATO_Ammo_F
{
	displayName = "Ammocrate (M27 IAR) (Ammo) (TFM)";
	scope = 2;
	editorCategory = "Manticore_Categories";
	editorSubcategory = "Manticore_Categories_Supply";

	class TransportWeapons
	{
	};
	class TransportMagazines
	{
		class _xx_rhs_mag_100Rnd_556x45_M855A1_cmag_mixed
		{
			magazine = "rhs_mag_100Rnd_556x45_M855A1_cmag_mixed";
			count = 20;
		};
	};
	class TransportItems
	{
	};
	class TransportBackpacks
	{
	};
};

///Kit's
//Launcher
class Manticore_Loadout_Crate_Kit_MAAWS_Vanila : Box_NATO_WpsLaunch_F
{
	displayName = "Launcher Crate (MAAWS) (Kit) (TFM)";
	scope = 2;
	editorCategory = "Manticore_Categories";
	editorSubcategory = "Manticore_Categories_Supply";

	class TransportWeapons
	{
		class _xx_launch_MRAWS_green_F
		{
			weapon = "launch_MRAWS_green_F";
			count = 1;
		};
	};
	class TransportMagazines
	{
		class _xx_MRAWS_HEAT_F
		{
			magazine = "MRAWS_HEAT_F";
			count = 10;
		};
		class _xx_MRAWS_HE_F
		{
			magazine = "MRAWS_HE_F";
			count = 4;
		};
	};
	class TransportItems
	{
	};
	class TransportBackpacks
	{
		class _xx_VSM_OGA_OD_Backpack_Kitbag
		{
			backpack = "VSM_OGA_OD_Backpack_Kitbag";
			count = 1;
		};
	};
};
class Manticore_Loadout_Crate_Kit_Metis_Vanila : Box_NATO_WpsLaunch_F
{
	displayName = "Launcher Crate (Metis-M) (Kit) (TFM)";
	scope = 2;
	editorCategory = "Manticore_Categories";
	editorSubcategory = "Manticore_Categories_Supply";

	class TransportWeapons
	{
		class _xx_launch_O_Vorona_green_F
		{
			weapon = "launch_O_Vorona_green_F";
			count = 1;
		};
	};
	class TransportMagazines
	{
		class _xx_Vorona_HEAT
		{
			magazine = "Vorona_HEAT";
			count = 8;
		};
		class _xx_Vorona_HE
		{
			magazine = "Vorona_HE";
			count = 2;
		};
	};
	class TransportItems
	{
	};
	class TransportBackpacks
	{
		class _xx_VSM_OGA_OD_Backpack_Kitbag
		{
			backpack = "VSM_OGA_OD_Backpack_Kitbag";
			count = 1;
		};
	};
};
class Manticore_Loadout_Crate_Kit_Stinger_RHS : Box_NATO_WpsLaunch_F
{
	displayName = "Launcher Crate (Stinger) (Kit) (TFM)";
	scope = 2;
	editorCategory = "Manticore_Categories";
	editorSubcategory = "Manticore_Categories_Supply";

	class TransportWeapons
	{
		class _xx_rhs_weap_fim92
		{
			weapon = "rhs_weap_fim92";
			count = 1;
		};
	};
	class TransportMagazines
	{
		class _xx_rhs_fim92_mag
		{
			magazine = "rhs_fim92_mag";
			count = 8;
		};
	};
	class TransportItems
	{
	};
	class TransportBackpacks
	{
		class _xx_VSM_OGA_OD_Backpack_Kitbag
		{
			backpack = "VSM_OGA_OD_Backpack_Kitbag";
			count = 1;
		};
	};
};
class Manticore_Loadout_Crate_Kit_M136_RHS : Box_NATO_WpsLaunch_F
{
	displayName = "Launcher Crate (M136) (Kit) (TFM)";
	scope = 2;
	editorCategory = "Manticore_Categories";
	editorSubcategory = "Manticore_Categories_Supply";

	class TransportWeapons
	{
		_standardATTub(2, 4, 2);
	};
	class TransportMagazines
	{
	};
	class TransportItems
	{
	};
	class TransportBackpacks
	{
	};
};
//Rifle
class Manticore_Loadout_Crate_Kit_StandardRifle : Box_NATO_Wps_F
{
	displayName = "Weapons Crate (G36k(KSK)) (Kit) (TFM)";
	scope = 2;
	editorCategory = "Manticore_Categories";
	editorSubcategory = "Manticore_Categories_Supply";

	class TransportWeapons
	{
		_standardRifle(2, 1, 0);
	};
	class TransportMagazines
	{
		_standardMag(30, 30);
		_UGLFlare(15, 5, 10, 5, 0);
		_UGLSmoke(15, 10, 5, 5, 15, 0, 5);
		_UGLHE(20);
	};
	class TransportItems
	{
		class _xx_acc_pointer_IR
		{
			name = "acc_pointer_IR";
			count = 3;
		};
		class _xx_rhsusf_acc_g33_xps3
		{
			name = "rhsusf_acc_g33_xps3";
			count = 3;
		};
	};
	class TransportBackpacks
	{
	};
};
class Manticore_Loadout_Crate_Kit_Mk46_HLC : Box_NATO_Wps_F
{
	displayName = "Weapons Crate (mk46) (Kit) (TFM)";
	scope = 2;
	editorCategory = "Manticore_Categories";
	editorSubcategory = "Manticore_Categories_Supply";

	class TransportWeapons
	{
		class _xx_hlc_lmg_mk46
		{
			weapon = "hlc_lmg_mk46";
			count = 2;
		};
	};
	class TransportMagazines
	{
		class _xx_hlc_200rnd_556x45_M_SAW
		{
			magazine = "hlc_200rnd_556x45_M_SAW";
			count = 12;
		};
	};
	class TransportItems
	{
		class _xx_acc_pointer_IR
		{
			name = "acc_pointer_IR";
			count = 2;
		};
		class _xx_rhsusf_acc_g33_xps3
		{
			name = "rhsusf_acc_g33_xps3";
			count = 2;
		};
		class _xx_bipod_01_F_blk
		{
			name = "bipod_01_F_blk";
			count = 2;
		};
	};
	class TransportBackpacks
	{
		class _xx_VSM_OGA_OD_Backpack_Kitbag
		{
			backpack = "VSM_OGA_OD_Backpack_Kitbag";
			count = 1;
		};
	};
};
class Manticore_Loadout_Crate_Kit_Mk48_HLC : Box_NATO_Wps_F
{
	displayName = "Weapons Crate (Mk48) (Kit) (TFM)";
	scope = 2;
	editorCategory = "Manticore_Categories";
	editorSubcategory = "Manticore_Categories_Supply";

	class TransportWeapons
	{
		class _xx_hlc_lmg_mk48
		{
			weapon = "hlc_lmg_mk48";
			count = 2;
		};
	};
	class TransportMagazines
	{
		class _xx_hlc_100Rnd_762x51_Mdim_M60E4
		{
			magazine = "hlc_100Rnd_762x51_Mdim_M60E4";
			count = 10;
		};
		class _xx_hlc_100Rnd_762x51_M_M60E4
		{
			magazine = "hlc_100Rnd_762x51_M_M60E4";
			count = 10;
		};
	};
	class TransportItems
	{
		class _xx_acc_pointer_IR
		{
			name = "acc_pointer_IR";
			count = 2;
		};
		class _xx_rhsusf_acc_g33_xps3
		{
			name = "rhsusf_acc_g33_xps3";
			count = 2;
		};
		class _xx_bipod_01_F_blk
		{
			name = "bipod_01_F_blk";
			count = 2;
		};
	};
	class TransportBackpacks
	{
		class _xx_VSM_OGA_OD_Backpack_Kitbag
		{
			backpack = "VSM_OGA_OD_Backpack_Kitbag";
			count = 1;
		};
	};
};
class Manticore_Loadout_Crate_Kit_M14_HLC : Box_NATO_Wps_F
{
	displayName = "Weapons Crate (Troy M14) (Kit) (TFM)";
	scope = 2;
	editorCategory = "Manticore_Categories";
	editorSubcategory = "Manticore_Categories_Supply";

	class TransportWeapons
	{
		class _xx_hlc_rifle_m14sopmod
		{
			weapon = "hlc_rifle_m14sopmod";
			count = 2;
		};
	};
	class TransportMagazines
	{
		class _xx_hlc_20Rnd_762x51_T_M14
		{
			magazine = "hlc_20Rnd_762x51_T_M14";
			count = 12;
		};
		class _xx_hlc_20Rnd_762x51_B_M14
		{
			magazine = "hlc_20Rnd_762x51_B_M14";
			count = 12;
		};
	};
	class TransportItems
	{
		class _xx_bipod_01_F_blk
		{
			name = "bipod_01_F_blk";
			count = 2;
		};
		class _xx_acc_pointer_IR
		{
			name = "acc_pointer_IR";
			count = 2;
		};
		class _xx_rhsusf_acc_ACOG_RMR
		{
			name = "rhsusf_acc_ACOG_RMR";
			count = 2;
		};
	};
	class TransportBackpacks
	{
	};
};
class Manticore_Loadout_Crate_Kit_Mk11_RHS : Box_NATO_Wps_F
{
	displayName = "Weapons Crate (Mk 11 Mod 0) (Kit) (TFM)";
	scope = 2;
	editorCategory = "Manticore_Categories";
	editorSubcategory = "Manticore_Categories_Supply";

	class TransportWeapons
	{
		class _xx_hlc_rifle_m14sopmod
		{
			weapon = "rhs_weap_sr25";
			count = 2;
		};
	};
	class TransportMagazines
	{
		class _xx_rhsusf_20Rnd_762x51_SR25_m993_Mag
		{
			magazine = "rhsusf_20Rnd_762x51_SR25_m993_Mag";
			count = 5;
		};
		class _xx_rhsusf_20Rnd_762x51_SR25_m62_Mag
		{
			magazine = "rhsusf_20Rnd_762x51_SR25_m62_Mag";
			count = 5;
		};
		class _xx_rhsusf_20Rnd_762x51_SR25_m118_special_Mag
		{
			magazine = "rhsusf_20Rnd_762x51_SR25_m118_special_Mag";
			count = 5;
		};
		class _xx_ACE_10Rnd_762x51_M118LR_Mag
		{
			magazine = "ACE_10Rnd_762x51_M118LR_Mag";
			count = 5;
		};
	};
	class TransportItems
	{
		class _xx_bipod_01_F_blk
		{
			name = "bipod_01_F_blk";
			count = 2;
		};
		class _xx_acc_pointer_IR
		{
			name = "acc_pointer_IR";
			count = 2;
		};
		class _xx_optic_ams
		{
			name = "optic_ams";
			count = 2;
		};
	};
	class TransportBackpacks
	{
	};
};
class Manticore_Loadout_Crate_Kit_M27_RHS : Box_NATO_Wps_F
{
	displayName = "Weapons Crate (M27 IAR) (Kit) (TFM)";
	scope = 2;
	editorCategory = "Manticore_Categories";
	editorSubcategory = "Manticore_Categories_Supply";

	class TransportWeapons
	{
		class _xx_rhs_weap_m27iar
		{
			weapon = "rhs_weap_m27iar";
			count = 2;
		};
	};
	class TransportMagazines
	{
		class _xx_rhs_mag_100Rnd_556x45_M855A1_cmag_mixed
		{
			magazine = "rhs_mag_100Rnd_556x45_M855A1_cmag_mixed";
			count = 16;
		};
	};
	class TransportItems
	{
		class _xx_acc_pointer_IR
		{
			name = "acc_pointer_IR";
			count = 2;
		};
		class _xx_rhsusf_acc_g33_xps3
		{
			name = "rhsusf_acc_g33_xps3";
			count = 2;
		};
	};
	class TransportBackpacks
	{
		class _xx_VSM_OGA_OD_Backpack_Kitbag
		{
			backpack = "VSM_OGA_OD_Backpack_Kitbag";
			count = 1;
		};
	};
};
//Demo
class Manticore_Loadout_Crate_Demo_Demo : Box_NATO_Support_F
{
	displayName = "Support Crate (Demo) (Demo) (TFM)";
	scope = 2;
	editorCategory = "Manticore_Categories";
	editorSubcategory = "Manticore_Categories_Supply";

	class TransportWeapons
	{
		
	};
	class TransportMagazines
	{
		
	};
	class TransportItems
	{
		class _xx_DemoCharge_Remote_Mag
		{
			name = "DemoCharge_Remote_Mag";
			count = 10;
		};
		class _xx_SatchelCharge_Remote_Mag
		{
			name = "SatchelCharge_Remote_Mag";
			count = 5;
		};
		class _xx_ACE_Clacker
		{
			name = "ACE_Clacker";
			count = 1;
		};
	};
	class TransportBackpacks
	{
		class _xx_VSM_OGA_OD_Backpack_Kitbag
		{
			backpack = "VSM_OGA_OD_Backpack_Kitbag";
			count = 1;
		};
	};
};
class Manticore_Loadout_Crate_Demo_Mine : Box_NATO_Support_F
{
	displayName = "Support Crate (Mine) (Demo) (TFM)";
	scope = 2;
	editorCategory = "Manticore_Categories";
	editorSubcategory = "Manticore_Categories_Supply";

	class TransportWeapons
	{

	};
	class TransportMagazines
	{

	};
	class TransportItems
	{
		class _xx_SLAMDirectionalMine_Wire_Mag
		{
			name = "SLAMDirectionalMine_Wire_Mag";
			count = 5;
		};
		class _xx_ATMine_Range_Mag
		{
			name = "ATMine_Range_Mag";
			count = 7;
		};
		class _xx_APERSMineDispenser_Mag
		{
			name = "APERSBoundingMine_Range_Mag";
			count = 3;
		};
		class _xx_ClaymoreDirectionalMine_Remote_Mag
		{
			name = "ClaymoreDirectionalMine_Remote_Mag";
			count = 5;
		};
		class _xx_rhs_mine_msk40p_blue_mag
		{
			name = "rhs_mine_msk40p_blue_mag";
			count = 5;
		};
		class _xx_rhs_mine_msk40p_red_mag
		{
			name = "rhs_mine_msk40p_red_mag";
			count = 5;
		};
		class _xx_APERSMine_Range_Mag
		{
			name = "APERSMine_Range_Mag";
			count = 10;
		};
		class _xx_APERSBoundingMine_Range_Mag
		{
			name = "APERSBoundingMine_Range_Mag";
			count = 4;
		};
	};
	class TransportBackpacks
	{
		class _xx_VSM_OGA_OD_Backpack_Kitbag
		{
			backpack = "VSM_OGA_OD_Backpack_Kitbag";
			count = 1;
		};
	};
};
class Manticore_Loadout_Crate_Demo_DemoMine : Box_NATO_Support_F
{
	displayName = "Support Crate (Demo and mine) (Demo) (TFM)";
	scope = 2;
	editorCategory = "Manticore_Categories";
	editorSubcategory = "Manticore_Categories_Supply";

	class TransportWeapons
	{

	};
	class TransportMagazines
	{

	};
	class TransportItems
	{
		class _xx_DemoCharge_Remote_Mag
		{
			name = "DemoCharge_Remote_Mag";
			count = 5;
		};
		class _xx_SatchelCharge_Remote_Mag
		{
			name = "SatchelCharge_Remote_Mag";
			count = 2;
		};
		class _xx_ACE_Clacker
		{
			name = "ACE_Clacker";
			count = 1;
		};
		class _xx_SLAMDirectionalMine_Wire_Mag
		{
			name = "SLAMDirectionalMine_Wire_Mag";
			count = 5;
		};
		class _xx_ATMine_Range_Mag
		{
			name = "ATMine_Range_Mag";
			count = 4;
		};
		class _xx_APERSMineDispenser_Mag
		{
			name = "APERSBoundingMine_Range_Mag";
			count = 2;
		};
		class _xx_APERSMine_Range_Mag
		{
			name = "APERSMine_Range_Mag";
			count = 10;
		};
		class _xx_APERSBoundingMine_Range_Mag
		{
			name = "APERSBoundingMine_Range_Mag";
			count = 5;
		};
		class _xx_rhs_mine_msk40p_blue_mag
		{
			name = "rhs_mine_msk40p_blue_mag";
			count = 5;
		};
		class _xx_rhs_mine_msk40p_red_mag
		{
			name = "rhs_mine_msk40p_red_mag";
			count = 5;
		};
		class _xx_ClaymoreDirectionalMine_Remote_Mag
		{
			name = "ClaymoreDirectionalMine_Remote_Mag";
			count = 5;
		};
	};
	class TransportBackpacks
	{
		class _xx_VSM_OGA_OD_Backpack_Kitbag
		{
			backpack = "VSM_OGA_OD_Backpack_Kitbag";
			count = 1;
		};
	};
};

///Grenades and Smok
class Manticore_Loadout_Crate_Grenade_Grenade : Box_NATO_Support_F
{
	displayName = "Support Crate (Grenade) (Grenade) (TFM)";
	scope = 2;
	editorCategory = "Manticore_Categories";
	editorSubcategory = "Manticore_Categories_Supply";

	class TransportWeapons
	{

	};
	class TransportMagazines
	{

	};
	class TransportItems
	{
		_GrenadeOffensive(40, 20, 10);
		_GrenadeIR(20);
		_GrenadeSmoke(10, 20, 10, 10, 5, 5, 10);
		_GrenadeFlare(10, 0, 10, 10);
		
		
		class _xx_ACE_Chemlight_HiBlue
		{
			name = "ACE_Chemlight_HiBlue";
			count = 10;
		};
		class _xx_ACE_Chemlight_HiGreen
		{
			name = "ACE_Chemlight_HiGreen";
			count = 10;
		};
		class _xx_ACE_Chemlight_UltraHiOrange
		{
			name = "ACE_Chemlight_UltraHiOrange";
			count = 10;
		};
	};
	class TransportBackpacks
	{
		class _xx_VSM_OGA_OD_Backpack_Compact
		{
			backpack = "VSM_OGA_OD_Backpack_Compact";
			count = 1;
		};
	};
};
class Manticore_Loadout_Crate_Grenade_FlareChem : Box_NATO_Support_F
{
	displayName = "Support Crate (Flare and Chem) (Grenade) (TFM)";
	scope = 2;
	editorCategory = "Manticore_Categories";
	editorSubcategory = "Manticore_Categories_Supply";

	class TransportWeapons
	{

	};
	class TransportMagazines
	{

	};
	class TransportItems
	{
		_GrenadeFlare(30, 30, 30, 30);
		
		class _xx_ACE_Chemlight_IR
		{
			name = "ACE_Chemlight_IR";
			count = 30;
		};
		class _xx_Chemlight_blue
		{
			name = "Chemlight_blue";
			count = 30;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 30;
		};
		class _xx_ACE_Chemlight_HiRed
		{
			name = "ACE_Chemlight_HiRed";
			count = 30;
		};
		class _xx_ACE_Chemlight_HiBlue
		{
			name = "ACE_Chemlight_HiBlue";
			count = 30;
		};
		class _xx_ACE_Chemlight_HiGreen
		{
			name = "ACE_Chemlight_HiGreen";
			count = 30;
		};
		class _xx_ACE_Chemlight_UltraHiOrange
		{
			name = "ACE_Chemlight_UltraHiOrange";
			count = 30;
		};
	};
	class TransportBackpacks
	{
		class _xx_VSM_OGA_OD_Backpack_Compact
		{
			backpack = "VSM_OGA_OD_Backpack_Compact";
			count = 1;
		};
	};
};
class Manticore_Loadout_Crate_Grenade_SmokFlareChem : Box_NATO_Support_F
{
	displayName = "Support Crate (Smok, Flare and Chem) (Grenade) (TFM)";
	scope = 2;
	editorCategory = "Manticore_Categories";
	editorSubcategory = "Manticore_Categories_Supply";

	class TransportWeapons
	{

	};
	class TransportMagazines
	{

	};
	class TransportItems
	{
		_GrenadeSmoke(10, 30, 10, 10, 10, 10, 10);
		_GrenadeFlare(10, 10, 10, 10);
		class _xx_ACE_Chemlight_IR
		{
			name = "ACE_Chemlight_IR";
			count = 20;
		};
		class _xx_Chemlight_blue
		{
			name = "Chemlight_blue";
			count = 20;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 20;
		};
		class _xx_ACE_Chemlight_HiRed
		{
			name = "ACE_Chemlight_HiRed";
			count = 20;
		};
		class _xx_ACE_Chemlight_HiBlue
		{
			name = "ACE_Chemlight_HiBlue";
			count = 20;
		};
		class _xx_ACE_Chemlight_HiGreen
		{
			name = "ACE_Chemlight_HiGreen";
			count = 20;
		};
		class _xx_ACE_Chemlight_UltraHiOrange
		{
			name = "ACE_Chemlight_UltraHiOrange";
			count = 20;
		};
	};
	class TransportBackpacks
	{
		class _xx_VSM_OGA_OD_Backpack_Compact
		{
			backpack = "VSM_OGA_OD_Backpack_Compact";
			count = 1;
		};
	};
};
class Manticore_Loadout_Crate_Grenade_Smok : Box_NATO_Support_F
{
	displayName = "Support Crate (Smok) (Grenade) (TFM)";
	scope = 2;
	editorCategory = "Manticore_Categories";
	editorSubcategory = "Manticore_Categories_Supply";

	class TransportWeapons
	{

	};
	class TransportMagazines
	{

	};
	class TransportItems
	{
		_GrenadeSmoke(20, 60, 20, 20, 20, 20, 20);
	};
	class TransportBackpacks
	{
		class _xx_VSM_OGA_OD_Backpack_Compact
		{
			backpack = "VSM_OGA_OD_Backpack_Compact";
			count = 1;
		};
	};
};

///Static
class Manticore_Loadout_Crate_Static_M2_RHS : Box_NATO_Support_F
{
	displayName = "Support Crate (M2) (Static) (TFM)";
	scope = 2;
	editorCategory = "Manticore_Categories";
	editorSubcategory = "Manticore_Categories_Supply";

	class TransportWeapons
	{
	};
	class TransportMagazines
	{

	};
	class TransportItems
	{
	};
	class TransportBackpacks
	{
		class _xx_RHS_M2_Gun_Bag
		{
			backpack = "RHS_M2_Gun_Bag";
			count = 2;
		};
		class _xx_RHS_M2_Tripod_Bag
		{
			backpack = "RHS_M2_Tripod_Bag";
			count = 2;
		};
	};
};
class Manticore_Loadout_Crate_Static_Mk19_RHS : Box_NATO_Support_F
{
	displayName = "Support Crate (Mk19) (Static) (TFM)";
	scope = 2;
	editorCategory = "Manticore_Categories";
	editorSubcategory = "Manticore_Categories_Supply";

	class TransportWeapons
	{
	};
	class TransportMagazines
	{
	};
	class TransportItems
	{
	};
	class TransportBackpacks
	{
		class _xx_RHS_Mk19_Gun_Bag
		{
			backpack = "RHS_Mk19_Gun_Bag";
			count = 2;
		};
		class _xx_RHS_Mk19_Tripod_Bag
		{
			backpack = "RHS_Mk19_Tripod_Bag";
			count = 2;
		};
	};
};
class Manticore_Loadout_Crate_Static_TOW_RHS : Box_NATO_Support_F
{
	displayName = "Support Crate (TOW) (Static) (TFM)";
	scope = 2;
	editorCategory = "Manticore_Categories";
	editorSubcategory = "Manticore_Categories_Supply";

	class TransportWeapons
	{
	};
	class TransportMagazines
	{

	};
	class TransportItems
	{
	};
	class TransportBackpacks
	{
		class _xx_rhs_Tow_Gun_Bag
		{
			backpack = "rhs_Tow_Gun_Bag";
			count = 2;
		};
		class _xx_rhs_TOW_Tripod_Bag
		{
			backpack = "rhs_TOW_Tripod_Bag";
			count = 2;
		};
	};
};
class Manticore_Loadout_Crate_Static_Mk6_Vanila : Box_NATO_Support_F
{
	displayName = "Support Crate (Mk6 Mortar) (Static) (TFM)";
	scope = 2;
	editorCategory = "Manticore_Categories";
	editorSubcategory = "Manticore_Categories_Supply";

	class TransportWeapons
	{
	};
	class TransportMagazines
	{

	};
	class TransportItems
	{
	};
	class TransportBackpacks
	{
		class _xx_B_Mortar_01_support_F
		{
			backpack = "B_Mortar_01_support_F";
			count = 2;
		};
		class _xx_B_Mortar_01_weapon_F
		{
			backpack = "B_Mortar_01_weapon_F";
			count = 2;
		};
	};
};

///Field Kit
class Manticore_Loadout_Crate_Field_Fireteam : B_supplyCrate_F
{
	displayName = "Supply Crate (Field Kit Fireteam) (TFM)";
	scope = 2;
	editorCategory = "Manticore_Categories";
	editorSubcategory = "Manticore_Categories_Supply";

	class TransportWeapons
	{
		_standardRifle(1, 1, 0);
		class _xx_hlc_rifle_m14sopmod
		{
			weapon = "hlc_rifle_m14sopmod";
			count = 1;
		};
		class _xx_rhs_weap_m27iar
		{
			weapon = "rhs_weap_m27iar";
			count = 1;
		};
		class _xx_Laserdesignator_03
		{
			weapon = "Laserdesignator_03";
			count = 1;
		};
	};
	class TransportMagazines
	{
		_standardMag(20, 20);
		class _xx_hlc_20Rnd_762x51_T_M14
		{
			magazine = "hlc_20Rnd_762x51_T_M14";
			count = 6;
		};
		class _xx_hlc_20Rnd_762x51_B_M14
		{
			magazine = "hlc_20Rnd_762x51_B_M14";
			count = 6;
		};
		class _xx_rhs_mag_100Rnd_556x45_M855A1_cmag_mixed
		{
			magazine = "rhs_mag_100Rnd_556x45_M855A1_cmag_mixed";
			count = 5;
		};
		class _xx_MRAWS_HEAT_F
		{
			magazine = "MRAWS_HEAT_F";
			count = 4;
		};
		_UGLFlare(10, 10, 0, 0, 0);
		_UGLSmoke(10, 0, 10, 10, 0, 0, 0);
		_UGLHE(20);
		_UGLMics(3);
	};
	class TransportItems
	{
		_aceMics(5, 2, 2, 10, 2, 2, 2, 4);
		_medicalBandage(10, 10, 10, 10);
		_medicalSelin(0, 4, 0);
		_medicalInjector(5, 5, 0, 0);
		_medicalMics(5, 5, 0);
		_aceXDrink(10, 0, 0, 0, 0);
		_aceXFood(4, 0, 0, 4, 0, 0, 4, 0, 0, 0);

		class _xx_bipod_01_F_blk
		{
			name = "bipod_01_F_blk";
			count = 1;
		};
		class _xx_acc_pointer_IR
		{
			name = "acc_pointer_IR";
			count = 4;
		};
		class _xx_rhsusf_acc_g33_xps3
		{
			name = "rhsusf_acc_g33_xps3";
			count = 4;
		};
		class _xx_rhsusf_acc_ACOG_RMR
		{
			name = "rhsusf_acc_ACOG_RMR";
			count = 1;
		};
		class _xx_ToolKit
		{
			name = "ToolKit";
			count = 1;
		};
		class _xx_ACE_RangeCard
		{
			name = "ACE_RangeCard";
			count = 1;
		};
		class _xx_ACE_UAVBattery
		{
			name = "ACE_UAVBattery";
			count = 1;
		};
		class _xx_Laserbatteries
		{
			name = "Laserbatteries";
			count = 1;
		};
	};
	class TransportBackpacks
	{
		class _xx_VSM_OGA_OD_Backpack_Kitbag
		{
			backpack = "VSM_OGA_OD_Backpack_Kitbag";
			count = 1;
		};
	};
};
class Manticore_Loadout_Crate_Field_Squad : B_supplyCrate_F
{
	displayName = "Supply Crate (Field Kit Squad) (TFM)";
	scope = 2;
	editorCategory = "Manticore_Categories";
	editorSubcategory = "Manticore_Categories_Supply";

	class TransportWeapons
	{
		_standardRifle(1, 1, 0);
		_standardATTub(1, 1, 0);
		class _xx_hlc_lmg_mk46
		{
			weapon = "hlc_lmg_mk46";
			count = 1;
		};
		class _xx_hlc_rifle_m14sopmod
		{
			weapon = "hlc_rifle_m14sopmod";
			count = 1;
		};
		class _xx_rhs_weap_m27iar
		{
			weapon = "rhs_weap_m27iar";
			count = 1;
		};
		class _xx_Laserdesignator_03
		{
			weapon = "Laserdesignator_03";
			count = 1;
		};
	};
	class TransportMagazines
	{
		_standardMag(60, 60);
		_UGLSmoke(20, 0, 20, 20, 0, 0, 0);
		_UGLHE(40);
		_UGLMics(6);
		class _xx_hlc_200rnd_556x45_M_SAW
		{
			magazine = "hlc_200rnd_556x45_M_SAW";
			count = 3;
		};
		class _xx_hlc_20Rnd_762x51_T_M14
		{
			magazine = "hlc_20Rnd_762x51_T_M14";
			count = 6;
		};
		class _xx_hlc_20Rnd_762x51_B_M14
		{
			magazine = "hlc_20Rnd_762x51_B_M14";
			count = 6;
		};
		class _xx_rhs_mag_100Rnd_556x45_M855A1_cmag_mixed
		{
			magazine = "rhs_mag_100Rnd_556x45_M855A1_cmag_mixed";
			count = 5;
		};
		class _xx_MRAWS_HEAT_F
		{
			magazine = "MRAWS_HEAT_F";
			count = 5;
		};
		class _xx_3Rnd_UGL_FlareRed_F
		{
			magazine = "3Rnd_UGL_FlareRed_F";
			count = 5;
		};
		class _xx_3Rnd_UGL_FlareGreen_F
		{
			magazine = "3Rnd_UGL_FlareGreen_F";
			count = 5;
		};
		class _xx_3Rnd_UGL_FlareYellow_F
		{
			magazine = "3Rnd_UGL_FlareYellow_F";
			count = 5;
		};
		class _xx_3Rnd_SmokeRed_Grenade_shell
		{
			magazine = "3Rnd_SmokeRed_Grenade_shell";
			count = 5;
		};
		class _xx_3Rnd_SmokeYellow_Grenade_shell
		{
			magazine = "3Rnd_SmokeYellow_Grenade_shell";
			count = 5;
		};
		class _xx_3Rnd_SmokeGreen_Grenade_shell
		{
			magazine = "3Rnd_SmokeGreen_Grenade_shell";
			count = 5;
		};
		class _xx_3Rnd_HE_Grenade_shell
		{
			magazine = "3Rnd_HE_Grenade_shell";
			count = 10;
		};
	};
	class TransportItems
	{
		_aceMics(10, 2, 2, 12, 2, 2, 2, 12);
		_medicalBandage(20, 20, 20, 20);
		_medicalSelin(0, 8, 0);
		_medicalInjector(5, 5, 0, 0);
		_medicalMics(10, 15, 0);
		_aceXDrink(20, 0, 0, 0, 0);
		_aceXFood(8, 0, 0, 8, 0, 0, 8, 0, 0, 0);
		class _xx_bipod_01_F_blk
		{
			name = "bipod_01_F_blk";
			count = 1;
		};
		class _xx_acc_pointer_IR
		{
			name = "acc_pointer_IR";
			count = 5;
		};
		class _xx_rhsusf_acc_g33_xps3
		{
			name = "rhsusf_acc_g33_xps3";
			count = 5;
		};
		class _xx_rhsusf_acc_ACOG_RMR
		{
			name = "rhsusf_acc_ACOG_RMR";
			count = 1;
		};
		class _xx_ToolKit
		{
			name = "ToolKit";
			count = 1;
		};
		class _xx_ACE_RangeCard
		{
			name = "ACE_RangeCard";
			count = 1;
		};
		class _xx_ACE_UAVBattery
		{
			name = "ACE_UAVBattery";
			count = 1;
		};
		class _xx_Laserbatteries
		{
			name = "Laserbatteries";
			count = 1;
		};
	};
	class TransportBackpacks
	{
		class _xx_VSM_OGA_OD_Backpack_Kitbag
		{
			backpack = "VSM_OGA_OD_Backpack_Kitbag";
			count = 2;
		};
	};
};