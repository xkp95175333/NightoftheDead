// BlueprintGeneratedClass BTT_FollowWay.BTT_FollowWay_C
// Size: 0xe4 (Inherited: 0xd0)
struct UBTT_FollowWay_C : UBTT_FollowWayBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd0(0x08)
	struct AWayPoint* WayPoint; // 0xd8(0x08)
	float WaypointAcceptance; // 0xe0(0x04)

	void OnFail_3F3A0BC34E2C617DA4C51AB07295A6F7(enum class EPathFollowingResult MovementResult); // Function BTT_FollowWay.BTT_FollowWay_C.OnFail_3F3A0BC34E2C617DA4C51AB07295A6F7 // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnSuccess_3F3A0BC34E2C617DA4C51AB07295A6F7(enum class EPathFollowingResult MovementResult); // Function BTT_FollowWay.BTT_FollowWay_C.OnSuccess_3F3A0BC34E2C617DA4C51AB07295A6F7 // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTT_FollowWay.BTT_FollowWay_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1395fe0
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function BTT_FollowWay.BTT_FollowWay_C.ReceiveTickAI // (Event|Protected|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_BTT_FollowWay(int32_t EntryPoint); // Function BTT_FollowWay.BTT_FollowWay_C.ExecuteUbergraph_BTT_FollowWay // (Final|UbergraphFunction) // @ game+0x1395fe0
};

