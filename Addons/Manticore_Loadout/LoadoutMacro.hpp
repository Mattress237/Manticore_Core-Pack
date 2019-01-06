#define _standardRifle(Rifle)\
	class _xx_rhs_weap_hk416d145\
	{\
		weapon = "rhs_weap_hk416d145";\
		count = Rifle ;\
	};

#define _standardMag(Normal,Tracer)\
	class _xx_rhs_mag_30Rnd_556x45_Mk318_Stanag\
	{\
		magazine = "rhs_mag_30Rnd_556x45_Mk318_Stanag";\
		count = Normal;\
	};\
	class _xx_rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red\
	{\
		magazine = "rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red";\
		count = Tracer;\
	}; 

#define _standardATTub(ATtub)\
	class _xx_rhs_weap_M136\
	{\
		weapon = "rhs_weap_M136";\
		count = ATtub ;\
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

#define _aceXFood(Canteen,Water,MRE0,MRE1,MRE2,MRE3,MRE4,MRE5,MRE6,MRE7,Banana,MREHR,Spirit,RedGull,Franta)\
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
	};\

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