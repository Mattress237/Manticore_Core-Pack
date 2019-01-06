#define _standardRifle(StandardRifle,UGLRifle,CompactRifle)\
	class _xx_hlc_rifle_G36KA1KSK\
	{\
		weapon = "hlc_rifle_G36KA1KSK";\
		count = StandardRifle ;\
	};\
	class _xx_HLC_Rifle_G36KSKAG36\
	{\
		weapon = "HLC_Rifle_G36KSKAG36";\
		count = UGLRifle ;\
	};\
	class _xx_hlc_rifle_G36C\
	{\
		weapon = "hlc_rifle_G36C";\
		count = CompactRifle ;\
	};

#define _standardMag(Normal,Tracer)\
	class _xx_hlc_30rnd_556x45_EPR_G36\
	{\
		magazine = "hlc_30rnd_556x45_EPR_G36";\
		count = Normal;\
	};\
	class _xx_hlc_30rnd_556x45_Tracers_G36\
	{\
		magazine = "hlc_30rnd_556x45_Tracers_G36";\
		count = Tracer;\
	}; 

#define _UGLSmoke(Red,White,Green,Yellow,Orange,Purple,Blue)\
	class _xx_1Rnd_SmokeRed_Grenade_shell\
	{\
		magazine = "1Rnd_SmokeRed_Grenade_shell";\
		count = Red;\
	};\
	class _xx_1Rnd_Smoke_Grenade_shell\
	{\
		magazine = "1Rnd_Smoke_Grenade_shell";\
		count = White;\
	};\
	class _xx_1Rnd_SmokeGreen_Grenade_shell\
	{\
		magazine = "1Rnd_SmokeGreen_Grenade_shell";\
		count = Green;\
	};\
	class _xx_1Rnd_SmokeYellow_Grenade_shell\
	{\
		magazine = "1Rnd_SmokeYellow_Grenade_shell";\
		count = Yellow;\
	};\
	class _xx_1Rnd_SmokeOrange_Grenade_shell\
	{\
		magazine = "1Rnd_SmokeOrange_Grenade_shell";\
		count = Orange;\
	};\
	class _xx_1Rnd_SmokePurple_Grenade_shell\
	{\
		magazine = "1Rnd_SmokePurple_Grenade_shell";\
		count = Purple;\
	};\
	class _xx_1Rnd_SmokeBlue_Grenade_shell\
	{\
		magazine = "1Rnd_SmokeBlue_Grenade_shell";\
		count = Blue;\
	};
	
#define _UGLFlear(Red,White,Green,Yellow,IRFlare)\
	class _xx_UGL_FlareRed_F\
	{\
		magazine = "UGL_FlareRed_F";\
		count = Red;\
	};\
	class _xx_UGL_FlareWhite_F\
	{\
		magazine = "UGL_FlareWhite_F";\
		count = White;\
	};\
	class _xx_UGL_FlareGreen_F\
	{\
		magazine = "UGL_FlareGreen_F";\
		count = Green;\
	};\
	class _xx_UGL_FlareYellow_F\
	{\
		magazine = "UGL_FlareYellow_F";\
		count = Yellow;\
	};\
	class _xx_UGL_FlareCIR_F\
	{\
		magazine = "UGL_FlareCIR_F";\
		count = IRFlare;\
	};

#define _UGLHE(Grenade)\
	class _xx_1Rnd_HE_Grenade_shell\
	{\
		magazine = "1Rnd_HE_Grenade_shell";\
		count = Grenade;\
	};

#define _UGLMics(HuntIR)\
	class _xx_ACE_HuntIR_M203\
	{\
		magazine = "ACE_HuntIR_M203";\
		count = HuntIR;\
	};

#define _standardATTub(ATtub)\
	class _xx_rhs_weap_M136\
	{\
		weapon = "rhs_weap_M136";\
		count = ATtub ;\
	}; 
//
#define _GrenadeOffensive(Frag,Stun,Incendiary)\
	class _xx_rhs_mag_m67\
	{\
		weapon = "rhs_mag_m67";\
		count = Frag;\
	};\
	class _xx_rhs_mag_mk84\
	{\
		weapon = "rhs_mag_mk84";\
		count = Stun;\
	};\
	class _xx_rhs_mag_an_m14_th3\
	{\
		weapon = "rhs_mag_an_m14_th3";\
		count = Incendiary;\
	};

#define _GrenadeSmoke(Red,White,Green,Yellow,Orange,Purple,Blue)\
	class _xx_SmokeShellRed\
	{\
		weapon = "SmokeShellRed";\
		count = Red;\
	};\
	class _xx_SmokeShell\
	{\
		weapon = "SmokeShell";\
		count = White;\
	};\
	class _xx_SmokeShellGreen\
	{\
		weapon = "SmokeShellGreen";\
		count = Green;\
	};\
	class _xx_SmokeShellYellow\
	{\
		weapon = "SmokeShellYellow";\
		count = Yellow;\
	};\
	class _xx_SmokeShellOrange\
	{\
		weapon = "SmokeShellOrange";\
		count = Orange;\
	};\
	class _xx_SmokeShellPurple\
	{\
		weapon = "SmokeShellPurple";\
		count = Purple;\
	};\
	class _xx_SmokeShellBlue\
	{\
		weapon = "SmokeShellBlue";\
		count = Blue;\
	};

#define _GrenadeFlear(Red,White,Green,Yellow)\
	class _xx_ACE_HandFlare_Red\
	{\
		weapon = "ACE_HandFlare_Red";\
		count = Red;\
	};\
	class _xx_ACE_HandFlare_White\
	{\
		weapon = "ACE_HandFlare_White";\
		count = White;\
	};\
	class _xx_ACE_HandFlare_Green\
	{\
		weapon = "ACE_HandFlare_Green";\
		count = Green;\
	};\
	class _xx_ACE_HandFlare_Yellow\
	{\
		weapon = "ACE_HandFlare_Yellow";\
		count = Yellow;\
	};

#define _GrenadeIR(IRGrenade)\
	class _xx_B_IR_Grenade\
	{\
		weapon = "B_IR_Grenade";\
		count =  IRGrenade;\
	};



//Medical
#define _basicMedical(Field,Elastic,Quikclot,Packing)\
	class _xx_ACE_fieldDressing\
	{\
		name = "ACE_fieldDressing";\
		count = Field;\
	};\
	class _xx_ACE_elasticBandage\
	{\
		name = "ACE_elasticBandage";\
		count = Elastic;\
	};\
	class _xx_ACE_quikclot\
	{\
		name = "ACE_quikclot";\
		count = Quikclot;\
	};\
	class _xx_ACE_packingBandage\
	{\
		name = "ACE_packingBandage";\
		count = Packing;\
	};

#define _injectorMedical(Morphine,Epinephrine,Atropine,Adenosine)\
	class _xx_ACE_morphine\
	{\
		name = "ACE_morphine";\
		count = Morphine;\
	};\
	class _xx_ACE_epinephrine\
	{\
		name = "ACE_epinephrine";\
		count = Epinephrine;\
	};\
	class _xx_ACE_atropine\
	{\
		name = "ACE_atropine";\
		count = Atropine;\
	};\
	class _xx_ACE_adenosine\
	{\
		name = "ACE_adenosine";\
		count = Adenosine;\
	};

#define _advMedical(AED,Splint)\
	class _xx_adv_aceCPR_AED\
	{\
		name = "adv_aceCPR_AED";\
		count = AED;\
	};\
	class _xx_adv_aceSplint_splint\
	{\
		name = "adv_aceSplint_splint";\
		count = Splint;\
	};

#define _selinMedical(SelinSmal,SelinMedium,SelinBig)\
	class _xx_ACE_salineIV_250\
	{\
		name = "ACE_salineIV";\
		count = SelinSmal;\
	};\
	class _xx_ACE_salineIV_500\
	{\
		name = "ACE_salineIV";\
		count = SelinMedium;\
	};\
	class _xx_ACE_salineIV\
	{\
		name = "ACE_salineIV";\
		count = SelinBig;\
	};

#define _micsMedical(Tourniquet,BodyBag,PAK,SurgicalKit)\
	class _xx_ACE_tourniquet\
	{\
		name = "ACE_tourniquet";\
		count = Tourniquet;\
	};\
	class _xx_ACE_bodyBag\
	{\
		name = "ACE_bodyBag";\
		count = BodyBag;\
	};\
	class _xx_ACE_personalAidKit\
	{\
		name = "ACE_personalAidKit";\
		count = PAK;\
	};\
	class _xx_ACE_surgicalKit\
	{\
		name = "ACE_surgicalKit";\
		count = SurgicalKit;\
	};

#define _aceDrink(Canteen,Water,Spirit,RedGull,Franta)\
	class _xx_ACE_Canteen\
	{\
		name = "ACE_Canteen";\
		count = Canteen;\
	};\
	class _xx_ACE_WaterBottle\
	{\
		name = "ACE_WaterBottle";\
		count = Water;\
	};\
	class _xx_ACE_Can_Spirit\
	{\
		name = "ACE_Can_Spirit";\
		count = Spirit;\
	};\
	class _xx_ACE_Can_RedGull\
	{\
		name = "ACE_Can_RedGull";\
		count = RedGull;\
	};\
	class _xx_ACE_Can_Franta\
	{\
		name = "ACE_Can_Franta";\
		count = Franta;\
	};

#define _aceXFood(MRE0,MRE1,MRE2,MRE3,MRE4,MRE5,MRE6,MRE7,Banana,MREHR)\
	class _xx_ACE_MRE_BeefStew\
	{\
		name = "ACE_MRE_BeefStew";\
		count = MRE0;\
	};\
	class _xx_ACE_MRE_CreamChickenSoup\
	{\
		name = "ACE_MRE_CreamChickenSoup";\
		count = MRE1;\
	};\
	class _xx_ACE_MRE_CreamTomatoSoup\
	{\
		name = "ACE_MRE_CreamTomatoSoup";\
		count = MRE2;\
	};\
	class _xx_ACE_MRE_MeatballsPasta\
	{\
		name = "ACE_MRE_MeatballsPasta";\
		count = MRE3;\
	};\
	class _xx_ACE_MRE_ChickenTikkaMasala\
	{\
		name = "ACE_MRE_ChickenTikkaMasala";\
		count = MRE4;\
	};\
	class _xx_ACE_MRE_ChickenHerbDumplings\
	{\
		name = "ACE_MRE_ChickenHerbDumplings";\
		count = MRE5;\
	};\
	class _xx_ACE_MRE_LambCurry\
	{\
		name = "ACE_MRE_LambCurry";\
		count = MRE6;\
	};\
	class _xx_ACE_MRE_SteakVegetables\
	{\
		name = "ACE_MRE_SteakVegetables";\
		count = MRE7;\
	};\
	class _xx_ACE_Banana\
	{\
		name = "ACE_Banana";\
		count = Banana;\
	};\
	class _xx_ACE_Humanitarian_Ration\
	{\
		name = "ACE_Humanitarian_Ration";\
		count = MREHR;\
	};
	

#define _aceMics(CableTie,EntrenchingTool,DAGR )\
	class _xx_ACE_CableTie\
	{\
		name = "ACE_CableTie";\
		count = CableTie;\
	};\
	class _xx_ACE_EntrenchingTool\
	{\
		name = "ACE_EntrenchingTool";\
		count = EntrenchingTool;\
	};\
	class _xx_ACE_microDAGR\
	{\
		name = "ACE_microDAGR";\
		count = DAGR;\
	};