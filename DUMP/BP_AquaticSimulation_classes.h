// BlueprintGeneratedClass BP_AquaticSimulation.BP_AquaticSimulation_C
// Size: 0x330 (Inherited: 0x220)
struct ABP_AquaticSimulation_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UBoxComponent* Volume; // 0x228(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x230(0x08)
	int32_t FrameIndex; // 0x238(0x04)
	float TimeAccumulator; // 0x23c(0x04)
	int32_t AreaSize; // 0x240(0x04)
	char pad_244[0x4]; // 0x244(0x04)
	struct UMaterialInstanceDynamic* SimulationInstance; // 0x248(0x08)
	struct UMaterialInstanceDynamic* SplatInstance; // 0x250(0x08)
	struct TArray<struct ABP_AquaticSurface_C*> AquaticSurfaces; // 0x258(0x10)
	struct TArray<struct ABP_AquaticCaustic_C*> AquaticCaustics; // 0x268(0x10)
	int32_t TextureResolution; // 0x278(0x04)
	struct FVector2D TargetPoint; // 0x27c(0x08)
	char pad_284[0x4]; // 0x284(0x04)
	struct TArray<struct FBS_AquaticInteraction> Interactions; // 0x288(0x10)
	int32_t RemoveInteraction; // 0x298(0x04)
	float TextureToWorld; // 0x29c(0x04)
	struct FVector2D HalfSize; // 0x2a0(0x08)
	int32_t InterpStepSize; // 0x2a8(0x04)
	float AreaSizeInv; // 0x2ac(0x04)
	struct FVector2D LocationShift; // 0x2b0(0x08)
	struct FVector2D LocationShiftPrev; // 0x2b8(0x08)
	float TextureResolutionInv; // 0x2c0(0x04)
	float InterpSpeed; // 0x2c4(0x04)
	float WorldToTexture; // 0x2c8(0x04)
	float UpdateRate; // 0x2cc(0x04)
	int32_t MaxInterations; // 0x2d0(0x04)
	float MaxTimeAccumulator; // 0x2d4(0x04)
	float AnimationRate; // 0x2d8(0x04)
	int32_t MaxCameraDistance; // 0x2dc(0x04)
	float WaveTravelSpeed; // 0x2e0(0x04)
	float WaveDamping; // 0x2e4(0x04)
	float WaveNormalScale; // 0x2e8(0x04)
	char pad_2EC[0x4]; // 0x2ec(0x04)
	struct TArray<struct UTextureRenderTarget2D*> RenderTargets; // 0x2f0(0x10)
	struct FVector2D SimulationFocus; // 0x300(0x08)
	float SimulationCameraRadiusSq; // 0x308(0x04)
	float SimulationCameraForward; // 0x30c(0x04)
	float SimulationCameraDistance; // 0x310(0x04)
	bool DrawDebug; // 0x314(0x01)
	char pad_315[0x3]; // 0x315(0x03)
	struct FIntVector PrevWorldOrigin; // 0x318(0x0c)
	bool DoInteractionUpdate; // 0x324(0x01)
	char pad_325[0x3]; // 0x325(0x03)
	float SurfaceHeight; // 0x328(0x04)
	float UpdateHeightOffset; // 0x32c(0x04)

	void OnWorldOriginChanged(struct FIntVector OldLocation, struct FIntVector NewLocation, bool Update); // Function BP_AquaticSimulation.BP_AquaticSimulation_C.OnWorldOriginChanged // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void SpawnSplash(struct FBS_AquaticInteraction Interaction, struct ABP_AquaticSurface_C* Surface, struct FVector NewLocation); // Function BP_AquaticSimulation.BP_AquaticSimulation_C.SpawnSplash // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void UpdateSimulationFocus(); // Function BP_AquaticSimulation.BP_AquaticSimulation_C.UpdateSimulationFocus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void DrawSplat(struct FVector2D ScreenSize, struct UCanvas* Canvas, float ForceSize, struct FVector Location, float Radius); // Function BP_AquaticSimulation.BP_AquaticSimulation_C.DrawSplat // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	bool IsLocal(); // Function BP_AquaticSimulation.BP_AquaticSimulation_C.IsLocal // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1395fe0
	struct UTextureRenderTarget2D* NewRenderTarget(); // Function BP_AquaticSimulation.BP_AquaticSimulation_C.NewRenderTarget // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void DebugDraw(); // Function BP_AquaticSimulation.BP_AquaticSimulation_C.DebugDraw // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void AddInteraction(struct FBS_AquaticInteractionData Interaction, struct FVector Location, float Duration, bool VisibilityTest); // Function BP_AquaticSimulation.BP_AquaticSimulation_C.AddInteraction // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void SetTargetPoint(struct FVector TargetLocation, float InterpSpeed, float MaxDistance); // Function BP_AquaticSimulation.BP_AquaticSimulation_C.SetTargetPoint // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void RemoveInteractionFinished(); // Function BP_AquaticSimulation.BP_AquaticSimulation_C.RemoveInteractionFinished // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void UpdateRenderPosition(); // Function BP_AquaticSimulation.BP_AquaticSimulation_C.UpdateRenderPosition // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void UpdateInteractionTime(int32_t Index, float DeltaTime, bool Draw); // Function BP_AquaticSimulation.BP_AquaticSimulation_C.UpdateInteractionTime // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void RemoveInteractionActor(struct AActor* Target); // Function BP_AquaticSimulation.BP_AquaticSimulation_C.RemoveInteractionActor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void AddInteractionActor(struct ABP_AquaticSurface_C* InteractionSurface, struct AActor* Target); // Function BP_AquaticSimulation.BP_AquaticSimulation_C.AddInteractionActor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void UpdateInteraction(struct UCanvas* Canvas, struct FVector2D ScreenSize, int32_t Interaction, float DeltaTime); // Function BP_AquaticSimulation.BP_AquaticSimulation_C.UpdateInteraction // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void GetRenderTarget(int32_t NumFramesOld, struct UTextureRenderTarget2D* HeightRT); // Function BP_AquaticSimulation.BP_AquaticSimulation_C.GetRenderTarget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void UserConstructionScript(); // Function BP_AquaticSimulation.BP_AquaticSimulation_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ReceiveBeginPlay(); // Function BP_AquaticSimulation.BP_AquaticSimulation_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1395fe0
	void ReceiveTick(float DeltaSeconds); // Function BP_AquaticSimulation.BP_AquaticSimulation_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void UpdateTransform(); // Function BP_AquaticSimulation.BP_AquaticSimulation_C.UpdateTransform // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_BP_AquaticSimulation(int32_t EntryPoint); // Function BP_AquaticSimulation.BP_AquaticSimulation_C.ExecuteUbergraph_BP_AquaticSimulation // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
};

