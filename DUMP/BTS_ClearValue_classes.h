// BlueprintGeneratedClass BTS_ClearValue.BTS_ClearValue_C
// Size: 0xc8 (Inherited: 0x98)
struct UBTS_ClearValue_C : UBTService_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x98(0x08)
	struct FBlackboardKeySelector BlackboardKey; // 0xa0(0x28)

	void ReceiveActivationAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTS_ClearValue.BTS_ClearValue_C.ReceiveActivationAI // (Event|Protected|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_BTS_ClearValue(int32_t EntryPoint); // Function BTS_ClearValue.BTS_ClearValue_C.ExecuteUbergraph_BTS_ClearValue // (Final|UbergraphFunction) // @ game+0x1395fe0
};

