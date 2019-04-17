class CBA_Extended_EventHandlers_base;

class CfgVehicles {
	//Light
    class Manticore_PolarisUnarmed_Load;
    class Manticore_PolarisUnarmed_Winter : Manticore_PolarisUnarmed_Load
	{
		//TODO: Add textur and right crew
		scope = 2;
		//crew = "";
		faction = "Manticore_Faction_Winter";
		//hiddenSelectionsTextures[] = { };

        class EventHandlers; 
        class Turrets : Turrets {
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_01;
            class CargoTurret_04;
            class CargoTurret_05;
            class CargoTurret_06;
        };
    };
    class Manticore_PolarisArmed_Load;
    class Manticore_PolarisArmed_Winter : Manticore_PolarisArmed_Load
	{
		//TODO: Add textur and right crew
		scope = 2;
		//crew = "";
		faction = "Manticore_Faction_Winter";
		//hiddenSelectionsTextures[] = { };

        class EventHandlers; 
        class Turrets : Turrets {
            class TopTurret;
            class CodRiverTurret;
            class CargoTurret_02;
            class CargoTurret_03;
        };
    };
    class Manticore_PolarisAT_Load;
    class Manticore_PolarisAT_Winter : Manticore_PolarisAT_Load
	{
		//TODO: Add textur and right crew
		scope = 2;
		//crew = "";
		faction = "Manticore_Faction_Winter";
		//hiddenSelectionsTextures[] = { };

        class EventHandlers; 
        class Turrets : Turrets {
            class TopTurret;
            class CodRiverTurret;
            class CargoTurret_02;
            class CargoTurret_03;
        };
    };
    class Manticore_PolarisLight_Load;
    class Manticore_PolarisLight_Winter : Manticore_PolarisLight_Load
	{
		//TODO: Add textur and right crew
		scope = 2;
		//crew = "";
		faction = "Manticore_Faction_Winter";
		//hiddenSelectionsTextures[] = { };

        class EventHandlers; 
        class Turrets : Turrets {
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_01;
            class CargoTurret_04;
            class CargoTurret_05;
            class CargoTurret_06;
        };
    };
    class Manticore_Quadbike_Load;
    class Manticore_Quadbike_Winter : Manticore_Quadbike_Load
	{ 
		//TODO: Add textur and right crew
		scope = 2;
		//crew = "";
		faction = "Manticore_Faction_Winter";
		//hiddenSelectionsTextures[] = { };

		class EventHandlers; 
	};

	//Heli
    class Manticore_WildcatHeli_Load;
    class Manticore_WildcatHeli_Winter : Manticore_WildcatHeli_Load
	{
		//TODO: Add textur and right crew
		scope = 2;
		//crew = "";
		faction = "Manticore_Faction_Winter";
		//hiddenSelectionsTextures[] = { };

        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };
    class Manticore_WildcatDynamicHeli_Load;
    class Manticore_WildcatDynamicHeli_Winter : Manticore_WildcatDynamicHeli_Load
	{
		//TODO: Add textur and right crew
		scope = 2;
		//crew = "";
		faction = "Manticore_Faction_Winter";
		//hiddenSelectionsTextures[] = { };

        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
            class CargoTurret_01;
            class CargoTurret_02;
        };
    };
    class Manticore_MerlinHeli_Load;
    class Manticore_MerlinHeli_Winter : Manticore_MerlinHeli_Load
	{
		//TODO: Add textur and right crew
		scope = 2;
		//crew = "";
		faction = "Manticore_Faction_Winter";
		//hiddenSelectionsTextures[] = { };

        class EventHandlers; 
        class Turrets : Turrets {
            class CopilotTurret;
            class CargoTurret_01;
            class CargoTurret_02;
        };
    };
    class Manticore_AH6Heli_Load;
    class Manticore_AH6Heli_Winter : Manticore_AH6Heli_Load
	{
		//TODO: Add textur and right crew
		scope = 2;
		//crew = "";
		faction = "Manticore_Faction_Winter";
		//hiddenSelectionsTextures[] = { };

        class EventHandlers; 
        class Turrets : Turrets {
            class CopilotTurret;
        };
    };
    class Manticore_MH6Heli_Load;
    class Manticore_MH6Heli_Winter : Manticore_MH6Heli_Load
	{
		//TODO: Add textur and right crew
		scope = 2;
		//crew = "";
		faction = "Manticore_Faction_Winter";
		//hiddenSelectionsTextures[] = { };

        class EventHandlers; 
        class Turrets : Turrets {
            class CopilotTurret;
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
        };
    };
    class Manticore_MH6StrippedHeli_Load;
    class Manticore_MH6StrippedHeli_Winter : Manticore_MH6StrippedHeli_Load
	{
		//TODO: Add textur and right crew
		scope = 2;
		//crew = "";
		faction = "Manticore_Faction_Winter";
		//hiddenSelectionsTextures[] = { };

        class EventHandlers; 
        class Turrets : Turrets {
            class CopilotTurret;
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
        };
    };
/*
	class RHS_MELB_MH6M;
	class RHS_MELB_MH6M_OCimport_01 : RHS_MELB_MH6M { scope = 0; class EventHandlers; class Turrets; };
	class RHS_MELB_MH6M_OCimport_02 : RHS_MELB_MH6M_OCimport_01 {
		class EventHandlers;
		class Turrets : Turrets {
			class CopilotTurret;
			class CargoTurret_03;
			class CargoTurret_04;
			class CargoTurret_05;
			class CargoTurret_06;
			class CargoTurret_07;
			class CargoTurret_08;
		};
	};

	class Manticore_OH6MHeli_Base;
	class Manticore_RHS_Heli_OH6M_OCimport_01 : Manticore_OH6MHeli_Base { scope = 0; class EventHandlers; class Turrets; };
	class Manticore_RHS_Heli_OH6M_OCimport_02 : Manticore_RHS_Heli_OH6M_OCimport_01 {
		class EventHandlers;
		class Turrets : Turrets {
			class CopilotTurret;
			class CargoTurret_01;
			class CargoTurret_02;
		};
	};

	class Manticore_AH6MHeli_Base;
	class Manticore_RHS_Heli_AH6M_OCimport_01 : Manticore_AH6MHeli_Base { scope = 0; class EventHandlers; class Turrets; };
	class Manticore_RHS_Heli_AH6M_OCimport_02 : Manticore_RHS_Heli_AH6M_OCimport_01 {
		class EventHandlers;
		class Turrets : Turrets {
			class CopilotTurret;
		};
	};

	class Manticore_CH47FHeli_Base;
	class Manticore_RHS_Heli_CH47F_OCimport_01 : Manticore_CH47FHeli_Base { scope = 0; class EventHandlers; class Turrets; };
	class Manticore_RHS_Heli_CH47F_OCimport_02 : Manticore_RHS_Heli_CH47F_OCimport_01 {
		class EventHandlers;
		class Turrets : Turrets {
			class CopilotTurret;
			class MainTurret;
			class RightDoorGun;
			class CargoTurret_01;
			class CargoTurret_02;
		};
	};

	class Manticore_UH60MHeli_Base;
	class Manticore_RHS_Heli_UH60M_OCimport_01 : Manticore_UH60MHeli_Base { scope = 0; class EventHandlers; class Turrets; };
	class Manticore_RHS_Heli_UH60M_OCimport_02 : Manticore_RHS_Heli_UH60M_OCimport_01 {
		class EventHandlers;
		class Turrets : Turrets {
			class CopilotTurret;
			class MainTurret;
			class RightDoorGun;
			class CargoTurret_01;
			class CargoTurret_02;
			class CargoTurret_03;
			class CargoTurret_04;
		};
	};

	class Manticore_UH60M2Heli_Base;
	class Manticore_RHS_Heli_UH60M2_OCimport_01 : Manticore_UH60M2Heli_Base { scope = 0; class EventHandlers; class Turrets; };
	class Manticore_RHS_Heli_UH60M2_OCimport_02 : Manticore_RHS_Heli_UH60M2_OCimport_01 {
		class EventHandlers;
		class Turrets : Turrets {
			class CopilotTurret;
			class CargoTurret_01;
			class CargoTurret_02;
			class CargoTurret_03;
			class CargoTurret_04;
		};
	};

	class Manticore_UH60MEWSHeli_Base;
	class Manticore_RHS_Heli_UH60M_EWS_OCimport_01 : Manticore_UH60MEWSHeli_Base { scope = 0; class EventHandlers; class Turrets; };
	class Manticore_RHS_Heli_UH60M_EWS_OCimport_02 : Manticore_RHS_Heli_UH60M_EWS_OCimport_01 {
		class EventHandlers;
		class Turrets : Turrets {
			class CopilotTurret;
			class CargoTurret_01;
			class CargoTurret_02;
			class CargoTurret_03;
			class CargoTurret_04;
		};
	};

	class Manticore_UH60MESSSHeli_Base;
	class Manticore_RHS_Heli_UH60M_ESSS_OCimport_01 : Manticore_UH60MESSSHeli_Base { scope = 0; class EventHandlers; class Turrets; };
	class Manticore_RHS_Heli_UH60M_ESSS_OCimport_02 : Manticore_RHS_Heli_UH60M_ESSS_OCimport_01 {
		class EventHandlers;
		class Turrets : Turrets {
			class CopilotTurret;
			class CargoTurret_01;
			class CargoTurret_02;
			class CargoTurret_03;
			class CargoTurret_04;
		};
	};

	class Manticore_UH60MMEVHeli_Base;
	class Manticore_RHS_Heli_UH60M_MEV_OCimport_01 : Manticore_UH60MMEVHeli_Base { scope = 0; class EventHandlers; class Turrets; };
	class Manticore_RHS_Heli_UH60M_MEV_OCimport_02 : Manticore_RHS_Heli_UH60M_MEV_OCimport_01 {
		class EventHandlers;
		class Turrets : Turrets {
			class CopilotTurret;
			class CargoTurret_01;
			class CargoTurret_02;
			class CargoTurret_03;
			class CargoTurret_04;
		};
	};

	class Manticore_UH60MESSSMEVHeli_Base;
	class Manticore_RHS_Heli_UH60M_ESSS_MEV_OCimport_01 : Manticore_UH60MESSSMEVHeli_Base { scope = 0; class EventHandlers; class Turrets; };
	class Manticore_RHS_Heli_UH60M_ESSS_MEV_OCimport_02 : Manticore_RHS_Heli_UH60M_ESSS_MEV_OCimport_01 {
		class EventHandlers;
		class Turrets : Turrets {
			class CopilotTurret;
		};
	};

	class Manticore_AH64DHeli_Base;
	class Manticore_RHS_Heli_AH64D_OCimport_01 : Manticore_AH64DHeli_Base { scope = 0; class EventHandlers; class Turrets; };
	class Manticore_RHS_Heli_AH64D_OCimport_02 : Manticore_RHS_Heli_AH64D_OCimport_01 {
		class EventHandlers;
		class Turrets : Turrets {
			class MainTurret;
		};
	};

	class Manticore_CH53EHeli_Base;
	class Manticore_RHS_Heli_CH53E_OCimport_01 : Manticore_CH53EHeli_Base { scope = 0; class EventHandlers; class Turrets; };
	class Manticore_RHS_Heli_CH53E_OCimport_02 : Manticore_RHS_Heli_CH53E_OCimport_01 {
		class EventHandlers;
		class Turrets : Turrets {
			class MainTurret;
		};
	};

	class Manticore_UH1YHeli_Base;
	class Manticore_RHS_Heli_UH1Y_OCimport_01 : Manticore_UH1YHeli_Base { scope = 0; class EventHandlers; class Turrets; };
	class Manticore_RHS_Heli_UH1Y_OCimport_02 : Manticore_RHS_Heli_UH1Y_OCimport_01 {
		class EventHandlers;
		class Turrets : Turrets {
			class CopilotTurret;
			class MainTurret;
			class RightDoorGun;
			class CargoTurret_01;
			class CargoTurret_02;
			class CargoTurret_03;
			class CargoTurret_04;
			class CargoTurret_05;
			class CargoTurret_06;
		};
	};

	class Manticore_UH1YFFARHeli_Base;
	class Manticore_RHS_Heli_UH1Y_FFAR_OCimport_01 : Manticore_UH1YFFARHeli_Base { scope = 0; class EventHandlers; class Turrets; };
	class Manticore_RHS_Heli_UH1Y_FFAR_OCimport_02 : Manticore_RHS_Heli_UH1Y_FFAR_OCimport_01 {
		class EventHandlers;
		class Turrets : Turrets {
			class CopilotTurret;
			class CargoTurret_01;
			class CargoTurret_02;
			class CargoTurret_03;
			class CargoTurret_07;
			class CargoTurret_04;
			class CargoTurret_05;
			class CargoTurret_06;
			class CargoTurret_08;
		};
	};

	class Manticore_UH1YUnarmedHeli_Base;
	class Manticore_RHS_Heli_UH1Y_Unarmed_OCimport_01 : Manticore_UH1YUnarmedHeli_Base { scope = 0; class EventHandlers; class Turrets; };
	class Manticore_RHS_Heli_UH1Y_Unarmed_OCimport_02 : Manticore_RHS_Heli_UH1Y_Unarmed_OCimport_01 {
		class EventHandlers;
		class Turrets : Turrets {
			class CopilotTurret;
			class CargoTurret_01;
			class CargoTurret_02;
			class CargoTurret_03;
			class CargoTurret_07;
			class CargoTurret_04;
			class CargoTurret_05;
			class CargoTurret_06;
			class CargoTurret_08;
		};
	};

	class Manticore_AH1ZHeli_Base;
	class Manticore_RHS_Heli_AH1Z_OCimport_01 : Manticore_AH1ZHeli_Base { scope = 0; class EventHandlers; class Turrets; };
	class Manticore_RHS_Heli_AH1Z_OCimport_02 : Manticore_RHS_Heli_AH1Z_OCimport_01 {
		class EventHandlers;
		class Turrets : Turrets {
			class MainTurret;
		};
	};
*/

	//IFV
    class Manticore_BadgerIFV_Load;
    class Manticore_BadgerIFV_Winter : Manticore_BadgerIFV_Load
	{
		//TODO: Add textur and right crew
		scope = 2;
		//crew = "";
		faction = "Manticore_Faction_Winter";
		//hiddenSelectionsTextures[] = { };

        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };
/*
class Manticore_M2A3_Base;
	class Manticore_RHS_IFV_M2A3_OCimport_01 : Manticore_M2A3_Base { scope = 0; class EventHandlers; class Turrets; };
	class Manticore_RHS_IFV_M2A3_OCimport_02 : Manticore_RHS_IFV_M2A3_OCimport_01 {
		class EventHandlers;
		class Turrets : Turrets {
			class MainTurret;
		};
	};

	class Manticore_M2A3BUSKI_Base;
	class Manticore_RHS_IFV_M2A3_BUSKI_OCimport_01 : Manticore_M2A3BUSKI_Base { scope = 0; class EventHandlers; class Turrets; };
	class Manticore_RHS_IFV_M2A3_BUSKI_OCimport_02 : Manticore_RHS_IFV_M2A3_BUSKI_OCimport_01 {
		class EventHandlers;
		class Turrets : Turrets {
			class MainTurret;
		};
	};

	class Manticore_M2A3BUSKIII_Base;
	class Manticore_RHS_IFV_M2A3_BUSKIII_OCimport_01 : Manticore_M2A3BUSKIII_Base { scope = 0; class EventHandlers; class Turrets; };
	class Manticore_RHS_IFV_M2A3_BUSKIII_OCimport_02 : Manticore_RHS_IFV_M2A3_BUSKIII_OCimport_01 {
		class EventHandlers;
		class Turrets : Turrets {
			class MainTurret;
		};
	};

	class Manticore_M6A2_Base;
	class Manticore_RHS_IFV_M6A2_OCimport_01 : Manticore_M6A2_Base { scope = 0; class EventHandlers; class Turrets; };
	class Manticore_RHS_IFV_M6A2_OCimport_02 : Manticore_RHS_IFV_M6A2_OCimport_01 {
		class EventHandlers;
		class Turrets : Turrets {
			class MainTurret;
		};
	};
*/

	//APC
    class Manticore_NamerAPC_Load;
    class Manticore_NamerAPC_Winter : Manticore_NamerAPC_Load
	{
		//TODO: Add textur and right crew
		scope = 2;
		//crew = "";
		faction = "Manticore_Faction_Winter";
		//hiddenSelectionsTextures[] = { };

        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
            class CommanderOptics;
        };
    };
    class Manticore_NemmeraAPC_Load;
    class Manticore_NemmeraAPC_Winter : Manticore_NemmeraAPC_Load
	{
		//TODO: Add textur and right crew
		scope = 2;
		//crew = "";
		faction = "Manticore_Faction_Winter";
		//hiddenSelectionsTextures[] = { };

        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
            class CommanderOptics;
        };
    };
/*
class Manticore_M113A3M2_Base;
	class Manticore_RHS_APC_M113A3_M2_OCimport_01 : Manticore_M113A3M2_Base { scope = 0; class EventHandlers; class Turrets; };
	class Manticore_RHS_APC_M113A3_M2_OCimport_02 : Manticore_RHS_APC_M113A3_M2_OCimport_01 {
		class EventHandlers;
		class Turrets : Turrets {
			class MainTurret;
			class CargoTurret_01;
			class CargoTurret_02;
		};
	};

	class Manticore_M113A3M19_Base;
	class Manticore_RHS_APC_M113A3_M19_OCimport_01 : Manticore_M113A3M19_Base { scope = 0; class EventHandlers; class Turrets; };
	class Manticore_RHS_APC_M113A3_M19_OCimport_02 : Manticore_RHS_APC_M113A3_M19_OCimport_01 {
		class EventHandlers;
		class Turrets : Turrets {
			class MainTurret;
			class CargoTurret_01;
			class CargoTurret_02;
		};
	};

	class Manticore_M113A3M240_Base;
	class Manticore_RHS_APC_M113A3_M240_OCimport_01 : Manticore_M113A3M240_Base { scope = 0; class EventHandlers; class Turrets; };
	class Manticore_RHS_APC_M113A3_M240_OCimport_02 : Manticore_RHS_APC_M113A3_M240_OCimport_01 {
		class EventHandlers;
		class Turrets : Turrets {
			class MainTurret;
			class CargoTurret_01;
			class CargoTurret_02;
		};
	};

	class Manticore_M113A3Ammo_Base;
	class Manticore_RHS_APC_M113A3_Ammo_OCimport_01 : Manticore_M113A3Ammo_Base { scope = 0; class EventHandlers; class Turrets; };
	class Manticore_RHS_APC_M113A3_Ammo_OCimport_02 : Manticore_RHS_APC_M113A3_Ammo_OCimport_01 {
		class EventHandlers;
		class Turrets : Turrets {
			class MainTurret;
			class CargoTurret_01;
			class CargoTurret_02;
		};
	};

	class Manticore_M113A3Medical_Base;
	class Manticore_RHS_APC_M113A3_Medical_OCimport_01 : Manticore_M113A3Medical_Base { scope = 0; class EventHandlers; class Turrets; };
	class Manticore_RHS_APC_M113A3_Medical_OCimport_02 : Manticore_RHS_APC_M113A3_Medical_OCimport_01 {
		class EventHandlers;
		class Turrets : Turrets {
			class MainTurret;
			class CargoTurret_01;
			class CargoTurret_02;
		};
	};
*/

	//AA
    class Manticore_Bardelas_Load;
    class Manticore_Bardelas_Winter : Manticore_Bardelas_Load
	{
		//TODO: Add textur and right crew
		scope = 2;
		//crew = "";
		faction = "Manticore_Faction_Winter";
		//hiddenSelectionsTextures[] = { };

        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };

	//Tank
    class Manticore_Wiesel2Cannon_Load;
    class Manticore_Wiesel2Cannon_Winter : Manticore_Wiesel2Cannon_Load
	{
		//TODO: Add textur and right crew
		scope = 2;
		//crew = "";
		faction = "Manticore_Faction_Winter";
		//hiddenSelectionsTextures[] = { };

        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };
    class Manticore_Wiesel2AT_Load;
    class Manticore_Wiesel2AT_Winter : Manticore_Wiesel2AT_Load
	{
		//TODO: Add textur and right crew
		scope = 2;
		//crew = "";
		faction = "Manticore_Faction_Winter";
		//hiddenSelectionsTextures[] = { };

        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };
    class Manticore_Wiesel2Scout_Load;
    class Manticore_Wiesel2Scout_Winter : Manticore_Wiesel2Scout_Load
	{
		//TODO: Add textur and right crew
		scope = 2;
		//crew = "";
		faction = "Manticore_Faction_Winter";
		//hiddenSelectionsTextures[] = { };

        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };
    class Manticore_Leopard_Load;
    class Manticore_Leopard_Winter : Manticore_Leopard_Load
	{
		//TODO: Add textur and right crew
		scope = 2;
		//crew = "";
		faction = "Manticore_Faction_Winter";
		//hiddenSelectionsTextures[] = { };

        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };
    class Manticore_Rooikat_Load;
	class Manticore_Rooikat_Winter : Manticore_Rooikat_Load
	{
		//TODO: Add textur and right crew
		scope = 2;
		//crew = "";
		faction = "Manticore_Faction_Winter";
		//hiddenSelectionsTextures[] = { };

        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };
    class Manticore_RooikatUP_Load;
    class Manticore_RooikatUP_Winter : Manticore_RooikatUP_Load
	{
		//TODO: Add textur and right crew
		scope = 2;
		//crew = "";
		faction = "Manticore_Faction_Winter";
		//hiddenSelectionsTextures[] = { };

        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };

	//Artilery
    class Manticore_Sholef_Load;
    class Manticore_Sholef_Winter : Manticore_Sholef_Load
	{
		//TODO: Add textur and right crew
		scope = 2;
		//crew = "";
		faction = "Manticore_Faction_Winter";
		//hiddenSelectionsTextures[] = { };

        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };
    class Manticore_Seara_Load;
    class Manticore_Seara_Winter : Manticore_Seara_Load
	{
		//TODO: Add textur and right crew
		scope = 2;
		//crew = "";
		faction = "Manticore_Faction_Winter";
		//hiddenSelectionsTextures[] = { };

        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };
/*
class Manticore_M142_Base;
	class Manticore_RHS_Artillery_M142_OCimport_01 : Manticore_M142_Base { scope = 0; class EventHandlers; class Turrets; };
	class Manticore_RHS_Artillery_M142_OCimport_02 : Manticore_RHS_Artillery_M142_OCimport_01 {
		class EventHandlers;
		class Turrets : Turrets {
			class MainTurret;
			class CargoTurret_01;
		};
	};

	class Manticore_M109A6_Base;
	class Manticore_RHS_Artillery_M109A6_OCimport_01 : Manticore_M109A6_Base { scope = 0; class EventHandlers; class Turrets; };
	class Manticore_RHS_Artillery_M109A6_OCimport_02 : Manticore_RHS_Artillery_M109A6_OCimport_01 {
		class EventHandlers;
		class Turrets : Turrets {
			class MainTurret;
		};
	};
*/

	//Boat
    class Manticore_SpeedboatMinigun_Load;
    class Manticore_SpeedboatMinigun_Winter : Manticore_SpeedboatMinigun_Load
	{
		//TODO: Add textur and right crew
		scope = 2;
		//crew = "";
		faction = "Manticore_Faction_Winter";
		//hiddenSelectionsTextures[] = { };

        class EventHandlers; 
        class Turrets : Turrets {
            class FrontTurret;
            class RearTurret;
        };
    };
/*
 class Manticore_MkVSOC_Base;
	class Manticore_RHS_Naval_MkVSOC_OCimport_01 : Manticore_MkVSOC_Base { scope = 0; class EventHandlers; class Turrets; };
	class Manticore_RHS_Naval_MkVSOC_OCimport_02 : Manticore_RHS_Naval_MkVSOC_OCimport_01 {
		class EventHandlers;
		class Turrets : Turrets {
			class MainTurret;
			class m2_s_gunTurret;
			class m134_p_gunTurret;
			class mk19_s_gunTurret;
			class camera_b_gunTurret;
			class rem_spotL_gunTurret;
		};
	};
*/


	//Drone
    class Manticore_UCAVDrone_Load;
    class Manticore_UCAVDrone_Winter : Manticore_UCAVDrone_Load
	{
		//TODO: Add textur and right crew
		scope = 2;
		//crew = "";
		faction = "Manticore_Faction_Winter";
		//hiddenSelectionsTextures[] = { };

        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };
    class Manticore_FalconDrone_Load;
    class Manticore_FalconDrone_Winter : Manticore_FalconDrone_Load
	{
		//TODO: Add textur and right crew
		scope = 2;
		//crew = "";
		faction = "Manticore_Faction_Winter";
		//hiddenSelectionsTextures[] = { };

        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };
    class Manticore_AR2DarterDrone_Load;
    class Manticore_AR2DarterDrone_Winter : Manticore_AR2DarterDrone_Load
	{
		//TODO: Add textur and right crew
		scope = 2;
		//crew = "";
		faction = "Manticore_Faction_Winter";
		//hiddenSelectionsTextures[] = { };

        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };
    class Manticore_StomperDrone_Load;
    class Manticore_StomperDrone_Winter : Manticore_StomperDrone_Load
	{
		//TODO: Add textur and right crew
		scope = 2;
		//crew = "";
		faction = "Manticore_Faction_Winter";
		//hiddenSelectionsTextures[] = { };

        class EventHandlers; 
        class Turrets : Turrets {
            class CargoTurret_01;
        };
    };
    class Manticore_StomperArmedDrone_Load;
    class Manticore_StomperArmedDrone_Winter : Manticore_StomperArmedDrone_Load
	{
		//TODO: Add textur and right crew
		scope = 2;
		//crew = "";
		faction = "Manticore_Faction_Winter";
		//hiddenSelectionsTextures[] = { };

        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
            class CargoTurret_01;
        };
    };

    //Car
/*
class Manticore_M1043A2_Base;
	class Manticore_RHS_Humvee_M1043A2_OCimport_01 : Manticore_M1043A2_Base { scope = 0; class EventHandlers; class Turrets; };
	class Manticore_RHS_Humvee_M1043A2_OCimport_02 : Manticore_RHS_Humvee_M1043A2_OCimport_01 {
		class EventHandlers;
		class Turrets : Turrets {
			class CargoTurret_01;
			class CargoTurret_02;
			class CargoTurret_03;
		};
	};

	class Manticore_M1043A2M2_Base;
	class Manticore_RHS_Humvee_M1043A2_M2_OCimport_01 : Manticore_M1043A2M2_Base { scope = 0; class EventHandlers; class Turrets; };
	class Manticore_RHS_Humvee_M1043A2_M2_OCimport_02 : Manticore_RHS_Humvee_M1043A2_M2_OCimport_01 {
		class EventHandlers;
		class Turrets : Turrets {
			class M2_Turret;
			class CargoTurret_01;
			class CargoTurret_02;
			class CargoTurret_03;
		};
	};

	class Manticore_M1043A2M19_Base;
	class Manticore_RHS_Humvee_M1043A2_M19_OCimport_01 : Manticore_M1043A2M19_Base { scope = 0; class EventHandlers; class Turrets; };
	class Manticore_RHS_Humvee_M1043A2_M19_OCimport_02 : Manticore_RHS_Humvee_M1043A2_M19_OCimport_01 {
		class EventHandlers;
		class Turrets : Turrets {
			class M2_Turret;
			class CargoTurret_01;
			class CargoTurret_02;
			class CargoTurret_03;
		};
	};

	class Manticore_M1045A2TOW_Base;
	class Manticore_RHS_Humvee_M1045A2_TOW_OCimport_01 : Manticore_M1045A2TOW_Base { scope = 0; class EventHandlers; class Turrets; };
	class Manticore_RHS_Humvee_M1045A2_TOW_OCimport_02 : Manticore_RHS_Humvee_M1045A2_TOW_OCimport_01 {
		class EventHandlers;
		class Turrets : Turrets {
			class TOW_Turret;
			class CargoTurret_01;
			class CargoTurret_02;
			class CargoTurret_03;
		};
	};

	class Manticore_M11232DOpen_Base;
	class Manticore_RHS_Humvee_M1123_2D_Open_OCimport_01 : Manticore_M11232DOpen_Base { scope = 0; class EventHandlers; class Turrets; };
	class Manticore_RHS_Humvee_M1123_2D_Open_OCimport_02 : Manticore_RHS_Humvee_M1123_2D_Open_OCimport_01 {
		class EventHandlers;
		class Turrets : Turrets {
			class CargoTurret_01;
			class CargoTurret_02;
			class CargoTurret_03;
		};
	};

	class Manticore_M11232DHalf_Base;
	class Manticore_RHS_Humvee_M1123_2D_Half_OCimport_01 : Manticore_M11232DHalf_Base { scope = 0; class EventHandlers; class Turrets; };
	class Manticore_RHS_Humvee_M1123_2D_Half_OCimport_02 : Manticore_RHS_Humvee_M1123_2D_Half_OCimport_01 {
		class EventHandlers;
		class Turrets : Turrets {
			class CargoTurret_01;
			class CargoTurret_02;
		};
	};

	class Manticore_M11232DFull_Base;
	class Manticore_RHS_Humvee_M1123_2D_Full_OCimport_01 : Manticore_M11232DFull_Base { scope = 0; class EventHandlers; class Turrets; };
	class Manticore_RHS_Humvee_M1123_2D_Full_OCimport_02 : Manticore_RHS_Humvee_M1123_2D_Full_OCimport_01 {
		class EventHandlers;
		class Turrets : Turrets {
			class CargoTurret_01;
			class CargoTurret_02;
		};
	};

	class Manticore_M11234DOpen_Base;
	class Manticore_RHS_Humvee_M1123_4D_Open_OCimport_01 : Manticore_M11234DOpen_Base { scope = 0; class EventHandlers; class Turrets; };
	class Manticore_RHS_Humvee_M1123_4D_Open_OCimport_02 : Manticore_RHS_Humvee_M1123_4D_Open_OCimport_01 {
		class EventHandlers;
		class Turrets : Turrets {
			class CargoTurret_01;
			class CargoTurret_02;
			class CargoTurret_03;
			class CargoTurret_04;
			class CargoTurret_05;
		};
	};

	class Manticore_M11234DHalf_Base;
	class Manticore_RHS_Humvee_M1123_4D_Half_OCimport_01 : Manticore_M11234DHalf_Base { scope = 0; class EventHandlers; class Turrets; };
	class Manticore_RHS_Humvee_M1123_4D_Half_OCimport_02 : Manticore_RHS_Humvee_M1123_4D_Half_OCimport_01 {
		class EventHandlers;
		class Turrets : Turrets {
			class CargoTurret_01;
			class CargoTurret_02;
		};
	};

	class Manticore_M11234DFull_Base;
	class Manticore_RHS_Humvee_M1123_4D_Full_OCimport_01 : Manticore_M11234DFull_Base { scope = 0; class EventHandlers; };
	class Manticore_RHS_Humvee_M1123_4D_Full_OCimport_02 : Manticore_RHS_Humvee_M1123_4D_Full_OCimport_01 { scope = 0; class EventHandlers; };
*/

	//MRAP
/*
class Manticore_Cat1A2_Base;
	class Manticore_RHS_Mrap_Cat1A2_OCimport_01 : Manticore_Cat1A2_Base { scope = 0; class EventHandlers; class Turrets; };
	class Manticore_RHS_Mrap_Cat1A2_OCimport_02 : Manticore_RHS_Mrap_Cat1A2_OCimport_01 {
		class EventHandlers;
		class Turrets : Turrets {
			class CargoTurret_01;
		};
	};

	class Manticore_Cat1A2_M2_Base;
	class Manticore_RHS_Mrap_Cat1A2_M2_OCimport_01 : Manticore_Cat1A2_M2_Base { scope = 0; class EventHandlers; class Turrets; };
	class Manticore_RHS_Mrap_Cat1A2_M2_OCimport_02 : Manticore_RHS_Mrap_Cat1A2_M2_OCimport_01 {
		class EventHandlers;
		class Turrets : Turrets {
			class M2_Turret;
			class CargoTurret_01;
		};
	};

	class Manticore_Cat1A2Mk19_Base;
	class Manticore_RHS_Mrap_Cat1A2_Mk19_OCimport_01 : Manticore_Cat1A2Mk19_Base { scope = 0; class EventHandlers; class Turrets; };
	class Manticore_RHS_Mrap_Cat1A2_Mk19_OCimport_02 : Manticore_RHS_Mrap_Cat1A2_Mk19_OCimport_01 {
		class EventHandlers;
		class Turrets : Turrets {
			class M2_Turret;
			class CargoTurret_01;
		};
	};

	class Manticore_M1220_Base;
	class Manticore_RHS_Mrap_M1220_OCimport_01 : Manticore_M1220_Base { scope = 0; class EventHandlers; };
	class Manticore_RHS_Mrap_M1220_OCimport_02 : Manticore_RHS_Mrap_M1220_OCimport_01 { scope = 0; class EventHandlers; };

	class Manticore_M1220M2_Base;
	class Manticore_RHS_Mrap_M1220_M2_OCimport_01 : Manticore_M1220M2_Base { scope = 0; class EventHandlers; class Turrets; };
	class Manticore_RHS_Mrap_M1220_M2_OCimport_02 : Manticore_RHS_Mrap_M1220_M2_OCimport_01 {
		class EventHandlers;
		class Turrets : Turrets {
			class M2_Turret;
		};
	};

	class Manticore_M1220M2CROW_Base;
	class Manticore_RHS_Mrap_M1220_M2CROW_OCimport_01 : Manticore_M1220M2CROW_Base { scope = 0; class EventHandlers; class Turrets; };
	class Manticore_RHS_Mrap_M1220_M2CROW_OCimport_02 : Manticore_RHS_Mrap_M1220_M2CROW_OCimport_01 {
		class EventHandlers;
		class Turrets : Turrets {
			class M2_CROWS_Turret;
		};
	};

	class Manticore_M1220M19_Base;
	class Manticore_RHS_Mrap_M1220_M19_OCimport_01 : Manticore_M1220M19_Base { scope = 0; class EventHandlers; class Turrets; };
	class Manticore_RHS_Mrap_M1220_M19_OCimport_02 : Manticore_RHS_Mrap_M1220_M19_OCimport_01 {
		class EventHandlers;
		class Turrets : Turrets {
			class M2_Turret;
		};
	};

	class Manticore_M1230M2_Base;
	class Manticore_RHS_Mrap_M1230_M2_OCimport_01 : Manticore_M1230M2_Base { scope = 0; class EventHandlers; class Turrets; };
	class Manticore_RHS_Mrap_M1230_M2_OCimport_02 : Manticore_RHS_Mrap_M1230_M2_OCimport_01 {
		class EventHandlers;
		class Turrets : Turrets {
			class M2_Turret;
		};
	};

	class Manticore_M1230M19_Base;
	class Manticore_RHS_Mrap_M1230_M19_OCimport_01 : Manticore_M1230M19_Base { scope = 0; class EventHandlers; class Turrets; };
	class Manticore_RHS_Mrap_M1230_M19_OCimport_02 : Manticore_RHS_Mrap_M1230_M19_OCimport_01 {
		class EventHandlers;
		class Turrets : Turrets {
			class M2_Turret;
		};
	};

	class Manticore_M1220A1Med_Base;
	class Manticore_RHS_Mrap_M1220A1_Medical_OCimport_01 : Manticore_M1220A1Med_Base { scope = 0; class EventHandlers; };
	class Manticore_RHS_Mrap_M1220A1_Medical_OCimport_02 : Manticore_RHS_Mrap_M1220A1_Medical_OCimport_01 { scope = 0; class EventHandlers; };

	class Manticore_M113A3Unarmed_Base;
	class Manticore_RHS_APC_M113A3_Unarmed_OCimport_01 : Manticore_M113A3Unarmed_Base { scope = 0; class EventHandlers; class Turrets; };
	class Manticore_RHS_APC_M113A3_Unarmed_OCimport_02 : Manticore_RHS_APC_M113A3_Unarmed_OCimport_01 {
		class EventHandlers;
		class Turrets : Turrets {
			class MainTurret;
			class CargoTurret_01;
			class CargoTurret_02;
		};
	};
*/

	//Truck
/*
class Manticore_M1083A1P2_Base;
	class Manticore_RHS_Truck_M1083A1P2_OCimport_01 : Manticore_M1083A1P2_Base { scope = 0; class EventHandlers; class Turrets; };
	class Manticore_RHS_Truck_M1083A1P2_OCimport_02 : Manticore_RHS_Truck_M1083A1P2_OCimport_01 {
		class EventHandlers;
		class Turrets : Turrets {
			class CargoTurret_01;
			class CargoTurret_02;
		};
	};

	class Manticore_M1083A1P2B_Base;
	class Manticore_RHS_Truck_M1083A1P2_B_OCimport_01 : Manticore_M1083A1P2B_Base { scope = 0; class EventHandlers; class Turrets; };
	class Manticore_RHS_Truck_M1083A1P2_B_OCimport_02 : Manticore_RHS_Truck_M1083A1P2_B_OCimport_01 {
		class EventHandlers;
		class Turrets : Turrets {
			class CargoTurret_01;
			class CargoTurret_02;
		};
	};

	class Manticore_M1083A1P2BM2_Base;
	class Manticore_RHS_Truck_M1083A1P2_B_M2_OCimport_01 : Manticore_M1083A1P2BM2_Base { scope = 0; class EventHandlers; class Turrets; };
	class Manticore_RHS_Truck_M1083A1P2_B_M2_OCimport_02 : Manticore_RHS_Truck_M1083A1P2_B_M2_OCimport_01 {
		class EventHandlers;
		class Turrets : Turrets {
			class M2_Turret;
			class CargoTurret_01;
			class CargoTurret_02;
		};
	};

	class Manticore_M1083A1P2Flatbed_Base;
	class Manticore_RHS_Truck_M1083A1P2_Flatbed_OCimport_01 : Manticore_M1083A1P2Flatbed_Base { scope = 0; class EventHandlers; };
	class Manticore_RHS_Truck_M1083A1P2_Flatbed_OCimport_02 : Manticore_RHS_Truck_M1083A1P2_Flatbed_OCimport_01 { scope = 0; class EventHandlers; };

	class Manticore_M1083A1P2BFlatbed_Base;
	class Manticore_RHS_Truck_M1083A1P2_B_Flatbed_OCimport_01 : Manticore_M1083A1P2BFlatbed_Base { scope = 0; class EventHandlers; };
	class Manticore_RHS_Truck_M1083A1P2_B_Flatbed_OCimport_02 : Manticore_RHS_Truck_M1083A1P2_B_Flatbed_OCimport_01 { scope = 0; class EventHandlers; };

	class Manticore_M1083A1P2BM2Flatbed_Base;
	class Manticore_RHS_Truck_M1083A1P2_B_M2_Flatbed_OCimport_01 : Manticore_M1083A1P2BM2Flatbed_Base { scope = 0; class EventHandlers; class Turrets; };
	class Manticore_RHS_Truck_M1083A1P2_B_M2_Flatbed_OCimport_02 : Manticore_RHS_Truck_M1083A1P2_B_M2_Flatbed_OCimport_01 {
		class EventHandlers;
		class Turrets : Turrets {
			class M2_Turret;
		};
	};

	class Manticore_M977A4_Base;
	class Manticore_RHS_Truck_M977A4_OCimport_01 : Manticore_M977A4_Base { scope = 0; class EventHandlers; };
	class Manticore_RHS_Truck_M977A4_OCimport_02 : Manticore_RHS_Truck_M977A4_OCimport_01 { scope = 0; class EventHandlers; };

	class Manticore_M977A4B_Base;
	class Manticore_RHS_Truck_M977A4_B_OCimport_01 : Manticore_M977A4B_Base { scope = 0; class EventHandlers; };
	class Manticore_RHS_Truck_M977A4_B_OCimport_02 : Manticore_RHS_Truck_M977A4_B_OCimport_01 { scope = 0; class EventHandlers; };

	class Manticore_M977A4BM2_Base;
	class Manticore_RHS_Truck_M977A4_B_M2_OCimport_01 : Manticore_M977A4BM2_Base { scope = 0; class EventHandlers; class Turrets; };
	class Manticore_RHS_Truck_M977A4_B_M2_OCimport_02 : Manticore_RHS_Truck_M977A4_B_M2_OCimport_01 {
		class EventHandlers;
		class Turrets : Turrets {
			class M2_Turret;
		};
	};

	class Manticore_M977A4Repair_Base;
	class Manticore_RHS_Truck_M977A4_Repair_OCimport_01 : Manticore_M977A4Repair_Base { scope = 0; class EventHandlers; };
	class Manticore_RHS_Truck_M977A4_Repair_OCimport_02 : Manticore_RHS_Truck_M977A4_Repair_OCimport_01 { scope = 0; class EventHandlers; };

	class Manticore_M977A4BM2Repair_Base;
	class Manticore_RHS_Truck_M977A4_B_M2_Repair_OCimport_01 : Manticore_M977A4BM2Repair_Base { scope = 0; class EventHandlers; class Turrets; };
	class Manticore_RHS_Truck_M977A4_B_M2_Repair_OCimport_02 : Manticore_RHS_Truck_M977A4_B_M2_Repair_OCimport_01 {
		class EventHandlers;
		class Turrets : Turrets {
			class M2_Turret;
		};
	};

	class Manticore_M977A4Ammo_Base;
	class Manticore_RHS_Truck_M977A4_Ammo_OCimport_01 : Manticore_M977A4Ammo_Base { scope = 0; class EventHandlers; };
	class Manticore_RHS_Truck_M977A4_Ammo_OCimport_02 : Manticore_RHS_Truck_M977A4_Ammo_OCimport_01 { scope = 0; class EventHandlers; };

	class Manticore_M977A4BM2Ammo_Base;
	class Manticore_RHS_Truck_M977A4_B_M2_Ammo_OCimport_01 : Manticore_M977A4BM2Ammo_Base { scope = 0; class EventHandlers; class Turrets; };
	class Manticore_RHS_Truck_M977A4_B_M2_Ammo_OCimport_02 : Manticore_RHS_Truck_M977A4_B_M2_Ammo_OCimport_01 {
		class EventHandlers;
		class Turrets : Turrets {
			class M2_Turret;
		};
	};

	class Manticore_M978A4_Base;
	class Manticore_RHS_Truck_M978A4_OCimport_01 : Manticore_M978A4_Base { scope = 0; class EventHandlers; };
	class Manticore_RHS_Truck_M978A4_OCimport_02 : Manticore_RHS_Truck_M978A4_OCimport_01 { scope = 0; class EventHandlers; };

	class Manticore_M978A4B_Base;
	class Manticore_RHS_Truck_M978A4_B_OCimport_01 : Manticore_M978A4B_Base { scope = 0; class EventHandlers; };
	class Manticore_RHS_Truck_M978A4_B_OCimport_02 : Manticore_RHS_Truck_M978A4_B_OCimport_01 { scope = 0; class EventHandlers; };

*/


/* 
    
    

    

    

    
    

    

   
	class B_Soldier_F;
	class B_Soldier_F_OCimport_01 : B_Soldier_F { scope = 0; class EventHandlers; };
	class B_Soldier_F_OCimport_02 : B_Soldier_F_OCimport_01 { class EventHandlers; };


    class VSM_Multicam_Crye_Uniform;
    class VSM_Multicam_Crye_Uniform_OCimport_01 : VSM_Multicam_Crye_Uniform { scope = 0; class EventHandlers; };
    class VSM_Multicam_Crye_Uniform_OCimport_02 : VSM_Multicam_Crye_Uniform_OCimport_01 { class EventHandlers; };

    class B_Soldier_SL_F;
    class B_Soldier_SL_F_OCimport_01 : B_Soldier_SL_F { scope = 0; class EventHandlers; };
    class B_Soldier_SL_F_OCimport_02 : B_Soldier_SL_F_OCimport_01 { class EventHandlers; };

    class B_Soldier_GL_F;
    class B_Soldier_GL_F_OCimport_01 : B_Soldier_GL_F { scope = 0; class EventHandlers; };
    class B_Soldier_GL_F_OCimport_02 : B_Soldier_GL_F_OCimport_01 { class EventHandlers; };

    class B_Soldier_TL_F;
    class B_Soldier_TL_F_OCimport_01 : B_Soldier_TL_F { scope = 0; class EventHandlers; };
    class B_Soldier_TL_F_OCimport_02 : B_Soldier_TL_F_OCimport_01 { class EventHandlers; };

    class B_medic_F;
    class B_medic_F_OCimport_01 : B_medic_F { scope = 0; class EventHandlers; };
    class B_medic_F_OCimport_02 : B_medic_F_OCimport_01 { class EventHandlers; };

    class B_soldier_LAT_F;
    class B_soldier_LAT_F_OCimport_01 : B_soldier_LAT_F { scope = 0; class EventHandlers; };
    class B_soldier_LAT_F_OCimport_02 : B_soldier_LAT_F_OCimport_01 { class EventHandlers; };

    class B_soldier_AT_F;
    class B_soldier_AT_F_OCimport_01 : B_soldier_AT_F { scope = 0; class EventHandlers; };
    class B_soldier_AT_F_OCimport_02 : B_soldier_AT_F_OCimport_01 { class EventHandlers; };

    class B_HeavyGunner_F;
    class B_HeavyGunner_F_OCimport_01 : B_HeavyGunner_F { scope = 0; class EventHandlers; };
    class B_HeavyGunner_F_OCimport_02 : B_HeavyGunner_F_OCimport_01 { class EventHandlers; };

    class B_soldier_AR_F;
    class B_soldier_AR_F_OCimport_01 : B_soldier_AR_F { scope = 0; class EventHandlers; };
    class B_soldier_AR_F_OCimport_02 : B_soldier_AR_F_OCimport_01 { class EventHandlers; };

    class B_soldier_AA_F;
    class B_soldier_AA_F_OCimport_01 : B_soldier_AA_F { scope = 0; class EventHandlers; };
    class B_soldier_AA_F_OCimport_02 : B_soldier_AA_F_OCimport_01 { class EventHandlers; };

    class B_Pilot_F;
    class B_Pilot_F_OCimport_01 : B_Pilot_F { scope = 0; class EventHandlers; };
    class B_Pilot_F_OCimport_02 : B_Pilot_F_OCimport_01 { class EventHandlers; };

    class B_crew_F;
    class B_crew_F_OCimport_01 : B_crew_F { scope = 0; class EventHandlers; };
    class B_crew_F_OCimport_02 : B_crew_F_OCimport_01 { class EventHandlers; };

    class B_soldier_M_F;
    class B_soldier_M_F_OCimport_01 : B_soldier_M_F { scope = 0; class EventHandlers; };
    class B_soldier_M_F_OCimport_02 : B_soldier_M_F_OCimport_01 { class EventHandlers; };


    class Manticore_PolarisUnarmed_Load : Manticore_Vanilla_Light_Polaris_Unarmed_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "Polaris DAGOR";
        side = 1;
        faction = "Manticore_Faction_Winter";
        crew = "B_ManticoreFaction_Winter_Rifleman_01";

        class Turrets : Turrets {
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
            class CargoTurret_05 : CargoTurret_05 { gunnerType = ""; };
            class CargoTurret_06 : CargoTurret_06 { gunnerType = "B_ManticoreFaction_Winter_Rifleman_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };



    };

    class Manticore_PolarisArmed_Load : Manticore_Vanilla_Light_Polaris_Armed_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "Polaris DAGOR (XM312)";
        side = 1;
        faction = "Manticore_Faction_Winter";
        crew = "B_ManticoreFaction_Winter_Rifleman_01";

        class Turrets : Turrets {
            class TopTurret : TopTurret { gunnerType = "B_ManticoreFaction_Winter_Rifleman_01"; };
            class CodRiverTurret : CodRiverTurret { gunnerType = "B_ManticoreFaction_Winter_Rifleman_01"; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };



    };

    class Manticore_PolarisAT_Load : Manticore_Vanilla_Light_Polaris_AT_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "Polaris DAGOR (Mini-Spike AT)";
        side = 1;
        faction = "Manticore_Faction_Winter";
        crew = "B_ManticoreFaction_Winter_Rifleman_01";

        class Turrets : Turrets {
            class TopTurret : TopTurret { gunnerType = "B_ManticoreFaction_Winter_Rifleman_01"; };
            class CodRiverTurret : CodRiverTurret { gunnerType = "B_ManticoreFaction_Winter_Rifleman_01"; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };



    };

    class Manticore_PolarisLight_Load : Manticore_Vanilla_Light_Polaris_Light_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "Polaris DAGOR (Light)";
        side = 1;
        faction = "Manticore_Faction_Winter";
        crew = "B_ManticoreFaction_Winter_Rifleman_01";

        class Turrets : Turrets {
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
            class CargoTurret_05 : CargoTurret_05 { gunnerType = ""; };
            class CargoTurret_06 : CargoTurret_06 { gunnerType = "B_ManticoreFaction_Winter_Rifleman_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };



    };

    class Manticore_Quadbike_Load : Manticore_Vanilla_Light_Quadbike_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "Quadbike";
        side = 1;
        faction = "Manticore_Faction_Winter";
        crew = "B_ManticoreFaction_Winter_Rifleman_01";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };



    };

    class Manticore_WildcatHeli_Load : Manticore_Vanilla_Heli_Wildcat_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "Wildcat Transport";
        side = 1;
        faction = "Manticore_Faction_Winter";
        crew = "B_ManticoreFaction_Winter_Helicopter_Pilot_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "B_ManticoreFaction_Winter_Helicopter_Pilot_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };



    };

    class Manticore_WildcatDynamicHeli_Load : Manticore_Vanilla_Heli_Wildcat_dynamicLoadout_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "Wildcat DynamicLoadout";
        side = 1;
        faction = "Manticore_Faction_Winter";
        crew = "B_ManticoreFaction_Winter_Helicopter_Pilot_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "B_ManticoreFaction_Winter_Helicopter_Pilot_01"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };



    };

    class Manticore_MerlinHeli_Load : Manticore_Vanilla_Heli_Merlin_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "Merlin";
        side = 1;
        faction = "Manticore_Faction_Winter";
        crew = "B_ManticoreFaction_Winter_Helicopter_Pilot_01";

        class Turrets : Turrets {
            class CopilotTurret : CopilotTurret { gunnerType = "B_ManticoreFaction_Winter_Helicopter_Pilot_01"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };



    };

    class Manticore_AH6Heli_Load : Manticore_Vanilla_Heli_AH6_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "AH-6";
        side = 1;
        faction = "Manticore_Faction_Winter";
        crew = "B_ManticoreFaction_Winter_Helicopter_Pilot_01";

        class Turrets : Turrets {
            class CopilotTurret : CopilotTurret { gunnerType = "B_ManticoreFaction_Winter_Helicopter_Pilot_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };



    };

    class Manticore_MH6Heli_Load : Manticore_Vanilla_Heli_MH6_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "MH-6";
        side = 1;
        faction = "Manticore_Faction_Winter";
        crew = "B_ManticoreFaction_Winter_Helicopter_Pilot_01";

        class Turrets : Turrets {
            class CopilotTurret : CopilotTurret { gunnerType = "B_ManticoreFaction_Winter_Helicopter_Pilot_01"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };



    };

    class Manticore_MH6StrippedHeli_Load : Manticore_Vanilla_Heli_MH6_Stripped_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "MH-6 (Stripped)";
        side = 1;
        faction = "Manticore_Faction_Winter";
        crew = "B_ManticoreFaction_Winter_Helicopter_Pilot_01";

        class Turrets : Turrets {
            class CopilotTurret : CopilotTurret { gunnerType = "B_ManticoreFaction_Winter_Helicopter_Pilot_01"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };



    };

    class Manticore_BadgerIFV_Load : Manticore_Vanilla_IFV_Badger_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "Badger IFV";
        side = 1;
        faction = "Manticore_Faction_Winter";
        crew = "B_ManticoreFaction_Winter_Crewman_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "B_ManticoreFaction_Winter_Crewman_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };



    };

    class Manticore_NamerAPC_Load : Manticore_Vanilla_APC_Namer_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "Namer APC";
        side = 1;
        faction = "Manticore_Faction_Winter";
        crew = "B_ManticoreFaction_Winter_Crewman_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "B_ManticoreFaction_Winter_Crewman_01"; };
            class CommanderOptics : CommanderOptics { gunnerType = "B_ManticoreFaction_Winter_Crewman_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };



    };

    class Manticore_NemmeraAPC_Load : Manticore_Vanilla_APC_Nemmera_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "Nemmera CRV";
        side = 1;
        faction = "Manticore_Faction_Winter";
        crew = "B_ManticoreFaction_Winter_Crewman_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "B_ManticoreFaction_Winter_Crewman_01"; };
            class CommanderOptics : CommanderOptics { gunnerType = "B_ManticoreFaction_Winter_Crewman_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };



    };

    class Manticore_Bardelas_Load : Manticore_Vanilla_AA_Bardelas_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "Bardelas AA";
        side = 1;
        faction = "Manticore_Faction_Winter";
        crew = "B_ManticoreFaction_Winter_Crewman_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "B_ManticoreFaction_Winter_Crewman_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };



    };

    class Manticore_Wiesel2Cannon_Load : Manticore_Vanilla_Tank_Wiesel2_Cannon_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "Wiesel 2 (MK20)";
        side = 1;
        faction = "Manticore_Faction_Winter";
        crew = "B_ManticoreFaction_Winter_Crewman_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "B_ManticoreFaction_Winter_Crewman_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };



    };

    class Manticore_Wiesel2AT_Load : Manticore_Vanilla_Tank_Wiesel2_AT_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "Wiesel 2 (ATGM)";
        side = 1;
        faction = "Manticore_Faction_Winter";
        crew = "B_ManticoreFaction_Winter_Crewman_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "B_ManticoreFaction_Winter_Crewman_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };



    };

    class Manticore_Wiesel2Scout_Load : Manticore_Vanilla_Tank_Wiesel2_Scout_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "Wiesel 2 (Scout)";
        side = 1;
        faction = "Manticore_Faction_Winter";
        crew = "B_ManticoreFaction_Winter_Crewman_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "B_ManticoreFaction_Winter_Crewman_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };



    };

    class Manticore_Leopard_Load : Manticore_Vanilla_Tank_Leopard_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "Leopard";
        side = 1;
        faction = "Manticore_Faction_Winter";
        crew = "B_ManticoreFaction_Winter_Crewman_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "B_ManticoreFaction_Winter_Crewman_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };



    };

    class Manticore_Rooikat_Load : Manticore_Vanilla_Tank_Rooikat_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rooikat 120";
        side = 1;
        faction = "Manticore_Faction_Winter";
        crew = "B_ManticoreFaction_Winter_Crewman_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "B_ManticoreFaction_Winter_Crewman_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };



    };

    class Manticore_RooikatUP_Load : Manticore_Vanilla_Tank_Rooikat_UP_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rooikat 120 UP";
        side = 1;
        faction = "Manticore_Faction_Winter";
        crew = "B_ManticoreFaction_Winter_Crewman_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "B_ManticoreFaction_Winter_Crewman_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };



    };

    class Manticore_Sholef_Load : Manticore_Vanilla_Artillery_Sholef_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "Sholef";
        side = 1;
        faction = "Manticore_Faction_Winter";
        crew = "B_ManticoreFaction_Winter_Crewman_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "B_ManticoreFaction_Winter_Crewman_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };



    };

    class Manticore_Seara_Load : Manticore_Vanilla_Artillery_Seara_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "Seara";
        side = 1;
        faction = "Manticore_Faction_Winter";
        crew = "B_ManticoreFaction_Winter_Crewman_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "B_ManticoreFaction_Winter_Crewman_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };



    };

    class Manticore_SpeedboatMinigun_Load : Manticore_Vanilla_Boats_Speedboat_Minigun_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "Speedboat Minigun";
        side = 1;
        faction = "Manticore_Faction_Winter";
        crew = "B_ManticoreFaction_Winter_Rifleman_01";

        class Turrets : Turrets {
            class FrontTurret : FrontTurret { gunnerType = "B_ManticoreFaction_Winter_Rifleman_01"; };
            class RearTurret : RearTurret { gunnerType = "B_ManticoreFaction_Winter_Rifleman_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };



    };

    class Manticore_UCAVDrone_Load : Manticore_Vanilla_Drone_UCAV_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "UCAV Sentinel";
        side = 1;
        faction = "Manticore_Faction_Winter";
        crew = "B_UAV_AI";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };



    };

    class Manticore_FalconDrone_Load : Manticore_Vanilla_Drone_Falcon_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "MQ-12 Falcon";
        side = 1;
        faction = "Manticore_Faction_Winter";
        crew = "B_UAV_AI";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };



    };

    class Manticore_AR2DarterDrone_Load : Manticore_Vanilla_Drone_AR2Darter_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "AR-2 Darter";
        side = 1;
        faction = "Manticore_Faction_Winter";
        crew = "B_UAV_AI";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };



    };

    class Manticore_StomperDrone_Load : Manticore_Vanilla_Drone_Stomper_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "UGV Stomper";
        side = 1;
        faction = "Manticore_Faction_Winter";
        crew = "B_UAV_AI";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };



    };

    class Manticore_StomperArmedDrone_Load : Manticore_Vanilla_Drone_Stomper_RCWS_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "UGV Stomper RCWS";
        side = 1;
        faction = "Manticore_Faction_Winter";
        crew = "B_UAV_AI";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = ""; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };



    };

    class Manticore_Navy_Uniform_O_Soldier : B_Soldier_F_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "Navy Uniform Officer";
        side = 1;
        faction = "Manticore_Faction_Winter";

        identityTypes[] = {"Head_NATO","G_NATO_default"};

        uniformClass = "Manticore_Navy_O_Uniform";

        linkedItems[] = {"Manticore_Beret","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"Manticore_Beret","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {};
        respawnWeapons[] = {};

        magazines[] = {};
        respawnMagazines[] = {};

        ALiVE_orbatCreator_loadout[] = {{},{},{},{"Manticore_Navy_O_Uniform",{{"FirstAidKit",1},{"Chemlight_green",2,1}}},{},{},"Manticore_Beret","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };



    };

    class Manticore_Navy_Uniform_S_Soldier : B_Soldier_F_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "Navy Uniform";
        side = 1;
        faction = "Manticore_Faction_Winter";

        identityTypes[] = {"Head_NATO","G_NATO_default"};

        uniformClass = "Manticore_Navy_S_Uniform";

        linkedItems[] = {"Manticore_Beret","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"Manticore_Beret","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {};
        respawnWeapons[] = {};

        magazines[] = {};
        respawnMagazines[] = {};

        ALiVE_orbatCreator_loadout[] = {{},{},{},{"Manticore_Navy_S_Uniform",{{"FirstAidKit",1},{"Chemlight_green",2,1}}},{},{},"Manticore_Beret","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };



    };

    class Manticore_MH6MHeli_Base : RHS_MELB_MH6M_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "MH-6M";
        side = 1;
        faction = "Manticore_Faction_Winter";
        crew = "B_ManticoreFaction_Winter_Helicopter_Pilot_01";

        class Turrets : Turrets {
            class CopilotTurret : CopilotTurret { gunnerType = "B_ManticoreFaction_Winter_Helicopter_Pilot_01"; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
            class CargoTurret_05 : CargoTurret_05 { gunnerType = ""; };
            class CargoTurret_06 : CargoTurret_06 { gunnerType = ""; };
            class CargoTurret_07 : CargoTurret_07 { gunnerType = ""; };
            class CargoTurret_08 : CargoTurret_08 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };



    };

    class Manticore_M1043A2_Load : Manticore_RHS_Humvee_M1043A2_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "M1043A2 (Unarmed)";
        side = 1;
        faction = "Manticore_Faction_Winter";
        crew = "B_ManticoreFaction_Winter_Rifleman_01";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };



    };

    class Manticore_M1043A2M2_Load : Manticore_RHS_Humvee_M1043A2_M2_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "M1043A2 (M2)";
        side = 1;
        faction = "Manticore_Faction_Winter";
        crew = "B_ManticoreFaction_Winter_Rifleman_01";

        class Turrets : Turrets {
            class M2_Turret : M2_Turret { gunnerType = "B_ManticoreFaction_Winter_Rifleman_01"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };



    };

    class Manticore_M1043A2M19_Load : Manticore_RHS_Humvee_M1043A2_M19_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "M1043A2 (M19)";
        side = 1;
        faction = "Manticore_Faction_Winter";
        crew = "B_ManticoreFaction_Winter_Rifleman_01";

        class Turrets : Turrets {
            class M2_Turret : M2_Turret { gunnerType = "B_ManticoreFaction_Winter_Rifleman_01"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };



    };

    class Manticore_M1045A2TOW_Load : Manticore_RHS_Humvee_M1045A2_TOW_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "M1045A2 (TOW)";
        side = 1;
        faction = "Manticore_Faction_Winter";
        crew = "B_ManticoreFaction_Winter_Rifleman_01";

        class Turrets : Turrets {
            class TOW_Turret : TOW_Turret { gunnerType = "B_ManticoreFaction_Winter_Rifleman_01"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };



    };

    class Manticore_M11232DOpen_Load : Manticore_RHS_Humvee_M1123_2D_Open_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "M1123 2D (Opentop)";
        side = 1;
        faction = "Manticore_Faction_Winter";
        crew = "B_ManticoreFaction_Winter_Rifleman_01";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };



    };

    class Manticore_M11232DHalf_Load : Manticore_RHS_Humvee_M1123_2D_Half_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "M1123 2D (Halftop)";
        side = 1;
        faction = "Manticore_Faction_Winter";
        crew = "B_ManticoreFaction_Winter_Rifleman_01";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };



    };

    class Manticore_M11232DFull_Load : Manticore_RHS_Humvee_M1123_2D_Full_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "M1123 2D (Fulltop)";
        side = 1;
        faction = "Manticore_Faction_Winter";
        crew = "B_ManticoreFaction_Winter_Rifleman_01";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };



    };

    class Manticore_M11234DOpen_Load : Manticore_RHS_Humvee_M1123_4D_Open_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "M1123 4D (Opentop)";
        side = 1;
        faction = "Manticore_Faction_Winter";
        crew = "B_ManticoreFaction_Winter_Rifleman_01";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
            class CargoTurret_05 : CargoTurret_05 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };



    };

    class Manticore_M11234DHalf_Load : Manticore_RHS_Humvee_M1123_4D_Half_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "M1123 4D (Halftop)";
        side = 1;
        faction = "Manticore_Faction_Winter";
        crew = "B_ManticoreFaction_Winter_Rifleman_01";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };



    };

    class Manticore_M11234DFull_Load : Manticore_RHS_Humvee_M1123_4D_Full_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "M1123 4D (Fulltop)";
        side = 1;
        faction = "Manticore_Faction_Winter";
        crew = "B_ManticoreFaction_Winter_Rifleman_01";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };



    };

    class Manticore_Cat1A2_Load : Manticore_RHS_Mrap_Cat1A2_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "CGR CAT1A2";
        side = 1;
        faction = "Manticore_Faction_Winter";
        crew = "B_ManticoreFaction_Winter_Rifleman_01";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };



    };

    class Manticore_Cat1A2M2_Load : Manticore_RHS_Mrap_Cat1A2_M2_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "CGR CAT1A2 (M2)";
        side = 1;
        faction = "Manticore_Faction_Winter";
        crew = "B_ManticoreFaction_Winter_Rifleman_01";

        class Turrets : Turrets {
            class M2_Turret : M2_Turret { gunnerType = "B_ManticoreFaction_Winter_Rifleman_01"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };



    };

    class Manticore_Cat1A2Mk19_Load : Manticore_RHS_Mrap_Cat1A2_Mk19_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "CGR CAT1A2 (Mk19)";
        side = 1;
        faction = "Manticore_Faction_Winter";
        crew = "B_ManticoreFaction_Winter_Rifleman_01";

        class Turrets : Turrets {
            class M2_Turret : M2_Turret { gunnerType = "B_ManticoreFaction_Winter_Rifleman_01"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };



    };

    class Manticore_M1220_Load : Manticore_RHS_Mrap_M1220_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "M1220";
        side = 1;
        faction = "Manticore_Faction_Winter";
        crew = "B_ManticoreFaction_Winter_Rifleman_01";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };



    };

    class Manticore_M1220M2_Load : Manticore_RHS_Mrap_M1220_M2_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "M1220 (M2)";
        side = 1;
        faction = "Manticore_Faction_Winter";
        crew = "B_ManticoreFaction_Winter_Rifleman_01";

        class Turrets : Turrets {
            class M2_Turret : M2_Turret { gunnerType = "B_ManticoreFaction_Winter_Rifleman_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };



    };

    class Manticore_M1220M2CROW_Load : Manticore_RHS_Mrap_M1220_M2CROW_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "M1220 (M2 CROW)";
        side = 1;
        faction = "Manticore_Faction_Winter";
        crew = "B_ManticoreFaction_Winter_Rifleman_01";

        class Turrets : Turrets {
            class M2_CROWS_Turret : M2_CROWS_Turret { gunnerType = "B_ManticoreFaction_Winter_Rifleman_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };



    };

    class Manticore_M1220M19_Load : Manticore_RHS_Mrap_M1220_M19_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "M1220 (M19)";
        side = 1;
        faction = "Manticore_Faction_Winter";
        crew = "B_ManticoreFaction_Winter_Rifleman_01";

        class Turrets : Turrets {
            class M2_Turret : M2_Turret { gunnerType = "B_ManticoreFaction_Winter_Rifleman_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };



    };

    class Manticore_M1230M2_Load : Manticore_RHS_Mrap_M1230_M2_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "M1230 (M2)";
        side = 1;
        faction = "Manticore_Faction_Winter";
        crew = "B_ManticoreFaction_Winter_Rifleman_01";

        class Turrets : Turrets {
            class M2_Turret : M2_Turret { gunnerType = "B_ManticoreFaction_Winter_Rifleman_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };



    };

    class Manticore_M1230M19_Load : Manticore_RHS_Mrap_M1230_M19_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "M1230 (M19)";
        side = 1;
        faction = "Manticore_Faction_Winter";
        crew = "B_ManticoreFaction_Winter_Rifleman_01";

        class Turrets : Turrets {
            class M2_Turret : M2_Turret { gunnerType = "B_ManticoreFaction_Winter_Rifleman_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };



    };

    class Manticore_M1220A1Med_Load : Manticore_RHS_Mrap_M1220A1_Medical_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "M1230A1 (Medical)";
        side = 1;
        faction = "Manticore_Faction_Winter";
        crew = "B_ManticoreFaction_Winter_Rifleman_01";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };



    };

    class Manticore_M113A3Unarmed_Load : Manticore_RHS_APC_M113A3_Unarmed_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "M113A3";
        side = 1;
        faction = "Manticore_Faction_Winter";
        crew = "B_ManticoreFaction_Winter_Crewman_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "B_ManticoreFaction_Winter_Crewman_01"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };



    };

    class Manticore_M113A3M2_Load : Manticore_RHS_APC_M113A3_M2_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "M113A3 (M2)";
        side = 1;
        faction = "Manticore_Faction_Winter";
        crew = "B_ManticoreFaction_Winter_Crewman_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "B_ManticoreFaction_Winter_Crewman_01"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };



    };

    class Manticore_M113A3M19_Load : Manticore_RHS_APC_M113A3_M19_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "M113A3 (M19)";
        side = 1;
        faction = "Manticore_Faction_Winter";
        crew = "B_ManticoreFaction_Winter_Crewman_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "B_ManticoreFaction_Winter_Crewman_01"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };



    };

    class Manticore_M113A3M240_Load : Manticore_RHS_APC_M113A3_M240_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "M113A3 (M240)";
        side = 1;
        faction = "Manticore_Faction_Winter";
        crew = "B_ManticoreFaction_Winter_Crewman_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "B_ManticoreFaction_Winter_Crewman_01"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };



    };

    class Manticore_M113A3Ammo_Load : Manticore_RHS_APC_M113A3_Ammo_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "M113A3 (Ammo)";
        side = 1;
        faction = "Manticore_Faction_Winter";
        crew = "B_ManticoreFaction_Winter_Crewman_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "B_ManticoreFaction_Winter_Crewman_01"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };



    };

    class Manticore_M113A3Medical_Load : Manticore_RHS_APC_M113A3_Medical_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "M113A3 (MEV)";
        side = 1;
        faction = "Manticore_Faction_Winter";
        crew = "B_ManticoreFaction_Winter_Crewman_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "B_ManticoreFaction_Winter_Crewman_01"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };



    };

    class Manticore_M2A3_Load : Manticore_RHS_IFV_M2A3_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "M2A3";
        side = 1;
        faction = "Manticore_Faction_Winter";
        crew = "B_ManticoreFaction_Winter_Crewman_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "B_ManticoreFaction_Winter_Crewman_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };



    };

    class Manticore_M2A3BUSKI_Load : Manticore_RHS_IFV_M2A3_BUSKI_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "M2A3 (BUSK I)";
        side = 1;
        faction = "Manticore_Faction_Winter";
        crew = "B_ManticoreFaction_Winter_Crewman_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "B_ManticoreFaction_Winter_Crewman_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };



    };

    class Manticore_M2A3BUSKIII_Load : Manticore_RHS_IFV_M2A3_BUSKIII_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "M2A3 (BUSK III)";
        side = 1;
        faction = "Manticore_Faction_Winter";
        crew = "B_ManticoreFaction_Winter_Crewman_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "B_ManticoreFaction_Winter_Crewman_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };



    };

    class Manticore_M6A2_Load : Manticore_RHS_IFV_M6A2_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "M6A2 (AA)";
        side = 1;
        faction = "Manticore_Faction_Winter";
        crew = "B_ManticoreFaction_Winter_Crewman_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "B_ManticoreFaction_Winter_Crewman_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };



    };

    class Manticore_M1083A1P2_Load : Manticore_RHS_Truck_M1083A1P2_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "M1083A1P2";
        side = 1;
        faction = "Manticore_Faction_Winter";
        crew = "B_ManticoreFaction_Winter_Rifleman_01";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };



    };

    class Manticore_M1083A1P2B_Load : Manticore_RHS_Truck_M1083A1P2_B_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "M1083A1P2-B";
        side = 1;
        faction = "Manticore_Faction_Winter";
        crew = "B_ManticoreFaction_Winter_Rifleman_01";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };



    };

    class Manticore_M1083A1P2BM2_Load : Manticore_RHS_Truck_M1083A1P2_B_M2_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "M1083A1P2-B (M2)";
        side = 1;
        faction = "Manticore_Faction_Winter";
        crew = "B_ManticoreFaction_Winter_Rifleman_01";

        class Turrets : Turrets {
            class M2_Turret : M2_Turret { gunnerType = "B_ManticoreFaction_Winter_Rifleman_01"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };



    };

    class Manticore_M1083A1P2Flatbed_Load : Manticore_RHS_Truck_M1083A1P2_Flatbed_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "M1083A1P2 (flatbed)";
        side = 1;
        faction = "Manticore_Faction_Winter";
        crew = "B_ManticoreFaction_Winter_Rifleman_01";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };



    };

    class Manticore_M1083A1P2BFlatbed_Load : Manticore_RHS_Truck_M1083A1P2_B_Flatbed_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "M1083A1P2-B (flatbed)";
        side = 1;
        faction = "Manticore_Faction_Winter";
        crew = "B_ManticoreFaction_Winter_Rifleman_01";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };



    };

    class Manticore_M1083A1P2BM2Flatbed_Load : Manticore_RHS_Truck_M1083A1P2_B_M2_Flatbed_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "M1083A1P2-B (M2/flatbed)";
        side = 1;
        faction = "Manticore_Faction_Winter";
        crew = "B_ManticoreFaction_Winter_Rifleman_01";

        class Turrets : Turrets {
            class M2_Turret : M2_Turret { gunnerType = "B_ManticoreFaction_Winter_Rifleman_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };



    };

    class Manticore_M977A4_Load : Manticore_RHS_Truck_M977A4_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "M977A4";
        side = 1;
        faction = "Manticore_Faction_Winter";
        crew = "B_ManticoreFaction_Winter_Rifleman_01";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };



    };

    class Manticore_M977A4B_Load : Manticore_RHS_Truck_M977A4_B_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "M977A4-B";
        side = 1;
        faction = "Manticore_Faction_Winter";
        crew = "B_ManticoreFaction_Winter_Rifleman_01";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };



    };

    class Manticore_M977A4BM2_Load : Manticore_RHS_Truck_M977A4_B_M2_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "M977A4-B (M2)";
        side = 1;
        faction = "Manticore_Faction_Winter";
        crew = "B_ManticoreFaction_Winter_Rifleman_01";

        class Turrets : Turrets {
            class M2_Turret : M2_Turret { gunnerType = "B_ManticoreFaction_Winter_Rifleman_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };



    };

    class Manticore_M977A4Repair_Load : Manticore_RHS_Truck_M977A4_Repair_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "M977A4 (Repair)";
        side = 1;
        faction = "Manticore_Faction_Winter";
        crew = "B_ManticoreFaction_Winter_Rifleman_01";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };



    };

    class Manticore_M977A4BM2Repair_Load : Manticore_RHS_Truck_M977A4_B_M2_Repair_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "M977A4-B (M2/Repair)";
        side = 1;
        faction = "Manticore_Faction_Winter";
        crew = "B_ManticoreFaction_Winter_Rifleman_01";

        class Turrets : Turrets {
            class M2_Turret : M2_Turret { gunnerType = "B_ManticoreFaction_Winter_Rifleman_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };



    };

    class Manticore_M977A4Ammo_Load : Manticore_RHS_Truck_M977A4_Ammo_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "M977A4 (Ammo)";
        side = 1;
        faction = "Manticore_Faction_Winter";
        crew = "B_ManticoreFaction_Winter_Rifleman_01";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };



    };

    class Manticore_M977A4BM2Ammo_Load : Manticore_RHS_Truck_M977A4_B_M2_Ammo_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "M977A4-B (M2/Ammo)";
        side = 1;
        faction = "Manticore_Faction_Winter";
        crew = "B_ManticoreFaction_Winter_Rifleman_01";

        class Turrets : Turrets {
            class M2_Turret : M2_Turret { gunnerType = "B_ManticoreFaction_Winter_Rifleman_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };



    };

    class Manticore_M978A4_Load : Manticore_RHS_Truck_M978A4_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "M978A4 (Fule)";
        side = 1;
        faction = "Manticore_Faction_Winter";
        crew = "B_ManticoreFaction_Winter_Rifleman_01";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };



    };

    class Manticore_M978A4B_Load : Manticore_RHS_Truck_M978A4_B_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "M978A4-B (Fule)";
        side = 1;
        faction = "Manticore_Faction_Winter";
        crew = "B_ManticoreFaction_Winter_Rifleman_01";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };



    };

    class Manticore_M142_Load : Manticore_RHS_Artillery_M142_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "M142 HIMARS";
        side = 1;
        faction = "Manticore_Faction_Winter";
        crew = "B_ManticoreFaction_Winter_Rifleman_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "B_ManticoreFaction_Winter_Rifleman_01"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = "B_ManticoreFaction_Winter_Rifleman_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };



    };

    class Manticore_M109A6_Load : Manticore_RHS_Artillery_M109A6_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "M109A6";
        side = 1;
        faction = "Manticore_Faction_Winter";
        crew = "B_ManticoreFaction_Winter_Crewman_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "B_ManticoreFaction_Winter_Crewman_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };



    };

    class Manticore_OH6MHeli_Load : Manticore_RHS_Heli_OH6M_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "OH-6M";
        side = 1;
        faction = "Manticore_Faction_Winter";
        crew = "B_ManticoreFaction_Winter_Helicopter_Pilot_01";

        class Turrets : Turrets {
            class CopilotTurret : CopilotTurret { gunnerType = "B_ManticoreFaction_Winter_Helicopter_Pilot_01"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };



    };

    class Manticore_MH6MHeli_Load : Manticore_MH6MHeli_Base {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "MH-6M";
        side = 1;
        faction = "Manticore_Faction_Winter";
        crew = "B_ManticoreFaction_Winter_Helicopter_Pilot_01";

        class Turrets : Turrets {
            class CopilotTurret : CopilotTurret { gunnerType = "B_ManticoreFaction_Winter_Helicopter_Pilot_01"; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
            class CargoTurret_05 : CargoTurret_05 { gunnerType = ""; };
            class CargoTurret_06 : CargoTurret_06 { gunnerType = ""; };
            class CargoTurret_07 : CargoTurret_07 { gunnerType = ""; };
            class CargoTurret_08 : CargoTurret_08 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };



    };

    class Manticore_AH6MHeli_Load : Manticore_RHS_Heli_AH6M_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "AH-6M";
        side = 1;
        faction = "Manticore_Faction_Winter";
        crew = "B_ManticoreFaction_Winter_Helicopter_Pilot_01";

        class Turrets : Turrets {
            class CopilotTurret : CopilotTurret { gunnerType = "B_ManticoreFaction_Winter_Helicopter_Pilot_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };



    };

    class Manticore_CH47FHeli_Load : Manticore_RHS_Heli_CH47F_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "CH-47F";
        side = 1;
        faction = "Manticore_Faction_Winter";
        crew = "B_ManticoreFaction_Winter_Helicopter_Pilot_01";

        class Turrets : Turrets {
            class CopilotTurret : CopilotTurret { gunnerType = "B_ManticoreFaction_Winter_Helicopter_Pilot_01"; };
            class MainTurret : MainTurret { gunnerType = "B_ManticoreFaction_Winter_Helicopter_Pilot_01"; };
            class RightDoorGun : RightDoorGun { gunnerType = "B_ManticoreFaction_Winter_Helicopter_Pilot_01"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };



    };

    class Manticore_UH60MHeli_Load : Manticore_RHS_Heli_UH60M_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "UH-60M";
        side = 1;
        faction = "Manticore_Faction_Winter";
        crew = "B_ManticoreFaction_Winter_Helicopter_Pilot_01";

        class Turrets : Turrets {
            class CopilotTurret : CopilotTurret { gunnerType = "B_ManticoreFaction_Winter_Helicopter_Pilot_01"; };
            class MainTurret : MainTurret { gunnerType = "B_ManticoreFaction_Winter_Helicopter_Pilot_01"; };
            class RightDoorGun : RightDoorGun { gunnerType = "B_ManticoreFaction_Winter_Helicopter_Pilot_01"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };



    };

    class Manticore_UH60M2Heli_Load : Manticore_RHS_Heli_UH60M2_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "UH-60M (Unarmed)";
        side = 1;
        faction = "Manticore_Faction_Winter";
        crew = "B_ManticoreFaction_Winter_Helicopter_Pilot_01";

        class Turrets : Turrets {
            class CopilotTurret : CopilotTurret { gunnerType = "B_ManticoreFaction_Winter_Helicopter_Pilot_01"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };



    };

    class Manticore_UH60MEWSHeli_Load : Manticore_RHS_Heli_UH60M_EWS_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "UH-60M (EWS)";
        side = 1;
        faction = "Manticore_Faction_Winter";
        crew = "B_ManticoreFaction_Winter_Helicopter_Pilot_01";

        class Turrets : Turrets {
            class CopilotTurret : CopilotTurret { gunnerType = "B_ManticoreFaction_Winter_Helicopter_Pilot_01"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };



    };

    class Manticore_UH60MESSSHeli_Load : Manticore_RHS_Heli_UH60M_ESSS_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "UH-60M (ESSS)";
        side = 1;
        faction = "Manticore_Faction_Winter";
        crew = "B_ManticoreFaction_Winter_Helicopter_Pilot_01";

        class Turrets : Turrets {
            class CopilotTurret : CopilotTurret { gunnerType = "B_ManticoreFaction_Winter_Helicopter_Pilot_01"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };



    };

    class Manticore_UH60MMEVHeli_Load : Manticore_RHS_Heli_UH60M_MEV_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "UH-60M MEV";
        side = 1;
        faction = "Manticore_Faction_Winter";
        crew = "B_ManticoreFaction_Winter_Helicopter_Pilot_01";

        class Turrets : Turrets {
            class CopilotTurret : CopilotTurret { gunnerType = "B_ManticoreFaction_Winter_Helicopter_Pilot_01"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };



    };

    class Manticore_UH60MESSSMEVHeli_Load : Manticore_RHS_Heli_UH60M_ESSS_MEV_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "UH-60M MEV (ESSS)";
        side = 1;
        faction = "Manticore_Faction_Winter";
        crew = "B_ManticoreFaction_Winter_Helicopter_Pilot_01";

        class Turrets : Turrets {
            class CopilotTurret : CopilotTurret { gunnerType = "B_ManticoreFaction_Winter_Helicopter_Pilot_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };



    };

    class Manticore_AH64DHeli_Load : Manticore_RHS_Heli_AH64D_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "AH-64D";
        side = 1;
        faction = "Manticore_Faction_Winter";
        crew = "B_ManticoreFaction_Winter_Helicopter_Pilot_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "B_ManticoreFaction_Winter_Helicopter_Pilot_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };



    };

    class Manticore_CH53EHeli_Load : Manticore_RHS_Heli_CH53E_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "CH-53E";
        side = 1;
        faction = "Manticore_Faction_Winter";
        crew = "B_ManticoreFaction_Winter_Helicopter_Pilot_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "B_ManticoreFaction_Winter_Helicopter_Pilot_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };



    };

    class Manticore_UH1YHeli_Load : Manticore_RHS_Heli_UH1Y_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "UH-1Y";
        side = 1;
        faction = "Manticore_Faction_Winter";
        crew = "B_ManticoreFaction_Winter_Helicopter_Pilot_01";

        class Turrets : Turrets {
            class CopilotTurret : CopilotTurret { gunnerType = "B_ManticoreFaction_Winter_Helicopter_Pilot_01"; };
            class MainTurret : MainTurret { gunnerType = "B_ManticoreFaction_Winter_Helicopter_Pilot_01"; };
            class RightDoorGun : RightDoorGun { gunnerType = "B_ManticoreFaction_Winter_Helicopter_Pilot_01"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
            class CargoTurret_05 : CargoTurret_05 { gunnerType = ""; };
            class CargoTurret_06 : CargoTurret_06 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };



    };

    class Manticore_UH1YFFARHeli_Load : Manticore_RHS_Heli_UH1Y_FFAR_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "UH-1Y (FFAR)";
        side = 1;
        faction = "Manticore_Faction_Winter";
        crew = "B_ManticoreFaction_Winter_Helicopter_Pilot_01";

        class Turrets : Turrets {
            class CopilotTurret : CopilotTurret { gunnerType = "B_ManticoreFaction_Winter_Helicopter_Pilot_01"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_07 : CargoTurret_07 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
            class CargoTurret_05 : CargoTurret_05 { gunnerType = ""; };
            class CargoTurret_06 : CargoTurret_06 { gunnerType = ""; };
            class CargoTurret_08 : CargoTurret_08 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };



    };

    class Manticore_UH1YUnarmedHeli_Load : Manticore_RHS_Heli_UH1Y_Unarmed_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "UH-1Y (Unarmed)";
        side = 1;
        faction = "Manticore_Faction_Winter";
        crew = "B_ManticoreFaction_Winter_Helicopter_Pilot_01";

        class Turrets : Turrets {
            class CopilotTurret : CopilotTurret { gunnerType = "B_ManticoreFaction_Winter_Helicopter_Pilot_01"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_07 : CargoTurret_07 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
            class CargoTurret_05 : CargoTurret_05 { gunnerType = ""; };
            class CargoTurret_06 : CargoTurret_06 { gunnerType = ""; };
            class CargoTurret_08 : CargoTurret_08 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };



    };

    class Manticore_AH1ZHeli_Load : Manticore_RHS_Heli_AH1Z_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "AH-1Z";
        side = 1;
        faction = "Manticore_Faction_Winter";
        crew = "B_ManticoreFaction_Winter_Helicopter_Pilot_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "B_ManticoreFaction_Winter_Helicopter_Pilot_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };



    };

    class Manticore_MkVSOC_Load : Manticore_RHS_Naval_MkVSOC_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mk. V SOC";
        side = 1;
        faction = "Manticore_Faction_Winter";
        crew = "B_ManticoreFaction_Winter_Rifleman_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "B_ManticoreFaction_Winter_Rifleman_01"; };
            class m2_s_gunTurret : m2_s_gunTurret { gunnerType = "B_ManticoreFaction_Winter_Rifleman_01"; };
            class m134_p_gunTurret : m134_p_gunTurret { gunnerType = "B_ManticoreFaction_Winter_Rifleman_01"; };
            class mk19_s_gunTurret : mk19_s_gunTurret { gunnerType = "B_ManticoreFaction_Winter_Rifleman_01"; };
            class camera_b_gunTurret : camera_b_gunTurret { gunnerType = "B_ManticoreFaction_Winter_Rifleman_01"; };
            class rem_spotL_gunTurret : rem_spotL_gunTurret { gunnerType = "B_ManticoreFaction_Winter_Rifleman_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };



    };

    class Manticore_ManticamCryeWinter_00 : VSM_Multicam_Crye_Uniform_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "Manticam Winter Crye Uniform (m0)";
        side = 1;
        faction = "Manticore_Faction_Winter";

        identityTypes[] = {"Head_NATO","G_NATO_default"};

        uniformClass = "Manticore_ManticamCryeWinter_00";

        linkedItems[] = {};
        respawnlinkedItems[] = {};

        weapons[] = {};
        respawnWeapons[] = {};

        magazines[] = {};
        respawnMagazines[] = {};

        ALiVE_orbatCreator_loadout[] = {{},{},{},{"Manticore_ManticamCryeWinter_00",{{"FirstAidKit",1}}},{},{},"","",{},{"","","","","",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };



    };

    class Manticore_ManticamCryeWinter_01 : Manticore_ManticamCryeWinter_00 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "Manticam Winter Crye Uniform (m1)";
        side = 1;
        faction = "Manticore_Faction_Winter";

        identityTypes[] = {"Head_NATO","G_NATO_default"};

        uniformClass = "Manticore_ManticamCryeWinter_01";

        linkedItems[] = {};
        respawnlinkedItems[] = {};

        weapons[] = {};
        respawnWeapons[] = {};

        magazines[] = {};
        respawnMagazines[] = {};

        ALiVE_orbatCreator_loadout[] = {{},{},{},{"Manticore_ManticamCryeWinter_01",{{"FirstAidKit",1}}},{},{},"","",{},{"","","","","",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };



    };

    class Manticore_ManticamCryeWinter_02 : Manticore_ManticamCryeWinter_00 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "Manticam Winter Crye Uniform (m2)";
        side = 1;
        faction = "Manticore_Faction_Winter";

        identityTypes[] = {"Head_NATO","G_NATO_default"};

        uniformClass = "Manticore_ManticamCryeWinter_02";

        linkedItems[] = {};
        respawnlinkedItems[] = {};

        weapons[] = {};
        respawnWeapons[] = {};

        magazines[] = {};
        respawnMagazines[] = {};

        ALiVE_orbatCreator_loadout[] = {{},{},{},{"Manticore_ManticamCryeWinter_02",{{"FirstAidKit",1}}},{},{},"","",{},{"","","","","",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };



    };

    class B_ManticoreFaction_Winter_Rifleman_01 : B_Soldier_F_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman";
        side = 1;
        faction = "Manticore_Faction_Winter";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

        uniformClass = "Manticore_ManticamCryeWinter_01";

        linkedItems[] = {"Manticore_ManticamRAVOperatorWinter","Manticore_ManticamMich2000Winter_01","ItemMap","ItemMicroDAGR","ItemRadio","ItemCompass","ItemWatch","rhsusf_ANPVS_15"};
        respawnlinkedItems[] = {"Manticore_ManticamRAVOperatorWinter","Manticore_ManticamMich2000Winter_01","ItemMap","ItemMicroDAGR","ItemRadio","ItemCompass","ItemWatch","rhsusf_ANPVS_15"};

        weapons[] = {"hlc_rifle_G36KA1KSK","hlc_pistol_P226R_Combat","Rangefinder"};
        respawnWeapons[] = {"hlc_rifle_G36KA1KSK","hlc_pistol_P226R_Combat","Rangefinder"};

        magazines[] = {"hlc_30rnd_556x45_EPR_G36","hlc_15Rnd_9x19_B_P226","hlc_30rnd_556x45_EPR_G36","hlc_15Rnd_9x19_B_P226"};
        respawnMagazines[] = {"hlc_30rnd_556x45_EPR_G36","hlc_15Rnd_9x19_B_P226","hlc_30rnd_556x45_EPR_G36","hlc_15Rnd_9x19_B_P226"};

        ALiVE_orbatCreator_loadout[] = {{"hlc_rifle_G36KA1KSK","","","rhsusf_acc_g33_xps3",{"hlc_30rnd_556x45_EPR_G36",30},{},""},{},{"hlc_pistol_P226R_Combat","","","HLC_optic_HP",{"hlc_15Rnd_9x19_B_P226",15},{},""},{"Manticore_ManticamCryeWinter_01",{{"ACE_EarPlugs",1},{"ACE_salineIV_250",2},{"ACE_salineIV_500",1},{"ACE_fieldDressing",4},{"ACE_elasticBandage",4},{"ACE_quikclot",4},{"ACE_packingBandage",4},{"ACE_morphine",2},{"ACE_epinephrine",1},{"ACE_EntrenchingTool",1}}},{"Manticore_ManticamRAVOperatorWinter",{{"SmokeShell",4,1},{"ACE_M84",2,1},{"rhs_mag_m67",2,1},{"B_IR_Grenade",1,1},{"SmokeShellBlue",1,1},{"SmokeShellGreen",1,1},{"hlc_15Rnd_9x19_B_P226",3,15},{"hlc_30rnd_556x45_EPR_G36",8,30}}},{},"Manticore_ManticamMich2000Winter_01","",{"Rangefinder","","","",{},{},""},{"ItemMap","ItemMicroDAGR","ItemRadio","ItemCompass","ItemWatch","rhsusf_ANPVS_15"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'Manticore_Insignia_FieldBadge_OR2'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };


        ALiVE_orbatCreator_insignia = "Manticore_Insignia_FieldBadge_OR2";

    };

    class B_ManticoreFaction_Winter_Squad_Leader_01 : B_Soldier_SL_F_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "Squad Leader";
        side = 1;
        faction = "Manticore_Faction_Winter";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

        uniformClass = "Manticore_ManticamCryeWinter_01";

        linkedItems[] = {"Manticore_ManticamRAVOperatorWinter","Manticore_ManticamMich2000Winter_01","ItemMap","ItemcTab","ItemRadio","ItemCompass","ItemWatch","rhsusf_ANPVS_15"};
        respawnlinkedItems[] = {"Manticore_ManticamRAVOperatorWinter","Manticore_ManticamMich2000Winter_01","ItemMap","ItemcTab","ItemRadio","ItemCompass","ItemWatch","rhsusf_ANPVS_15"};

        weapons[] = {"HLC_Rifle_G36KSKAG36","hlc_pistol_P226R_Combat","Rangefinder"};
        respawnWeapons[] = {"HLC_Rifle_G36KSKAG36","hlc_pistol_P226R_Combat","Rangefinder"};

        magazines[] = {"hlc_30rnd_556x45_EPR_G36","hlc_15Rnd_9x19_B_P226","hlc_30rnd_556x45_EPR_G36","hlc_15Rnd_9x19_B_P226"};
        respawnMagazines[] = {"hlc_30rnd_556x45_EPR_G36","hlc_15Rnd_9x19_B_P226","hlc_30rnd_556x45_EPR_G36","hlc_15Rnd_9x19_B_P226"};

        backpack = "Manticore_ManticamKitbagWinter_Med";

        ALiVE_orbatCreator_loadout[] = {{"HLC_Rifle_G36KSKAG36","","","rhsusf_acc_g33_xps3",{"hlc_30rnd_556x45_EPR_G36",30},{},""},{},{"hlc_pistol_P226R_Combat","","","HLC_optic_HP",{"hlc_15Rnd_9x19_B_P226",15},{},""},{"Manticore_ManticamCryeWinter_01",{{"ACE_EarPlugs",1},{"ACE_salineIV_250",2},{"ACE_salineIV_500",1},{"ACE_fieldDressing",4},{"ACE_elasticBandage",4},{"ACE_quikclot",4},{"ACE_packingBandage",4},{"ACE_morphine",2},{"ACE_epinephrine",1},{"ACE_EntrenchingTool",1}}},{"Manticore_ManticamRAVOperatorWinter",{{"SmokeShell",4,1},{"ACE_M84",2,1},{"rhs_mag_m67",2,1},{"B_IR_Grenade",1,1},{"SmokeShellBlue",1,1},{"SmokeShellGreen",1,1},{"hlc_15Rnd_9x19_B_P226",3,15},{"hlc_30rnd_556x45_EPR_G36",3,30}}},{"Manticore_ManticamKitbagWinter_Med",{{"1Rnd_HE_Grenade_shell",15,1},{"UGL_FlareWhite_F",5,1},{"UGL_FlareGreen_F",2,1},{"UGL_FlareRed_F",2,1},{"UGL_FlareCIR_F",2,1},{"1Rnd_SmokeRed_Grenade_shell",5,1},{"ACE_HuntIR_M203",2,1},{"SmokeShellGreen",2,1},{"SmokeShellBlue",2,1},{"SmokeShell",2,1}}},"Manticore_ManticamMich2000Winter_01","",{"Rangefinder","","","",{},{},""},{"ItemMap","ItemcTab","ItemRadio","ItemCompass","ItemWatch","rhsusf_ANPVS_15"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'Manticore_Insignia_FieldBadge_OR2'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };


        ALiVE_orbatCreator_insignia = "Manticore_Insignia_FieldBadge_OR2";

    };

    class B_ManticoreFaction_Winter_Grenadier_01 : B_Soldier_GL_F_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "Grenadier";
        side = 1;
        faction = "Manticore_Faction_Winter";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

        uniformClass = "Manticore_ManticamCryeWinter_01";

        linkedItems[] = {"Manticore_ManticamRAVOperatorWinter","Manticore_ManticamMich2000Winter_01","ItemMap","ItemcTab","ItemRadio","ItemCompass","ItemWatch","rhsusf_ANPVS_15"};
        respawnlinkedItems[] = {"Manticore_ManticamRAVOperatorWinter","Manticore_ManticamMich2000Winter_01","ItemMap","ItemcTab","ItemRadio","ItemCompass","ItemWatch","rhsusf_ANPVS_15"};

        weapons[] = {"HLC_Rifle_G36KSKAG36","hlc_pistol_P226R_Combat","Rangefinder"};
        respawnWeapons[] = {"HLC_Rifle_G36KSKAG36","hlc_pistol_P226R_Combat","Rangefinder"};

        magazines[] = {"hlc_30rnd_556x45_EPR_G36","hlc_15Rnd_9x19_B_P226","hlc_30rnd_556x45_EPR_G36","hlc_15Rnd_9x19_B_P226"};
        respawnMagazines[] = {"hlc_30rnd_556x45_EPR_G36","hlc_15Rnd_9x19_B_P226","hlc_30rnd_556x45_EPR_G36","hlc_15Rnd_9x19_B_P226"};

        backpack = "Manticore_ManticamKitbagWinter_Med";

        ALiVE_orbatCreator_loadout[] = {{"HLC_Rifle_G36KSKAG36","","","rhsusf_acc_g33_xps3",{"hlc_30rnd_556x45_EPR_G36",30},{},""},{},{"hlc_pistol_P226R_Combat","","","HLC_optic_HP",{"hlc_15Rnd_9x19_B_P226",15},{},""},{"Manticore_ManticamCryeWinter_01",{{"ACE_EarPlugs",1},{"ACE_salineIV_250",2},{"ACE_salineIV_500",1},{"ACE_fieldDressing",4},{"ACE_elasticBandage",4},{"ACE_quikclot",4},{"ACE_packingBandage",4},{"ACE_morphine",2},{"ACE_epinephrine",1},{"ACE_EntrenchingTool",1}}},{"Manticore_ManticamRAVOperatorWinter",{{"SmokeShell",4,1},{"ACE_M84",2,1},{"rhs_mag_m67",2,1},{"B_IR_Grenade",1,1},{"SmokeShellBlue",1,1},{"SmokeShellGreen",1,1},{"hlc_15Rnd_9x19_B_P226",3,15},{"hlc_30rnd_556x45_EPR_G36",3,30}}},{"Manticore_ManticamKitbagWinter_Med",{{"1Rnd_HE_Grenade_shell",15,1},{"UGL_FlareWhite_F",5,1},{"UGL_FlareGreen_F",2,1},{"UGL_FlareRed_F",2,1},{"UGL_FlareCIR_F",2,1},{"1Rnd_SmokeRed_Grenade_shell",5,1},{"ACE_HuntIR_M203",2,1},{"SmokeShellGreen",2,1},{"SmokeShellBlue",2,1},{"SmokeShell",2,1}}},"Manticore_ManticamMich2000Winter_01","",{"Rangefinder","","","",{},{},""},{"ItemMap","ItemcTab","ItemRadio","ItemCompass","ItemWatch","rhsusf_ANPVS_15"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'Manticore_Insignia_FieldBadge_OR2'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };


        ALiVE_orbatCreator_insignia = "Manticore_Insignia_FieldBadge_OR2";

    };

    class B_ManticoreFaction_Winter_Radio_Operator_01 : B_Soldier_TL_F_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "Radio Operator";
        side = 1;
        faction = "Manticore_Faction_Winter";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

        uniformClass = "Manticore_ManticamCryeWinter_01";

        linkedItems[] = {"Manticore_ManticamRAVOperatorWinter","Manticore_ManticamMich2000Winter_01","ItemMap","ItemAndroid","ItemRadio","ItemCompass","ItemWatch","rhsusf_ANPVS_15"};
        respawnlinkedItems[] = {"Manticore_ManticamRAVOperatorWinter","Manticore_ManticamMich2000Winter_01","ItemMap","ItemAndroid","ItemRadio","ItemCompass","ItemWatch","rhsusf_ANPVS_15"};

        weapons[] = {"hlc_rifle_G36KA1KSK","hlc_pistol_P226R_Combat","Rangefinder"};
        respawnWeapons[] = {"hlc_rifle_G36KA1KSK","hlc_pistol_P226R_Combat","Rangefinder"};

        magazines[] = {"hlc_30rnd_556x45_EPR_G36","hlc_15Rnd_9x19_B_P226","hlc_30rnd_556x45_EPR_G36","hlc_15Rnd_9x19_B_P226"};
        respawnMagazines[] = {"hlc_30rnd_556x45_EPR_G36","hlc_15Rnd_9x19_B_P226","hlc_30rnd_556x45_EPR_G36","hlc_15Rnd_9x19_B_P226"};

        backpack = "Manticore_ManticamRT1523gWinter ";

        ALiVE_orbatCreator_loadout[] = {{"hlc_rifle_G36KA1KSK","","","rhsusf_acc_g33_xps3",{"hlc_30rnd_556x45_EPR_G36",30},{},""},{},{"hlc_pistol_P226R_Combat","","hlc_acc_TLR1","HLC_optic_HP",{"hlc_15Rnd_9x19_B_P226",15},{},""},{"Manticore_ManticamCryeWinter_01",{{"ACE_EarPlugs",1},{"ACE_salineIV_250",2},{"ACE_salineIV_500",1},{"ACE_fieldDressing",4},{"ACE_elasticBandage",4},{"ACE_quikclot",4},{"ACE_packingBandage",4},{"ACE_morphine",2},{"ACE_epinephrine",1},{"ACE_EntrenchingTool",1}}},{"Manticore_ManticamRAVOperatorWinter",{{"SmokeShell",4,1},{"ACE_M84",2,1},{"rhs_mag_m67",2,1},{"B_IR_Grenade",1,1},{"SmokeShellBlue",1,1},{"SmokeShellGreen",1,1},{"hlc_15Rnd_9x19_B_P226",3,15},{"hlc_30rnd_556x45_EPR_G36",8,30}}},{"Manticore_ManticamRT1523gWinter ",{{"ACE_fieldDressing",19},{"adv_aceCPR_AED",1},{"ACE_elasticBandage",1}}},"Manticore_ManticamMich2000Winter_01","",{"Rangefinder","","","",{},{},""},{"ItemMap","ItemAndroid","ItemRadio","ItemCompass","ItemWatch","rhsusf_ANPVS_15"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'Manticore_Insignia_FieldBadge_OR2'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };


        ALiVE_orbatCreator_insignia = "Manticore_Insignia_FieldBadge_OR2";

    };

    class B_ManticoreFaction_Winter_Medic_01 : B_medic_F_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "Medic";
        side = 1;
        faction = "Manticore_Faction_Winter";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

        uniformClass = "Manticore_ManticamCryeWinter_01";

        linkedItems[] = {"Manticore_ManticamRAVOperatorWinter","Manticore_ManticamMich2000Winter_01","ItemMap","ItemMicroDAGR","ItemRadio","ItemCompass","ItemWatch","rhsusf_ANPVS_15"};
        respawnlinkedItems[] = {"Manticore_ManticamRAVOperatorWinter","Manticore_ManticamMich2000Winter_01","ItemMap","ItemMicroDAGR","ItemRadio","ItemCompass","ItemWatch","rhsusf_ANPVS_15"};

        weapons[] = {"hlc_rifle_G36KA1KSK","hlc_pistol_P226R_Combat","Rangefinder"};
        respawnWeapons[] = {"hlc_rifle_G36KA1KSK","hlc_pistol_P226R_Combat","Rangefinder"};

        magazines[] = {"hlc_30rnd_556x45_EPR_G36","hlc_15Rnd_9x19_B_P226","hlc_30rnd_556x45_EPR_G36","hlc_15Rnd_9x19_B_P226"};
        respawnMagazines[] = {"hlc_30rnd_556x45_EPR_G36","hlc_15Rnd_9x19_B_P226","hlc_30rnd_556x45_EPR_G36","hlc_15Rnd_9x19_B_P226"};

        backpack = "Manticore_ManticamKitbagWinter_Med ";

        ALiVE_orbatCreator_loadout[] = {{"hlc_rifle_G36KA1KSK","","","rhsusf_acc_g33_xps3",{"hlc_30rnd_556x45_EPR_G36",30},{},""},{},{"hlc_pistol_P226R_Combat","","hlc_acc_TLR1","HLC_optic_HP",{"hlc_15Rnd_9x19_B_P226",15},{},""},{"Manticore_ManticamCryeWinter_01",{{"ACE_EarPlugs",1},{"ACE_salineIV_250",2},{"ACE_salineIV_500",1},{"ACE_fieldDressing",4},{"ACE_elasticBandage",4},{"ACE_quikclot",4},{"ACE_packingBandage",4},{"ACE_morphine",2},{"ACE_epinephrine",1},{"ACE_EntrenchingTool",1}}},{"Manticore_ManticamRAVOperatorWinter",{{"SmokeShell",4,1},{"ACE_M84",2,1},{"rhs_mag_m67",2,1},{"B_IR_Grenade",1,1},{"SmokeShellBlue",1,1},{"SmokeShellGreen",1,1},{"hlc_15Rnd_9x19_B_P226",3,15},{"hlc_30rnd_556x45_EPR_G36",8,30}}},{"Manticore_ManticamKitbagWinter_Med ",{{"ACE_fieldDressing",40},{"adv_aceCPR_AED",1},{"ACE_elasticBandage",40},{"ACE_quikclot",40},{"ACE_packingBandage",40},{"ACE_morphine",15},{"ACE_epinephrine",15},{"ACE_tourniquet",20},{"ACE_salineIV",2},{"ACE_salineIV_250",4},{"ACE_salineIV_500",2}}},"Manticore_ManticamMich2000Winter_01","",{"Rangefinder","","","",{},{},""},{"ItemMap","ItemMicroDAGR","ItemRadio","ItemCompass","ItemWatch","rhsusf_ANPVS_15"}};

      
        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'Manticore_Insignia_FieldBadge_OR2'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };


        ALiVE_orbatCreator_insignia = "Manticore_Insignia_FieldBadge_OR2";

    };

    class B_ManticoreFaction_Winter_Rifleman_AT_01 : B_soldier_LAT_F_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman [AT]";
        side = 1;
        faction = "Manticore_Faction_Winter";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

        uniformClass = "Manticore_ManticamCryeWinter_01";

        linkedItems[] = {"Manticore_ManticamRAVOperatorWinter","Manticore_ManticamMich2000Winter_01","ItemMap","ItemMicroDAGR","ItemRadio","ItemCompass","ItemWatch","rhsusf_ANPVS_15"};
        respawnlinkedItems[] = {"Manticore_ManticamRAVOperatorWinter","Manticore_ManticamMich2000Winter_01","ItemMap","ItemMicroDAGR","ItemRadio","ItemCompass","ItemWatch","rhsusf_ANPVS_15"};

        weapons[] = {"hlc_rifle_G36KA1KSK","rhs_weap_M136_hedp","hlc_pistol_P226R_Combat","Rangefinder"};
        respawnWeapons[] = {"hlc_rifle_G36KA1KSK","rhs_weap_M136_hedp","hlc_pistol_P226R_Combat","Rangefinder"};

        magazines[] = {"hlc_30rnd_556x45_EPR_G36","rhs_m136_hedp_mag","hlc_15Rnd_9x19_B_P226","hlc_30rnd_556x45_EPR_G36","hlc_15Rnd_9x19_B_P226"};
        respawnMagazines[] = {"hlc_30rnd_556x45_EPR_G36","rhs_m136_hedp_mag","hlc_15Rnd_9x19_B_P226","hlc_30rnd_556x45_EPR_G36","hlc_15Rnd_9x19_B_P226"};

        ALiVE_orbatCreator_loadout[] = {{"hlc_rifle_G36KA1KSK","","","rhsusf_acc_g33_xps3",{"hlc_30rnd_556x45_EPR_G36",30},{},""},{"rhs_weap_M136_hedp","","","",{"rhs_m136_hedp_mag",1},{},""},{"hlc_pistol_P226R_Combat","","hlc_acc_TLR1","HLC_optic_HP",{"hlc_15Rnd_9x19_B_P226",15},{},""},{"Manticore_ManticamCryeWinter_01",{{"ACE_EarPlugs",1},{"ACE_salineIV_250",2},{"ACE_salineIV_500",1},{"ACE_fieldDressing",4},{"ACE_elasticBandage",4},{"ACE_quikclot",4},{"ACE_packingBandage",4},{"ACE_morphine",2},{"ACE_epinephrine",1},{"ACE_EntrenchingTool",1},{"rhs_m136_hedp_mag",1,1}}},{"Manticore_ManticamRAVOperatorWinter",{{"SmokeShell",4,1},{"ACE_M84",2,1},{"rhs_mag_m67",2,1},{"B_IR_Grenade",1,1},{"SmokeShellBlue",1,1},{"SmokeShellGreen",1,1},{"hlc_15Rnd_9x19_B_P226",3,15},{"hlc_30rnd_556x45_EPR_G36",8,30}}},{},"Manticore_ManticamMich2000Winter_01","",{"Rangefinder","","","",{},{},""},{"ItemMap","ItemMicroDAGR","ItemRadio","ItemCompass","ItemWatch","rhsusf_ANPVS_15"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'Manticore_Insignia_FieldBadge_OR2'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };


        ALiVE_orbatCreator_insignia = "Manticore_Insignia_FieldBadge_OR2";

    };

    class B_ManticoreFaction_Winter_AT_Specialist_01 : B_soldier_AT_F_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "AT Specialist";
        side = 1;
        faction = "Manticore_Faction_Winter";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

        uniformClass = "Manticore_ManticamCryeWinter_01";

        linkedItems[] = {"Manticore_ManticamRAVOperatorWinter","Manticore_ManticamMich2000Winter_01","ItemMap","ItemMicroDAGR","ItemRadio","ItemCompass","ItemWatch","rhsusf_ANPVS_15"};
        respawnlinkedItems[] = {"Manticore_ManticamRAVOperatorWinter","Manticore_ManticamMich2000Winter_01","ItemMap","ItemMicroDAGR","ItemRadio","ItemCompass","ItemWatch","rhsusf_ANPVS_15"};

        weapons[] = {"hlc_rifle_G36KA1KSK","launch_MRAWS_green_rail_F","hlc_pistol_P226R_Combat","Rangefinder"};
        respawnWeapons[] = {"hlc_rifle_G36KA1KSK","launch_MRAWS_green_rail_F","hlc_pistol_P226R_Combat","Rangefinder"};

        magazines[] = {"hlc_30rnd_556x45_EPR_G36","hlc_15Rnd_9x19_B_P226","hlc_30rnd_556x45_EPR_G36","hlc_15Rnd_9x19_B_P226"};
        respawnMagazines[] = {"hlc_30rnd_556x45_EPR_G36","hlc_15Rnd_9x19_B_P226","hlc_30rnd_556x45_EPR_G36","hlc_15Rnd_9x19_B_P226"};

        backpack = "Manticore_ManticamKitbagWinter_Med ";

        ALiVE_orbatCreator_loadout[] = {{"hlc_rifle_G36KA1KSK","","","rhsusf_acc_g33_xps3",{"hlc_30rnd_556x45_EPR_G36",30},{},""},{"launch_MRAWS_green_rail_F","","","",{},{},""},{"hlc_pistol_P226R_Combat","","hlc_acc_TLR1","HLC_optic_HP",{"hlc_15Rnd_9x19_B_P226",15},{},""},{"Manticore_ManticamCryeWinter_01",{{"ACE_EarPlugs",1},{"ACE_salineIV_250",2},{"ACE_salineIV_500",1},{"ACE_fieldDressing",4},{"ACE_elasticBandage",4},{"ACE_quikclot",4},{"ACE_packingBandage",4},{"ACE_morphine",2},{"ACE_epinephrine",1},{"ACE_EntrenchingTool",1}}},{"Manticore_ManticamRAVOperatorWinter",{{"SmokeShell",4,1},{"ACE_M84",2,1},{"rhs_mag_m67",2,1},{"B_IR_Grenade",1,1},{"SmokeShellBlue",1,1},{"SmokeShellGreen",1,1},{"hlc_15Rnd_9x19_B_P226",3,15},{"hlc_30rnd_556x45_EPR_G36",8,30}}},{"VSM_OGA_OD_Backpack_Kitbag",{{"MRAWS_HEAT_F",2,1},{"MRAWS_HE_F",3,1}}},"Manticore_ManticamMich2000Winter_01","",{"Rangefinder","","","",{},{},""},{"ItemMap","ItemMicroDAGR","ItemRadio","ItemCompass","ItemWatch","rhsusf_ANPVS_15"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'Manticore_Insignia_FieldBadge_OR2'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };


        ALiVE_orbatCreator_insignia = "Manticore_Insignia_FieldBadge_OR2";

    };

    class B_ManticoreFaction_Winter_Machine_Gunner_MG2_01 : B_HeavyGunner_F_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "Machine Gunner - MG2";
        side = 1;
        faction = "Manticore_Faction_Winter";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

        uniformClass = "Manticore_ManticamCryeWinter_01";

        linkedItems[] = {"Manticore_ManticamRAVOperatorWinter","Manticore_ManticamMich2000Winter_01","ItemMap","ItemMicroDAGR","ItemRadio","ItemCompass","ItemWatch","rhsusf_ANPVS_15"};
        respawnlinkedItems[] = {"Manticore_ManticamRAVOperatorWinter","Manticore_ManticamMich2000Winter_01","ItemMap","ItemMicroDAGR","ItemRadio","ItemCompass","ItemWatch","rhsusf_ANPVS_15"};

        weapons[] = {"hlc_lmg_MG3KWS_b","hlc_pistol_P226R_Combat","Rangefinder"};
        respawnWeapons[] = {"hlc_lmg_MG3KWS_b","hlc_pistol_P226R_Combat","Rangefinder"};

        magazines[] = {"hlc_50Rnd_762x51_B_MG3","hlc_15Rnd_9x19_B_P226","hlc_50Rnd_762x51_B_MG3","hlc_15Rnd_9x19_B_P226"};
        respawnMagazines[] = {"hlc_50Rnd_762x51_B_MG3","hlc_15Rnd_9x19_B_P226","hlc_50Rnd_762x51_B_MG3","hlc_15Rnd_9x19_B_P226"};

        backpack = "Manticore_ManticamKitbagWinter";

        ALiVE_orbatCreator_loadout[] = {{"hlc_lmg_MG3KWS_b","","","",{"hlc_50Rnd_762x51_B_MG3",50},{},""},{},{"hlc_pistol_P226R_Combat","","","HLC_optic_HP",{"hlc_15Rnd_9x19_B_P226",15},{},""},{"Manticore_ManticamCryeWinter_01",{{"ACE_EarPlugs",1},{"ACE_salineIV_250",2},{"ACE_salineIV_500",1},{"ACE_fieldDressing",4},{"ACE_elasticBandage",4},{"ACE_quikclot",4},{"ACE_packingBandage",4},{"ACE_morphine",2},{"ACE_epinephrine",1},{"ACE_EntrenchingTool",1}}},{"Manticore_ManticamRAVOperatorWinter",{{"SmokeShell",4,1},{"ACE_M84",2,1},{"rhs_mag_m67",2,1},{"B_IR_Grenade",1,1},{"SmokeShellBlue",1,1},{"SmokeShellGreen",1,1},{"hlc_15Rnd_9x19_B_P226",3,15},{"hlc_50Rnd_762x51_M_MG3",4,50}}},{"Manticore_ManticamKitbagWinter",{{"hlc_100Rnd_762x51_B_MG3",1,100},{"hlc_250Rnd_762x51_M_MG3",1,250},{"hlc_50Rnd_762x51_M_MG3",4,50}}},"Manticore_ManticamMich2000Winter_01","",{"Rangefinder","","","",{},{},""},{"ItemMap","ItemMicroDAGR","ItemRadio","ItemCompass","ItemWatch","rhsusf_ANPVS_15"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'Manticore_Insignia_FieldBadge_OR2'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };


        ALiVE_orbatCreator_insignia = "Manticore_Insignia_FieldBadge_OR2";

    };

    class B_ManticoreFaction_Winter_Autorifleman_MG1_01 : B_soldier_AR_F_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "Autorifleman - MG1";
        side = 1;
        faction = "Manticore_Faction_Winter";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

        uniformClass = "Manticore_ManticamCryeWinter_01";

        linkedItems[] = {"Manticore_ManticamRAVOperatorWinter","Manticore_ManticamMich2000Winter_01","ItemMap","ItemMicroDAGR","ItemRadio","ItemCompass","ItemWatch","rhsusf_ANPVS_15"};
        respawnlinkedItems[] = {"Manticore_ManticamRAVOperatorWinter","Manticore_ManticamMich2000Winter_01","ItemMap","ItemMicroDAGR","ItemRadio","ItemCompass","ItemWatch","rhsusf_ANPVS_15"};

        weapons[] = {"hlc_lmg_mk46","hlc_pistol_P226R_Combat","Rangefinder"};
        respawnWeapons[] = {"hlc_lmg_mk46","hlc_pistol_P226R_Combat","Rangefinder"};

        magazines[] = {"hlc_200rnd_556x45_M_SAW","hlc_15Rnd_9x19_B_P226","hlc_200rnd_556x45_M_SAW","hlc_15Rnd_9x19_B_P226"};
        respawnMagazines[] = {"hlc_200rnd_556x45_M_SAW","hlc_15Rnd_9x19_B_P226","hlc_200rnd_556x45_M_SAW","hlc_15Rnd_9x19_B_P226"};

        backpack = "Manticore_ManticamKitbagWinter";

        ALiVE_orbatCreator_loadout[] = {{"hlc_lmg_mk46","","","rhsusf_acc_su230",{"hlc_200rnd_556x45_M_SAW",200},{},""},{},{"hlc_pistol_P226R_Combat","","","HLC_optic_HP",{"hlc_15Rnd_9x19_B_P226",15},{},""},{"Manticore_ManticamCryeWinter_01",{{"ACE_EarPlugs",1},{"ACE_salineIV_250",2},{"ACE_salineIV_500",1},{"ACE_fieldDressing",4},{"ACE_elasticBandage",4},{"ACE_quikclot",4},{"ACE_packingBandage",4},{"ACE_morphine",2},{"ACE_epinephrine",1},{"ACE_EntrenchingTool",1}}},{"Manticore_ManticamRAVOperatorWinter",{{"SmokeShell",4,1},{"ACE_M84",2,1},{"rhs_mag_m67",2,1},{"B_IR_Grenade",1,1},{"SmokeShellBlue",1,1},{"SmokeShellGreen",1,1},{"hlc_15Rnd_9x19_B_P226",3,15},{"200Rnd_556x45_Box_F",2,200}}},{"Manticore_ManticamKitbagWinter",{{"200Rnd_556x45_Box_F",4,200}}},"Manticore_ManticamMich2000Winter_01","",{"Rangefinder","","","",{},{},""},{"ItemMap","ItemMicroDAGR","ItemRadio","ItemCompass","ItemWatch","rhsusf_ANPVS_15"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'Manticore_Insignia_FieldBadge_OR2'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };


        ALiVE_orbatCreator_insignia = "Manticore_Insignia_FieldBadge_OR2";

    };

    class B_ManticoreFaction_Winter_Autorifleman_LSW_01 : B_soldier_AR_F_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "Autorifleman - LSW";
        side = 1;
        faction = "Manticore_Faction_Winter";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

        uniformClass = "Manticore_ManticamCryeWinter_01";

        linkedItems[] = {"Manticore_ManticamRAVOperatorWinter","Manticore_ManticamMich2000Winter_01","ItemMap","ItemMicroDAGR","ItemRadio","ItemCompass","ItemWatch","rhsusf_ANPVS_15"};
        respawnlinkedItems[] = {"Manticore_ManticamRAVOperatorWinter","Manticore_ManticamMich2000Winter_01","ItemMap","ItemMicroDAGR","ItemRadio","ItemCompass","ItemWatch","rhsusf_ANPVS_15"};

        weapons[] = {"rhs_weap_m27iar","hlc_pistol_P226R_Combat","Rangefinder"};
        respawnWeapons[] = {"rhs_weap_m27iar","hlc_pistol_P226R_Combat","Rangefinder"};

        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","hlc_15Rnd_9x19_B_P226","rhs_mag_30Rnd_556x45_M855A1_Stanag","hlc_15Rnd_9x19_B_P226"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","hlc_15Rnd_9x19_B_P226","rhs_mag_30Rnd_556x45_M855A1_Stanag","hlc_15Rnd_9x19_B_P226"};

        backpack = "Manticore_ManticamCompactBagWinter";

        ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m27iar","","","rhsusf_acc_su230",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"rhsusf_acc_grip1"},{},{"hlc_pistol_P226R_Combat","","","HLC_optic_HP",{"hlc_15Rnd_9x19_B_P226",15},{},""},{"Manticore_ManticamCryeWinter_01",{{"ACE_EarPlugs",1},{"ACE_salineIV_250",2},{"ACE_salineIV_500",1},{"ACE_fieldDressing",4},{"ACE_elasticBandage",4},{"ACE_quikclot",4},{"ACE_packingBandage",4},{"ACE_morphine",2},{"ACE_epinephrine",1},{"ACE_EntrenchingTool",1}}},{"Manticore_ManticamRAVOperatorWinter",{{"SmokeShell",4,1},{"ACE_M84",2,1},{"rhs_mag_m67",2,1},{"B_IR_Grenade",1,1},{"SmokeShellBlue",1,1},{"SmokeShellGreen",1,1},{"hlc_15Rnd_9x19_B_P226",3,15},{"hlc_30rnd_556x45_EPR",5,30}}},{"Manticore_ManticamCompactBagWinter",{{"hlc_50rnd_556x45_M",3,50},{"hlc_30rnd_556x45_EPR",2,30}}},"Manticore_ManticamMich2000Winter_01","",{"Rangefinder","","","",{},{},""},{"ItemMap","ItemMicroDAGR","ItemRadio","ItemCompass","ItemWatch","rhsusf_ANPVS_15"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'Manticore_Insignia_FieldBadge_OR2'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };


        ALiVE_orbatCreator_insignia = "Manticore_Insignia_FieldBadge_OR2";

    };

    class B_ManticoreFaction_Winter_Anti_Air_Specialist_01 : B_soldier_AA_F_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "Anti-Air Specialist";
        side = 1;
        faction = "Manticore_Faction_Winter";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

        uniformClass = "Manticore_ManticamCryeWinter_01";

        linkedItems[] = {"Manticore_ManticamRAVOperatorWinter","Manticore_ManticamMich2000Winter_01","ItemMap","ItemMicroDAGR","ItemRadio","ItemCompass","ItemWatch","rhsusf_ANPVS_15"};
        respawnlinkedItems[] = {"Manticore_ManticamRAVOperatorWinter","Manticore_ManticamMich2000Winter_01","ItemMap","ItemMicroDAGR","ItemRadio","ItemCompass","ItemWatch","rhsusf_ANPVS_15"};

        weapons[] = {"hlc_rifle_G36KA1KSK","rhs_weap_fim92","hlc_pistol_P226R_Combat","Rangefinder"};
        respawnWeapons[] = {"hlc_rifle_G36KA1KSK","rhs_weap_fim92","hlc_pistol_P226R_Combat","Rangefinder"};

        magazines[] = {"hlc_30rnd_556x45_EPR_G36","rhs_fim92_mag","hlc_15Rnd_9x19_B_P226","hlc_30rnd_556x45_EPR_G36","hlc_15Rnd_9x19_B_P226"};
        respawnMagazines[] = {"hlc_30rnd_556x45_EPR_G36","rhs_fim92_mag","hlc_15Rnd_9x19_B_P226","hlc_30rnd_556x45_EPR_G36","hlc_15Rnd_9x19_B_P226"};

        backpack = "Manticore_ManticamKitbagWinter";

        ALiVE_orbatCreator_loadout[] = {{"hlc_rifle_G36KA1KSK","","","rhsusf_acc_g33_xps3",{"hlc_30rnd_556x45_EPR_G36",30},{},""},{"rhs_weap_fim92","","","",{"rhs_fim92_mag",1},{},""},{"hlc_pistol_P226R_Combat","","hlc_acc_TLR1","HLC_optic_HP",{"hlc_15Rnd_9x19_B_P226",15},{},""},{"Manticore_ManticamCryeWinter_01",{{"ACE_EarPlugs",1},{"ACE_salineIV_250",2},{"ACE_salineIV_500",1},{"ACE_fieldDressing",4},{"ACE_elasticBandage",4},{"ACE_quikclot",4},{"ACE_packingBandage",4},{"ACE_morphine",2},{"ACE_epinephrine",1},{"ACE_EntrenchingTool",1}}},{"Manticore_ManticamRAVOperatorWinter",{{"SmokeShell",4,1},{"ACE_M84",2,1},{"rhs_mag_m67",2,1},{"B_IR_Grenade",1,1},{"SmokeShellBlue",1,1},{"SmokeShellGreen",1,1},{"hlc_15Rnd_9x19_B_P226",3,15},{"hlc_30rnd_556x45_EPR_G36",8,30}}},{"Manticore_ManticamKitbagWinter",{{"rhs_fim92_mag",2,1}}},"Manticore_ManticamMich2000Winter_01","",{"Rangefinder","","","",{},{},""},{"ItemMap","ItemMicroDAGR","ItemRadio","ItemCompass","ItemWatch","rhsusf_ANPVS_15"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'Manticore_Insignia_FieldBadge_OR2'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };


        ALiVE_orbatCreator_insignia = "Manticore_Insignia_FieldBadge_OR2";

    };

    class B_ManticoreFaction_Winter_Pilot_01 : B_Pilot_F_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "Pilot";
        side = 1;
        faction = "Manticore_Faction_Winter";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

        uniformClass = "U_I_pilotCoveralls";

        linkedItems[] = {"VSM_LBT1961_GRN","H_PilotHelmetFighter_B","ItemMap","ItemMicroDAGR","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"VSM_LBT1961_GRN","H_PilotHelmetFighter_B","ItemMap","ItemMicroDAGR","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"hlc_smg_mp5k","Rangefinder"};
        respawnWeapons[] = {"hlc_smg_mp5k","Rangefinder"};

        magazines[] = {"hlc_30Rnd_9x19_B_MP5","hlc_30Rnd_9x19_B_MP5"};
        respawnMagazines[] = {"hlc_30Rnd_9x19_B_MP5","hlc_30Rnd_9x19_B_MP5"};

        ALiVE_orbatCreator_loadout[] = {{},{},{"hlc_smg_mp5k","","","",{"hlc_30Rnd_9x19_B_MP5",30},{},""},{"U_I_pilotCoveralls",{{"ACE_EarPlugs",1},{"ACE_salineIV_250",2},{"ACE_salineIV_500",1},{"ACE_fieldDressing",4},{"ACE_elasticBandage",4},{"ACE_quikclot",4},{"ACE_packingBandage",4},{"ACE_morphine",2},{"ACE_epinephrine",1},{"ACE_EntrenchingTool",1},{"hlc_30Rnd_9x19_B_MP5",1,30}}},{"VSM_LBT1961_GRN",{{"SmokeShell",3,1},{"rhs_mag_m67",2,1},{"B_IR_Grenade",1,1},{"SmokeShellBlue",1,1},{"SmokeShellGreen",1,1},{"hlc_30Rnd_9x19_B_MP5",2,30}}},{},"H_PilotHelmetFighter_B","",{"Rangefinder","","","",{},{},""},{"ItemMap","ItemMicroDAGR","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'Manticore_Insignia_FieldBadge_OR1'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };


        ALiVE_orbatCreator_insignia = "Manticore_Insignia_FieldBadge_OR1";

    };

    class B_ManticoreFaction_Winter_Helicopter_Pilot_01 : B_Pilot_F_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "Helicopter Crew";
        side = 1;
        faction = "Manticore_Faction_Winter";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

        uniformClass = "Manticore_ManticamCryeWinter_01";

        linkedItems[] = {"Manticore_ManticamRAVOperatorWinter","rhsusf_hgu56p_visor_green","ItemMap","ItemcTab","ItemRadio","ItemCompass","ItemWatch","rhsusf_ANPVS_15"};
        respawnlinkedItems[] = {"Manticore_ManticamRAVOperatorWinter","rhsusf_hgu56p_visor_green","ItemMap","ItemcTab","ItemRadio","ItemCompass","ItemWatch","rhsusf_ANPVS_15"};

        weapons[] = {"hlc_rifle_G36C","hlc_pistol_P226R_Combat","Rangefinder"};
        respawnWeapons[] = {"hlc_rifle_G36C","hlc_pistol_P226R_Combat","Rangefinder"};

        magazines[] = {"hlc_30rnd_556x45_EPR_G36","hlc_15Rnd_9x19_B_P226","hlc_30rnd_556x45_EPR_G36","hlc_15Rnd_9x19_B_P226"};
        respawnMagazines[] = {"hlc_30rnd_556x45_EPR_G36","hlc_15Rnd_9x19_B_P226","hlc_30rnd_556x45_EPR_G36","hlc_15Rnd_9x19_B_P226"};

        ALiVE_orbatCreator_loadout[] = {{"hlc_rifle_G36C","","rhsusf_acc_anpeq15_bk","rhsusf_acc_g33_xps3",{"hlc_30rnd_556x45_EPR_G36",30},{},""},{},{"hlc_pistol_P226R_Combat","","hlc_acc_TLR1","HLC_optic_HP",{"hlc_15Rnd_9x19_B_P226",15},{},""},{"Manticore_ManticamCryeWinter_01",{{"ACE_EarPlugs",1},{"ACE_salineIV_250",2},{"ACE_salineIV_500",1},{"ACE_fieldDressing",4},{"ACE_elasticBandage",4},{"ACE_quikclot",4},{"ACE_packingBandage",4},{"ACE_morphine",2},{"ACE_epinephrine",1},{"ACE_EntrenchingTool",1}}},{"Manticore_ManticamRAVOperatorWinter",{{"SmokeShell",4,1},{"ACE_M84",2,1},{"rhs_mag_m67",2,1},{"B_IR_Grenade",1,1},{"SmokeShellBlue",1,1},{"SmokeShellGreen",1,1},{"hlc_15Rnd_9x19_B_P226",3,15},{"hlc_30rnd_556x45_EPR_G36",8,30}}},{},"rhsusf_hgu56p_visor_green","rhs_googles_orange",{"Rangefinder","","","",{},{},""},{"ItemMap","ItemcTab","ItemRadio","ItemCompass","ItemWatch","rhsusf_ANPVS_15"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'Manticore_Insignia_FieldBadge_OR1'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };


        ALiVE_orbatCreator_insignia = "Manticore_Insignia_FieldBadge_OR1";

    };

    class B_ManticoreFaction_Winter_Crewman_01 : B_crew_F_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "Crewman";
        side = 1;
        faction = "Manticore_Faction_Winter";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

        uniformClass = "Manticore_ManticamCryeWinter_01";

        linkedItems[] = {"Manticore_ManticamRAVOperatorWinter","H_HelmetCrew_I","ItemMap","ItemMicroDAGR","ItemRadio","ItemCompass","ItemWatch","rhsusf_ANPVS_15"};
        respawnlinkedItems[] = {"Manticore_ManticamRAVOperatorWinter","H_HelmetCrew_I","ItemMap","ItemMicroDAGR","ItemRadio","ItemCompass","ItemWatch","rhsusf_ANPVS_15"};

        weapons[] = {"hlc_rifle_G36C","hlc_pistol_P226R_Combat","Rangefinder"};
        respawnWeapons[] = {"hlc_rifle_G36C","hlc_pistol_P226R_Combat","Rangefinder"};

        magazines[] = {"hlc_30rnd_556x45_EPR_G36","hlc_15Rnd_9x19_B_P226","hlc_30rnd_556x45_EPR_G36","hlc_15Rnd_9x19_B_P226"};
        respawnMagazines[] = {"hlc_30rnd_556x45_EPR_G36","hlc_15Rnd_9x19_B_P226","hlc_30rnd_556x45_EPR_G36","hlc_15Rnd_9x19_B_P226"};

        ALiVE_orbatCreator_loadout[] = {{"hlc_rifle_G36C","","rhsusf_acc_anpeq15_bk","rhsusf_acc_g33_xps3",{"hlc_30rnd_556x45_EPR_G36",30},{},""},{},{"hlc_pistol_P226R_Combat","","hlc_acc_TLR1","HLC_optic_HP",{"hlc_15Rnd_9x19_B_P226",15},{},""},{"Manticore_ManticamCryeWinter_01",{{"ACE_EarPlugs",1},{"ACE_salineIV_250",2},{"ACE_salineIV_500",1},{"ACE_fieldDressing",4},{"ACE_elasticBandage",4},{"ACE_quikclot",4},{"ACE_packingBandage",4},{"ACE_morphine",2},{"ACE_epinephrine",1},{"ACE_EntrenchingTool",1}}},{"Manticore_ManticamRAVOperatorWinter",{{"SmokeShell",4,1},{"ACE_M84",2,1},{"rhs_mag_m67",2,1},{"B_IR_Grenade",1,1},{"SmokeShellBlue",1,1},{"SmokeShellGreen",1,1},{"hlc_15Rnd_9x19_B_P226",3,15},{"hlc_30rnd_556x45_EPR_G36",8,30}}},{},"H_HelmetCrew_I","",{"Rangefinder","","","",{},{},""},{"ItemMap","ItemMicroDAGR","ItemRadio","ItemCompass","ItemWatch","rhsusf_ANPVS_15"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'Manticore_Insignia_FieldBadge_OR1'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };


        ALiVE_orbatCreator_insignia = "Manticore_Insignia_FieldBadge_OR1";

    };

    class B_ManticoreFaction_Winter_Marksman_01 : B_soldier_M_F_OCimport_02 {
        author = "SSgt. D.O'Hara [MVSA]";
        scope = 2;
        scopeCurator = 2;
        displayName = "Marksman";
        side = 1;
        faction = "Manticore_Faction_Winter";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

        uniformClass = "Manticore_ManticamCryeWinter_01";

        linkedItems[] = {"Manticore_ManticamRAVOperatorWinter","Manticore_ManticamMich2000Winter_01","ItemMap","ItemMicroDAGR","ItemRadio","ItemCompass","ItemWatch","rhsusf_ANPVS_15"};
        respawnlinkedItems[] = {"Manticore_ManticamRAVOperatorWinter","Manticore_ManticamMich2000Winter_01","ItemMap","ItemMicroDAGR","ItemRadio","ItemCompass","ItemWatch","rhsusf_ANPVS_15"};

        weapons[] = {"rhs_weap_sr25_wd","hlc_pistol_P226R_Combat","Rangefinder"};
        respawnWeapons[] = {"rhs_weap_sr25_wd","hlc_pistol_P226R_Combat","Rangefinder"};

        magazines[] = {"rhsusf_20Rnd_762x51_SR25_m118_special_Mag","hlc_15Rnd_9x19_B_P226","rhsusf_20Rnd_762x51_SR25_m118_special_Mag","hlc_15Rnd_9x19_B_P226"};
        respawnMagazines[] = {"rhsusf_20Rnd_762x51_SR25_m118_special_Mag","hlc_15Rnd_9x19_B_P226","rhsusf_20Rnd_762x51_SR25_m118_special_Mag","hlc_15Rnd_9x19_B_P226"};

        ALiVE_orbatCreator_loadout[] = {{"rhs_weap_sr25_wd","","rhsusf_acc_anpeq15side_bk","rhsusf_acc_su230",{"rhsusf_20Rnd_762x51_SR25_m118_special_Mag",20},{},"rhsusf_acc_harris_bipod"},{},{"hlc_pistol_P226R_Combat","","hlc_acc_TLR1","HLC_optic_HP",{"hlc_15Rnd_9x19_B_P226",15},{},""},{"Manticore_ManticamCryeWinter_01",{{"ACE_EarPlugs",1},{"ACE_salineIV_250",2},{"ACE_salineIV_500",1},{"ACE_fieldDressing",4},{"ACE_elasticBandage",4},{"ACE_quikclot",4},{"ACE_packingBandage",4},{"ACE_morphine",2},{"ACE_epinephrine",1},{"ACE_EntrenchingTool",1}}},{"Manticore_ManticamRAVOperatorWinter",{{"SmokeShell",4,1},{"ACE_M84",2,1},{"rhs_mag_m67",2,1},{"B_IR_Grenade",1,1},{"SmokeShellBlue",1,1},{"SmokeShellGreen",1,1},{"hlc_15Rnd_9x19_B_P226",3,15},{"rhsusf_20Rnd_762x51_SR25_m118_special_Mag",5,20},{"rhsusf_20Rnd_762x51_SR25_m993_Mag",2,20}}},{},"Manticore_ManticamMich2000Winter_01","",{"Rangefinder","","","",{},{},""},{"ItemMap","ItemMicroDAGR","ItemRadio","ItemCompass","ItemWatch","rhsusf_ANPVS_15"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'Manticore_Insignia_FieldBadge_OR2'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };


        ALiVE_orbatCreator_insignia = "Manticore_Insignia_FieldBadge_OR2";

    };*/
};
