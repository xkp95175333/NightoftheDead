// BlueprintGeneratedClass BTT_Attack.BTT_Attack_C
// Size: 0xe0 (Inherited: 0xd8)
struct UBTT_Attack_C : UBTTask_BlueprintAttackBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd8(0x08)

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTT_Attack.BTT_Attack_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1395fe0
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function BTT_Attack.BTT_Attack_C.ReceiveTickAI // (Event|Protected|BlueprintEvent) // @ game+0x1395fe0
	void OnFinishExecute(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTT_Attack.BTT_Attack_C.OnFinishExecute // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_BTT_Attack(int32_t EntryPoint); // Function BTT_Attack.BTT_Attack_C.ExecuteUbergraph_BTT_Attack // (Final|UbergraphFunction) // @ game+0x1395fe0
};

