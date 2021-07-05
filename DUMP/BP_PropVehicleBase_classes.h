// BlueprintGeneratedClass BP_PropVehicleBase.BP_PropVehicleBase_C
// Size: 0x609 (Inherited: 0x4f0)
struct ABP_PropVehicleBase_C : AStaticItemEntity {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4f0(0x08)
	struct UStaticMeshComponent* CarFrame; // 0x4f8(0x08)
	struct UStaticMeshComponent* FrontDoor_L; // 0x500(0x08)
	struct UStaticMeshComponent* Trunk; // 0x508(0x08)
	struct UStaticMeshComponent* Hood; // 0x510(0x08)
	struct UStaticMeshComponent* BackDoor_R; // 0x518(0x08)
	struct UStaticMeshComponent* FrontDoor_R; // 0x520(0x08)
	struct UStaticMeshComponent* BackDoor_L; // 0x528(0x08)
	bool NoDoor; // 0x530(0x01)
	bool Open_FrontLeft; // 0x531(0x01)
	bool Open_FrontRight; // 0x532(0x01)
	bool Open_BackLeft; // 0x533(0x01)
	bool Open_BackRight; // 0x534(0x01)
	char pad_535[0x3]; // 0x535(0x03)
	float OpenAmount_FrontLeft; // 0x538(0x04)
	float OpenAmount_FrontRight; // 0x53c(0x04)
	struct TArray<struct FTransform> WheelsLocation; // 0x540(0x10)
	bool FlatTyres; // 0x550(0x01)
	bool HaveWheels; // 0x551(0x01)
	char pad_552[0x2]; // 0x552(0x02)
	struct FLinearColor CarColor; // 0x554(0x10)
	bool CustomiseExteriorColor; // 0x564(0x01)
	char pad_565[0x3]; // 0x565(0x03)
	struct UMaterialInstanceDynamic* MID_Glass; // 0x568(0x08)
	struct UMaterialInstanceDynamic* MID_Exterior; // 0x570(0x08)
	float DirtAmount; // 0x578(0x04)
	float DirtContrast; // 0x57c(0x04)
	struct FLinearColor DirtColor; // 0x580(0x10)
	float RustIntensity; // 0x590(0x04)
	struct FRandomStream RandomStream; // 0x594(0x08)
	char pad_59C[0x4]; // 0x59c(0x04)
	struct UStaticMesh* WheelClass_Normal; // 0x5a0(0x08)
	struct UStaticMesh* WheelClass_Flat; // 0x5a8(0x08)
	float OpenAmount_BackLeft; // 0x5b0(0x04)
	float OpenAmount_BackRight; // 0x5b4(0x04)
	float MaxDoorAngle; // 0x5b8(0x04)
	bool RandomizeOpenAmount; // 0x5bc(0x01)
	bool CLICK-RefreshRandomValues; // 0x5bd(0x01)
	bool NoTrunk; // 0x5be(0x01)
	char pad_5BF[0x1]; // 0x5bf(0x01)
	float TrunkOpenAmount; // 0x5c0(0x04)
	bool NoGlass; // 0x5c4(0x01)
	char pad_5C5[0x3]; // 0x5c5(0x03)
	float RustContrast; // 0x5c8(0x04)
	bool UseDynamicLighting; // 0x5cc(0x01)
	char pad_5CD[0x3]; // 0x5cd(0x03)
	float GlassDirtAmount; // 0x5d0(0x04)
	char pad_5D4[0x4]; // 0x5d4(0x04)
	struct UMaterialInstanceConstant* DefaultExteriorMIC; // 0x5d8(0x08)
	struct UMaterialInstanceConstant* DefaultInteriorMIC; // 0x5e0(0x08)
	struct UMaterialInstanceConstant* DefaultGlassMIC; // 0x5e8(0x08)
	struct UMaterialInstanceConstant* DefaultAccMIC; // 0x5f0(0x08)
	struct TArray<struct FLinearColor> Pallete; // 0x5f8(0x10)
	bool bDoorDestroyed; // 0x608(0x01)

	void ShowAllDoors(); // Function BP_PropVehicleBase.BP_PropVehicleBase_C.ShowAllDoors // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnRep_bDoorDestroyed(); // Function BP_PropVehicleBase.BP_PropVehicleBase_C.OnRep_bDoorDestroyed // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	bool IsInteractableBP(); // Function BP_PropVehicleBase.BP_PropVehicleBase_C.IsInteractableBP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1395fe0
	bool CanCreateItems(); // Function BP_PropVehicleBase.BP_PropVehicleBase_C.CanCreateItems // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void DestroyAllDoors(); // Function BP_PropVehicleBase.BP_PropVehicleBase_C.DestroyAllDoors // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Random(); // Function BP_PropVehicleBase.BP_PropVehicleBase_C.Random // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void TryDestroyDoor(struct UStaticMeshComponent* InputObject); // Function BP_PropVehicleBase.BP_PropVehicleBase_C.TryDestroyDoor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ApplyAllMID(); // Function BP_PropVehicleBase.BP_PropVehicleBase_C.ApplyAllMID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void SetComponentMID(struct UMeshComponent* Component, bool OverrideExterior, bool OverrideGlass); // Function BP_PropVehicleBase.BP_PropVehicleBase_C.SetComponentMID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void SetMaterialToComponent(struct UPrimitiveComponent* Target, struct UMaterialInterface* Material); // Function BP_PropVehicleBase.BP_PropVehicleBase_C.SetMaterialToComponent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void SetNoGlass(); // Function BP_PropVehicleBase.BP_PropVehicleBase_C.SetNoGlass // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void HandleMaterials(); // Function BP_PropVehicleBase.BP_PropVehicleBase_C.HandleMaterials // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void GenerateDoor(); // Function BP_PropVehicleBase.BP_PropVehicleBase_C.GenerateDoor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void UserConstructionScript(); // Function BP_PropVehicleBase.BP_PropVehicleBase_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ReceiveTick(float DeltaSeconds); // Function BP_PropVehicleBase.BP_PropVehicleBase_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void OnInteractedBP(enum class EInteractionType Interaction); // Function BP_PropVehicleBase.BP_PropVehicleBase_C.OnInteractedBP // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void OnInitializeItemEntity(); // Function BP_PropVehicleBase.BP_PropVehicleBase_C.OnInitializeItemEntity // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void OnMakePartialInvisible(); // Function BP_PropVehicleBase.BP_PropVehicleBase_C.OnMakePartialInvisible // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void CheckOwningItem(); // Function BP_PropVehicleBase.BP_PropVehicleBase_C.CheckOwningItem // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnMakePartialVisible(); // Function BP_PropVehicleBase.BP_PropVehicleBase_C.OnMakePartialVisible // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_BP_PropVehicleBase(int32_t EntryPoint); // Function BP_PropVehicleBase.BP_PropVehicleBase_C.ExecuteUbergraph_BP_PropVehicleBase // (Final|UbergraphFunction) // @ game+0x1395fe0
};

