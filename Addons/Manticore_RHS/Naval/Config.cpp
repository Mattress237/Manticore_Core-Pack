class CfgPatches
{
	class Manticore_RHS_Naval
	{
		addonRootClass = "Manticore_RHS";
		units[] = 
		{
		};
		weapons[] = {};
		requiredAddons[] =
		{
			"Manticore_RHS",
			"rhsusf_c_markvsoc"
		};
	};
};

class CfgVehicles
{
	class rhsusf_mkvsoc;

	class Manticore_MkVSOC_Base : rhsusf_mkvsoc
	{
		displayName = "Mk. V SOC";
		scope = 0;
		side = 1;
		//crew = "";
		faction = "Manticore_Faction";
	};
};