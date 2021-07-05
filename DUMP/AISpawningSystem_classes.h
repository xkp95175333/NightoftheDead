// Class AISpawningSystem.AISpawnLocation
// Size: 0x410 (Inherited: 0x220)
struct AAISpawnLocation : AActor {
	char pad_220[0x8]; // 0x220(0x08)
	struct USceneComponent* OriginLocation; // 0x228(0x08)
	struct USphereComponent* SpawnTrigger; // 0x230(0x08)
	struct UBoxComponent* SpawnAreaBox; // 0x238(0x08)
	struct USphereComponent* SpawnArea; // 0x240(0x08)
	struct UBillboardComponent* Icon; // 0x248(0x08)
	struct USphereComponent* SpawnCheckTrigger; // 0x250(0x08)
	struct UNavigationInvokerComponent* NavInvoker; // 0x258(0x08)
	struct TMap<struct ACharacter*, float> AIClasses; // 0x260(0x50)
	struct TMap<struct ACharacter*, struct FAIClassData> AIClassMap; // 0x2b0(0x50)
	float SpawnTime; // 0x300(0x04)
	int32_t MaxSpawn; // 0x304(0x04)
	bool bUseDifficultyMaxSpawn; // 0x308(0x01)
	bool bUseNavigation; // 0x309(0x01)
	bool bSpawnAtLandscapeOnly; // 0x30a(0x01)
	bool bIsIndoor; // 0x30b(0x01)
	bool bNoSlopeSpawn; // 0x30c(0x01)
	char pad_30D[0x3]; // 0x30d(0x03)
	float MaxSlopeAngle; // 0x310(0x04)
	float ActiveDistance; // 0x314(0x04)
	float SpawnNavCheckDistanceOffset; // 0x318(0x04)
	float SpawnDataDistanceOffset; // 0x31c(0x04)
	float SpawnDistance; // 0x320(0x04)
	float SpawnAreaRadius; // 0x324(0x04)
	int32_t MaxIterationAtFail; // 0x328(0x04)
	bool bNoSpawnAtRecentLocation; // 0x32c(0x01)
	char pad_32D[0x3]; // 0x32d(0x03)
	int32_t RecentLocationAmount; // 0x330(0x04)
	float RecentLocationDistance; // 0x334(0x04)
	struct TArray<struct FVector> RecentLocations; // 0x338(0x10)
	char pad_348[0x4]; // 0x348(0x04)
	bool bSpawnAsync; // 0x34c(0x01)
	char pad_34D[0x3]; // 0x34d(0x03)
	int32_t MaxSpawnPerTick; // 0x350(0x04)
	float AsyncInterval; // 0x354(0x04)
	float KillingZ; // 0x358(0x04)
	bool bSpawnInBox; // 0x35c(0x01)
	enum class ESpawnActorCollisionHandlingMethod SpawnMethod; // 0x35d(0x01)
	bool bBoundToHeight; // 0x35e(0x01)
	char pad_35F[0x1]; // 0x35f(0x01)
	float HeightBound; // 0x360(0x04)
	bool bIsStarted; // 0x364(0x01)
	bool bInitialSpawned; // 0x365(0x01)
	char pad_366[0x2]; // 0x366(0x02)
	int32_t DeferredSpawnAmount; // 0x368(0x04)
	bool bShowDataActors; // 0x36c(0x01)
	char pad_36D[0x3]; // 0x36d(0x03)
	struct TArray<struct AAIDataActor*> DataActors; // 0x370(0x10)
	struct TArray<struct ACharacter*> SpawnedAI; // 0x380(0x10)
	struct TArray<struct FAISpawnData> SpawnedData; // 0x390(0x10)
	struct TArray<struct FAIActorData> SpawnedActorsData; // 0x3a0(0x10)
	char pad_3B0[0x10]; // 0x3b0(0x10)
	struct TArray<struct AActor*> TriggerActors; // 0x3c0(0x10)
	struct TScriptInterface<None> GameMode; // 0x3d0(0x10)
	char pad_3E0[0x8]; // 0x3e0(0x08)
	struct FTimerHandle SpawnTimerHandle; // 0x3e8(0x08)
	struct FTimerHandle SpawnDataHandle; // 0x3f0(0x08)
	struct FTimerHandle SpawnActorHandle; // 0x3f8(0x08)
	struct FTimerHandle CheckObstacleTimerHandle; // 0x400(0x08)
	char pad_408[0x8]; // 0x408(0x08)

	void OnSpawned(struct ACharacter* SpawnedCharacter); // Function AISpawningSystem.AISpawnLocation.OnSpawned // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnActorSpawn(struct AActor* SpawnedActor); // Function AISpawningSystem.AISpawnLocation.OnActorSpawn // (Native|Protected) // @ game+0x782d90
	bool GetRandomPointInRadius(struct FTransform OutTransform); // Function AISpawningSystem.AISpawnLocation.GetRandomPointInRadius // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x106b160
};

// Class AISpawningSystem.AIDataActor
// Size: 0x248 (Inherited: 0x220)
struct AAIDataActor : AActor {
	char pad_220[0x10]; // 0x220(0x10)
	struct UObject* SpawnClass; // 0x230(0x08)
	struct USceneComponent* Root; // 0x238(0x08)
	struct UBillboardComponent* Icon; // 0x240(0x08)
};

// Class AISpawningSystem.AISpawnableGameMode
// Size: 0x28 (Inherited: 0x28)
struct UAISpawnableGameMode : UInterface {

	bool ShouldSpawnStart(); // Function AISpawningSystem.AISpawnableGameMode.ShouldSpawnStart // (Native|Public|Const) // @ game+0x105c0a0
	float GetDifficultySpawnAmount(); // Function AISpawningSystem.AISpawnableGameMode.GetDifficultySpawnAmount // (Native|Public) // @ game+0x10655c0
	void FindSpawnTriggerActors(struct TArray<struct AActor*> OutTriggerActors); // Function AISpawningSystem.AISpawnableGameMode.FindSpawnTriggerActors // (Native|Public|HasOutParms) // @ game+0x106abc0
	bool CanSpawn(); // Function AISpawningSystem.AISpawnableGameMode.CanSpawn // (Native|Public) // @ game+0xff2d10
};

// Class AISpawningSystem.AISpawnManager
// Size: 0x220 (Inherited: 0x220)
struct AAISpawnManager : AActor {
};

// Class AISpawningSystem.SpawnableAI
// Size: 0x28 (Inherited: 0x28)
struct USpawnableAI : UInterface {

	void SetSpawnIndoor(bool bIsIndoor); // Function AISpawningSystem.SpawnableAI.SetSpawnIndoor // (Native|Public) // @ game+0x106bc70
	void SetSpawner(struct AActor* SpawnLocation); // Function AISpawningSystem.SpawnableAI.SetSpawner // (Native|Public) // @ game+0x106bd00
	void SetSpawnDistance(float Acceptance); // Function AISpawningSystem.SpawnableAI.SetSpawnDistance // (Native|Public|BlueprintCallable) // @ game+0x106bbe0
	void SetOrphan(bool bNewOrphan); // Function AISpawningSystem.SpawnableAI.SetOrphan // (Native|Public) // @ game+0x106bb50
	void SetOriginLocation(struct FVector Location); // Function AISpawningSystem.SpawnableAI.SetOriginLocation // (Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x106bac0
	void OnSpawned(); // Function AISpawningSystem.SpawnableAI.OnSpawned // (Native|Public) // @ game+0x782e50
	void OnDespawned(); // Function AISpawningSystem.SpawnableAI.OnDespawned // (Native|Public) // @ game+0x782e70
	bool IsTransient(); // Function AISpawningSystem.SpawnableAI.IsTransient // (Native|Public|Const) // @ game+0x782d40
	bool IsAlive(); // Function AISpawningSystem.SpawnableAI.IsAlive // (Native|Public) // @ game+0x1062100
	void InitializeWithAiActorData(struct FAIActorData ActorData); // Function AISpawningSystem.SpawnableAI.InitializeWithAiActorData // (Native|Public|HasOutParms) // @ game+0x106b9d0
	struct AActor* GetSpawner(); // Function AISpawningSystem.SpawnableAI.GetSpawner // (Native|Public) // @ game+0x106b9a0
	float GetSpawnedHP(); // Function AISpawningSystem.SpawnableAI.GetSpawnedHP // (Native|Public|Const) // @ game+0x105be70
	struct FVector GetOriginLocation(); // Function AISpawningSystem.SpawnableAI.GetOriginLocation // (Native|Public|HasDefaults|BlueprintCallable) // @ game+0x106b960
	struct FAIActorData GetAiActorData(); // Function AISpawningSystem.SpawnableAI.GetAiActorData // (Native|Public|Const) // @ game+0x106b8e0
	bool CanDespawn(); // Function AISpawningSystem.SpawnableAI.CanDespawn // (Native|Public|Const) // @ game+0xff2d40
};

// Class AISpawningSystem.SpawnBlocker
// Size: 0x220 (Inherited: 0x220)
struct ASpawnBlocker : AActor {
};

// Class AISpawningSystem.SpawnObstacle
// Size: 0x28 (Inherited: 0x28)
struct USpawnObstacle : UInterface {
};

