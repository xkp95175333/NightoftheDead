// BlueprintGeneratedClass LFCharacter_BP.LFCharacter_BP_C
// Size: 0xea8 (Inherited: 0xdf0)
struct ALFCharacter_BP_C : ALFCharacterPlayer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xdf0(0x08)
	struct UStaticMeshComponent* Knife_FPP; // 0xdf8(0x08)
	struct UWidgetComponent* NameWidget; // 0xe00(0x08)
	struct UAudioComponent* Audio_Indoor; // 0xe08(0x08)
	struct USceneCaptureComponent2D* SaveLoadThumbnailCapture; // 0xe10(0x08)
	struct UStaticMeshComponent* Knife; // 0xe18(0x08)
	struct UBP_TraceToObjects_C* BP_TraceToObjects; // 0xe20(0x08)
	struct UBP_NewtonianManager_C* BP_NewtonianManager; // 0xe28(0x08)
	struct UBP_CharacterPreview_Component_C* BP_CharacterPreview_Component; // 0xe30(0x08)
	struct UAIPerceptionStimuliSourceComponent* AIPerceptionStimuliSource; // 0xe38(0x08)
	float _____0_Dry_41E6EFFB4FC744330B3BE19FAD33478D; // 0xe40(0x04)
	enum class ETimelineDirection _____0__Direction_41E6EFFB4FC744330B3BE19FAD33478D; // 0xe44(0x01)
	char pad_E45[0x3]; // 0xe45(0x03)
	struct UTimelineComponent*  ?? _1; // 0xe48(0x08)
	struct FVector SavedVelocity; // 0xe50(0x0c)
	struct FRotator SavedRotation; // 0xe5c(0x0c)
	struct FVector CameraLocation; // 0xe68(0x0c)
	bool Dead; // 0xe74(0x01)
	char pad_E75[0x3]; // 0xe75(0x03)
	struct FName EquipmentSocket; // 0xe78(0x08)
	float CameraThreshold; // 0xe80(0x04)
	char pad_E84[0x4]; // 0xe84(0x04)
	struct ABP_LobbyPreviewActor_C* ClientPreviewActor; // 0xe88(0x08)
	struct AActor* PreviewClass; // 0xe90(0x08)
	float NameVisibleDistance; // 0xe98(0x04)
	float NameUpdateTime; // 0xe9c(0x04)
	float CurrentNameUpdate; // 0xea0(0x04)
	float NameVisibleOtherTeamDistance; // 0xea4(0x04)

	void MSG_GetConnectedPlayers(struct TArray<struct AController*> Players); // Function LFCharacter_BP.LFCharacter_BP_C.MSG_GetConnectedPlayers // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void MSG_GetPlayerID(int32_t PlayerId); // Function LFCharacter_BP.LFCharacter_BP_C.MSG_GetPlayerID // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void MSG_RequestPrivateMessage(enum class E_PrivateMessage Request, int32_t ToPlayerID, struct FText UserName, struct FText Message, bool Online?); // Function LFCharacter_BP.LFCharacter_BP_C.MSG_RequestPrivateMessage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void MSG_GetPlayerIDFromUsername(struct FText UserName, int32_t PlayerId); // Function LFCharacter_BP.LFCharacter_BP_C.MSG_GetPlayerIDFromUsername // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void MSG_GetUsername(bool Success?, struct FText UserName); // Function LFCharacter_BP.LFCharacter_BP_C.MSG_GetUsername // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void MSG_GetTeamID(int32_t TeamId); // Function LFCharacter_BP.LFCharacter_BP_C.MSG_GetTeamID // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void IsPageOpened(int32_t PageNum, bool bIsOpened); // Function LFCharacter_BP.LFCharacter_BP_C.IsPageOpened // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1395fe0
	void FindPlayerName(struct APlayerState* PlayerState); // Function LFCharacter_BP.LFCharacter_BP_C.FindPlayerName // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	bool CanToggleJournal(); // Function LFCharacter_BP.LFCharacter_BP_C.CanToggleJournal // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1395fe0
	bool IsJournalOpen(); // Function LFCharacter_BP.LFCharacter_BP_C.IsJournalOpen // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1395fe0
	bool IsMapOpen(); // Function LFCharacter_BP.LFCharacter_BP_C.IsMapOpen // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1395fe0
	void ComponentsToSave(struct TArray<struct UActorComponent*> Components); // Function LFCharacter_BP.LFCharacter_BP_C.ComponentsToSave // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void UserConstructionScript(); // Function LFCharacter_BP.LFCharacter_BP_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void  ??임라인_0__Fini(); // Function LFCharacter_BP.LFCharacter_BP_C. ??임라인_0__Fini // (BlueprintEvent) // @ game+0x1395fe0
	void  ??임라인_0__Up(); // Function LFCharacter_BP.LFCharacter_BP_C. ??임라인_0__Up // (BlueprintEvent) // @ game+0x1395fe0
	void OnLoaded_505069004BF187C823CC5CB3BFB7077A(struct UObject* Loaded); // Function LFCharacter_BP.LFCharacter_BP_C.OnLoaded_505069004BF187C823CC5CB3BFB7077A // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void MSG_NewMessage(bool Received?, enum class E_ChatCategory MessageCategory, int32_t PlayerId, int32_t ToPlayerID, struct FText UserName, struct FText Message, enum class E_Prefix Prefix); // Function LFCharacter_BP.LFCharacter_BP_C.MSG_NewMessage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void MSG_SetPlayerID(int32_t PlayerId); // Function LFCharacter_BP.LFCharacter_BP_C.MSG_SetPlayerID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void MSG_SetTeamID(int32_t TeamId); // Function LFCharacter_BP.LFCharacter_BP_C.MSG_SetTeamID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void MSG_PlayEmote(enum class E_Emote EmoteToPlay); // Function LFCharacter_BP.LFCharacter_BP_C.MSG_PlayEmote // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ReceiveBeginPlay(); // Function LFCharacter_BP.LFCharacter_BP_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1395fe0
	void ReceiveTick(float DeltaSeconds); // Function LFCharacter_BP.LFCharacter_BP_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void ActorLoaded(); // Function LFCharacter_BP.LFCharacter_BP_C.ActorLoaded // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ActorPreSave(); // Function LFCharacter_BP.LFCharacter_BP_C.ActorPreSave // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void RefreshInventoryPreview(); // Function LFCharacter_BP.LFCharacter_BP_C.RefreshInventoryPreview // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void OnEquipPreview(enum class EEquipmentSlot EquipmentSlot, struct USkeletalMesh* SkeletalMesh, struct AEquipmentEntity* EquipmentEntity); // Function LFCharacter_BP.LFCharacter_BP_C.OnEquipPreview // (Event|Protected|BlueprintEvent) // @ game+0x1395fe0
	void OnUnequipPreview(enum class EEquipmentSlot EquipmentSlot, struct USkeletalMesh* FallbackMesh); // Function LFCharacter_BP.LFCharacter_BP_C.OnUnequipPreview // (Event|Protected|BlueprintEvent) // @ game+0x1395fe0
	void OnDie(); // Function LFCharacter_BP.LFCharacter_BP_C.OnDie // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void ToggleMap(); // Function LFCharacter_BP.LFCharacter_BP_C.ToggleMap // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void CloseMap(); // Function LFCharacter_BP.LFCharacter_BP_C.CloseMap // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void HitEffects(struct FHitResult HitInfo, struct FVector Location); // Function LFCharacter_BP.LFCharacter_BP_C.HitEffects // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ReceivePointDamage(float Damage, struct UDamageType* DamageType, struct FVector HitLocation, struct FVector HitNormal, struct UPrimitiveComponent* HitComponent, struct FName BoneName, struct FVector ShotFromDirection, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FHitResult HitInfo); // Function LFCharacter_BP.LFCharacter_BP_C.ReceivePointDamage // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1395fe0
	void ToggleJournal(int32_t PageToOpen); // Function LFCharacter_BP.LFCharacter_BP_C.ToggleJournal // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void CloseJournal(); // Function LFCharacter_BP.LFCharacter_BP_C.CloseJournal // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void OpenMap(); // Function LFCharacter_BP.LFCharacter_BP_C.OpenMap // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function LFCharacter_BP.LFCharacter_BP_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function LFCharacter_BP.LFCharacter_BP_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void OnIndoor(); // Function LFCharacter_BP.LFCharacter_BP_C.OnIndoor // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnOutdoor(); // Function LFCharacter_BP.LFCharacter_BP_C.OnOutdoor // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ReceivePossessed(struct AController* NewController); // Function LFCharacter_BP.LFCharacter_BP_C.ReceivePossessed // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void LocalOnAfterInitializeImpl(); // Function LFCharacter_BP.LFCharacter_BP_C.LocalOnAfterInitializeImpl // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void HideInteractionKnife(); // Function LFCharacter_BP.LFCharacter_BP_C.HideInteractionKnife // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void ShowInteractionKnife(); // Function LFCharacter_BP.LFCharacter_BP_C.ShowInteractionKnife // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_LFCharacter_BP(int32_t EntryPoint); // Function LFCharacter_BP.LFCharacter_BP_C.ExecuteUbergraph_LFCharacter_BP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
};

