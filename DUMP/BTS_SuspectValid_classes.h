// BlueprintGeneratedClass BTS_SuspectValid.BTS_SuspectValid_C
// Size: 0xc8 (Inherited: 0x98)
struct UBTS_SuspectValid_C : UBTService_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x98(0x08)
	struct FBlackboardKeySelector SuspectKey; // 0xa0(0x28)

	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function BTS_SuspectValid.BTS_SuspectValid_C.ReceiveTickAI // (Event|Protected|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_BTS_SuspectValid(int32_t EntryPoint); // Function BTS_SuspectValid.BTS_SuspectValid_C.ExecuteUbergraph_BTS_SuspectValid // (Final|UbergraphFunction) // @ game+0x1395fe0
};

