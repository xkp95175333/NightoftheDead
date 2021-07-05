// UserDefinedStruct S_MyControls.S_MyControls
// Size: 0x2d (Inherited: 0x00)
struct FS_MyControls {
	bool Saved?_29_CAE283A04BC9E4DA442146AE98B1FE22; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FS_MyAxisKeys> MyAxis_33_F3E2325F401F066598804F91DBBAA863; // 0x08(0x10)
	struct TArray<struct FS_MyActionKeys> MyAction_42_07A7E5D0448A6CFEBA5153986414FA07; // 0x18(0x10)
	float Sensitivity_39_1BB1C4D043985DC04ABE78A25E666B5E; // 0x28(0x04)
	bool MouseInvert?_41_9F1385564A2680729DF80BA036F607B7; // 0x2c(0x01)
};

