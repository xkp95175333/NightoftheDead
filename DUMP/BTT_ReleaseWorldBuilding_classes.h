// BlueprintGeneratedClass BTT_ReleaseWorldBuilding.BTT_ReleaseWorldBuilding_C
// Size: 0xd8 (Inherited: 0xa8)
struct UBTT_ReleaseWorldBuilding_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	struct FBlackboardKeySelector BuildingTarget; // 0xb0(0x28)

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTT_ReleaseWorldBuilding.BTT_ReleaseWorldBuilding_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_BTT_ReleaseWorldBuilding(int32_t EntryPoint); // Function BTT_ReleaseWorldBuilding.BTT_ReleaseWorldBuilding_C.ExecuteUbergraph_BTT_ReleaseWorldBuilding // (Final|UbergraphFunction) // @ game+0x1395fe0
};

