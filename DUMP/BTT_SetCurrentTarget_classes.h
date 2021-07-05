// BlueprintGeneratedClass BTT_SetCurrentTarget.BTT_SetCurrentTarget_C
// Size: 0xe0 (Inherited: 0xa8)
struct UBTT_SetCurrentTarget_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	struct FBlackboardKeySelector TargetKey; // 0xb0(0x28)
	struct FName CurrentTargetKeyName; // 0xd8(0x08)

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTT_SetCurrentTarget.BTT_SetCurrentTarget_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_BTT_SetCurrentTarget(int32_t EntryPoint); // Function BTT_SetCurrentTarget.BTT_SetCurrentTarget_C.ExecuteUbergraph_BTT_SetCurrentTarget // (Final|UbergraphFunction) // @ game+0x1395fe0
};

