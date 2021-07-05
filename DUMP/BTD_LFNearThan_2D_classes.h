// BlueprintGeneratedClass BTD_LFNearThan_2D.BTD_LFNearThan_2D_C
// Size: 0xfc (Inherited: 0xa0)
struct UBTD_LFNearThan_2D_C : UBTDecorator_BlueprintBase {
	struct FBlackboardKeySelector To; // 0xa0(0x28)
	struct FBlackboardKeySelector Distance; // 0xc8(0x28)
	float Offset; // 0xf0(0x04)
	bool UseDistanceMulti; // 0xf4(0x01)
	char pad_F5[0x3]; // 0xf5(0x03)
	float DistanceMulti; // 0xf8(0x04)

	bool PerformConditionCheckAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTD_LFNearThan_2D.BTD_LFNearThan_2D_C.PerformConditionCheckAI // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
};

