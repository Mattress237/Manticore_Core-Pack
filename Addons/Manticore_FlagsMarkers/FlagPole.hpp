class FlagCarrier;
class Manticore_FlagPole_Base : FlagCarrier
{
	scope = 0;
	scopeCurator = 0;
	author = "Mattress";
	dlc = "Manticore_FlagsMarkers";
	displayName = "[BASE] Manticore Flags (Core)";
	icon = "iconObject_circle";
	accuracy = 1000;
	class EventHandlers
	{
		init = "(_this select 0) setFlagTexture ""\a3\data_f\flags\flag_nato_co.paa""";
	};
};
class Manticore_FlagPole_NATO : Manticore_FlagPole_Base
{
	accuracy = 1000;
	author = "Matttress";
	displayName = "Manticore Flag (NATO)";
	icon = "\Manticore_Flags_Markers\data\flag\icon\icon_nato_ca.paa";
	vehicleClass = "Signs";
	editorCategory = "Manticore_Flag";
	editorSubcategory = "Manticore_Flag_Pole";
	scope = 2;
	scopeCurator = 2;
	class EventHandlers
	{
		init = "(_this select 0) setFlagTexture ""\Manticore_Flags_Markers\data\flag\flag_nato_co.paa""";
	};
};
class Manticore_FlagPole_TFM : Manticore_FlagPole_NATO
{
	author = "Matttress";
	displayName = "Manticore Flag (Manticore)";
	icon = "\Manticore_Flags_Markers\data\flag\icon\icon_Manticore_ca.paa";
	class EventHandlers
	{
		init = "(_this select 0) setFlagTexture ""\Manticore_Flags_Markers\data\flag\flag_Manticore_co.paa""";
	};
};
class Manticore_FlagPole_sTs_01 : Manticore_FlagPole_NATO
{
	author = "Matttress";
	displayName = "Manticore Flag (sTs_01)";
	icon = "\Manticore_Flags_Markers\data\flag\icon\icon_sTs_co.paa";
	class EventHandlers
	{
		init = "(_this select 0) setFlagTexture ""\Manticore_Flags_Markers\data\flag\flag_sTs_01_co.paa""";
	};
};
class Manticore_FlagPole_sTs_00 : Manticore_FlagPole_NATO
{
	author = "Matttress";
	displayName = "Manticore Flag (sTs_00)";
	icon = "\Manticore_Flags_Markers\data\flag\icon\icon_sTs_co.paa";
	class EventHandlers
	{
		init = "(_this select 0) setFlagTexture ""\Manticore_Flags_Markers\data\flag\flag_sTs_00_co.paa""";
	};
};
class Manticore_FlagPole_EU : Manticore_FlagPole_NATO
{
	author = "Mattress";
	displayName = "Manticore Flag (European Union)";
	icon = "\Manticore_Flags_Markers\data\flag\icon\icon_european_union_ca.paa";
	class EventHandlers
	{
		init = "(_this select 0) setFlagTexture ""\Manticore_Flags_Markers\data\flag\flag_european_union_co.paa""";
	};
};
class Manticore_FlagPole_UnitedNations : Manticore_FlagPole_NATO
{
	author = "Mattress";
	displayName = "Manticore Flag (United Nations)";
	icon = "\Manticore_Flags_Markers\data\flag\icon\icon_united_nations_ca.paa";
	class EventHandlers
	{
		init = "(_this select 0) setFlagTexture ""\Manticore_Flags_Markers\data\flag\flag_united_nations_co.paa""";
	};
};
class Manticore_FlagPole_Norway : Manticore_FlagPole_NATO
{
	author = "Matttress";
	displayName = "Manticore Flag (Norway)";
	icon = "\Manticore_Flags_Markers\data\flag\icon\icon_norway_ca.paa";
	class EventHandlers
	{
		init = "(_this select 0) setFlagTexture ""\Manticore_Flags_Markers\data\flag\flag_norway_co.paa""";
	};
};
class Manticore_FlagPole_Sweden : Manticore_FlagPole_NATO
{
	author = "Matttress";
	displayName = "Manticore Flag (Sweden)";
	icon = "\Manticore_Flags_Markers\data\flag\icon\icon_sweden_ca.paa";
	class EventHandlers
	{
		init = "(_this select 0) setFlagTexture ""\Manticore_Flags_Markers\data\flag\flag_sweden_co.paa""";
	};
};
class Manticore_FlagPole_Denmark : Manticore_FlagPole_NATO
{
	author = "Mattress";
	displayName = "Manticore Flag (Denmark)";
	icon = "\Manticore_Flags_Markers\data\flag\icon\icon_denmark_ca.paa";
	class EventHandlers
	{
		init = "(_this select 0) setFlagTexture ""\Manticore_Flags_Markers\data\flag\flag_denmark_co.paa""";
	};
};
class Manticore_FlagPole_Finland : Manticore_FlagPole_NATO
{
	author = "Mattress";
	displayName = "Manticore Flag (Finland)";
	icon = "\Manticore_Flags_Markers\data\flag\icon\icon_finland_ca.paa";
	class EventHandlers
	{
		init = "(_this select 0) setFlagTexture ""\Manticore_Flags_Markers\data\flag\flag_finland_co.paa""";
	};
};
class Manticore_FlagPole_Germany : Manticore_FlagPole_NATO
{
	author = "Mattress";
	displayName = "Manticore Flag (Germany)";
	icon = "\Manticore_Flags_Markers\data\flag\icon\icon_germany_ca.paa";
	class EventHandlers
	{
		init = "(_this select 0) setFlagTexture ""\Manticore_Flags_Markers\data\flag\flag_germany_co.paa""";
	};
};
class Manticore_FlagPole_France : Manticore_FlagPole_NATO
{
	author = "Mattress";
	displayName = "Manticore Flag (France)";
	icon = "\Manticore_Flags_Markers\data\flag\icon\icon_france_ca.paa";
	class EventHandlers
	{
		init = "(_this select 0) setFlagTexture ""\Manticore_Flags_Markers\data\flag\flag_france_co.paa""";
	};
};
class Manticore_FlagPole_Netherlands : Manticore_FlagPole_NATO
{
	author = "Mattress";
	displayName = "Manticore Flag (Netherlands)";
	icon = "\Manticore_Flags_Markers\data\flag\icon\icon_netherlands_ca.paa";
	class EventHandlers
	{
		init = "(_this select 0) setFlagTexture ""\Manticore_Flags_Markers\data\flag\flag_netherlands_co.paa""";
	};
};
class Manticore_FlagPole_USA : Manticore_FlagPole_NATO
{
	author = "Mattress";
	displayName = "Manticore Flag (United States)";
	icon = "\Manticore_Flags_Markers\data\flag\icon\icon_united_states_ca.paa";
	class EventHandlers
	{
		init = "(_this select 0) setFlagTexture ""\Manticore_Flags_Markers\data\flag\flag_united_states_co.paa""";
	};
};
class Manticore_FlagPole_Italy : Manticore_FlagPole_NATO
{
	author = "Mattress";
	displayName = "Manticore Flag (Italy)";
	icon = "\Manticore_Flags_Markers\data\flag\icon\icon_italy_ca.paa";
	class EventHandlers
	{
		init = "(_this select 0) setFlagTexture ""\Manticore_Flags_Markers\data\flag\flag_italy_co.paa""";
	};
};
class Manticore_FlagPole_Poland : Manticore_FlagPole_NATO
{
	author = "Mattress";
	displayName = "Manticore Flag (Poland)";
	icon = "\Manticore_Flags_Markers\data\flag\icon\icon_poland_ca.paa";
	class EventHandlers
	{
		init = "(_this select 0) setFlagTexture ""\Manticore_Flags_Markers\data\flag\flag_poland_co.paa""";
	};
};
class Manticore_FlagPole_Portugal : Manticore_FlagPole_NATO
{
	author = "Mattress";
	displayName = "Manticore Flag (Portugal)";
	icon = "\Manticore_Flags_Markers\data\flag\icon\icon_portugal_ca.paa";
	class EventHandlers
	{
		init = "(_this select 0) setFlagTexture ""\Manticore_Flags_Markers\data\flag\flag_portugal_co.paa""";
	};
};
class Manticore_FlagPole_Spain : Manticore_FlagPole_NATO
{
	author = "Mattress";
	displayName = "Manticore Flag (Spain)";
	icon = "\Manticore_Flags_Markers\data\flag\icon\icon_spain_ca.paa";
	class EventHandlers
	{
		init = "(_this select 0) setFlagTexture ""\Manticore_Flags_Markers\data\flag\flag_spain_co.paa""";
	};
};
class Manticore_FlagPole_Ukraine : Manticore_FlagPole_NATO
{
	author = "Mattress";
	displayName = "Manticore Flag (Ukraine)";
	icon = "\Manticore_Flags_Markers\data\flag\icon\icon_ukraine_ca.paa";
	class EventHandlers
	{
		init = "(_this select 0) setFlagTexture ""\Manticore_Flags_Markers\data\flag\flag_ukraine_co.paa""";
	};
};
class Manticore_FlagPole_United_Kingdom : Manticore_FlagPole_NATO
{
	author = "Mattress";
	displayName = "Manticore Flag (United Kingdom)";
	icon = "\Manticore_Flags_Markers\data\flag\icon\icon_united_kingdom_ca.paa";
	class EventHandlers
	{
		init = "(_this select 0) setFlagTexture ""\Manticore_Flags_Markers\data\flag\flag_united_kingdom_co.paa""";
	};
};
class Manticore_FlagPole_Scotland : Manticore_FlagPole_NATO
{
	author = "Matttress";
	displayName = "Manticore Flag (Scotland)";
	icon = "\Manticore_Flags_Markers\data\flag\icon\icon_Scotland_ca.paa";
	class EventHandlers
	{
		init = "(_this select 0) setFlagTexture ""\Manticore_Flags_Markers\data\flag\flag_Scotland_co.paa""";
	};
};
class Manticore_FlagPole_Royal_Scotland : Manticore_FlagPole_NATO
{
	author = "Matttress";
	displayName = "Manticore Flag (Royal Banner of Scotland)";
	icon = "\Manticore_Flags_Markers\data\flag\icon\icon_Royal_Scotland_co.paa";
	class EventHandlers
	{
		init = "(_this select 0) setFlagTexture ""\Manticore_Flags_Markers\data\flag\flag_Royal_Scotland_co.paa""";
	};
};
class Manticore_FlagPole_Israel : Manticore_FlagPole_NATO
{
	author = "Mattress";
	displayName = "Manticore Flag (Israel)";
	icon = "\Manticore_Flags_Markers\data\flag\icon\icon_israel_ca.paa";
	class EventHandlers
	{
		init = "(_this select 0) setFlagTexture ""\Manticore_Flags_Markers\data\flag\flag_israel_co.paa""";
	};
};
class Manticore_FlagPole_Belgium : Manticore_FlagPole_NATO
{
	author = "Mattress";
	displayName = "Manticore Flag (Belgium)";
	icon = "\Manticore_Flags_Markers\data\flag\icon\icon_belgium_ca.paa";
	class EventHandlers
	{
		init = "(_this select 0) setFlagTexture ""\Manticore_Flags_Markers\data\flag\flag_belgium_co.paa""";
	};
};
class Manticore_FlagPole_Austria : Manticore_FlagPole_NATO
{
	author = "Mattress";
	displayName = "Manticore Flag (Austria)";
	icon = "\Manticore_Flags_Markers\data\flag\icon\icon_austria_ca.paa";
	class EventHandlers
	{
		init = "(_this select 0) setFlagTexture ""\Manticore_Flags_Markers\data\flag\flag_austria_co.paa""";
	};
};
class Manticore_FlagPole_Canada : Manticore_FlagPole_NATO
{
	author = "Mattress";
	displayName = "Manticore Flag (Canada)";
	icon = "\Manticore_Flags_Markers\data\flag\icon\icon_canada_ca.paa";
	class EventHandlers
	{
		init = "(_this select 0) setFlagTexture ""\Manticore_Flags_Markers\data\flag\flag_canada_co.paa""";
	};
};
class Manticore_FlagPole_Greenland : Manticore_FlagPole_NATO
{
	author = "Mattress";
	displayName = "Manticore Flag (Greenland)";
	icon = "\Manticore_Flags_Markers\data\flag\icon\icon_greenland_ca.paa";
	class EventHandlers
	{
		init = "(_this select 0) setFlagTexture ""\Manticore_Flags_Markers\data\flag\flag_greenland_co.paa""";
	};
};
class Manticore_FlagPole_TexMex : Manticore_FlagPole_NATO
{
	author = "Mattress";
	displayName = "Manticore Flag (Tex-Mex)";
	icon = "\Manticore_Flags_Markers\data\flag\icon\icon_TexMex_ca.paa";
	class EventHandlers
	{
		init = "(_this select 0) setFlagTexture ""\Manticore_Flags_Markers\data\flag\flag_TexMex_co.paa""";
	};
};
class Manticore_FlagPole_Croatia : Manticore_FlagPole_NATO
{
	author = "Mattress";
	displayName = "Manticore Flag (Croatia)";
	icon = "\Manticore_Flags_Markers\data\flag\icon\icon_croatia_ca.paa";
	class EventHandlers
	{
		init = "(_this select 0) setFlagTexture ""\Manticore_Flags_Markers\data\flag\flag_croatia_co.paa""";
	};
};