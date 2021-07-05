// BlueprintGeneratedClass BTT_SetRandomLocationAroundTarget.BTT_SetRandomLocationAroundTarget_C
// Size: 0x168 (Inherited: 0x160)
struct UBTT_SetRandomLocationAroundTarget_C : UBTTask_BlueprintSetRandomLocationAroundTargetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x160(0x08)

	bool GetRandomLocation(struct FVector RandomLocation); // Function BTT_SetRandomLocationAroundTarget.BTT_SetRandomLocationAroundTarget_C.GetRandomLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	void GetRadius(float Return Value); // Function BTT_SetRandomLocationAroundTarget.BTT_SetRandomLocationAroundTarget_C.GetRadius // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	void GetOrigin(struct FVector Return Value); // Function BTT_SetRandomLocationAroundTarget.BTT_SetRandomLocationAroundTarget_C.GetOrigin // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTT_SetRandomLocationAroundTarget.BTT_SetRandomLocationAroundTarget_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_BTT_SetRandomLocationAroundTarget(int32_t EntryPoint); // Function BTT_SetRandomLocationAroundTarget.BTT_SetRandomLocationAroundTarget_C.ExecuteUbergraph_BTT_SetRandomLocationAroundTarget // (Final|UbergraphFunction) // @ game+0x1395fe0
};

