// BlueprintGeneratedClass BP_AquaticSurface.BP_AquaticSurface_C
// Size: 0x3c8 (Inherited: 0x220)
struct ABP_AquaticSurface_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UBoxComponent* InteractionView; // 0x228(0x08)
	struct UAudioComponent* AudioUnderwater; // 0x230(0x08)
	struct UStaticMeshComponent* PlaneTopDown; // 0x238(0x08)
	struct UPlanarReflectionComponent* PlanarReflection; // 0x240(0x08)
	struct UStaticMeshComponent* PlaneUnderWater; // 0x248(0x08)
	struct UStaticMeshComponent* PlaneOverWater; // 0x250(0x08)
	struct UBoxComponent* PostProcessShape; // 0x258(0x08)
	struct UBoxComponent* ReflectionUnder; // 0x260(0x08)
	struct UBoxComponent* ReflectionOver; // 0x268(0x08)
	struct UBillboardComponent* ReflectionBillboad; // 0x270(0x08)
	struct USceneComponent* Root; // 0x278(0x08)
	struct UStaticMeshComponent* PostProcessMesh; // 0x280(0x08)
	struct UPostProcessComponent* PostProcess; // 0x288(0x08)
	struct UMaterialInstance* OverWaterMaterial; // 0x290(0x08)
	struct UMaterialInstance* UnderWaterMaterial; // 0x298(0x08)
	struct UMaterialInstance* VolumeMaterial; // 0x2a0(0x08)
	struct UMaterialInstance* TopDownMaterial; // 0x2a8(0x08)
	struct FVector VolumeBoxExtend; // 0x2b0(0x0c)
	char pad_2BC[0x4]; // 0x2bc(0x04)
	struct UMaterialInstanceDynamic* OverWaterMaterialInstance; // 0x2c0(0x08)
	struct UMaterialInstanceDynamic* UnderWaterMaterialInstance; // 0x2c8(0x08)
	struct USceneCaptureComponentCube* ReflectionCache; // 0x2d0(0x08)
	struct ABP_AquaticRefletion_C* ReflectionExternal; // 0x2d8(0x08)
	struct UTexture* StaticReflectionCubemap; // 0x2e0(0x08)
	struct TArray<struct AActor*> HiddenInReflection; // 0x2e8(0x10)
	float ReflectionCaptureDelay; // 0x2f8(0x04)
	struct FVector ReflectionLocation; // 0x2fc(0x0c)
	struct FVector ReflectionBoxOverExtend; // 0x308(0x0c)
	struct FVector ReflectionBoxOverLocation; // 0x314(0x0c)
	struct FVector ReflectionBoxUnderExtend; // 0x320(0x0c)
	struct FVector ReflectionBoxUnderLocation; // 0x32c(0x0c)
	struct FVector VolumeBoxLocation; // 0x338(0x0c)
	float VolumeFogDensity; // 0x344(0x04)
	float VolumeFogBase; // 0x348(0x04)
	char pad_34C[0x4]; // 0x34c(0x04)
	struct UMaterialInstanceDynamic* VolumeMaterialInstance; // 0x350(0x08)
	float BuoyancyAngularDamping; // 0x358(0x04)
	float BuoyancyLinearDamping; // 0x35c(0x04)
	struct ABP_AquaticSimulation_C* AquaticSimulation; // 0x360(0x08)
	bool ShowVolumeMesh; // 0x368(0x01)
	bool UseReflectionPlane; // 0x369(0x01)
	char pad_36A[0x6]; // 0x36a(0x06)
	struct UPlanarReflectionComponent* ReflectionPlane; // 0x370(0x08)
	struct UMaterialInstanceDynamic* TopDownMaterialInstance; // 0x378(0x08)
	struct TArray<struct FBS_AquaticSplash> SplashEffects; // 0x380(0x10)
	struct FVector AudioExtend; // 0x390(0x0c)
	float CameraUpdateFrequency; // 0x39c(0x04)
	struct TArray<struct AActor*> InteractionsInView; // 0x3a0(0x10)
	struct TArray<struct AActor*> InteractionsOnSurface; // 0x3b0(0x10)
	float ReflectionCapturePeriod; // 0x3c0(0x04)
	float ReflectionCaptureCurrentSecond; // 0x3c4(0x04)

	void UpdateAttackCollision(); // Function BP_AquaticSurface.BP_AquaticSurface_C.UpdateAttackCollision // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void UpdateCubemapParameters(); // Function BP_AquaticSurface.BP_AquaticSurface_C.UpdateCubemapParameters // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OverlapCamera(); // Function BP_AquaticSurface.BP_AquaticSurface_C.OverlapCamera // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void UpdateAudioVolume(); // Function BP_AquaticSurface.BP_AquaticSurface_C.UpdateAudioVolume // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void PlaySplashEffectByIndex(int32_t Index, struct FVector SplashLocation, float SplashScale, float SplashVelocity); // Function BP_AquaticSurface.BP_AquaticSurface_C.PlaySplashEffectByIndex // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void UpdateInteractionComponent(struct FVector2D Location, float InteractionRadius); // Function BP_AquaticSurface.BP_AquaticSurface_C.UpdateInteractionComponent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Reconstruct(); // Function BP_AquaticSurface.BP_AquaticSurface_C.Reconstruct // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void GetHeight(float Height); // Function BP_AquaticSurface.BP_AquaticSurface_C.GetHeight // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnEndOverlapInteraction(struct AActor* OtherAtor, struct TArray<struct AActor*> List); // Function BP_AquaticSurface.BP_AquaticSurface_C.OnEndOverlapInteraction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnBeginOverlapInteraction(struct AActor* OtherActor, struct TArray<struct AActor*> List); // Function BP_AquaticSurface.BP_AquaticSurface_C.OnBeginOverlapInteraction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnEndOverlapBuoyancy(struct AActor* OtherAtor); // Function BP_AquaticSurface.BP_AquaticSurface_C.OnEndOverlapBuoyancy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void SetInteraction(struct UTexture* Value); // Function BP_AquaticSurface.BP_AquaticSurface_C.SetInteraction // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnBeginOverlapBuoyancy(struct AActor* OtherActor); // Function BP_AquaticSurface.BP_AquaticSurface_C.OnBeginOverlapBuoyancy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void BoxReflection(struct UBoxComponent* BoxShape, struct UMaterialInstanceDynamic* UseMaterial, struct FVector BoxExtent, struct FVector BoxLocation, bool Over); // Function BP_AquaticSurface.BP_AquaticSurface_C.BoxReflection // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void InitMaterials(); // Function BP_AquaticSurface.BP_AquaticSurface_C.InitMaterials // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void UpdatePostProcessShape(); // Function BP_AquaticSurface.BP_AquaticSurface_C.UpdatePostProcessShape // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void UpdateReflectionShape(); // Function BP_AquaticSurface.BP_AquaticSurface_C.UpdateReflectionShape // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void UpdateVolume(); // Function BP_AquaticSurface.BP_AquaticSurface_C.UpdateVolume // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void UserConstructionScript(); // Function BP_AquaticSurface.BP_AquaticSurface_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ReceiveBeginPlay(); // Function BP_AquaticSurface.BP_AquaticSurface_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1395fe0
	void CaptureEvent(); // Function BP_AquaticSurface.BP_AquaticSurface_C.CaptureEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__PostProcessShape_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_AquaticSurface.BP_AquaticSurface_C.BndEvt__PostProcessShape_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__PostProcessShape_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_AquaticSurface.BP_AquaticSurface_C.BndEvt__PostProcessShape_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__InteractionShape_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_AquaticSurface.BP_AquaticSurface_C.BndEvt__InteractionShape_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__InteractionShape_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_AquaticSurface.BP_AquaticSurface_C.BndEvt__InteractionShape_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void UpdateCameraEvent(); // Function BP_AquaticSurface.BP_AquaticSurface_C.UpdateCameraEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnWorldOriginChanged(struct FIntVector Old Origin, struct FIntVector New Origin); // Function BP_AquaticSurface.BP_AquaticSurface_C.OnWorldOriginChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__PlaneOverWater_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_AquaticSurface.BP_AquaticSurface_C.BndEvt__PlaneOverWater_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__PlaneOverWater_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_AquaticSurface.BP_AquaticSurface_C.BndEvt__PlaneOverWater_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void ReceiveTick(float DeltaSeconds); // Function BP_AquaticSurface.BP_AquaticSurface_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_BP_AquaticSurface(int32_t EntryPoint); // Function BP_AquaticSurface.BP_AquaticSurface_C.ExecuteUbergraph_BP_AquaticSurface // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
};

