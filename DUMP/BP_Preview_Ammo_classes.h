// BlueprintGeneratedClass BP_Preview_Ammo.BP_Preview_Ammo_C
// Size: 0x2d0 (Inherited: 0x278)
struct ABP_Preview_Ammo_C : AEquipmentEntity {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x278(0x08)
	struct UStaticMeshComponent* Arrow9; // 0x280(0x08)
	struct UStaticMeshComponent* Arrow8; // 0x288(0x08)
	struct UStaticMeshComponent* Arrow7; // 0x290(0x08)
	struct UStaticMeshComponent* Arrow6; // 0x298(0x08)
	struct USceneComponent* Scene; // 0x2a0(0x08)
	struct UStaticMeshComponent* Arrow5; // 0x2a8(0x08)
	struct UStaticMeshComponent* Arrow4; // 0x2b0(0x08)
	struct UStaticMeshComponent* Arrow3; // 0x2b8(0x08)
	struct UStaticMeshComponent* Arrow2; // 0x2c0(0x08)
	struct UStaticMeshComponent* Arrow1; // 0x2c8(0x08)

	void OnEquip(); // Function BP_Preview_Ammo.BP_Preview_Ammo_C.OnEquip // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnUnEquip(); // Function BP_Preview_Ammo.BP_Preview_Ammo_C.OnUnEquip // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_BP_Preview_Ammo(int32_t EntryPoint); // Function BP_Preview_Ammo.BP_Preview_Ammo_C.ExecuteUbergraph_BP_Preview_Ammo // (Final|UbergraphFunction) // @ game+0x1395fe0
};

