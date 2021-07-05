// BlueprintGeneratedClass BTT_HarpoonZombie_Pull.BTT_HarpoonZombie_Pull_C
// Size: 0xe4 (Inherited: 0xa8)
struct UBTT_HarpoonZombie_Pull_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	struct FBlackboardKeySelector TargetKey; // 0xb0(0x28)
	bool bIsPullStarted; // 0xd8(0x01)
	bool bIsPullEnded; // 0xd9(0x01)
	bool bIsAttackStarted; // 0xda(0x01)
	char pad_DB[0x1]; // 0xdb(0x01)
	float Timeout; // 0xdc(0x04)
	float ElapsedTime; // 0xe0(0x04)

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTT_HarpoonZombie_Pull.BTT_HarpoonZombie_Pull_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1395fe0
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function BTT_HarpoonZombie_Pull.BTT_HarpoonZombie_Pull_C.ReceiveTickAI // (Event|Protected|BlueprintEvent) // @ game+0x1395fe0
	void ReceiveAbortAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTT_HarpoonZombie_Pull.BTT_HarpoonZombie_Pull_C.ReceiveAbortAI // (Event|Protected|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_BTT_HarpoonZombie_Pull(int32_t EntryPoint); // Function BTT_HarpoonZombie_Pull.BTT_HarpoonZombie_Pull_C.ExecuteUbergraph_BTT_HarpoonZombie_Pull // (Final|UbergraphFunction) // @ game+0x1395fe0
};

