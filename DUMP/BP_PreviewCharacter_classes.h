// BlueprintGeneratedClass BP_PreviewCharacter.BP_PreviewCharacter_C
// Size: 0x310 (Inherited: 0x220)
struct ABP_PreviewCharacter_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct URectLightComponent* RectLight4; // 0x228(0x08)
	struct UPointLightComponent* PointLight2; // 0x230(0x08)
	struct URectLightComponent* RectLight3; // 0x238(0x08)
	struct URectLightComponent* RectLight2; // 0x240(0x08)
	struct URectLightComponent* RectLight1; // 0x248(0x08)
	struct URectLightComponent* RectLight; // 0x250(0x08)
	struct UPointLightComponent* PointLight1; // 0x258(0x08)
	struct UPointLightComponent* PointLight; // 0x260(0x08)
	struct USpotLightComponent* SpotLight; // 0x268(0x08)
	struct USceneCaptureComponent2D* SceneCapture; // 0x270(0x08)
	struct USkeletalMeshComponent* Body; // 0x278(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x280(0x08)
	struct AActor* MainChar_Ref; // 0x288(0x08)
	struct UAnimSequence* CharBaseAnimation; // 0x290(0x08)
	struct UWBP_PreviewChar_C* UICharacterReference; // 0x298(0x08)
	bool FirstStart; // 0x2a0(0x01)
	char pad_2A1[0x7]; // 0x2a1(0x07)
	struct TMap<struct FName, struct AActor*> EquippedItems; // 0x2a8(0x50)
	struct AActor* EquippedActor; // 0x2f8(0x08)
	struct TArray<struct AActor*> EquippedActors; // 0x300(0x10)

	void AddToEquippedItem(struct FName Key, struct AActor* Value); // Function BP_PreviewCharacter.BP_PreviewCharacter_C.AddToEquippedItem // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void AddEquippedActor(struct AActor* Actor); // Function BP_PreviewCharacter.BP_PreviewCharacter_C.AddEquippedActor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void UserConstructionScript(); // Function BP_PreviewCharacter.BP_PreviewCharacter_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void RefreshPreview(); // Function BP_PreviewCharacter.BP_PreviewCharacter_C.RefreshPreview // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void SpawnPreviewActor(struct AActor* Class, struct FTransform SpawnTransform, struct AActor* Owner, struct FName SocketName, struct UAnimationAsset* NewAnimToPlay, struct USkeletalMesh* Mesh, bool bIsMesh, bool bIsRemove); // Function BP_PreviewCharacter.BP_PreviewCharacter_C.SpawnPreviewActor // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void MainCharacter_Reference(struct AActor* SelfReference); // Function BP_PreviewCharacter.BP_PreviewCharacter_C.MainCharacter_Reference // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void FirstRefresh(); // Function BP_PreviewCharacter.BP_PreviewCharacter_C.FirstRefresh // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_BP_PreviewCharacter(int32_t EntryPoint); // Function BP_PreviewCharacter.BP_PreviewCharacter_C.ExecuteUbergraph_BP_PreviewCharacter // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
};

