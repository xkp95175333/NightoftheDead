// BlueprintGeneratedClass BTT_AttackSuicide.BTT_AttackSuicide_C
// Size: 0xf0 (Inherited: 0xe0)
struct UBTT_AttackSuicide_C : UBTT_Attack_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe0(0x08)
	struct AActor* CorpseActorClass; // 0xe8(0x08)

	void OnFinishExecute(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTT_AttackSuicide.BTT_AttackSuicide_C.OnFinishExecute // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTT_AttackSuicide.BTT_AttackSuicide_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_BTT_AttackSuicide(int32_t EntryPoint); // Function BTT_AttackSuicide.BTT_AttackSuicide_C.ExecuteUbergraph_BTT_AttackSuicide // (Final|UbergraphFunction) // @ game+0x1395fe0
};

