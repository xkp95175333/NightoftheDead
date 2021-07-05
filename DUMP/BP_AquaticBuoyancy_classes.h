// BlueprintGeneratedClass BP_AquaticBuoyancy.BP_AquaticBuoyancy_C
// Size: 0x104 (Inherited: 0xb0)
struct UBP_AquaticBuoyancy_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	struct UPrimitiveComponent* CachedMesh; // 0xb8(0x08)
	struct ABP_AquaticSurface_C* InWater; // 0xc0(0x08)
	enum class BuoyancyShape Shape; // 0xc8(0x01)
	char pad_C9[0x3]; // 0xc9(0x03)
	float ShapeRadius; // 0xcc(0x04)
	float LinearDampingScale; // 0xd0(0x04)
	float AngularDampingScale; // 0xd4(0x04)
	struct FVector CenterOfMass; // 0xd8(0x0c)
	float ForceScale; // 0xe4(0x04)
	float FinalForce; // 0xe8(0x04)
	float AngularDampingCached; // 0xec(0x04)
	float LinearDampingCached; // 0xf0(0x04)
	bool PrevOrigin; // 0xf4(0x01)
	char pad_F5[0x3]; // 0xf5(0x03)
	struct FIntVector PrevWorldOriginLocation; // 0xf8(0x0c)

	void GetSurfceDistance(struct FVector Location, float Distance); // Function BP_AquaticBuoyancy.BP_AquaticBuoyancy_C.GetSurfceDistance // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	void ValidateMesh(); // Function BP_AquaticBuoyancy.BP_AquaticBuoyancy_C.ValidateMesh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void SetAquaticVolume(struct ABP_AquaticSurface_C* AquaticSurface); // Function BP_AquaticBuoyancy.BP_AquaticBuoyancy_C.SetAquaticVolume // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void SetTickMode(bool InWater); // Function BP_AquaticBuoyancy.BP_AquaticBuoyancy_C.SetTickMode // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void UpdateInFluid(float DeltaTime); // Function BP_AquaticBuoyancy.BP_AquaticBuoyancy_C.UpdateInFluid // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ReceiveBeginPlay(); // Function BP_AquaticBuoyancy.BP_AquaticBuoyancy_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void ReceiveTick(float DeltaSeconds); // Function BP_AquaticBuoyancy.BP_AquaticBuoyancy_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_BP_AquaticBuoyancy(int32_t EntryPoint); // Function BP_AquaticBuoyancy.BP_AquaticBuoyancy_C.ExecuteUbergraph_BP_AquaticBuoyancy // (Final|UbergraphFunction) // @ game+0x1395fe0
};

