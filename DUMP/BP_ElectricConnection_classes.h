// BlueprintGeneratedClass BP_ElectricConnection.BP_ElectricConnection_C
// Size: 0x280 (Inherited: 0x260)
struct ABP_ElectricConnection_C : AElectricConnectionActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct USplineComponent* Spline; // 0x268(0x08)
	struct USplineMeshComponent* SplineMesh; // 0x270(0x08)
	struct UBillboardComponent* Billboard; // 0x278(0x08)

	void UpdateStartEnd(); // Function BP_ElectricConnection.BP_ElectricConnection_C.UpdateStartEnd // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ReceiveTick(float DeltaSeconds); // Function BP_ElectricConnection.BP_ElectricConnection_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void OnConnect(); // Function BP_ElectricConnection.BP_ElectricConnection_C.OnConnect // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void OnSetDirection(bool bPositive); // Function BP_ElectricConnection.BP_ElectricConnection_C.OnSetDirection // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_BP_ElectricConnection(int32_t EntryPoint); // Function BP_ElectricConnection.BP_ElectricConnection_C.ExecuteUbergraph_BP_ElectricConnection // (Final|UbergraphFunction) // @ game+0x1395fe0
};

