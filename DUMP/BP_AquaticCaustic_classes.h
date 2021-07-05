// BlueprintGeneratedClass BP_AquaticCaustic.BP_AquaticCaustic_C
// Size: 0x298 (Inherited: 0x228)
struct ABP_AquaticCaustic_C : ADecalActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x228(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x230(0x08)
	struct UStaticMeshComponent* Plane; // 0x238(0x08)
	struct UArrowComponent* SunDirection; // 0x240(0x08)
	struct UMaterialInstanceDynamic* MaterialInstance; // 0x248(0x08)
	int32_t AnimationFrame; // 0x250(0x04)
	char pad_254[0x4]; // 0x254(0x04)
	struct ADirectionalLight* LightSource; // 0x258(0x08)
	struct TArray<struct UTexture2D*> AnimationFrames; // 0x260(0x10)
	float AnimationSpeed; // 0x270(0x04)
	char pad_274[0x4]; // 0x274(0x04)
	struct UMaterialInterface* DynamicMaterial; // 0x278(0x08)
	struct FVector2D UVScale; // 0x280(0x08)
	struct FVector2D UVMove; // 0x288(0x08)
	struct FTimerHandle Timer; // 0x290(0x08)

	void SetInteraction(struct UTexture* Texture); // Function BP_AquaticCaustic.BP_AquaticCaustic_C.SetInteraction // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void SetParameters(); // Function BP_AquaticCaustic.BP_AquaticCaustic_C.SetParameters // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void UserConstructionScript(); // Function BP_AquaticCaustic.BP_AquaticCaustic_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ReceiveTick(float DeltaSeconds); // Function BP_AquaticCaustic.BP_AquaticCaustic_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void ReceiveBeginPlay(); // Function BP_AquaticCaustic.BP_AquaticCaustic_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_BP_AquaticCaustic(int32_t EntryPoint); // Function BP_AquaticCaustic.BP_AquaticCaustic_C.ExecuteUbergraph_BP_AquaticCaustic // (Final|UbergraphFunction) // @ game+0x1395fe0
};

