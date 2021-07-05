// BlueprintGeneratedClass BTT_InvalidateWayPoint.BTT_InvalidateWayPoint_C
// Size: 0xd8 (Inherited: 0xa8)
struct UBTT_InvalidateWayPoint_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	struct FBlackboardKeySelector InvalidateDistance; // 0xb0(0x28)

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTT_InvalidateWayPoint.BTT_InvalidateWayPoint_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_BTT_InvalidateWayPoint(int32_t EntryPoint); // Function BTT_InvalidateWayPoint.BTT_InvalidateWayPoint_C.ExecuteUbergraph_BTT_InvalidateWayPoint // (Final|UbergraphFunction) // @ game+0x1395fe0
};

