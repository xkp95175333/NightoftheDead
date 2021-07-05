// BlueprintGeneratedClass BP_ElectricSocket.BP_ElectricSocket_C
// Size: 0x270 (Inherited: 0x238)
struct ABP_ElectricSocket_C : AElectricSocketActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	struct UStaticMeshComponent* Cube; // 0x240(0x08)
	struct USceneComponent* Scene; // 0x248(0x08)
	struct UMaterialInterface* InputMaterial; // 0x250(0x08)
	struct UMaterialInterface* OutputMaterial; // 0x258(0x08)
	struct UMaterialInterface* InputMaterial_Focused; // 0x260(0x08)
	struct UMaterialInterface* OutputMaterial_Focused; // 0x268(0x08)

	void OnSetSocketDirection(enum class EElectricSocketDirection InDirection); // Function BP_ElectricSocket.BP_ElectricSocket_C.OnSetSocketDirection // (Event|Protected|BlueprintEvent) // @ game+0x1395fe0
	void OnFocuedImpl(); // Function BP_ElectricSocket.BP_ElectricSocket_C.OnFocuedImpl // (Event|Protected|BlueprintEvent) // @ game+0x1395fe0
	void OnFocusOutImpl(); // Function BP_ElectricSocket.BP_ElectricSocket_C.OnFocusOutImpl // (Event|Protected|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_BP_ElectricSocket(int32_t EntryPoint); // Function BP_ElectricSocket.BP_ElectricSocket_C.ExecuteUbergraph_BP_ElectricSocket // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
};

