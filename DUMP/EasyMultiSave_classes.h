// Class EasyMultiSave.EMSActorSaveInterface
// Size: 0x28 (Inherited: 0x28)
struct UEMSActorSaveInterface : UInterface {

	void ComponentsToSave(struct TArray<struct UActorComponent*> Components); // Function EasyMultiSave.EMSActorSaveInterface.ComponentsToSave // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x85a3c0
	void ActorSaved(); // Function EasyMultiSave.EMSActorSaveInterface.ActorSaved // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x85a1d0
	void ActorPreSave(); // Function EasyMultiSave.EMSActorSaveInterface.ActorPreSave // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x85a1b0
	void ActorPreLoading(); // Function EasyMultiSave.EMSActorSaveInterface.ActorPreLoading // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x782e70
	void ActorLoaded(); // Function EasyMultiSave.EMSActorSaveInterface.ActorLoaded // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x782e50
};

// Class EasyMultiSave.EMSAsyncLoadGame
// Size: 0x70 (Inherited: 0x30)
struct UEMSAsyncLoadGame : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate OnCompleted; // 0x30(0x10)
	char pad_40[0x30]; // 0x40(0x30)

	struct UEMSAsyncLoadGame* AsyncLoadActors(struct UObject* WorldContextObject, int32_t data, bool bFullReload); // Function EasyMultiSave.EMSAsyncLoadGame.AsyncLoadActors // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x85a1f0
};

// Class EasyMultiSave.EMSAsyncSaveGame
// Size: 0x60 (Inherited: 0x30)
struct UEMSAsyncSaveGame : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate OnCompleted; // 0x30(0x10)
	char pad_40[0x20]; // 0x40(0x20)

	struct UEMSAsyncSaveGame* AsyncSaveActors(struct UObject* WorldContextObject, int32_t data); // Function EasyMultiSave.EMSAsyncSaveGame.AsyncSaveActors // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x85a2f0
};

// Class EasyMultiSave.EMSFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UEMSFunctionLibrary : UBlueprintFunctionLibrary {

	void SetCurrentSaveGameName(struct UObject* WorldContextObject, struct FString SaveGameName); // Function EasyMultiSave.EMSFunctionLibrary.SetCurrentSaveGameName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x85afc0
	bool SavePersistentObject(struct UObject* WorldContextObject); // Function EasyMultiSave.EMSFunctionLibrary.SavePersistentObject // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x85add0
	bool SaveLocalProfile(struct UObject* WorldContextObject); // Function EasyMultiSave.EMSFunctionLibrary.SaveLocalProfile // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x85ad40
	bool IsSavingOrLoading(struct UObject* WorldContextObject); // Function EasyMultiSave.EMSFunctionLibrary.IsSavingOrLoading // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x85abe0
	bool IsSaving(struct UObject* WorldContextObject); // Function EasyMultiSave.EMSFunctionLibrary.IsSaving // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x85ab50
	struct UTexture2D* ImportSaveThumbnail(struct UObject* WorldContextObject, struct FString SaveGameName); // Function EasyMultiSave.EMSFunctionLibrary.ImportSaveThumbnail // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x85aa70
	struct TArray<struct FString> GetSortedSaveSlots(struct UObject* WorldContextObject); // Function EasyMultiSave.EMSFunctionLibrary.GetSortedSaveSlots // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x85a950
	struct UEMSInfoSaveGame* GetSlotInfoSaveGame(struct UObject* WorldContextObject, struct FString SaveGameName); // Function EasyMultiSave.EMSFunctionLibrary.GetSlotInfoSaveGame // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x85a860
	struct UEMSPersistentSaveGame* GetPersistentSave(struct UObject* WorldContextObject); // Function EasyMultiSave.EMSFunctionLibrary.GetPersistentSave // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x85a7d0
	struct UEMSInfoSaveGame* GetNamedSlotInfo(struct UObject* WorldContextObject, struct FString SaveGameName); // Function EasyMultiSave.EMSFunctionLibrary.GetNamedSlotInfo // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x85a6f0
	struct UEMSProfileSaveGame* GetLocalProfileSaveGame(struct UObject* WorldContextObject); // Function EasyMultiSave.EMSFunctionLibrary.GetLocalProfileSaveGame // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x85a660
	void ExportSaveThumbnail(struct UObject* WorldContextObject, struct UTextureRenderTarget2D* TextureRenderTarget, struct FString SaveGameName); // Function EasyMultiSave.EMSFunctionLibrary.ExportSaveThumbnail // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x85a540
	void DeleteAllSaveDataForSlot(struct UObject* WorldContextObject, struct FString SaveGameName); // Function EasyMultiSave.EMSFunctionLibrary.DeleteAllSaveDataForSlot // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x85a470
};

// Class EasyMultiSave.EMSInfoSaveGame
// Size: 0x58 (Inherited: 0x28)
struct UEMSInfoSaveGame : USaveGame {
	struct FSaveSlotInfo SlotInfo; // 0x28(0x30)

	void SaveSlotInfo(struct UObject* WorldContextObject, struct FString SaveGameName, struct FName LevelName); // Function EasyMultiSave.EMSInfoSaveGame.SaveSlotInfo // (Native|Public) // @ game+0x85ae60
};

// Class EasyMultiSave.EMSObject
// Size: 0x170 (Inherited: 0x28)
struct UEMSObject : UObject {
	struct UWorld* World; // 0x28(0x08)
	struct FString CurrentSaveGameName; // 0x30(0x10)
	struct UEMSInfoSaveGame* CachedSlotInfoSave; // 0x40(0x08)
	struct UEMSPersistentSaveGame* CachedPersistentSave; // 0x48(0x08)
	struct UEMSProfileSaveGame* CachedProfileSave; // 0x50(0x08)
	struct TArray<struct AActor*> ActorList; // 0x58(0x10)
	char pad_68[0x108]; // 0x68(0x108)

	void OuterActorEndPlay(struct AActor* Actor, enum class EEndPlayReason EndPlayReason); // Function EasyMultiSave.EMSObject.OuterActorEndPlay // (Final|Native|Protected) // @ game+0x85ac70
};

// Class EasyMultiSave.EMSPersistentSaveGame
// Size: 0x58 (Inherited: 0x28)
struct UEMSPersistentSaveGame : USaveGame {
	struct FSaveSlotInfo SlotInfo; // 0x28(0x30)
};

// Class EasyMultiSave.EMSPluginSettings
// Size: 0x58 (Inherited: 0x28)
struct UEMSPluginSettings : UObject {
	struct FString DefaultSaveGameName; // 0x28(0x10)
	struct UEMSPersistentSaveGame* PersistentSaveGameClass; // 0x38(0x08)
	struct UEMSInfoSaveGame* SlotInfoSaveGameClass; // 0x40(0x08)
	struct UEMSProfileSaveGame* ProfileSaveGameClass; // 0x48(0x08)
	bool bPersistentPlayer; // 0x50(0x01)
	bool bPersistentGameMode; // 0x51(0x01)
	bool bMultiThreadSaving; // 0x52(0x01)
	enum class ELoadMethod LoadMethod; // 0x53(0x01)
	char pad_54[0x4]; // 0x54(0x04)
};

// Class EasyMultiSave.EMSProfileSaveGame
// Size: 0x28 (Inherited: 0x28)
struct UEMSProfileSaveGame : USaveGame {
};

