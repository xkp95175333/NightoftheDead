// BlueprintGeneratedClass BTS_CheckAggroValid.BTS_CheckAggroValid_C
// Size: 0xc8 (Inherited: 0x98)
struct UBTS_CheckAggroValid_C : UBTService_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x98(0x08)
	struct FBlackboardKeySelector AggroTargetKey; // 0xa0(0x28)

	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function BTS_CheckAggroValid.BTS_CheckAggroValid_C.ReceiveTickAI // (Event|Protected|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_BTS_CheckAggroValid(int32_t EntryPoint); // Function BTS_CheckAggroValid.BTS_CheckAggroValid_C.ExecuteUbergraph_BTS_CheckAggroValid // (Final|UbergraphFunction) // @ game+0x1395fe0
};

