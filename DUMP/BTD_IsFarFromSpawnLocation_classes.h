// BlueprintGeneratedClass BTD_IsFarFromSpawnLocation.BTD_IsFarFromSpawnLocation_C
// Size: 0xd4 (Inherited: 0xa0)
struct UBTD_IsFarFromSpawnLocation_C : UBTDecorator_BlueprintBase {
	float Distance; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
	struct FBlackboardKeySelector InSide; // 0xa8(0x28)
	float InsideDistance; // 0xd0(0x04)

	bool PerformConditionCheckAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTD_IsFarFromSpawnLocation.BTD_IsFarFromSpawnLocation_C.PerformConditionCheckAI // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
};

