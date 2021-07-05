// BlueprintGeneratedClass BTD_IsCharacterStatusRateLowerThan.BTD_IsCharacterStatusRateLowerThan_C
// Size: 0xa8 (Inherited: 0xa0)
struct UBTD_IsCharacterStatusRateLowerThan_C : UBTDecorator_BlueprintBase {
	enum class ECharacterStatus TargetStatus; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	float TargetRate; // 0xa4(0x04)

	bool PerformConditionCheckAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTD_IsCharacterStatusRateLowerThan.BTD_IsCharacterStatusRateLowerThan_C.PerformConditionCheckAI // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
};

