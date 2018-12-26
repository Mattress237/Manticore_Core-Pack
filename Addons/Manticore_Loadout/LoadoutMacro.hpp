#define _StandardRifle (arg)\
	class _xx_rhs_weap_hk416d145 \
	{ \
		weapon = "rhs_weap_hk416d145"; \
		count = arg; \
	};

#define _StandardMag(argNormal,argTracer) \
	class _xx_rhs_mag_30Rnd_556x45_Mk318_Stanag \
	{ \
		magazine = "rhs_mag_30Rnd_556x45_Mk318_Stanag"; \
		count = argNormal; \
	}; \
	class _xx_rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red \
	{ \
		magazine = "rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red"; \
		count = argTracer; \
	}; 

#define _StandardATTub (arg) \
	class _xx_rhs_weap_M136 \
	{ \
		weapon = "rhs_weap_M136"; \
		count = 2; \
	};
