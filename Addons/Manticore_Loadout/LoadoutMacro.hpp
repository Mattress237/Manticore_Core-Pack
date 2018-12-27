#define _standardRifle(x) \
	class _xx_rhs_weap_hk416d145\
	{\
		weapon = "rhs_weap_hk416d145"; \
		count = x ;\
	};

#define _standardMag(x,y)\
	class _xx_rhs_mag_30Rnd_556x45_Mk318_Stanag\
	{\
		magazine = "rhs_mag_30Rnd_556x45_Mk318_Stanag";\
		count = x;\
	};\
	class _xx_rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red\
	{\
		magazine = "rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red";\
		count = y;\
	};

#define _standardATTub (x)\
	class _xx_rhs_weap_M136\
	{\
		weapon = "rhs_weap_M136";\
		count = x ;\
	};
//Medical
#define _basicMedical (x,y,z,c)\
	class _xx_ACE_fieldDressing\
	{\
		name = "ACE_fieldDressing";\
		count = x;\
	};\
	class _xx_ACE_elasticBandage\
	{\
		name = "ACE_elasticBandage";\
		count = y;\
	};\
	class _xx_ACE_quikclot\
	{\
		name = "ACE_quikclot";\
		count = z;\
	};\
	class _xx_ACE_packingBandage\
	{\
		name = "ACE_packingBandage";\
		count = c;\
	};

#define _injectorMedical (Morphine,Epinephrine,Atropine,Adenosine)\
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

#define _advMedical ($AED,$Splint)\
class _xx_adv_aceCPR_AED\
{\
	name = "adv_aceCPR_AED";\
	count = $AED;\
};\
class _xx_adv_aceSplint_splint\
{\
	name = "adv_aceSplint_splint";\
	count = $Splint;\
};

#define _selinMedical ($250ml,$500ml,$1000ml)\
class _xx_ACE_salineIV_250\
{\
	name = "ACE_salineIV";\
	count = $250ml;\
};\
class _xx_ACE_salineIV_500\
{\
	name = "ACE_salineIV";\
	count = $500ml;\
};\
class _xx_ACE_salineIV\
{\
	name = "ACE_salineIV";\
	count = $1000ml;\
};

#define _micsMedical ($Tourniquet,$BodyBag,$PAK,$SurgicalKit)\
class _xx_ACE_tourniquet\
{\
	name = "ACE_tourniquet";\
	count = $Tourniquet;\
};\
class _xx_ACE_bodyBag\
{\
	name = "ACE_bodyBag";\
	count = $BodyBag;\
};\
class _xx_ACE_personalAidKit\
{\
	name = "ACE_personalAidKit";\
	count = $PAK;\
};\
class _xx_ACE_surgicalKit\
{\
	name = "ACE_surgicalKit";\
	count = $SurgicalKit;\
};\

#define _aceXFood ($Canteen,$Water,$MRE0,$MRE1,$MRE2,$MRE3,$MRE4,$MRE5)\
class _xx_ACE_Canteen\
{\
	name = "ACE_Canteen";\
	count = $Canteen;\
};\
class _xx_ACE_WaterBottle\
{\
	name = "ACE_WaterBottle";\
	count = $Water;\
};\
class _xx_ACE_MRE_BeefStew\
{\
	name = "ACE_MRE_BeefStew";\
	count = $MRE0;\
};\
class _xx_ACE_MRE_CreamChickenSoup\
{\
	name = "ACE_MRE_CreamChickenSoup";\
	count = $MRE1;\
};\
class _xx_ACE_MRE_CreamTomatoSoup\
{\
	name = "ACE_MRE_CreamTomatoSoup";\
	count = $MRE2;\
};\
class _xx_ACE_MRE_MeatballsPasta\
{\
	name = "ACE_MRE_MeatballsPasta";\
	count = $MRE3;\
};

#define _aceMics ($CableTie,$EntrenchingTool )\
class _xx_ACE_CableTie\
{\
	name = "ACE_CableTie";\
	count = $CableTie;\
};\
class _xx_ACE_EntrenchingTool\
{\
	name = "ACE_EntrenchingTool";\
	count = $EntrenchingTool;\
};