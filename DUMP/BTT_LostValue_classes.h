// BlueprintGeneratedClass BTT_LostValue.BTT_LostValue_C
// Size: 0xd8 (Inherited: 0xa8)
struct UBTT_LostValue_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	struct FBlackboardKeySelector Value; // 0xb0(0x28)

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTT_LostValue.BTT_LostValue_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_BTT_LostValue(int32_t EntryPoint); // Function BTT_LostValue.BTT_LostValue_C.ExecuteUbergraph_BTT_LostValue // (Final|UbergraphFunction) // @ game+0x1395fe0
};

