// BlueprintGeneratedClass BTD_CheckSightIfIsRange.BTD_CheckSightIfIsRange_C
// Size: 0xd0 (Inherited: 0xa0)
struct UBTD_CheckSightIfIsRange_C : UBTDecorator_BlueprintBase {
	enum class EAttackType AttackType; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
	struct FBlackboardKeySelector TargetKey; // 0xa8(0x28)

	bool PerformConditionCheckAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTD_CheckSightIfIsRange.BTD_CheckSightIfIsRange_C.PerformConditionCheckAI // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
};

