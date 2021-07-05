// BlueprintGeneratedClass BP_LFSky.BP_LFSky_C
// Size: 0x2b0 (Inherited: 0x220)
struct ABP_LFSky_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x228(0x08)
	struct TArray<struct AEmitter*> BackgroundClouds; // 0x230(0x10)
	struct UMaterialInstanceDynamic* CloudMat1; // 0x240(0x08)
	struct UMaterialInstanceDynamic* CloudMat2; // 0x248(0x08)
	struct TArray<struct UMaterialInstanceDynamic*> CloudMaterials; // 0x250(0x10)
	struct UCurveFloat* CloudCurve; // 0x260(0x08)
	struct AUltra_Dynamic_Sky_BP_C* UDS; // 0x268(0x08)
	struct UCurveFloat* AtmosphericCurve; // 0x270(0x08)
	struct AAtmosphericFog* AtmosphericFog; // 0x278(0x08)
	struct AExponentialHeightFog* VolumetricFog; // 0x280(0x08)
	struct UCurveFloat* VolumetricCurve; // 0x288(0x08)
	struct UCurveFloat* FogOpacityCurve; // 0x290(0x08)
	struct UCurveLinearColor* FogAlbedoCurve; // 0x298(0x08)
	struct APostProcessVolume* PostProcess; // 0x2a0(0x08)
	struct UCurveFloat* GICurve; // 0x2a8(0x08)

	void UpdateGI(); // Function BP_LFSky.BP_LFSky_C.UpdateGI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void UpdateFogAlbedo(); // Function BP_LFSky.BP_LFSky_C.UpdateFogAlbedo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void UpdateFogMaxOpacity(); // Function BP_LFSky.BP_LFSky_C.UpdateFogMaxOpacity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void UpdateCloudOpacity(); // Function BP_LFSky.BP_LFSky_C.UpdateCloudOpacity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void UpdateVolumetricFog(); // Function BP_LFSky.BP_LFSky_C.UpdateVolumetricFog // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void UpdateAtmosphericFog(); // Function BP_LFSky.BP_LFSky_C.UpdateAtmosphericFog // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Refresh(); // Function BP_LFSky.BP_LFSky_C.Refresh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Get Time Of Day(float TimeOfDay); // Function BP_LFSky.BP_LFSky_C.Get Time Of Day // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	void UserConstructionScript(); // Function BP_LFSky.BP_LFSky_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ReceiveBeginPlay(); // Function BP_LFSky.BP_LFSky_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1395fe0
	void ReceiveTick(float DeltaSeconds); // Function BP_LFSky.BP_LFSky_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_BP_LFSky(int32_t EntryPoint); // Function BP_LFSky.BP_LFSky_C.ExecuteUbergraph_BP_LFSky // (Final|UbergraphFunction) // @ game+0x1395fe0
};

