// BlueprintGeneratedClass BP_ElectricConnectionTool.BP_ElectricConnectionTool_C
// Size: 0x2c0 (Inherited: 0x238)
struct ABP_ElectricConnectionTool_C : AElectricConnectionToolActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	struct USplineComponent* Spline; // 0x240(0x08)
	struct USplineMeshComponent* SplineMesh1; // 0x248(0x08)
	struct UBillboardComponent* Billboard1; // 0x250(0x08)
	char pad_258[0x8]; // 0x258(0x08)
	struct FTransform End transform; // 0x260(0x30)
	struct FTransform Start transform; // 0x290(0x30)

	void UpdateStartEnd(); // Function BP_ElectricConnectionTool.BP_ElectricConnectionTool_C.UpdateStartEnd // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void UserConstructionScript(); // Function BP_ElectricConnectionTool.BP_ElectricConnectionTool_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ReceiveTick(float DeltaSeconds); // Function BP_ElectricConnectionTool.BP_ElectricConnectionTool_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void OnSetDirection(bool bPositive); // Function BP_ElectricConnectionTool.BP_ElectricConnectionTool_C.OnSetDirection // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_BP_ElectricConnectionTool(int32_t EntryPoint); // Function BP_ElectricConnectionTool.BP_ElectricConnectionTool_C.ExecuteUbergraph_BP_ElectricConnectionTool // (Final|UbergraphFunction) // @ game+0x1395fe0
};

