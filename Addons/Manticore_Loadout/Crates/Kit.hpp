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