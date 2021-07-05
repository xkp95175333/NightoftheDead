// BlueprintGeneratedClass BTT_SummonZombie.BTT_SummonZombie_C
// Size: 0xe0 (Inherited: 0xa8)
struct UBTT_SummonZombie_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	struct FBlackboardKeySelector SuspectKey; // 0xb0(0x28)
	float CalculatedPlayRate; // 0xd8(0x04)
	float CalculatedSummonDuration; // 0xdc(0x04)

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTT_SummonZombie.BTT_SummonZombie_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1395fe0
	void ReceiveAbortAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTT_SummonZombie.BTT_SummonZombie_C.ReceiveAbortAI // (Event|Protected|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_BTT_SummonZombie(int32_t EntryPoint); // Function BTT_SummonZombie.BTT_SummonZombie_C.ExecuteUbergraph_BTT_SummonZombie // (Final|UbergraphFunction) // @ game+0x1395fe0
};

