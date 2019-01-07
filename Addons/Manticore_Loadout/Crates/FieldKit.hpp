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