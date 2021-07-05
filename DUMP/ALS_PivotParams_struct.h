// UserDefinedStruct ALS_PivotParams.ALS_PivotParams
// Size: 0x14 (Inherited: 0x00)
struct FALS_PivotParams {
	float PivotDirection_2_D0B08A3841F9147BF17755A92FB9D963; // 0x00(0x04)
	enum class MovementDirection CompletedMovementDirection_5_E9CF2F76467FBF2447947489B0CCDD02; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	float CompletedStartTime_10_B9658B89488368F6D03F348EA43ACA05; // 0x08(0x04)
	enum class MovementDirection InterruptedMovementDirection_7_C9A29DEE4CF4408432239D89BCDBCC45; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float InterruptedStartTime_12_6E0218BD417EFD34E55C18AEF9C0D986; // 0x10(0x04)
};

