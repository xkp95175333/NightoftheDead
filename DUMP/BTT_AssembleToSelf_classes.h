// BlueprintGeneratedClass BTT_AssembleToSelf.BTT_AssembleToSelf_C
// Size: 0xb8 (Inherited: 0xa8)
struct UBTT_AssembleToSelf_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	float Range; // 0xb0(0x04)
	float Percent; // 0xb4(0x04)

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTT_AssembleToSelf.BTT_AssembleToSelf_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_BTT_AssembleToSelf(int32_t EntryPoint); // Function BTT_AssembleToSelf.BTT_AssembleToSelf_C.ExecuteUbergraph_BTT_AssembleToSelf // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
};

