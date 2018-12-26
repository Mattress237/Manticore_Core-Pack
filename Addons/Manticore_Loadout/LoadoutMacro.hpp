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
