// BlueprintGeneratedClass BP_DungeonLamp_03.BP_DungeonLamp_03_C
// Size: 0x260 (Inherited: 0x220)
struct ABP_DungeonLamp_03_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UParticleSystemComponent* P_Fire_for_Tortches; // 0x228(0x08)
	struct UStaticMeshComponent* SM_Torch_On_01; // 0x230(0x08)
	struct UPointLightComponent* PointLight; // 0x238(0x08)
	bool Off; // 0x240(0x01)
	char pad_241[0x7]; // 0x241(0x07)
	struct UStaticMesh* Mesh_off; // 0x248(0x08)
	struct UStaticMesh* Mesh_On; // 0x250(0x08)
	struct UMaterialInterface* LightFunction; // 0x258(0x08)

	void UserConstructionScript(); // Function BP_DungeonLamp_03.BP_DungeonLamp_03_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ReceiveBeginPlay(); // Function BP_DungeonLamp_03.BP_DungeonLamp_03_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1395fe0
	void LightOn(); // Function BP_DungeonLamp_03.BP_DungeonLamp_03_C.LightOn // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_BP_DungeonLamp_03(int32_t EntryPoint); // Function BP_DungeonLamp_03.BP_DungeonLamp_03_C.ExecuteUbergraph_BP_DungeonLamp_03 // (Final|UbergraphFunction) // @ game+0x1395fe0
};

