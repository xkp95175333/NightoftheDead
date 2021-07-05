// BlueprintGeneratedClass BTT_FollowSimpleWay.BTT_FollowSimpleWay_C
// Size: 0xe0 (Inherited: 0xd0)
struct UBTT_FollowSimpleWay_C : UBTT_FollowWayBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd0(0x08)
	bool Finish; // 0xd8(0x01)
	char pad_D9[0x3]; // 0xd9(0x03)
	float SpeedMulti; // 0xdc(0x04)

	void GetEstimatedSecond(struct AActor* Pawn, struct FVector Goal, float Second); // Function BTT_FollowSimpleWay.BTT_FollowSimpleWay_C.GetEstimatedSecond // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTT_FollowSimpleWay.BTT_FollowSimpleWay_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1395fe0
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function BTT_FollowSimpleWay.BTT_FollowSimpleWay_C.ReceiveTickAI // (Event|Protected|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_BTT_FollowSimpleWay(int32_t EntryPoint); // Function BTT_FollowSimpleWay.BTT_FollowSimpleWay_C.ExecuteUbergraph_BTT_FollowSimpleWay // (Final|UbergraphFunction) // @ game+0x1395fe0
};

