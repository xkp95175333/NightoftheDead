// Class LF.AmmunitionHolder
// Size: 0x28 (Inherited: 0x28)
struct UAmmunitionHolder : UInterface {
};

// Class LF.AmmunitionManager
// Size: 0x28 (Inherited: 0x28)
struct UAmmunitionManager : UInterface {
};

// Class LF.AmmunitionUser
// Size: 0x28 (Inherited: 0x28)
struct UAmmunitionUser : UInterface {

	bool IsAmmunitionReady(); // Function LF.AmmunitionUser.IsAmmunitionReady // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xff2d40
	bool HasAmmunition(); // Function LF.AmmunitionUser.HasAmmunition // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xff2d10
};

// Class LF.BuildingEntity
// Size: 0x698 (Inherited: 0x220)
struct ABuildingEntity : AActor {
	char pad_220[0x48]; // 0x220(0x48)
	bool bIsInitialized; // 0x268(0x01)
	bool bIsHanged; // 0x269(0x01)
	bool bHeightWithGrid; // 0x26a(0x01)
	bool bXYWithGrid; // 0x26b(0x01)
	bool bCanBuildUpOn; // 0x26c(0x01)
	bool bNeedCornerstone; // 0x26d(0x01)
	bool bIndestructible; // 0x26e(0x01)
	bool bIsFloor; // 0x26f(0x01)
	bool bIsColumn; // 0x270(0x01)
	bool bShouldOnLandscape; // 0x271(0x01)
	char pad_272[0x2]; // 0x272(0x02)
	struct FName HitTraitName; // 0x274(0x08)
	struct FVector CollisionRatio; // 0x27c(0x0c)
	float CornerstoneHeight; // 0x288(0x04)
	float CornerstoneRadius; // 0x28c(0x04)
	float CollapseCheckDistance; // 0x290(0x04)
	bool bUseDynamicMaterial; // 0x294(0x01)
	char pad_295[0x3]; // 0x295(0x03)
	struct UDestructibleMesh* DestructibleMesh; // 0x298(0x08)
	float CollapseDamage; // 0x2a0(0x04)
	float DestructImpulse; // 0x2a4(0x04)
	float DestructRadius; // 0x2a8(0x04)
	bool bUseFixedDestructDamage; // 0x2ac(0x01)
	bool bUseFixedDestructRadius; // 0x2ad(0x01)
	bool bDestructDelayed; // 0x2ae(0x01)
	char pad_2AF[0x1]; // 0x2af(0x01)
	struct FName DestructEffectName; // 0x2b0(0x08)
	struct FName PlacedInWorldTag; // 0x2b8(0x08)
	struct FGameplayTagContainer GameplayTags; // 0x2c0(0x20)
	struct FName DestructibleCosmeticCollisionProfile; // 0x2e0(0x08)
	float LastDamage; // 0x2e8(0x04)
	struct FVector LastImpactPoint; // 0x2ec(0x0c)
	bool bCollapseFromPlace; // 0x2f8(0x01)
	bool bIsStatic; // 0x2f9(0x01)
	bool bDelayedDestroy; // 0x2fa(0x01)
	char pad_2FB[0x1]; // 0x2fb(0x01)
	float DestroyDelay; // 0x2fc(0x04)
	struct FLFTeamAgentId AgentId; // 0x300(0x20)
	float MaxHP; // 0x320(0x04)
	struct FLFTeamId TeamId; // 0x324(0x10)
	bool bCanDropMaterial; // 0x334(0x01)
	bool bPlacedInWorld; // 0x335(0x01)
	char pad_336[0x2]; // 0x336(0x02)
	struct FName PlacedBuildingName; // 0x338(0x08)
	struct TArray<struct FInventoryItem> BuildingMaterials; // 0x340(0x10)
	bool bUseActorTransformForDestruct; // 0x350(0x01)
	char pad_351[0x3]; // 0x351(0x03)
	float FriendlyFireDamageRate; // 0x354(0x04)
	float FireProgress; // 0x358(0x04)
	bool bDestroyed; // 0x35c(0x01)
	char pad_35D[0x3]; // 0x35d(0x03)
	float CurrentHP; // 0x360(0x04)
	char pad_364[0x4]; // 0x364(0x04)
	struct TArray<struct UCapsuleComponent*> Cornerstones; // 0x368(0x10)
	struct FVector OriginalCollisionExtent; // 0x378(0x0c)
	char pad_384[0x4]; // 0x384(0x04)
	struct UBoxComponent* CollisionBox; // 0x388(0x08)
	struct UBoxComponent* PropagationBox; // 0x390(0x08)
	struct TArray<struct UBoxComponent*> CollisionBoxes; // 0x398(0x10)
	struct TArray<struct UBoxComponent*> CollisionBoxesForPawn; // 0x3a8(0x10)
	struct UCapsuleComponent* CornerLU; // 0x3b8(0x08)
	struct UCapsuleComponent* CornerLD; // 0x3c0(0x08)
	struct UCapsuleComponent* CornerRU; // 0x3c8(0x08)
	struct UCapsuleComponent* CornerRD; // 0x3d0(0x08)
	struct USceneComponent* RootSceneComponent; // 0x3d8(0x08)
	struct UStaticMeshComponent* StaticMeshComponent; // 0x3e0(0x08)
	struct TArray<struct UMaterialInstanceDynamic*> MaterialInstances; // 0x3e8(0x10)
	struct TMap<struct UMeshComponent*, struct FStaticMeshMaterials> StaticMaterials; // 0x3f8(0x50)
	struct TMap<struct FName, float> MaterialValues; // 0x448(0x50)
	struct ULFBuildingBuffComponent* BuffComponent; // 0x498(0x08)
	struct FGenericTeamId BuildingTeam; // 0x4a0(0x01)
	char pad_4A1[0x7]; // 0x4a1(0x07)
	struct FString BuilderId; // 0x4a8(0x10)
	struct FName BuildingName; // 0x4b8(0x08)
	struct FBuildingDataParsed BuildingData; // 0x4c0(0x168)
	char pad_628[0x10]; // 0x628(0x10)
	bool bIsPlaced; // 0x638(0x01)
	bool bIsCollapsed; // 0x639(0x01)
	bool bIsDemolished; // 0x63a(0x01)
	char pad_63B[0x1]; // 0x63b(0x01)
	float CheckDistance; // 0x63c(0x04)
	char pad_640[0x10]; // 0x640(0x10)
	struct FMulticastInlineDelegate OnChanged; // 0x650(0x10)
	struct FTimerHandle CollapseHandle; // 0x660(0x08)
	struct FTimerHandle CollapseCheckHandle; // 0x668(0x08)
	struct FTimerHandle DestroyHandle; // 0x670(0x08)
	struct TArray<struct UFXSystemAsset*> LoadedHitFx; // 0x678(0x10)
	struct TArray<struct USoundBase*> LoadedHitSounds; // 0x688(0x10)

	void TakeBuildingDamage(float DamageAmount, struct AController* EventInstigator); // Function LF.BuildingEntity.TakeBuildingDamage // (Final|Native|Public) // @ game+0xff7e40
	void SetStaticMeshCanAffectNavigation(bool bCanAffect); // Function LF.BuildingEntity.SetStaticMeshCanAffectNavigation // (Final|Native|Public|BlueprintCallable) // @ game+0xff7db0
	void SetMaxHP(float MaxHitPoint); // Function LF.BuildingEntity.SetMaxHP // (Final|Native|Public) // @ game+0xff7d30
	void SetBuildingName(struct FName Name); // Function LF.BuildingEntity.SetBuildingName // (Final|Native|Public) // @ game+0xff7ca0
	void SetBuildingMaterials(struct TArray<struct FInventoryItem> Materials); // Function LF.BuildingEntity.SetBuildingMaterials // (Final|Native|Public|HasOutParms) // @ game+0xff7bd0
	void SetBuildingData(struct FBuildingDataParsed data); // Function LF.BuildingEntity.SetBuildingData // (Final|Native|Public|HasOutParms) // @ game+0xff7b20
	void ServerPostInit(); // Function LF.BuildingEntity.ServerPostInit // (Native|Public) // @ game+0xcee590
	void ServerOnUpgradeLockable(struct ABuildingEntity* OriginalBuilding); // Function LF.BuildingEntity.ServerOnUpgradeLockable // (Native|Public) // @ game+0xff7a90
	void ServerOnUpgrade(struct ABuildingEntity* OriginalBuilding, struct TArray<struct FInventoryItem> UpgradeMaterials); // Function LF.BuildingEntity.ServerOnUpgrade // (Native|Public|HasOutParms) // @ game+0xff7970
	void ServerOnDestroyBuilding(bool bDemolished); // Function LF.BuildingEntity.ServerOnDestroyBuilding // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void ServerInitPlaceEnd(); // Function LF.BuildingEntity.ServerInitPlaceEnd // (Final|Native|Public) // @ game+0xff7950
	void ServerInitBuff(); // Function LF.BuildingEntity.ServerInitBuff // (Final|Native|Public) // @ game+0xff7840
	void ServerInit(struct AActor* InBuilder); // Function LF.BuildingEntity.ServerInit // (Native|Public) // @ game+0xff77b0
	void ServerDestructBuilding(bool bDemolished); // Function LF.BuildingEntity.ServerDestructBuilding // (Final|Native|Protected) // @ game+0xff7720
	void ServerDestroyBuilding(bool bDemolished); // Function LF.BuildingEntity.ServerDestroyBuilding // (Native|Public) // @ game+0xff7690
	void OnRep_Destroyed(); // Function LF.BuildingEntity.OnRep_Destroyed // (Native|Public) // @ game+0xff75c0
	void OnRep_BuildingName(); // Function LF.BuildingEntity.OnRep_BuildingName // (Final|Native|Protected) // @ game+0xff75a0
	void OnHitSoundLoaded(); // Function LF.BuildingEntity.OnHitSoundLoaded // (Final|Native|Protected) // @ game+0xff7580
	void OnHitFxLoaded(); // Function LF.BuildingEntity.OnHitFxLoaded // (Final|Native|Protected) // @ game+0xff7560
	void OnDestructBuilding(bool bDemolished); // Function LF.BuildingEntity.OnDestructBuilding // (Event|Protected|BlueprintEvent) // @ game+0x1395fe0
	void OnCollapseImpl(); // Function LF.BuildingEntity.OnCollapseImpl // (Event|Protected|BlueprintEvent) // @ game+0x1395fe0
	void OnBuild(); // Function LF.BuildingEntity.OnBuild // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void NotifyPropagationBeginOverlap(struct UPrimitiveComponent* OverlappedComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function LF.BuildingEntity.NotifyPropagationBeginOverlap // (Final|Native|Public|HasOutParms) // @ game+0xff7330
	void MulticastSpawnDestructedActor(struct FVector_NetQuantize InImpactPoint, float InLastDamage); // Function LF.BuildingEntity.MulticastSpawnDestructedActor // (Net|NetReliableNative|Event|NetMulticast|Protected) // @ game+0xff7250
	void MulticastOnDestruct(bool bDemolished); // Function LF.BuildingEntity.MulticastOnDestruct // (Net|NetReliableNative|Event|NetMulticast|Protected) // @ game+0xff71c0
	void MulticastOnCollapse(); // Function LF.BuildingEntity.MulticastOnCollapse // (Net|Native|Event|NetMulticast|Protected) // @ game+0xff71a0
	void MulticastOnBuild(); // Function LF.BuildingEntity.MulticastOnBuild // (Net|Native|Event|NetMulticast|Public) // @ game+0xff7180
	void MulticastEmitInteractionEffect(enum class EInteractionType Interaction); // Function LF.BuildingEntity.MulticastEmitInteractionEffect // (Net|Native|Event|NetMulticast|Public) // @ game+0xff7100
	void MakeHitEffect(float DamageAmount, struct FDamageEvent DamageEvent, struct AController* EventInstigator); // Function LF.BuildingEntity.MakeHitEffect // (Final|Native|Public|HasOutParms|Const) // @ game+0xff6fd0
	bool IsTargetable(); // Function LF.BuildingEntity.IsTargetable // (Final|Native|Public|Const) // @ game+0xff6f90
	bool IsPlaceable(bool bNeedCornerstone, struct TArray<struct UCapsuleComponent*> Cornerstones, struct AActor* Self); // Function LF.BuildingEntity.IsPlaceable // (Final|Native|Static|Public|HasOutParms) // @ game+0xff6e50
	bool IsCollidedToPlayerCharacter(struct TArray<struct UBoxComponent*> CollisionBoxes, struct AActor* Self); // Function LF.BuildingEntity.IsCollidedToPlayerCharacter // (Final|Native|Static|Public|HasOutParms) // @ game+0xff6cf0
	bool IsCollidedToPawn(struct TArray<struct UBoxComponent*> CollisionBoxesForPawn, struct AActor* Self); // Function LF.BuildingEntity.IsCollidedToPawn // (Final|Native|Static|Public|HasOutParms) // @ game+0xff6bf0
	bool IsCollided(struct TArray<struct UBoxComponent*> CollisionBoxes, struct AActor* Self); // Function LF.BuildingEntity.IsCollided // (Final|Native|Static|Public|HasOutParms) // @ game+0xff6af0
	bool IsBuildingTargetable(); // Function LF.BuildingEntity.IsBuildingTargetable // (Final|Native|Protected|BlueprintCallable|BlueprintPure) // @ game+0xff6ac0
	void InvalidateBuildingPlace(struct UObject* WorldContextObject, struct FVector Origin, struct FVector BoxExtent, struct FRotator Rotation); // Function LF.BuildingEntity.InvalidateBuildingPlace // (Final|Native|Static|Public|HasDefaults) // @ game+0xff6950
	void InitCornerstonesToBoxExtent(); // Function LF.BuildingEntity.InitCornerstonesToBoxExtent // (Final|Native|Public) // @ game+0xff6930
	void InitBoxExtent(); // Function LF.BuildingEntity.InitBoxExtent // (Final|Native|Public) // @ game+0xff6910
	bool HasUpgrade(); // Function LF.BuildingEntity.HasUpgrade // (Final|Native|Public|Const) // @ game+0xff68e0
	struct UBoxComponent* GetPropagationBox(); // Function LF.BuildingEntity.GetPropagationBox // (Final|Native|Public) // @ game+0xff68c0
	void GetNonDynamicMaterialMeshes(struct TArray<struct UMeshComponent*> OutMeshComponents); // Function LF.BuildingEntity.GetNonDynamicMaterialMeshes // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1395fe0
	struct UStaticMeshComponent* GetMesh(); // Function LF.BuildingEntity.GetMesh // (Final|Native|Public|Const) // @ game+0xff6890
	struct FVector GetLocationForQuery(); // Function LF.BuildingEntity.GetLocationForQuery // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0xff6850
	struct FTransform GetDestructTransform(); // Function LF.BuildingEntity.GetDestructTransform // (Native|Event|Protected|HasDefaults|BlueprintEvent|Const) // @ game+0xff67e0
	struct TArray<struct UCapsuleComponent*> GetCornerstones(); // Function LF.BuildingEntity.GetCornerstones // (Final|Native|Public) // @ game+0xff6750
	struct FVector GetCenterOfCornerStones(); // Function LF.BuildingEntity.GetCenterOfCornerStones // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0xff6710
	struct FName GetBuildingName(); // Function LF.BuildingEntity.GetBuildingName // (Final|Native|Public|Const) // @ game+0xff66d0
	struct FBuildingDataParsed GetBuildingData(); // Function LF.BuildingEntity.GetBuildingData // (Final|Native|Public|Const) // @ game+0xff6680
	enum class EBuildingCategory GetBuildingCategory(); // Function LF.BuildingEntity.GetBuildingCategory // (Final|Native|Public|Const) // @ game+0xff6650
	void DestoryActorImpl(); // Function LF.BuildingEntity.DestoryActorImpl // (Final|Native|Protected) // @ game+0xff6610
	void CheckCollapsed(); // Function LF.BuildingEntity.CheckCollapsed // (Final|Native|Protected) // @ game+0xff65f0
	bool CanUpgrade(); // Function LF.BuildingEntity.CanUpgrade // (Final|Native|Public|Const) // @ game+0xff65c0
};

// Class LF.FarmBuildingEntity
// Size: 0x720 (Inherited: 0x698)
struct AFarmBuildingEntity : ABuildingEntity {
	char pad_698[0x8]; // 0x698(0x08)
	struct FText FarmName; // 0x6a0(0x18)
	int32_t MaxSlotAmount; // 0x6b8(0x04)
	bool bShouldStartFarmingWhenBuilt; // 0x6bc(0x01)
	char pad_6BD[0x3]; // 0x6bd(0x03)
	struct TArray<struct FInventoryItem> OwningItems; // 0x6c0(0x10)
	float FarmingProgress; // 0x6d0(0x04)
	bool bIsFarming; // 0x6d4(0x01)
	bool bIsReloaded; // 0x6d5(0x01)
	char pad_6D6[0x2]; // 0x6d6(0x02)
	struct FFarmData FarmData; // 0x6d8(0x30)
	struct FGameDate LastDate; // 0x708(0x10)
	struct FName FarmTag; // 0x718(0x08)

	void ServerStartFarm(); // Function LF.FarmBuildingEntity.ServerStartFarm // (Native|Public) // @ game+0xffd230
	void ServerEndFarm(); // Function LF.FarmBuildingEntity.ServerEndFarm // (Native|Public) // @ game+0x1001c10
	void ServerClearFarm(); // Function LF.FarmBuildingEntity.ServerClearFarm // (Native|Public) // @ game+0x1001bf0
	void OnRep_Progress(); // Function LF.FarmBuildingEntity.OnRep_Progress // (Final|Native|Public) // @ game+0x1001bd0
	void OnRep_OwningItem(); // Function LF.FarmBuildingEntity.OnRep_OwningItem // (Final|Native|Public) // @ game+0xc20320
	void OnRep_IsFarming(); // Function LF.FarmBuildingEntity.OnRep_IsFarming // (Final|Native|Public) // @ game+0x1001bb0
	void OnMinutePassed(); // Function LF.FarmBuildingEntity.OnMinutePassed // (Final|Native|Public) // @ game+0x1001b70
	void OnFarmingStart(); // Function LF.FarmBuildingEntity.OnFarmingStart // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void OnFarmingProgress(float Progress); // Function LF.FarmBuildingEntity.OnFarmingProgress // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void OnFarmingEnd(); // Function LF.FarmBuildingEntity.OnFarmingEnd // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void OnFarmClear(); // Function LF.FarmBuildingEntity.OnFarmClear // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void MulticastOnFarmingStart(); // Function LF.FarmBuildingEntity.MulticastOnFarmingStart // (Net|Native|Event|NetMulticast|Public) // @ game+0x1001b30
	void MulticastOnFarmingEnd(); // Function LF.FarmBuildingEntity.MulticastOnFarmingEnd // (Net|Native|Event|NetMulticast|Public) // @ game+0x1001b10
	void MulticastOnFarmingClear(); // Function LF.FarmBuildingEntity.MulticastOnFarmingClear // (Net|Native|Event|NetMulticast|Public) // @ game+0x1001af0
};

// Class LF.AnimalFarmBuildingEntity
// Size: 0x770 (Inherited: 0x720)
struct AAnimalFarmBuildingEntity : AFarmBuildingEntity {
	char pad_720[0x8]; // 0x720(0x08)
	struct TWeakObjectPtr<struct AActor> SpawnedCorpsePointer; // 0x728(0x08)
	struct USphereComponent* TrapSphere; // 0x730(0x08)
	struct TArray<struct ALFCharacterPlayer*> PlayerCharacters; // 0x738(0x10)
	struct TArray<struct AActor*> NearbyTraps; // 0x748(0x10)
	bool bFarmOnlyLandscape; // 0x758(0x01)
	bool bIsBroke; // 0x759(0x01)
	char pad_75A[0x2]; // 0x75a(0x02)
	float FarDistance; // 0x75c(0x04)
	float NearDistance; // 0x760(0x04)
	float AttackDamage; // 0x764(0x04)
	struct FName AttackTrait; // 0x768(0x08)

	void ServerSpawnAnimalCorpse(); // Function LF.AnimalFarmBuildingEntity.ServerSpawnAnimalCorpse // (Final|Native|Public) // @ game+0xff2e90
	void ServerInitAnimalFarm(); // Function LF.AnimalFarmBuildingEntity.ServerInitAnimalFarm // (Final|Native|Public) // @ game+0xff2e70
	void OnSpawnCorpse(struct AItemEntity* SpawnedCorpse); // Function LF.AnimalFarmBuildingEntity.OnSpawnCorpse // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void GiveDamage(struct AActor* Actor); // Function LF.AnimalFarmBuildingEntity.GiveDamage // (Final|Native|Public|BlueprintCallable) // @ game+0xff2c80
	void EndFarmForce(); // Function LF.AnimalFarmBuildingEntity.EndFarmForce // (Final|Native|Public|BlueprintCallable) // @ game+0xff2720
};

// Class LF.AnimationCosmetic
// Size: 0x28 (Inherited: 0x28)
struct UAnimationCosmetic : UInterface {
};

// Class LF.AnimNotify_AttackStomp
// Size: 0x58 (Inherited: 0x38)
struct UAnimNotify_AttackStomp : UAnimNotify {
	bool bUseEquipmentData; // 0x38(0x01)
	bool bUseSkillUserInterface; // 0x39(0x01)
	enum class ESkillType SkillType; // 0x3a(0x01)
	bool bCheckOcclusion; // 0x3b(0x01)
	struct FName CheckOcclusionBoneName; // 0x3c(0x08)
	struct FName BoneName; // 0x44(0x08)
	float Radius; // 0x4c(0x04)
	float Damage; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// Class LF.AnimNotify_CharacterSound
// Size: 0x40 (Inherited: 0x38)
struct UAnimNotify_CharacterSound : UAnimNotify {
	struct FName SoundId; // 0x38(0x08)
};

// Class LF.AnimNotify_DestroySelf
// Size: 0x38 (Inherited: 0x38)
struct UAnimNotify_DestroySelf : UAnimNotify {
};

// Class LF.AnimNotify_EmitEffect
// Size: 0x48 (Inherited: 0x38)
struct UAnimNotify_EmitEffect : UAnimNotify {
	struct FName EffectId; // 0x38(0x08)
	struct FName Socket; // 0x40(0x08)
};

// Class LF.AnimNotify_HideWeapon
// Size: 0x40 (Inherited: 0x38)
struct UAnimNotify_HideWeapon : UAnimNotify {
	bool bShow; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// Class LF.AnimNotify_HideZombieWeapon
// Size: 0x40 (Inherited: 0x38)
struct UAnimNotify_HideZombieWeapon : UAnimNotify {
	bool bMainWeapon; // 0x38(0x01)
	bool bSubWeapon; // 0x39(0x01)
	char pad_3A[0x6]; // 0x3a(0x06)
};

// Class LF.AnimNotify_Interaction
// Size: 0x38 (Inherited: 0x38)
struct UAnimNotify_Interaction : UAnimNotify {
};

// Class LF.AnimNotify_PlayGameSound
// Size: 0x48 (Inherited: 0x38)
struct UAnimNotify_PlayGameSound : UAnimNotify {
	enum class EGameSoundType SoundType; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	struct FName SoundId; // 0x3c(0x08)
	char pad_44[0x4]; // 0x44(0x04)
};

// Class LF.AnimNotify_PrintString
// Size: 0x48 (Inherited: 0x38)
struct UAnimNotify_PrintString : UAnimNotify {
	struct FString Message; // 0x38(0x10)
};

// Class LF.AnimNotify_Shoot
// Size: 0x38 (Inherited: 0x38)
struct UAnimNotify_Shoot : UAnimNotify {
};

// Class LF.AnimNotify_ShowZombieWeapon
// Size: 0x40 (Inherited: 0x38)
struct UAnimNotify_ShowZombieWeapon : UAnimNotify {
	bool bMainWeapon; // 0x38(0x01)
	bool bSubWeapon; // 0x39(0x01)
	char pad_3A[0x6]; // 0x3a(0x06)
};

// Class LF.AnimNotify_SpawnActor
// Size: 0x40 (Inherited: 0x38)
struct UAnimNotify_SpawnActor : UAnimNotify {
	struct AActor* ActorClass; // 0x38(0x08)
};

// Class LF.AnimNotify_SurfaceFootstep
// Size: 0x58 (Inherited: 0x38)
struct UAnimNotify_SurfaceFootstep : UAnimNotify {
	struct FGameplayTag FootstepCategory; // 0x38(0x08)
	enum class EFootstepTraceDirection FootstepTraceDirection; // 0x40(0x01)
	bool bTraceFromFootSocket; // 0x41(0x01)
	char pad_42[0x2]; // 0x42(0x02)
	struct FName FootSocket; // 0x44(0x08)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct USurfaceFootstepSystemSettings* FootstepSettings; // 0x50(0x08)
};

// Class LF.AnimNotify_ThrowZombieWeapon
// Size: 0x70 (Inherited: 0x38)
struct UAnimNotify_ThrowZombieWeapon : UAnimNotify {
	struct AThrowableEntity* Weapon; // 0x38(0x08)
	struct FName ShootLocationBone; // 0x40(0x08)
	struct FVector ShootLocationOffset; // 0x48(0x0c)
	struct FVector TargetLocationOffset; // 0x54(0x0c)
	float Speed; // 0x60(0x04)
	float AngleCorrection; // 0x64(0x04)
	float HomingMagnitude; // 0x68(0x04)
	bool bIsAimGround; // 0x6c(0x01)
	bool bServerOnly; // 0x6d(0x01)
	char pad_6E[0x2]; // 0x6e(0x02)
};

// Class LF.AnimNotifyState_Attack
// Size: 0x30 (Inherited: 0x30)
struct UAnimNotifyState_Attack : UAnimNotifyState {
};

// Class LF.AnimNotifyState_AttackTrace
// Size: 0x30 (Inherited: 0x30)
struct UAnimNotifyState_AttackTrace : UAnimNotifyState {
};

// Class LF.AnimNotifyState_BlockCamera
// Size: 0x30 (Inherited: 0x30)
struct UAnimNotifyState_BlockCamera : UAnimNotifyState {
};

// Class LF.AnimNotifyState_BlockMovement
// Size: 0x30 (Inherited: 0x30)
struct UAnimNotifyState_BlockMovement : UAnimNotifyState {
};

// Class LF.AnimNotifyState_BlockEnd
// Size: 0x30 (Inherited: 0x30)
struct UAnimNotifyState_BlockEnd : UAnimNotifyState_BlockMovement {
};

// Class LF.AnimNotifyState_BlockStart
// Size: 0x30 (Inherited: 0x30)
struct UAnimNotifyState_BlockStart : UAnimNotifyState_BlockMovement {
};

// Class LF.AnimNotifyState_BlockWhileTime
// Size: 0x38 (Inherited: 0x30)
struct UAnimNotifyState_BlockWhileTime : UAnimNotifyState_BlockMovement {
	float BlockSecond; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class LF.AnimNotifyState_Interaction
// Size: 0x30 (Inherited: 0x30)
struct UAnimNotifyState_Interaction : UAnimNotifyState {
};

// Class LF.AnimNotifyState_InteractionState
// Size: 0x30 (Inherited: 0x30)
struct UAnimNotifyState_InteractionState : UAnimNotifyState {
};

// Class LF.AnimNotifyState_NoAim
// Size: 0x30 (Inherited: 0x30)
struct UAnimNotifyState_NoAim : UAnimNotifyState {
};

// Class LF.AnimNotifyState_NoHandIK
// Size: 0x30 (Inherited: 0x30)
struct UAnimNotifyState_NoHandIK : UAnimNotifyState {
};

// Class LF.AnimNotifyState_NoHandIK_End
// Size: 0x30 (Inherited: 0x30)
struct UAnimNotifyState_NoHandIK_End : UAnimNotifyState_NoHandIK {
};

// Class LF.AnimNotifyState_NoHandIK_Start
// Size: 0x30 (Inherited: 0x30)
struct UAnimNotifyState_NoHandIK_Start : UAnimNotifyState_NoHandIK {
};

// Class LF.AnimNotifyState_PlayGameSound
// Size: 0x48 (Inherited: 0x30)
struct UAnimNotifyState_PlayGameSound : UAnimNotifyState {
	enum class EGameSoundType SoundType; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	struct FName SoundId; // 0x34(0x08)
	bool bStopSoundWhenEnd; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	struct UAudioComponent* Audio; // 0x40(0x08)
};

// Class LF.AnimNotifyState_ShowAnimItem
// Size: 0x78 (Inherited: 0x30)
struct UAnimNotifyState_ShowAnimItem : UAnimNotifyState {
	struct AActor* ActorClass; // 0x30(0x08)
	struct FName SocketName; // 0x38(0x08)
	struct FVector RelativeLocation; // 0x40(0x0c)
	struct FRotator RelativeRotation; // 0x4c(0x0c)
	struct FVector RelativeScale3D; // 0x58(0x0c)
	bool bShouldUseFirstPersonMesh; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
	struct AActor* SpawnedActor; // 0x68(0x08)
	struct FTimerHandle DestroyHandle; // 0x70(0x08)

	void DestroyItem(); // Function LF.AnimNotifyState_ShowAnimItem.DestroyItem // (Final|Native|Private|Const) // @ game+0xff2700
};

// Class LF.AnimNotifyState_ShowKnife
// Size: 0x50 (Inherited: 0x30)
struct UAnimNotifyState_ShowKnife : UAnimNotifyState {
	struct FName SocketName; // 0x30(0x08)
	struct FVector RelativeLocation; // 0x38(0x0c)
	struct FRotator RelativeRotation; // 0x44(0x0c)
};

// Class LF.AnimNotifyState_SlowMovement
// Size: 0x30 (Inherited: 0x30)
struct UAnimNotifyState_SlowMovement : UAnimNotifyState {
};

// Class LF.AnimNotifyState_SuperArmor
// Size: 0x30 (Inherited: 0x30)
struct UAnimNotifyState_SuperArmor : UAnimNotifyState {
};

// Class LF.Attachable
// Size: 0x28 (Inherited: 0x28)
struct UAttachable : UInterface {
};

// Class LF.Attackable
// Size: 0x28 (Inherited: 0x28)
struct UAttackable : UInterface {
};

// Class LF.AttackCondition
// Size: 0x28 (Inherited: 0x28)
struct UAttackCondition : UInterface {
};

// Class LF.TrapEntity
// Size: 0x720 (Inherited: 0x698)
struct ATrapEntity : ABuildingEntity {
	char pad_698[0x8]; // 0x698(0x08)
	struct TArray<struct AActor*> AlreadyHitActors; // 0x6a0(0x10)
	struct FName AttackTraitName; // 0x6b0(0x08)
	struct FName AttackEffectName; // 0x6b8(0x08)
	struct FName AttackFallbackEffectName; // 0x6c0(0x08)
	bool bIsDisable; // 0x6c8(0x01)
	bool bIsManual; // 0x6c9(0x01)
	bool bUnlimited; // 0x6ca(0x01)
	bool bIsActivated; // 0x6cb(0x01)
	bool bIsAutomaticallyTriggered; // 0x6cc(0x01)
	char pad_6CD[0x3]; // 0x6cd(0x03)
	struct UBoxComponent* BoxTrigger; // 0x6d0(0x08)
	float TrapDamage; // 0x6d8(0x04)
	int32_t MaxAttackCount; // 0x6dc(0x04)
	bool bHumanTrigger; // 0x6e0(0x01)
	bool bAllowNullTarget; // 0x6e1(0x01)
	bool bAreaOfEffect; // 0x6e2(0x01)
	char pad_6E3[0x1]; // 0x6e3(0x01)
	float AreaOfEffectRadius; // 0x6e4(0x04)
	struct FName AreaEffectName; // 0x6e8(0x08)
	int32_t CurrentAttackCount; // 0x6f0(0x04)
	char pad_6F4[0x4]; // 0x6f4(0x04)
	struct FTimerHandle TimerHandle; // 0x6f8(0x08)
	struct TArray<struct UFXSystemAsset*> LoadedAreaFx; // 0x700(0x10)
	struct TArray<struct USoundBase*> LoadedSounds; // 0x710(0x10)

	void TurnOnTrap(); // Function LF.TrapEntity.TurnOnTrap // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1001c10
	void TurnOffTrap(); // Function LF.TrapEntity.TurnOffTrap // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1001bf0
	void OnTrapTriggered(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function LF.TrapEntity.OnTrapTriggered // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnTrapRetract(); // Function LF.TrapEntity.OnTrapRetract // (Native|Public|BlueprintCallable) // @ game+0x1061520
	void OnTrapRepaired(); // Function LF.TrapEntity.OnTrapRepaired // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xffd600
	void OnTrapHit(struct AActor* HitActor, struct FHitResult HitResult); // Function LF.TrapEntity.OnTrapHit // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x10613e0
	void OnTrapExecute(); // Function LF.TrapEntity.OnTrapExecute // (Native|Public|BlueprintCallable) // @ game+0x105c100
	void OnRep_Activated(); // Function LF.TrapEntity.OnRep_Activated // (Native|Protected) // @ game+0xce9b80
	void OnAreaEffectSoundLoaded(); // Function LF.TrapEntity.OnAreaEffectSoundLoaded // (Final|Native|Private) // @ game+0x10610f0
	void OnAreaEffectLoaded(); // Function LF.TrapEntity.OnAreaEffectLoaded // (Final|Native|Private) // @ game+0x10610d0
	void OnAfterBuildingLoaded(); // Function LF.TrapEntity.OnAfterBuildingLoaded // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void MulticastOnTrapRepaired(); // Function LF.TrapEntity.MulticastOnTrapRepaired // (Net|Native|Event|NetMulticast|Public) // @ game+0x1001b30
	void MulticastMakeHitEffect(struct AActor* HitActor, struct FHitResult HitResult); // Function LF.TrapEntity.MulticastMakeHitEffect // (Net|Native|Event|NetMulticast|Public) // @ game+0x1060d10
	void MulticastMakeAreaEffect(); // Function LF.TrapEntity.MulticastMakeAreaEffect // (Net|Native|Event|NetMulticast|Public) // @ game+0x1001b10
	void MakeAreaEffectImpl(); // Function LF.TrapEntity.MakeAreaEffectImpl // (Final|Native|Public|BlueprintCallable) // @ game+0x1060b50
	bool IsTrapEnd(); // Function LF.TrapEntity.IsTrapEnd // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1060b20
	void GiveAreaDamage(struct FHitResult ImpactResult); // Function LF.TrapEntity.GiveAreaDamage // (Final|Native|Public|HasOutParms) // @ game+0x10606e0
	int32_t GetCurrentAttackCount(); // Function LF.TrapEntity.GetCurrentAttackCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10600c0
	void EndTriggerOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function LF.TrapEntity.EndTriggerOverlap // (Native|Public) // @ game+0x105ff70
	void DecrementAttackCount(); // Function LF.TrapEntity.DecrementAttackCount // (Native|Public|BlueprintCallable) // @ game+0xffd710
	void BeginTriggerOverlapBP(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function LF.TrapEntity.BeginTriggerOverlapBP // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x105fce0
	void BeginTriggerOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function LF.TrapEntity.BeginTriggerOverlap // (Native|Public|HasOutParms) // @ game+0x105fac0
};

// Class LF.AutomaticTrapEntity
// Size: 0x838 (Inherited: 0x720)
struct AAutomaticTrapEntity : ATrapEntity {
	char pad_720[0x38]; // 0x720(0x38)
	bool bIsElectricTrap; // 0x758(0x01)
	char pad_759[0x7]; // 0x759(0x07)
	struct FElectricData ElectricData; // 0x760(0x38)
	struct TArray<struct FElectricSocketConnection> InputSocketConnections; // 0x798(0x10)
	struct TArray<struct FElectricSocketConnection> OutputSocketConnections; // 0x7a8(0x10)
	bool bIsElectricallyBroken; // 0x7b8(0x01)
	char pad_7B9[0x3]; // 0x7b9(0x03)
	float CurrentPowerLoad; // 0x7bc(0x04)
	float CurrentAvailablePower; // 0x7c0(0x04)
	float CurrentUsedPower; // 0x7c4(0x04)
	float CurrentForwardedProvidingPower; // 0x7c8(0x04)
	float CurrentForwardedChargingPower; // 0x7cc(0x04)
	struct UMaterialInterface* SocketInputMaterial_On; // 0x7d0(0x08)
	struct UMaterialInterface* SocketInputMaterial_Off; // 0x7d8(0x08)
	struct UMaterialInterface* SocketOutputMaterial_On; // 0x7e0(0x08)
	struct UMaterialInterface* SocketOutputMaterial_Off; // 0x7e8(0x08)
	struct FElectricSocketConnection EmptySocketConnection; // 0x7f0(0x18)
	struct UElectricityDebugWidgetComponent* DebugWidget; // 0x808(0x08)
	struct UElectricityDebugWidgetComponent* DebugWidgetComponentClass; // 0x810(0x08)
	struct UUserWidget* DebugWidgetClass; // 0x818(0x08)
	struct UMaterialInterface* DebugWidgetMaterial; // 0x820(0x08)
	struct FVector DebugWidgetLocation; // 0x828(0x0c)
	char pad_834[0x4]; // 0x834(0x04)

	void GetElectricOutputSocketSceneProxiesImpl(struct TArray<struct USceneComponent*> OutSocketProxies); // Function LF.AutomaticTrapEntity.GetElectricOutputSocketSceneProxiesImpl // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1395fe0
	void GetElectricInputSocketSceneProxiesImpl(struct TArray<struct USceneComponent*> OutSocketProxies); // Function LF.AutomaticTrapEntity.GetElectricInputSocketSceneProxiesImpl // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1395fe0
};

// Class LF.BirdAI
// Size: 0x28 (Inherited: 0x28)
struct UBirdAI : UInterface {

	void ShuffleBirdTargets(enum class EBirdTargetType TargetType); // Function LF.BirdAI.ShuffleBirdTargets // (Native|Public|BlueprintCallable) // @ game+0xff2f80
	void SetBirdCharacterFlag(enum class EBirdCharacterFlag flag, bool bNewValue); // Function LF.BirdAI.SetBirdCharacterFlag // (Native|Public|BlueprintCallable) // @ game+0xff2eb0
	void PlayBirdAnimation(enum class EBirdAnimation AnimationType); // Function LF.BirdAI.PlayBirdAnimation // (Native|Public|BlueprintCallable) // @ game+0xff2df0
	void OnBirdBehavior(enum class EBirdBehaviorType Behavior); // Function LF.BirdAI.OnBirdBehavior // (Native|Public|BlueprintCallable) // @ game+0xff2d70
	bool IsCurrentPerchOccupied(); // Function LF.BirdAI.IsCurrentPerchOccupied // (Native|Public|BlueprintCallable) // @ game+0x782d40
	float GetFlyAwayProbability(); // Function LF.BirdAI.GetFlyAwayProbability // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xff2c40
	struct FVector GetBirdTargetLocation(enum class EBirdTargetType TargetType); // Function LF.BirdAI.GetBirdTargetLocation // (Native|Public|HasDefaults|BlueprintCallable) // @ game+0xff2ba0
	float GetBirdProperty(enum class EBirdProperty Property); // Function LF.BirdAI.GetBirdProperty // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xff2b10
	struct ULFFlyingAnimalMovementComponent* GetBirdMovement(); // Function LF.BirdAI.GetBirdMovement // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xff2ae0
	struct FName GetBirdKeyName(enum class EBirdBlackboardKeyType KeyType); // Function LF.BirdAI.GetBirdKeyName // (Native|Public|BlueprintCallable) // @ game+0xff2a40
	float GetBirdFloat(enum class EBirdBlackboardKeyType KeyType); // Function LF.BirdAI.GetBirdFloat // (Native|Public|BlueprintCallable) // @ game+0xff29b0
	bool GetBirdFlag(enum class EBirdBlackboardKeyType KeyType); // Function LF.BirdAI.GetBirdFlag // (Native|Public|BlueprintCallable) // @ game+0xff2920
	bool GetBirdCharacterFlag(enum class EBirdCharacterFlag flag); // Function LF.BirdAI.GetBirdCharacterFlag // (Native|Public|BlueprintCallable) // @ game+0xff2890
	struct UBlackboardComponent* GetBirdBlackboard(); // Function LF.BirdAI.GetBirdBlackboard // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xff2860
	bool FindNearestBirdTargets(enum class EBirdTargetType TargetType); // Function LF.BirdAI.FindNearestBirdTargets // (Native|Public|BlueprintCallable) // @ game+0xff27d0
	bool FindFarthestBirdTargets(enum class EBirdTargetType TargetType); // Function LF.BirdAI.FindFarthestBirdTargets // (Native|Public|BlueprintCallable) // @ game+0xff2740
	bool AreAllPerchOccupied(); // Function LF.BirdAI.AreAllPerchOccupied // (Native|Public|BlueprintCallable) // @ game+0x782e20
};

// Class LF.BirdAISpawnLocation
// Size: 0x460 (Inherited: 0x410)
struct ABirdAISpawnLocation : AAISpawnLocation {
	float BirdTargetSearchRadius; // 0x410(0x04)
	char pad_414[0x4]; // 0x414(0x04)
	struct USphereComponent* BirdTargetSphere; // 0x418(0x08)
	struct TArray<struct TSoftObjectPtr<struct ABirdTarget>> BirdTargets; // 0x420(0x10)
	struct TArray<struct TSoftObjectPtr<struct ASkyBirdTarget>> SkyBirdTargets; // 0x430(0x10)
	struct TArray<struct TSoftObjectPtr<struct APerchBirdTarget>> PerchBirdTargets; // 0x440(0x10)
	struct TArray<struct TSoftObjectPtr<struct AGroundBirdTarget>> GroundBirdTargets; // 0x450(0x10)

	void RemoveBirdTarget(struct ABirdTarget* BirdTarget); // Function LF.BirdAISpawnLocation.RemoveBirdTarget // (Final|Native|Public) // @ game+0xff75e0
	void FindBirdTargets(); // Function LF.BirdAISpawnLocation.FindBirdTargets // (Final|Native|Public) // @ game+0xff6630
	void AddBirdTarget(struct ABirdTarget* BirdTarget); // Function LF.BirdAISpawnLocation.AddBirdTarget // (Final|Native|Public) // @ game+0xff64a0
};

// Class LF.BirdTarget
// Size: 0x220 (Inherited: 0x220)
struct ABirdTarget : AActor {
};

// Class LF.BirdTrapBuildingEntity
// Size: 0x738 (Inherited: 0x720)
struct ABirdTrapBuildingEntity : AFarmBuildingEntity {
	float SpawnerDistance; // 0x720(0x04)
	char pad_724[0x4]; // 0x724(0x04)
	struct UChildActorComponent* Perch; // 0x728(0x08)
	struct FTimerHandle Handle; // 0x730(0x08)

	void ServerInitPerchComponent(struct AActor* Actor, struct UChildActorComponent* Comp); // Function LF.BirdTrapBuildingEntity.ServerInitPerchComponent // (Final|Native|Public) // @ game+0xff7880
	void ServerInitPerch(); // Function LF.BirdTrapBuildingEntity.ServerInitPerch // (Final|Native|Public) // @ game+0xff7860
	void RemoveBirdTargetFromSpawner(); // Function LF.BirdTrapBuildingEntity.RemoveBirdTargetFromSpawner // (Final|Native|Public) // @ game+0xff7670
	void AddBirdTargetToSpawners(struct AActor* Actor); // Function LF.BirdTrapBuildingEntity.AddBirdTargetToSpawners // (Final|Native|Public) // @ game+0xff6530
};

// Class LF.BiteDamageType
// Size: 0x40 (Inherited: 0x40)
struct UBiteDamageType : UDamageType {
};

// Class LF.EquipmentEntity
// Size: 0x278 (Inherited: 0x220)
struct AEquipmentEntity : AActor {
	char pad_220[0x20]; // 0x220(0x20)
	struct AActor* EquippingOwner; // 0x240(0x08)
	struct UStaticMeshComponent* EquipmentMesh; // 0x248(0x08)
	bool bPlacedInWorld; // 0x250(0x01)
	bool bIsCosmeticEntity; // 0x251(0x01)
	bool bIsFirstPersonEquipment; // 0x252(0x01)
	bool bHideOnlyMesh; // 0x253(0x01)
	char pad_254[0x4]; // 0x254(0x04)
	struct USceneComponent* Pivot; // 0x258(0x08)
	struct UBoxComponent* EquipmentCollision; // 0x260(0x08)
	bool bIsPooled; // 0x268(0x01)
	bool bCanPooled; // 0x269(0x01)
	bool bCastShadowWithFirstPerson; // 0x26a(0x01)
	char pad_26B[0x1]; // 0x26b(0x01)
	struct FName AttackHitEffectEntityId; // 0x26c(0x08)
	bool bIsEquipmentHidden; // 0x274(0x01)
	bool bIsEquippingOwnerReplicated; // 0x275(0x01)
	char pad_276[0x2]; // 0x276(0x02)

	void OnUnEquip(); // Function LF.EquipmentEntity.OnUnEquip // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnRep_EquippingOwner(); // Function LF.EquipmentEntity.OnRep_EquippingOwner // (Native|Public) // @ game+0x1001b90
	void OnReload(float PlayRate); // Function LF.EquipmentEntity.OnReload // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnFire(); // Function LF.EquipmentEntity.OnFire // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnEquip(); // Function LF.EquipmentEntity.OnEquip // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnCreate(); // Function LF.EquipmentEntity.OnCreate // (Final|Native|Public) // @ game+0x1001b50
	void OnAmmoFull(); // Function LF.EquipmentEntity.OnAmmoFull // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnAmmoEmpty(); // Function LF.EquipmentEntity.OnAmmoEmpty // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void MulticastOnEquip(); // Function LF.EquipmentEntity.MulticastOnEquip // (Net|Native|Event|NetMulticast|Public) // @ game+0x1001ad0
	bool IsEquipmentHidden(); // Function LF.EquipmentEntity.IsEquipmentHidden // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1001a70
	struct UBoxComponent* GetEquipmentCollision(enum class EPoseType Pose); // Function LF.EquipmentEntity.GetEquipmentCollision // (Native|Event|Public|BlueprintEvent|Const) // @ game+0x10018f0
	struct UBoxComponent* GetBlockingBox(); // Function LF.EquipmentEntity.GetBlockingBox // (Native|Event|Public|BlueprintEvent|Const) // @ game+0x10018c0
};

// Class LF.SkeletalEquipmentEntity
// Size: 0x288 (Inherited: 0x278)
struct ASkeletalEquipmentEntity : AEquipmentEntity {
	struct USkeletalMeshComponent* EquipmentSkeletalMesh; // 0x278(0x08)
	struct UAnimInstance* AnimInstance; // 0x280(0x08)
};

// Class LF.BowEquipmentEntity
// Size: 0x290 (Inherited: 0x288)
struct ABowEquipmentEntity : ASkeletalEquipmentEntity {
	float AimAlpha; // 0x288(0x04)
	char pad_28C[0x4]; // 0x28c(0x04)
};

// Class LF.Breakable
// Size: 0x28 (Inherited: 0x28)
struct UBreakable : UInterface {
};

// Class LF.BTDecorator_LFNativeBase
// Size: 0xa0 (Inherited: 0x68)
struct UBTDecorator_LFNativeBase : UBTDecorator {
	struct AAIController* AIOwner; // 0x68(0x08)
	struct AActor* ActorOwner; // 0x70(0x08)
	struct TArray<struct FName> ObservedKeyNames; // 0x78(0x10)
	char pad_88[0x10]; // 0x88(0x10)
	char bShowPropertyDetails : 1; // 0x98(0x01)
	char bCheckConditionOnlyBlackBoardChanges : 1; // 0x98(0x01)
	char bIsObservingBB : 1; // 0x98(0x01)
	char pad_98_3 : 5; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)

	bool IsDecoratorObserverActive(); // Function LF.BTDecorator_LFNativeBase.IsDecoratorObserverActive // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0xff6e20
	bool IsDecoratorExecutionActive(); // Function LF.BTDecorator_LFNativeBase.IsDecoratorExecutionActive // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0xff6df0
};

// Class LF.BTDecorator_LFNearThan
// Size: 0x108 (Inherited: 0xa0)
struct UBTDecorator_LFNearThan : UBTDecorator_LFNativeBase {
	struct FBlackboardKeySelector To; // 0xa0(0x28)
	bool bUseBlackboardForDistanceValue; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)
	struct FBlackboardKeySelector DistanceValueKey; // 0xd0(0x28)
	float DistanceValue; // 0xf8(0x04)
	float DistanceMulti; // 0xfc(0x04)
	float DistanceOffset; // 0x100(0x04)
	bool bUseDistance2D; // 0x104(0x01)
	char pad_105[0x3]; // 0x105(0x03)
};

// Class LF.BTDecorator_LFNearBuildingThan
// Size: 0x108 (Inherited: 0x108)
struct UBTDecorator_LFNearBuildingThan : UBTDecorator_LFNearThan {
};

// Class LF.BTTask_BlueprintAttackBase
// Size: 0xd8 (Inherited: 0xa8)
struct UBTTask_BlueprintAttackBase : UBTTask_BlueprintBase {
	enum class EAttackType AttackType; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
	struct FBlackboardKeySelector ChaseTarget; // 0xb0(0x28)
};

// Class LF.BTTask_BlueprintSetRandomLocationAroundTargetBase
// Size: 0x160 (Inherited: 0xa8)
struct UBTTask_BlueprintSetRandomLocationAroundTargetBase : UBTTask_BlueprintBase {
	struct FBlackboardKeySelector OriginKey; // 0xa8(0x28)
	struct FBlackboardKeySelector ResultKey; // 0xd0(0x28)
	bool bUseBlackboardForMinRadius; // 0xf8(0x01)
	char pad_F9[0x7]; // 0xf9(0x07)
	struct FBlackboardKeySelector MinRadiusKey; // 0x100(0x28)
	float MinRadiusValue; // 0x128(0x04)
	bool bUseBlackboardForMaxRadius; // 0x12c(0x01)
	char pad_12D[0x3]; // 0x12d(0x03)
	struct FBlackboardKeySelector MaxRadiusKey; // 0x130(0x28)
	float MaxRadiusValue; // 0x158(0x04)
	bool bReachable; // 0x15c(0x01)
	char pad_15D[0x3]; // 0x15d(0x03)
};

// Class LF.BTTask_LFClearValue
// Size: 0x98 (Inherited: 0x98)
struct UBTTask_LFClearValue : UBTTask_BlackboardBase {
};

// Class LF.BTTask_LFMoveTo
// Size: 0x120 (Inherited: 0xb0)
struct UBTTask_LFMoveTo : UBTTask_MoveTo {
	enum class ERunType RunType; // 0xb0(0x01)
	char pad_B1[0x3]; // 0xb1(0x03)
	float SpeedMulti; // 0xb4(0x04)
	bool bUseBlackboardForAcceptanceValue; // 0xb8(0x01)
	char pad_B9[0x7]; // 0xb9(0x07)
	struct FBlackboardKeySelector AcceptanceValueKey; // 0xc0(0x28)
	float AcceptanceValue; // 0xe8(0x04)
	bool bUseBlackboardForAcceptanceOffset; // 0xec(0x01)
	char pad_ED[0x3]; // 0xed(0x03)
	struct FBlackboardKeySelector AcceptanceOffsetKey; // 0xf0(0x28)
	float AcceptanceOffset; // 0x118(0x04)
	bool bLookAtTarget; // 0x11c(0x01)
	char pad_11D[0x3]; // 0x11d(0x03)
};

// Class LF.BTTask_LFMoveToBuilding
// Size: 0x120 (Inherited: 0x120)
struct UBTTask_LFMoveToBuilding : UBTTask_LFMoveTo {
};

// Class LF.BTTask_LFSetFlag
// Size: 0x98 (Inherited: 0x98)
struct UBTTask_LFSetFlag : UBTTask_BlackboardBase {
};

// Class LF.BTTask_LFSetTagCooldown
// Size: 0xb0 (Inherited: 0x70)
struct UBTTask_LFSetTagCooldown : UBTTaskNode {
	struct FGameplayTag CooldownTag; // 0x70(0x08)
	bool bAddToExistingDuration; // 0x78(0x01)
	bool bUseBlackboardForCooldownDuration; // 0x79(0x01)
	char pad_7A[0x6]; // 0x7a(0x06)
	struct FBlackboardKeySelector CooldownDurationKey; // 0x80(0x28)
	float CooldownDuration; // 0xa8(0x04)
	float CooldownDurationMulti; // 0xac(0x04)
};

// Class LF.BuffReceiver
// Size: 0x28 (Inherited: 0x28)
struct UBuffReceiver : UInterface {
};

// Class LF.BuildingBlueprint
// Size: 0x448 (Inherited: 0x220)
struct ABuildingBlueprint : AActor {
	struct TArray<struct UStaticMeshComponent*> MeshComponents; // 0x220(0x10)
	struct TArray<struct UBoxComponent*> CollisionBoxComponents; // 0x230(0x10)
	struct TArray<struct UBoxComponent*> CollisionBoxComponentsForPawn; // 0x240(0x10)
	struct FName BuildingConstructEffect; // 0x250(0x08)
	float CornerstoneHeight; // 0x258(0x04)
	float CornerstoneRadius; // 0x25c(0x04)
	struct FVector CollisionRatio; // 0x260(0x0c)
	bool bCollisionAttachToTop; // 0x26c(0x01)
	bool bIsMeshOriginCenter; // 0x26d(0x01)
	bool bCanBuildUpOn; // 0x26e(0x01)
	bool bIsHanged; // 0x26f(0x01)
	bool bHeightWithGrid; // 0x270(0x01)
	bool bXYWithGrid; // 0x271(0x01)
	bool bIsFloor; // 0x272(0x01)
	bool bIsColumn; // 0x273(0x01)
	bool bShouldOnLandscape; // 0x274(0x01)
	char pad_275[0x3]; // 0x275(0x03)
	float HeightDiffTolerance; // 0x278(0x04)
	char pad_27C[0x4]; // 0x27c(0x04)
	struct USceneComponent* RootSceneComponent; // 0x280(0x08)
	struct UBoxComponent* InteractionBox; // 0x288(0x08)
	struct UCapsuleComponent* CornerLU; // 0x290(0x08)
	struct UCapsuleComponent* CornerLD; // 0x298(0x08)
	struct UCapsuleComponent* CornerRU; // 0x2a0(0x08)
	struct UCapsuleComponent* CornerRD; // 0x2a8(0x08)
	struct TArray<struct UCapsuleComponent*> Cornerstones; // 0x2b0(0x10)
	struct FVector OriginalCollisionExtent; // 0x2c0(0x0c)
	struct FVector SocketOffset; // 0x2cc(0x0c)
	struct UMaterialInterface* Material; // 0x2d8(0x08)
	struct FBuildingDataParsed BuildingData; // 0x2e0(0x168)
};

// Class LF.BuildingUpgradeWidget
// Size: 0x268 (Inherited: 0x260)
struct UBuildingUpgradeWidget : UUserWidget {
	struct ULFBuildingComponent* BuildingComponent; // 0x260(0x08)

	void SetUpgradeData(struct FBuildingUpgradeDataParsed UpgradeData); // Function LF.BuildingUpgradeWidget.SetUpgradeData // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1395fe0
};

// Class LF.BuildingWidget
// Size: 0x268 (Inherited: 0x260)
struct UBuildingWidget : UUserWidget {
	struct ULFBuildingComponent* BuildingComponent; // 0x260(0x08)

	void OnCategorySet(enum class EBuildingCategory Category); // Function LF.BuildingWidget.OnCategorySet // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnCategoryInitialized(); // Function LF.BuildingWidget.OnCategoryInitialized // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnCanceled(); // Function LF.BuildingWidget.OnCanceled // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void ClearMaterialSlots(); // Function LF.BuildingWidget.ClearMaterialSlots // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void ClearCategorySlots(); // Function LF.BuildingWidget.ClearCategorySlots // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void AssignCategoryItem(struct TArray<struct FBuildingDataParsed> CategoryItems); // Function LF.BuildingWidget.AssignCategoryItem // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1395fe0
	void AssignBuildingItem(struct FBuildingDataParsed Building); // Function LF.BuildingWidget.AssignBuildingItem // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1395fe0
};

// Class LF.CameraBlockable
// Size: 0x28 (Inherited: 0x28)
struct UCameraBlockable : UInterface {
};

// Class LF.ChainsawDamageType
// Size: 0x40 (Inherited: 0x40)
struct UChainsawDamageType : UDamageType {
};

// Class LF.CharacterActionFlag
// Size: 0x28 (Inherited: 0x28)
struct UCharacterActionFlag : UInterface {
};

// Class LF.CircularWidget
// Size: 0x260 (Inherited: 0x260)
struct UCircularWidget : UUserWidget {

	void SetProgress(float Value); // Function LF.CircularWidget.SetProgress // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
};

// Class LF.CollapsibleTextBlock
// Size: 0x2c8 (Inherited: 0x2a8)
struct UCollapsibleTextBlock : UTextBlock {
	int32_t TextLimit; // 0x2a8(0x04)
	char pad_2AC[0x4]; // 0x2ac(0x04)
	struct FString CollapseReplaceString; // 0x2b0(0x10)
	char pad_2C0[0x8]; // 0x2c0(0x08)
};

// Class LF.CollisionEnabler
// Size: 0x28 (Inherited: 0x28)
struct UCollisionEnabler : UInterface {
};

// Class LF.CommunicationBuildingEntity
// Size: 0x6a0 (Inherited: 0x698)
struct ACommunicationBuildingEntity : ABuildingEntity {
	struct ABuildingEntity* OriginalBuilding; // 0x698(0x08)
};

// Class LF.ComponentSaveInterface
// Size: 0x28 (Inherited: 0x28)
struct UComponentSaveInterface : UInterface {
};

// Class LF.Corpse
// Size: 0x28 (Inherited: 0x28)
struct UCorpse : UInterface {
};

// Class LF.ItemEntity
// Size: 0x4e0 (Inherited: 0x220)
struct AItemEntity : AActor {
	char pad_220[0x38]; // 0x220(0x38)
	struct USceneComponent* SceneRoot; // 0x258(0x08)
	struct UStaticMeshComponent* StaticMeshComponent; // 0x260(0x08)
	struct TArray<struct UMeshComponent*> AllMeshComponents; // 0x268(0x10)
	struct FName EntityDataName; // 0x278(0x08)
	struct FEntityData EntityData; // 0x280(0xe0)
	enum class EInteractionType InteractionType; // 0x360(0x01)
	enum class EInteractionResult InteractionResult; // 0x361(0x01)
	char pad_362[0x6]; // 0x362(0x06)
	struct TArray<struct FName> DropItemNames; // 0x368(0x10)
	bool bIsWorkInProgress; // 0x378(0x01)
	bool bIsPlacedInWorld; // 0x379(0x01)
	bool bIsDynamicItem; // 0x37a(0x01)
	bool bIsBlockingPawn; // 0x37b(0x01)
	bool bIsExistOnlySingle; // 0x37c(0x01)
	bool bIsHiddenEntity; // 0x37d(0x01)
	bool bIsPartialHiddenEntity; // 0x37e(0x01)
	bool bUseCustomCollisionProfile; // 0x37f(0x01)
	int32_t MaxOwningItemSlot; // 0x380(0x04)
	struct FName CollisionProfileName; // 0x384(0x08)
	struct FName AttackableProfileName; // 0x38c(0x08)
	struct FName BlockProfileName; // 0x394(0x08)
	bool bShowFocusOverlay; // 0x39c(0x01)
	char pad_39D[0x3]; // 0x39d(0x03)
	struct TArray<struct ALFCharacterPlayer*> PlayerCharacters; // 0x3a0(0x10)
	float FarDistance; // 0x3b0(0x04)
	char pad_3B4[0xc]; // 0x3b4(0x0c)
	struct FTransform StopTransform; // 0x3c0(0x30)
	struct FVector PrevLocation; // 0x3f0(0x0c)
	bool bStopped; // 0x3fc(0x01)
	struct FGenericTeamId OwnerTeam; // 0x3fd(0x01)
	char pad_3FE[0x2]; // 0x3fe(0x02)
	struct FLFTeamId OwnerTeamId; // 0x400(0x10)
	float NearbyItemDistance; // 0x410(0x04)
	float RespawnCheckRadius; // 0x414(0x04)
	char pad_418[0x28]; // 0x418(0x28)
	struct FMulticastInlineDelegate OnChanged; // 0x440(0x10)
	bool bIsDropped; // 0x450(0x01)
	char pad_451[0x7]; // 0x451(0x07)
	struct FStreamingGameObjectData StreamingData; // 0x458(0x30)
	enum class EStreamingGameObjectState ItemVisibleState; // 0x488(0x01)
	char pad_489[0x3]; // 0x489(0x03)
	struct FGameDate ItemStateChangedDate; // 0x48c(0x10)
	float DroppedAfterSeconds; // 0x49c(0x04)
	float DroppedAfterSimulateTime; // 0x4a0(0x04)
	char pad_4A4[0x4]; // 0x4a4(0x04)
	struct TArray<struct FInventoryItem> OwningItems; // 0x4a8(0x10)
	struct TArray<struct FInventoryItem_Net> OwningItems_Net; // 0x4b8(0x10)
	bool bHasOwningItem; // 0x4c8(0x01)
	char pad_4C9[0x1]; // 0x4c9(0x01)
	bool bIsInteractable; // 0x4ca(0x01)
	char pad_4CB[0x5]; // 0x4cb(0x05)
	struct FMulticastInlineDelegate OnBroken; // 0x4d0(0x10)

	void ServerSetIsInteractable(bool bNewInteractable); // Function LF.ItemEntity.ServerSetIsInteractable // (Final|Native|Public) // @ game+0x1007b00
	void ServerOnInteracted(struct UObject* Subject, enum class EInteractionType Interaction); // Function LF.ItemEntity.ServerOnInteracted // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x1007a30
	void ServerDestroyItem(); // Function LF.ItemEntity.ServerDestroyItem // (Native|Public) // @ game+0x1001b10
	void SaveMeshReferences(); // Function LF.ItemEntity.SaveMeshReferences // (Final|Native|Public) // @ game+0x1007a10
	void OptimizeSimulation(); // Function LF.ItemEntity.OptimizeSimulation // (Native|Public) // @ game+0x10079f0
	void OnRep_OwningItems(); // Function LF.ItemEntity.OnRep_OwningItems // (Final|Native|Private) // @ game+0x10079d0
	void OnRep_IsPartialHiddenEntity(); // Function LF.ItemEntity.OnRep_IsPartialHiddenEntity // (Final|Native|Public) // @ game+0x10079b0
	void OnRep_IsHiddenEntity(); // Function LF.ItemEntity.OnRep_IsHiddenEntity // (Final|Native|Public) // @ game+0x1007990
	void OnRep_IsDropped(); // Function LF.ItemEntity.OnRep_IsDropped // (Native|Protected) // @ game+0x1001bf0
	void OnRep_EntityData(); // Function LF.ItemEntity.OnRep_EntityData // (Final|Native|Public) // @ game+0x1007970
	void OnMakePartialVisible(); // Function LF.ItemEntity.OnMakePartialVisible // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void OnMakePartialInvisible(); // Function LF.ItemEntity.OnMakePartialInvisible // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void OnInteractedBP(enum class EInteractionType Interaction); // Function LF.ItemEntity.OnInteractedBP // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void OnInitializeItemEntity(); // Function LF.ItemEntity.OnInitializeItemEntity // (Native|Event|Public|BlueprintEvent) // @ game+0x1007950
	void OnDropped(); // Function LF.ItemEntity.OnDropped // (Native|Public) // @ game+0x1001b30
	void OnCloseInteraction(); // Function LF.ItemEntity.OnCloseInteraction // (Final|Native|Public) // @ game+0x10077e0
	void MulticastOnInteracted(enum class EInteractionType Interaction); // Function LF.ItemEntity.MulticastOnInteracted // (Net|Native|Event|NetMulticast|Public) // @ game+0x10074a0
	void MakeVisible(); // Function LF.ItemEntity.MakeVisible // (Native|Public) // @ game+0x1001af0
	void MakePartialInvisible(); // Function LF.ItemEntity.MakePartialInvisible // (Native|Public) // @ game+0xff75c0
	void MakeInvisible(); // Function LF.ItemEntity.MakeInvisible // (Native|Public) // @ game+0x1007480
	void LoadMeshIfNone(); // Function LF.ItemEntity.LoadMeshIfNone // (Final|Native|Public) // @ game+0x1007460
	bool IsPlayerFarEnough(); // Function LF.ItemEntity.IsPlayerFarEnough // (Final|Native|Public) // @ game+0x1007430
	bool IsInteractableBP(); // Function LF.ItemEntity.IsInteractableBP // (Native|Event|Public|BlueprintEvent|Const) // @ game+0x1007400
	void InitializeMeshCollisions(); // Function LF.ItemEntity.InitializeMeshCollisions // (Native|Public) // @ game+0x10073e0
	void InitializeEntityData(); // Function LF.ItemEntity.InitializeEntityData // (Final|Native|Public) // @ game+0x10073c0
	bool HasOwningItem(); // Function LF.ItemEntity.HasOwningItem // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1007370
	struct UStaticMeshComponent* GetStaticMeshComponent(); // Function LF.ItemEntity.GetStaticMeshComponent // (Final|Native|Public|Const) // @ game+0x1007350
	struct UMeshComponent* GetMeshComponent(); // Function LF.ItemEntity.GetMeshComponent // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1007320
	struct USceneComponent* GetLootableComponent(); // Function LF.ItemEntity.GetLootableComponent // (Final|Native|Public|Const) // @ game+0x10072e0
	void GetItemsFromDropItemPool(struct TArray<struct FDropData> DropPool, struct UObject* WorldContextObject, struct TArray<struct FInventoryItem> OutItems); // Function LF.ItemEntity.GetItemsFromDropItemPool // (Final|Native|Static|Public|HasOutParms) // @ game+0x1007120
	int32_t GetItemMaxAmount(struct FInventoryItem Item); // Function LF.ItemEntity.GetItemMaxAmount // (Final|Native|Public|HasOutParms|Const) // @ game+0x1007050
	struct FEntityData GetEntityData(); // Function LF.ItemEntity.GetEntityData // (Final|Native|Public|Const) // @ game+0x1007010
	void EmitInteractionEffect(enum class EInteractionType Interaction); // Function LF.ItemEntity.EmitInteractionEffect // (Native|Public) // @ game+0x1006f90
	struct AItemEntity* DropLootItem(struct AItemEntity* LootClass, struct TArray<struct FInventoryItem> Items, struct AActor* Subject, float HeightOffset); // Function LF.ItemEntity.DropLootItem // (Final|Native|Static|Public|HasOutParms) // @ game+0x1006df0
	struct TArray<struct AItemEntity*> DropItems(struct TArray<struct FInventoryItem> Items, struct AActor* Subject, bool bForwardItemToDroppedEntity, float HeightOffset); // Function LF.ItemEntity.DropItems // (Final|Native|Static|Public|HasOutParms) // @ game+0x1006be0
	struct AItemEntity* DropItem(struct FInventoryItem Item, struct AActor* Subject, bool bForwardItemToDroppedEntity, float HeightOffset); // Function LF.ItemEntity.DropItem // (Final|Native|Static|Public|HasOutParms) // @ game+0x1006a30
	void DeoptimizeSimulation(); // Function LF.ItemEntity.DeoptimizeSimulation // (Native|Public) // @ game+0x1006a10
	void CreateItemPool(); // Function LF.ItemEntity.CreateItemPool // (Final|Native|Public) // @ game+0x10069f0
	void ClientOutOfRange(struct UObject* Subject); // Function LF.ItemEntity.ClientOutOfRange // (Net|Native|Event|Public|NetClient) // @ game+0x1006960
	void ClientOpenStoreInventory(struct UObject* Subject); // Function LF.ItemEntity.ClientOpenStoreInventory // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x10068d0
	void ClientOnOutOfRange(); // Function LF.ItemEntity.ClientOnOutOfRange // (Net|Native|Event|Public|NetClient) // @ game+0xcee590
	void ClientOnOutOfFocused(); // Function LF.ItemEntity.ClientOnOutOfFocused // (Net|Native|Event|Public|NetClient) // @ game+0x10068b0
	void ClientOnInRange(struct AActor* SubjectActor); // Function LF.ItemEntity.ClientOnInRange // (Net|Native|Event|Public|NetClient) // @ game+0x1006820
	void ClientOnFocused(); // Function LF.ItemEntity.ClientOnFocused // (Net|Native|Event|Public|NetClient) // @ game+0x1006800
	void ClientInRange(struct UObject* Subject); // Function LF.ItemEntity.ClientInRange // (Net|Native|Event|Public|NetClient) // @ game+0x1006770
	void ChangeCollisionProfile(struct UMeshComponent* MeshComp, struct FName ProfileName); // Function LF.ItemEntity.ChangeCollisionProfile // (Final|Native|Public) // @ game+0x10066a0
	bool CanCreateItems(); // Function LF.ItemEntity.CanCreateItems // (Native|Event|Public|BlueprintEvent) // @ game+0x1006670
};

// Class LF.SkeletalItemEntity
// Size: 0x5e0 (Inherited: 0x4e0)
struct ASkeletalItemEntity : AItemEntity {
	struct USkeletalMeshComponent* SkeletalMeshComponent; // 0x4e0(0x08)
	struct FPoseSnapshot Snapshot; // 0x4e8(0x38)
	struct FName CollisionParentSocket; // 0x520(0x08)
	bool bApplyImpact; // 0x528(0x01)
	char pad_529[0x3]; // 0x529(0x03)
	struct FVector LastImpulse; // 0x52c(0x0c)
	struct FName LastHitBone; // 0x538(0x08)
	struct FVector Velocity; // 0x540(0x0c)
	char pad_54C[0xc]; // 0x54c(0x0c)
	bool bIsSimulating; // 0x558(0x01)
	char pad_559[0x7]; // 0x559(0x07)
	struct USkeletalMeshComponent* SkeletalMeshCompToCopyMaterial; // 0x560(0x08)
	char pad_568[0x8]; // 0x568(0x08)
	struct FTransform SavedTransform; // 0x570(0x30)
	struct FTimerHandle TimerHandle; // 0x5a0(0x08)
	struct FTimerHandle SimulationHandle; // 0x5a8(0x08)
	bool bDestroyOverTime; // 0x5b0(0x01)
	char pad_5B1[0x3]; // 0x5b1(0x03)
	struct FGameDate DroppedDate; // 0x5b4(0x10)
	struct FGameDate DestroyTime; // 0x5c4(0x10)
	char pad_5D4[0xc]; // 0x5d4(0x0c)

	void SetSimulate(); // Function LF.SkeletalItemEntity.SetSimulate // (Final|Native|Public) // @ game+0x105c720
	void OnRep_MeshCompToCopyMaterial(); // Function LF.SkeletalItemEntity.OnRep_MeshCompToCopyMaterial // (Final|Native|Private) // @ game+0x105c200
	void OnRep_IsSimulating(); // Function LF.SkeletalItemEntity.OnRep_IsSimulating // (Final|Native|Private) // @ game+0x105c1e0
	void MulticastSimulateMesh(); // Function LF.SkeletalItemEntity.MulticastSimulateMesh // (Net|Native|Event|NetMulticast|Public) // @ game+0x105c100
	struct UMeshComponent* GetAdditionalCollisionMesh(); // Function LF.SkeletalItemEntity.GetAdditionalCollisionMesh // (Event|Public|BlueprintEvent|Const) // @ game+0x1395fe0
};

// Class LF.CorpseEntity
// Size: 0x5f0 (Inherited: 0x5e0)
struct ACorpseEntity : ASkeletalItemEntity {
	enum class ECorpseType CorpseType; // 0x5e0(0x01)
	char pad_5E1[0xf]; // 0x5e1(0x0f)
};

// Class LF.CorpseSpawner
// Size: 0x28 (Inherited: 0x28)
struct UCorpseSpawner : UInterface {
};

// Class LF.CraftBenchEntity
// Size: 0x6c0 (Inherited: 0x698)
struct ACraftBenchEntity : ABuildingEntity {
	struct FText CraftName; // 0x698(0x18)
	struct TArray<enum class ECraftCategory> CraftCategories; // 0x6b0(0x10)
};

// Class LF.DamageModifier
// Size: 0x28 (Inherited: 0x28)
struct UDamageModifier : UInterface {
};

// Class LF.Debuggable
// Size: 0x28 (Inherited: 0x28)
struct UDebuggable : UInterface {

	void OnDebugFlagChanged(); // Function LF.Debuggable.OnDebugFlagChanged // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xffd640
};

// Class LF.DefenseCondition
// Size: 0x28 (Inherited: 0x28)
struct UDefenseCondition : UInterface {
};

// Class LF.DestructibleEntity
// Size: 0x670 (Inherited: 0x4e0)
struct ADestructibleEntity : AItemEntity {
	char pad_4E0[0x10]; // 0x4e0(0x10)
	float DroppedTime; // 0x4f0(0x04)
	float DroppedRemainTime; // 0x4f4(0x04)
	struct TArray<struct UDecalComponent*> Decals; // 0x4f8(0x10)
	struct UStaticMesh* FoliageStaticMesh; // 0x508(0x08)
	struct UDestructibleComponent* DestructibleComponent; // 0x510(0x08)
	struct UDestructibleMesh* DestructibleMesh; // 0x518(0x08)
	bool bUseDestructibleEntityData; // 0x520(0x01)
	char pad_521[0x3]; // 0x521(0x03)
	float DestructibleDamageThreshold; // 0x524(0x04)
	float DestructibleDamageSpread; // 0x528(0x04)
	float DestructibleMaxChunkSpeed; // 0x52c(0x04)
	float DestructibleDamageCap; // 0x530(0x04)
	float DestructibleDamageRadiusMulti; // 0x534(0x04)
	float DestructibleImpulse; // 0x538(0x04)
	float DestructibleDestroyImpulse; // 0x53c(0x04)
	bool bDestructWhenDestroyed; // 0x540(0x01)
	char pad_541[0x3]; // 0x541(0x03)
	float DestructibleLastBlowRadius; // 0x544(0x04)
	float DestructibleLastMulti; // 0x548(0x04)
	bool bLastBlowHasRadius; // 0x54c(0x01)
	char pad_54D[0x3]; // 0x54d(0x03)
	float VisibleSecondsAfterDestroy; // 0x550(0x04)
	bool bModifyDestructibleAsset; // 0x554(0x01)
	char pad_555[0x3]; // 0x555(0x03)
	struct FTimerHandle DestructibleInvisibleHandle; // 0x558(0x08)
	struct FName DestructibleEntityCollisionProfile; // 0x560(0x08)
	struct FName DestructibleMeshCollisionProfile; // 0x568(0x08)
	struct FName DestructibleCosmeticCollisionProfile; // 0x570(0x08)
	float CheckDistance; // 0x578(0x04)
	float MaxHP; // 0x57c(0x04)
	float CurrentHP; // 0x580(0x04)
	struct FName HitTraitName; // 0x584(0x08)
	struct FName EffectEntityName; // 0x58c(0x08)
	float CheckIntervalSecond; // 0x594(0x04)
	struct FName DestructEffectName; // 0x598(0x08)
	char pad_5A0[0x50]; // 0x5a0(0x50)
	struct TSoftObjectPtr<struct UMaterialInterface> DecalMaterial; // 0x5f0(0x28)
	struct UMaterialInterface* LoadedDecalMat; // 0x618(0x08)
	struct FVector DecalSize; // 0x620(0x0c)
	struct FRotator DecalRotation; // 0x62c(0x0c)
	float DecalLifeSpan; // 0x638(0x04)
	bool bIsDestroyed; // 0x63c(0x01)
	bool bIsInvisible; // 0x63d(0x01)
	char pad_63E[0x2]; // 0x63e(0x02)
	float DestroyedAfterSeconds; // 0x640(0x04)
	float DestroyedAfterSimulateTime; // 0x644(0x04)
	bool bTransientRenderInitialized; // 0x648(0x01)
	char pad_649[0x7]; // 0x649(0x07)
	struct FTimerHandle CheckTimerHandle; // 0x650(0x08)
	char pad_658[0x10]; // 0x658(0x10)
	bool bHasInitialized; // 0x668(0x01)
	char pad_669[0x7]; // 0x669(0x07)

	void OnRep_IsInvisible(); // Function LF.DestructibleEntity.OnRep_IsInvisible // (Native|Protected) // @ game+0xffd730
	void OnRep_IsDestroyed(); // Function LF.DestructibleEntity.OnRep_IsDestroyed // (Native|Protected) // @ game+0xffd710
	void OnMakeDecal(struct UDecalComponent* DecalComponent); // Function LF.DestructibleEntity.OnMakeDecal // (Native|Event|Public|BlueprintEvent) // @ game+0xffd680
	void OnAfterDecalLoaded(); // Function LF.DestructibleEntity.OnAfterDecalLoaded // (Final|Native|Private) // @ game+0xffd620
	void MulticastMakeVisible(); // Function LF.DestructibleEntity.MulticastMakeVisible // (Net|NetReliableNative|Event|NetMulticast|Public) // @ game+0xffd600
	void MulticastEmitDestructEffect(); // Function LF.DestructibleEntity.MulticastEmitDestructEffect // (Net|Native|Event|NetMulticast|Public) // @ game+0xffd5e0
	void MulticastDestructApexEntirely(struct FVector Location, struct FVector Direction); // Function LF.DestructibleEntity.MulticastDestructApexEntirely // (Net|NetReliableNative|Event|NetMulticast|Public|HasDefaults) // @ game+0xffd4f0
	void MulticastApplyDamageToDestructible(float DamageAmount, struct FHitResult DamageHit); // Function LF.DestructibleEntity.MulticastApplyDamageToDestructible // (Net|Native|Event|NetMulticast|Public) // @ game+0xffd3c0
	void MakeInvisibleImpl(); // Function LF.DestructibleEntity.MakeInvisibleImpl // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void CheckFoliage(); // Function LF.DestructibleEntity.CheckFoliage // (Final|Native|Public) // @ game+0xffd250
};

// Class LF.DestructibleLooter
// Size: 0x28 (Inherited: 0x28)
struct UDestructibleLooter : UInterface {
};

// Class LF.DestructiblePropEntity
// Size: 0x680 (Inherited: 0x670)
struct ADestructiblePropEntity : ADestructibleEntity {
	enum class EInteractionType EffectInteraction; // 0x670(0x01)
	char pad_671[0xf]; // 0x671(0x0f)
};

// Class LF.DodgeCondition
// Size: 0x28 (Inherited: 0x28)
struct UDodgeCondition : UInterface {
};

// Class LF.DoorEntity
// Size: 0x760 (Inherited: 0x720)
struct ADoorEntity : ATrapEntity {
	struct AActor* LastInteractedActor; // 0x720(0x08)
	float DoorHP; // 0x728(0x04)
	char pad_72C[0x34]; // 0x72c(0x34)

	struct TArray<struct UStaticMeshComponent*> GetRemainDoorMesh(); // Function LF.DoorEntity.GetRemainDoorMesh // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void CheckDoorCollision(); // Function LF.DoorEntity.CheckDoorCollision // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
};

// Class LF.DropSocketComponent
// Size: 0x200 (Inherited: 0x200)
struct UDropSocketComponent : USceneComponent {
};

// Class LF.EffectEmitter
// Size: 0x28 (Inherited: 0x28)
struct UEffectEmitter : UInterface {
};

// Class LF.ElectricBuildingEntity
// Size: 0x780 (Inherited: 0x698)
struct AElectricBuildingEntity : ABuildingEntity {
	char pad_698[0x20]; // 0x698(0x20)
	struct FElectricData ElectricData; // 0x6b8(0x38)
	struct TArray<struct FElectricSocketConnection> InputSocketConnections; // 0x6f0(0x10)
	struct TArray<struct FElectricSocketConnection> OutputSocketConnections; // 0x700(0x10)
	bool bIsElectricallyBroken; // 0x710(0x01)
	char pad_711[0x7]; // 0x711(0x07)
	struct UMaterialInterface* SocketInputMaterial_On; // 0x718(0x08)
	struct UMaterialInterface* SocketInputMaterial_Off; // 0x720(0x08)
	struct UMaterialInterface* SocketOutputMaterial_On; // 0x728(0x08)
	struct UMaterialInterface* SocketOutputMaterial_Off; // 0x730(0x08)
	struct FElectricSocketConnection EmptySocketConnection; // 0x738(0x18)
	struct UElectricityDebugWidgetComponent* DebugWidget; // 0x750(0x08)
	struct UElectricityDebugWidgetComponent* DebugWidgetComponentClass; // 0x758(0x08)
	struct UUserWidget* DebugWidgetClass; // 0x760(0x08)
	struct UMaterialInterface* DebugWidgetMaterial; // 0x768(0x08)
	struct FVector DebugWidgetLocation; // 0x770(0x0c)
	char pad_77C[0x4]; // 0x77c(0x04)

	void GetElectricOutputSocketSceneProxiesImpl(struct TArray<struct USceneComponent*> OutSocketProxies); // Function LF.ElectricBuildingEntity.GetElectricOutputSocketSceneProxiesImpl // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1395fe0
	void GetElectricInputSocketSceneProxiesImpl(struct TArray<struct USceneComponent*> OutSocketProxies); // Function LF.ElectricBuildingEntity.GetElectricInputSocketSceneProxiesImpl // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1395fe0
};

// Class LF.ElectricRouterEntity
// Size: 0x7a0 (Inherited: 0x780)
struct AElectricRouterEntity : AElectricBuildingEntity {
	char pad_780[0x10]; // 0x780(0x10)
	float CurrentPowerLoad; // 0x790(0x04)
	float CurrentForwardedChargingPower; // 0x794(0x04)
	float CurrentForwardedProvidingPower; // 0x798(0x04)
	char pad_79C[0x4]; // 0x79c(0x04)
};

// Class LF.ElectricSourceEntity
// Size: 0x7c8 (Inherited: 0x7a0)
struct AElectricSourceEntity : AElectricRouterEntity {
	char pad_7A0[0x8]; // 0x7a0(0x08)
	float ChargedPower; // 0x7a8(0x04)
	float CurrentChargedPower; // 0x7ac(0x04)
	float CurrentDischargedPower; // 0x7b0(0x04)
	float CurrentUsedPower; // 0x7b4(0x04)
	float CurrentProvidedPower; // 0x7b8(0x04)
	float CurrentTickOverChargedPower; // 0x7bc(0x04)
	float CurrentTickReturnedPower; // 0x7c0(0x04)
	char pad_7C4[0x4]; // 0x7c4(0x04)
};

// Class LF.ElectricBatteryEntity
// Size: 0x7d8 (Inherited: 0x7c8)
struct AElectricBatteryEntity : AElectricSourceEntity {
	char pad_7C8[0x8]; // 0x7c8(0x08)
	bool bIsReturning; // 0x7d0(0x01)
	char pad_7D1[0x7]; // 0x7d1(0x07)
};

// Class LF.ElectricConnectionActor
// Size: 0x260 (Inherited: 0x220)
struct AElectricConnectionActor : AActor {
	struct USceneComponent* RootSceneComponent; // 0x220(0x08)
	struct USceneComponent* FromSceneComponent; // 0x228(0x08)
	struct USceneComponent* ToSceneComponent; // 0x230(0x08)
	struct FElectricSocketConnection Connection; // 0x238(0x18)
	struct AElectricSocketActor* FromSocket; // 0x250(0x08)
	struct AElectricSocketActor* ToSocket; // 0x258(0x08)

	void OnSetDirection(bool bPositive); // Function LF.ElectricConnectionActor.OnSetDirection // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void OnConnect(); // Function LF.ElectricConnectionActor.OnConnect // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
};

// Class LF.ElectricConnectionToolActor
// Size: 0x238 (Inherited: 0x220)
struct AElectricConnectionToolActor : AActor {
	struct USceneComponent* RootSceneComponent; // 0x220(0x08)
	struct USceneComponent* FromSceneComponent; // 0x228(0x08)
	struct USceneComponent* ToSceneComponent; // 0x230(0x08)

	void OnSetDirection(bool bPositive); // Function LF.ElectricConnectionToolActor.OnSetDirection // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
};

// Class LF.ElectricDeviceEntity
// Size: 0x7b0 (Inherited: 0x7a0)
struct AElectricDeviceEntity : AElectricRouterEntity {
	char pad_7A0[0x8]; // 0x7a0(0x08)
	float CurrentAvailablePower; // 0x7a8(0x04)
	float CurrentUsedPower; // 0x7ac(0x04)
};

// Class LF.ElectricSwitchEntity
// Size: 0x7b8 (Inherited: 0x7b0)
struct AElectricSwitchEntity : AElectricDeviceEntity {
	char pad_7B0[0x8]; // 0x7b0(0x08)

	bool IsSwitchOn(); // Function LF.ElectricSwitchEntity.IsSwitchOn // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1001aa0
};

// Class LF.ElectricPowerSwitchEntity
// Size: 0x7c0 (Inherited: 0x7b8)
struct AElectricPowerSwitchEntity : AElectricSwitchEntity {
	bool bPowerSwitch; // 0x7b8(0x01)
	char pad_7B9[0x7]; // 0x7b9(0x07)

	void TurnSwitch(bool bIsOn); // Function LF.ElectricPowerSwitchEntity.TurnSwitch // (Native|Public) // @ game+0x1001c30
	void OnTurnSwitch(bool bIsOn); // Function LF.ElectricPowerSwitchEntity.OnTurnSwitch // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	bool IsElectricSwitchOn(); // Function LF.ElectricPowerSwitchEntity.IsElectricSwitchOn // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1001a30
};

// Class LF.ElectricControlSwitchEntity
// Size: 0x7d0 (Inherited: 0x7c0)
struct AElectricControlSwitchEntity : AElectricPowerSwitchEntity {
	char pad_7C0[0x8]; // 0x7c0(0x08)
	bool bCanEditEnemyType; // 0x7c8(0x01)
	char EnemyTypeSwitch; // 0x7c9(0x01)
	char pad_7CA[0x6]; // 0x7ca(0x06)

	bool IsActiveDevice(); // Function LF.ElectricControlSwitchEntity.IsActiveDevice // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffd300
};

// Class LF.ElectricControlWidget
// Size: 0x268 (Inherited: 0x260)
struct UElectricControlWidget : UUserWidget {
	struct AActor* ElectricControlActor; // 0x260(0x08)

	void SetSwitchChecked(enum class EEnemyType EnemyType, bool bNewChecked); // Function LF.ElectricControlWidget.SetSwitchChecked // (Final|Native|Public|BlueprintCallable) // @ game+0xffd800
	void RequestTurnOn(bool bTurnOn); // Function LF.ElectricControlWidget.RequestTurnOn // (Final|Native|Public|BlueprintCallable) // @ game+0xffd770
	bool IsSwitchChecked(enum class EEnemyType EnemyType); // Function LF.ElectricControlWidget.IsSwitchChecked // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffd330
	int32_t GetOvercurrentLimit(); // Function LF.ElectricControlWidget.GetOvercurrentLimit // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffd2d0
	int32_t GetCurrentPowerLoad(); // Function LF.ElectricControlWidget.GetCurrentPowerLoad // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffd2a0
	struct AElectricControlSwitchEntity* GetControlSwitch(); // Function LF.ElectricControlWidget.GetControlSwitch // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffd270
};

// Class LF.ElectricGeneratorEntity
// Size: 0x7d0 (Inherited: 0x7c8)
struct AElectricGeneratorEntity : AElectricSourceEntity {
	char pad_7C8[0x8]; // 0x7c8(0x08)

	bool CanGeneratePower(); // Function LF.ElectricGeneratorEntity.CanGeneratePower // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1001730
};

// Class LF.ElectricEnvGeneratorEntity
// Size: 0x7f0 (Inherited: 0x7d0)
struct AElectricEnvGeneratorEntity : AElectricGeneratorEntity {
	int32_t BreakCheckHour; // 0x7d0(0x04)
	float BreakProbability; // 0x7d4(0x04)
	int32_t ElapsedHour; // 0x7d8(0x04)
	bool bIsBroken; // 0x7dc(0x01)
	bool bEnvironmentValid; // 0x7dd(0x01)
	char pad_7DE[0x2]; // 0x7de(0x02)
	float EnvironmentCheckSeconds; // 0x7e0(0x04)
	char pad_7E4[0x4]; // 0x7e4(0x04)
	struct FTimerHandle EnvironmentCheckHandle; // 0x7e8(0x08)

	void OnHourPassed(); // Function LF.ElectricEnvGeneratorEntity.OnHourPassed // (Final|Native|Public) // @ game+0xffd660
	void CheckEnvironment(); // Function LF.ElectricEnvGeneratorEntity.CheckEnvironment // (Native|Public) // @ game+0xffd230
};

// Class LF.ElectricFuelGeneratorEntity
// Size: 0x840 (Inherited: 0x7d0)
struct AElectricFuelGeneratorEntity : AElectricGeneratorEntity {
	char pad_7D0[0x8]; // 0x7d0(0x08)
	float FuelTime; // 0x7d8(0x04)
	float CurrentFuelTime; // 0x7dc(0x04)
	bool bIsFuelLoaded; // 0x7e0(0x01)
	char pad_7E1[0x7]; // 0x7e1(0x07)
	struct TArray<struct FInventoryItem> OwningItems; // 0x7e8(0x10)
	struct TArray<struct FInventoryItem_Net> OwningItems_Net; // 0x7f8(0x10)
	struct FText StoreName; // 0x808(0x18)
	int32_t MaxItemAmount; // 0x820(0x04)
	char pad_824[0x4]; // 0x824(0x04)
	struct TArray<struct FName> StoreFilter; // 0x828(0x10)
	int32_t ItemStoreSlotAmount; // 0x838(0x04)
	char pad_83C[0x4]; // 0x83c(0x04)

	void OnRep_OwningItems(); // Function LF.ElectricFuelGeneratorEntity.OnRep_OwningItems // (Final|Native|Public) // @ game+0xffd750
};

// Class LF.ElectricGateSwitchEntity
// Size: 0x7c0 (Inherited: 0x7b8)
struct AElectricGateSwitchEntity : AElectricSwitchEntity {
	enum class ESwitchGateType GateType; // 0x7b8(0x01)
	bool bGatePassed; // 0x7b9(0x01)
	char pad_7BA[0x6]; // 0x7ba(0x06)
};

// Class LF.ElectricityDebugWidgetComponent
// Size: 0x590 (Inherited: 0x590)
struct UElectricityDebugWidgetComponent : UWidgetComponent {

	void SetSwitch(bool bIsOn); // Function LF.ElectricityDebugWidgetComponent.SetSwitch // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void SetStandbyPower(int32_t StandbyPower); // Function LF.ElectricityDebugWidgetComponent.SetStandbyPower // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void SetSocketType(enum class EElectricSocketType SocketType); // Function LF.ElectricityDebugWidgetComponent.SetSocketType // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void SetSocketConnection(int32_t In, int32_t Out); // Function LF.ElectricityDebugWidgetComponent.SetSocketConnection // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void SetSelfLoad(int32_t Power); // Function LF.ElectricityDebugWidgetComponent.SetSelfLoad // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void SetPowerLoad(int32_t Power); // Function LF.ElectricityDebugWidgetComponent.SetPowerLoad // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void SetPowerDemand(int32_t Power); // Function LF.ElectricityDebugWidgetComponent.SetPowerDemand // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void SetPowerConsumption(int32_t Power); // Function LF.ElectricityDebugWidgetComponent.SetPowerConsumption // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void SetOverloaded(bool bIsOverloaded); // Function LF.ElectricityDebugWidgetComponent.SetOverloaded // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void SetOvercurrentLimit(int32_t Limit); // Function LF.ElectricityDebugWidgetComponent.SetOvercurrentLimit // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void SetMaxPowerCharge(int32_t Power); // Function LF.ElectricityDebugWidgetComponent.SetMaxPowerCharge // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void SetMaxConnection(int32_t In, int32_t Out); // Function LF.ElectricityDebugWidgetComponent.SetMaxConnection // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void SetMaxCharge(int32_t Power); // Function LF.ElectricityDebugWidgetComponent.SetMaxCharge // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void SetForwardedPower(int32_t Power); // Function LF.ElectricityDebugWidgetComponent.SetForwardedPower // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void SetEnemyFilterType(char TypeBits); // Function LF.ElectricityDebugWidgetComponent.SetEnemyFilterType // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void SetCurrentPowerLoad(int32_t Power); // Function LF.ElectricityDebugWidgetComponent.SetCurrentPowerLoad // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void SetChargedPower(int32_t Power); // Function LF.ElectricityDebugWidgetComponent.SetChargedPower // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void SetCanTick(bool bCanTick); // Function LF.ElectricityDebugWidgetComponent.SetCanTick // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void SetCanGeneratePower(bool bCanGeneratePower); // Function LF.ElectricityDebugWidgetComponent.SetCanGeneratePower // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void SetCanForwardPower(bool bCanForward); // Function LF.ElectricityDebugWidgetComponent.SetCanForwardPower // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void SetCanCharge(bool bCanCharge); // Function LF.ElectricityDebugWidgetComponent.SetCanCharge // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void SetBroken(bool bIsBroken); // Function LF.ElectricityDebugWidgetComponent.SetBroken // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void SetAvailablePower(int32_t Power); // Function LF.ElectricityDebugWidgetComponent.SetAvailablePower // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void SetActiveDevice(bool bIsActiveDevice); // Function LF.ElectricityDebugWidgetComponent.SetActiveDevice // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void OnPowerUsed(int32_t Power); // Function LF.ElectricityDebugWidgetComponent.OnPowerUsed // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void OnPowerReturned(int32_t Power); // Function LF.ElectricityDebugWidgetComponent.OnPowerReturned // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void OnPowerProvided(int32_t Power); // Function LF.ElectricityDebugWidgetComponent.OnPowerProvided // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void OnPowerOvercharged(int32_t Power); // Function LF.ElectricityDebugWidgetComponent.OnPowerOvercharged // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void OnPowerGenerated(int32_t Power); // Function LF.ElectricityDebugWidgetComponent.OnPowerGenerated // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void OnPowerDischarged(int32_t Power); // Function LF.ElectricityDebugWidgetComponent.OnPowerDischarged // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void OnPowerCharging(int32_t Power); // Function LF.ElectricityDebugWidgetComponent.OnPowerCharging // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void OnPowerCharged(int32_t Power); // Function LF.ElectricityDebugWidgetComponent.OnPowerCharged // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void OnConstruction(); // Function LF.ElectricityDebugWidgetComponent.OnConstruction // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void OnBatteryPowerDischarged(int32_t Power); // Function LF.ElectricityDebugWidgetComponent.OnBatteryPowerDischarged // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
};

// Class LF.ElectricPedalGeneratorEntity
// Size: 0x7e0 (Inherited: 0x7d0)
struct AElectricPedalGeneratorEntity : AElectricGeneratorEntity {
	struct ALFCharacterPlayer* PedalingPlayer; // 0x7d0(0x08)
	bool bIsGeneratorActive; // 0x7d8(0x01)
	char pad_7D9[0x7]; // 0x7d9(0x07)

	struct FRotator GetPedalWorldRotation(); // Function LF.ElectricPedalGeneratorEntity.GetPedalWorldRotation // (Native|Event|Public|HasDefaults|BlueprintEvent|Const) // @ game+0x10019f0
	struct FVector GetPedalWorldLocation(); // Function LF.ElectricPedalGeneratorEntity.GetPedalWorldLocation // (Native|Event|Public|HasDefaults|BlueprintEvent|Const) // @ game+0x10019b0
};

// Class LF.ElectricPressureSwitchEntity
// Size: 0x7d0 (Inherited: 0x7b8)
struct AElectricPressureSwitchEntity : AElectricSwitchEntity {
	struct UBoxComponent* BoxTrigger; // 0x7b8(0x08)
	struct TArray<struct ALFCharacter*> Characters; // 0x7c0(0x10)

	void EndTriggerOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function LF.ElectricPressureSwitchEntity.EndTriggerOverlap // (Native|Public) // @ game+0x1001770
	void BeginTriggerOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function LF.ElectricPressureSwitchEntity.BeginTriggerOverlap // (Native|Public|HasOutParms) // @ game+0x1001510
};

// Class LF.ElectricSimpleSwitchEntity
// Size: 0x7c0 (Inherited: 0x7c0)
struct AElectricSimpleSwitchEntity : AElectricPowerSwitchEntity {
};

// Class LF.ElectricSocketActor
// Size: 0x238 (Inherited: 0x220)
struct AElectricSocketActor : AActor {
	enum class EElectricSocketDirection SocketDirection; // 0x220(0x01)
	char pad_221[0x7]; // 0x221(0x07)
	struct AActor* SocketOwner; // 0x228(0x08)
	int32_t SocketIndex; // 0x230(0x04)
	char pad_234[0x4]; // 0x234(0x04)

	void OnSetSocketDirection(enum class EElectricSocketDirection InDirection); // Function LF.ElectricSocketActor.OnSetSocketDirection // (Event|Protected|BlueprintEvent) // @ game+0x1395fe0
	void OnFocusOutImpl(); // Function LF.ElectricSocketActor.OnFocusOutImpl // (Event|Protected|BlueprintEvent) // @ game+0x1395fe0
	void OnFocuedImpl(); // Function LF.ElectricSocketActor.OnFocuedImpl // (Event|Protected|BlueprintEvent) // @ game+0x1395fe0
};

// Class LF.ElectricSolarGeneratorEntity
// Size: 0x818 (Inherited: 0x7f0)
struct AElectricSolarGeneratorEntity : AElectricEnvGeneratorEntity {
	struct FGameDate DayStart; // 0x7f0(0x10)
	struct FGameDate DayEnd; // 0x800(0x10)
	bool bDayTime; // 0x810(0x01)
	char pad_811[0x7]; // 0x811(0x07)

	void TickWithNight(float DeltaSeconds); // Function LF.ElectricSolarGeneratorEntity.TickWithNight // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void TickWithGenerate(float DeltaSeconds); // Function LF.ElectricSolarGeneratorEntity.TickWithGenerate // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void TickWithBroken(float DeltaSeconds); // Function LF.ElectricSolarGeneratorEntity.TickWithBroken // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
};

// Class LF.ElectricWindGeneratorEntity
// Size: 0x800 (Inherited: 0x7f0)
struct AElectricWindGeneratorEntity : AElectricEnvGeneratorEntity {
	struct FVector BoxSize; // 0x7f0(0x0c)
	char pad_7FC[0x4]; // 0x7fc(0x04)

	struct FVector GetWindTarget(); // Function LF.ElectricWindGeneratorEntity.GetWindTarget // (Event|Public|HasDefaults|BlueprintEvent|Const) // @ game+0x1395fe0
	struct FVector GetWindPivot(); // Function LF.ElectricWindGeneratorEntity.GetWindPivot // (Event|Public|HasDefaults|BlueprintEvent|Const) // @ game+0x1395fe0
};

// Class LF.EnemySwitch
// Size: 0x28 (Inherited: 0x28)
struct UEnemySwitch : UInterface {
};

// Class LF.Entity
// Size: 0x28 (Inherited: 0x28)
struct UEntity : UInterface {
};

// Class LF.Equipment
// Size: 0x28 (Inherited: 0x28)
struct UEquipment : UInterface {

	struct AActor* GetEquipmentOwner(); // Function LF.Equipment.GetEquipmentOwner // (Native|Public|BlueprintCallable) // @ game+0x1001980
};

// Class LF.EquipmentCondition
// Size: 0x28 (Inherited: 0x28)
struct UEquipmentCondition : UInterface {
};

// Class LF.EquipmentHolder
// Size: 0x28 (Inherited: 0x28)
struct UEquipmentHolder : UInterface {
};

// Class LF.ExplosionDamageType
// Size: 0x40 (Inherited: 0x40)
struct UExplosionDamageType : UDamageType {
};

// Class LF.ExtraStatus
// Size: 0x28 (Inherited: 0x28)
struct UExtraStatus : UInterface {
};

// Class LF.FadeOutActor
// Size: 0x260 (Inherited: 0x220)
struct AFadeOutActor : AActor {
	struct UStaticMeshComponent* StaticMeshComponent; // 0x220(0x08)
	struct UMaterialInterface* FadeMaterial; // 0x228(0x08)
	struct TArray<struct UMaterialInstanceDynamic*> DynamicMaterials; // 0x230(0x10)
	float DissolveSpeed; // 0x240(0x04)
	char pad_244[0x14]; // 0x244(0x14)
	struct FTimerHandle DestroyHandle; // 0x258(0x08)
};

// Class LF.FadeOutDestructibleActor
// Size: 0x278 (Inherited: 0x238)
struct AFadeOutDestructibleActor : ADestructibleActor {
	struct UMaterialInterface* FadeMaterial; // 0x238(0x08)
	struct TArray<struct UMaterialInstanceDynamic*> DynamicMaterials; // 0x240(0x10)
	float DissolveDelay; // 0x250(0x04)
	float DissolveSpeed; // 0x254(0x04)
	char pad_258[0x10]; // 0x258(0x10)
	struct FTimerHandle DissolveHandle; // 0x268(0x08)
	struct FTimerHandle FadeHandle; // 0x270(0x08)
};

// Class LF.FireSocketComponent
// Size: 0x200 (Inherited: 0x200)
struct UFireSocketComponent : USceneComponent {
};

// Class LF.FirstPersonCharacter
// Size: 0x28 (Inherited: 0x28)
struct UFirstPersonCharacter : UInterface {
};

// Class LF.GameDataManager
// Size: 0x9f8 (Inherited: 0x28)
struct UGameDataManager : UObject {
	struct TMap<struct FName, struct FEquipmentData> AllEquipmentData; // 0x28(0x50)
	struct TMap<struct FName, struct FEntityData> AllEntityData; // 0x78(0x50)
	struct TMap<struct FName, struct FItemData> AllItemData; // 0xc8(0x50)
	struct TMap<struct FName, struct FElectricData> AllElectricData; // 0x118(0x50)
	struct TMap<struct FName, struct FEquipmentToolData> AllEquipmentToolData; // 0x168(0x50)
	struct TMap<struct FName, struct FTrapModificationData> AllTrapModificationData; // 0x1b8(0x50)
	struct TMap<enum class EEquipmentStatus, float> RelativeUpgradeValues; // 0x208(0x50)
	struct TMap<enum class EEquipmentStatus, float> FixedUpgradeValues; // 0x258(0x50)
	struct FCraftDataParsed EmptyCraftData; // 0x2a8(0x128)
	struct TArray<struct FCraftDataParsed> CraftData; // 0x3d0(0x10)
	struct TMap<enum class ECraftCategory, struct FInventoryItemArray> CraftItems; // 0x3e0(0x50)
	struct FInventoryItemArray EmptyItems; // 0x430(0x10)
	struct FBuildingDataParsed EmptyBuildingData; // 0x440(0x168)
	struct FBuildingDataArray EmptyBuildingArray; // 0x5a8(0x10)
	struct TArray<struct FBuildingDataParsed> BuildingData; // 0x5b8(0x10)
	struct TMap<enum class EBuildingCategory, struct FBuildingDataArray> CategoryBuildings; // 0x5c8(0x50)
	struct FBuildingUpgradeDataParsed EmptyBuildingUpgradeData; // 0x618(0x1f8)
	struct TArray<struct FBuildingUpgradeDataParsed> BuildingUpgradeData; // 0x810(0x10)
	struct TArray<struct FInventoryItem> EmptyMaterials; // 0x820(0x10)
	struct TArray<struct FEntityData> EmptyKeys; // 0x830(0x10)
	struct UDataTable* EntityDataTable; // 0x840(0x08)
	struct UDataTable* EquipmentEntityDataTable; // 0x848(0x08)
	struct UDataTable* ConsumableEntityDataTable; // 0x850(0x08)
	struct UDataTable* MiscEntityDataTable; // 0x858(0x08)
	struct UDataTable* DestructibleEntityDataTable; // 0x860(0x08)
	struct UDataTable* BuildingEntityDataTable; // 0x868(0x08)
	struct UDataTable* BuildingDataTable; // 0x870(0x08)
	struct UDataTable* BuildingReloadDataTable; // 0x878(0x08)
	struct UDataTable* BuildingUpgradeDataTable; // 0x880(0x08)
	struct UDataTable* ItemDataTable; // 0x888(0x08)
	struct UDataTable* ConsumableDataTable; // 0x890(0x08)
	struct UDataTable* ConsumableDietTypeDataTable; // 0x898(0x08)
	struct UDataTable* EquipmentDataTable; // 0x8a0(0x08)
	struct UDataTable* EquipmentAmmoDataTable; // 0x8a8(0x08)
	struct UDataTable* CraftDataTable; // 0x8b0(0x08)
	struct UDataTable* CraftUpgradeDataTable; // 0x8b8(0x08)
	struct UDataTable* CraftDisassembleDataTable; // 0x8c0(0x08)
	struct UDataTable* NoiseDataTable; // 0x8c8(0x08)
	struct UDataTable* InteractionAnimTable; // 0x8d0(0x08)
	struct UDataTable* WeaponTraitDataTable; // 0x8d8(0x08)
	struct UDataTable* HitTraitDataTable; // 0x8e0(0x08)
	struct UDataTable* WeaponAnimationPoolDataTable; // 0x8e8(0x08)
	struct UDataTable* ZombieDataTable; // 0x8f0(0x08)
	struct UDataTable* ZombieEquipmentDataTable; // 0x8f8(0x08)
	struct UDataTable* WaveDataTable; // 0x900(0x08)
	struct UDataTable* RandomWaveDataTable; // 0x908(0x08)
	struct UDataTable* ScreamerRandomWaveDataTable; // 0x910(0x08)
	struct UDataTable* GiantRandomWaveDataTable; // 0x918(0x08)
	struct UDataTable* TimeWaveDataTable; // 0x920(0x08)
	struct UDataTable* AnimalDataTable; // 0x928(0x08)
	struct UDataTable* BirdDataTable; // 0x930(0x08)
	struct UDataTable* EntityEffectsDataTable; // 0x938(0x08)
	struct UDataTable* EffectDataTable; // 0x940(0x08)
	struct UDataTable* EffectSoundDataTable; // 0x948(0x08)
	struct UDataTable* OtherSoundDataTable; // 0x950(0x08)
	struct UDataTable* BuffDataTable; // 0x958(0x08)
	struct UDataTable* BuffEffectDataTable; // 0x960(0x08)
	struct UDataTable* BuffHitDataTable; // 0x968(0x08)
	struct UDataTable* DropDataTable; // 0x970(0x08)
	struct UDataTable* FarmDataTable; // 0x978(0x08)
	struct UDataTable* ResearchDataTable; // 0x980(0x08)
	struct UDataTable* ResearchSkillDataTable; // 0x988(0x08)
	struct UDataTable* UISoundDataTable; // 0x990(0x08)
	struct UDataTable* WeaponSoundDataTable; // 0x998(0x08)
	struct UDataTable* CharacterSoundDataTable; // 0x9a0(0x08)
	struct UDataTable* CharacterSoundTypeDataTable; // 0x9a8(0x08)
	struct UDataTable* PlayerCharacterClassDataTable; // 0x9b0(0x08)
	struct UDataTable* TutorialDataTable; // 0x9b8(0x08)
	struct UDataTable* DifficultyDataTable; // 0x9c0(0x08)
	struct UDataTable* CustomDifficultyRangeTable; // 0x9c8(0x08)
	struct UMultiplayerDifficultyDataAsset* MultiplayerDifficultyDataAsset; // 0x9d0(0x08)
	struct UWaveDifficultyDataAsset* WaveDifficultyDataAsset; // 0x9d8(0x08)
	struct UDataTable* BuildingHitDataTable; // 0x9e0(0x08)
	struct UDataTable* TrapAttackDataTable; // 0x9e8(0x08)
	struct UDataTable* KeyDisplayDataTable; // 0x9f0(0x08)
};

// Class LF.GameDifficultyDataAsset
// Size: 0x30 (Inherited: 0x30)
struct UGameDifficultyDataAsset : UDataAsset {
};

// Class LF.GameEffectManager
// Size: 0x78 (Inherited: 0x28)
struct UGameEffectManager : UObject {
	char pad_28[0x50]; // 0x28(0x50)
};

// Class LF.GameEnvironmentManager
// Size: 0x90 (Inherited: 0x28)
struct UGameEnvironmentManager : UObject {
	struct UDataTable* DestructibleTable; // 0x28(0x08)
	struct TMap<struct UStaticMesh*, struct ADestructibleEntity*> MeshToDestruct; // 0x30(0x50)
	struct TArray<struct UStaticMesh*> CollectibleMeshes; // 0x80(0x10)
};

// Class LF.GameGlobal
// Size: 0x110 (Inherited: 0x28)
struct UGameGlobal : UObject {
	char pad_28[0xe8]; // 0x28(0xe8)
};

// Class LF.GameOptionManager
// Size: 0x30 (Inherited: 0x28)
struct UGameOptionManager : UObject {
	bool bIsCameraShakeEnabled; // 0x28(0x01)
	bool bIsCloseUIOnAttackedEnabled; // 0x29(0x01)
	bool bIsGameKeyGuideEnabled; // 0x2a(0x01)
	char pad_2B[0x5]; // 0x2b(0x05)
};

// Class LF.GameSoundManager
// Size: 0x88 (Inherited: 0x28)
struct UGameSoundManager : UObject {
	char pad_28[0x60]; // 0x28(0x60)

	void OnEffectEmit(struct FName ID, struct FEffectParameters Params); // Function LF.GameSoundManager.OnEffectEmit // (Final|Native|Public) // @ game+0x1007800
	void OnAttachedEffectEmit(struct FName ID, struct FAttachedEffectParameters Params); // Function LF.GameSoundManager.OnAttachedEffectEmit // (Final|Native|Public) // @ game+0x10076a0
};

// Class LF.GameTimeManager
// Size: 0x138 (Inherited: 0xb0)
struct UGameTimeManager : UActorComponent {
	float TimeScale; // 0xb0(0x04)
	struct FGameDate InitialDate; // 0xb4(0x10)
	char pad_C4[0x4]; // 0xc4(0x04)
	struct FMulticastInlineDelegate OnSecondPassed; // 0xc8(0x10)
	struct FMulticastInlineDelegate OnMinutePassed; // 0xd8(0x10)
	struct FMulticastInlineDelegate OnHourPassed; // 0xe8(0x10)
	struct FMulticastInlineDelegate OnDayPassed; // 0xf8(0x10)
	char pad_108[0x4]; // 0x108(0x04)
	struct FGameDate CurrentGameDate; // 0x10c(0x10)
	struct FGameDate PrevGameDate; // 0x11c(0x10)
	int32_t PrevSecond; // 0x12c(0x04)
	bool bIsStarted; // 0x130(0x01)
	char pad_131[0x3]; // 0x131(0x03)
	float PausedSeconds; // 0x134(0x04)

	void UpdateGameDate(); // Function LF.GameTimeManager.UpdateGameDate // (Final|Native|Private) // @ game+0x1007c20
	struct ALFGameModeBase* GetLFGameMode(); // Function LF.GameTimeManager.GetLFGameMode // (Final|Native|Private) // @ game+0x10072b0
};

// Class LF.GroundBirdTarget
// Size: 0x220 (Inherited: 0x220)
struct AGroundBirdTarget : ABirdTarget {
};

// Class LF.HandCondition
// Size: 0x28 (Inherited: 0x28)
struct UHandCondition : UInterface {
};

// Class LF.HitCondition
// Size: 0x28 (Inherited: 0x28)
struct UHitCondition : UInterface {
};

// Class LF.Hittable
// Size: 0x28 (Inherited: 0x28)
struct UHittable : UInterface {

	void NotifyNextAttackTraits(struct TArray<struct FName> Traits); // Function LF.Hittable.NotifyNextAttackTraits // (Native|Public|BlueprintCallable) // @ game+0x10075b0
	void NotifyAttacker(struct AActor* Attacker); // Function LF.Hittable.NotifyAttacker // (Native|Public|BlueprintCallable) // @ game+0x1007520
};

// Class LF.Hook
// Size: 0x28 (Inherited: 0x28)
struct UHook : UInterface {
};

// Class LF.IndicatorWidget
// Size: 0x288 (Inherited: 0x260)
struct UIndicatorWidget : UUserWidget {
	char pad_260[0x10]; // 0x260(0x10)
	struct ULFInventoryComponent* InventoryComponent; // 0x270(0x08)
	struct ULFCharacterEquipmentComponent* EquipmentComponent; // 0x278(0x08)
	struct ULFCharacterStatusComponent* StatusComponent; // 0x280(0x08)

	void UpdateSlots(bool bIsMainWeaponSlotActive, bool bIsSubWeaponSlotActive, bool bIsRangeWeaponSlotActive, bool bIsShieldSlotActive); // Function LF.IndicatorWidget.UpdateSlots // (Final|Native|Public|BlueprintCallable) // @ game+0x1007c40
	void ShowSubWeaponSlot(); // Function LF.IndicatorWidget.ShowSubWeaponSlot // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ShowShieldSlot(); // Function LF.IndicatorWidget.ShowShieldSlot // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ShowRangeWeaponSlot(); // Function LF.IndicatorWidget.ShowRangeWeaponSlot // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ShowMainWeaponSlot(); // Function LF.IndicatorWidget.ShowMainWeaponSlot // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void HideSubWeaponSlot(); // Function LF.IndicatorWidget.HideSubWeaponSlot // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void HideShieldSlot(); // Function LF.IndicatorWidget.HideShieldSlot // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void HideRangeWeaponSlot(); // Function LF.IndicatorWidget.HideRangeWeaponSlot // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void HideMainWeaponSlot(); // Function LF.IndicatorWidget.HideMainWeaponSlot // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void HideAllSlots(); // Function LF.IndicatorWidget.HideAllSlots // (Final|Native|Public|BlueprintCallable) // @ game+0x10073a0
};

// Class LF.Interactable
// Size: 0x28 (Inherited: 0x28)
struct UInteractable : UInterface {
};

// Class LF.InteractableEntity
// Size: 0x28 (Inherited: 0x28)
struct UInteractableEntity : UInterface {
};

// Class LF.InteractionCondition
// Size: 0x28 (Inherited: 0x28)
struct UInteractionCondition : UInterface {
};

// Class LF.InteractionHudWidget
// Size: 0x260 (Inherited: 0x260)
struct UInteractionHudWidget : UUserWidget {

	void SetInteractionInfo(struct FInteractionInfo Info); // Function LF.InteractionHudWidget.SetInteractionInfo // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1395fe0
	void SetInteraction(struct TArray<struct FInteractionParameter> Interactions); // Function LF.InteractionHudWidget.SetInteraction // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1395fe0
	void HideInteractionInfo(); // Function LF.InteractionHudWidget.HideInteractionInfo // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
};

// Class LF.InventoryWidget
// Size: 0x278 (Inherited: 0x260)
struct UInventoryWidget : UUserWidget {
	struct ULFInventoryComponent* Inventory; // 0x260(0x08)
	int32_t ItemSlotAmount; // 0x268(0x04)
	int32_t CurrentSlotIndex; // 0x26c(0x04)
	bool bIsCraftMenuOpened; // 0x270(0x01)
	char pad_271[0x7]; // 0x271(0x07)

	void ToggleCraftMenu(); // Function LF.InventoryWidget.ToggleCraftMenu // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ShowQuickSlots(); // Function LF.InventoryWidget.ShowQuickSlots // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ShowCraftMenu(); // Function LF.InventoryWidget.ShowCraftMenu // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ShowAmountBox(); // Function LF.InventoryWidget.ShowAmountBox // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void SetStoreSlotAmount(int32_t Amount); // Function LF.InventoryWidget.SetStoreSlotAmount // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void SetSlotAmount(int32_t Amount); // Function LF.InventoryWidget.SetSlotAmount // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void SetInventory(struct ULFInventoryComponent* InventoryComponent); // Function LF.InventoryWidget.SetInventory // (Final|Native|Public) // @ game+0x1007b90
	void SetCraftName(struct FText Text); // Function LF.InventoryWidget.SetCraftName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void SetCraftIterAmount(int32_t Amount); // Function LF.InventoryWidget.SetCraftIterAmount // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void RefreshQuickSlots(); // Function LF.InventoryWidget.RefreshQuickSlots // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnUseQuickSlot(int32_t Index); // Function LF.InventoryWidget.OnUseQuickSlot // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnShowStoreInventory(int32_t SlotAmount); // Function LF.InventoryWidget.OnShowStoreInventory // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnShowInventory(); // Function LF.InventoryWidget.OnShowInventory // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnSetStoreProperty(struct FText Name); // Function LF.InventoryWidget.OnSetStoreProperty // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnSelectCategoryItem(struct FInventoryItem SelectedItem); // Function LF.InventoryWidget.OnSelectCategoryItem // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnHideStoreInventory(); // Function LF.InventoryWidget.OnHideStoreInventory // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnHideInventory(); // Function LF.InventoryWidget.OnHideInventory // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnCreateStore(int32_t StoreSlotAmount); // Function LF.InventoryWidget.OnCreateStore // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void HideQuickSlots(); // Function LF.InventoryWidget.HideQuickSlots // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void HideCraftMenu(); // Function LF.InventoryWidget.HideCraftMenu // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void HideAmountBox(); // Function LF.InventoryWidget.HideAmountBox // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void CreateSlots(); // Function LF.InventoryWidget.CreateSlots // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ClearMaterialSlot(); // Function LF.InventoryWidget.ClearMaterialSlot // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ClearCraftSlot(); // Function LF.InventoryWidget.ClearCraftSlot // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void AssignStoreItemToSlot(struct FInventoryItem OwningItems, int32_t SlotIndex); // Function LF.InventoryWidget.AssignStoreItemToSlot // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void AssignMaterialItem(struct TArray<struct FInventoryItem> Material); // Function LF.InventoryWidget.AssignMaterialItem // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void AssignKeyItem(struct TArray<struct FEntityData> KeyItems); // Function LF.InventoryWidget.AssignKeyItem // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void AssignItemToSlot(struct FInventoryItem OwningItems, int32_t SlotIndex); // Function LF.InventoryWidget.AssignItemToSlot // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void AssignEquipmentToSlot(struct FEquipmentData Equipment); // Function LF.InventoryWidget.AssignEquipmentToSlot // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void AssignEquipmentItem(enum class EEquipmentSlot InEquipmentSlot, struct FInventoryItem Item); // Function LF.InventoryWidget.AssignEquipmentItem // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void AssignCraftCategoryItem(struct TArray<struct FInventoryItem> CraftedItems); // Function LF.InventoryWidget.AssignCraftCategoryItem // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
};

// Class LF.ItemOwner
// Size: 0x28 (Inherited: 0x28)
struct UItemOwner : UInterface {
};

// Class LF.StaticItemEntity
// Size: 0x4f0 (Inherited: 0x4e0)
struct AStaticItemEntity : AItemEntity {
	bool bShouldIgnoreOcclusion; // 0x4e0(0x01)
	bool bDestroyOverTime; // 0x4e1(0x01)
	char pad_4E2[0x2]; // 0x4e2(0x02)
	float DroppedTime; // 0x4e4(0x04)
	float DroppedRemainTime; // 0x4e8(0x04)
	char pad_4EC[0x4]; // 0x4ec(0x04)
};

// Class LF.JournalItemEntity
// Size: 0x500 (Inherited: 0x4f0)
struct AJournalItemEntity : AStaticItemEntity {
	int32_t JournalPageIndex; // 0x4f0(0x04)
	int32_t JournalPageIndexOther; // 0x4f4(0x04)
	char pad_4F8[0x8]; // 0x4f8(0x08)
};

// Class LF.KnockdownDamageType
// Size: 0x40 (Inherited: 0x40)
struct UKnockdownDamageType : UDamageType {
};

// Class LF.LevelStreamerActor
// Size: 0x230 (Inherited: 0x220)
struct ALevelStreamerActor : AActor {
	struct TArray<struct FName> StreamingLevels; // 0x220(0x10)

	void OnAllLevelLoaded(); // Function LF.LevelStreamerActor.OnAllLevelLoaded // (Final|Native|Public|BlueprintCallable) // @ game+0x100c390
	void LoadStreamingLevels(); // Function LF.LevelStreamerActor.LoadStreamingLevels // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void LoadNextLevel(); // Function LF.LevelStreamerActor.LoadNextLevel // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	bool IsAllLevelLoaded(); // Function LF.LevelStreamerActor.IsAllLevelLoaded // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x100c360
};

// Class LF.LFActorComponent
// Size: 0xb8 (Inherited: 0xb0)
struct ULFActorComponent : UActorComponent {
	char pad_B0[0x8]; // 0xb0(0x08)

	void ServerPreInitialize(struct ALFCharacter* Owner); // Function LF.LFActorComponent.ServerPreInitialize // (Native|Public) // @ game+0xce9c70
	void ServerPostInitialize(struct ALFCharacter* Owner); // Function LF.LFActorComponent.ServerPostInitialize // (Native|Public) // @ game+0x100c460
	void ServerInitialize(struct ALFCharacter* Owner); // Function LF.LFActorComponent.ServerInitialize // (Native|Public) // @ game+0x100c3d0
	void AfterLoad(); // Function LF.LFActorComponent.AfterLoad // (Native|Public) // @ game+0x100c260
};

// Class LF.LFAchievementComponent
// Size: 0x218 (Inherited: 0xb8)
struct ULFAchievementComponent : ULFActorComponent {
	bool bIsDiet; // 0xb8(0x01)
	bool bIsZoophilist; // 0xb9(0x01)
	bool bIsMeatarian; // 0xba(0x01)
	bool bIsLactoOvo; // 0xbb(0x01)
	bool bHasConsumed; // 0xbc(0x01)
	bool bHasConsumedMeat; // 0xbd(0x01)
	bool bHasConsumedBird; // 0xbe(0x01)
	bool bHasConsumedFish; // 0xbf(0x01)
	bool bHasConsumedEgg; // 0xc0(0x01)
	bool bHasConsumedDairy; // 0xc1(0x01)
	bool bHasConsumedVegetable; // 0xc2(0x01)
	char pad_C3[0x1]; // 0xc3(0x01)
	float MovingDistance; // 0xc4(0x04)
	float MovingDistanceWithTorch; // 0xc8(0x04)
	char pad_CC[0xc]; // 0xcc(0x0c)
	struct TMap<struct FName, struct FName> BuildingNameStatMap; // 0xd8(0x50)
	struct TMap<enum class EBuildingCategory, struct FName> BuildingCategoryStatMap; // 0x128(0x50)
	struct TMap<struct FName, struct FName> CraftNameStatMap; // 0x178(0x50)
	struct TMap<enum class ECraftCategory, struct FName> CraftCategoryStatMap; // 0x1c8(0x50)

	void UnlockAchievementsOnTakeJournal(int32_t JournalPage); // Function LF.LFAchievementComponent.UnlockAchievementsOnTakeJournal // (Final|Native|Private) // @ game+0x100c9d0
	void UnlockAchievementsOnPlayerKillServerOnly(struct UObject* Victim); // Function LF.LFAchievementComponent.UnlockAchievementsOnPlayerKillServerOnly // (Final|Native|Private) // @ game+0x100c940
	void UnlockAchievementsOnPlayerKillClientOnly(struct UObject* Victim); // Function LF.LFAchievementComponent.UnlockAchievementsOnPlayerKillClientOnly // (Final|Native|Private) // @ game+0x100c8b0
	void UnlockAchievementsOnEndGame(bool bSuccess); // Function LF.LFAchievementComponent.UnlockAchievementsOnEndGame // (Final|Native|Private) // @ game+0x100c820
	void UnlockAchievementsOnDayPassed(); // Function LF.LFAchievementComponent.UnlockAchievementsOnDayPassed // (Final|Native|Private) // @ game+0x100c800
	void UnlockAchievementsOnCraft(struct FName CraftItemName, int32_t CraftCount); // Function LF.LFAchievementComponent.UnlockAchievementsOnCraft // (Final|Native|Private|HasOutParms) // @ game+0x100c730
	void UnlockAchievementsOnConsume(struct FName ConsumeItemName); // Function LF.LFAchievementComponent.UnlockAchievementsOnConsume // (Final|Native|Private|HasOutParms) // @ game+0x100c6a0
	void UnlockAchievementsOnBuild(struct FName BuildingName); // Function LF.LFAchievementComponent.UnlockAchievementsOnBuild // (Final|Native|Private|HasOutParms) // @ game+0x100c610
};

// Class LF.LFCharacter
// Size: 0x600 (Inherited: 0x4c0)
struct ALFCharacter : ACharacter {
	char pad_4C0[0x38]; // 0x4c0(0x38)
	struct ULFCharacterStatusComponent* StatusComponent; // 0x4f8(0x08)
	struct ULFCharacterAttackComponent* AttackComponent; // 0x500(0x08)
	struct ULFCharacterHitComponent* HitComponent; // 0x508(0x08)
	struct ULFCharacterBuffComponent* BuffComponent; // 0x510(0x08)
	struct ULFCharacterCorpseComponent* CorpseComponent; // 0x518(0x08)
	struct ULFCharacterDefenseComponent* DefenseComponent; // 0x520(0x08)
	struct ULFCharacterDodgeComponent* DodgeComponent; // 0x528(0x08)
	struct ULFPullableComponent* PullableComponent; // 0x530(0x08)
	struct TArray<struct UWidgetComponent*> DebugWidgets; // 0x538(0x10)
	struct FMulticastInlineDelegate OnChanged; // 0x548(0x10)
	bool bIsSuperArmor; // 0x558(0x01)
	bool bIsRagdoll; // 0x559(0x01)
	char pad_55A[0x2]; // 0x55a(0x02)
	float ImpulseBoost; // 0x55c(0x04)
	float PhysicsBlendSpeed; // 0x560(0x04)
	float PhysicsBlendWeight; // 0x564(0x04)
	struct FName RagdollRoot; // 0x568(0x08)
	struct FVector LastHitLocation; // 0x570(0x0c)
	struct FVector LastImpulse; // 0x57c(0x0c)
	struct FName LastHitBone; // 0x588(0x08)
	struct FDamageEvent LastDamageEvent; // 0x590(0x10)
	struct AActor* LastDamageEventInstigatorActor; // 0x5a0(0x08)
	struct FName HitEffectEntityName; // 0x5a8(0x08)
	struct TArray<struct UAnimationAsset*> LoadedWeaponAnimations; // 0x5b0(0x10)
	struct TArray<struct ULFActorComponent*> LFComponents; // 0x5c0(0x10)
	bool bIsDead; // 0x5d0(0x01)
	char pad_5D1[0x1]; // 0x5d1(0x01)
	enum class ECharacterState CurrentState; // 0x5d2(0x01)
	char pad_5D3[0x19]; // 0x5d3(0x19)
	bool bIsAlreadyCallOnKillClientOnly; // 0x5ec(0x01)
	char pad_5ED[0x3]; // 0x5ed(0x03)
	struct TArray<struct UAudioComponent*> PlayingCharacterSounds; // 0x5f0(0x10)

	void UpdateWeapon(struct AEquipmentEntity* Weapon); // Function LF.LFCharacter.UpdateWeapon // (Native|Public) // @ game+0x1011d70
	void UpdateSubWeapon(struct AEquipmentEntity* SubWeapon); // Function LF.LFCharacter.UpdateSubWeapon // (Native|Public) // @ game+0x1011ce0
	void StopPhysics(); // Function LF.LFCharacter.StopPhysics // (Final|Native|Public|BlueprintCallable) // @ game+0x1011cc0
	void StopFire(); // Function LF.LFCharacter.StopFire // (Native|Public) // @ game+0x1011ca0
	void StartPhysics(bool bApplyImpulse); // Function LF.LFCharacter.StartPhysics // (Final|Native|Public|BlueprintCallable) // @ game+0x1011bf0
	void ServerRequestSpawnFoliage(struct FHitResult Hit, struct AInstancedFoliageActor* FoliageActor, struct UFoliageInstancedStaticMeshComponent* FoliageComponent); // Function LF.LFCharacter.ServerRequestSpawnFoliage // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x1011300
	void ServerDie(); // Function LF.LFCharacter.ServerDie // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x1011210
	void ServerCharacterAnimation(struct UAnimMontage* Anim, float AnimRate); // Function LF.LFCharacter.ServerCharacterAnimation // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x1011130
	void SaveLastImpulse(float DamageAmount, struct FVector Impulse); // Function LF.LFCharacter.SaveLastImpulse // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1010f40
	void SaveLastDamage(float DamageAmount, struct FDamageEvent DamageEvent, struct AController* EventInstigator, struct AActor* DamageCauser); // Function LF.LFCharacter.SaveLastDamage // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1010dc0
	void ReactToHit(struct FName HitBone, struct FVector HitLocation, struct FVector Impulse, float Damage); // Function LF.LFCharacter.ReactToHit // (Event|Public|HasDefaults|BlueprintEvent) // @ game+0x1395fe0
	void PhysicalHitReaction(struct FName Bone, struct FVector ImpulseDirection); // Function LF.LFCharacter.PhysicalHitReaction // (Event|Public|HasOutParms|HasDefaults|BlueprintEvent) // @ game+0x1395fe0
	void OnRep_LastDamageEventInstigatorActor(); // Function LF.LFCharacter.OnRep_LastDamageEventInstigatorActor // (Final|Native|Protected) // @ game+0x1010c10
	void OnRep_IsDead(); // Function LF.LFCharacter.OnRep_IsDead // (Native|Protected) // @ game+0x1010bf0
	void OnDie(); // Function LF.LFCharacter.OnDie // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void OnAfterWeaponAnimationLoadedDeferred(struct TArray<struct TSoftObjectPtr<struct UAnimMontage>> AnimAssets); // Function LF.LFCharacter.OnAfterWeaponAnimationLoadedDeferred // (Final|Native|Protected|HasOutParms) // @ game+0x1010940
	void MulticastPlayDieSound(); // Function LF.LFCharacter.MulticastPlayDieSound // (Net|Native|Event|NetMulticast|Public) // @ game+0x1010740
	void MulticastFadeOutPlayingCharacterSounds(float FadeOutDuration, float FadeVolumeLevel, enum class EAudioFaderCurve FadeCurve); // Function LF.LFCharacter.MulticastFadeOutPlayingCharacterSounds // (Net|Native|Event|NetMulticast|Public|BlueprintCallable) // @ game+0x1010460
	void MulticastClearPlayingCharacterSounds(); // Function LF.LFCharacter.MulticastClearPlayingCharacterSounds // (Net|Native|Event|NetMulticast|Public|BlueprintCallable) // @ game+0x1010440
	void MulticastCharacterAnimation(struct UAnimMontage* Anim, float AnimRate); // Function LF.LFCharacter.MulticastCharacterAnimation // (Net|Native|Event|NetMulticast|Public) // @ game+0x1010360
	bool IsDead(); // Function LF.LFCharacter.IsDead // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x100fec0
	void InitComponents(); // Function LF.LFCharacter.InitComponents // (Native|Public) // @ game+0x100fe20
	enum class ECharacterState GetCharacterState(); // Function LF.LFCharacter.GetCharacterState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x100fa50
	struct FVector GetCharacterFeetLocation(); // Function LF.LFCharacter.GetCharacterFeetLocation // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x100fa10
	void Fire(); // Function LF.LFCharacter.Fire // (Native|Public) // @ game+0x100f9c0
	void ClientOnDie(); // Function LF.LFCharacter.ClientOnDie // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x100f910
};

// Class LF.LFAICharacter
// Size: 0x730 (Inherited: 0x600)
struct ALFAICharacter : ALFCharacter {
	char pad_600[0x30]; // 0x600(0x30)
	bool bIsPooled; // 0x630(0x01)
	enum class ENavigationType NavigationType; // 0x631(0x01)
	bool bForceNavigation; // 0x632(0x01)
	char pad_633[0x5]; // 0x633(0x05)
	struct UNavigationInvokerComponent* NavigationInvoker; // 0x638(0x08)
	bool bNavActivated; // 0x640(0x01)
	char pad_641[0x7]; // 0x641(0x07)
	struct ULFPerformTestComponent* PerformTestComponent; // 0x648(0x08)
	bool bTempTransient; // 0x650(0x01)
	bool bIsOrphan; // 0x651(0x01)
	char pad_652[0x2]; // 0x652(0x02)
	float NearDistanceFromPlayerForDespawn; // 0x654(0x04)
	float FarDistanceFromPlayerForDespawn; // 0x658(0x04)
	float NetDormancyFlushDistance; // 0x65c(0x04)
	float NetDormancyAwakeDistance_Near; // 0x660(0x04)
	float NetDormancyAwakeDistance_Normal; // 0x664(0x04)
	float NetDormancyAwakeDistance_Far; // 0x668(0x04)
	char pad_66C[0x14]; // 0x66c(0x14)
	struct FName HitTraitName; // 0x680(0x08)
	struct FName HeadshotTrait; // 0x688(0x08)
	struct FName HeadBoneName; // 0x690(0x08)
	struct FName SpineBoneName; // 0x698(0x08)
	bool bIsInCombat; // 0x6a0(0x01)
	char pad_6A1[0x3]; // 0x6a1(0x03)
	struct FVector InitialRelativeLocation; // 0x6a4(0x0c)
	struct FRotator InitialRelativeRotation; // 0x6b0(0x0c)
	char pad_6BC[0x4]; // 0x6bc(0x04)
	struct AActor* Spawner; // 0x6c0(0x08)
	struct UNavigationSystemV1* NavSystem; // 0x6c8(0x08)
	struct TArray<struct ALFCharacterPlayer*> PlayerCharacters; // 0x6d0(0x10)
	struct TArray<struct FName> LastHitTrait; // 0x6e0(0x10)
	struct AAIController* AIController; // 0x6f0(0x08)
	struct FVector SpawnedLocation; // 0x6f8(0x0c)
	float SpawnDistance; // 0x704(0x04)
	bool bSpawnInitialized; // 0x708(0x01)
	char pad_709[0x7]; // 0x709(0x07)
	struct FTimerHandle EnsureAIHandle; // 0x710(0x08)
	struct FVector TerritoryCentroid; // 0x718(0x0c)
	float TerritoryRadius; // 0x724(0x04)
	char pad_728[0x8]; // 0x728(0x08)

	void SetSpawnDistance(float Acceptance); // Function LF.LFAICharacter.SetSpawnDistance // (Native|Public|BlueprintCallable) // @ game+0x100c580
	void SetOriginLocation(struct FVector Location); // Function LF.LFAICharacter.SetOriginLocation // (Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x100c4f0
	void OnRep_IsPooled(); // Function LF.LFAICharacter.OnRep_IsPooled // (Final|Native|Public) // @ game+0x100c3b0
	bool IsActivated(); // Function LF.LFAICharacter.IsActivated // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x100c330
	struct FVector GetOriginLocation(); // Function LF.LFAICharacter.GetOriginLocation // (Native|Public|HasDefaults|BlueprintCallable) // @ game+0x100c2b0
	void EnsureStartAIController(); // Function LF.LFAICharacter.EnsureStartAIController // (Final|Native|Public) // @ game+0x100c290
};

// Class LF.LFAIController
// Size: 0x340 (Inherited: 0x328)
struct ALFAIController : AAIController {
	char pad_328[0x8]; // 0x328(0x08)
	float BlockDetectionDistance; // 0x330(0x04)
	float BlockDetectionInterval; // 0x334(0x04)
	int32_t BlockDetectionSampleCount; // 0x338(0x04)
	char pad_33C[0x4]; // 0x33c(0x04)
};

// Class LF.LFAnimalAnimInstance
// Size: 0x2d0 (Inherited: 0x2c0)
struct ULFAnimalAnimInstance : UAnimInstance {
	float PlayerNearDistance; // 0x2b8(0x04)
	bool bNearPlayer; // 0x2bc(0x01)
	struct TArray<struct ALFCharacterPlayer*> PlayerCharacters; // 0x2c0(0x10)
};

// Class LF.LFCharacterAttackComponent
// Size: 0x410 (Inherited: 0xb8)
struct ULFCharacterAttackComponent : ULFActorComponent {
	bool bEmitAttackEffect; // 0xb8(0x01)
	char pad_B9[0x3]; // 0xb9(0x03)
	float ReliableDistance; // 0xbc(0x04)
	bool bShouldBlockThisWeapon; // 0xc0(0x01)
	bool bShouldBlockAttack; // 0xc1(0x01)
	char pad_C2[0x2]; // 0xc2(0x02)
	struct FName BlockedAttackEffectEntityName; // 0xc4(0x08)
	char pad_CC[0x4]; // 0xcc(0x04)
	struct AEquipmentEntity* Weapon; // 0xd0(0x08)
	struct AEquipmentEntity* SubWeapon; // 0xd8(0x08)
	struct FName HitFallbackEffectId; // 0xe0(0x08)
	struct FName CurrentWeaponTrait; // 0xe8(0x08)
	struct FWeaponAnimationPool CurrentWeaponAnimData; // 0xf0(0x180)
	struct FWeaponAnimationData CurrentAttackAnimData; // 0x270(0xb0)
	enum class EPoseType CurrentAttackHand; // 0x320(0x01)
	bool bIsCurrentAttackSpecial; // 0x321(0x01)
	char pad_322[0x6]; // 0x322(0x06)
	struct TArray<struct AActor*> AlreadyCollidedActors; // 0x328(0x10)
	bool bIsAttackTracing; // 0x338(0x01)
	bool bIsOnCooltime; // 0x339(0x01)
	char pad_33A[0x2]; // 0x33a(0x02)
	float AttackAnimationTime; // 0x33c(0x04)
	float CurrentAnimDamageWeight; // 0x340(0x04)
	float CurrentAnimSpeedRate; // 0x344(0x04)
	struct TMap<enum class EAttackResult, float> AttackReboundTimes; // 0x348(0x50)
	struct TArray<struct UFXSystemAsset*> LoadedWeaponFx; // 0x398(0x10)
	struct TArray<struct UFXSystemAsset*> LoadedSubWeaponFx; // 0x3a8(0x10)
	struct TArray<struct USoundBase*> LoadedWeaponSounds; // 0x3b8(0x10)
	struct TArray<struct USoundBase*> LoadedSubWeaponSounds; // 0x3c8(0x10)
	struct FVector PrevTraceLocation_Main; // 0x3d8(0x0c)
	struct FVector CurrentTraceLocation_Main; // 0x3e4(0x0c)
	struct FVector PrevTraceLocation_Sub; // 0x3f0(0x0c)
	struct FVector CurrentTraceLocation_Sub; // 0x3fc(0x0c)
	struct FTimerHandle ClearHandle; // 0x408(0x08)

	void ServerStop(); // Function LF.LFCharacterAttackComponent.ServerStop // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x1011690
	void ServerSpawnFoliageDestructible(struct FHitResult Hit, struct AInstancedFoliageActor* FoliageActor, struct UFoliageInstancedStaticMeshComponent* FoliageComponent); // Function LF.LFCharacterAttackComponent.ServerSpawnFoliageDestructible // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x1011510
	void OnAfterWeaponEffectSoundLoaded(); // Function LF.LFCharacterAttackComponent.OnAfterWeaponEffectSoundLoaded // (Final|Native|Protected) // @ game+0x1010a30
	void OnAfterWeaponEffectLoaded(); // Function LF.LFCharacterAttackComponent.OnAfterWeaponEffectLoaded // (Final|Native|Protected) // @ game+0x1010a10
	void OnAfterSubWeaponEffectSoundLoaded(); // Function LF.LFCharacterAttackComponent.OnAfterSubWeaponEffectSoundLoaded // (Final|Native|Protected) // @ game+0x1010920
	void OnAfterSubWeaponEffectLoaded(); // Function LF.LFCharacterAttackComponent.OnAfterSubWeaponEffectLoaded // (Final|Native|Protected) // @ game+0x1010900
	void MulticastPlayAttackAnimation_Reliable(struct UAnimMontage* AttackMontage, float AnimRate); // Function LF.LFCharacterAttackComponent.MulticastPlayAttackAnimation_Reliable // (Net|NetReliableNative|Event|NetMulticast|Protected) // @ game+0x1010660
	void MulticastPlayAttackAnimation(struct UAnimMontage* AttackMontage, float AnimRate); // Function LF.LFCharacterAttackComponent.MulticastPlayAttackAnimation // (Net|Native|Event|NetMulticast|Protected) // @ game+0x1010580
	void LocalSetWeapon(struct AEquipmentEntity* InWeapon); // Function LF.LFCharacterAttackComponent.LocalSetWeapon // (Final|Native|Public) // @ game+0x1010250
	void LocalSetSubWeapon(struct AEquipmentEntity* InSubWeapon); // Function LF.LFCharacterAttackComponent.LocalSetSubWeapon // (Final|Native|Public) // @ game+0x10101c0
	void LoadWeaponAssets(struct FName EmitterName); // Function LF.LFCharacterAttackComponent.LoadWeaponAssets // (Net|Native|Event|Protected|NetClient) // @ game+0x1010130
	bool IsAttackPaused(); // Function LF.LFCharacterAttackComponent.IsAttackPaused // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x100fe60
	bool IsAttacking(); // Function LF.LFCharacterAttackComponent.IsAttacking // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x100fe90
	void ClearCollidedActors(); // Function LF.LFCharacterAttackComponent.ClearCollidedActors // (Final|Native|Public) // @ game+0x100f8f0
};

// Class LF.LFAnimalAttackComponent
// Size: 0x420 (Inherited: 0x410)
struct ULFAnimalAttackComponent : ULFCharacterAttackComponent {
	struct TArray<struct FName> AttackEquipments; // 0x410(0x10)
};

// Class LF.LFAnimalCharacter
// Size: 0x770 (Inherited: 0x730)
struct ALFAnimalCharacter : ALFAICharacter {
	struct ULFAnimalAttackComponent* AnimalAttack; // 0x730(0x08)
	struct ULFAnimalMovementComponent* AnimalMovement; // 0x738(0x08)
	struct ULFAnimalStatusComponent* AnimalStatus; // 0x740(0x08)
	struct FName Name; // 0x748(0x08)
	struct FName AttackTrait; // 0x750(0x08)
	struct FName SoundCharacterName; // 0x758(0x08)
	struct TArray<struct UPrimitiveComponent*> AdditionalCollision; // 0x760(0x10)

	void OnAnimalTakeDamage(float DamageAmount, struct FDamageEvent DamageEvent, struct AController* EventInstigator, struct AActor* DamageCauser); // Function LF.LFAnimalCharacter.OnAnimalTakeDamage // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1395fe0
	bool GetTargetBP(struct AActor* OutTarget); // Function LF.LFAnimalCharacter.GetTargetBP // (Event|Public|HasOutParms|BlueprintEvent|Const) // @ game+0x1395fe0
	struct UAIPerceptionComponent* GetPerceptionComponentBP(); // Function LF.LFAnimalCharacter.GetPerceptionComponentBP // (Native|Event|Public|BlueprintEvent) // @ game+0x100c300
};

// Class LF.LFAnimalMovementComponent
// Size: 0xb10 (Inherited: 0xb00)
struct ULFAnimalMovementComponent : UCharacterMovementComponent {
	char pad_B00[0x10]; // 0xb00(0x10)
};

// Class LF.LFSkeletalMeshComponent
// Size: 0xed0 (Inherited: 0xed0)
struct ULFSkeletalMeshComponent : USkeletalMeshComponent {
};

// Class LF.LFAnimalSkeletalMeshComponent
// Size: 0xee0 (Inherited: 0xed0)
struct ULFAnimalSkeletalMeshComponent : ULFSkeletalMeshComponent {
	char pad_ED0[0x10]; // 0xed0(0x10)
};

// Class LF.LFCharacterStatusComponent
// Size: 0x148 (Inherited: 0xb8)
struct ULFCharacterStatusComponent : ULFActorComponent {
	float DefaultMaxHealth; // 0xb8(0x04)
	float DefaultDamage; // 0xbc(0x04)
	struct TArray<float> EquipmentStatus; // 0xc0(0x10)
	struct TArray<float> CharacterStatus; // 0xd0(0x10)
	float CharacterHealth; // 0xe0(0x04)
	float CharacterStamina; // 0xe4(0x04)
	struct TArray<struct TScriptInterface<None>> ExtraStatuses; // 0xe8(0x10)
	struct TMap<enum class ECharacterStatus, enum class EEquipmentStatus> MaxStatusMap; // 0xf8(0x50)

	void ServerOnMaxStatChanged(enum class EEquipmentStatus MaxStat, enum class ECharacterStatus CurrentStat, bool bAllowMinusMax); // Function LF.LFCharacterStatusComponent.ServerOnMaxStatChanged // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x1021520
	void ServerModifyEquipmentStatus(enum class EEquipmentStatus Status, float Value); // Function LF.LFCharacterStatusComponent.ServerModifyEquipmentStatus // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x1021450
	void ServerModifyCharacterStatus(enum class ECharacterStatus Status, float Value); // Function LF.LFCharacterStatusComponent.ServerModifyCharacterStatus // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x1021380
	void OnRep_Status(); // Function LF.LFCharacterStatusComponent.OnRep_Status // (Final|Native|Protected) // @ game+0x1020ed0
	void OnRep_Equipment(); // Function LF.LFCharacterStatusComponent.OnRep_Equipment // (Final|Native|Protected) // @ game+0x1020eb0
	void OnRep_CharacterStamina(); // Function LF.LFCharacterStatusComponent.OnRep_CharacterStamina // (Native|Protected) // @ game+0x1020e90
	void ModifyEquipmentStatusImpl(enum class EEquipmentStatus Status, float Value); // Function LF.LFCharacterStatusComponent.ModifyEquipmentStatusImpl // (Native|Protected) // @ game+0x1020cd0
	void ModifyCharacterStatusImpl(enum class ECharacterStatus Status, float Value); // Function LF.LFCharacterStatusComponent.ModifyCharacterStatusImpl // (Native|Protected) // @ game+0x1020c00
	void InitializeMaxStatusMap(); // Function LF.LFCharacterStatusComponent.InitializeMaxStatusMap // (Native|Protected) // @ game+0x1020780
	float GetEquipmentStatus(enum class EEquipmentStatus Status); // Function LF.LFCharacterStatusComponent.GetEquipmentStatus // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10201c0
	float GetCharacterStatusRate(enum class ECharacterStatus Status); // Function LF.LFCharacterStatusComponent.GetCharacterStatusRate // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1020090
	float GetCharacterStatus(enum class ECharacterStatus Status); // Function LF.LFCharacterStatusComponent.GetCharacterStatus // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1020000
};

// Class LF.LFAnimalStatusComponent
// Size: 0x150 (Inherited: 0x148)
struct ULFAnimalStatusComponent : ULFCharacterStatusComponent {
	char pad_148[0x8]; // 0x148(0x08)
};

// Class LF.LFBirdAIController
// Size: 0x348 (Inherited: 0x340)
struct ALFBirdAIController : ALFAIController {
	char pad_340[0x8]; // 0x340(0x08)
};

// Class LF.LFBreakableComponent
// Size: 0xd0 (Inherited: 0xb0)
struct ULFBreakableComponent : UActorComponent {
	struct UDestructibleMesh* DestructibleMesh; // 0xb0(0x08)
	float CollapseDamage; // 0xb8(0x04)
	float DestructImpulse; // 0xbc(0x04)
	float DestructRadius; // 0xc0(0x04)
	struct FName DestructibleCosmeticCollisionProfile; // 0xc4(0x08)
	char pad_CC[0x4]; // 0xcc(0x04)

	void SpawnDestructibleActor(); // Function LF.LFBreakableComponent.SpawnDestructibleActor // (Final|Native|Private) // @ game+0x1011bd0
};

// Class LF.LFBuildingBuffComponent
// Size: 0x168 (Inherited: 0xb0)
struct ULFBuildingBuffComponent : UActorComponent {
	float FireInitialScale; // 0xb0(0x04)
	float FireMaxScale; // 0xb4(0x04)
	int32_t FireTickCount; // 0xb8(0x04)
	int32_t FireTickMaxProgressCount; // 0xbc(0x04)
	int32_t FireProgressMaxCount; // 0xc0(0x04)
	int32_t FirePropagationCount; // 0xc4(0x04)
	int32_t FirePropagationProgress; // 0xc8(0x04)
	char pad_CC[0x4]; // 0xcc(0x04)
	struct TArray<struct FAppliedBuffData> Buffs; // 0xd0(0x10)
	struct TMap<struct FName, struct FParticleArray> BuffEffects; // 0xe0(0x50)
	struct FName FireSoundId; // 0x130(0x08)
	struct UAudioComponent* FireAudio; // 0x138(0x08)
	struct FName ElectricBreakSoundId; // 0x140(0x08)
	struct UAudioComponent* ElectricBreakAudio; // 0x148(0x08)
	struct TArray<struct UFXSystemComponent*> AllParticles; // 0x150(0x10)
	bool bIsInitialized; // 0x160(0x01)
	char pad_161[0x7]; // 0x161(0x07)

	void OnSecondPassed(); // Function LF.LFBuildingBuffComponent.OnSecondPassed // (Final|Native|Protected) // @ game+0x1010c30
	void OnRep_Buffs(); // Function LF.LFBuildingBuffComponent.OnRep_Buffs // (Final|Native|Protected) // @ game+0x1010bd0
};

// Class LF.LFBuildingComponent
// Size: 0x728 (Inherited: 0xb8)
struct ULFBuildingComponent : ULFActorComponent {
	struct FMulticastInlineDelegate OnBuildingComplete; // 0xb8(0x10)
	struct FMulticastInlineDelegate OnDemolish; // 0xc8(0x10)
	struct FMulticastInlineDelegate OnRepair; // 0xd8(0x10)
	struct UObject* LoadedBuildingClass; // 0xe8(0x08)
	struct UObject* LoadedBuildingBlueprintClass; // 0xf0(0x08)
	struct ABuildingEntity* BuildingToUpgrade; // 0xf8(0x08)
	struct FBuildingUpgradeDataParsed CurrentUpgrade; // 0x100(0x1f8)
	struct TArray<enum class EBuildingCategory> WoodCategory; // 0x2f8(0x10)
	struct TArray<enum class EBuildingCategory> StoneCategory; // 0x308(0x10)
	struct TArray<enum class EBuildingCategory> IronCategory; // 0x318(0x10)
	struct TArray<enum class EBuildingCategory> TrapCategory; // 0x328(0x10)
	bool bFixFocusHeight; // 0x338(0x01)
	char pad_339[0x3]; // 0x339(0x03)
	int32_t BuildFocusDistance; // 0x33c(0x04)
	int32_t GridUnit; // 0x340(0x04)
	int32_t AngleUnit; // 0x344(0x04)
	struct FSnapSettings SnapSettings; // 0x348(0x70)
	float InterpSpeed; // 0x3b8(0x04)
	float OtherTeamAreaRadius; // 0x3bc(0x04)
	struct FVector DesiredLocation; // 0x3c0(0x0c)
	struct FRotator DesiredRotation; // 0x3cc(0x0c)
	bool ShouldBlockMovementWhileBuild; // 0x3d8(0x01)
	char pad_3D9[0x3]; // 0x3d9(0x03)
	float BuildTime; // 0x3dc(0x04)
	float UpgradeTime; // 0x3e0(0x04)
	char pad_3E4[0x8]; // 0x3e4(0x08)
	bool bIsBuildable; // 0x3ec(0x01)
	char pad_3ED[0x3]; // 0x3ed(0x03)
	struct FBuildingDataParsed CurrentBuilding; // 0x3f0(0x168)
	struct FBuildingDataParsed CurrentShowingBuilding; // 0x558(0x168)
	struct ABuildingBlueprint* CurrentBlueprint; // 0x6c0(0x08)
	char pad_6C8[0x30]; // 0x6c8(0x30)
	struct UMaterialParameterCollection* MaterialParameterCollection; // 0x6f8(0x08)
	struct UMaterialParameterCollectionInstance* BuildingMPC; // 0x700(0x08)
	struct FName UpgradeEffect; // 0x708(0x08)
	struct FName ConstructEffect; // 0x710(0x08)
	struct FName DefaultBuildingName; // 0x718(0x08)
	struct FTimerHandle UpgradeTimer; // 0x720(0x08)

	void Upgrade(); // Function LF.LFBuildingComponent.Upgrade // (Final|Native|Public) // @ game+0x1011e00
	void StartUpgrade(); // Function LF.LFBuildingComponent.StartUpgrade // (Final|Native|Public|BlueprintCallable) // @ game+0x1011c80
	void SpawnBuildingBlueprint(); // Function LF.LFBuildingComponent.SpawnBuildingBlueprint // (Final|Native|Public) // @ game+0x1011bb0
	void SetCurrentBuilding(struct FBuildingDataParsed BuildingData); // Function LF.LFBuildingComponent.SetCurrentBuilding // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1011920
	void SetBuildingCategory(enum class EBuildingCategory Category); // Function LF.LFBuildingComponent.SetBuildingCategory // (Final|Native|Public|BlueprintCallable) // @ game+0x10118a0
	void ServerUpgrade(struct ABuildingEntity* Building, struct FName UpgradeEntityName, struct TArray<struct FInventoryItem> ReducedMaterials, struct FVector_NetQuantize Location, struct FRotator Rotation); // Function LF.LFBuildingComponent.ServerUpgrade // (Net|NetReliableNative|Event|Public|NetServer|HasDefaults) // @ game+0x10116b0
	void ServerSetBuildEffectName(struct FName Fx); // Function LF.LFBuildingComponent.ServerSetBuildEffectName // (Net|Native|Event|Public|NetServer) // @ game+0x1011480
	void ServerInitSpawnedBuilding(struct ABuildingEntity* SpawnedBuilding, struct FName BuildingEntityName); // Function LF.LFBuildingComponent.ServerInitSpawnedBuilding // (Final|Net|NetReliableNative|Event|Private|NetServer) // @ game+0x1011230
	void ServerBuild(struct FName BuildingNameToSpawn, struct FVector_NetQuantize Location, struct FRotator Rotation); // Function LF.LFBuildingComponent.ServerBuild // (Net|NetReliableNative|Event|Public|NetServer|HasDefaults) // @ game+0x1011020
	void RefreshCategoryItems(); // Function LF.LFBuildingComponent.RefreshCategoryItems // (Final|Native|Public|BlueprintCallable) // @ game+0x1010da0
	void RefreshBuildingItems(); // Function LF.LFBuildingComponent.RefreshBuildingItems // (Final|Native|Public|BlueprintCallable) // @ game+0x1010d80
	void OpenUpgradeWindow(struct FName ID); // Function LF.LFBuildingComponent.OpenUpgradeWindow // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1010cf0
	void OnSetBuildingCategory(); // Function LF.LFBuildingComponent.OnSetBuildingCategory // (Final|Native|Public) // @ game+0x1010c50
	void OnBuildingClassLoaded(); // Function LF.LFBuildingComponent.OnBuildingClassLoaded // (Final|Native|Private) // @ game+0x1010a70
	void OnBuildingBlueprintClassLoaded(); // Function LF.LFBuildingComponent.OnBuildingBlueprintClassLoaded // (Final|Native|Private) // @ game+0x1010a50
	void MulticastUpgradeEffect(struct ABuildingEntity* SpawnedBuilding); // Function LF.LFBuildingComponent.MulticastUpgradeEffect // (Net|Native|Event|NetMulticast|Public) // @ game+0x1010870
	void MulticastSpawnBuildEffect(struct FName EffectName, struct FVector_NetQuantize Location, struct FRotator Rotation); // Function LF.LFBuildingComponent.MulticastSpawnBuildEffect // (Net|Native|Event|NetMulticast|Public|HasDefaults) // @ game+0x1010760
	void MoveBlueprintToDesiredTransform(float DeltaTime); // Function LF.LFBuildingComponent.MoveBlueprintToDesiredTransform // (Final|Native|Protected) // @ game+0x10102e0
	bool IsEnough(struct TArray<struct FEntityData> Keys, struct TArray<struct FInventoryItem> Materials); // Function LF.LFBuildingComponent.IsEnough // (Final|Native|Private|HasOutParms|BlueprintCallable) // @ game+0x100fef0
	void InitializeBuildingWidget(); // Function LF.LFBuildingComponent.InitializeBuildingWidget // (Final|Native|Public) // @ game+0x100fe40
	void GetSkillAppliedMaterials(struct TArray<struct FInventoryItem> InMaterials, struct TArray<struct FInventoryItem> OutMaterials); // Function LF.LFBuildingComponent.GetSkillAppliedMaterials // (Final|Native|Private|HasOutParms|BlueprintCallable) // @ game+0x100fcc0
	int32_t GetMaterialRequireAmount(struct FInventoryItem Material); // Function LF.LFBuildingComponent.GetMaterialRequireAmount // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x100fbf0
	int32_t GetInventoryAmount(struct FEntityData Material); // Function LF.LFBuildingComponent.GetInventoryAmount // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x100fb30
	void GetCurrentBuilding(struct FBuildingDataParsed OutBuildingData); // Function LF.LFBuildingComponent.GetCurrentBuilding // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x100fa80
	enum class EBuildingCategory GetBuildingCategory(); // Function LF.LFBuildingComponent.GetBuildingCategory // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x100f9e0
	void CloseUpgradeWindow(bool bClearData); // Function LF.LFBuildingComponent.CloseUpgradeWindow // (Final|Native|Public|BlueprintCallable) // @ game+0x100f930
	void CancelUpgrade(); // Function LF.LFBuildingComponent.CancelUpgrade // (Final|Native|Public) // @ game+0x100f8d0
	void BuildMode(); // Function LF.LFBuildingComponent.BuildMode // (Final|Native|Public|BlueprintCallable) // @ game+0x100f8b0
	bool Build(); // Function LF.LFBuildingComponent.Build // (Final|Native|Public) // @ game+0x100f880
};

// Class LF.LFCameraShakeComponent
// Size: 0x1a8 (Inherited: 0xb8)
struct ULFCameraShakeComponent : ULFActorComponent {
	struct TMap<enum class EPlayerCameraMode, struct FCameraShakeModePreset> CameraShakeAttackPresets; // 0xb8(0x50)
	struct TMap<enum class EPlayerCameraMode, struct FCameraShakeModePreset> CameraShakeAttackFoliagePresets; // 0x108(0x50)
	struct TMap<enum class EPlayerCameraMode, struct FCameraShakeModePreset> CameraShakeHitPresets; // 0x158(0x50)

	void ShakeCamera(struct TMap<enum class EPlayerCameraMode, struct FCameraShakeModePreset> Presets, float Damage, enum class EPlayerCameraMode CameraMode); // Function LF.LFCameraShakeComponent.ShakeCamera // (Final|Native|Protected|HasOutParms) // @ game+0x10119d0
	void OnTakeDamage(enum class ECharacterHitType HitType); // Function LF.LFCameraShakeComponent.OnTakeDamage // (Final|Native|Public) // @ game+0x1010c70
	void OnGiveDamage(struct FHitResult Hit, float Damage); // Function LF.LFCameraShakeComponent.OnGiveDamage // (Final|Native|Protected|HasOutParms) // @ game+0x1010a90
};

// Class LF.LFCharacterBuffComponent
// Size: 0x180 (Inherited: 0xb8)
struct ULFCharacterBuffComponent : ULFActorComponent {
	char pad_B8[0x8]; // 0xb8(0x08)
	struct TArray<float> BuffEquipmentStatus; // 0xc0(0x10)
	struct FName FireAttachBoneName; // 0xd0(0x08)
	struct TArray<struct FName> FireAttachBoneNames; // 0xd8(0x10)
	struct FVector FireScale; // 0xe8(0x0c)
	int32_t FireTickCount; // 0xf4(0x04)
	int32_t FireTickMaxProgressCount; // 0xf8(0x04)
	char pad_FC[0x4]; // 0xfc(0x04)
	struct TArray<struct FAppliedBuffData> Buffs; // 0x100(0x10)
	struct TMap<struct FName, struct FParticleArray> BuffEffects; // 0x110(0x50)
	struct FName FireSoundId; // 0x160(0x08)
	struct UAudioComponent* FireAudio; // 0x168(0x08)
	struct TArray<struct UFXSystemComponent*> AllParticles; // 0x170(0x10)

	void OnSecondPassed(); // Function LF.LFCharacterBuffComponent.OnSecondPassed // (Final|Native|Public) // @ game+0x1015750
	void OnRep_Buffs(); // Function LF.LFCharacterBuffComponent.OnRep_Buffs // (Final|Native|Private) // @ game+0x1015710
};

// Class LF.LFCharacterConsumableComponent
// Size: 0xc0 (Inherited: 0xb0)
struct ULFCharacterConsumableComponent : UActorComponent {
	struct FMulticastInlineDelegate OnConsume; // 0xb0(0x10)

	void ClientShowConsumeEffect(); // Function LF.LFCharacterConsumableComponent.ClientShowConsumeEffect // (Net|Native|Event|Public|NetClient) // @ game+0x1011bd0
};

// Class LF.LFCharacterCorpseComponent
// Size: 0x160 (Inherited: 0xb8)
struct ULFCharacterCorpseComponent : ULFActorComponent {
	struct TSoftObjectPtr<struct UAnimMontage> DieAnimation; // 0xb8(0x28)
	struct TArray<struct TSoftObjectPtr<struct UAnimMontage>> DieAnimationPool; // 0xe0(0x10)
	struct TArray<struct UAnimMontage*> DieAnimations; // 0xf0(0x10)
	float AnimationEndRatio; // 0x100(0x04)
	bool bStartPhysicsAfterDie; // 0x104(0x01)
	bool bSpawnCorpseAfterDie; // 0x105(0x01)
	char pad_106[0x2]; // 0x106(0x02)
	struct FName CorpseEntityName; // 0x108(0x08)
	float CorpseSimulationDelay; // 0x110(0x04)
	float CorpseDestroySecond; // 0x114(0x04)
	struct UObject* LoadedCorpseClass; // 0x118(0x08)
	struct ASkeletalItemEntity* SkeletalEntity; // 0x120(0x08)
	bool bShouldForwardImpulse; // 0x128(0x01)
	char pad_129[0x7]; // 0x129(0x07)
	struct FTimerHandle DestroyHandle; // 0x130(0x08)
	struct FTimerHandle PhysicsHandle; // 0x138(0x08)
	char pad_140[0x20]; // 0x140(0x20)

	void StartDeadBodyPhysics(); // Function LF.LFCharacterCorpseComponent.StartDeadBodyPhysics // (Final|Native|Public) // @ game+0x1015b80
	void SpawnCorpse(); // Function LF.LFCharacterCorpseComponent.SpawnCorpse // (Native|Public) // @ game+0x1014720
	void Snapshot(); // Function LF.LFCharacterCorpseComponent.Snapshot // (Final|Native|Public) // @ game+0x1015a00
	void OnDie(); // Function LF.LFCharacterCorpseComponent.OnDie // (Native|Public) // @ game+0x1014700
	void OnCorpseClassLoaded(); // Function LF.LFCharacterCorpseComponent.OnCorpseClassLoaded // (Final|Native|Private) // @ game+0x1015170
	void OnAfterDieAnimationLoaded(); // Function LF.LFCharacterCorpseComponent.OnAfterDieAnimationLoaded // (Final|Native|Private) // @ game+0x10150f0
	void DestroyBody(); // Function LF.LFCharacterCorpseComponent.DestroyBody // (Final|Native|Public) // @ game+0x1014740
};

// Class LF.LFCharacterDefenseComponent
// Size: 0xb8 (Inherited: 0xb8)
struct ULFCharacterDefenseComponent : ULFActorComponent {

	bool IsDefending(); // Function LF.LFCharacterDefenseComponent.IsDefending // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1014c90
	float HandleDamage(float InDamage, struct FDamageEvent DamageEvent, struct AController* EventInstigator, struct AActor* DamageCauser, bool bOutSuccess); // Function LF.LFCharacterDefenseComponent.HandleDamage // (Native|Public|HasOutParms) // @ game+0x1014aa0
};

// Class LF.LFCharacterDodgeComponent
// Size: 0xc0 (Inherited: 0xb8)
struct ULFCharacterDodgeComponent : ULFActorComponent {
	char pad_B8[0x8]; // 0xb8(0x08)
};

// Class LF.LFCharacterEquipmentComponent
// Size: 0x1860 (Inherited: 0xb8)
struct ULFCharacterEquipmentComponent : ULFActorComponent {
	char pad_B8[0x8]; // 0xb8(0x08)
	struct FEquipmentData UpperEquipment; // 0xc0(0x150)
	struct FEquipmentData LowerEquipment; // 0x210(0x150)
	struct FEquipmentData OuterEquipment; // 0x360(0x150)
	struct FEquipmentData FootEquipment; // 0x4b0(0x150)
	struct FEquipmentData WeaponEquipment; // 0x600(0x150)
	struct FEquipmentData ToolEquipment; // 0x750(0x150)
	struct FEquipmentData AmmoEquipment; // 0x8a0(0x150)
	struct FEquipmentData FoodBagEquipment; // 0x9f0(0x150)
	struct FEquipmentData AmmoBagEquipment; // 0xb40(0x150)
	struct FEquipmentData MiscBagEquipment; // 0xc90(0x150)
	struct FName WeaponEquipmentName; // 0xde0(0x08)
	struct FName ToolEquipmentName; // 0xde8(0x08)
	struct FName AmmoEquipmentName; // 0xdf0(0x08)
	struct FName FoodBagEquipmentName; // 0xdf8(0x08)
	struct FName AmmoBagEquipmentName; // 0xe00(0x08)
	struct FName MiscBagEquipmentName; // 0xe08(0x08)
	struct AEquipmentEntity* MainWeapon; // 0xe10(0x08)
	struct AEquipmentEntity* SubWeapon; // 0xe18(0x08)
	struct AEquipmentEntity* AmmoActor; // 0xe20(0x08)
	struct FName MainWeaponName; // 0xe28(0x08)
	struct FName SubWeaponName; // 0xe30(0x08)
	struct AEquipmentEntity* FirstPersonMainWeapon; // 0xe38(0x08)
	struct AEquipmentEntity* FirstPersonSubWeapon; // 0xe40(0x08)
	bool bHasBags; // 0xe48(0x01)
	char pad_E49[0x7]; // 0xe49(0x07)
	struct AEquipmentEntity* FoodBagActor; // 0xe50(0x08)
	struct AEquipmentEntity* AmmoBagActor; // 0xe58(0x08)
	struct AEquipmentEntity* MiscBagActor; // 0xe60(0x08)
	struct FName KnifeName; // 0xe68(0x08)
	struct FName LanternName; // 0xe70(0x08)
	struct AEquipmentEntity* KnifeActor; // 0xe78(0x08)
	struct AEquipmentEntity* LanternActor; // 0xe80(0x08)
	struct FName RightUnarmedName; // 0xe88(0x08)
	struct FName LeftUnarmedName; // 0xe90(0x08)
	struct AEquipmentEntity* MainUnarmed; // 0xe98(0x08)
	struct AEquipmentEntity* SubUnarmed; // 0xea0(0x08)
	struct AEquipmentEntity* FirstPersonMainUnarmed; // 0xea8(0x08)
	struct AEquipmentEntity* FirstPersonSubUnarmed; // 0xeb0(0x08)
	struct FEquipmentData MainUnarmedData; // 0xeb8(0x150)
	struct FEquipmentData SubUnarmedData; // 0x1008(0x150)
	struct FEquipmentData CurrentMainWeaponData; // 0x1158(0x150)
	struct FEquipmentData CurrentSubWeaponData; // 0x12a8(0x150)
	struct FName MainUnarmedDataName; // 0x13f8(0x08)
	struct FName SubUnarmedDataName; // 0x1400(0x08)
	struct FName CurrentMainWeaponDataName; // 0x1408(0x08)
	struct FName CurrentSubWeaponDataName; // 0x1410(0x08)
	struct FEquipmentData PendingMainWeaponData; // 0x1418(0x150)
	struct FEquipmentData PendingSubWeaponData; // 0x1568(0x150)
	struct TArray<float> EquipmentStatus; // 0x16b8(0x10)
	char pad_16C8[0x150]; // 0x16c8(0x150)
	struct USkeletalMesh* DefaultUpper; // 0x1818(0x08)
	struct USkeletalMesh* DefaultLower; // 0x1820(0x08)
	struct USkeletalMesh* DefaultOuter; // 0x1828(0x08)
	struct USkeletalMesh* DefaultHead; // 0x1830(0x08)
	struct USkeletalMesh* DefaultHair; // 0x1838(0x08)
	struct USkeletalMesh* DefaultHand; // 0x1840(0x08)
	struct USkeletalMesh* DefaultFoot; // 0x1848(0x08)
	struct USkeletalMesh* DefaultBelt; // 0x1850(0x08)
	char pad_1858[0x8]; // 0x1858(0x08)

	void UnequipSlotWithEquipmentActor(enum class EEquipmentSlot SlotToUnequip); // Function LF.LFCharacterEquipmentComponent.UnequipSlotWithEquipmentActor // (Final|Native|Public) // @ game+0x1015de0
	void UnequipSlotAndStatus(enum class EEquipmentSlot Slot); // Function LF.LFCharacterEquipmentComponent.UnequipSlotAndStatus // (Final|Native|Public) // @ game+0x1015d60
	void UnequipEquipmentActor(struct FEquipmentData EquipmentData); // Function LF.LFCharacterEquipmentComponent.UnequipEquipmentActor // (Final|Native|Public|HasOutParms) // @ game+0x1015c20
	void UnEquipBodySlot(enum class EEquipmentSlot SlotToUnequip); // Function LF.LFCharacterEquipmentComponent.UnEquipBodySlot // (Final|Native|Public) // @ game+0x1015ba0
	struct AEquipmentEntity* SpawnEquipmentEntity(struct USkeletalMeshComponent* Holder, struct UObject* EntityClass, struct FName SocketName, struct FName EntityName); // Function LF.LFCharacterEquipmentComponent.SpawnEquipmentEntity // (Final|Native|Public) // @ game+0x1015a20
	void SetPlayerEquipmentMesh(enum class EEquipmentSlot Slot, struct USkeletalMesh* Mesh); // Function LF.LFCharacterEquipmentComponent.SetPlayerEquipmentMesh // (Final|Native|Public) // @ game+0x1015930
	void ServerSpawnDefaultItem(); // Function LF.LFCharacterEquipmentComponent.ServerSpawnDefaultItem // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x1015910
	void ServerSpawnDefaultEquipment(); // Function LF.LFCharacterEquipmentComponent.ServerSpawnDefaultEquipment // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x10158f0
	void OnSpawnedEquipmentEntity(struct USkeletalMeshComponent* Holder, struct FName SocketName, struct FName EntityName, struct AEquipmentEntity* EntityActor); // Function LF.LFCharacterEquipmentComponent.OnSpawnedEquipmentEntity // (Final|Native|Public) // @ game+0x1015770
	void OnRep_Equipment(); // Function LF.LFCharacterEquipmentComponent.OnRep_Equipment // (Final|Native|Protected) // @ game+0x1015730
	void OnEquipRightHand(struct FEquipmentData EquipmentData, struct UObject* EquipmentEntityClass); // Function LF.LFCharacterEquipmentComponent.OnEquipRightHand // (Final|Native|Public|HasOutParms) // @ game+0x1015570
	void OnEquipMiscBag(struct UObject* EquipmentEntityClass); // Function LF.LFCharacterEquipmentComponent.OnEquipMiscBag // (Final|Native|Public) // @ game+0x10154e0
	void OnEquipLeftHand(struct FEquipmentData EquipmentData, struct UObject* EquipmentEntityClass); // Function LF.LFCharacterEquipmentComponent.OnEquipLeftHand // (Final|Native|Public|HasOutParms) // @ game+0x1015340
	void OnEquipFoodBag(struct UObject* EquipmentEntityClass); // Function LF.LFCharacterEquipmentComponent.OnEquipFoodBag // (Final|Native|Public) // @ game+0x10152b0
	void OnEquipAmmoBag(struct UObject* EquipmentEntityClass); // Function LF.LFCharacterEquipmentComponent.OnEquipAmmoBag // (Final|Native|Public) // @ game+0x1015220
	void OnEquipAmmo(struct UObject* EquipmentEntityClass); // Function LF.LFCharacterEquipmentComponent.OnEquipAmmo // (Final|Native|Public) // @ game+0x1015190
	bool IsWeaponUseEquipmentLocomotion(); // Function LF.LFCharacterEquipmentComponent.IsWeaponUseEquipmentLocomotion // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1014e10
	bool IsUnarmed(); // Function LF.LFCharacterEquipmentComponent.IsUnarmed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1014de0
	bool IsSubWeaponUseEquipmentLocomotion(); // Function LF.LFCharacterEquipmentComponent.IsSubWeaponUseEquipmentLocomotion // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1014db0
	bool IsEquippingTool(); // Function LF.LFCharacterEquipmentComponent.IsEquippingTool // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1014d80
	bool IsEquippingThrowWeapon(); // Function LF.LFCharacterEquipmentComponent.IsEquippingThrowWeapon // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1014d50
	bool IsEquippingRangeWeapon(); // Function LF.LFCharacterEquipmentComponent.IsEquippingRangeWeapon // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1014d20
	bool IsEquippingRangeOrThrowWeapon(); // Function LF.LFCharacterEquipmentComponent.IsEquippingRangeOrThrowWeapon // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1014cf0
	bool IsEquippingBoltActionWeapon(); // Function LF.LFCharacterEquipmentComponent.IsEquippingBoltActionWeapon // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1014cc0
	enum class EWeaponType GetWeaponType(); // Function LF.LFCharacterEquipmentComponent.GetWeaponType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1014a70
	enum class EWeaponPoseType GetWeaponPoseType(); // Function LF.LFCharacterEquipmentComponent.GetWeaponPoseType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1014a40
	float GetWeaponPoseBlendWeight(); // Function LF.LFCharacterEquipmentComponent.GetWeaponPoseBlendWeight // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1014a10
	enum class EWeaponPoseType GetSubWeaponPoseType(); // Function LF.LFCharacterEquipmentComponent.GetSubWeaponPoseType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10149e0
	float GetSubWeaponPoseBlendWeight(); // Function LF.LFCharacterEquipmentComponent.GetSubWeaponPoseBlendWeight // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10149b0
	enum class EPoseType GetPoseType(); // Function LF.LFCharacterEquipmentComponent.GetPoseType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1014980
	struct FName GetCurrentSubWeaponName(); // Function LF.LFCharacterEquipmentComponent.GetCurrentSubWeaponName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1014940
	float GetCurrentRightHandWeight(); // Function LF.LFCharacterEquipmentComponent.GetCurrentRightHandWeight // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1014910
	struct FName GetCurrentMainWeaponName(); // Function LF.LFCharacterEquipmentComponent.GetCurrentMainWeaponName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10148d0
	float GetCurrentLeftHandWeight(); // Function LF.LFCharacterEquipmentComponent.GetCurrentLeftHandWeight // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x10148a0
	void EquipEquipmentActor(struct FEquipmentData EquipmentData); // Function LF.LFCharacterEquipmentComponent.EquipEquipmentActor // (Final|Native|Public|HasOutParms) // @ game+0x1014760
	void ClientUnequipWeapon(); // Function LF.LFCharacterEquipmentComponent.ClientUnequipWeapon // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x1014720
	void ClientUnequipSubWeapon(); // Function LF.LFCharacterEquipmentComponent.ClientUnequipSubWeapon // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x1014700
};

// Class LF.LFCharacterHitComponent
// Size: 0x288 (Inherited: 0xb8)
struct ULFCharacterHitComponent : ULFActorComponent {
	char pad_B8[0x18]; // 0xb8(0x18)
	struct TArray<struct TSoftObjectPtr<struct UAnimMontage>> NoDamageAnimation; // 0xd0(0x10)
	struct TArray<struct TSoftObjectPtr<struct UAnimMontage>> DefaultHitAnimation; // 0xe0(0x10)
	struct TArray<struct TSoftObjectPtr<struct UAnimMontage>> NormalHitAnimation; // 0xf0(0x10)
	struct TArray<struct TSoftObjectPtr<struct UAnimMontage>> BigHitAnimation; // 0x100(0x10)
	struct TArray<struct TSoftObjectPtr<struct UAnimMontage>> LandingAnimations; // 0x110(0x10)
	struct TArray<struct TSoftObjectPtr<struct UAnimMontage>> BurnAnimation; // 0x120(0x10)
	struct TArray<struct TSoftObjectPtr<struct UAnimMontage>> BiteAnimations; // 0x130(0x10)
	struct TArray<struct TSoftObjectPtr<struct UAnimMontage>> ParryHitAnimation; // 0x140(0x10)
	struct TArray<struct TSoftObjectPtr<struct UAnimMontage>> ChainsawHitAnimation; // 0x150(0x10)
	struct UDamageType* LandingDamageClass; // 0x160(0x08)
	float Posture; // 0x168(0x04)
	float NormalPosture; // 0x16c(0x04)
	float BigPosture; // 0x170(0x04)
	float PostureRestorePerSecond; // 0x174(0x04)
	float CurrentPosture; // 0x178(0x04)
	float MaxPosture; // 0x17c(0x04)
	float SuperArmorDamageThreshold; // 0x180(0x04)
	float HitTime; // 0x184(0x04)
	float SecondsAfterLastHit; // 0x188(0x04)
	float MinIntervalSeconds; // 0x18c(0x04)
	bool bRecentlyHit; // 0x190(0x01)
	bool bSuperArmorWhenMove; // 0x191(0x01)
	bool bEndureAnimalAttack; // 0x192(0x01)
	char pad_193[0x5]; // 0x193(0x05)
	struct FTimerHandle PauseTimer; // 0x198(0x08)
	float ReliableDistance; // 0x1a0(0x04)
	char pad_1A4[0x4]; // 0x1a4(0x04)
	struct FString FallbackHitEffectId; // 0x1a8(0x10)
	struct TArray<struct UAnimationAsset*> LoadedHitAnimations; // 0x1b8(0x10)
	struct TArray<struct UFXSystemAsset*> LoadedHitFx; // 0x1c8(0x10)
	struct TArray<struct USoundBase*> LoadedHitSounds; // 0x1d8(0x10)
	char pad_1E8[0xa0]; // 0x1e8(0xa0)

	void ResumeAnimation(); // Function LF.LFCharacterHitComponent.ResumeAnimation // (Final|Native|Public) // @ game+0x10158d0
	void OnAfterHitSoundsLoaded(); // Function LF.LFCharacterHitComponent.OnAfterHitSoundsLoaded // (Final|Native|Public) // @ game+0x1015150
	void OnAfterHitEffectsLoaded(); // Function LF.LFCharacterHitComponent.OnAfterHitEffectsLoaded // (Final|Native|Public) // @ game+0x1015130
	void OnAfterHitAnimationsLoaded(); // Function LF.LFCharacterHitComponent.OnAfterHitAnimationsLoaded // (Final|Native|Public) // @ game+0x1015110
	void MulticastPlayHitSound(enum class ECharacterHitType HitType); // Function LF.LFCharacterHitComponent.MulticastPlayHitSound // (Net|Native|Event|NetMulticast|Public) // @ game+0x1015070
	void MulticastPlayBurnHitSound(); // Function LF.LFCharacterHitComponent.MulticastPlayBurnHitSound // (Net|Native|Event|NetMulticast|Public) // @ game+0x1014700
	void MulticastMakeHitEffect(enum class ECharacterHitType HitType, struct FHitResult Hit); // Function LF.LFCharacterHitComponent.MulticastMakeHitEffect // (Net|Native|Event|NetMulticast|Public) // @ game+0x1014f40
	void MulticastHitAnimation_Reliable(enum class ECharacterHitType HitType); // Function LF.LFCharacterHitComponent.MulticastHitAnimation_Reliable // (Net|NetReliableNative|Event|NetMulticast|Public) // @ game+0x1014ec0
	void MulticastHitAnimation(enum class ECharacterHitType HitType); // Function LF.LFCharacterHitComponent.MulticastHitAnimation // (Net|Native|Event|NetMulticast|Public) // @ game+0x1014e40
};

// Class LF.LFCharacterItemComponent
// Size: 0xb8 (Inherited: 0xb8)
struct ULFCharacterItemComponent : ULFActorComponent {
};

// Class LF.LFCharacterPlayer
// Size: 0xdf0 (Inherited: 0x600)
struct ALFCharacterPlayer : ALFCharacter {
	char pad_600[0x78]; // 0x600(0x78)
	struct ULFPlayerMovementComponent* PlayerMovement; // 0x678(0x08)
	struct ULFPlayerStatusComponent* PlayerStatus; // 0x680(0x08)
	struct ULFPlayerAttackComponent* PlayerAttack; // 0x688(0x08)
	struct ULFPlayerRangeAttackComponent* PlayerRangeAttack; // 0x690(0x08)
	struct ULFPlayerCorpseComponent* PlayerCorpse; // 0x698(0x08)
	struct ULFPlayerHitComponent* PlayerHit; // 0x6a0(0x08)
	struct ULFPlayerDefenseComponent* PlayerDefense; // 0x6a8(0x08)
	struct ULFPlayerDodgeComponent* PlayerDodge; // 0x6b0(0x08)
	struct ULFSpringArmComponent* PlayerSpringArm; // 0x6b8(0x08)
	struct ULFInventoryComponent* InventoryComponent; // 0x6c0(0x08)
	struct ULFCharacterItemComponent* ItemComponent; // 0x6c8(0x08)
	struct ULFCharacterEquipmentComponent* EquipmentComponent; // 0x6d0(0x08)
	struct ULFCharacterConsumableComponent* ConsumableComponent; // 0x6d8(0x08)
	struct ULFCraftComponent* CraftComponent; // 0x6e0(0x08)
	struct ULFBuildingComponent* BuildingComponent; // 0x6e8(0x08)
	struct ULFResearchComponent* ResearchComponent; // 0x6f0(0x08)
	struct ULFCraftRecipeComponent* RecipeComponent; // 0x6f8(0x08)
	struct ULFPassiveSkillComponent* PassiveSkillComponent; // 0x700(0x08)
	struct ULFPlayerFogComponent* FogComponent; // 0x708(0x08)
	struct ULFPlayerJournalComponent* JournalComponent; // 0x710(0x08)
	struct ULFTutorialComponent* TutorialComponent; // 0x718(0x08)
	struct UPostProcessComponent* PostProcessComponent; // 0x720(0x08)
	struct ULFEquipmentSwapAnimComponent* SwapAnimComponent; // 0x728(0x08)
	struct ULFCameraShakeComponent* CameraShakeComponent; // 0x730(0x08)
	struct ULFPlayerAmbientSoundComponent* AmbientSoundComponent; // 0x738(0x08)
	struct UNavigationInvokerComponent* NavigationInvokerComponent; // 0x740(0x08)
	struct ULFAchievementComponent* AchievementComponent; // 0x748(0x08)
	struct ULFCredentialComponent* CredentialComponent; // 0x750(0x08)
	struct ULFSignComponent* SignComponent; // 0x758(0x08)
	struct ULFPlayerAmmoComponent* AmmoComponent; // 0x760(0x08)
	struct ULFPlayerToolComponent* ToolComponent; // 0x768(0x08)
	struct UCameraComponent* FollowCamera; // 0x770(0x08)
	struct ULFSpringArmComponent* CameraBoom; // 0x778(0x08)
	struct UCameraComponent* FirstPersonCamera; // 0x780(0x08)
	char pad_788[0x18]; // 0x788(0x18)
	struct FVector FirstPersonCrouchOffset; // 0x7a0(0x0c)
	float FirstPersonCameraRotationAnimWeight; // 0x7ac(0x04)
	struct TArray<struct UPrimitiveComponent*> AdditionalCollisions; // 0x7b0(0x10)
	struct UBoxComponent* DefenseCollision; // 0x7c0(0x08)
	char pad_7C8[0x8]; // 0x7c8(0x08)
	struct UBoxComponent* AttackBlockLeftCollision; // 0x7d0(0x08)
	struct UBoxComponent* AttackBlockRightCollision; // 0x7d8(0x08)
	struct UCapsuleComponent* InteractionCapsule; // 0x7e0(0x08)
	struct ULFPlayerSkeletalMeshComponent* UpperBodyMesh; // 0x7e8(0x08)
	struct ULFPlayerSkeletalMeshComponent* LowerBodyMesh; // 0x7f0(0x08)
	struct ULFPlayerSkeletalMeshComponent* OuterMesh; // 0x7f8(0x08)
	struct ULFPlayerSkeletalMeshComponent* HeadMesh; // 0x800(0x08)
	struct ULFPlayerSkeletalMeshComponent* HairMesh; // 0x808(0x08)
	bool bHairAttachToHead; // 0x810(0x01)
	char pad_811[0x7]; // 0x811(0x07)
	struct ULFPlayerSkeletalMeshComponent* HandMesh; // 0x818(0x08)
	struct ULFPlayerSkeletalMeshComponent* FootMesh; // 0x820(0x08)
	struct ULFPlayerSkeletalMeshComponent* BeltMesh; // 0x828(0x08)
	struct USceneComponent* LanternSocket; // 0x830(0x08)
	struct USceneComponent* KnifeSocket; // 0x838(0x08)
	struct ULFSkeletalMeshComponent* FirstPersonMasterMesh; // 0x840(0x08)
	struct ULFPlayerFPPSkeletalMeshComponent* FirstPersonBodyMesh; // 0x848(0x08)
	struct ULFSkeletalMeshComponent* FirstPersonFakeLowerMesh; // 0x850(0x08)
	struct ULFSkeletalMeshComponent* FirstPersonFakeFootMesh; // 0x858(0x08)
	bool bInvincible; // 0x860(0x01)
	char pad_861[0x3]; // 0x861(0x03)
	struct FName DemolishWeapon; // 0x864(0x08)
	struct FVector MeshLocation; // 0x86c(0x0c)
	struct FRotator MeshRotation; // 0x878(0x0c)
	char pad_884[0x4]; // 0x884(0x04)
	struct TArray<enum class EPlayerCameraMode> SwitchableCameraModes; // 0x888(0x10)
	enum class EPlayerCameraMode CurrentCameraMode; // 0x898(0x01)
	enum class EPlayerCameraMode ServerCameraMode; // 0x899(0x01)
	char pad_89A[0x6]; // 0x89a(0x06)
	struct TMap<enum class EPlayerCameraMode, struct FPlayerCameraParameters> PlayerCameraSettings; // 0x8a0(0x50)
	struct TMap<enum class EPlayerCameraActionState, float> PlayerCameraLagSettings; // 0x8f0(0x50)
	float CameraLagInterpSpeed; // 0x940(0x04)
	struct FRotator MapCameraRotation; // 0x944(0x0c)
	float MapCameraRotationSpeed; // 0x950(0x04)
	float OverlayRange; // 0x954(0x04)
	float OverlayHalfHeight; // 0x958(0x04)
	float InteractionRange; // 0x95c(0x04)
	float CommunicationTime; // 0x960(0x04)
	float CommunicationMultiplayerTime; // 0x964(0x04)
	bool bIsOnRecoil; // 0x968(0x01)
	char pad_969[0x3]; // 0x969(0x03)
	struct FRotator RecoilRotation; // 0x96c(0x0c)
	struct FRotator RecoilAccumulatedDelta; // 0x978(0x0c)
	float RecoilSpeed; // 0x984(0x04)
	float UnRecoilSpeed; // 0x988(0x04)
	float RecoilDelay; // 0x98c(0x04)
	char pad_990[0x4]; // 0x990(0x04)
	float InputForwardAxisValue; // 0x994(0x04)
	float InputRightAxisValue; // 0x998(0x04)
	float DownwardPitch; // 0x99c(0x04)
	float FocusMaxHeight; // 0x9a0(0x04)
	float FocusMinHeight; // 0x9a4(0x04)
	float FocusHeightUnit; // 0x9a8(0x04)
	float FocusHeight; // 0x9ac(0x04)
	float DefaultTraceDistance; // 0x9b0(0x04)
	float LineTraceDistance; // 0x9b4(0x04)
	float FocusDistance; // 0x9b8(0x04)
	float FocusRadius; // 0x9bc(0x04)
	float CollectibleFoliageDistance; // 0x9c0(0x04)
	char pad_9C4[0x4]; // 0x9c4(0x04)
	struct TArray<enum class EInteractionType> NonTeamInteractions; // 0x9c8(0x10)
	struct TMap<enum class EInteractionType, float> InteractionFocusDistance; // 0x9d8(0x50)
	struct TArray<enum class EInteractionType> BuildingInteractions; // 0xa28(0x10)
	float CurrentInteractionFocusDistance; // 0xa38(0x04)
	float DefaultInteractionFocusDistance; // 0xa3c(0x04)
	float SwimmingInteractionTime; // 0xa40(0x04)
	char pad_A44[0x4]; // 0xa44(0x04)
	struct TArray<struct FName> KnifeName; // 0xa48(0x10)
	struct FMulticastInlineDelegate OnPrePlayerEquipChanged; // 0xa58(0x10)
	struct FMulticastInlineDelegate OnPostPlayerEquipChanged; // 0xa68(0x10)
	struct FMulticastInlineDelegate OnPlayerAttack; // 0xa78(0x10)
	struct FMulticastInlineDelegate OnPlayerGiveDamage; // 0xa88(0x10)
	struct FMulticastInlineDelegate OnPlayerReceiveDamage; // 0xa98(0x10)
	float DeathPenaltyCondition; // 0xaa8(0x04)
	float DeathMinimumCondition; // 0xaac(0x04)
	char pad_AB0[0x8]; // 0xab0(0x08)
	struct FMulticastInlineDelegate OnLightOn; // 0xab8(0x10)
	struct FMulticastInlineDelegate OnMapOpen; // 0xac8(0x10)
	struct FMulticastInlineDelegate OnRepair; // 0xad8(0x10)
	struct FMulticastInlineDelegate OnDemolish; // 0xae8(0x10)
	bool bIsComponentsInitialized; // 0xaf8(0x01)
	bool bIsLoaded; // 0xaf9(0x01)
	char pad_AFA[0x6]; // 0xafa(0x06)
	struct FMulticastInlineDelegate OnNotifyEndGame; // 0xb00(0x10)
	struct FMulticastInlineDelegate OnPlayerKillServerOnly; // 0xb10(0x10)
	struct FMulticastInlineDelegate OnPlayerKillClientOnly; // 0xb20(0x10)
	struct FMulticastInlineDelegate OnCancelInteraction; // 0xb30(0x10)
	struct UFootstepComponent* Footstep; // 0xb40(0x08)
	struct FName JumpEffectEntity; // 0xb48(0x08)
	struct TArray<struct AActor*> MapMarkers; // 0xb50(0x10)
	struct FName CharacterSoundType; // 0xb60(0x08)
	struct FText LostResearchName; // 0xb68(0x18)
	struct FInteractionInfo CurrentInteractionInfo; // 0xb80(0x0c)
	char pad_B8C[0x4]; // 0xb8c(0x04)
	struct TArray<struct FInteractionParameter> CurrentInteractionParams; // 0xb90(0x10)
	bool bTurnLightOn; // 0xba0(0x01)
	char pad_BA1[0x7]; // 0xba1(0x07)
	struct FText CommunicationRepairedText; // 0xba8(0x18)
	struct FText CommunicationSuccessText; // 0xbc0(0x18)
	struct FText CommunicationFailedText; // 0xbd8(0x18)
	struct FText ResearchLostText; // 0xbf0(0x18)
	bool bGameStarted; // 0xc08(0x01)
	char pad_C09[0x7]; // 0xc09(0x07)
	struct FGameplayTagContainer GameplayTags; // 0xc10(0x20)
	struct FLFTeamId SavedTeamId; // 0xc30(0x10)
	struct TArray<struct UAnimationAsset*> InteractionAnimations; // 0xc40(0x10)
	struct TScriptInterface<None> FocusedEntity; // 0xc50(0x10)
	enum class EFocusState FocusState; // 0xc60(0x01)
	enum class ECharacterAttackState AttackState; // 0xc61(0x01)
	enum class ECharacterAttackState LocalAttackState; // 0xc62(0x01)
	bool bIsCommunicating; // 0xc63(0x01)
	char pad_C64[0x3]; // 0xc64(0x03)
	enum class ECharacterInteractionState InteractionState; // 0xc67(0x01)
	struct TScriptInterface<None> CurrentInteractingEntity; // 0xc68(0x10)
	struct ABuildingEntity* CurrentInteractingBuilding; // 0xc78(0x08)
	enum class EInteractionType CurrentIntendedInteraction; // 0xc80(0x01)
	char pad_C81[0x3]; // 0xc81(0x03)
	float AfterReviveSecond; // 0xc84(0x04)
	float AfterReviveIgnorePerception; // 0xc88(0x04)
	float SecondsAfterGameStarted; // 0xc8c(0x04)
	float GravityOnSecond; // 0xc90(0x04)
	float InteractionTotalTime; // 0xc94(0x04)
	float InteractionElapsedTime; // 0xc98(0x04)
	enum class EInteractionType CurrentInteractionType; // 0xc9c(0x01)
	char pad_C9D[0x3]; // 0xc9d(0x03)
	struct FTimerHandle InteractionTimerHandle; // 0xca0(0x08)
	struct FTimerHandle RecoilTimerHandle; // 0xca8(0x08)
	struct FTimerHandle DelayedDamageTimerHandle; // 0xcb0(0x08)
	struct FTimerHandle AfterGameStartedTimerHandle; // 0xcb8(0x08)
	struct TArray<struct AActor*> OverlappingActors; // 0xcc0(0x10)
	struct FHitResult CurrentFocusHit; // 0xcd0(0x8c)
	float CameraCenter; // 0xd5c(0x04)
	float CameraHeight; // 0xd60(0x04)
	float CameraFOV; // 0xd64(0x04)
	float CrouchCameraHeight; // 0xd68(0x04)
	bool bPressRunning; // 0xd6c(0x01)
	bool bPressAim; // 0xd6d(0x01)
	bool bPressJumping; // 0xd6e(0x01)
	bool bIsClientInitialized; // 0xd6f(0x01)
	struct AEquipmentEntity* KnifeHolder; // 0xd70(0x08)
	struct AEquipmentEntity* Lantern; // 0xd78(0x08)
	struct TArray<struct FVector> RestPoints; // 0xd80(0x10)
	struct FVector PlayerStartLocation; // 0xd90(0x0c)
	struct FVector StuckCheckLocation; // 0xd9c(0x0c)
	char pad_DA8[0x48]; // 0xda8(0x48)

	void UnEquipItemByName(struct FName ItemToUnequip, bool bReset); // Function LF.LFCharacterPlayer.UnEquipItemByName // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x101ccf0
	void UnEquipItem(struct FEquipmentData ItemToUnequip, bool bReset); // Function LF.LFCharacterPlayer.UnEquipItem // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x101cb50
	void TurnElectricSwitchOn(struct AActor* ElectricSwitchActor, bool bNewTurnOn); // Function LF.LFCharacterPlayer.TurnElectricSwitchOn // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x101ca80
	void ToggleMap(); // Function LF.LFCharacterPlayer.ToggleMap // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ToggleJournal(int32_t PageToOpen); // Function LF.LFCharacterPlayer.ToggleJournal // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void StopPedaling(struct AActor* PedalActor); // Function LF.LFCharacterPlayer.StopPedaling // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x101c9f0
	void StopJump(); // Function LF.LFCharacterPlayer.StopJump // (Final|Native|Public) // @ game+0x101c9d0
	void StopInteraction(); // Function LF.LFCharacterPlayer.StopInteraction // (Final|Native|Public) // @ game+0x101c9b0
	void StartPedaling(struct AActor* PedalActor); // Function LF.LFCharacterPlayer.StartPedaling // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x101c920
	void StartJump(); // Function LF.LFCharacterPlayer.StartJump // (Final|Native|Public) // @ game+0x101c900
	void StartInteraction(); // Function LF.LFCharacterPlayer.StartInteraction // (Final|Native|Private) // @ game+0x101b6e0
	void ShowInteractionKnife(); // Function LF.LFCharacterPlayer.ShowInteractionKnife // (Native|Event|Public|BlueprintEvent) // @ game+0x101c8e0
	void ShowHeadMessage(struct FText Text); // Function LF.LFCharacterPlayer.ShowHeadMessage // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x101c810
	bool ShouldEmitHitEffectBP(); // Function LF.LFCharacterPlayer.ShouldEmitHitEffectBP // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x101c7e0
	void SetZeroRotation(); // Function LF.LFCharacterPlayer.SetZeroRotation // (Final|Native|Public) // @ game+0x101c7c0
	void ServerUseStamina(float Stamina); // Function LF.LFCharacterPlayer.ServerUseStamina // (Net|Native|Event|Public|NetServer) // @ game+0x101c730
	void ServerUseJumpStamina(); // Function LF.LFCharacterPlayer.ServerUseJumpStamina // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable) // @ game+0x101c710
	void ServerUnEquipItem(struct FName ItemToUnequip, bool bResetUnequippingItems); // Function LF.LFCharacterPlayer.ServerUnEquipItem // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x101c640
	void ServerToggleLight(); // Function LF.LFCharacterPlayer.ServerToggleLight // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x101c620
	void ServerTakeJournal(struct AJournalItemEntity* JournalPage); // Function LF.LFCharacterPlayer.ServerTakeJournal // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x101c590
	void ServerStopInteraction(); // Function LF.LFCharacterPlayer.ServerStopInteraction // (Final|Net|NetReliableNative|Event|Private|NetServer) // @ game+0x101c570
	void ServerSetCurrentCameraMode(enum class EPlayerCameraMode CameraMode); // Function LF.LFCharacterPlayer.ServerSetCurrentCameraMode // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x101c4f0
	void ServerRepairBuilding(struct ABuildingEntity* Building); // Function LF.LFCharacterPlayer.ServerRepairBuilding // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x101c460
	void ServerReloadBuilding(struct ABuildingEntity* Building); // Function LF.LFCharacterPlayer.ServerReloadBuilding // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x101c3d0
	void ServerPlayInteractionAnimation(enum class EInteractionType InteractionType); // Function LF.LFCharacterPlayer.ServerPlayInteractionAnimation // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x101c350
	void ServerPlayAttackAnimation(struct UAnimMontage* AnimMontage, float AnimSpeedRate); // Function LF.LFCharacterPlayer.ServerPlayAttackAnimation // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x101c270
	void ServerOwnItem(struct AActor* InteractableEntityActor, bool bShouldNotify, bool bInteractEvenIfFailed); // Function LF.LFCharacterPlayer.ServerOwnItem // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x101c150
	void ServerOpenMap(); // Function LF.LFCharacterPlayer.ServerOpenMap // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x101c130
	void ServerOnResurrect(); // Function LF.LFCharacterPlayer.ServerOnResurrect // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x101c110
	void ServerMoveToRevivalLocation(); // Function LF.LFCharacterPlayer.ServerMoveToRevivalLocation // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x101c0f0
	void ServerLaunchOtherCharacter(struct ALFCharacter* Character, struct FVector LaunchVelocity, bool bXYOverride, bool bZOverride); // Function LF.LFCharacterPlayer.ServerLaunchOtherCharacter // (Net|NetReliableNative|Event|Public|NetServer|HasDefaults) // @ game+0x101bf70
	void ServerGiveDamageToActor(struct AActor* Actor, float ResultDamage, struct FLFPointDamageEvent DamageEvent); // Function LF.LFCharacterPlayer.ServerGiveDamageToActor // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x101bde0
	void ServerExecuteInteraction(struct AActor* EntityActor, enum class EInteractionType Interaction); // Function LF.LFCharacterPlayer.ServerExecuteInteraction // (Final|Net|NetReliableNative|Event|Private|NetServer) // @ game+0x101bd10
	void ServerEquipItem(struct FName ItemToEquip, int32_t UsedItemIndex); // Function LF.LFCharacterPlayer.ServerEquipItem // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x101bc40
	void ServerDropThrowable(struct FTransform Transform, struct UObject* ThrowableClass, struct FThrowableAttachment Attachment); // Function LF.LFCharacterPlayer.ServerDropThrowable // (Net|NetReliableNative|Event|Public|NetServer|HasDefaults) // @ game+0x101ba90
	void ServerConvertIfFoliage(struct FHitResult Hit); // Function LF.LFCharacterPlayer.ServerConvertIfFoliage // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x101b9c0
	void ServerConsumeItem(struct FName ItemToConsume, struct FEntityData EntityData, int32_t UsedItemIndex); // Function LF.LFCharacterPlayer.ServerConsumeItem // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x101b880
	void ServerBreakItem(struct AActor* BreakEntityActor, enum class EInteractionType InteractionType); // Function LF.LFCharacterPlayer.ServerBreakItem // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x101b7b0
	void Resurrect(); // Function LF.LFCharacterPlayer.Resurrect // (Final|Native|Public|BlueprintCallable) // @ game+0x101b790
	void RequestSuicide(bool bForce); // Function LF.LFCharacterPlayer.RequestSuicide // (Final|Native|Public|BlueprintCallable) // @ game+0x101b700
	void RefreshInventoryPreview(); // Function LF.LFCharacterPlayer.RefreshInventoryPreview // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void OpenMap(); // Function LF.LFCharacterPlayer.OpenMap // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnUseItem(); // Function LF.LFCharacterPlayer.OnUseItem // (Final|Native|Public) // @ game+0xc20320
	void OnUnequipPreview(enum class EEquipmentSlot EquipmentSlot, struct USkeletalMesh* FallbackMesh); // Function LF.LFCharacterPlayer.OnUnequipPreview // (Event|Protected|BlueprintEvent) // @ game+0x1395fe0
	void OnStartInteraction(); // Function LF.LFCharacterPlayer.OnStartInteraction // (Final|Native|Public) // @ game+0x101b6e0
	void OnRotationChanged(struct FRotator NewRotator); // Function LF.LFCharacterPlayer.OnRotationChanged // (Event|Public|HasOutParms|HasDefaults|BlueprintEvent) // @ game+0x1395fe0
	void OnRep_TurnLightOn(); // Function LF.LFCharacterPlayer.OnRep_TurnLightOn // (Final|Native|Private) // @ game+0x101b6c0
	void OnRep_GameStarted(); // Function LF.LFCharacterPlayer.OnRep_GameStarted // (Final|Native|Protected) // @ game+0x101b6a0
	void OnRep_CurrentInteractionType(); // Function LF.LFCharacterPlayer.OnRep_CurrentInteractionType // (Final|Native|Private) // @ game+0x101b680
	void OnInteraction(); // Function LF.LFCharacterPlayer.OnInteraction // (Final|Native|Public) // @ game+0x101b660
	void OnEquipPreview(enum class EEquipmentSlot EquipmentSlot, struct USkeletalMesh* SkeletalMesh, struct AEquipmentEntity* EquipmentEntity); // Function LF.LFCharacterPlayer.OnEquipPreview // (Event|Protected|BlueprintEvent) // @ game+0x1395fe0
	void OnEndInteraction(); // Function LF.LFCharacterPlayer.OnEndInteraction // (Final|Native|Public) // @ game+0x101b640
	void OnAfterInteractionAnimationLoaded(); // Function LF.LFCharacterPlayer.OnAfterInteractionAnimationLoaded // (Final|Native|Private) // @ game+0x101b620
	void MulticastPlayAttackAnimation(struct UAnimMontage* AnimMontage, float AnimSpeedRate); // Function LF.LFCharacterPlayer.MulticastPlayAttackAnimation // (Net|Native|Event|NetMulticast|Public) // @ game+0x101b540
	void MakeVisible(); // Function LF.LFCharacterPlayer.MakeVisible // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x101b520
	void MakeInvisible(); // Function LF.LFCharacterPlayer.MakeInvisible // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x101b500
	void LocalOnAfterInitializeImpl(); // Function LF.LFCharacterPlayer.LocalOnAfterInitializeImpl // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	bool IsMouseInverted(); // Function LF.LFCharacterPlayer.IsMouseInverted // (Event|Public|BlueprintEvent|Const) // @ game+0x1395fe0
	bool IsMapOpen(); // Function LF.LFCharacterPlayer.IsMapOpen // (Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1395fe0
	bool IsMantling(); // Function LF.LFCharacterPlayer.IsMantling // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x101b4d0
	bool IsJournalOpen(); // Function LF.LFCharacterPlayer.IsJournalOpen // (Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1395fe0
	bool IsFirstPersonPerspective(); // Function LF.LFCharacterPlayer.IsFirstPersonPerspective // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x101b4a0
	bool IsAnyUIOpened(); // Function LF.LFCharacterPlayer.IsAnyUIOpened // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x101b470
	void Initialize(); // Function LF.LFCharacterPlayer.Initialize // (Native|Public) // @ game+0x101b450
	void HideInteractionKnife(); // Function LF.LFCharacterPlayer.HideInteractionKnife // (Native|Event|Public|BlueprintEvent) // @ game+0x101b430
	bool HasRecipe(struct FName CraftId); // Function LF.LFCharacterPlayer.HasRecipe // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x101b390
	struct FString GetTeamName(); // Function LF.LFCharacterPlayer.GetTeamName // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x101b310
	float GetSuicideTimeWait(); // Function LF.LFCharacterPlayer.GetSuicideTimeWait // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x101b2e0
	struct FText GetNeedResearchName(struct FName CraftId); // Function LF.LFCharacterPlayer.GetNeedResearchName // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x101b1e0
	float GetMouseSensitivity(); // Function LF.LFCharacterPlayer.GetMouseSensitivity // (Event|Public|BlueprintEvent|Const) // @ game+0x1395fe0
	enum class EFocusState GetFocusState(); // Function LF.LFCharacterPlayer.GetFocusState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x101b180
	struct AActor* GetFocusedActor(); // Function LF.LFCharacterPlayer.GetFocusedActor // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x101b1b0
	enum class EInteractionType GetCurrentInteractionType(); // Function LF.LFCharacterPlayer.GetCurrentInteractionType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x101b150
	void GetBlueprintEquipmentMeshes(struct TArray<struct UMeshComponent*> OutBlueprintMeshes); // Function LF.LFCharacterPlayer.GetBlueprintEquipmentMeshes // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteInteraction(struct TScriptInterface<None> Entity, enum class EInteractionType Interaction); // Function LF.LFCharacterPlayer.ExecuteInteraction // (Final|Native|Private) // @ game+0x101b070
	void EndInteraction(); // Function LF.LFCharacterPlayer.EndInteraction // (Final|Native|Private) // @ game+0x101b050
	void EnableCameraLag(); // Function LF.LFCharacterPlayer.EnableCameraLag // (Final|Native|Public|Const) // @ game+0x101b030
	void DelayedTakeDamage(float DamageAmount, struct FDamageEvent DamageEvent, struct AController* EventInstigator, struct AActor* DamageCauser); // Function LF.LFCharacterPlayer.DelayedTakeDamage // (Final|Native|Public|HasOutParms) // @ game+0x101aeb0
	void ControlElectricSwitchType(struct AActor* ElectricSwitchActor, enum class EEnemyType EnemyType, bool bNewChecked); // Function LF.LFCharacterPlayer.ControlElectricSwitchType // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x101ada0
	void CollapseInteractionIndicator(); // Function LF.LFCharacterPlayer.CollapseInteractionIndicator // (Net|Native|Event|Public|NetClient) // @ game+0x101ad80
	void CloseUI(bool bCloseSystemMenu); // Function LF.LFCharacterPlayer.CloseUI // (Final|Native|Public|BlueprintCallable) // @ game+0x101acf0
	void CloseMap(); // Function LF.LFCharacterPlayer.CloseMap // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void CloseJournal(); // Function LF.LFCharacterPlayer.CloseJournal // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void ClientUnlockLockable(struct AActor* LockableActor); // Function LF.LFCharacterPlayer.ClientUnlockLockable // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x101ac60
	void ClientStoreItem(struct AActor* StoreEntity); // Function LF.LFCharacterPlayer.ClientStoreItem // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x101abd0
	void ClientShowLostResearchMessage(struct FText ResearchName); // Function LF.LFCharacterPlayer.ClientShowLostResearchMessage // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x101ab10
	void ClientShowInlineNotification(struct FText Text, struct UObject* Icon); // Function LF.LFCharacterPlayer.ClientShowInlineNotification // (Net|Native|Event|Public|NetClient) // @ game+0x101aa00
	void ClientShowCommunicationIndicator(float InteractionTime); // Function LF.LFCharacterPlayer.ClientShowCommunicationIndicator // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x101a970
	void ClientSetInteractingBuilding(struct ABuildingEntity* Building); // Function LF.LFCharacterPlayer.ClientSetInteractingBuilding // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x101a8e0
	void ClientSetContentsSignable(struct AActor* SignableActor); // Function LF.LFCharacterPlayer.ClientSetContentsSignable // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x101a850
	void ClientResetLockable(struct AActor* LockableActor); // Function LF.LFCharacterPlayer.ClientResetLockable // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x101a7c0
	void ClientReloadWeapon(struct FName WeaponEntityName, struct FItemId WeaponItemId); // Function LF.LFCharacterPlayer.ClientReloadWeapon // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x101a6e0
	void ClientRefreshEquipPreview(); // Function LF.LFCharacterPlayer.ClientRefreshEquipPreview // (Net|Native|Event|Public|NetClient) // @ game+0x101a6c0
	void ClientOpenUpgradeWindow(struct FName ID); // Function LF.LFCharacterPlayer.ClientOpenUpgradeWindow // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x101a630
	void ClientOpenResearchWindow(); // Function LF.LFCharacterPlayer.ClientOpenResearchWindow // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x101a610
	void ClientOpenInventoryWithCraft(struct FText Name, struct TArray<enum class ECraftCategory> Categories); // Function LF.LFCharacterPlayer.ClientOpenInventoryWithCraft // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x101a4f0
	void ClientOnUpgradeBuilding(struct ABuildingEntity* BuildingToUpgrade); // Function LF.LFCharacterPlayer.ClientOnUpgradeBuilding // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x101a460
	void ClientOnUnequipPreview(enum class EEquipmentSlot EquipmentSlot, struct USkeletalMesh* FallbackMesh); // Function LF.LFCharacterPlayer.ClientOnUnequipPreview // (Net|Native|Event|Public|NetClient) // @ game+0x101a390
	void ClientOnSaveRestPoint(); // Function LF.LFCharacterPlayer.ClientOnSaveRestPoint // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x101a370
	void ClientOnResurrect(); // Function LF.LFCharacterPlayer.ClientOnResurrect // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x101a350
	void ClientOnEquipPreview(enum class EEquipmentSlot EquipmentSlot, struct USkeletalMesh* SkeletalMesh, struct AEquipmentEntity* EquipmentEntity); // Function LF.LFCharacterPlayer.ClientOnEquipPreview // (Net|Native|Event|Public|NetClient) // @ game+0x101a240
	void ClientOnCommunicationEquipmentRepaired(); // Function LF.LFCharacterPlayer.ClientOnCommunicationEquipmentRepaired // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x101a220
	void ClientNotifyWaveStarted(); // Function LF.LFCharacterPlayer.ClientNotifyWaveStarted // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x101a200
	void ClientNotifyInventoryFull(); // Function LF.LFCharacterPlayer.ClientNotifyInventoryFull // (Net|Native|Event|Public|NetClient) // @ game+0x101a1e0
	void ClientNotifyCommunicationComplete(bool bIsSuccess); // Function LF.LFCharacterPlayer.ClientNotifyCommunicationComplete // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x101a150
	void ClientHarvest(struct AActor* FarmToHarvest); // Function LF.LFCharacterPlayer.ClientHarvest // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x101a0c0
	void ClientFindItem(struct AActor* FindEntity); // Function LF.LFCharacterPlayer.ClientFindItem // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x101a030
	void ClientControlElectricSwitch(struct AActor* ElectricSwitchActor); // Function LF.LFCharacterPlayer.ClientControlElectricSwitch // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x1019fa0
	void ClientCloseUIOnAttacked(); // Function LF.LFCharacterPlayer.ClientCloseUIOnAttacked // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x1019f80
	enum class ELFTeamAttitude ClassifyTeamAttitude(struct AActor* Actor); // Function LF.LFCharacterPlayer.ClassifyTeamAttitude // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1019ee0
	void CheckUIInput(); // Function LF.LFCharacterPlayer.CheckUIInput // (Final|Native|Public|BlueprintCallable) // @ game+0x1019ec0
	void CheckKnife(struct FName EquipId, bool bIsEquip); // Function LF.LFCharacterPlayer.CheckKnife // (Final|Native|Public) // @ game+0x1019df0
	bool CanToggleJournal(); // Function LF.LFCharacterPlayer.CanToggleJournal // (Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1395fe0
	bool CanSuicide(); // Function LF.LFCharacterPlayer.CanSuicide // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1019dc0
	bool CanPassCharacterState(char StatesFlag); // Function LF.LFCharacterPlayer.CanPassCharacterState // (Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1019d30
	bool CanPassCharacterFlag(struct FGameActionFlag Flags); // Function LF.LFCharacterPlayer.CanPassCharacterFlag // (Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1019c90
	bool CanHitBP(); // Function LF.LFCharacterPlayer.CanHitBP // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1019c60
	void Attack(bool bUseSpecialAttack); // Function LF.LFCharacterPlayer.Attack // (Final|Native|Public) // @ game+0x1019bd0
	void ALSTurn(float Value); // Function LF.LFCharacterPlayer.ALSTurn // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void ALSRagdoll(); // Function LF.LFCharacterPlayer.ALSRagdoll // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void ALSMoveRight(float Value); // Function LF.LFCharacterPlayer.ALSMoveRight // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void ALSMoveForward(float Value); // Function LF.LFCharacterPlayer.ALSMoveForward // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void ALSLookUp(float Value); // Function LF.LFCharacterPlayer.ALSLookUp // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void ALSAimStop(); // Function LF.LFCharacterPlayer.ALSAimStop // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void ALSAim(); // Function LF.LFCharacterPlayer.ALSAim // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void AimRange(float DeltaTime); // Function LF.LFCharacterPlayer.AimRange // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
};

// Class LF.LFCheatManager
// Size: 0x80 (Inherited: 0x78)
struct ULFCheatManager : UCheatManager {
	char pad_78[0x8]; // 0x78(0x08)

	void WaveStart(); // Function LF.LFCheatManager.WaveStart // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x1022590
	void WaveClear(); // Function LF.LFCheatManager.WaveClear // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x1022570
	void UnlockAchievement(struct FName AchievementName); // Function LF.LFCheatManager.UnlockAchievement // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x10224e0
	void Unload(struct FString LevelName); // Function LF.LFCheatManager.Unload // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x1022440
	void TimeToDay(int32_t NewDay); // Function LF.LFCheatManager.TimeToDay // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x10223b0
	void TimeTo(int32_t NewHour); // Function LF.LFCheatManager.TimeTo // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x1022320
	void TimeScale(int32_t NewTimeScale); // Function LF.LFCheatManager.TimeScale // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x1022290
	void TimeReset(); // Function LF.LFCheatManager.TimeReset // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x1022270
	void TimeAdd(int32_t NewHour); // Function LF.LFCheatManager.TimeAdd // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x10221e0
	void TeamRename(struct FString TeamName); // Function LF.LFCheatManager.TeamRename // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x10220f0
	void TeamPrint(); // Function LF.LFCheatManager.TeamPrint // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x10220d0
	void TeamOpenUI(); // Function LF.LFCheatManager.TeamOpenUI // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x10220b0
	void TeamKick(struct FString PlayerId); // Function LF.LFCheatManager.TeamKick // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x1021fc0
	void TeamJoin(struct FString TeamId); // Function LF.LFCheatManager.TeamJoin // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x1021ed0
	void TeamInvite(struct FString PlayerId); // Function LF.LFCheatManager.TeamInvite // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x1021de0
	void TeamGiveRole(struct FString PlayerId, struct FString Role); // Function LF.LFCheatManager.TeamGiveRole // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x1021c60
	void TeamCreate(struct FString TeamName); // Function LF.LFCheatManager.TeamCreate // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x1021b70
	void Suicide(); // Function LF.LFCheatManager.Suicide // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x1021b50
	void SetResourceRespawn(bool bNewFlag); // Function LF.LFCheatManager.SetResourceRespawn // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x1021ac0
	void SetLeaderboardStat(struct FName StatName, int32_t StatValue); // Function LF.LFCheatManager.SetLeaderboardStat // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x10219f0
	void SetGameRule(struct FString RuleString); // Function LF.LFCheatManager.SetGameRule // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x1021900
	void SetGameDifficulty(struct FString DifficultyString); // Function LF.LFCheatManager.SetGameDifficulty // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x1021810
	void SetFakeName(struct FString Name); // Function LF.LFCheatManager.SetFakeName // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x1021770
	void Resurrect(); // Function LF.LFCheatManager.Resurrect // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x1021140
	void ResetAchievements(); // Function LF.LFCheatManager.ResetAchievements // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x1021120
	void RepairAllBuildings(); // Function LF.LFCheatManager.RepairAllBuildings // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x1021100
	void ReloadRangeTraps(); // Function LF.LFCheatManager.ReloadRangeTraps // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x10210e0
	void ReloadMeleeTraps(); // Function LF.LFCheatManager.ReloadMeleeTraps // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x10210c0
	void ReloadAllTraps(); // Function LF.LFCheatManager.ReloadAllTraps // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x10210a0
	void QueryAchievements(); // Function LF.LFCheatManager.QueryAchievements // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x1021000
	void PrintUnload(); // Function LF.LFCheatManager.PrintUnload // (Final|Native|Public) // @ game+0x1020fe0
	void PrintPlayerList(); // Function LF.LFCheatManager.PrintPlayerList // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x1020fc0
	void PrintLoad(); // Function LF.LFCheatManager.PrintLoad // (Final|Native|Public) // @ game+0x1020fa0
	void PrintAchievementSaveData(); // Function LF.LFCheatManager.PrintAchievementSaveData // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x1020f80
	void OpenJournal(int32_t page); // Function LF.LFCheatManager.OpenJournal // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x1020ef0
	void ModifyStat(struct FString Stat, float Value); // Function LF.LFCheatManager.ModifyStat // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x1020da0
	void Load(struct FString LevelName); // Function LF.LFCheatManager.Load // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x1020b60
	bool IsDevMode(); // Function LF.LFCheatManager.IsDevMode // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x10208b0
	bool IsDevInteraction(); // Function LF.LFCheatManager.IsDevInteraction // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x1020880
	bool IsDevEffect(); // Function LF.LFCheatManager.IsDevEffect // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1020850
	bool IsDevCharacter(); // Function LF.LFCheatManager.IsDevCharacter // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x1020820
	bool IsDevAttack(); // Function LF.LFCheatManager.IsDevAttack // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x10207f0
	bool IsDevAmmo(); // Function LF.LFCheatManager.IsDevAmmo // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x10207c0
	void Invincible(); // Function LF.LFCheatManager.Invincible // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x10207a0
	void IncreaseLeaderboardStat(struct FName StatName, int32_t StatValue); // Function LF.LFCheatManager.IncreaseLeaderboardStat // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x1020620
	void ExecuteCommunication(); // Function LF.LFCheatManager.ExecuteCommunication // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x101ffe0
	void DevWave(); // Function LF.LFCheatManager.DevWave // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x101ffc0
	void DevUI(); // Function LF.LFCheatManager.DevUI // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x101ffa0
	void DevParry(); // Function LF.LFCheatManager.DevParry // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x101ff80
	void DevNoise(); // Function LF.LFCheatManager.DevNoise // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x101ff60
	void DevMovement(); // Function LF.LFCheatManager.DevMovement // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x101ff40
	void DevMode(); // Function LF.LFCheatManager.DevMode // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x101ff20
	void DevInteraction(); // Function LF.LFCheatManager.DevInteraction // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x101ff00
	void DevFootstep(); // Function LF.LFCheatManager.DevFootstep // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x101fee0
	void DevFlag(); // Function LF.LFCheatManager.DevFlag // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x101fec0
	void DevFirst(); // Function LF.LFCheatManager.DevFirst // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x101fea0
	void DevEvade(); // Function LF.LFCheatManager.DevEvade // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x101fe80
	void DevElec(); // Function LF.LFCheatManager.DevElec // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x101fe60
	void DevEffect(); // Function LF.LFCheatManager.DevEffect // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x101fe40
	void DevCharacter(); // Function LF.LFCheatManager.DevCharacter // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x101fe20
	void DevBuilding(); // Function LF.LFCheatManager.DevBuilding // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x101fe00
	void DevAttack(); // Function LF.LFCheatManager.DevAttack // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x101fde0
	void DevAmmo(); // Function LF.LFCheatManager.DevAmmo // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x101fdc0
	void DevAggroTrapBounds(); // Function LF.LFCheatManager.DevAggroTrapBounds // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x101fda0
	void CheatWindow(); // Function LF.LFCheatManager.CheatWindow // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x101fcd0
	void ChargeMaxAllElectricSource(); // Function LF.LFCheatManager.ChargeMaxAllElectricSource // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x101fcb0
	void CauseCrash(); // Function LF.LFCheatManager.CauseCrash // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x101fc90
	void Buff(struct FName BuffId); // Function LF.LFCheatManager.Buff // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x101fc00
};

// Class LF.LFCraftComponent
// Size: 0x240 (Inherited: 0xb8)
struct ULFCraftComponent : ULFActorComponent {
	struct FMulticastInlineDelegate OnItemCrafted; // 0xb8(0x10)
	struct FMulticastInlineDelegate CraftItemIterComplete; // 0xc8(0x10)
	struct TArray<enum class ECraftCategory> CraftingCategories; // 0xd8(0x10)
	enum class ECraftCategory CurrentCategory; // 0xe8(0x01)
	char pad_E9[0x7]; // 0xe9(0x07)
	struct FInventoryItem CurrentCraftItem; // 0xf0(0xf8)
	int32_t CraftIterationAmount; // 0x1e8(0x04)
	char pad_1EC[0x4]; // 0x1ec(0x04)
	struct TMap<enum class ECraftCategory, enum class ECraftCategory> DisabledCategories; // 0x1f0(0x50)

	void ServerOnSelectCraftItem(struct FInventoryItem CraftItem); // Function LF.LFCraftComponent.ServerOnSelectCraftItem // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x10216b0
	void ServerOnSelectCategory(enum class ECraftCategory Category); // Function LF.LFCraftComponent.ServerOnSelectCategory // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x1021630
	void ServerCraftItem(struct FName CraftEntityName, int32_t CraftIter); // Function LF.LFCraftComponent.ServerCraftItem // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x10212b0
	void SelectCraftItem(struct FInventoryItem CraftItem, bool bCheckRecipe); // Function LF.LFCraftComponent.SelectCraftItem // (Final|Native|Public|BlueprintCallable) // @ game+0x1021160
	void RefreshCraftMenu(enum class ECraftCategory Category); // Function LF.LFCraftComponent.RefreshCraftMenu // (Final|Native|Public|BlueprintCallable) // @ game+0x1021020
	bool IsEnoughAmount(struct FEntityData Item, int32_t Amount, bool bIsKey); // Function LF.LFCraftComponent.IsEnoughAmount // (Final|Native|Public|BlueprintCallable) // @ game+0x1020a00
	bool IsDisassembleCategory(enum class ECraftCategory Category); // Function LF.LFCraftComponent.IsDisassembleCategory // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1020970
	bool IsDisabledCategory(enum class ECraftCategory CraftCategory); // Function LF.LFCraftComponent.IsDisabledCategory // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10208e0
	void IncrementAmount(int32_t Amount); // Function LF.LFCraftComponent.IncrementAmount // (Final|Native|Public|BlueprintCallable) // @ game+0x10206f0
	bool HasEnoughMaterials(struct FInventoryItem Item); // Function LF.LFCraftComponent.HasEnoughMaterials // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x10204b0
	bool HasCraftRecipe(struct FName CraftId); // Function LF.LFCraftComponent.HasCraftRecipe // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x1020410
	int32_t GetInventoryAmount(struct FEntityData Item); // Function LF.LFCraftComponent.GetInventoryAmount // (Final|Native|Public|BlueprintCallable) // @ game+0x1020250
	enum class ECraftCategory GetCraftCategory(int32_t Index); // Function LF.LFCraftComponent.GetCraftCategory // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1020120
	void DecrementAmount(int32_t Amount); // Function LF.LFCraftComponent.DecrementAmount // (Final|Native|Public|BlueprintCallable) // @ game+0x101fd10
	void CraftItem(); // Function LF.LFCraftComponent.CraftItem // (Final|Native|Public|BlueprintCallable) // @ game+0x101fcf0
	void ClientNotifyNeedResearch(struct FName CraftEntityName); // Function LF.LFCraftComponent.ClientNotifyNeedResearch // (Net|Native|Event|Public|NetClient) // @ game+0x1011480
	void ClientNotifyInventoryFull(); // Function LF.LFCraftComponent.ClientNotifyInventoryFull // (Net|Native|Event|Public|NetClient) // @ game+0x10158f0
	void ClientNotifyCraftSuccess(); // Function LF.LFCraftComponent.ClientNotifyCraftSuccess // (Net|Native|Event|Public|NetClient) // @ game+0x1014700
	void ClientNotifyCraftFailed(); // Function LF.LFCraftComponent.ClientNotifyCraftFailed // (Net|Native|Event|Public|NetClient) // @ game+0x1014720
};

// Class LF.LFCraftRecipeComponent
// Size: 0x108 (Inherited: 0xb8)
struct ULFCraftRecipeComponent : ULFActorComponent {
	struct TMap<struct FName, struct FName> RecipeToResearch; // 0xb8(0x50)

	bool HasRecipe(struct FName CraftId); // Function LF.LFCraftRecipeComponent.HasRecipe // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1020580
	struct FText GetNeedResearchName(struct FName CraftId); // Function LF.LFCraftRecipeComponent.GetNeedResearchName // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1020310
};

// Class LF.LFCredentialComponent
// Size: 0xb8 (Inherited: 0xb8)
struct ULFCredentialComponent : ULFActorComponent {

	void UnlockLockable(struct AActor* LockableActor); // Function LF.LFCredentialComponent.UnlockLockable // (Final|Native|Public|BlueprintCallable) // @ game+0x1027750
	void ServerSetAdminToLockable(struct AActor* LockableActor); // Function LF.LFCredentialComponent.ServerSetAdminToLockable // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable) // @ game+0x1010870
	void ServerResetUnlockers(struct AActor* LockableActor, struct FString NewSecurityKey); // Function LF.LFCredentialComponent.ServerResetUnlockers // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable) // @ game+0x1027270
	void ServerAddUnlockerToLockable(struct AActor* LockableActor); // Function LF.LFCredentialComponent.ServerAddUnlockerToLockable // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable) // @ game+0x10271e0
	void ResetLockable(struct AActor* LockableActor); // Function LF.LFCredentialComponent.ResetLockable // (Final|Native|Public|BlueprintCallable) // @ game+0x1027150
};

// Class LF.LFDebugCharacterWidget
// Size: 0x260 (Inherited: 0x260)
struct ULFDebugCharacterWidget : UUserWidget {
};

// Class LF.LFDebugCharacterWidgetComponent
// Size: 0x590 (Inherited: 0x590)
struct ULFDebugCharacterWidgetComponent : UWidgetComponent {
};

// Class LF.LFToolBehavior
// Size: 0x30 (Inherited: 0x28)
struct ULFToolBehavior : UObject {
	struct AActor* Owner; // 0x28(0x08)
};

// Class LF.LFDemolishBehavior
// Size: 0x30 (Inherited: 0x30)
struct ULFDemolishBehavior : ULFToolBehavior {
};

// Class LF.LFDestructibleActor
// Size: 0x268 (Inherited: 0x238)
struct ALFDestructibleActor : ADestructibleActor {
	char pad_238[0x8]; // 0x238(0x08)
	int32_t CurrentChunkCount; // 0x240(0x04)
	float DestroyDelayTime; // 0x244(0x04)
	float CurrentTime; // 0x248(0x04)
	float CurrentRadius; // 0x24c(0x04)
	float CollapseSpeed; // 0x250(0x04)
	char pad_254[0x4]; // 0x254(0x04)
	struct FTimerHandle InvisibleHandle; // 0x258(0x08)
	struct FTimerHandle CollapseHandle; // 0x260(0x08)
};

// Class LF.LFEditorFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct ULFEditorFunctionLibrary : UBlueprintFunctionLibrary {
};

// Class LF.LFElectricityConnectionBehavior
// Size: 0x168 (Inherited: 0x30)
struct ULFElectricityConnectionBehavior : ULFToolBehavior {
	struct FName ConnectionEffectName; // 0x30(0x08)
	struct FName DisconnectionEffectName; // 0x38(0x08)
	bool bIsUsing; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	float UsePressTime; // 0x44(0x04)
	float CurrentPressedTime; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct AElectricSocketActor* PrevFocusedSocket; // 0x50(0x08)
	float FocusDistance; // 0x58(0x04)
	float ConnectionFocusDistance; // 0x5c(0x04)
	struct TSet<struct AActor*> SocketOwners; // 0x60(0x50)
	struct TArray<struct AElectricSocketActor*> Sockets; // 0xb0(0x10)
	struct AElectricSocketActor* SocketClass; // 0xc0(0x08)
	struct TSet<struct AElectricSocketActor*> ConnectedSockets; // 0xc8(0x50)
	struct TArray<struct AElectricConnectionActor*> ConnectionVisualActors; // 0x118(0x10)
	struct AElectricConnectionActor* ConnectionVisualClass; // 0x128(0x08)
	struct AElectricSocketActor* FocusedSocket; // 0x130(0x08)
	struct FSocketConnectionAction Connection; // 0x138(0x20)
	struct AElectricConnectionToolActor* ToolVisualActor; // 0x158(0x08)
	struct AElectricConnectionToolActor* ToolVisualClass; // 0x160(0x08)

	void ServerTryDisconnect(enum class EElectricSocketDirection Direction, int32_t Index, struct UObject* SocketOwner, struct AActor* BehaviorOwner); // Function LF.LFElectricityConnectionBehavior.ServerTryDisconnect // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x1027600
	void ServerTryConnect(int32_t FromIndex, int32_t ToIndex, struct UObject* FromSocketObject, struct UObject* ToSocketObject, int32_t FocusedSocketIndex, enum class EElectricSocketDirection Direction, int32_t Index, struct UObject* SocketOwner, struct AActor* BehaviorOwner); // Function LF.LFElectricityConnectionBehavior.ServerTryConnect // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x1027360
};

// Class LF.LFEquipmentSwapAnimComponent
// Size: 0x138 (Inherited: 0xb8)
struct ULFEquipmentSwapAnimComponent : ULFActorComponent {
	char pad_B8[0x40]; // 0xb8(0x40)
	float SwapWalkSpeed; // 0xf8(0x04)
	float SwapDefaultDelay; // 0xfc(0x04)
	float SwapWeaponInvisibleRatio; // 0x100(0x04)
	char pad_104[0x4]; // 0x104(0x04)
	struct TArray<struct FEquipmentSwapAnimItem> EquipmentsToSwap; // 0x108(0x10)
	enum class EPoseType PrevPose; // 0x118(0x01)
	enum class EWeaponType PrevWeaponType; // 0x119(0x01)
	enum class EWeaponPoseType PrevWeaponPoseType; // 0x11a(0x01)
	enum class EWeaponPoseType PrevSubWeaponPoseType; // 0x11b(0x01)
	enum class EEquipmentSwapState SwapState; // 0x11c(0x01)
	char pad_11D[0x3]; // 0x11d(0x03)
	struct FName SwapEquipment; // 0x120(0x08)
	float SwapTotalTime; // 0x128(0x04)
	float CurrentSwapTime; // 0x12c(0x04)
	float SwapBlend; // 0x130(0x04)
	bool bIsEquippingAnimation; // 0x134(0x01)
	char pad_135[0x3]; // 0x135(0x03)

	void OnEquipChanged(struct FName EquipName, bool bEquip); // Function LF.LFEquipmentSwapAnimComponent.OnEquipChanged // (Final|Native|Public) // @ game+0x102d750
	void MulticastOnEquipChanged(struct FName EquipName, bool bEquip); // Function LF.LFEquipmentSwapAnimComponent.MulticastOnEquipChanged // (Net|Native|Event|NetMulticast|Public) // @ game+0x102d660
	float GetSwapTime(); // Function LF.LFEquipmentSwapAnimComponent.GetSwapTime // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x102c350
	float GetSwapBlend(); // Function LF.LFEquipmentSwapAnimComponent.GetSwapBlend // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x102c320
	enum class EWeaponType GetPrevWeaponType(); // Function LF.LFEquipmentSwapAnimComponent.GetPrevWeaponType // (Final|Native|Protected|BlueprintCallable|BlueprintPure) // @ game+0x102c0f0
	enum class EWeaponPoseType GetPrevWeaponPoseType(); // Function LF.LFEquipmentSwapAnimComponent.GetPrevWeaponPoseType // (Final|Native|Protected|BlueprintCallable|BlueprintPure) // @ game+0x102c0c0
	enum class EWeaponPoseType GetPrevSubWeaponPoseType(); // Function LF.LFEquipmentSwapAnimComponent.GetPrevSubWeaponPoseType // (Final|Native|Protected|BlueprintCallable|BlueprintPure) // @ game+0x102c090
	enum class EPoseType GetPrevPose(); // Function LF.LFEquipmentSwapAnimComponent.GetPrevPose // (Final|Native|Protected|BlueprintCallable|BlueprintPure) // @ game+0x102c060
	enum class EEquipmentSwapState GetEquipmentSwapState(); // Function LF.LFEquipmentSwapAnimComponent.GetEquipmentSwapState // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x102b2c0
};

// Class LF.LFFlyingAnimalCharacter
// Size: 0x940 (Inherited: 0x770)
struct ALFFlyingAnimalCharacter : ALFAnimalCharacter {
	char pad_770[0x10]; // 0x770(0x10)
	struct ULFFlyingAnimalMovementComponent* FlyingAnimalMovement; // 0x780(0x08)
	struct ULFFlyingAnimalHitComponent* FlyingAnimalHit; // 0x788(0x08)
	struct TArray<struct TSoftObjectPtr<struct ABirdTarget>> BirdTargets; // 0x790(0x10)
	struct TArray<struct TSoftObjectPtr<struct ASkyBirdTarget>> SkyBirdTargets; // 0x7a0(0x10)
	struct TArray<struct TSoftObjectPtr<struct APerchBirdTarget>> PerchBirdTargets; // 0x7b0(0x10)
	struct TArray<struct TSoftObjectPtr<struct AGroundBirdTarget>> GroundBirdTargets; // 0x7c0(0x10)
	struct TArray<struct ASkyBirdTarget*> RawSkyBirdTargets; // 0x7d0(0x10)
	struct TArray<struct APerchBirdTarget*> RawPerchBirdTargets; // 0x7e0(0x10)
	struct TArray<struct AGroundBirdTarget*> RawGroundBirdTargets; // 0x7f0(0x10)
	int32_t SkyTargetIndex; // 0x800(0x04)
	int32_t PerchTargetIndex; // 0x804(0x04)
	int32_t GroundTargetIndex; // 0x808(0x04)
	bool bIsFlying; // 0x80c(0x01)
	bool bIsWalking; // 0x80d(0x01)
	bool bIsPerched; // 0x80e(0x01)
	bool bFlyToPerch; // 0x80f(0x01)
	struct TMap<enum class EBirdAnimation, struct TSoftObjectPtr<struct UAnimMontage>> Animations; // 0x810(0x50)
	struct TArray<struct TSoftObjectPtr<struct UAnimMontage>> IdleAnimations; // 0x860(0x10)
	int32_t Health; // 0x870(0x04)
	int32_t Stamina; // 0x874(0x04)
	int32_t MinStaminaToFly; // 0x878(0x04)
	int32_t JumpVelocityZ; // 0x87c(0x04)
	float JumpGravity; // 0x880(0x04)
	int32_t FlyingSpeed; // 0x884(0x04)
	int32_t FlyingSpeedMin; // 0x888(0x04)
	int32_t FlyingSpeedMax; // 0x88c(0x04)
	int32_t JumpSpeedForward; // 0x890(0x04)
	int32_t JumpSpeedUp; // 0x894(0x04)
	int32_t JumpAwayDistance; // 0x898(0x04)
	int32_t JumpToFlyVelocityZ; // 0x89c(0x04)
	int32_t JumpToFlySpeedForward; // 0x8a0(0x04)
	int32_t JumpToFlySpeedUp; // 0x8a4(0x04)
	int32_t FlyAwayDistance; // 0x8a8(0x04)
	int32_t TurnSpeedPerch; // 0x8ac(0x04)
	int32_t TurnSpeedFly; // 0x8b0(0x04)
	int32_t TurnSpeedLanding; // 0x8b4(0x04)
	int32_t RunAwayAccelerationDistance; // 0x8b8(0x04)
	int32_t RunAwaySpeedFar; // 0x8bc(0x04)
	int32_t RunAwaySpeedNear; // 0x8c0(0x04)
	int32_t HearingRange; // 0x8c4(0x04)
	int32_t SightRange; // 0x8c8(0x04)
	int32_t SightAngle; // 0x8cc(0x04)
	int32_t RandomPointDistance; // 0x8d0(0x04)
	int32_t FlyAwaySeconds; // 0x8d4(0x04)
	float EnemyAge; // 0x8d8(0x04)
	float RecentPerch; // 0x8dc(0x04)
	char pad_8E0[0x4]; // 0x8e0(0x04)
	bool bIsPerching; // 0x8e4(0x01)
	bool bIsSpawned; // 0x8e5(0x01)
	bool bIsStuck; // 0x8e6(0x01)
	bool bIsCircling; // 0x8e7(0x01)
	float StuckDistance; // 0x8e8(0x04)
	char pad_8EC[0x10]; // 0x8ec(0x10)
	float CheckStuckDelay; // 0x8fc(0x04)
	float CirclingDistance; // 0x900(0x04)
	int32_t LastLocationMax; // 0x904(0x04)
	int32_t LastLocationCurrent; // 0x908(0x04)
	char pad_90C[0x4]; // 0x90c(0x04)
	struct TArray<struct FVector> LastLocations; // 0x910(0x10)
	char pad_920[0x20]; // 0x920(0x20)

	void PlayBirdAnimationDeferred(enum class EBirdAnimation AnimationType); // Function LF.LFFlyingAnimalCharacter.PlayBirdAnimationDeferred // (Final|Native|Public) // @ game+0x102d840
	void OnRep_FlyingSpeed(); // Function LF.LFFlyingAnimalCharacter.OnRep_FlyingSpeed // (Final|Native|Public) // @ game+0x102d820
	void MulticastPlayJumpSound(); // Function LF.LFFlyingAnimalCharacter.MulticastPlayJumpSound // (Net|Native|Event|NetMulticast|Public) // @ game+0x102d730
};

// Class LF.LFFlyingAnimalHitComponent
// Size: 0x298 (Inherited: 0x288)
struct ULFFlyingAnimalHitComponent : ULFCharacterHitComponent {
	float RestoreTime; // 0x288(0x04)
	enum class EMovementMode PrevMovementMode; // 0x28c(0x01)
	char pad_28D[0x3]; // 0x28d(0x03)
	struct FTimerHandle HitTimerHandle; // 0x290(0x08)
};

// Class LF.LFFlyingAnimalMovementComponent
// Size: 0xb10 (Inherited: 0xb10)
struct ULFFlyingAnimalMovementComponent : ULFAnimalMovementComponent {
};

// Class LF.LFFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct ULFFunctionLibrary : UBlueprintFunctionLibrary {

	void TurnLensFlair(struct APostProcessVolume* PostProcess, bool bTurn); // Function LF.LFFunctionLibrary.TurnLensFlair // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x102e020
	struct AActor* SpawnPoolActor(struct AActor* ActorClass, struct FTransform Transform); // Function LF.LFFunctionLibrary.SpawnPoolActor // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x102df00
	void SortActorsWithDistance(struct TArray<struct AActor*> InActors, struct AActor* TargetActor, struct TArray<struct AActor*> OutActors, bool bAscend); // Function LF.LFFunctionLibrary.SortActorsWithDistance // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x102dd70
	void SetLocalPlayerAdmin(struct UObject* WorldContextObject, bool bNewIsAdmin); // Function LF.LFFunctionLibrary.SetLocalPlayerAdmin // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x102dcb0
	void ReturnPoolActor(struct AActor* ActorToReturn); // Function LF.LFFunctionLibrary.ReturnPoolActor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x102dc30
	void RequestExit(); // Function LF.LFFunctionLibrary.RequestExit // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x102dc10
	void PlayUISoundById(struct FName SoundId); // Function LF.LFFunctionLibrary.PlayUISoundById // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x102db90
	void PlayUISound(enum class EGameUiSound Sound); // Function LF.LFFunctionLibrary.PlayUISound // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x102db20
	struct UAudioComponent* PlaySoundAttached(enum class EGameSoundType SoundType, struct FName SoundId, struct USceneComponent* AttachToComponent, bool bAutoDestroy); // Function LF.LFFunctionLibrary.PlaySoundAttached // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x102d9d0
	void PlaySoundAtLocation(enum class EGameSoundType SoundType, struct FName SoundId, struct FVector Location); // Function LF.LFFunctionLibrary.PlaySoundAtLocation // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x102d8c0
	struct ULFInfoSaveGame* MakeSlotInfoSaveGame(struct UObject* WorldContextObject, struct FString SaveGameName); // Function LF.LFFunctionLibrary.MakeSlotInfoSaveGame // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x102d570
	void LoadEntityEffectAsync(struct FName EffectEntityId); // Function LF.LFFunctionLibrary.LoadEntityEffectAsync // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x102d4f0
	void LoadEffectAsync(struct FName EffectId); // Function LF.LFFunctionLibrary.LoadEffectAsync // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x102d470
	bool IsWorldValid(struct UObject* WorldContextObject); // Function LF.LFFunctionLibrary.IsWorldValid // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x102d3e0
	bool IsValidLocation(struct FVector TestLocation, bool bAllowZeroVector); // Function LF.LFFunctionLibrary.IsValidLocation // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x102d300
	bool IsThisUIOpen(struct UObject* WorldContextObject, enum class EUIType Type); // Function LF.LFFunctionLibrary.IsThisUIOpen // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x102d230
	bool IsStandAlone(struct UObject* WorldContextObject); // Function LF.LFFunctionLibrary.IsStandAlone // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x102d1a0
	bool IsShipping(); // Function LF.LFFunctionLibrary.IsShipping // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x102d170
	bool IsServer(struct UObject* WorldContextObject); // Function LF.LFFunctionLibrary.IsServer // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x102d0e0
	bool IsResourceRespawn(struct UObject* WorldContextObject); // Function LF.LFFunctionLibrary.IsResourceRespawn // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x102d050
	bool IsOfficialServer(struct FString OptionString); // Function LF.LFFunctionLibrary.IsOfficialServer // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x102cfb0
	bool IsNoWave(struct UObject* WorldContextObject); // Function LF.LFFunctionLibrary.IsNoWave // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x102cf20
	bool IsNoTeamkill(struct UObject* WorldContextObject); // Function LF.LFFunctionLibrary.IsNoTeamkill // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x102ce90
	bool IsLocalPlayerAdmin(struct UObject* WorldContextObject); // Function LF.LFFunctionLibrary.IsLocalPlayerAdmin // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x102ce00
	bool IsGameHardcore(struct UObject* WorldContextObject); // Function LF.LFFunctionLibrary.IsGameHardcore // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x102cd70
	bool IsGameEnd(struct UObject* WorldContextObject); // Function LF.LFFunctionLibrary.IsGameEnd // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x102cce0
	bool IsEditor(); // Function LF.LFFunctionLibrary.IsEditor // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x102ccb0
	bool IsDevWave(struct UObject* WorldContextObject); // Function LF.LFFunctionLibrary.IsDevWave // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x102cc20
	bool IsDevUI(struct UObject* WorldContextObject); // Function LF.LFFunctionLibrary.IsDevUI // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x102cb90
	bool IsDevParry(struct UObject* WorldContextObject); // Function LF.LFFunctionLibrary.IsDevParry // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x102cb00
	bool IsDevMovement(struct UObject* WorldContextObject); // Function LF.LFFunctionLibrary.IsDevMovement // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x102ca70
	bool IsDevFlag(struct UObject* WorldContextObject); // Function LF.LFFunctionLibrary.IsDevFlag // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x102c9e0
	bool IsDevFirst(struct UObject* WorldContextObject); // Function LF.LFFunctionLibrary.IsDevFirst // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x102c950
	bool IsDevEvade(struct UObject* WorldContextObject); // Function LF.LFFunctionLibrary.IsDevEvade // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x102c8c0
	bool IsDevElectricity(struct UObject* WorldContextObject); // Function LF.LFFunctionLibrary.IsDevElectricity // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x102c830
	bool IsDevCharacter(struct UObject* WorldContextObject); // Function LF.LFFunctionLibrary.IsDevCharacter // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x102c7a0
	bool IsActorTargetable(struct AActor* TargetActor); // Function LF.LFFunctionLibrary.IsActorTargetable // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x102c710
	float GiveDamageToHittable(float Damage, struct FName AttackEntity, struct FName HitEntity, struct AActor* Attacker, struct AActor* HitActor); // Function LF.LFFunctionLibrary.GiveDamageToHittable // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x102c570
	float GetWaveProgress(struct UObject* WorldContextObject); // Function LF.LFFunctionLibrary.GetWaveProgress // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x102c4e0
	int32_t GetWaveAmount(struct UObject* WorldContextObject); // Function LF.LFFunctionLibrary.GetWaveAmount // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x102c450
	float GetValueWithRandomDeviation(float Value, float RandomDeviation); // Function LF.LFFunctionLibrary.GetValueWithRandomDeviation // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x102c380
	struct FString GetSteamLanguage(struct FString ApiLangCode); // Function LF.LFFunctionLibrary.GetSteamLanguage // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x102c240
	struct TArray<struct FString> GetRemoteSaveSlots(struct UObject* WorldContextObject); // Function LF.LFFunctionLibrary.GetRemoteSaveSlots // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x102c120
	bool GetPlayerNameByUniqueNetId(struct UObject* WorldContextObject, struct FString UniqueNetId, struct FString OutPlayerName); // Function LF.LFFunctionLibrary.GetPlayerNameByUniqueNetId // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x102bf20
	void GetPlayerCharacters(struct UObject* WorldContextObject, struct TArray<struct ALFCharacterPlayer*> OutPlayerCharacters); // Function LF.LFFunctionLibrary.GetPlayerCharacters // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x102be40
	struct ULFPersistentSaveGame* GetPersistentSave(struct UObject* WorldContextObject); // Function LF.LFFunctionLibrary.GetPersistentSave // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x102bdb0
	struct FText GetMessageOfTheDay(struct UObject* WorldContextObject); // Function LF.LFFunctionLibrary.GetMessageOfTheDay // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x102bcc0
	struct ALFPlayerController* GetLFLocalPlayerController(struct UObject* WorldContextObject); // Function LF.LFFunctionLibrary.GetLFLocalPlayerController // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x102bc30
	struct ALFCharacterPlayer* GetLFLocalPlayerCharacter(struct UObject* WorldContextObject); // Function LF.LFFunctionLibrary.GetLFLocalPlayerCharacter // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x102bba0
	struct FString GetLFGameVersionPostfix(struct UObject* WorldContextObject); // Function LF.LFFunctionLibrary.GetLFGameVersionPostfix // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x102bad0
	struct FString GetLFGameVersion(struct UObject* WorldContextObject); // Function LF.LFFunctionLibrary.GetLFGameVersion // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x102ba00
	struct ALFGameStateBase* GetLFGameState(struct UObject* WorldContextObject); // Function LF.LFFunctionLibrary.GetLFGameState // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x102b970
	struct ALFGameModeBase* GetLFGameMode(struct UObject* WorldContextObject); // Function LF.LFFunctionLibrary.GetLFGameMode // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x102b8e0
	struct ULFGameInstance* GetLFGameInstance(struct UObject* WorldContextObject); // Function LF.LFFunctionLibrary.GetLFGameInstance // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x102b850
	struct FVector GetInvalidLocation(); // Function LF.LFFunctionLibrary.GetInvalidLocation // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x102b810
	enum class EGameRule GetGameRule(struct UObject* WorldContextObject); // Function LF.LFFunctionLibrary.GetGameRule // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x102b780
	float GetGameDifficultyValue(struct UObject* WorldContextObject, enum class EGameDifficultyItem DifficultyItem); // Function LF.LFFunctionLibrary.GetGameDifficultyValue // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x102b6b0
	struct FText GetGameDifficultyText(enum class EGameDifficulty Difficulty); // Function LF.LFFunctionLibrary.GetGameDifficultyText // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x102b5d0
	struct FString GetGameDifficultyString(enum class EGameDifficulty Difficulty); // Function LF.LFFunctionLibrary.GetGameDifficultyString // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x102b500
	enum class EGameDifficulty GetGameDifficultyFromString(struct FString Difficulty); // Function LF.LFFunctionLibrary.GetGameDifficultyFromString // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x102b410
	enum class EGameDifficulty GetGameDifficulty(struct UObject* WorldContextObject); // Function LF.LFFunctionLibrary.GetGameDifficulty // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x102b380
	struct UGameDataManager* GetGameDataManager(struct UObject* WorldContextObject); // Function LF.LFFunctionLibrary.GetGameDataManager // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x102b2f0
	bool GetEquipmentData(struct FName ID, struct FEquipmentData OutEquipmentData); // Function LF.LFFunctionLibrary.GetEquipmentData // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x102b130
	void GetEntityEffectSoftObjectPaths(struct FName EntityId, struct TArray<struct FSoftObjectPath> OutSoftObjects); // Function LF.LFFunctionLibrary.GetEntityEffectSoftObjectPaths // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x102b010
	bool GetEntityData(struct FName EntityId, struct FEntityData OutEntityData); // Function LF.LFFunctionLibrary.GetEntityData // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x102af00
	void GetEffectSoftObjectPaths(struct FName EffectId, struct TArray<struct FSoftObjectPath> OutSoftObjects); // Function LF.LFFunctionLibrary.GetEffectSoftObjectPaths // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x102ade0
	float GetDegreeAngleDelta(float From, float To); // Function LF.LFFunctionLibrary.GetDegreeAngleDelta // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x102ad10
	float GetCurrentDateSeconds(struct UObject* WorldContextObject); // Function LF.LFFunctionLibrary.GetCurrentDateSeconds // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x102ac80
	struct FGameDate GetCurrentDate(struct UObject* WorldContextObject); // Function LF.LFFunctionLibrary.GetCurrentDate // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x102abf0
	struct FString GetCommandLineValue(struct FString Key); // Function LF.LFFunctionLibrary.GetCommandLineValue // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x102aac0
	float GetAnimMontageRateScale(struct UAnimMontage* AnimMontage); // Function LF.LFFunctionLibrary.GetAnimMontageRateScale // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x102aa30
	float GetAnimMontagePlayLengthWithRateScale(struct UAnimMontage* AnimMontage); // Function LF.LFFunctionLibrary.GetAnimMontagePlayLengthWithRateScale // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x102a9a0
	bool GetAllScreenMessagesEnabled(struct UObject* WorldContextObject); // Function LF.LFFunctionLibrary.GetAllScreenMessagesEnabled // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x102a910
	bool GetAdminPassword(struct UObject* WorldContextObject, struct FString OutPassword); // Function LF.LFFunctionLibrary.GetAdminPassword // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x102a820
	void GetActionMapping(struct FName ActionName, struct TArray<struct FKey> OutCurrentKey); // Function LF.LFFunctionLibrary.GetActionMapping // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x102a6e0
	void GetActionKeyText(struct FKey Key, struct FText OutKeyName); // Function LF.LFFunctionLibrary.GetActionKeyText // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x102a590
	struct UTexture2D* GetActionKeyIcon(struct FKey Key); // Function LF.LFFunctionLibrary.GetActionKeyIcon // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x102a4c0
	void FlushWorldComposition(struct UObject* WorldContextObject); // Function LF.LFFunctionLibrary.FlushWorldComposition // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x102a440
	bool FindEntityData(struct FName EntityName, struct FEntityData OutEntity); // Function LF.LFFunctionLibrary.FindEntityData // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x102a330
	struct AWaveSpawner* FindAndGetWaveSpawner(struct UObject* WorldContextObject); // Function LF.LFFunctionLibrary.FindAndGetWaveSpawner // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x102a2a0
	struct UFXSystemComponent* EmitEffectAttached(struct FName EffectId, struct USceneComponent* AttachToComponent, bool bManualRelease); // Function LF.LFFunctionLibrary.EmitEffectAttached // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x102a180
	struct UFXSystemComponent* EmitEffectAtLocation(struct FName EffectId, struct FVector Location); // Function LF.LFFunctionLibrary.EmitEffectAtLocation // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x102a080
	bool CopyMaterials(struct USkeletalMeshComponent* From, struct USkeletalMeshComponent* To); // Function LF.LFFunctionLibrary.CopyMaterials // (Final|Native|Static|Public) // @ game+0x1029fb0
	bool CheckTrapDebugFlag(struct UObject* WorldContextObject, int32_t Bitmask); // Function LF.LFFunctionLibrary.CheckTrapDebugFlag // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1029ee0
	bool CheckOccluded(struct UObject* WorldContextObject, struct FVector Start, enum class EDrawDebugTrace DrawDebugType, struct FHitResult Hit); // Function LF.LFFunctionLibrary.CheckOccluded // (Final|Native|Static|Public|HasOutParms|HasDefaults) // @ game+0x1029d40
	void ChangeVolumetricFogStaticLightingScattering(struct AExponentialHeightFog* Fog, float NewValue); // Function LF.LFFunctionLibrary.ChangeVolumetricFogStaticLightingScattering // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1029c80
	void ChangeLightingChannelsOfActor(struct AActor* Actor, char Channel); // Function LF.LFFunctionLibrary.ChangeLightingChannelsOfActor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1029bc0
	void ChangeLightingChannels(struct TArray<struct UPrimitiveComponent*> Primitives, char Channel); // Function LF.LFFunctionLibrary.ChangeLightingChannels // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1029aa0
	void ChangeLightingChannel(struct UPrimitiveComponent* Primitive, char Channel); // Function LF.LFFunctionLibrary.ChangeLightingChannel // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x10299e0
	void AdjustActorTransform(struct AActor* Actor); // Function LF.LFFunctionLibrary.AdjustActorTransform // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1029960
};

// Class LF.LFGameInstance
// Size: 0x398 (Inherited: 0x228)
struct ULFGameInstance : UAdvancedFriendsGameInstance {
	struct UGameDataManager* GameDataManager; // 0x228(0x08)
	struct UGameEffectManager* GameEffect; // 0x230(0x08)
	struct UGameSoundManager* GameSound; // 0x238(0x08)
	struct UGameEnvironmentManager* GameEnvironment; // 0x240(0x08)
	struct UGameOptionManager* GameOption; // 0x248(0x08)
	enum class EGameDifficulty GameDifficulty; // 0x250(0x01)
	char pad_251[0x7]; // 0x251(0x07)
	struct TMap<struct FString, char> PlayerTeams; // 0x258(0x50)
	struct TMap<struct FString, struct FName> PlayerCharacters; // 0x2a8(0x50)
	bool bGameHardcore; // 0x2f8(0x01)
	bool bNoTeamkill; // 0x2f9(0x01)
	bool bNoWave; // 0x2fa(0x01)
	bool bResourceRespawn; // 0x2fb(0x01)
	char pad_2FC[0x4]; // 0x2fc(0x04)
	struct TMap<enum class EGameDifficultyItem, float> CustomDifficulties; // 0x300(0x50)
	struct FString CachedServerName; // 0x350(0x10)
	struct FString CachedServerPassword; // 0x360(0x10)
	int32_t CachedServerMaxPlayers; // 0x370(0x04)
	char pad_374[0x4]; // 0x374(0x04)
	struct FString GameVersionPostfix; // 0x378(0x10)
	int32_t TrapDebugFlag; // 0x388(0x04)
	char pad_38C[0x4]; // 0x38c(0x04)
	struct FTimerHandle CrashRefreshTimer; // 0x390(0x08)

	void OnAfterStart(); // Function LF.LFGameInstance.OnAfterStart // (Event|Protected|BlueprintEvent) // @ game+0x1395fe0
	void OnAfterInit(); // Function LF.LFGameInstance.OnAfterInit // (Event|Protected|BlueprintEvent) // @ game+0x1395fe0
};

// Class LF.LFGameModeBase
// Size: 0x5b0 (Inherited: 0x2c0)
struct ALFGameModeBase : AGameModeBase {
	char pad_2C0[0x18]; // 0x2c0(0x18)
	struct UGameTimeManager* GameTime; // 0x2d8(0x08)
	struct UStreamingGameObjectManager* StreamingGameObject; // 0x2e0(0x08)
	struct UElectricityManager* ElectricityManager; // 0x2e8(0x08)
	struct UWaySystemManager* WaySystem; // 0x2f0(0x08)
	struct FRandomStream Random; // 0x2f8(0x08)
	struct TArray<struct AAISpawnLocation*> AllSpawners; // 0x300(0x10)
	struct FString SessionName; // 0x310(0x10)
	struct FString SessionPassword; // 0x320(0x10)
	int32_t MaxPlayers; // 0x330(0x04)
	char pad_334[0x4]; // 0x334(0x04)
	struct FString SaveName; // 0x338(0x10)
	int32_t SaveIntervalHour; // 0x348(0x04)
	char pad_34C[0x4]; // 0x34c(0x04)
	struct FString AdminPassword; // 0x350(0x10)
	struct FString DefaultMessageOfTheDay; // 0x360(0x10)
	struct FString SessionDifficulty; // 0x370(0x10)
	struct FString SessionGameMode; // 0x380(0x10)
	bool bHardcore; // 0x390(0x01)
	bool bNoWave; // 0x391(0x01)
	bool bNoTeamkill; // 0x392(0x01)
	bool bResourceRespawn; // 0x393(0x01)
	char pad_394[0x4]; // 0x394(0x04)
	struct TMap<enum class EGameDifficultyItem, float> CustomDifficulties; // 0x398(0x50)
	struct FGameDate LastAutoSavedDate; // 0x3e8(0x10)
	struct FGameDate AutoSavedInterval; // 0x3f8(0x10)
	struct FMulticastInlineDelegate OnAfterSave; // 0x408(0x10)
	bool bIsPendingReset; // 0x418(0x01)
	char pad_419[0x3]; // 0x419(0x03)
	float ResetPausedSeconds; // 0x41c(0x04)
	float SecondsPerDay; // 0x420(0x04)
	int32_t DayDivide; // 0x424(0x04)
	float PausedSeconds; // 0x428(0x04)
	float UnpausedSeconds; // 0x42c(0x04)
	float RecentPausedSeconds; // 0x430(0x04)
	char pad_434[0x4]; // 0x434(0x04)
	struct TArray<float> UnpausedSecondsOfDays; // 0x438(0x10)
	struct TArray<float> PausedSecondsOfDays; // 0x448(0x10)
	int32_t RecentDayCountForReset; // 0x458(0x04)
	float UnpausedSecondsOfRecentDayForNoReset; // 0x45c(0x04)
	int32_t MaximumZombieCount; // 0x460(0x04)
	int32_t WaveDayCountForReset; // 0x464(0x04)
	int32_t WaveZombieCountForCheckReset; // 0x468(0x04)
	float UnpausedSecondsOfWaveForNoReset; // 0x46c(0x04)
	int32_t WaveZombieCountForCheckReset_3; // 0x470(0x04)
	float UnpausedSecondsOfWaveForNoReset_3; // 0x474(0x04)
	struct FLFTeam NoTeam; // 0x478(0x90)
	struct TArray<struct FLFTeamId> TeamIds; // 0x508(0x10)
	struct FTimerHandle AutoSaveHandle; // 0x518(0x08)
	char pad_520[0x4]; // 0x520(0x04)
	int32_t RandomTeamPortalOffset; // 0x524(0x04)
	struct FLFTeamAgentId HostAgentId; // 0x528(0x20)
	bool bIsGameStarted; // 0x548(0x01)
	char pad_549[0x3]; // 0x549(0x03)
	struct FGameDate SavedDate; // 0x54c(0x10)
	bool bGameLoaded; // 0x55c(0x01)
	char pad_55D[0x53]; // 0x55d(0x53)

	void UnBanPlayer(struct FLFGamePlayerId BannedPlayer); // Function LF.LFGameModeBase.UnBanPlayer // (Final|Native|Public) // @ game+0x1033210
	bool ShouldLoadPlayer(); // Function LF.LFGameModeBase.ShouldLoadPlayer // (Native|Event|Public|BlueprintEvent|Const) // @ game+0x10331e0
	void SetMessageOfTheDay(struct FText Message); // Function LF.LFGameModeBase.SetMessageOfTheDay // (Final|Native|Public|HasOutParms) // @ game+0x1032e90
	void SendEmailReportForServerReset(enum class EServerResetReason Reason, struct FString Detail); // Function LF.LFGameModeBase.SendEmailReportForServerReset // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void SaveGameToCurrentSlot(); // Function LF.LFGameModeBase.SaveGameToCurrentSlot // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void RefreshMessageOfTheDay(); // Function LF.LFGameModeBase.RefreshMessageOfTheDay // (Final|Native|Public) // @ game+0x1032650
	void OnLevelLoaded(); // Function LF.LFGameModeBase.OnLevelLoaded // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1032610
	void OnEndGame(); // Function LF.LFGameModeBase.OnEndGame // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void OnDayPassed(); // Function LF.LFGameModeBase.OnDayPassed // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void InitializeWaySystem(); // Function LF.LFGameModeBase.InitializeWaySystem // (Final|Native|Protected) // @ game+0x1032380
	void InitializePlayer(); // Function LF.LFGameModeBase.InitializePlayer // (Final|Native|Protected) // @ game+0xc20320
	void InitializeGameTime(); // Function LF.LFGameModeBase.InitializeGameTime // (Final|Native|Protected) // @ game+0x1032360
	void InitializeAllSpawners(); // Function LF.LFGameModeBase.InitializeAllSpawners // (Final|Native|Protected) // @ game+0x1032340
	void InitializeAll(); // Function LF.LFGameModeBase.InitializeAll // (Final|Native|Protected|BlueprintCallable) // @ game+0x1032320
	void GetAllSpawners(struct TArray<struct AAISpawnLocation*> OutSpawners); // Function LF.LFGameModeBase.GetAllSpawners // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1031dc0
	struct FMulticastInlineDelegate GetAfterSaveDelegate(); // Function LF.LFGameModeBase.GetAfterSaveDelegate // (Final|Native|Public) // @ game+0x1031c10
	void ExecuteAutoSave(); // Function LF.LFGameModeBase.ExecuteAutoSave // (Event|Protected|BlueprintEvent) // @ game+0x1395fe0
	void CheckAutoSave(); // Function LF.LFGameModeBase.CheckAutoSave // (Final|Native|Protected) // @ game+0x1031820
	void ChangeSaveAndExit(); // Function LF.LFGameModeBase.ChangeSaveAndExit // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void BanPlayer(struct FLFGamePlayerId BannedPlayer, struct FText BanReason); // Function LF.LFGameModeBase.BanPlayer // (Final|Native|Public|HasOutParms) // @ game+0x1031650
	void ApplyGameSettings(); // Function LF.LFGameModeBase.ApplyGameSettings // (Final|Native|Public|BlueprintCallable) // @ game+0x10315f0
	void AdminSaveAs(struct FString SaveSlot); // Function LF.LFGameModeBase.AdminSaveAs // (Final|Native|Public) // @ game+0x1031550
	void AdminSave(); // Function LF.LFGameModeBase.AdminSave // (Final|Native|Public) // @ game+0x1031530
	void AdminCheat(struct FString Command); // Function LF.LFGameModeBase.AdminCheat // (Final|Native|Public) // @ game+0x1031490
};

// Class LF.LFGameModeLobby
// Size: 0x5b0 (Inherited: 0x5b0)
struct ALFGameModeLobby : ALFGameModeBase {
};

// Class LF.LFGameModeMulti
// Size: 0x5b0 (Inherited: 0x5b0)
struct ALFGameModeMulti : ALFGameModeBase {
};

// Class LF.LFGameModeSingle
// Size: 0x5b0 (Inherited: 0x5b0)
struct ALFGameModeSingle : ALFGameModeBase {
};

// Class LF.LFGameOptionFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct ULFGameOptionFunctionLibrary : UBlueprintFunctionLibrary {

	void SetGameKeyGuideOption(struct UObject* WorldContextObject, bool bEnable); // Function LF.LFGameOptionFunctionLibrary.SetGameKeyGuideOption // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1032c60
	void SetCloseUIOnAttackedOption(struct UObject* WorldContextObject, bool bEnable); // Function LF.LFGameOptionFunctionLibrary.SetCloseUIOnAttackedOption // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1032820
	void SetCameraShakeOption(struct UObject* WorldContextObject, bool bEnable); // Function LF.LFGameOptionFunctionLibrary.SetCameraShakeOption // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1032760
	bool IsGameKeyGuideEnabled(struct UObject* WorldContextObject); // Function LF.LFGameOptionFunctionLibrary.IsGameKeyGuideEnabled // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x10324f0
	bool IsCloseUIOnAttackedEnabled(struct UObject* WorldContextObject); // Function LF.LFGameOptionFunctionLibrary.IsCloseUIOnAttackedEnabled // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1032430
	bool IsCameraShakeOptionEnabled(struct UObject* WorldContextObject); // Function LF.LFGameOptionFunctionLibrary.IsCameraShakeOptionEnabled // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x10323a0
};

// Class LF.LFGameSession
// Size: 0x238 (Inherited: 0x238)
struct ALFGameSession : AGameSession {
};

// Class LF.LFGameStateBase
// Size: 0x3b0 (Inherited: 0x270)
struct ALFGameStateBase : AGameStateBase {
	char pad_270[0x8]; // 0x270(0x08)
	struct FLFSessionInfo SessionInfo; // 0x278(0x28)
	struct TArray<struct FLFGamePlayerId> BannedPlayers; // 0x2a0(0x10)
	struct TArray<struct FLFTeam> LFTeams; // 0x2b0(0x10)
	struct TArray<struct FLFTeam> LFPropertyTeams; // 0x2c0(0x10)
	struct TArray<struct FLFSaveSlotInfo> SaveGamesInfo; // 0x2d0(0x10)
	struct TArray<struct FLFPlayerArchive> PlayerArchive; // 0x2e0(0x10)
	enum class EGameDifficulty GameDifficulty; // 0x2f0(0x01)
	char pad_2F1[0x7]; // 0x2f1(0x07)
	struct TMap<enum class EGameDifficultyItem, float> CustomDifficulties; // 0x2f8(0x50)
	int32_t CustomDifficultRate; // 0x348(0x04)
	enum class EGameRule GameRule; // 0x34c(0x01)
	bool bGameHardcore; // 0x34d(0x01)
	bool bNoTeamkill; // 0x34e(0x01)
	bool bNoWave; // 0x34f(0x01)
	bool bResourceRespawn; // 0x350(0x01)
	char pad_351[0x7]; // 0x351(0x07)
	struct FString AdminPassword; // 0x358(0x10)
	struct FText MessageOfTheDay; // 0x368(0x18)
	struct FString DefaultMessageOfTheDay; // 0x380(0x10)
	struct FGameDate CurrentGameDate; // 0x390(0x10)
	float WaveProgress; // 0x3a0(0x04)
	int32_t WaveAmount; // 0x3a4(0x04)
	bool bIsGameEnd; // 0x3a8(0x01)
	char pad_3A9[0x7]; // 0x3a9(0x07)

	void UpdateSaveGamesInfo(); // Function LF.LFGameStateBase.UpdateSaveGamesInfo // (Final|Native|Public) // @ game+0x1033350
	void SetResourceRespawn(bool bNewFlag); // Function LF.LFGameStateBase.SetResourceRespawn // (Final|Native|Public|BlueprintCallable) // @ game+0x1033150
	void SetNoWave(bool bNewFlag); // Function LF.LFGameStateBase.SetNoWave // (Final|Native|Public|BlueprintCallable) // @ game+0x10330c0
	void SetNoTeamKill(bool bNewFlag); // Function LF.LFGameStateBase.SetNoTeamKill // (Final|Native|Public|BlueprintCallable) // @ game+0x1033030
	void SetMessageOfTheDay(struct FText InMessage); // Function LF.LFGameStateBase.SetMessageOfTheDay // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1032f60
	void SetGameRuleFromString(struct FString InGameRuleString); // Function LF.LFGameStateBase.SetGameRuleFromString // (Final|Native|Public|BlueprintCallable) // @ game+0x1032da0
	void SetGameRule(enum class EGameRule InGameRule); // Function LF.LFGameStateBase.SetGameRule // (Final|Native|Public|BlueprintCallable) // @ game+0x1032d20
	void SetGameHardcore(bool bHardcore); // Function LF.LFGameStateBase.SetGameHardcore // (Final|Native|Public|BlueprintCallable) // @ game+0x1032bd0
	void SetGameDifficulty(enum class EGameDifficulty Difficulty); // Function LF.LFGameStateBase.SetGameDifficulty // (Final|Native|Public|BlueprintCallable) // @ game+0x1032b50
	void SetGameCustomDifficultRate(int32_t Rate); // Function LF.LFGameStateBase.SetGameCustomDifficultRate // (Final|Native|Public|BlueprintCallable) // @ game+0x1032980
	void SetGameCustomDifficulties(struct TMap<enum class EGameDifficultyItem, float> Difficulties); // Function LF.LFGameStateBase.SetGameCustomDifficulties // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1032a10
	void SetDefaultMessageOfTheDay(struct FString InMessage); // Function LF.LFGameStateBase.SetDefaultMessageOfTheDay // (Final|Native|Public|BlueprintCallable) // @ game+0x10328e0
	void SetAdminPassword(struct FString InAdminPassword); // Function LF.LFGameStateBase.SetAdminPassword // (Final|Native|Public|BlueprintCallable) // @ game+0x1032670
	bool IsResourceRespawn(); // Function LF.LFGameStateBase.IsResourceRespawn // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10325e0
	bool IsNoWave(); // Function LF.LFGameStateBase.IsNoWave // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10325b0
	bool IsNoTeamkill(); // Function LF.LFGameStateBase.IsNoTeamkill // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1032580
	bool IsGameHardcore(); // Function LF.LFGameStateBase.IsGameHardcore // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10324c0
	float GetWaveProgress(); // Function LF.LFGameStateBase.GetWaveProgress // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10322f0
	int32_t GetWaveAmount(); // Function LF.LFGameStateBase.GetWaveAmount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10322c0
	struct FText GetMessageOfTheDay(); // Function LF.LFGameStateBase.GetMessageOfTheDay // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1032220
	struct FString GetGameRuleString(); // Function LF.LFGameStateBase.GetGameRuleString // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10321a0
	enum class EGameRule GetGameRule(); // Function LF.LFGameStateBase.GetGameRule // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1032170
	enum class EGameDifficulty GetGameDifficulty(); // Function LF.LFGameStateBase.GetGameDifficulty // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1032140
	int32_t GetGameCustomDifficultRate(); // Function LF.LFGameStateBase.GetGameCustomDifficultRate // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1031fd0
	void GetGameCustomDifficulties(struct TMap<enum class EGameDifficultyItem, float> OutDifficulties); // Function LF.LFGameStateBase.GetGameCustomDifficulties // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x1032000
	struct FString GetDifficultyString(); // Function LF.LFGameStateBase.GetDifficultyString // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1031f50
	struct FString GetDefaultMessageOfTheDay(); // Function LF.LFGameStateBase.GetDefaultMessageOfTheDay // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1031ed0
	int32_t GetCurrentSeconds(); // Function LF.LFGameStateBase.GetCurrentSeconds // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1031ea0
	struct FGameDate GetCurrentDate(); // Function LF.LFGameStateBase.GetCurrentDate // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1031e70
	void GetAllPlayerArchive(struct TArray<struct FLFPlayerArchive> OutPlayerArchive); // Function LF.LFGameStateBase.GetAllPlayerArchive // (Final|Native|Public|HasOutParms) // @ game+0x1031ca0
	struct FString GetAdminPassword(); // Function LF.LFGameStateBase.GetAdminPassword // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1031b90
	bool FindPlayerArchive(struct FString InPlayerName, struct FString InPlayerNetId, struct FLFPlayerArchive OutPlayerArchive); // Function LF.LFGameStateBase.FindPlayerArchive // (Final|Native|Public|HasOutParms) // @ game+0x1031840
	void AddPlayerArchive(struct FLFPlayerArchive InPlayerArchive); // Function LF.LFGameStateBase.AddPlayerArchive // (Final|Native|Public|HasOutParms) // @ game+0x10312a0
};

// Class LF.LFGroundAnimalCharacter
// Size: 0x820 (Inherited: 0x770)
struct ALFGroundAnimalCharacter : ALFAnimalCharacter {
	char pad_770[0x8]; // 0x770(0x08)
	struct ULFGroundAnimalMovementComponent* GroundAnimalMovement; // 0x778(0x08)
	struct UFootstepComponent* Footstep; // 0x780(0x08)
	struct TArray<struct UMaterialInstanceDynamic*> MaterialInstances; // 0x788(0x10)
	struct AEquipmentEntity* Weapon; // 0x798(0x08)
	struct AEquipmentEntity* SubWeapon; // 0x7a0(0x08)
	enum class EAnimalBehaviorType BehaviorType; // 0x7a8(0x01)
	char pad_7A9[0x3]; // 0x7a9(0x03)
	float FleeHP; // 0x7ac(0x04)
	float CombatAvoidProbability; // 0x7b0(0x04)
	float AvoidLoopProbability; // 0x7b4(0x04)
	float HitAvoidProbability; // 0x7b8(0x04)
	bool bUseDynamicMaterial; // 0x7bc(0x01)
	char pad_7BD[0x3]; // 0x7bd(0x03)
	struct TMap<struct FName, float> FireMaterialValues; // 0x7c0(0x50)
	struct FName WeaponName; // 0x810(0x08)
	char pad_818[0x8]; // 0x818(0x08)

	void StopAttack(); // Function LF.LFGroundAnimalCharacter.StopAttack // (Native|Public|BlueprintCallable) // @ game+0x102d730
	void PlayWeaponSound(); // Function LF.LFGroundAnimalCharacter.PlayWeaponSound // (Final|Native|Public) // @ game+0x1032630
	bool IsPredator(); // Function LF.LFGroundAnimalCharacter.IsPredator // (Event|Public|BlueprintEvent|Const) // @ game+0x1395fe0
	bool IsChasing(); // Function LF.LFGroundAnimalCharacter.IsChasing // (Event|Public|BlueprintEvent|Const) // @ game+0x1395fe0
	struct AEquipmentEntity* CreateWeapon(); // Function LF.LFGroundAnimalCharacter.CreateWeapon // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	struct AEquipmentEntity* CreateSubWeapon(); // Function LF.LFGroundAnimalCharacter.CreateSubWeapon // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	float Attack(); // Function LF.LFGroundAnimalCharacter.Attack // (Native|Public|BlueprintCallable) // @ game+0x1031610
};

// Class LF.LFGroundAnimalMovementComponent
// Size: 0xb40 (Inherited: 0xb10)
struct ULFGroundAnimalMovementComponent : ULFAnimalMovementComponent {
	float DesiredSpeed; // 0xb10(0x04)
	float CurrentMaxWalkSpeed; // 0xb14(0x04)
	float DesiredDelta; // 0xb18(0x04)
	float CombatAccelInterp; // 0xb1c(0x04)
	float CombatAccel; // 0xb20(0x04)
	float AnimalAccel; // 0xb24(0x04)
	char pad_B28[0x18]; // 0xb28(0x18)

	void TryRunning(); // Function LF.LFGroundAnimalMovementComponent.TryRunning // (Final|Native|Public|BlueprintCallable) // @ game+0x1039bb0
	void StopRunning(); // Function LF.LFGroundAnimalMovementComponent.StopRunning // (Final|Native|Public|BlueprintCallable) // @ game+0x10397a0
	void StopOnDied(); // Function LF.LFGroundAnimalMovementComponent.StopOnDied // (Final|Native|Public|BlueprintCallable) // @ game+0x1039780
	void SetSpeed(float InWalkingSpeed, float InRunningSpeed, float InExaustedRunningSpeed, float InExaustSpeedBlendTime); // Function LF.LFGroundAnimalMovementComponent.SetSpeed // (Final|Native|Public|BlueprintCallable) // @ game+0x1039550
	void OnRep_CurrentMaxWalkSpeed(); // Function LF.LFGroundAnimalMovementComponent.OnRep_CurrentMaxWalkSpeed // (Final|Native|Public) // @ game+0x1038510
	void AccelerateMoveSpeed(float InAccel); // Function LF.LFGroundAnimalMovementComponent.AccelerateMoveSpeed // (Final|Native|Public|BlueprintCallable) // @ game+0x1036970
};

// Class LF.LFHookComponent
// Size: 0xc0 (Inherited: 0xb0)
struct ULFHookComponent : UActorComponent {
	char pad_B0[0x8]; // 0xb0(0x08)
	struct AActor* Target; // 0xb8(0x08)
};

// Class LF.LFHudWidget
// Size: 0x298 (Inherited: 0x260)
struct ULFHudWidget : UUserWidget {
	struct ULFPlayerStatusComponent* StatusComponent; // 0x260(0x08)
	struct TArray<struct FName> CrosshairHiddenRangeWeapons; // 0x268(0x10)
	float CurrentHealth; // 0x278(0x04)
	float MaxHealth; // 0x27c(0x04)
	float ConditionHealth; // 0x280(0x04)
	float CurrentStamina; // 0x284(0x04)
	float MaxStamina; // 0x288(0x04)
	float ConditionStamina; // 0x28c(0x04)
	float CurrentCondition; // 0x290(0x04)
	float MaxCondition; // 0x294(0x04)

	void UpdateCompassMarker(); // Function LF.LFHudWidget.UpdateCompassMarker // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void ShowWave(); // Function LF.LFHudWidget.ShowWave // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void ShowStatus(); // Function LF.LFHudWidget.ShowStatus // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void ShowCrosshair(); // Function LF.LFHudWidget.ShowCrosshair // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void ShowCompass(); // Function LF.LFHudWidget.ShowCompass // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void RemoveCompassMarker(struct AActor* Marker); // Function LF.LFHudWidget.RemoveCompassMarker // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void OnRefreshWaveProgress(float Progress); // Function LF.LFHudWidget.OnRefreshWaveProgress // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void OnRefreshGameTime(struct FGameDate GameDate); // Function LF.LFHudWidget.OnRefreshGameTime // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1395fe0
	void OnRefreshEquipmentStatus(enum class EEquipmentStatus Status); // Function LF.LFHudWidget.OnRefreshEquipmentStatus // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void OnRefreshCharacterStatus(enum class ECharacterStatus Status); // Function LF.LFHudWidget.OnRefreshCharacterStatus // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void OnOtherUIOpen(); // Function LF.LFHudWidget.OnOtherUIOpen // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void OnOtherUIClose(); // Function LF.LFHudWidget.OnOtherUIClose // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void OnMinutePassed(); // Function LF.LFHudWidget.OnMinutePassed // (Final|Native|Public|BlueprintCallable) // @ game+0x10384f0
	void HideWave(); // Function LF.LFHudWidget.HideWave // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void HideStatus(); // Function LF.LFHudWidget.HideStatus // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void HideCrosshair(); // Function LF.LFHudWidget.HideCrosshair // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void HideCompass(); // Function LF.LFHudWidget.HideCompass // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void AddCompassMarker(struct AActor* Marker); // Function LF.LFHudWidget.AddCompassMarker // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
};

// Class LF.LFInfoSaveGame
// Size: 0x98 (Inherited: 0x58)
struct ULFInfoSaveGame : UEMSInfoSaveGame {
	bool bIsStandalone; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	struct FGameDate GameDate; // 0x5c(0x10)
	enum class EGameDifficulty GameDifficulty; // 0x6c(0x01)
	enum class EGameRule GameRule; // 0x6d(0x01)
	bool bGameHardcore; // 0x6e(0x01)
	bool bNoTeamkill; // 0x6f(0x01)
	bool bNoWave; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
	struct TArray<struct FLFPlayerInfo> Players; // 0x78(0x10)
	struct FString GameVersion; // 0x88(0x10)
};

// Class LF.LFInventoryComponent
// Size: 0x3a0 (Inherited: 0xb8)
struct ULFInventoryComponent : ULFActorComponent {
	char pad_B8[0x10]; // 0xb8(0x10)
	struct FName ResearchDataID; // 0xc8(0x08)
	int32_t MinimumSlotAmount; // 0xd0(0x04)
	int32_t DefaultSlotAmount; // 0xd4(0x04)
	int32_t RegularSlotBuffer; // 0xd8(0x04)
	int32_t SlotAmount; // 0xdc(0x04)
	int32_t LocalSlotAmount; // 0xe0(0x04)
	int32_t EquipmentBufferSlotAmount; // 0xe4(0x04)
	int32_t MaxQuickSlot; // 0xe8(0x04)
	float DropHeightOffset; // 0xec(0x04)
	struct AItemEntity* CorpseLootItemClass; // 0xf0(0x08)
	struct TArray<struct FInventoryItem> PendingDisownItems; // 0xf8(0x10)
	struct TArray<struct FInventoryItem> UnequippingItems; // 0x108(0x10)
	struct TArray<struct FInventoryItem> OwningItems; // 0x118(0x10)
	struct TArray<struct FInventoryItem_Net> OwningItems_Net; // 0x128(0x10)
	struct TArray<struct FInventoryItem> EquipmentItemsBuffer; // 0x138(0x10)
	struct TArray<struct FInventoryItem_Net> EquipmentItemsBuffer_Net; // 0x148(0x10)
	struct TArray<struct FQuickSlotItem> QuickSlotItems; // 0x158(0x10)
	struct TArray<struct FQuickSlotItem_Net> QuickSlotItems_Net; // 0x168(0x10)
	char pad_178[0x8]; // 0x178(0x08)
	struct TArray<struct FName> DefaultItemNames; // 0x180(0x10)
	struct TArray<struct FName> DefaultSupplyItems; // 0x190(0x10)
	struct TArray<struct FName> DefaultBagNames; // 0x1a0(0x10)
	struct TMap<int32_t, struct FName> DefaultQuickSlotItemNames; // 0x1b0(0x50)
	struct FMulticastInlineDelegate OnItemOwned; // 0x200(0x10)
	struct TArray<int32_t> EquippingItems; // 0x210(0x10)
	enum class EItemType CurrentShowingType; // 0x220(0x01)
	char pad_221[0x3]; // 0x221(0x03)
	int32_t LastEquipmentItemSlot; // 0x224(0x04)
	bool bCanAutoUse; // 0x228(0x01)
	char pad_229[0x7]; // 0x229(0x07)
	struct TArray<enum class ECraftCategory> HandmadeCategories; // 0x230(0x10)
	enum class EInventoryOpenType CurrentOpenState; // 0x240(0x01)
	char pad_241[0x7]; // 0x241(0x07)
	struct TScriptInterface<None> CurrentStore; // 0x248(0x10)
	struct FInventoryItem EmptyItem; // 0x258(0xf8)
	struct TMap<int32_t, int32_t> OwnToShow; // 0x350(0x50)

	void UseQuickSlot(int32_t QuickSlotIndex); // Function LF.LFInventoryComponent.UseQuickSlot // (Final|Native|Public|BlueprintCallable) // @ game+0x1039ea0
	void UseItem(int32_t UsedItemSlot, bool bRealIndex, bool bRefreshInventory, bool bIgnoreStore, bool bForceUse, bool bFromUser, int32_t DesiredIndex); // Function LF.LFInventoryComponent.UseItem // (Final|Native|Public|BlueprintCallable) // @ game+0x1039c60
	void UnassignQuickSlot(int32_t QuickSlotIndex); // Function LF.LFInventoryComponent.UnassignQuickSlot // (Final|Native|Public|BlueprintCallable) // @ game+0x1039bd0
	void TakeAllFromStore(); // Function LF.LFInventoryComponent.TakeAllFromStore // (Final|Native|Public|BlueprintCallable) // @ game+0x1039b90
	void SwapStoreItems(int32_t FromIndexToSwap, int32_t ToIndexToSwap, bool bSplitHalf); // Function LF.LFInventoryComponent.SwapStoreItems // (Final|Native|Public|BlueprintCallable) // @ game+0x1039a80
	void SwapOwningItems(int32_t TargetIndex, int32_t PayloadIndex, bool bSplitHalf); // Function LF.LFInventoryComponent.SwapOwningItems // (Final|Native|Public|BlueprintCallable) // @ game+0x1039970
	void SwapInventoryAndStore(int32_t InventoryIndexToSwap, int32_t StoreIndexToSwap, bool bStoreToInventory, bool bInventoryToStore, bool bSplitHalf); // Function LF.LFInventoryComponent.SwapInventoryAndStore // (Final|Native|Public|BlueprintCallable) // @ game+0x10397c0
	void SortInventory(enum class EItemType SortType); // Function LF.LFInventoryComponent.SortInventory // (Final|Native|Public|BlueprintCallable) // @ game+0x1039700
	void SortCurrentStore(); // Function LF.LFInventoryComponent.SortCurrentStore // (Final|Native|Public|BlueprintCallable) // @ game+0x10396e0
	bool ShouldPayloadSplit(); // Function LF.LFInventoryComponent.ShouldPayloadSplit // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10396b0
	void ServerUnassignQuickSlot(int32_t QuickSlotIndex); // Function LF.LFInventoryComponent.ServerUnassignQuickSlot // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x10394c0
	void ServerSwapStoreItems(int32_t FromIndexToSwap, int32_t ToIndexToSwap, bool bSplitHalf, struct UObject* StoreObject); // Function LF.LFInventoryComponent.ServerSwapStoreItems // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x1039360
	void ServerSwapOwningItems(int32_t TargetIndex, int32_t PayloadIndex, bool bSplitHalf); // Function LF.LFInventoryComponent.ServerSwapOwningItems // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x1039250
	void ServerSwapItems(int32_t InventoryToStore, int32_t StoreToInventory, struct UObject* StoreObject); // Function LF.LFInventoryComponent.ServerSwapItems // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x1039150
	void ServerStoreFromInventory(struct FInventoryItem InventoryItem, int32_t InventoryIndex, int32_t DesiredIndex, struct UObject* StoreObject); // Function LF.LFInventoryComponent.ServerStoreFromInventory // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x1038fb0
	void ServerSortStore(struct AActor* StoreActor); // Function LF.LFInventoryComponent.ServerSortStore // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x1038f20
	void ServerRearrangeInventory(); // Function LF.LFInventoryComponent.ServerRearrangeInventory // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x1020e90
	void ServerOwnItemsFromStore(struct TArray<struct FOwningItemData> Items, struct UObject* StoreObject); // Function LF.LFInventoryComponent.ServerOwnItemsFromStore // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x1038e30
	void ServerOwnFromStore(struct FInventoryItem StoreToInventory, int32_t StoreIndex, int32_t DesiredIndex, struct UObject* StoreObject); // Function LF.LFInventoryComponent.ServerOwnFromStore // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x1038c90
	void ServerExecuteUseItem(int32_t UsedItemSlot); // Function LF.LFInventoryComponent.ServerExecuteUseItem // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x1038c00
	void ServerDropItem(struct FInventoryItem DroppedItem, int32_t ItemIndex, bool bRemoveFromInventory, struct FHitResult Focus); // Function LF.LFInventoryComponent.ServerDropItem // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x10389c0
	void ServerDisownInventoryItem(struct FInventoryItem ItemToDisown, int32_t DesiredIndex, bool bNotify); // Function LF.LFInventoryComponent.ServerDisownInventoryItem // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x1038860
	void ServerCloseStore(struct AActor* StoreActor); // Function LF.LFInventoryComponent.ServerCloseStore // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x10387d0
	void ServerAssignQuickSlot(int32_t ItemOwningIndex, int32_t QuickSlotIndex); // Function LF.LFInventoryComponent.ServerAssignQuickSlot // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x1038700
	void RefreshInventory(enum class EItemType SortType, bool bRefreshPreview); // Function LF.LFInventoryComponent.RefreshInventory // (Final|Native|Public|BlueprintCallable) // @ game+0x1038630
	void RearrangeInventory(enum class EItemType SortType); // Function LF.LFInventoryComponent.RearrangeInventory // (Final|Native|Public|BlueprintCallable) // @ game+0x10385b0
	void OnRep_SlotAmount(); // Function LF.LFInventoryComponent.OnRep_SlotAmount // (Final|Native|Public) // @ game+0x1038590
	void OnRep_QuickSlotItems(); // Function LF.LFInventoryComponent.OnRep_QuickSlotItems // (Final|Native|Public) // @ game+0x1038570
	void OnRep_OwningItems(); // Function LF.LFInventoryComponent.OnRep_OwningItems // (Final|Native|Public) // @ game+0x1038550
	void OnRep_EquipmentItems(); // Function LF.LFInventoryComponent.OnRep_EquipmentItems // (Final|Native|Public) // @ game+0x1038530
	void MoveItemFromStoreToInventory(int32_t StoreSlot); // Function LF.LFInventoryComponent.MoveItemFromStoreToInventory // (Final|Native|Public|BlueprintCallable) // @ game+0x1038460
	bool IsStoreTakeOnly(); // Function LF.LFInventoryComponent.IsStoreTakeOnly // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1038430
	bool IsStoreOpen(); // Function LF.LFInventoryComponent.IsStoreOpen // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1038400
	bool IsInventoryFull(); // Function LF.LFInventoryComponent.IsInventoryFull // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10383d0
	bool IsEquippingItemByEntityName(struct FName EntityName); // Function LF.LFInventoryComponent.IsEquippingItemByEntityName // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x1038330
	bool IsEquippingItem(int32_t Index); // Function LF.LFInventoryComponent.IsEquippingItem // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1038290
	bool IsAssignedInQuickSlot(int32_t ItemOwningIndex); // Function LF.LFInventoryComponent.IsAssignedInQuickSlot // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x10381f0
	bool HasAmmo(struct FItemId WeaponId); // Function LF.LFInventoryComponent.HasAmmo // (Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x1038140
	enum class EItemType GetStoreItemType(); // Function LF.LFInventoryComponent.GetStoreItemType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1038110
	int32_t GetShowingIndexFromName(struct FName ItemName); // Function LF.LFInventoryComponent.GetShowingIndexFromName // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x1038070
	int32_t GetShowingIndex(int32_t OwningIndex); // Function LF.LFInventoryComponent.GetShowingIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1037fd0
	int32_t GetRealIndexOfShowingItem(int32_t ShowingIndex); // Function LF.LFInventoryComponent.GetRealIndexOfShowingItem // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1037f30
	struct TArray<struct FInventoryItem> GetOwningItems(); // Function LF.LFInventoryComponent.GetOwningItems // (Native|Public|BlueprintCallable) // @ game+0x1037e90
	int32_t GetOwningIndexOfQuickSlotItem(int32_t QuickSlotIndex); // Function LF.LFInventoryComponent.GetOwningIndexOfQuickSlotItem // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1037df0
	int32_t GetOwningIndexFromName(struct FName ItemName); // Function LF.LFInventoryComponent.GetOwningIndexFromName // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x1037d50
	int32_t GetOwningIndexFromItemId(struct FItemId ItemId); // Function LF.LFInventoryComponent.GetOwningIndexFromItemId // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x1037ca0
	int32_t GetOwningIndexFromItem(struct FInventoryItem Item); // Function LF.LFInventoryComponent.GetOwningIndexFromItem // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x1037bd0
	int32_t GetOwningIndex(struct FEntityData Item); // Function LF.LFInventoryComponent.GetOwningIndex // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x1037b10
	int32_t GetOwningAmount(struct FEntityData Item); // Function LF.LFInventoryComponent.GetOwningAmount // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x1037a50
	int32_t GetHalfAmount(struct FInventoryItem Item); // Function LF.LFInventoryComponent.GetHalfAmount // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x1037980
	struct FInventoryItem GetEquippingItem(enum class EEquipmentSlot Slot); // Function LF.LFInventoryComponent.GetEquippingItem // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10377a0
	int32_t GetEquipmentTier(struct FName ItemName); // Function LF.LFInventoryComponent.GetEquipmentTier // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x1037700
	int32_t GetEquipmentIndex(enum class EEquipmentSlot EquipmentSlot); // Function LF.LFInventoryComponent.GetEquipmentIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1037670
	int32_t GetCurrentWeaponLoadedAmmoAmount(); // Function LF.LFInventoryComponent.GetCurrentWeaponLoadedAmmoAmount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1037640
	bool GetCurrentWeaponItemId(struct FItemId OutItemId); // Function LF.LFInventoryComponent.GetCurrentWeaponItemId // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x1037590
	int32_t GetCurrentWeaponAmmoAmount(); // Function LF.LFInventoryComponent.GetCurrentWeaponAmmoAmount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1037560
	bool GetAmmoEntityDataFromWeaponId(struct FItemId WeaponId, struct FEntityData OutAmmoEntityData); // Function LF.LFInventoryComponent.GetAmmoEntityDataFromWeaponId // (Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x1037440
	int32_t GetAmmoAmount(struct FItemId WeaponId); // Function LF.LFInventoryComponent.GetAmmoAmount // (Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x1037390
	int32_t GetAllResearchDataAmount(); // Function LF.LFInventoryComponent.GetAllResearchDataAmount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1037360
	int32_t FindItemIndex(struct FInventoryItem Item, bool bPreferUnequippedItem, bool bPreferEquippedItem); // Function LF.LFInventoryComponent.FindItemIndex // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x10371e0
	bool FindItemData(struct FName ItemName, struct FItemData OutItemData); // Function LF.LFInventoryComponent.FindItemData // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x10370c0
	int32_t FindEntityItemIndex(struct FEntityData Item, bool bPreferUnequippedItem, bool bPreferEquippedItem); // Function LF.LFInventoryComponent.FindEntityItemIndex // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x1036f60
	void DropLootItem(struct TArray<struct FInventoryItem> AdditionalDropItems); // Function LF.LFInventoryComponent.DropLootItem // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1036e90
	void DropItem(struct FInventoryItem DroppedItem, int32_t ItemIndex, bool bRemoveFromInventory, bool bShouldRefreshInventory); // Function LF.LFInventoryComponent.DropItem // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1036cd0
	void CloseInventoryBP(); // Function LF.LFInventoryComponent.CloseInventoryBP // (Final|Native|Public|BlueprintCallable) // @ game+0x1036cb0
	void ClientShowOwningNotifications(struct TArray<struct FOwningNotificationItem> NotificationItems); // Function LF.LFInventoryComponent.ClientShowOwningNotifications // (Net|Native|Event|Public|NetClient) // @ game+0x1036c10
	void ClientShowOwningNotification(struct FOwningNotificationItem NotificationItem); // Function LF.LFInventoryComponent.ClientShowOwningNotification // (Net|Native|Event|Public|NetClient) // @ game+0x1036b70
	void ClientOnRefreshInventory(bool bRefreshPreview); // Function LF.LFInventoryComponent.ClientOnRefreshInventory // (Net|Native|Event|Public|NetClient) // @ game+0x1036ae0
	void ClientCreateInventoryWidget(); // Function LF.LFInventoryComponent.ClientCreateInventoryWidget // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x1036ac0
	void AssignQuickSlot(int32_t ItemOwningIndex, int32_t QuickSlotIndex); // Function LF.LFInventoryComponent.AssignQuickSlot // (Final|Native|Public|BlueprintCallable) // @ game+0x10369f0
};

// Class LF.LFMessageWidget
// Size: 0x260 (Inherited: 0x260)
struct ULFMessageWidget : UUserWidget {

	void OnShowMessage(struct FText Text, bool Background, bool bCenter, float Time); // Function LF.LFMessageWidget.OnShowMessage // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1395fe0
};

// Class LF.LFPassiveSkillComponent
// Size: 0xb8 (Inherited: 0xb8)
struct ULFPassiveSkillComponent : ULFActorComponent {
};

// Class LF.LFPerformTestComponent
// Size: 0x178 (Inherited: 0xb0)
struct ULFPerformTestComponent : UActorComponent {
	char pad_B0[0x28]; // 0xb0(0x28)
	struct TArray<struct UActorComponent*> OptimizableComponents; // 0xd8(0x10)
	struct TArray<struct ALFCharacterPlayer*> PlayerCharacters; // 0xe8(0x10)
	char pad_F8[0x80]; // 0xf8(0x80)
};

// Class LF.LFPersistentSaveGame
// Size: 0x58 (Inherited: 0x58)
struct ULFPersistentSaveGame : UEMSPersistentSaveGame {
};

// Class LF.LFPlayerAmbientSoundComponent
// Size: 0x100 (Inherited: 0xb8)
struct ULFPlayerAmbientSoundComponent : ULFActorComponent {
	float CombatDistance; // 0xb8(0x04)
	float FadeSeconds; // 0xbc(0x04)
	struct FName NormalAmbientId; // 0xc0(0x08)
	struct FName CombatAmbientId; // 0xc8(0x08)
	struct FName BossCombatAmbientId; // 0xd0(0x08)
	struct TArray<struct UAudioComponent*> AttachedAudio; // 0xd8(0x10)
	struct UAudioComponent* NormalAmbientAudio; // 0xe8(0x08)
	struct UAudioComponent* CombatAmbientAudio; // 0xf0(0x08)
	struct UAudioComponent* CombatBossAmbientAudio; // 0xf8(0x08)
};

// Class LF.LFPlayerAmmoComponent
// Size: 0xd0 (Inherited: 0xb8)
struct ULFPlayerAmmoComponent : ULFActorComponent {
	char pad_B8[0x8]; // 0xb8(0x08)
	struct TArray<struct FMagazine> Magazines; // 0xc0(0x10)

	bool IsFullyLoaded(struct FItemId WeaponId); // Function LF.LFPlayerAmmoComponent.IsFullyLoaded // (Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x1040060
	bool HasLoadedAmmo(struct FItemId WeaponId); // Function LF.LFPlayerAmmoComponent.HasLoadedAmmo // (Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x103fed0
	struct TArray<struct FMagazine> GetMagazines(); // Function LF.LFPlayerAmmoComponent.GetMagazines // (Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x103fca0
	bool GetMagazine(struct FItemId WeaponId, struct FMagazine OutMagazine); // Function LF.LFPlayerAmmoComponent.GetMagazine // (Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x103fb90
	int32_t GetLoadedAmmoAmount(struct FItemId WeaponId); // Function LF.LFPlayerAmmoComponent.GetLoadedAmmoAmount // (Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x103fae0
};

// Class LF.LFPlayerAttackComponent
// Size: 0x598 (Inherited: 0x410)
struct ULFPlayerAttackComponent : ULFCharacterAttackComponent {
	char pad_410[0x18]; // 0x410(0x18)
	struct FPoseSnapshot CurrentSnapshot; // 0x428(0x38)
	bool bAttackHit; // 0x460(0x01)
	char pad_461[0x3]; // 0x461(0x03)
	float AttackHitToCharacterSecond; // 0x464(0x04)
	float AttackHitToFoliageSecond; // 0x468(0x04)
	float AttackHitSecond; // 0x46c(0x04)
	struct AActor* LastHitActor; // 0x470(0x08)
	struct TArray<struct AActor*> AlreadyHitActors; // 0x478(0x10)
	struct FName WoodHit; // 0x488(0x08)
	struct FName StoneHit; // 0x490(0x08)
	struct FName MetalHit; // 0x498(0x08)
	struct FName WoodAxeName; // 0x4a0(0x08)
	struct FName PickAxeName; // 0x4a8(0x08)
	struct FVector LeftArmPrevLocation; // 0x4b0(0x0c)
	struct FVector RightArmPrevLocation; // 0x4bc(0x0c)
	struct FVector HandlePrevLocation; // 0x4c8(0x0c)
	char pad_4D4[0x4]; // 0x4d4(0x04)
	struct AEquipmentEntity* FirstPersonWeapon; // 0x4d8(0x08)
	struct AEquipmentEntity* FirstPersonSubWeapon; // 0x4e0(0x08)
	struct FTimerHandle AttackHitHandle; // 0x4e8(0x08)
	struct FPoseSnapshot HitAttackSnapshot; // 0x4f0(0x38)
	struct FTimerHandle BlockMovementHandle; // 0x528(0x08)
	float AttackAnimationTotalTime; // 0x530(0x04)
	float AttackAnimationDodgeBlockRatio; // 0x534(0x04)
	float AttackComboSecond; // 0x538(0x04)
	char pad_53C[0x8]; // 0x53c(0x08)
	float AttackBlockInSecond; // 0x544(0x04)
	float AttackBlockOutSecond; // 0x548(0x04)
	float AttackBlockOffsetSecond; // 0x54c(0x04)
	float AttackBlockStartDelay; // 0x550(0x04)
	bool bAttackBlocked; // 0x554(0x01)
	bool bAttackBlockReleasing; // 0x555(0x01)
	char pad_556[0x2]; // 0x556(0x02)
	struct FTimerHandle StartBlockHandle; // 0x558(0x08)
	struct FTimerHandle BlockHandle; // 0x560(0x08)
	struct FTimerHandle BlockReleaseHandle; // 0x568(0x08)
	struct TArray<struct FPoseSnapshot> BlockSnapshots; // 0x570(0x10)
	struct TArray<float> BlockSeconds; // 0x580(0x10)
	char pad_590[0x8]; // 0x590(0x08)

	void StopIfBlockedWithFoliage(struct ADestructibleEntity* Destructible); // Function LF.LFPlayerAttackComponent.StopIfBlockedWithFoliage // (Final|Native|Public) // @ game+0x1041560
	bool ShouldUseSpineAim(); // Function LF.LFPlayerAttackComponent.ShouldUseSpineAim // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1041530
	void SetBlockFlag(); // Function LF.LFPlayerAttackComponent.SetBlockFlag // (Final|Native|Public) // @ game+0x1041290
	void ServerSetWeaponBlockParameters(bool bInShouldBlockWeapon, bool bInShouldBlockAttack, float InSecond, float OffsetSecond, float OutSecond, float StartDelay); // Function LF.LFPlayerAttackComponent.ServerSetWeaponBlockParameters // (Net|Native|Event|Public|NetServer) // @ game+0x1040fe0
	void ServerGiveAttackDamage(float ResultDamage, struct FLFPointDamageEvent DamageEvent, struct AActor* HitActor); // Function LF.LFPlayerAttackComponent.ServerGiveAttackDamage // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x1040910
	void ServerEmitAttackEffect(struct FName EffectName, struct FHitResult Hit); // Function LF.LFPlayerAttackComponent.ServerEmitAttackEffect // (Net|Native|Event|Public|NetServer) // @ game+0x10407e0
	void ResumeAttackHit(); // Function LF.LFPlayerAttackComponent.ResumeAttackHit // (Final|Native|Public) // @ game+0x1040480
	void ReleaseBlockDelay(); // Function LF.LFPlayerAttackComponent.ReleaseBlockDelay // (Final|Native|Public) // @ game+0x1040460
	void MulticastEmitAttackEffect(struct FName EffectName, struct FHitResult Hit); // Function LF.LFPlayerAttackComponent.MulticastEmitAttackEffect // (Net|Native|Event|NetMulticast|Public) // @ game+0x10402d0
	void LocalSetFirstPersonWeapon(struct AEquipmentEntity* InWeapon); // Function LF.LFPlayerAttackComponent.LocalSetFirstPersonWeapon // (Final|Native|Public) // @ game+0x1040240
	void LocalSetFirstPersonSubWeapon(struct AEquipmentEntity* InSubWeapon); // Function LF.LFPlayerAttackComponent.LocalSetFirstPersonSubWeapon // (Final|Native|Public) // @ game+0x10401b0
	bool IsAttackHit(); // Function LF.LFPlayerAttackComponent.IsAttackHit // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1040030
	bool IsAttackBlockedOut(); // Function LF.LFPlayerAttackComponent.IsAttackBlockedOut // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1040000
	bool IsAttackBlocked(); // Function LF.LFPlayerAttackComponent.IsAttackBlocked // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x103ffd0
	struct FPoseSnapshot GetHitAttackSnapshot(); // Function LF.LFPlayerAttackComponent.GetHitAttackSnapshot // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x103f980
	struct FPoseSnapshot GetBlockedSnapshot(); // Function LF.LFPlayerAttackComponent.GetBlockedSnapshot // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x103f920
	struct FPoseSnapshot GetAttackSnapshot(); // Function LF.LFPlayerAttackComponent.GetAttackSnapshot // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x103f8c0
	float GetAttackAnimationTime(); // Function LF.LFPlayerAttackComponent.GetAttackAnimationTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x103f890
	void ClearBlockFlag(); // Function LF.LFPlayerAttackComponent.ClearBlockFlag // (Final|Native|Public) // @ game+0x103f2e0
};

// Class LF.LFPlayerCameraManager
// Size: 0x27b0 (Inherited: 0x27b0)
struct ALFPlayerCameraManager : APlayerCameraManager {
};

// Class LF.LFPlayerController
// Size: 0x620 (Inherited: 0x570)
struct ALFPlayerController : APlayerController {
	char pad_570[0x31]; // 0x570(0x31)
	bool bIsInitialized; // 0x5a1(0x01)
	bool bHUDInitialized; // 0x5a2(0x01)
	bool bIsRunningAchievementTask; // 0x5a3(0x01)
	bool bIsAdmin; // 0x5a4(0x01)
	bool bLoadingComplete; // 0x5a5(0x01)
	char pad_5A6[0x2]; // 0x5a6(0x02)
	struct ALevelStreamerActor* LevelStreamer; // 0x5a8(0x08)
	char pad_5B0[0x10]; // 0x5b0(0x10)
	struct TMap<struct FLFTeamAgentId, float> PlayerInviteTimes; // 0x5c0(0x50)
	float InviteTimeLimit; // 0x610(0x04)
	char pad_614[0xc]; // 0x614(0x0c)

	void UnlockAchievement(struct FName AchievementName); // Function LF.LFPlayerController.UnlockAchievement // (Event|Protected|BlueprintEvent) // @ game+0x1395fe0
	void UnBanPlayer(struct FLFGamePlayerId BannedPlayer); // Function LF.LFPlayerController.UnBanPlayer // (Final|Native|Public|BlueprintCallable) // @ game+0x10415f0
	void ShowLoadingScreen(); // Function LF.LFPlayerController.ShowLoadingScreen // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void ShowCheatWindow(); // Function LF.LFPlayerController.ShowCheatWindow // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void SetMessageOfTheDay(struct FText NewMessage); // Function LF.LFPlayerController.SetMessageOfTheDay // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1041460
	void SetLeaderboardStat(struct FName StatName, int32_t StatValue); // Function LF.LFPlayerController.SetLeaderboardStat // (Event|Protected|BlueprintEvent) // @ game+0x1395fe0
	void SetIsHidingAllUI(bool bCondition); // Function LF.LFPlayerController.SetIsHidingAllUI // (Final|Native|Public|BlueprintCallable) // @ game+0x10413d0
	void SetIsAdmin(bool bNewIsAdmin); // Function LF.LFPlayerController.SetIsAdmin // (Final|Native|Public|BlueprintCallable) // @ game+0x1041340
	void SetCharacterId(struct FName InCharacterId); // Function LF.LFPlayerController.SetCharacterId // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x10412b0
	void ServerUnBanPlayer(struct FLFGamePlayerId BannedPlayer); // Function LF.LFPlayerController.ServerUnBanPlayer // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x10411d0
	void ServerSetMessageOfTheDay(struct FText NewMessage); // Function LF.LFPlayerController.ServerSetMessageOfTheDay // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x1040f20
	void ServerSetCharacterId(struct FName InCharacterId); // Function LF.LFPlayerController.ServerSetCharacterId // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable) // @ game+0x1040e90
	void ServerRenameTeam(struct FString TeamName); // Function LF.LFPlayerController.ServerRenameTeam // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x1040df0
	void ServerRefreshMessageOfTheDay(); // Function LF.LFPlayerController.ServerRefreshMessageOfTheDay // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x1040dd0
	void ServerNotifyClientLoadingComplete(); // Function LF.LFPlayerController.ServerNotifyClientLoadingComplete // (Net|NetReliableNative|Event|Protected|NetServer) // @ game+0x1040db0
	void ServerKickAgent(struct FLFTeamAgentId AgentId); // Function LF.LFPlayerController.ServerKickAgent // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x1040cf0
	void ServerJoinTeam(struct FLFTeamId TeamId); // Function LF.LFPlayerController.ServerJoinTeam // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x1040c60
	void ServerInviteAgent(struct FLFTeamAgentId AgentId); // Function LF.LFPlayerController.ServerInviteAgent // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x1040ba0
	void ServerGiveRole(struct FLFTeamAgentId AgentId, enum class ETeamRole NewRole); // Function LF.LFPlayerController.ServerGiveRole // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x1040aa0
	void ServerCreateTeam(struct FString TeamName); // Function LF.LFPlayerController.ServerCreateTeam // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x1040740
	void ServerBanPlayer(struct FLFGamePlayerId BannedPlayer, struct FText BanReason); // Function LF.LFPlayerController.ServerBanPlayer // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x1040600
	void ServerAdminSaveAs(struct FString SaveSlot); // Function LF.LFPlayerController.ServerAdminSaveAs // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x1040560
	void ServerAdminSave(); // Function LF.LFPlayerController.ServerAdminSave // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x1040540
	void ServerAdminCheat(struct FString Command); // Function LF.LFPlayerController.ServerAdminCheat // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x10404a0
	void ResetAllAchievements(); // Function LF.LFPlayerController.ResetAllAchievements // (Final|Native|Protected) // @ game+0xc20320
	void RefreshMessageOfTheDay(); // Function LF.LFPlayerController.RefreshMessageOfTheDay // (Final|Native|Public|BlueprintCallable) // @ game+0x1040440
	void QueryAchievements(); // Function LF.LFPlayerController.QueryAchievements // (Event|Protected|BlueprintEvent) // @ game+0x1395fe0
	void OpenPlayerList(); // Function LF.LFPlayerController.OpenPlayerList // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void OpenOption(); // Function LF.LFPlayerController.OpenOption // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void OnSeamlessTravel(); // Function LF.LFPlayerController.OnSeamlessTravel // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void OnRep_Initialized(); // Function LF.LFPlayerController.OnRep_Initialized // (Final|Native|Public) // @ game+0x1040420
	void OnReceiveMessageOfTheDayImpl(); // Function LF.LFPlayerController.OnReceiveMessageOfTheDayImpl // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void OnReceiveInviteToTeamImpl(struct FString InvitingPlayerName, struct FLFTeamId TeamId); // Function LF.LFPlayerController.OnReceiveInviteToTeamImpl // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1395fe0
	void OnReceiveCreateTeamResultImpl(bool bIsSuccess, struct FString FailureReason); // Function LF.LFPlayerController.OnReceiveCreateTeamResultImpl // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void OnInitialize(); // Function LF.LFPlayerController.OnInitialize // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void OnHUDInitialize(); // Function LF.LFPlayerController.OnHUDInitialize // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void OnCloseUI(); // Function LF.LFPlayerController.OnCloseUI // (Final|Native|Public|BlueprintCallable) // @ game+0x1040400
	void JoinTeam(struct FLFTeamId TeamId); // Function LF.LFPlayerController.JoinTeam // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1040110
	bool IsLoading(); // Function LF.LFPlayerController.IsLoading // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	bool IsAdmin(); // Function LF.LFPlayerController.IsAdmin // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x103ffa0
	void Initialize(); // Function LF.LFPlayerController.Initialize // (Final|Native|Public|BlueprintCallable) // @ game+0x103ff80
	void IncreaseLeaderboardStat(struct FName StatName, int32_t StatValue); // Function LF.LFPlayerController.IncreaseLeaderboardStat // (Event|Protected|BlueprintEvent) // @ game+0x1395fe0
	void HideLoadingScreen(); // Function LF.LFPlayerController.HideLoadingScreen // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void HandlePlayerAction(enum class EActionType ActionType, enum class EInputEvent InputEvent); // Function LF.LFPlayerController.HandlePlayerAction // (Final|Native|Public) // @ game+0x103fe00
	struct FLFTeamId GetTeamId(); // Function LF.LFPlayerController.GetTeamId // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x103fdc0
	int32_t GetTeamHash(); // Function LF.LFPlayerController.GetTeamHash // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x103fd90
	struct APlayerHUD* GetPlayerHUD(); // Function LF.LFPlayerController.GetPlayerHUD // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x103fd60
	struct ALFCharacterPlayer* GetPlayerCharacter(); // Function LF.LFPlayerController.GetPlayerCharacter // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x103fd30
	bool GetIsHidingAllUI(); // Function LF.LFPlayerController.GetIsHidingAllUI // (Final|Native|Public|BlueprintCallable) // @ game+0x103fab0
	float GetInviteAgentTimeWait(struct FLFTeamAgentId AgentId); // Function LF.LFPlayerController.GetInviteAgentTimeWait // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x103f9e0
	void ExecuteAutoSave(); // Function LF.LFPlayerController.ExecuteAutoSave // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void CreateTeam(struct FString TeamName); // Function LF.LFPlayerController.CreateTeam // (Final|Native|Public|BlueprintCallable) // @ game+0x103f7a0
	void ClientRequestUnlockAchievement(struct FName AchievementName); // Function LF.LFPlayerController.ClientRequestUnlockAchievement // (Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable) // @ game+0x103f710
	void ClientRequestSetLeaderboardStat(struct FName StatName, int32_t StatValue); // Function LF.LFPlayerController.ClientRequestSetLeaderboardStat // (Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable) // @ game+0x103f640
	void ClientRequestResetAllAchievements(); // Function LF.LFPlayerController.ClientRequestResetAllAchievements // (Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable) // @ game+0x103f620
	void ClientRequestQueryAchievements(); // Function LF.LFPlayerController.ClientRequestQueryAchievements // (Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable) // @ game+0x103f600
	void ClientRequestIncreaseLeaderboardStat(struct FName StatName, int32_t StatValue); // Function LF.LFPlayerController.ClientRequestIncreaseLeaderboardStat // (Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable) // @ game+0x103f530
	void ClientOnReceiveMessageOfTheDay(); // Function LF.LFPlayerController.ClientOnReceiveMessageOfTheDay // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x103f510
	void ClientOnReceiveInviteToTeam(struct FString InvitingPlayerName, struct FLFTeamId TeamId); // Function LF.LFPlayerController.ClientOnReceiveInviteToTeam // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x103f420
	void ClientOnReceiveCreateTeamResult(bool bIsSuccess, struct FString FailureReason); // Function LF.LFPlayerController.ClientOnReceiveCreateTeamResult // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x103f320
	void ClientInitializeHUD(); // Function LF.LFPlayerController.ClientInitializeHUD // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0x103f300
	bool CanInviteAgent(struct FLFTeamAgentId AgentId); // Function LF.LFPlayerController.CanInviteAgent // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x103f210
	void BanPlayer(struct FLFGamePlayerId BannedPlayer, struct FText BanReason); // Function LF.LFPlayerController.BanPlayer // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x103f040
	void AdminSaveAs(struct FString SaveSlot); // Function LF.LFPlayerController.AdminSaveAs // (Final|Native|Public|BlueprintCallable) // @ game+0x103efa0
	void AdminSave(); // Function LF.LFPlayerController.AdminSave // (Final|Native|Public|BlueprintCallable) // @ game+0x103ef80
	void AdminQuickSave(); // Function LF.LFPlayerController.AdminQuickSave // (Final|Native|Public|BlueprintCallable) // @ game+0x103ef60
	void AdminCheat(struct FString Command); // Function LF.LFPlayerController.AdminCheat // (Final|Native|Public|BlueprintCallable) // @ game+0x103eec0
};

// Class LF.LFPlayerCorpseComponent
// Size: 0x1d0 (Inherited: 0x160)
struct ULFPlayerCorpseComponent : ULFCharacterCorpseComponent {
	int32_t DieIndex; // 0x160(0x04)
	char pad_164[0x4]; // 0x164(0x04)
	struct TSoftObjectPtr<struct UAnimMontage> DrownAnimation; // 0x168(0x28)
	struct TSoftObjectPtr<struct UAnimMontage> FallAnimation; // 0x190(0x28)
	struct UDamageType* FallDamageTypeClass; // 0x1b8(0x08)
	struct TArray<struct TSoftObjectPtr<struct UAnimMontage>> FirstPersonDieAnimations; // 0x1c0(0x10)
};

// Class LF.LFPlayerDefenseComponent
// Size: 0x1c0 (Inherited: 0xb8)
struct ULFPlayerDefenseComponent : ULFCharacterDefenseComponent {
	char pad_B8[0x30]; // 0xb8(0x30)
	bool bIsDefending; // 0xe8(0x01)
	char pad_E9[0x3]; // 0xe9(0x03)
	float ElapsedSecondsAfterDefense; // 0xec(0x04)
	float DefenseAngle; // 0xf0(0x04)
	float DefenseSpeedRate; // 0xf4(0x04)
	float BigDamageThreshold; // 0xf8(0x04)
	bool bParryAreaOfEffect; // 0xfc(0x01)
	char pad_FD[0x3]; // 0xfd(0x03)
	float ParryAngle; // 0x100(0x04)
	float ParryDistance; // 0x104(0x04)
	float MinimumStamina; // 0x108(0x04)
	float StaminaRestoreBlockSeconds; // 0x10c(0x04)
	struct TMap<enum class EDefenseResult, enum class ECharacterHitType> DefenseHitTypes; // 0x110(0x50)
	struct TMap<enum class EDefenseResult, struct FName> DefenseEffects; // 0x160(0x50)
	char pad_1B0[0x4]; // 0x1b0(0x04)
	float DefenseAnimationTime; // 0x1b4(0x04)
	enum class EDefenseResult LastDefenseResult; // 0x1b8(0x01)
	char pad_1B9[0x7]; // 0x1b9(0x07)

	void ServerStopDefense_Unreliable(); // Function LF.LFPlayerDefenseComponent.ServerStopDefense_Unreliable // (Net|Native|Event|Protected|NetServer) // @ game+0x1011690
	void ServerStopDefense(); // Function LF.LFPlayerDefenseComponent.ServerStopDefense // (Net|NetReliableNative|Event|Protected|NetServer) // @ game+0x1044cf0
	void ServerStartDefense_Unreliable(); // Function LF.LFPlayerDefenseComponent.ServerStartDefense_Unreliable // (Net|Native|Event|Protected|NetServer) // @ game+0x1015910
	void ServerStartDefense(); // Function LF.LFPlayerDefenseComponent.ServerStartDefense // (Net|NetReliableNative|Event|Protected|NetServer) // @ game+0x1045150
	void MulticastPlayDefenseAnimation(struct FHitResult Hit, enum class EDefenseResult DefenseType); // Function LF.LFPlayerDefenseComponent.MulticastPlayDefenseAnimation // (Net|Native|Event|NetMulticast|Protected) // @ game+0x1044940
	bool IsEquippingShield(); // Function LF.LFPlayerDefenseComponent.IsEquippingShield // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1044730
};

// Class LF.LFPlayerDodgeComponent
// Size: 0x188 (Inherited: 0xc0)
struct ULFPlayerDodgeComponent : ULFCharacterDodgeComponent {
	char pad_C0[0x30]; // 0xc0(0x30)
	float DodgeStamina; // 0xf0(0x04)
	char pad_F4[0x4]; // 0xf4(0x04)
	struct TMap<enum class EDodgeDirection, struct TSoftObjectPtr<struct UAnimMontage>> DodgeAnimations; // 0xf8(0x50)
	float DodgeStateAnimRatio; // 0x148(0x04)
	float DodgeEvasionStartAnimRatio; // 0x14c(0x04)
	float DodgeEvasionEndAnimRatio; // 0x150(0x04)
	struct FName DodgeHitEffectName; // 0x154(0x08)
	struct FName DodgeEffectName; // 0x15c(0x08)
	float DodgeTime; // 0x164(0x04)
	float DodgeAnimTime; // 0x168(0x04)
	float DodgeStartAnimTime; // 0x16c(0x04)
	float DodgeEndAnimTime; // 0x170(0x04)
	char pad_174[0x4]; // 0x174(0x04)
	struct FMulticastInlineDelegate OnDodge; // 0x178(0x10)

	void ServerDodge(enum class EDodgeDirection Direction); // Function LF.LFPlayerDodgeComponent.ServerDodge // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x1044d10
	void MulticastPlayDodgeAnimation(enum class EDodgeDirection Direction); // Function LF.LFPlayerDodgeComponent.MulticastPlayDodgeAnimation // (Net|Native|Event|NetMulticast|Public) // @ game+0x1015070
};

// Class LF.LFPlayerFogComponent
// Size: 0x120 (Inherited: 0xb8)
struct ULFPlayerFogComponent : ULFActorComponent {
	struct FVector2D WorldCenter; // 0xb8(0x08)
	float WorldAngleOffset; // 0xc0(0x04)
	float OrthoWidth; // 0xc4(0x04)
	struct FVector WidthOffset; // 0xc8(0x0c)
	int32_t GridDivide; // 0xd4(0x04)
	float GridUnit; // 0xd8(0x04)
	char pad_DC[0x4]; // 0xdc(0x04)
	struct TArray<bool> GridFlags; // 0xe0(0x10)
	struct TArray<bool> DrawHistory; // 0xf0(0x10)
	float BrushUnit; // 0x100(0x04)
	char TeamIndex; // 0x104(0x01)
	char pad_105[0x3]; // 0x105(0x03)
	struct UMaterialInterface* BrushMaterial; // 0x108(0x08)
	struct UMaterialInstanceDynamic* Brush; // 0x110(0x08)
	struct UTextureRenderTarget2D* GridRenderTarget; // 0x118(0x08)

	void OnRep_GridFlags(); // Function LF.LFPlayerFogComponent.OnRep_GridFlags // (Final|Native|Public) // @ game+0x1044cb0
};

// Class LF.LFPlayerSkeletalMeshComponent
// Size: 0xee0 (Inherited: 0xed0)
struct ULFPlayerSkeletalMeshComponent : ULFSkeletalMeshComponent {
	char pad_ED0[0x10]; // 0xed0(0x10)
};

// Class LF.LFPlayerFPPSkeletalMeshComponent
// Size: 0xef0 (Inherited: 0xee0)
struct ULFPlayerFPPSkeletalMeshComponent : ULFPlayerSkeletalMeshComponent {
	struct FVector InitialRelativeLocation; // 0xed8(0x0c)
	float ClampPitchMax; // 0xee4(0x04)
	float ClampPitchMin; // 0xee8(0x04)
	float PitchAttenuationRate; // 0xeec(0x04)
};

// Class LF.LFPlayerHitComponent
// Size: 0x338 (Inherited: 0x288)
struct ULFPlayerHitComponent : ULFCharacterHitComponent {
	char pad_288[0x8]; // 0x288(0x08)
	float BiteDistance; // 0x290(0x04)
	char pad_294[0x4]; // 0x294(0x04)
	struct FMulticastInlineDelegate OnHitAnimationPlayed; // 0x298(0x10)
	struct TArray<struct TSoftObjectPtr<struct UAnimMontage>> NoDamageAnimation_First; // 0x2a8(0x10)
	struct TArray<struct TSoftObjectPtr<struct UAnimMontage>> DefaultHitAnimation_First; // 0x2b8(0x10)
	struct TArray<struct TSoftObjectPtr<struct UAnimMontage>> NormalHitAnimation_First; // 0x2c8(0x10)
	struct TArray<struct TSoftObjectPtr<struct UAnimMontage>> BigHitAnimation_First; // 0x2d8(0x10)
	struct TArray<struct TSoftObjectPtr<struct UAnimMontage>> LandingAnimations_First; // 0x2e8(0x10)
	struct TArray<struct TSoftObjectPtr<struct UAnimMontage>> BurnAnimation_First; // 0x2f8(0x10)
	struct TArray<struct TSoftObjectPtr<struct UAnimMontage>> BiteAnimations_First; // 0x308(0x10)
	struct TArray<struct TSoftObjectPtr<struct UAnimMontage>> ParryHitAnimation_First; // 0x318(0x10)
	struct TArray<struct TSoftObjectPtr<struct UAnimMontage>> ChainsawHitAnimation_First; // 0x328(0x10)

	void ClientShowDamageFx(struct ALFCharacterPlayer* PlayerCharacter, enum class ECharacterHitType HitType); // Function LF.LFPlayerHitComponent.ClientShowDamageFx // (Net|Native|Event|Public|NetClient) // @ game+0x1044540
};

// Class LF.LFPlayerJournalComponent
// Size: 0xf8 (Inherited: 0xb8)
struct ULFPlayerJournalComponent : ULFActorComponent {
	struct TArray<int32_t> OpenedPages; // 0xb8(0x10)
	struct TArray<int32_t> InitiallyOpenedPages; // 0xc8(0x10)
	bool bRecentlyUpdated; // 0xd8(0x01)
	char pad_D9[0x3]; // 0xd9(0x03)
	int32_t MostRecentlyOpenedPage; // 0xdc(0x04)
	char pad_E0[0x8]; // 0xe0(0x08)
	struct FMulticastInlineDelegate OnTakeJournal; // 0xe8(0x10)

	void OnOpenJournal(); // Function LF.LFPlayerJournalComponent.OnOpenJournal // (Final|Native|Public) // @ game+0x1044c90
	void ClientNotifyJournalOpened(); // Function LF.LFPlayerJournalComponent.ClientNotifyJournalOpened // (Net|Native|Event|Public|NetClient) // @ game+0x1014700
};

// Class LF.LFPlayerMovementComponent
// Size: 0xbb0 (Inherited: 0xb00)
struct ULFPlayerMovementComponent : UCharacterMovementComponent {
	char pad_B00[0x38]; // 0xb00(0x38)
	float MaxWalkingSpeed; // 0xb38(0x04)
	float MaxJoggingSpeed; // 0xb3c(0x04)
	float MaxRunningSpeed; // 0xb40(0x04)
	float DefaultJumpZVelocity; // 0xb44(0x04)
	float SwimmingStaminaPerSecond; // 0xb48(0x04)
	float RunningStaminaPerSecond; // 0xb4c(0x04)
	float JumpingStamina; // 0xb50(0x04)
	float InterpSpeed; // 0xb54(0x04)
	float RunningDirection; // 0xb58(0x04)
	bool bInitialized; // 0xb5c(0x01)
	bool bIsRunning; // 0xb5d(0x01)
	bool bIsWalking; // 0xb5e(0x01)
	bool bIsSwimming; // 0xb5f(0x01)
	bool bLocalIsRunning; // 0xb60(0x01)
	bool bLocalIsWalking; // 0xb61(0x01)
	bool bLocalIsSwimming; // 0xb62(0x01)
	char pad_B63[0x5]; // 0xb63(0x05)
	struct FName RunSoundId; // 0xb68(0x08)
	struct FName NoStaminaSoundId; // 0xb70(0x08)
	struct UAudioComponent* RunAudio; // 0xb78(0x08)
	struct UAudioComponent* NoStaminaAudio; // 0xb80(0x08)
	char pad_B88[0x10]; // 0xb88(0x10)
	struct FTimerHandle BlockHandle; // 0xb98(0x08)
	bool bNoAim; // 0xba0(0x01)
	bool bIsMovementBlocked; // 0xba1(0x01)
	char pad_BA2[0xe]; // 0xba2(0x0e)

	void UpdateSwimmingSpeed(); // Function LF.LFPlayerMovementComponent.UpdateSwimmingSpeed // (Final|Native|Private) // @ game+0x1045540
	void UpdateRunningSpeed(float DeltaTime); // Function LF.LFPlayerMovementComponent.UpdateRunningSpeed // (Final|Native|Private) // @ game+0x10454c0
	void Turn(float Value); // Function LF.LFPlayerMovementComponent.Turn // (Native|Public|BlueprintCallable) // @ game+0x1045430
	void ToggleCrouch(); // Function LF.LFPlayerMovementComponent.ToggleCrouch // (Native|Public|BlueprintCallable) // @ game+0x1045410
	void StopWalking(); // Function LF.LFPlayerMovementComponent.StopWalking // (Native|Public) // @ game+0x10453f0
	void StopRunningImpl(); // Function LF.LFPlayerMovementComponent.StopRunningImpl // (Native|Public) // @ game+0x10453d0
	void StopRunning(); // Function LF.LFPlayerMovementComponent.StopRunning // (Native|Public) // @ game+0x10453b0
	void StopJumping(); // Function LF.LFPlayerMovementComponent.StopJumping // (Native|Public) // @ game+0x1045390
	void StartWalking(); // Function LF.LFPlayerMovementComponent.StartWalking // (Native|Public) // @ game+0x1045370
	void StartRunningImpl(); // Function LF.LFPlayerMovementComponent.StartRunningImpl // (Native|Public) // @ game+0x1045350
	void StartRunning(); // Function LF.LFPlayerMovementComponent.StartRunning // (Native|Public) // @ game+0x1045330
	void StartJumping(); // Function LF.LFPlayerMovementComponent.StartJumping // (Native|Public) // @ game+0x1045310
	void ServerStopRunning(); // Function LF.LFPlayerMovementComponent.ServerStopRunning // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x10451d0
	void ServerStartRunning(); // Function LF.LFPlayerMovementComponent.ServerStartRunning // (Net|Native|Event|Public|NetServer) // @ game+0x1045170
	void MoveRight(float Value); // Function LF.LFPlayerMovementComponent.MoveRight // (Native|Public|BlueprintCallable) // @ game+0x10448b0
	void MoveForward(float Value); // Function LF.LFPlayerMovementComponent.MoveForward // (Native|Public|BlueprintCallable) // @ game+0x1044820
	void LookUp(float Value); // Function LF.LFPlayerMovementComponent.LookUp // (Native|Public|BlueprintCallable) // @ game+0x1044790
	bool IsNoAim(); // Function LF.LFPlayerMovementComponent.IsNoAim // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1044760
	bool IsBlocking(); // Function LF.LFPlayerMovementComponent.IsBlocking // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1044700
	bool CanParkour(); // Function LF.LFPlayerMovementComponent.CanParkour // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1044510
};

// Class LF.LFPlayerRangeAttackComponent
// Size: 0x2d8 (Inherited: 0xb0)
struct ULFPlayerRangeAttackComponent : UActorComponent {
	char pad_B0[0x30]; // 0xb0(0x30)
	float ReloadAnimTime; // 0xe0(0x04)
	float CurrentReloadTime; // 0xe4(0x04)
	float AimScatter; // 0xe8(0x04)
	float CameraForwardImpact; // 0xec(0x04)
	float AimScatterSpeed; // 0xf0(0x04)
	float AimScatterWhenMoving; // 0xf4(0x04)
	float AimAlpha; // 0xf8(0x04)
	float AimAnimationAlpha; // 0xfc(0x04)
	float DrawAlpha; // 0x100(0x04)
	float AimAccuracy; // 0x104(0x04)
	float CachedDrawAlpha; // 0x108(0x04)
	bool bIsAfterShot; // 0x10c(0x01)
	char pad_10D[0x3]; // 0x10d(0x03)
	float SafeDistanceOffset; // 0x110(0x04)
	float InvisibleSafeDistanceOffset; // 0x114(0x04)
	char pad_118[0x8]; // 0x118(0x08)
	bool bIsReloading; // 0x120(0x01)
	bool bLocalIsReloading; // 0x121(0x01)
	bool bIsStartAiming; // 0x122(0x01)
	bool bLocalIsStartAiming; // 0x123(0x01)
	struct FName ShootWeaponName; // 0x124(0x08)
	char pad_12C[0x4]; // 0x12c(0x04)
	struct UObject* LoadedThrowableClass; // 0x130(0x08)
	struct FTimerHandle EndTimerHandle; // 0x138(0x08)
	struct FTimerHandle ThrowStartTimerHandle; // 0x140(0x08)
	struct FTimerHandle ThrowEndTimerHandle; // 0x148(0x08)
	struct FWeaponAnimationPool CurrentAnimationPool; // 0x150(0x180)
	enum class ECharacterAttackState AttackState; // 0x2d0(0x01)
	char pad_2D1[0x7]; // 0x2d1(0x07)

	void SetIsStartAiming(bool bCondition); // Function LF.LFPlayerRangeAttackComponent.SetIsStartAiming // (Final|Native|Public|BlueprintCallable) // @ game+0x1045280
	void SetIsReloading(bool bCondition); // Function LF.LFPlayerRangeAttackComponent.SetIsReloading // (Final|Native|Public|BlueprintCallable) // @ game+0x10451f0
	void ServerWeaponFire(struct AEquipmentEntity* WeaponEntity); // Function LF.LFPlayerRangeAttackComponent.ServerWeaponFire // (Final|Net|Native|Event|Private|NetServer) // @ game+0xce9c70
	void ServerStopAiming_Unreliable(); // Function LF.LFPlayerRangeAttackComponent.ServerStopAiming_Unreliable // (Net|Native|Event|Public|NetServer) // @ game+0x10451b0
	void ServerStopAiming(); // Function LF.LFPlayerRangeAttackComponent.ServerStopAiming // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x1045190
	void ServerStartAiming(); // Function LF.LFPlayerRangeAttackComponent.ServerStartAiming // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x1045130
	void ServerSpawnThrowableEntity(struct UObject* ThrowableClass, float Alpha, struct FVector StartLocation, struct FVector Direction); // Function LF.LFPlayerRangeAttackComponent.ServerSpawnThrowableEntity // (Net|NetReliableNative|Event|Public|NetServer|HasDefaults) // @ game+0x1044f90
	void ServerSetLocomotionState(); // Function LF.LFPlayerRangeAttackComponent.ServerSetLocomotionState // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x1044f70
	void ServerSetBowAimAlpha(float CurrentAim, struct ABowEquipmentEntity* Bow); // Function LF.LFPlayerRangeAttackComponent.ServerSetBowAimAlpha // (Net|Native|Event|Public|NetServer) // @ game+0x1044e90
	void ServerReload(); // Function LF.LFPlayerRangeAttackComponent.ServerReload // (Net|NetReliableNative|Event|Protected|NetServer) // @ game+0x1044e70
	void ServerPlayShootAnimation(struct FWeaponAnimationData AnimData); // Function LF.LFPlayerRangeAttackComponent.ServerPlayShootAnimation // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x1044db0
	void ServerPlayRangeSound(struct FName ID); // Function LF.LFPlayerRangeAttackComponent.ServerPlayRangeSound // (Net|Native|Event|Public|NetServer) // @ game+0x1010130
	void ServerEndAttack(); // Function LF.LFPlayerRangeAttackComponent.ServerEndAttack // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x1044d90
	void ServerAfterShoot(); // Function LF.LFPlayerRangeAttackComponent.ServerAfterShoot // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x1044cf0
	void OnThrowableClassLoaded(); // Function LF.LFPlayerRangeAttackComponent.OnThrowableClassLoaded // (Final|Native|Private) // @ game+0x1044cd0
	void MulticastWeaponFire(struct AEquipmentEntity* WeaponEntity); // Function LF.LFPlayerRangeAttackComponent.MulticastWeaponFire // (Final|Net|Native|Event|NetMulticast|Private) // @ game+0x100c3d0
	void MulticastPlayShootAnimation(struct FWeaponAnimationData AnimData); // Function LF.LFPlayerRangeAttackComponent.MulticastPlayShootAnimation // (Net|Native|Event|NetMulticast|Public) // @ game+0x1044bd0
	void MulticastPlayReloadAnimation(struct UAnimMontage* ReloadAnim, float InPlayRate); // Function LF.LFPlayerRangeAttackComponent.MulticastPlayReloadAnimation // (Net|Native|Event|NetMulticast|Public) // @ game+0x1044af0
	void MulticastPlayRangeSound(struct FName ID); // Function LF.LFPlayerRangeAttackComponent.MulticastPlayRangeSound // (Net|Native|Event|NetMulticast|Public) // @ game+0x1044a60
	bool IsReloading(); // Function LF.LFPlayerRangeAttackComponent.IsReloading // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1044640
	bool HasAmmo(); // Function LF.LFPlayerRangeAttackComponent.HasAmmo // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10446d0
	float GetReloadAnimRatio(); // Function LF.LFPlayerRangeAttackComponent.GetReloadAnimRatio // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10446a0
	bool GetIsStartAiming(); // Function LF.LFPlayerRangeAttackComponent.GetIsStartAiming // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1044670
	bool GetIsReloading(); // Function LF.LFPlayerRangeAttackComponent.GetIsReloading // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1044640
	float GetAimingWeight(); // Function LF.LFPlayerRangeAttackComponent.GetAimingWeight // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1044610
};

// Class LF.LFPlayerState
// Size: 0x338 (Inherited: 0x320)
struct ALFPlayerState : APlayerState {
	char pad_320[0x8]; // 0x320(0x08)
	struct FGenericTeamId TeamId; // 0x328(0x01)
	char pad_329[0x3]; // 0x329(0x03)
	struct FName CharacterId; // 0x32c(0x08)
	char pad_334[0x4]; // 0x334(0x04)
};

// Class LF.LFPlayerStatusComponent
// Size: 0x180 (Inherited: 0x148)
struct ULFPlayerStatusComponent : ULFCharacterStatusComponent {
	float StaminaToHealth; // 0x148(0x04)
	float StaminaToHealthWhileSwimming; // 0x14c(0x04)
	float DefaultMaxStamina; // 0x150(0x04)
	float DefaultStaminaRestore; // 0x154(0x04)
	float DefaultMaxCondition; // 0x158(0x04)
	float MaximumMaxCondition; // 0x15c(0x04)
	float ConditionPerHour; // 0x160(0x04)
	float ConditionDamage; // 0x164(0x04)
	float MinCondition; // 0x168(0x04)
	float DefaultMaxGuardStamina; // 0x16c(0x04)
	float DefaultGuardStaminaRestore; // 0x170(0x04)
	float TransientCharacterStamina; // 0x174(0x04)
	char pad_178[0x8]; // 0x178(0x08)

	void UseStamina(float Value); // Function LF.LFPlayerStatusComponent.UseStamina // (Final|Native|Public) // @ game+0x104c650
	void UseClientStamina(float Value); // Function LF.LFPlayerStatusComponent.UseClientStamina // (Final|Native|Public) // @ game+0x104c540
	void RestoreStamina(float DeltaTime); // Function LF.LFPlayerStatusComponent.RestoreStamina // (Final|Native|Protected) // @ game+0x104be40
	void OnMinutePassed(); // Function LF.LFPlayerStatusComponent.OnMinutePassed // (Final|Native|Public) // @ game+0x104baa0
	void ClientShowStaminaDamageFx(); // Function LF.LFPlayerStatusComponent.ClientShowStaminaDamageFx // (Net|Native|Event|Public|NetClient) // @ game+0x1049e80
};

// Class LF.LFPlayerToolComponent
// Size: 0xd8 (Inherited: 0xb8)
struct ULFPlayerToolComponent : ULFActorComponent {
	struct FName CurrentToolName; // 0xb8(0x08)
	struct ULFToolBehavior* CurrentBehavior; // 0xc0(0x08)
	struct TArray<struct ULFToolBehavior*> AllToolBehaviors; // 0xc8(0x10)

	void OnRep_CurrentToolName(); // Function LF.LFPlayerToolComponent.OnRep_CurrentToolName // (Final|Native|Protected) // @ game+0x104bae0
	void OnEquipmentChanged(struct FName ToolName, bool bIsEqiupping); // Function LF.LFPlayerToolComponent.OnEquipmentChanged // (Final|Native|Public) // @ game+0x104b9d0
	bool IsUsing(); // Function LF.LFPlayerToolComponent.IsUsing // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x104b8b0
	bool IsEquippingTool(); // Function LF.LFPlayerToolComponent.IsEquippingTool // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x104b6d0
};

// Class LF.LFProjectileMovementComponent
// Size: 0x1d0 (Inherited: 0x1d0)
struct ULFProjectileMovementComponent : UProjectileMovementComponent {
};

// Class LF.LFPullableComponent
// Size: 0xc0 (Inherited: 0xb0)
struct ULFPullableComponent : UActorComponent {
	char pad_B0[0x8]; // 0xb0(0x08)
	bool bIsBeingPulled; // 0xb8(0x01)
	enum class EPullableType PullableType; // 0xb9(0x01)
	char pad_BA[0x6]; // 0xba(0x06)
};

// Class LF.LFPullComponent
// Size: 0x130 (Inherited: 0xb0)
struct ULFPullComponent : UActorComponent {
	char pad_B0[0x8]; // 0xb0(0x08)
	float PullSpeed; // 0xb8(0x04)
	float StopDistance; // 0xbc(0x04)
	struct TSet<enum class EPullableType> PullableTypeSet; // 0xc0(0x50)
	float PullDelay; // 0x110(0x04)
	enum class EPullAnimationState CurrentPullAnimationState; // 0x114(0x01)
	bool bIsPulling; // 0x115(0x01)
	char pad_116[0x2]; // 0x116(0x02)
	struct AActor* Hook; // 0x118(0x08)
	char pad_120[0x8]; // 0x120(0x08)
	bool bIsTargetBelowBeforePulling; // 0x128(0x01)
	char pad_129[0x7]; // 0x129(0x07)

	void SetPullAnimationState(enum class EPullAnimationState PullAnimationState); // Function LF.LFPullComponent.SetPullAnimationState // (Native|Public|BlueprintCallable) // @ game+0x104c170
	bool IsPullingTarget(); // Function LF.LFPullComponent.IsPullingTarget // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x104b740
	bool IsPulling(); // Function LF.LFPullComponent.IsPulling // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x104b700
};

// Class LF.LFResearchComponent
// Size: 0x108 (Inherited: 0xb8)
struct ULFResearchComponent : ULFActorComponent {
	char pad_B8[0x30]; // 0xb8(0x30)
	struct TArray<struct FName> CompletedResearches; // 0xe8(0x10)
	struct TArray<struct FName> NeverDropResearches; // 0xf8(0x10)

	void UseMaterials(struct FName ResearchId); // Function LF.LFResearchComponent.UseMaterials // (Final|Native|Public|HasOutParms) // @ game+0x104c5c0
	void TryResearch(struct FName ResearchId); // Function LF.LFResearchComponent.TryResearch // (Final|Native|Public|HasOutParms) // @ game+0x104c4b0
	void ServerTryResearch(struct FName ResearchId); // Function LF.LFResearchComponent.ServerTryResearch // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x104c050
	void OpenResearchUpgrade(struct FName ResearchId); // Function LF.LFResearchComponent.OpenResearchUpgrade // (Final|Native|Public|HasOutParms) // @ game+0x104bb40
	void OnRep_CompletedResearches(); // Function LF.LFResearchComponent.OnRep_CompletedResearches // (Final|Native|Public) // @ game+0x104bac0
	bool IsResearchComplete(struct FName ResearchId); // Function LF.LFResearchComponent.IsResearchComplete // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x104b810
	bool IsResearchAvailable(struct FName ResearchId); // Function LF.LFResearchComponent.IsResearchAvailable // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x104b770
	bool HasEnoughMaterialToResearch(struct FName ResearchId); // Function LF.LFResearchComponent.HasEnoughMaterialToResearch // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x104b440
	int32_t GetNumOfCompletedResearches(); // Function LF.LFResearchComponent.GetNumOfCompletedResearches // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x104a9e0
	int32_t GetNumOfAllResearches(); // Function LF.LFResearchComponent.GetNumOfAllResearches // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x104a9b0
	void CompleteResearch(struct FName ResearchId); // Function LF.LFResearchComponent.CompleteResearch // (Final|Native|Public|HasOutParms) // @ game+0x1049ea0
	void ClientOnResearchComplete(struct FName ResearchId); // Function LF.LFResearchComponent.ClientOnResearchComplete // (Net|Native|Event|Public|NetClient) // @ game+0x1049d20
	void CancelResearchUpgrade(); // Function LF.LFResearchComponent.CancelResearchUpgrade // (Final|Native|Public) // @ game+0x1049d00
};

// Class LF.LFRopeComponent
// Size: 0x590 (Inherited: 0x570)
struct ULFRopeComponent : USplineMeshComponent {
	struct USceneComponent* ToSceneComponent; // 0x570(0x08)
	struct FName ToSocketName; // 0x578(0x08)
	struct FName FromSocketName; // 0x580(0x08)
	char pad_588[0x8]; // 0x588(0x08)
};

// Class LF.LFSessionBeaconClient
// Size: 0x2f8 (Inherited: 0x2b0)
struct ALFSessionBeaconClient : AOnlineBeaconClient {
	struct FMulticastInlineDelegate OnSetPlayerInfoComplete; // 0x2b0(0x10)
	struct FMulticastInlineDelegate OnPingComplete; // 0x2c0(0x10)
	struct FMulticastInlineDelegate OnPlayerInfoComplete; // 0x2d0(0x10)
	struct FString DestSessionId; // 0x2e0(0x10)
	char pad_2F0[0x8]; // 0x2f0(0x08)

	bool Start(struct FString Address, int32_t Port, bool portOverride); // Function LF.LFSessionBeaconClient.Start // (Final|Native|Public|BlueprintCallable) // @ game+0x104c1f0
	void ServerSetPlayerInfo(struct FString PlayerName, struct FName CharacterId, char TeamId); // Function LF.LFSessionBeaconClient.ServerSetPlayerInfo // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x104bf20
	void ServerPlayerInfo(); // Function LF.LFSessionBeaconClient.ServerPlayerInfo // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x1006800
	void RequestSetPlayerInfo(struct FString PlayerName, struct FName CharacterId, char TeamId); // Function LF.LFSessionBeaconClient.RequestSetPlayerInfo // (Final|Native|Public|BlueprintCallable) // @ game+0x104bce0
	void RequestPlayerInfo(); // Function LF.LFSessionBeaconClient.RequestPlayerInfo // (Final|Native|Public|BlueprintCallable) // @ game+0x104bcc0
	void Disconnect(); // Function LF.LFSessionBeaconClient.Disconnect // (Final|Native|Public|BlueprintCallable) // @ game+0x1049f30
	void ClientPlayerInfo(struct TArray<struct FLFSessionPlayerInfo> PlayerInfos); // Function LF.LFSessionBeaconClient.ClientPlayerInfo // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x1049db0
	void ClientOnSetPlayerInfo(); // Function LF.LFSessionBeaconClient.ClientOnSetPlayerInfo // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0xcee590
};

// Class LF.LFSessionBeaconHost
// Size: 0x310 (Inherited: 0x308)
struct ALFSessionBeaconHost : AOnlineBeaconHost {
	char pad_308[0x8]; // 0x308(0x08)

	bool Start(); // Function LF.LFSessionBeaconHost.Start // (Final|Native|Public|BlueprintCallable) // @ game+0x104c370
	void AddHost(struct AOnlineBeaconHostObject* HostObject); // Function LF.LFSessionBeaconHost.AddHost // (Final|Native|Public|BlueprintCallable) // @ game+0x1049c70
};

// Class LF.LFSessionBeaconHostObject
// Size: 0x248 (Inherited: 0x248)
struct ALFSessionBeaconHostObject : AOnlineBeaconHostObject {
};

// Class LF.LFSignComponent
// Size: 0xb8 (Inherited: 0xb8)
struct ULFSignComponent : ULFActorComponent {

	void SetContentsSignable(struct AActor* SignableActor); // Function LF.LFSignComponent.SetContentsSignable // (Final|Native|Public|BlueprintCallable) // @ game+0x104c0e0
	void ServerSetContents(struct AActor* SignableActor, struct FString Contents); // Function LF.LFSignComponent.ServerSetContents // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable) // @ game+0x1027270
};

// Class LF.LFSpringArmComponent
// Size: 0x280 (Inherited: 0x280)
struct ULFSpringArmComponent : USpringArmComponent {
};

// Class LF.LFStoreComponent
// Size: 0xd8 (Inherited: 0xb0)
struct ULFStoreComponent : UActorComponent {
	char pad_B0[0x8]; // 0xb0(0x08)
	struct AItemEntity* Entity; // 0xb8(0x08)
	int32_t StoreAmount; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
	struct TArray<struct FInventoryItem> OwningItems; // 0xc8(0x10)

	struct TArray<struct FInventoryItem> GetOwningItems(); // Function LF.LFStoreComponent.GetOwningItems // (Final|Native|Public|BlueprintCallable) // @ game+0x104ab80
};

// Class LF.LFSystemMenuWidget
// Size: 0x270 (Inherited: 0x260)
struct ULFSystemMenuWidget : UUserWidget {
	struct ALFCharacterPlayer* PlayerCharacter; // 0x260(0x08)
	struct APlayerHUD* PlayerHUD; // 0x268(0x08)

	void SaveLoad(); // Function LF.LFSystemMenuWidget.SaveLoad // (Final|Native|Public|BlueprintCallable) // @ game+0x104bf00
	void Return(); // Function LF.LFSystemMenuWidget.Return // (Final|Native|Public|BlueprintCallable) // @ game+0x104bee0
	void Resume(); // Function LF.LFSystemMenuWidget.Resume // (Final|Native|Public|BlueprintCallable) // @ game+0x104bec0
	void QuickSave(); // Function LF.LFSystemMenuWidget.QuickSave // (Final|Native|Public|BlueprintCallable) // @ game+0x104bbd0
	void OpenPlayerList(); // Function LF.LFSystemMenuWidget.OpenPlayerList // (Final|Native|Public|BlueprintCallable) // @ game+0x104bb20
	void OpenOption(); // Function LF.LFSystemMenuWidget.OpenOption // (Final|Native|Public|BlueprintCallable) // @ game+0x104bb00
	void OnSaveLoad(); // Function LF.LFSystemMenuWidget.OnSaveLoad // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void OnReturn(); // Function LF.LFSystemMenuWidget.OnReturn // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void OnResume(); // Function LF.LFSystemMenuWidget.OnResume // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void OnQuickSave(); // Function LF.LFSystemMenuWidget.OnQuickSave // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void OnPlayerListOpen(); // Function LF.LFSystemMenuWidget.OnPlayerListOpen // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void OnOpenOption(); // Function LF.LFSystemMenuWidget.OnOpenOption // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void OnExit(); // Function LF.LFSystemMenuWidget.OnExit // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void Exit(); // Function LF.LFSystemMenuWidget.Exit // (Final|Native|Public|BlueprintCallable) // @ game+0x1049f50
};

// Class LF.LFTeamActorInterface
// Size: 0x28 (Inherited: 0x28)
struct ULFTeamActorInterface : UInterface {
};

// Class LF.LFTeamAgentInterface
// Size: 0x28 (Inherited: 0x28)
struct ULFTeamAgentInterface : UInterface {
};

// Class LF.LFTeamLibrary
// Size: 0x28 (Inherited: 0x28)
struct ULFTeamLibrary : UBlueprintFunctionLibrary {

	struct FString TryGetTeamName(struct UObject* WorldContextObject, struct AActor* Actor); // Function LF.LFTeamLibrary.TryGetTeamName // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x104c3a0
	void RenameTeam(struct UObject* WorldContextObject, struct FString TeamName); // Function LF.LFTeamLibrary.RenameTeam // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x104bbf0
	void KickTeam(struct UObject* WorldContextObject, struct FLFTeamAgentId AgentId); // Function LF.LFTeamLibrary.KickTeam // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x104b8e0
	bool IsAgentOnline(struct UObject* WorldContextObject, struct FLFTeamAgentId AgentId); // Function LF.LFTeamLibrary.IsAgentOnline // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x104b5d0
	void InviteTeam(struct UObject* WorldContextObject, struct FLFTeamAgentId AgentId); // Function LF.LFTeamLibrary.InviteTeam // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x104b4e0
	void GiveTeamRole(struct UObject* WorldContextObject, struct FLFTeamAgentId AgentId, enum class ETeamRole TeamRole); // Function LF.LFTeamLibrary.GiveTeamRole // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x104b2f0
	enum class ETeamRole GetTeamRole(struct UObject* WorldContextObject, struct FLFTeamAgentId AgentId); // Function LF.LFTeamLibrary.GetTeamRole // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x104b1f0
	void GetTeamPlayers(struct UObject* WorldContextObject, struct FLFTeamId TeamId, struct TArray<struct FLFTeamAgentId> OutPlayers); // Function LF.LFTeamLibrary.GetTeamPlayers // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x104b080
	struct FString GetTeamName(struct UObject* WorldContextObject, struct FLFTeamId TeamId); // Function LF.LFTeamLibrary.GetTeamName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x104af60
	struct TScriptInterface<None> GetTeamManager(struct UObject* WorldContextObject); // Function LF.LFTeamLibrary.GetTeamManager // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x104aec0
	int32_t GetTeamHash(struct FLFTeamId TeamId); // Function LF.LFTeamLibrary.GetTeamHash // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x104ae20
	enum class ELFTeamAttitude GetTeamAttitude(struct AActor* Actor, struct AActor* SelfActor, struct FGenericTeamId LegacyTeamId); // Function LF.LFTeamLibrary.GetTeamAttitude // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x104ad20
	struct TScriptInterface<None> GetTeamActor(struct UObject* WorldContextObject); // Function LF.LFTeamLibrary.GetTeamActor // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x104ac80
	void GetOtherTeamPlayers(struct UObject* WorldContextObject, struct FLFTeamId TeamId, struct TArray<struct FLFTeamAgentId> OutPlayers); // Function LF.LFTeamLibrary.GetOtherTeamPlayers // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x104aa10
	struct FLFTeamAgentId GetLocalTeamAgentId(struct UObject* WorldContextObject); // Function LF.LFTeamLibrary.GetLocalTeamAgentId // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x104a8a0
	struct TScriptInterface<None> GetLocalTeamAgent(struct UObject* WorldContextObject); // Function LF.LFTeamLibrary.GetLocalTeamAgent // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x104a800
	void GetAllTeams(struct UObject* WorldContextObject, struct TArray<struct FLFTeam> OutTeams); // Function LF.LFTeamLibrary.GetAllTeams // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x104a670
	struct FLFTeamId FindTeamId(struct UObject* WorldContextObject, struct FLFTeamAgentId AgentId); // Function LF.LFTeamLibrary.FindTeamId // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x104a560
	bool FindTeam(struct UObject* WorldContextObject, struct FLFTeamId TeamId, struct FLFTeam OutTeam); // Function LF.LFTeamLibrary.FindTeam // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x104a2f0
	struct FLFTeamId FindPropertyTeamId(struct UObject* WorldContextObject, struct FLFTeamAgentId AgentId); // Function LF.LFTeamLibrary.FindPropertyTeamId // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x104a1e0
	bool FindPropertyTeam(struct UObject* WorldContextObject, struct FLFTeamId TeamId, struct FLFTeam OutTeam); // Function LF.LFTeamLibrary.FindPropertyTeam // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1049f70
};

// Class LF.LFTeamManagerInterface
// Size: 0x28 (Inherited: 0x28)
struct ULFTeamManagerInterface : UInterface {
};

// Class LF.LFTrapFunction
// Size: 0x28 (Inherited: 0x28)
struct ULFTrapFunction : UBlueprintFunctionLibrary {

	void StopSound(struct UAudioComponent* InputAudio); // Function LF.LFTrapFunction.StopSound // (Final|Native|Static|Private|BlueprintCallable) // @ game+0x1050910
	void StopEffect(struct UFXSystemComponent* FXSystem, bool bManualRelease); // Function LF.LFTrapFunction.StopEffect // (Final|Native|Static|Private|BlueprintCallable) // @ game+0x1050850
	struct UAudioComponent* PlaySoundAttached(enum class EGameSoundType SoundType, struct FName SoundId, struct USceneComponent* AttachToComponent, struct UAudioComponent* InputAudio); // Function LF.LFTrapFunction.PlaySoundAttached // (Final|Native|Static|Private|BlueprintCallable) // @ game+0x1050620
	struct ACharacter* ImpactToCharacter(struct ACharacter* Character, struct FVector Velocity, float WeightRatio); // Function LF.LFTrapFunction.ImpactToCharacter // (Final|Native|Static|Private|HasDefaults|BlueprintCallable) // @ game+0x104fbd0
	float GetWeightAttenuation(struct ALFCharacter* Character); // Function LF.LFTrapFunction.GetWeightAttenuation // (Final|Native|Static|Private|BlueprintCallable) // @ game+0x104fb00
	struct UFXSystemComponent* EmitEffectAttached(struct FName EffectId, struct USceneComponent* AttachToComponent, struct UFXSystemComponent* FXSystem, bool bManuallyRelease); // Function LF.LFTrapFunction.EmitEffectAttached // (Final|Native|Static|Private|BlueprintCallable) // @ game+0x104f8f0
};

// Class LF.LFTutorialComponent
// Size: 0xd0 (Inherited: 0xb8)
struct ULFTutorialComponent : ULFActorComponent {
	int32_t CurrentTutorialIndex; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
	struct TArray<struct FTutorialData> TutorialData; // 0xc0(0x10)

	void OnResearch(struct FName ResearchEntityName); // Function LF.LFTutorialComponent.OnResearch // (Final|Native|Public|HasOutParms) // @ game+0x10504c0
	void OnRepair(struct FName BuildingEntityName); // Function LF.LFTutorialComponent.OnRepair // (Final|Native|Public|HasOutParms) // @ game+0x1050430
	void OnRep_CurrentTutorialIndex(); // Function LF.LFTutorialComponent.OnRep_CurrentTutorialIndex // (Final|Native|Public) // @ game+0x1050410
	void OnMap(); // Function LF.LFTutorialComponent.OnMap // (Final|Native|Public) // @ game+0x10503d0
	void OnLight(); // Function LF.LFTutorialComponent.OnLight // (Final|Native|Public) // @ game+0x10503b0
	void OnItemOwned(struct FName ItemEntityName); // Function LF.LFTutorialComponent.OnItemOwned // (Final|Native|Public|HasOutParms) // @ game+0x1050320
	void OnItemCrafted(struct FName ItemEntityName); // Function LF.LFTutorialComponent.OnItemCrafted // (Final|Native|Public|HasOutParms) // @ game+0x1050290
	void OnDodge(); // Function LF.LFTutorialComponent.OnDodge // (Final|Native|Public) // @ game+0x1050270
	void OnDemolish(struct FName BuildingEntityName); // Function LF.LFTutorialComponent.OnDemolish // (Final|Native|Public|HasOutParms) // @ game+0x10501e0
	void OnBuildingComplete(struct FName BuildingEntityName); // Function LF.LFTutorialComponent.OnBuildingComplete // (Final|Native|Public|HasOutParms) // @ game+0x1050150
	void OnAnyResearch(); // Function LF.LFTutorialComponent.OnAnyResearch // (Final|Native|Public) // @ game+0x1050130
	void ClientSetTutorial(int32_t TutorialIndex); // Function LF.LFTutorialComponent.ClientSetTutorial // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x104f860
	void ClientCompleteTutorial(int32_t CompletedTutorialIndex); // Function LF.LFTutorialComponent.ClientCompleteTutorial // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x104f7d0
	void ClientCompleteAllTutorial(); // Function LF.LFTutorialComponent.ClientCompleteAllTutorial // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x1014720
};

// Class LF.LFZombie
// Size: 0x1030 (Inherited: 0x730)
struct ALFZombie : ALFAICharacter {
	char pad_730[0x48]; // 0x730(0x48)
	struct ULFZombieMovementComponent* ZombieMovement; // 0x778(0x08)
	struct UGoreSystem* GoreSystem; // 0x780(0x08)
	struct ULFZombieAnimComponent* AnimComponent; // 0x788(0x08)
	struct FName MainWeaponSocketName; // 0x790(0x08)
	struct FName SubWeaponSocketName; // 0x798(0x08)
	struct UFootstepComponent* Footstep; // 0x7a0(0x08)
	float StuckCheckDistance; // 0x7a8(0x04)
	char pad_7AC[0x2]; // 0x7ac(0x02)
	bool bIsInside; // 0x7ae(0x01)
	enum class EZombieType ZombieType; // 0x7af(0x01)
	float SpeedMultiplier; // 0x7b0(0x04)
	float ScaleRandomRangeMin; // 0x7b4(0x04)
	float ScaleRandomRangeMax; // 0x7b8(0x04)
	float DefaultAttackWait; // 0x7bc(0x04)
	float WayFollowSecond; // 0x7c0(0x04)
	float AttackRange; // 0x7c4(0x04)
	float AlternativeAttackRange; // 0x7c8(0x04)
	float ChaseAttackRange; // 0x7cc(0x04)
	float SpecialAttackMinRange; // 0x7d0(0x04)
	float SpecialAttackMaxRange; // 0x7d4(0x04)
	float SpecialAttackCoolTime; // 0x7d8(0x04)
	float ThreatProbability; // 0x7dc(0x04)
	float AvoidProbability; // 0x7e0(0x04)
	float AvoidAcceleration; // 0x7e4(0x04)
	float InitialCapsuleRadius; // 0x7e8(0x04)
	char pad_7EC[0x14]; // 0x7ec(0x14)
	struct FName MainWeaponName; // 0x800(0x08)
	struct FName SubWeaponName; // 0x808(0x08)
	struct FName InitialMainWeaponName; // 0x810(0x08)
	struct FName InitialSubWeaponName; // 0x818(0x08)
	enum class EAttackType CurrentAttackType; // 0x820(0x01)
	char pad_821[0x7]; // 0x821(0x07)
	struct AEquipmentEntity* MainWeapon; // 0x828(0x08)
	struct AEquipmentEntity* SubWeapon; // 0x830(0x08)
	struct FEquipmentData MainWeaponData; // 0x838(0x150)
	struct FEquipmentData SubWeaponData; // 0x988(0x150)
	struct FEquipmentData InitialMainWeaponData; // 0xad8(0x150)
	struct FEquipmentData InitialSubWeaponData; // 0xc28(0x150)
	float DropRate; // 0xd78(0x04)
	struct FName DropItemName; // 0xd7c(0x08)
	float WaveDropRate; // 0xd84(0x04)
	struct FName WaveDropItemName; // 0xd88(0x08)
	float EarlyWaveDropRateAddition; // 0xd90(0x04)
	int32_t EarlyWaveLastIndex; // 0xd94(0x04)
	struct AItemEntity* CorpseLootItemClass; // 0xd98(0x08)
	struct TArray<struct TSoftObjectPtr<struct UAnimMontage>> RoarAnimations; // 0xda0(0x10)
	struct TArray<struct TSoftObjectPtr<struct UAnimMontage>> ThreatAnimations; // 0xdb0(0x10)
	struct TArray<struct TSoftObjectPtr<struct UAnimMontage>> AvoidThreatAnimations; // 0xdc0(0x10)
	struct TArray<struct TSoftObjectPtr<struct UAnimMontage>> RandomIdleAnimations; // 0xdd0(0x10)
	struct TArray<struct TSoftObjectPtr<struct UAnimMontage>> InspectAnimations; // 0xde0(0x10)
	struct TSoftObjectPtr<struct UAnimMontage> BiteAnimation; // 0xdf0(0x28)
	struct TMap<enum class EAttackType, struct FWeaponNames> Weapons; // 0xe18(0x50)
	bool bAroundBehavior; // 0xe68(0x01)
	bool bSpawnedFromWave; // 0xe69(0x01)
	bool bIsPlayingSpecialAnimation; // 0xe6a(0x01)
	bool bUseSmallerDefaultAttack; // 0xe6b(0x01)
	bool bUseLargerRushAttack; // 0xe6c(0x01)
	char pad_E6D[0x3]; // 0xe6d(0x03)
	float BuildingAttackCollisionMulti; // 0xe70(0x04)
	struct FName GoreSlashTrait; // 0xe74(0x08)
	struct FName GoreHeadBurstTrait; // 0xe7c(0x08)
	struct FName GoreBodyBurstTrait; // 0xe84(0x08)
	char pad_E8C[0x4]; // 0xe8c(0x04)
	struct TArray<struct FName> GoreBodyRemainParts; // 0xe90(0x10)
	struct FName GoreBodyArmLeft; // 0xea0(0x08)
	struct FName GoreBodyArmRight; // 0xea8(0x08)
	float GoreBodyArmHealth; // 0xeb0(0x04)
	bool bLeftArmBroken; // 0xeb4(0x01)
	bool bRightArmBroken; // 0xeb5(0x01)
	bool bHeadBroken; // 0xeb6(0x01)
	char pad_EB7[0x1]; // 0xeb7(0x01)
	struct UAudioComponent* DieSoundComponent; // 0xeb8(0x08)
	struct TMap<struct FName, float> FireMaterialValues; // 0xec0(0x50)
	struct TArray<struct UMaterialInstanceDynamic*> MaterialInstances; // 0xf10(0x10)
	bool bUseDynamicMaterial; // 0xf20(0x01)
	char pad_F21[0x3]; // 0xf21(0x03)
	struct FName CharacterSoundType; // 0xf24(0x08)
	bool bFromWave; // 0xf2c(0x01)
	bool bFromTimeWave; // 0xf2d(0x01)
	bool bFromRandomWave; // 0xf2e(0x01)
	char pad_F2F[0x1]; // 0xf2f(0x01)
	int32_t WaveIndex; // 0xf30(0x04)
	int32_t SubWaveIndex; // 0xf34(0x04)
	int32_t FromWhere; // 0xf38(0x04)
	bool bCanBeSummoned; // 0xf3c(0x01)
	char pad_F3D[0x3]; // 0xf3d(0x03)
	struct TArray<struct TSoftObjectPtr<struct UAnimMontage>> BeSummonedAnimations; // 0xf40(0x10)
	enum class ECharacterWeightClass WeightClass; // 0xf50(0x01)
	char pad_F51[0x7]; // 0xf51(0x07)
	struct TArray<struct TSoftObjectPtr<struct UAnimMontage>> SpawnAnimations; // 0xf58(0x10)
	float ReleaseTargetProbability; // 0xf68(0x04)
	char pad_F6C[0x4]; // 0xf6c(0x04)
	struct AActor* TargetActor; // 0xf70(0x08)
	bool bIsBoss; // 0xf78(0x01)
	char pad_F79[0x7]; // 0xf79(0x07)
	struct TArray<struct UAnimationAsset*> LoadedZombieAnimations; // 0xf80(0x10)
	struct AEnemyController* EnemyController; // 0xf90(0x08)
	struct FTimerHandle AnimHandle; // 0xf98(0x08)
	struct FTimerHandle PhysicsHandle; // 0xfa0(0x08)
	float DestroyTimeMin; // 0xfa8(0x04)
	float DestroyTimeWaveMulti; // 0xfac(0x04)
	struct FTimerHandle DestroyHandle; // 0xfb0(0x08)
	struct FTimerHandle CheckWeaponHandle; // 0xfb8(0x08)
	struct TArray<struct AWayPoint*> WayPaths; // 0xfc0(0x10)
	int32_t CurrentWayIndex; // 0xfd0(0x04)
	struct FVector WayDestination; // 0xfd4(0x0c)
	struct FVector InitialScale; // 0xfe0(0x0c)
	char pad_FEC[0x4]; // 0xfec(0x04)
	struct AActor* SummonerActor; // 0xff0(0x08)
	bool bIsBeingSummoned; // 0xff8(0x01)
	char pad_FF9[0x7]; // 0xff9(0x07)
	struct FTimerHandle BeSummonedHandle; // 0x1000(0x08)
	struct FTimerHandle RandomizeScaleHandle; // 0x1008(0x08)
	bool bIsSummoned; // 0x1010(0x01)
	bool bCanSpawnCorpse; // 0x1011(0x01)
	bool bIsSpawning; // 0x1012(0x01)
	char pad_1013[0x5]; // 0x1013(0x05)
	struct FTimerHandle SpawnHandle; // 0x1018(0x08)
	float RandomizeScaleDelay; // 0x1020(0x04)
	char pad_1024[0xc]; // 0x1024(0x0c)

	void ShowSubWeapon(); // Function LF.LFZombie.ShowSubWeapon // (Final|Native|Public|BlueprintCallable) // @ game+0x1050830
	void ShowMainWeapon(); // Function LF.LFZombie.ShowMainWeapon // (Final|Native|Public|BlueprintCallable) // @ game+0x1050810
	float PlaySpecialAnimation(struct UAnimMontage* SpecialAnim); // Function LF.LFZombie.PlaySpecialAnimation // (Final|Native|Public|BlueprintCallable) // @ game+0x1050770
	float PlayNormalAnimation(struct UAnimMontage* NormalAnim, float InPlayRate); // Function LF.LFZombie.PlayNormalAnimation // (Final|Native|Public|BlueprintCallable) // @ game+0x1050550
	void OnGoreSlash(struct FName SlashedPart); // Function LF.LFZombie.OnGoreSlash // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1395fe0
	void OnGoreHeadBurst(); // Function LF.LFZombie.OnGoreHeadBurst // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void OnAfterLoadZombieAnimations(); // Function LF.LFZombie.OnAfterLoadZombieAnimations // (Final|Native|Public) // @ game+0x1050110
	void MulticastPlaySpecialAnimation(struct UAnimMontage* SpecialAnim); // Function LF.LFZombie.MulticastPlaySpecialAnimation // (Net|Native|Event|NetMulticast|Public) // @ game+0x1050080
	void MulticastPlayNormalAnimation(struct UAnimMontage* NormalAnim, float InPlayRate); // Function LF.LFZombie.MulticastPlayNormalAnimation // (Net|Native|Event|NetMulticast|Public) // @ game+0x104ffa0
	void MulticastHeadBurst(struct FHitResult Hit); // Function LF.LFZombie.MulticastHeadBurst // (Net|Native|Event|NetMulticast|Public) // @ game+0x104fe70
	void MulticastGoreSlash(struct FHitResult Hit); // Function LF.LFZombie.MulticastGoreSlash // (Net|Native|Event|NetMulticast|Public) // @ game+0x104fd40
	void MulticastBodyBurstUpper(); // Function LF.LFZombie.MulticastBodyBurstUpper // (Net|Native|Event|NetMulticast|Public) // @ game+0x104fd20
	void MulticastBodyBurstAll(); // Function LF.LFZombie.MulticastBodyBurstAll // (Net|Native|Event|NetMulticast|Public) // @ game+0x104fd00
	void HideSubWeapon(); // Function LF.LFZombie.HideSubWeapon // (Final|Native|Public|BlueprintCallable) // @ game+0x104fbb0
	void HideMainWeapon(); // Function LF.LFZombie.HideMainWeapon // (Final|Native|Public|BlueprintCallable) // @ game+0x104fb90
	struct TArray<struct FName> GetBrokenBones(); // Function LF.LFZombie.GetBrokenBones // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x104fa80
	void EndSpawn(); // Function LF.LFZombie.EndSpawn // (Final|Native|Private) // @ game+0x104fa60
	void EndBeingSummoned(); // Function LF.LFZombie.EndBeingSummoned // (Final|Native|Private) // @ game+0x104fa40
	void CheckWeapon(); // Function LF.LFZombie.CheckWeapon // (Final|Native|Private) // @ game+0x104f7b0
	bool CanSpawnCorpse(); // Function LF.LFZombie.CanSpawnCorpse // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x104f770
	void AllowAnimTickAnyway(float Duration); // Function LF.LFZombie.AllowAnimTickAnyway // (Final|Native|Public|BlueprintCallable) // @ game+0x104f6f0
};

// Class LF.LFZombieAnimComponent
// Size: 0xd8 (Inherited: 0xb8)
struct ULFZombieAnimComponent : ULFActorComponent {
	struct TArray<struct TSoftObjectPtr<struct UAnimMontage>> ChasingAnimations; // 0xb8(0x10)
	float ChaseAnimCheckInterval; // 0xc8(0x04)
	float ChaseAnimProbability; // 0xcc(0x04)
	float ChaseAnimForward; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)
};

// Class LF.LFZombieAttackComponent
// Size: 0x418 (Inherited: 0x410)
struct ULFZombieAttackComponent : ULFCharacterAttackComponent {
	bool bShowWeaponOnEndAttack; // 0x410(0x01)
	char pad_411[0x7]; // 0x411(0x07)
};

// Class LF.LFZombieCorpseComponent
// Size: 0x160 (Inherited: 0x160)
struct ULFZombieCorpseComponent : ULFCharacterCorpseComponent {
};

// Class LF.LFZombieMovementComponent
// Size: 0xb50 (Inherited: 0xb00)
struct ULFZombieMovementComponent : UCharacterMovementComponent {
	char pad_B00[0x8]; // 0xb00(0x08)
	float AIWalkSpeed; // 0xb08(0x04)
	float AIJogSpeed; // 0xb0c(0x04)
	float AIRunSpeed; // 0xb10(0x04)
	float BackwardMoveModifier; // 0xb14(0x04)
	float CurrentAngle; // 0xb18(0x04)
	float DesiredSpeed; // 0xb1c(0x04)
	float CurrentMaxWalkSpeed; // 0xb20(0x04)
	float AttackMoveSpeed; // 0xb24(0x04)
	float InterpSpeed; // 0xb28(0x04)
	float DistanceMoveSpeed; // 0xb2c(0x04)
	float AvoidInterpSpeed; // 0xb30(0x04)
	float SpeedRandomMultiplier; // 0xb34(0x04)
	float SpeedRandomRange; // 0xb38(0x04)
	float Accel; // 0xb3c(0x04)
	char pad_B40[0x4]; // 0xb40(0x04)
	float SpeedMulByDistFromTerritoryCentroid; // 0xb44(0x04)
	float MinSpeedMulByDistFromTerritoryCentroid; // 0xb48(0x04)
	float DeltaSpeedMulByDistFromTerritoryCentroidPerSec; // 0xb4c(0x04)

	void OnRep_CurrentMaxWalkSpeed(); // Function LF.LFZombieMovementComponent.OnRep_CurrentMaxWalkSpeed // (Final|Native|Public) // @ game+0x10503f0
	void AccelerateMoveSpeed(float InAccel); // Function LF.LFZombieMovementComponent.AccelerateMoveSpeed // (Final|Native|Public|BlueprintCallable) // @ game+0x104f670
};

// Class LF.LFZombieSkeletalMeshComponent
// Size: 0xee0 (Inherited: 0xed0)
struct ULFZombieSkeletalMeshComponent : ULFSkeletalMeshComponent {
	char pad_ED0[0x10]; // 0xed0(0x10)
};

// Class LF.LFZombieStatusComponent
// Size: 0x148 (Inherited: 0x148)
struct ULFZombieStatusComponent : ULFCharacterStatusComponent {
};

// Class LF.LobbyWidget
// Size: 0x260 (Inherited: 0x260)
struct ULobbyWidget : UUserWidget {
};

// Class LF.Lockable
// Size: 0x28 (Inherited: 0x28)
struct ULockable : UInterface {

	void SetSecurityKey(struct FString Key); // Function LF.Lockable.SetSecurityKey // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1056c00
	void SetAdmin(struct FString UniqueNetId); // Function LF.Lockable.SetAdmin // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1056820
	void ResetUnlockers(struct FString NewSecurityKey); // Function LF.Lockable.ResetUnlockers // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1056780
	bool IsUnlocker(struct FString UniqueNetId); // Function LF.Lockable.IsUnlocker // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1055e90
	bool IsAdmin(struct FString UniqueNetId); // Function LF.Lockable.IsAdmin // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1055cb0
	struct TArray<struct FString> GetUnlockers(); // Function LF.Lockable.GetUnlockers // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1055bb0
	enum class ESecurityType GetSecurityType(); // Function LF.Lockable.GetSecurityType // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1055a80
	struct FString GetSecurityKey(); // Function LF.Lockable.GetSecurityKey // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1055a00
	struct FString GetAdmin(); // Function LF.Lockable.GetAdmin // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x10557e0
	void AddUnlocker(struct FString UniqueNetId); // Function LF.Lockable.AddUnlocker // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x10556c0
};

// Class LF.Lootable
// Size: 0x28 (Inherited: 0x28)
struct ULootable : UInterface {
};

// Class LF.ManualUtilityTrapEntity
// Size: 0x720 (Inherited: 0x720)
struct AManualUtilityTrapEntity : ATrapEntity {
};

// Class LF.Markerable
// Size: 0x28 (Inherited: 0x28)
struct UMarkerable : UInterface {

	void SetMarkerOwner(struct FString OwnerId); // Function LF.Markerable.SetMarkerOwner // (Native|Public) // @ game+0x1056a40
	struct UUserWidget* GetMarkerWidgetClass(); // Function LF.Markerable.GetMarkerWidgetClass // (Native|Public|BlueprintCallable) // @ game+0x1055910
	struct FString GetMarkerOwner(); // Function LF.Markerable.GetMarkerOwner // (Native|Public) // @ game+0x1055890
};

// Class LF.MarkerBuildingEntity
// Size: 0x6d8 (Inherited: 0x698)
struct AMarkerBuildingEntity : ABuildingEntity {
	char pad_698[0x8]; // 0x698(0x08)
	struct UUserWidget* MarkerWidgetClass; // 0x6a0(0x08)
	struct TArray<struct UUserWidget*> MarkerWidgetClasses; // 0x6a8(0x10)
	int32_t ChangeIndex; // 0x6b8(0x04)
	char pad_6BC[0x4]; // 0x6bc(0x04)
	struct FString OwnerId; // 0x6c0(0x10)
	bool bHasMarked; // 0x6d0(0x01)
	char pad_6D1[0x7]; // 0x6d1(0x07)

	void UpdateMarkerToLocalPlayer(); // Function LF.MarkerBuildingEntity.UpdateMarkerToLocalPlayer // (Final|Native|Public) // @ game+0x1057450
	void OnRep_ChangeIndex(); // Function LF.MarkerBuildingEntity.OnRep_ChangeIndex // (Final|Native|Public) // @ game+0x10566e0
	void OnIndexChanged(); // Function LF.MarkerBuildingEntity.OnIndexChanged // (Final|Native|Public) // @ game+0x10566a0
	void OnChange(); // Function LF.MarkerBuildingEntity.OnChange // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
};

// Class LF.MarkerStaticItemEntity
// Size: 0x510 (Inherited: 0x4f0)
struct AMarkerStaticItemEntity : AStaticItemEntity {
	char pad_4F0[0x8]; // 0x4f0(0x08)
	struct FString OwnerId; // 0x4f8(0x10)
	struct UUserWidget* MarkerWidgetClass; // 0x508(0x08)

	void OnRep_OwnerId(); // Function LF.MarkerStaticItemEntity.OnRep_OwnerId // (Final|Native|Public) // @ game+0x1056720
};

// Class LF.MaterialFarmBuildingEntity
// Size: 0x720 (Inherited: 0x720)
struct AMaterialFarmBuildingEntity : AFarmBuildingEntity {
};

// Class LF.MeleeTrapEntity
// Size: 0x880 (Inherited: 0x838)
struct AMeleeTrapEntity : AAutomaticTrapEntity {
	char pad_838[0x8]; // 0x838(0x08)
	struct TArray<struct FInventoryItem> OwningItems; // 0x840(0x10)
	struct TArray<struct FInventoryItem_Net> OwningItems_Net; // 0x850(0x10)
	struct FText StoreName; // 0x860(0x18)
	int32_t MaxItemAmount; // 0x878(0x04)
	int32_t ItemStoreSlotAmount; // 0x87c(0x04)

	void OnRep_OwningItems(); // Function LF.MeleeTrapEntity.OnRep_OwningItems // (Final|Native|Public) // @ game+0x1056740
};

// Class LF.MovementCondition
// Size: 0x28 (Inherited: 0x28)
struct UMovementCondition : UInterface {
};

// Class LF.MultiplayerDifficultyDataAsset
// Size: 0x90 (Inherited: 0x30)
struct UMultiplayerDifficultyDataAsset : UGameDifficultyDataAsset {
	struct FMultiplayerStatusModifier MultiplayerStatus; // 0x30(0x60)
};

// Class LF.NavigatableAgent
// Size: 0x28 (Inherited: 0x28)
struct UNavigatableAgent : UInterface {
};

// Class LF.OptimizableComponent
// Size: 0x28 (Inherited: 0x28)
struct UOptimizableComponent : UInterface {
};

// Class LF.ParryDamageType
// Size: 0x40 (Inherited: 0x40)
struct UParryDamageType : UDamageType {
};

// Class LF.PartialDestructibleEntity
// Size: 0x6a0 (Inherited: 0x670)
struct APartialDestructibleEntity : ADestructibleEntity {
	struct UStaticMesh* EntireMesh; // 0x670(0x08)
	struct TArray<struct UStaticMesh*> PartialMeshes; // 0x678(0x10)
	struct TArray<struct UStaticMeshComponent*> PartialMeshComponents; // 0x688(0x10)
	char pad_698[0x8]; // 0x698(0x08)

	void CreatePartialMesh(); // Function LF.PartialDestructibleEntity.CreatePartialMesh // (Final|Native|Protected) // @ game+0x10557c0
};

// Class LF.PassiveSkillUser
// Size: 0x28 (Inherited: 0x28)
struct UPassiveSkillUser : UInterface {
};

// Class LF.PerchBirdTarget
// Size: 0x240 (Inherited: 0x220)
struct APerchBirdTarget : ABirdTarget {
	char pad_220[0x18]; // 0x220(0x18)
	struct AActor* OccupyingActor; // 0x238(0x08)

	void SetOccupied(struct AActor* InOccupyingActor, bool bNewValue); // Function LF.PerchBirdTarget.SetOccupied // (Final|Native|Public|BlueprintCallable) // @ game+0x1056b30
	void OnPerch(); // Function LF.PerchBirdTarget.OnPerch // (Final|Native|Public) // @ game+0x10566c0
	bool IsOccupiedBy(struct AActor* InOccupyingActor); // Function LF.PerchBirdTarget.IsOccupiedBy // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1055d90
	bool IsOccupied(); // Function LF.PerchBirdTarget.IsOccupied // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1055d60
};

// Class LF.PlayerHUD
// Size: 0x498 (Inherited: 0x310)
struct APlayerHUD : AHUD {
	struct ULFSystemMenuWidget* SystemWidgetClass; // 0x310(0x08)
	struct ULFSystemMenuWidget* SystemWidgetInstance; // 0x318(0x08)
	struct ULFHudWidget* HUDWidgetClass; // 0x320(0x08)
	struct ULFHudWidget* HUDWidgetInstance; // 0x328(0x08)
	struct UTutorialWidget* TutorialWidgetClass; // 0x330(0x08)
	struct UTutorialWidget* TutorialWidgetInstance; // 0x338(0x08)
	struct UUserWidget* DevHUDWidgetClass; // 0x340(0x08)
	struct UUserWidget* DevHUDWidgetInstance; // 0x348(0x08)
	struct UUserWidget* DevWaveHUDWidgetClass; // 0x350(0x08)
	struct UUserWidget* DevWaveHUDWidgetInstance; // 0x358(0x08)
	struct UInventoryWidget* InventoryWidgetClass; // 0x360(0x08)
	struct UInventoryWidget* InventoryWidgetInstance; // 0x368(0x08)
	struct UBuildingWidget* BuildingWidgetClass; // 0x370(0x08)
	struct UBuildingWidget* BuildingWidgetInstance; // 0x378(0x08)
	struct UBuildingUpgradeWidget* BuildingUpgradeWidgetClass; // 0x380(0x08)
	struct UBuildingUpgradeWidget* BuildingUpgradeWidgetInstance; // 0x388(0x08)
	struct UResearchUpgradeWidget* ResearchUpgradeWidgetClass; // 0x390(0x08)
	struct UResearchUpgradeWidget* ResearchUpgradeWidgetInstance; // 0x398(0x08)
	struct UInteractionHudWidget* InteractionWidgetClass; // 0x3a0(0x08)
	struct UInteractionHudWidget* InteractionWidgetInstance; // 0x3a8(0x08)
	struct UTooltipWidget* TooltipWidgetClass; // 0x3b0(0x08)
	struct UTooltipWidget* TooltipWidgetInstance; // 0x3b8(0x08)
	struct UResearchWidget* ResearchWidgetClass; // 0x3c0(0x08)
	struct UResearchWidget* ResearchWidgetInstance; // 0x3c8(0x08)
	struct ULFMessageWidget* MessageWidgetClass; // 0x3d0(0x08)
	struct ULFMessageWidget* MessageWidgetInstance; // 0x3d8(0x08)
	struct ULFMessageWidget* TopMessageWidgetClass; // 0x3e0(0x08)
	struct ULFMessageWidget* TopMessageWidgetInstance; // 0x3e8(0x08)
	struct UCircularWidget* CircularWidgetClass; // 0x3f0(0x08)
	struct UCircularWidget* CircularWidgetInstance; // 0x3f8(0x08)
	struct UIndicatorWidget* AmmoIndicatorWidgetClass; // 0x400(0x08)
	struct UIndicatorWidget* AmmoIndicatorWidgetInstance; // 0x408(0x08)
	struct USecurityWidget* SecurityWidgetClass; // 0x410(0x08)
	struct USecurityWidget* SecurityWidgetInstance; // 0x418(0x08)
	struct UUserWidget* SignWidgetClass; // 0x420(0x08)
	struct USignWidget* SignWidgetInstance; // 0x428(0x08)
	struct UUserWidget* TeamWidgetClass; // 0x430(0x08)
	struct UUserWidget* TeamWidgetInstance; // 0x438(0x08)
	struct UElectricControlWidget* ElectricControlWidgetClass; // 0x440(0x08)
	struct UElectricControlWidget* ElectricControlWidgetInstance; // 0x448(0x08)
	struct UUserWidget* ToolHUDWidgetClass; // 0x450(0x08)
	struct UUserWidget* ToolHUDWidgetInstance; // 0x458(0x08)
	float NotifyInterval; // 0x460(0x04)
	float NotifyMaxWaitSeconds; // 0x464(0x04)
	float NotifyElapsedSeconds; // 0x468(0x04)
	char pad_46C[0x4]; // 0x46c(0x04)
	struct AActor* FocusedItem; // 0x470(0x08)
	char pad_478[0x8]; // 0x478(0x08)
	struct AWaveSpawner* WaveSpawner; // 0x480(0x08)
	struct TArray<struct FOwningNotifyData> OwningNotifies; // 0x488(0x10)

	void ToggleTeamWidget(); // Function LF.PlayerHUD.ToggleTeamWidget // (Final|Native|Public|BlueprintCallable) // @ game+0x10571c0
	void ShowTopMessage(struct FText Text, float Time); // Function LF.PlayerHUD.ShowTopMessage // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1057090
	void ShowTooltip(); // Function LF.PlayerHUD.ShowTooltip // (Final|Native|Public|BlueprintCallable) // @ game+0x1057070
	void ShowTeamWidget(); // Function LF.PlayerHUD.ShowTeamWidget // (Final|Native|Public|BlueprintCallable) // @ game+0x1057050
	void ShowStaminaDamageFx(); // Function LF.PlayerHUD.ShowStaminaDamageFx // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ShowPowerUpFx(); // Function LF.PlayerHUD.ShowPowerUpFx // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ShowOwningNotificationNative(struct FText Name, int32_t Amount, struct TSoftObjectPtr<struct UTexture2D> Icon, bool bPositive); // Function LF.PlayerHUD.ShowOwningNotificationNative // (Final|Native|Public|HasOutParms) // @ game+0x1056e70
	void ShowOwningNotification(struct FText Name, int32_t Amount, struct TSoftObjectPtr<struct UTexture2D> Icon, bool bPositive); // Function LF.PlayerHUD.ShowOwningNotification // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ShowNotificationInline(struct FText Text, struct UObject* Icon); // Function LF.PlayerHUD.ShowNotificationInline // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ShowMessage(struct FText Text); // Function LF.PlayerHUD.ShowMessage // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1056da0
	void ShowJournalNotification(); // Function LF.PlayerHUD.ShowJournalNotification // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ShowGameOverMessage(); // Function LF.PlayerHUD.ShowGameOverMessage // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ShowEndScreen(); // Function LF.PlayerHUD.ShowEndScreen // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void ShowDevWaveHUD(); // Function LF.PlayerHUD.ShowDevWaveHUD // (Final|Native|Public|BlueprintCallable) // @ game+0x1056d80
	void ShowDevHUD(); // Function LF.PlayerHUD.ShowDevHUD // (Final|Native|Public|BlueprintCallable) // @ game+0x1056d60
	void ShowDamageFx(enum class ECharacterHitType HitType); // Function LF.PlayerHUD.ShowDamageFx // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void SetItemTooltip(struct FInventoryItem Item); // Function LF.PlayerHUD.SetItemTooltip // (Final|Native|Public|BlueprintCallable) // @ game+0x1056950
	bool IsTeamWidgetOpened(); // Function LF.PlayerHUD.IsTeamWidgetOpened // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1055e60
	void HideTooltip(); // Function LF.PlayerHUD.HideTooltip // (Final|Native|Public|BlueprintCallable) // @ game+0x1055c90
	void HideTeamWidget(); // Function LF.PlayerHUD.HideTeamWidget // (Final|Native|Public|BlueprintCallable) // @ game+0x1055c70
	void HideGameOverMessage(); // Function LF.PlayerHUD.HideGameOverMessage // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void HideDevWaveHUD(); // Function LF.PlayerHUD.HideDevWaveHUD // (Final|Native|Public|BlueprintCallable) // @ game+0x1055c50
	void HideDevHUD(); // Function LF.PlayerHUD.HideDevHUD // (Final|Native|Public|BlueprintCallable) // @ game+0x1055c30
	struct AActor* GetFocusedItem(); // Function LF.PlayerHUD.GetFocusedItem // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1055860
};

// Class LF.Pullable
// Size: 0x28 (Inherited: 0x28)
struct UPullable : UInterface {
};

// Class LF.Puller
// Size: 0x28 (Inherited: 0x28)
struct UPuller : UInterface {
};

// Class LF.QuestItemEntity
// Size: 0x500 (Inherited: 0x4f0)
struct AQuestItemEntity : AStaticItemEntity {
	struct FName QuestItemName; // 0x4f0(0x08)
	char pad_4F8[0x8]; // 0x4f8(0x08)
};

// Class LF.RandomBehavior
// Size: 0x28 (Inherited: 0x28)
struct URandomBehavior : UInterface {

	float GetProbability(struct FName Behavior); // Function LF.RandomBehavior.GetProbability // (Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x1055950
};

// Class LF.RangeTrapEntity
// Size: 0xb00 (Inherited: 0x838)
struct ARangeTrapEntity : AAutomaticTrapEntity {
	char pad_838[0x18]; // 0x838(0x18)
	struct TArray<struct FInventoryItem> OwningItems; // 0x850(0x10)
	struct TArray<struct FInventoryItem_Net> OwningItems_Net; // 0x860(0x10)
	struct FText StoreName; // 0x870(0x18)
	int32_t MaxItemAmount; // 0x888(0x04)
	char pad_88C[0x4]; // 0x88c(0x04)
	struct TArray<struct FName> StoreFilter; // 0x890(0x10)
	int32_t ItemStoreSlotAmount; // 0x8a0(0x04)
	char pad_8A4[0x4]; // 0x8a4(0x04)
	struct TMap<struct FName, struct AThrowableEntity*> ThrowableClasses; // 0x8a8(0x50)
	struct TMap<struct FName, struct TSoftObjectPtr<struct UStaticMesh>> ThrowableMeshes; // 0x8f8(0x50)
	struct UCapsuleComponent* RangeTrapTrigger; // 0x948(0x08)
	float ThrowSpeed; // 0x950(0x04)
	float MinRange; // 0x954(0x04)
	float MaxRange; // 0x958(0x04)
	float MinRotatePitch; // 0x95c(0x04)
	float MaxRotatePitch; // 0x960(0x04)
	float MinPitch; // 0x964(0x04)
	float MaxPitch; // 0x968(0x04)
	float OffsetPitch; // 0x96c(0x04)
	float AttackDelay; // 0x970(0x04)
	float PowerDelay; // 0x974(0x04)
	float TriggerHeight; // 0x978(0x04)
	bool bCanRotate; // 0x97c(0x01)
	char pad_97D[0x3]; // 0x97d(0x03)
	float ShotHalfAngle; // 0x980(0x04)
	float RotationSpeed; // 0x984(0x04)
	struct FName RangeTriggerCollisionProfile; // 0x988(0x08)
	float InitialYawOffset; // 0x990(0x04)
	float ShootYawAcceptance; // 0x994(0x04)
	bool bCanHoming; // 0x998(0x01)
	char pad_999[0x3]; // 0x999(0x03)
	float HomingMagnitude; // 0x99c(0x04)
	bool bAimGround; // 0x9a0(0x01)
	bool bRotateWhileAttackDelay; // 0x9a1(0x01)
	bool bRotateWhileAttack; // 0x9a2(0x01)
	char pad_9A3[0x1]; // 0x9a3(0x01)
	float AngleCorrection; // 0x9a4(0x04)
	float VisibleCheckThickness; // 0x9a8(0x04)
	char pad_9AC[0x4]; // 0x9ac(0x04)
	struct TSoftObjectPtr<struct UAnimMontage> ShootAnimation; // 0x9b0(0x28)
	struct TSoftObjectPtr<struct UAnimMontage> ReloadAnimation; // 0x9d8(0x28)
	struct TSoftObjectPtr<struct UAnimSequence> AfterAnimation; // 0xa00(0x28)
	struct TSoftObjectPtr<struct UAnimSequence> IdleAnimation; // 0xa28(0x28)
	struct UAnimNotify* ExecuteNotify; // 0xa50(0x08)
	bool bUseIdleLoop; // 0xa58(0x01)
	bool bUseAfterLoop; // 0xa59(0x01)
	char pad_A5A[0x6]; // 0xa5a(0x06)
	struct AThrowableEntity* ThrowableClass; // 0xa60(0x08)
	bool bAttackDelay; // 0xa68(0x01)
	bool bIsReloaded; // 0xa69(0x01)
	bool bIsReloading; // 0xa6a(0x01)
	bool bIsShooting; // 0xa6b(0x01)
	bool bHasTarget; // 0xa6c(0x01)
	char pad_A6D[0x3]; // 0xa6d(0x03)
	float CurrentAttackDelay; // 0xa70(0x04)
	float CurrentPowerDelay; // 0xa74(0x04)
	float InitialYaw; // 0xa78(0x04)
	struct FRotator InitialRotation; // 0xa7c(0x0c)
	struct AActor* CurrentTarget; // 0xa88(0x08)
	struct TArray<struct AActor*> OverlappingActors; // 0xa90(0x10)
	struct TArray<struct AActor*> OverlappingCharacters; // 0xaa0(0x10)
	struct TArray<struct AActor*> OverlappingBuildings; // 0xab0(0x10)
	bool bIsShowAmmo; // 0xac0(0x01)
	char pad_AC1[0x3]; // 0xac1(0x03)
	struct FName ReloadSoundId; // 0xac4(0x08)
	struct FName ShootSoundId; // 0xacc(0x08)
	char pad_AD4[0x4]; // 0xad4(0x04)
	struct FTimerHandle ExecuteHandle; // 0xad8(0x08)
	struct FTimerHandle ShootHandle; // 0xae0(0x08)
	struct FTimerHandle ReloadHandle; // 0xae8(0x08)
	float RotaryTrapTickInterval; // 0xaf0(0x04)
	float FixedTrapTickInterval; // 0xaf4(0x04)
	char pad_AF8[0x8]; // 0xaf8(0x08)

	bool UseSourcePower(); // Function LF.RangeTrapEntity.UseSourcePower // (Final|Native|Protected|BlueprintCallable) // @ game+0x1057470
	void TrapRetracted(); // Function LF.RangeTrapEntity.TrapRetracted // (Event|Protected|BlueprintEvent) // @ game+0x1395fe0
	struct TArray<struct FHitResult> TrapHitWithScan(struct FVector Start, struct FVector End, float Radius, struct TArray<struct AActor*> ActorsToIgnore, bool CanPenetrate); // Function LF.RangeTrapEntity.TrapHitWithScan // (Final|Native|Protected|HasDefaults|BlueprintCallable) // @ game+0x10571e0
	void TrapExecuted(); // Function LF.RangeTrapEntity.TrapExecuted // (Event|Protected|BlueprintEvent) // @ game+0x1395fe0
	void ShowAmmo(); // Function LF.RangeTrapEntity.ShowAmmo // (Event|Protected|BlueprintEvent) // @ game+0x1395fe0
	struct AThrowableEntity* ShootThrowable(); // Function LF.RangeTrapEntity.ShootThrowable // (Final|Native|Protected|BlueprintCallable) // @ game+0x1056d30
	void SetTrapRotation(struct FRotator NewRotation); // Function LF.RangeTrapEntity.SetTrapRotation // (Native|Event|Protected|HasOutParms|HasDefaults|BlueprintEvent) // @ game+0x1056ca0
	void SetIsShooting(bool bShooting); // Function LF.RangeTrapEntity.SetIsShooting // (Final|Native|Protected|BlueprintCallable) // @ game+0x10568c0
	void PlayShootAnimation(); // Function LF.RangeTrapEntity.PlayShootAnimation // (Event|Protected|BlueprintEvent) // @ game+0x1395fe0
	void OnRep_OwningItems(); // Function LF.RangeTrapEntity.OnRep_OwningItems // (Final|Native|Public) // @ game+0x1056760
	void OnRep_IsShowAmmo(); // Function LF.RangeTrapEntity.OnRep_IsShowAmmo // (Final|Native|Public) // @ game+0x1056700
	void OnEndRangeOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function LF.RangeTrapEntity.OnEndRangeOverlap // (Final|Native|Private) // @ game+0x1056540
	void OnBeginRangeOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function LF.RangeTrapEntity.OnBeginRangeOverlap // (Final|Native|Private|HasOutParms) // @ game+0x1056310
	void OnAfterTrapExecute(); // Function LF.RangeTrapEntity.OnAfterTrapExecute // (Final|Native|Protected|BlueprintCallable) // @ game+0x10562f0
	void MulticastTrapRetracted(); // Function LF.RangeTrapEntity.MulticastTrapRetracted // (Net|Native|Event|NetMulticast|Protected) // @ game+0xce9bc0
	void MulticastTrapExecuted(); // Function LF.RangeTrapEntity.MulticastTrapExecuted // (Net|Native|Event|NetMulticast|Protected) // @ game+0x10562d0
	void MulticastPlayTrapIdleAnimation(struct UAnimSequence* AnimSequence, struct USkeletalMeshComponent* Mesh, bool bLooping); // Function LF.RangeTrapEntity.MulticastPlayTrapIdleAnimation // (Net|Native|Event|NetMulticast|Protected) // @ game+0x10561c0
	void MulticastPlayTrapAnimation(struct UAnimMontage* AnimMontage, struct USkeletalMeshComponent* Mesh, struct FName SoundId, bool bLooping); // Function LF.RangeTrapEntity.MulticastPlayTrapAnimation // (Net|Native|Event|NetMulticast|Protected) // @ game+0x1056070
	void MulticastMakeHitScanEffect(struct FName EntityName, struct FHitResult HitResult); // Function LF.RangeTrapEntity.MulticastMakeHitScanEffect // (Net|Native|Event|NetMulticast|Protected) // @ game+0x1055f40
	bool IsShooting(); // Function LF.RangeTrapEntity.IsShooting // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x1055e30
	void HideAmmo(); // Function LF.RangeTrapEntity.HideAmmo // (Event|Protected|BlueprintEvent) // @ game+0x1395fe0
	struct USkeletalMeshComponent* GetTrapSkeletalMesh(); // Function LF.RangeTrapEntity.GetTrapSkeletalMesh // (Event|Protected|BlueprintEvent|Const) // @ game+0x1395fe0
	struct FRotator GetTrapRotation(); // Function LF.RangeTrapEntity.GetTrapRotation // (Native|Event|Protected|HasDefaults|BlueprintEvent|Const) // @ game+0x1055b70
	struct FRotator GetShootRotation(); // Function LF.RangeTrapEntity.GetShootRotation // (Native|Event|Protected|HasDefaults|BlueprintEvent|Const) // @ game+0x1055b30
	struct FVector GetShootLocation(); // Function LF.RangeTrapEntity.GetShootLocation // (Native|Event|Protected|HasDefaults|BlueprintEvent|Const) // @ game+0x1055af0
	struct FVector GetShootForwardLocation(); // Function LF.RangeTrapEntity.GetShootForwardLocation // (Native|Event|Protected|HasDefaults|BlueprintEvent|Const) // @ game+0x1055ab0
	bool CheckAndReload(); // Function LF.RangeTrapEntity.CheckAndReload // (Final|Native|Protected|BlueprintCallable) // @ game+0x1055790
	void ChangeAmmo(struct UStaticMesh* Mesh); // Function LF.RangeTrapEntity.ChangeAmmo // (Event|Protected|BlueprintEvent) // @ game+0x1395fe0
	bool CanReload(); // Function LF.RangeTrapEntity.CanReload // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x1055760
	void AfterTrapExecuted(); // Function LF.RangeTrapEntity.AfterTrapExecuted // (Event|Protected|BlueprintEvent) // @ game+0x1395fe0
};

// Class LF.ResearchBenchEntity
// Size: 0x698 (Inherited: 0x698)
struct AResearchBenchEntity : ABuildingEntity {
};

// Class LF.ResearchElementWidget
// Size: 0x328 (Inherited: 0x260)
struct UResearchElementWidget : UUserWidget {
	struct FGeometry CachedAllotedGeometry; // 0x260(0x38)
	struct UResearchWidget* ResearchWidget; // 0x298(0x08)
	struct FName ResearchId; // 0x2a0(0x08)
	struct FResearchData ResearchData; // 0x2a8(0x70)
	struct TArray<struct FEntityData> Outputs; // 0x318(0x10)

	void SetParentResearchWidget(struct UResearchWidget* InResearchWidget); // Function LF.ResearchElementWidget.SetParentResearchWidget // (Final|Native|Public) // @ game+0x105c600
	void OnSetResearchOutput(struct TArray<struct FEntityData> ResearchOutputs); // Function LF.ResearchElementWidget.OnSetResearchOutput // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1395fe0
	void OnSetResearchName(struct FText ResearchName); // Function LF.ResearchElementWidget.OnSetResearchName // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1395fe0
	void OnResearchUnavailable(); // Function LF.ResearchElementWidget.OnResearchUnavailable // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void OnResearchCompleted(); // Function LF.ResearchElementWidget.OnResearchCompleted // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void OnResearchAvailable(); // Function LF.ResearchElementWidget.OnResearchAvailable // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void InitResearchData(); // Function LF.ResearchElementWidget.InitResearchData // (Final|Native|Public|BlueprintCallable) // @ game+0x105c000
};

// Class LF.ResearchLineWidget
// Size: 0x260 (Inherited: 0x260)
struct UResearchLineWidget : UUserWidget {

	void OnUnavailable(); // Function LF.ResearchLineWidget.OnUnavailable // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void OnAvailable(); // Function LF.ResearchLineWidget.OnAvailable // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
};

// Class LF.ResearchUpgradeWidget
// Size: 0x2d8 (Inherited: 0x260)
struct UResearchUpgradeWidget : UUserWidget {
	struct ULFResearchComponent* ResearchComponent; // 0x260(0x08)
	struct FResearchData CurrentResearchData; // 0x268(0x70)

	void SetResearchId(struct FName ResearchId); // Function LF.ResearchUpgradeWidget.SetResearchId // (Final|Native|Public|HasOutParms) // @ game+0x105c690
	void OnSetResearchData(struct FResearchData ResearchData); // Function LF.ResearchUpgradeWidget.OnSetResearchData // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1395fe0
	void OnResearch(); // Function LF.ResearchUpgradeWidget.OnResearch // (Final|Native|Public|BlueprintCallable) // @ game+0x105c240
	void OnCancel(); // Function LF.ResearchUpgradeWidget.OnCancel // (Final|Native|Public|BlueprintCallable) // @ game+0x105c120
	void Init(struct ULFResearchComponent* InResearchComponent); // Function LF.ResearchUpgradeWidget.Init // (Final|Native|Public) // @ game+0x105bf70
	void GetOutputs(struct FResearchData ResearchData, struct TArray<struct FInventoryItem> OutOutputs); // Function LF.ResearchUpgradeWidget.GetOutputs // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x105bbc0
	void GetMaterials(struct FResearchData ResearchData, struct TArray<struct FInventoryItem> OutMaterials); // Function LF.ResearchUpgradeWidget.GetMaterials // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x105b9a0
};

// Class LF.ResearchWidget
// Size: 0x328 (Inherited: 0x260)
struct UResearchWidget : UUserWidget {
	struct ALFCharacterPlayer* PlayerCharacter; // 0x260(0x08)
	struct ULFResearchComponent* ResearchComponent; // 0x268(0x08)
	struct TArray<struct UResearchElementWidget*> ResearchElements; // 0x270(0x10)
	struct TMap<int32_t, struct UResearchLineWidget*> LineWidgets; // 0x280(0x50)
	struct TMap<int32_t, struct FVector2D> LineWidgetOffsets; // 0x2d0(0x50)
	enum class EResearchCategory SelectedCategory; // 0x320(0x01)
	char pad_321[0x7]; // 0x321(0x07)

	void OnResearchElementClicked(struct FName ResearchId); // Function LF.ResearchWidget.OnResearchElementClicked // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x105c260
	void OnRefresh(); // Function LF.ResearchWidget.OnRefresh // (Final|Native|Public) // @ game+0x105c1a0
	void OnCloseButtonClicked(); // Function LF.ResearchWidget.OnCloseButtonClicked // (Final|Native|Public|BlueprintCallable) // @ game+0x105c140
	void InitResearchElements(); // Function LF.ResearchWidget.InitResearchElements // (Final|Native|Public|BlueprintCallable) // @ game+0x105c020
	struct UResearchLineWidget* GetTopLineWidgetClass(); // Function LF.ResearchWidget.GetTopLineWidgetClass // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	struct FVector2D GetLineWidgetSize(); // Function LF.ResearchWidget.GetLineWidgetSize // (Event|Public|HasDefaults|BlueprintEvent) // @ game+0x1395fe0
	struct FVector2D GetLineWidgetOffset(); // Function LF.ResearchWidget.GetLineWidgetOffset // (Event|Public|HasDefaults|BlueprintEvent) // @ game+0x1395fe0
	struct UCanvasPanel* GetLineCanvas(); // Function LF.ResearchWidget.GetLineCanvas // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	struct UResearchLineWidget* GetCenterLineWidgetClass(); // Function LF.ResearchWidget.GetCenterLineWidgetClass // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	struct UResearchLineWidget* GetBottomLineWidgetClass(); // Function LF.ResearchWidget.GetBottomLineWidgetClass // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	struct UResearchElementWidget* FindNeedResearchElementWidget(struct UResearchElementWidget* ResearchElement); // Function LF.ResearchWidget.FindNeedResearchElementWidget // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x105b8d0
	void DrawResearchElementLine(struct UResearchElementWidget* ResearchElement); // Function LF.ResearchWidget.DrawResearchElementLine // (Final|Native|Public) // @ game+0x105b840
	void CheckResearchElements(); // Function LF.ResearchWidget.CheckResearchElements // (Final|Native|Public|BlueprintCallable) // @ game+0x105b820
};

// Class LF.RestBuildingEntity
// Size: 0x698 (Inherited: 0x698)
struct ARestBuildingEntity : ABuildingEntity {
};

// Class LF.Rope
// Size: 0x28 (Inherited: 0x28)
struct URope : UInterface {
};

// Class LF.SaveManager
// Size: 0x28 (Inherited: 0x28)
struct USaveManager : UInterface {

	void SaveGameToSlot(); // Function LF.SaveManager.SaveGameToSlot // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x782e50
	void OpenSaveMenu(); // Function LF.SaveManager.OpenSaveMenu // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x85a1b0
	void LoadGameFromSlot(); // Function LF.SaveManager.LoadGameFromSlot // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x85a1d0
	void CloseSaveMenu(); // Function LF.SaveManager.CloseSaveMenu // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xffd640
};

// Class LF.SecurityWidget
// Size: 0x280 (Inherited: 0x260)
struct USecurityWidget : UUserWidget {
	struct ALFCharacterPlayer* PlayerCharacter; // 0x260(0x08)
	struct APlayerHUD* PlayerHUD; // 0x268(0x08)
	struct TScriptInterface<None> CurrentLockableScriptInterface; // 0x270(0x10)

	void ShowUnlockPasswordPanel(); // Function LF.SecurityWidget.ShowUnlockPasswordPanel // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ShowResetPasswordPanel(); // Function LF.SecurityWidget.ShowResetPasswordPanel // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnUnlockPasswordSubmitClicked(struct FString SecurityKey); // Function LF.SecurityWidget.OnUnlockPasswordSubmitClicked // (Final|Native|Public|BlueprintCallable) // @ game+0x105c510
	void OnResetPasswordSubmitClicked(struct FString SecurityKey); // Function LF.SecurityWidget.OnResetPasswordSubmitClicked // (Final|Native|Public|BlueprintCallable) // @ game+0x105c2f0
	void OnCloseButtonClicked(); // Function LF.SecurityWidget.OnCloseButtonClicked // (Final|Native|Public|BlueprintCallable) // @ game+0x105c160
	void HideUnlockPasswordPanel(); // Function LF.SecurityWidget.HideUnlockPasswordPanel // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void HideResetPasswordPanel(); // Function LF.SecurityWidget.HideResetPasswordPanel // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void HideAllPanel(); // Function LF.SecurityWidget.HideAllPanel // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
};

// Class LF.Shootable
// Size: 0x28 (Inherited: 0x28)
struct UShootable : UInterface {
};

// Class LF.Signable
// Size: 0x28 (Inherited: 0x28)
struct USignable : UInterface {

	void SetContents(struct FString NewContents); // Function LF.Signable.SetContents // (Native|Public|BlueprintCallable) // @ game+0x1056780
	struct UWidgetComponent* GetContentsWidgetComponent(); // Function LF.Signable.GetContentsWidgetComponent // (Native|Public|BlueprintCallable) // @ game+0x1001980
	struct FString GetContents(); // Function LF.Signable.GetContents // (Native|Public|BlueprintCallable) // @ game+0x1055890
};

// Class LF.SignBuildingEntity
// Size: 0x6b8 (Inherited: 0x698)
struct ASignBuildingEntity : ABuildingEntity {
	char pad_698[0x8]; // 0x698(0x08)
	struct FString Contents; // 0x6a0(0x10)
	struct UWidgetComponent* ContentsWidgetComponent; // 0x6b0(0x08)

	void UpdateContentsWidgetText(struct FString NewContents); // Function LF.SignBuildingEntity.UpdateContentsWidgetText // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void OnRep_Contents(); // Function LF.SignBuildingEntity.OnRep_Contents // (Final|Native|Public) // @ game+0x105c1c0
};

// Class LF.SignWidget
// Size: 0x270 (Inherited: 0x260)
struct USignWidget : UUserWidget {
	struct TScriptInterface<None> CurrentSignableScriptInterface; // 0x260(0x10)

	void ShowSetContentsPanel(); // Function LF.SignWidget.ShowSetContentsPanel // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnSubmitButtonClicked(struct FString Contents); // Function LF.SignWidget.OnSubmitButtonClicked // (Final|Native|Public|BlueprintCallable) // @ game+0x105c3e0
	void OnCloseButtonClicked(); // Function LF.SignWidget.OnCloseButtonClicked // (Final|Native|Public|BlueprintCallable) // @ game+0x105c180
	void HideSetContentsPanel(); // Function LF.SignWidget.HideSetContentsPanel // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
};

// Class LF.SkillUser
// Size: 0x28 (Inherited: 0x28)
struct USkillUser : UInterface {

	float GetSkillRadius(enum class ESkillType SkillType); // Function LF.SkillUser.GetSkillRadius // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x105bdb0
	float GetSkillDamage(enum class ESkillType SkillType); // Function LF.SkillUser.GetSkillDamage // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xff2b10
};

// Class LF.SkyBirdTarget
// Size: 0x220 (Inherited: 0x220)
struct ASkyBirdTarget : ABirdTarget {
};

// Class LF.SlotWidget
// Size: 0x368 (Inherited: 0x260)
struct USlotWidget : UUserWidget {
	struct FInventoryItem InventoryItem; // 0x260(0xf8)
	enum class EInventorySlotType SlotType; // 0x358(0x01)
	char pad_359[0x3]; // 0x359(0x03)
	int32_t SlotIndex; // 0x35c(0x04)
	bool bUseAmount; // 0x360(0x01)
	bool bHalfAmount; // 0x361(0x01)
	char pad_362[0x6]; // 0x362(0x06)

	void SetSlotItem(struct FInventoryItem Item); // Function LF.SlotWidget.SetSlotItem // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void SetSlotIndex(int32_t Index); // Function LF.SlotWidget.SetSlotIndex // (Final|Native|Public|BlueprintCallable) // @ game+0x105c740
	void SetSlotImage(struct TSoftObjectPtr<struct UTexture2D> Thumbnail); // Function LF.SlotWidget.SetSlotImage // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	int32_t GetSlotIndex(bool bIsRealIndex); // Function LF.SlotWidget.GetSlotIndex // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	void ClearSlotItem(); // Function LF.SlotWidget.ClearSlotItem // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
};

// Class LF.SoundableCharacter
// Size: 0x28 (Inherited: 0x28)
struct USoundableCharacter : UInterface {
};

// Class LF.SpeedModifier
// Size: 0x28 (Inherited: 0x28)
struct USpeedModifier : UInterface {
};

// Class LF.StaminaCondition
// Size: 0x28 (Inherited: 0x28)
struct UStaminaCondition : UInterface {
};

// Class LF.StoreEntity
// Size: 0x810 (Inherited: 0x698)
struct AStoreEntity : ABuildingEntity {
	char pad_698[0x8]; // 0x698(0x08)
	struct FText StoreName; // 0x6a0(0x18)
	struct FName OpenCloseSound; // 0x6b8(0x08)
	int32_t MaxStoreAmount; // 0x6c0(0x04)
	char pad_6C4[0x4]; // 0x6c4(0x04)
	struct AItemEntity* LootClass; // 0x6c8(0x08)
	struct TArray<enum class EItemType> StoreType; // 0x6d0(0x10)
	enum class EItemType IconType; // 0x6e0(0x01)
	char pad_6E1[0x7]; // 0x6e1(0x07)
	struct TArray<struct FInventoryItem> OwningItems; // 0x6e8(0x10)
	struct TArray<struct FInventoryItem_Net> OwningItems_Net; // 0x6f8(0x10)
	struct FInventoryItem EmptyItem; // 0x708(0xf8)
	struct FItemOwningResult OwningResult; // 0x800(0x10)

	void OnStoreOpen(); // Function LF.StoreEntity.OnStoreOpen // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void OnStoreClose(); // Function LF.StoreEntity.OnStoreClose // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void OnRep_OwningItems(); // Function LF.StoreEntity.OnRep_OwningItems // (Final|Native|Public) // @ game+0x105c220
	void MulticastOnOpenStore(); // Function LF.StoreEntity.MulticastOnOpenStore // (Net|Native|Event|NetMulticast|Public) // @ game+0x1001b10
	void MulticastOnCloseStore(); // Function LF.StoreEntity.MulticastOnCloseStore // (Net|Native|Event|NetMulticast|Public) // @ game+0x1001af0
};

// Class LF.StreamingGameObjectManager
// Size: 0x100 (Inherited: 0xb0)
struct UStreamingGameObjectManager : UActorComponent {
	struct TMap<struct FName, struct FStreamingGameObjectData> StreamingObjectData; // 0xb0(0x50)
};

// Class LF.Summonable
// Size: 0x28 (Inherited: 0x28)
struct USummonable : UInterface {

	void OnSummoned(struct AActor* SummonerActor); // Function LF.Summonable.OnSummoned // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x105c480
	bool IsSummoned(); // Function LF.Summonable.IsSummoned // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x105c0a0
	bool IsBeingSummoned(); // Function LF.Summonable.IsBeingSummoned // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xff2d40
	struct AActor* GetSummonerActor(); // Function LF.Summonable.GetSummonerActor // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1001980
	struct UAnimMontage* GetBeSummonedAnimation(); // Function LF.Summonable.GetBeSummonedAnimation // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x782c70
};

// Class LF.Summoner
// Size: 0x28 (Inherited: 0x28)
struct USummoner : UInterface {

	struct AActor* Summon(); // Function LF.Summoner.Summon // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x105c7d0
	bool IsSummonSequentially(); // Function LF.Summoner.IsSummonSequentially // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x105c070
	bool IsSummonRandomly(); // Function LF.Summoner.IsSummonRandomly // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x105c040
	bool IsSummoning(); // Function LF.Summoner.IsSummoning // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x105c0d0
	float GetSummonLocationMinDistance(); // Function LF.Summoner.GetSummonLocationMinDistance // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x105bf40
	float GetSummonLocationMaxDistance(); // Function LF.Summoner.GetSummonLocationMaxDistance // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x782d10
	struct FVector GetSummonLocation(); // Function LF.Summoner.GetSummonLocation // (Native|Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x105bf00
	struct UAnimMontage* GetSummoningAnimation(); // Function LF.Summoner.GetSummoningAnimation // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x8af840
	struct TArray<struct AActor*> GetSummonedActors(); // Function LF.Summoner.GetSummonedActors // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x10557e0
	float GetSummonDurationRandomDeviation(); // Function LF.Summoner.GetSummonDurationRandomDeviation // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x105bed0
	float GetSummonDuration(); // Function LF.Summoner.GetSummonDuration // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x105bea0
	float GetSummonDelayRandomDeviation(); // Function LF.Summoner.GetSummonDelayRandomDeviation // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x105be70
	float GetSummonDelay(); // Function LF.Summoner.GetSummonDelay // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x105be40
	int32_t GetMaxSummonCount(); // Function LF.Summoner.GetMaxSummonCount // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x105bb90
	int32_t GetCurrentSummonPoolIndex(); // Function LF.Summoner.GetCurrentSummonPoolIndex // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x105b970
	void EndSummon(); // Function LF.Summoner.EndSummon // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x782e70
	void BeginSummon(); // Function LF.Summoner.BeginSummon // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x782d70
};

// Class LF.Targeting
// Size: 0x28 (Inherited: 0x28)
struct UTargeting : UInterface {

	bool GetTarget(struct AActor* OutTarget); // Function LF.Targeting.GetTarget // (Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x1060270
};

// Class LF.ThrowableEntity
// Size: 0x760 (Inherited: 0x4e0)
struct AThrowableEntity : AItemEntity {
	char pad_4E0[0x20]; // 0x4e0(0x20)
	struct UCapsuleComponent* ThrowableCollision; // 0x500(0x08)
	struct ULFProjectileMovementComponent* ProjectileMovement; // 0x508(0x08)
	float RemainProbability; // 0x510(0x04)
	bool bDestroyIfNotRemained; // 0x514(0x01)
	char pad_515[0x3]; // 0x515(0x03)
	struct FName WeaponTrait; // 0x518(0x08)
	bool bUseOwnDamage; // 0x520(0x01)
	bool bInitializeDamageFromData; // 0x521(0x01)
	char pad_522[0x2]; // 0x522(0x02)
	float Damage; // 0x524(0x04)
	float Speed; // 0x528(0x04)
	char pad_52C[0x4]; // 0x52c(0x04)
	struct UDamageType* DamageType; // 0x530(0x08)
	bool bShouldBounce; // 0x538(0x01)
	bool bGiveDamageOnStop; // 0x539(0x01)
	bool bGiveDamageDelayed; // 0x53a(0x01)
	char pad_53B[0x1]; // 0x53b(0x01)
	float DelaySeconds; // 0x53c(0x04)
	bool bShouldAttach; // 0x540(0x01)
	bool bShouldSweep; // 0x541(0x01)
	bool bDestroyAfterImpact; // 0x542(0x01)
	bool bCanReuse; // 0x543(0x01)
	bool bShouldLootDestructible; // 0x544(0x01)
	bool bShouldPenetrate; // 0x545(0x01)
	char pad_546[0x2]; // 0x546(0x02)
	float PenetrateMulti; // 0x548(0x04)
	bool bAreaOfEffect; // 0x54c(0x01)
	char pad_54D[0x3]; // 0x54d(0x03)
	float AreaOfEffectRadius; // 0x550(0x04)
	bool bAreaOfEffectTestOcclusion; // 0x554(0x01)
	bool bLaunchCharacter; // 0x555(0x01)
	char pad_556[0x2]; // 0x556(0x02)
	float LaunchImpact; // 0x558(0x04)
	float LaunchHeight; // 0x55c(0x04)
	struct FName ThrowableProfile; // 0x560(0x08)
	struct FName PenetrationThrowableProfile; // 0x568(0x08)
	struct FName ThrowEntityProfile; // 0x570(0x08)
	bool bDestroyIfFar; // 0x578(0x01)
	char pad_579[0x3]; // 0x579(0x03)
	float DestroyDistance; // 0x57c(0x04)
	struct FName HitEffectFallbackName; // 0x580(0x08)
	struct FName HitEffectDefaultName; // 0x588(0x08)
	struct FName TrailEffectName; // 0x590(0x08)
	struct FName TrailSoundName; // 0x598(0x08)
	struct UFXSystemComponent* TrailEffect; // 0x5a0(0x08)
	struct UAudioComponent* TrailAudio; // 0x5a8(0x08)
	bool bUseDecal; // 0x5b0(0x01)
	char pad_5B1[0x7]; // 0x5b1(0x07)
	struct TSoftObjectPtr<struct UMaterialInstance> DecalMaterial; // 0x5b8(0x28)
	float DecalLife; // 0x5e0(0x04)
	float DecalX; // 0x5e4(0x04)
	bool bDecalUseDefaultSize; // 0x5e8(0x01)
	char pad_5E9[0x3]; // 0x5e9(0x03)
	struct FVector DecalDefaultSize; // 0x5ec(0x0c)
	bool bHit; // 0x5f8(0x01)
	bool bShoot; // 0x5f9(0x01)
	char pad_5FA[0x2]; // 0x5fa(0x02)
	float ShootAfterTime; // 0x5fc(0x04)
	struct AActor* Shooter; // 0x600(0x08)
	struct AActor* Weapon; // 0x608(0x08)
	struct TArray<struct AActor*> IgnoredActors; // 0x610(0x10)
	struct TArray<struct AActor*> AlreadyHitActors; // 0x620(0x10)
	float DroppedTime; // 0x630(0x04)
	float DroppedRemainTime; // 0x634(0x04)
	float CurrentUpdateTime; // 0x638(0x04)
	float UpdateTime; // 0x63c(0x04)
	struct TWeakObjectPtr<struct AActor> HitActor; // 0x640(0x08)
	struct TWeakObjectPtr<struct UPrimitiveComponent> HitComponent; // 0x648(0x08)
	struct FThrowableAttachment CurrentAttachment; // 0x650(0x50)
	struct FName AttachedBone; // 0x6a0(0x08)
	char pad_6A8[0x8]; // 0x6a8(0x08)
	struct FTransform CollisionRelativeTransform; // 0x6b0(0x30)
	struct FTransform MeshRelativeTransform; // 0x6e0(0x30)
	bool bUseRope; // 0x710(0x01)
	char pad_711[0x3]; // 0x711(0x03)
	struct FName RopeSocket; // 0x714(0x08)
	char pad_71C[0x4]; // 0x71c(0x04)
	struct TArray<struct UFXSystemAsset*> LoadedTrailFx; // 0x720(0x10)
	struct TArray<struct UFXSystemAsset*> LoadedThrowableFx; // 0x730(0x10)
	struct UMaterialInstance* LoadedDecalMat; // 0x740(0x08)
	struct TArray<struct USoundBase*> LoadedThrowableSounds; // 0x748(0x10)
	char pad_758[0x8]; // 0x758(0x08)

	void UnRegisterToActor(); // Function LF.ThrowableEntity.UnRegisterToActor // (Final|Native|Private) // @ game+0x1061b70
	void SpawnDecal(struct FHitResult ImpactResult); // Function LF.ThrowableEntity.SpawnDecal // (Final|Native|Protected|HasOutParms|BlueprintCallable) // @ game+0x1061a70
	void SetDamage(float NewDamage); // Function LF.ThrowableEntity.SetDamage // (Final|Native|Public|BlueprintCallable) // @ game+0x10619f0
	void RegisterToActor(struct AActor* Actor); // Function LF.ThrowableEntity.RegisterToActor // (Final|Native|Public) // @ game+0x1061960
	void OnThrowOverlap(struct UPrimitiveComponent* OverlappedComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function LF.ThrowableEntity.OnThrowOverlap // (Final|Native|Private|HasOutParms) // @ game+0x105fce0
	void OnStop(struct FHitResult ImpactResult); // Function LF.ThrowableEntity.OnStop // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1395fe0
	void OnShootImpl(struct FVector StartLocation, struct FVector Direction, float DrawAlpha); // Function LF.ThrowableEntity.OnShootImpl // (Event|Public|HasDefaults|BlueprintEvent) // @ game+0x1395fe0
	void OnShoot(struct FVector StartLocation, struct FVector Direction, float DrawAlpha, float InDamage); // Function LF.ThrowableEntity.OnShoot // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1061240
	void OnRep_Shoot(); // Function LF.ThrowableEntity.OnRep_Shoot // (Final|Native|Public) // @ game+0x1061200
	void OnRep_Hit(); // Function LF.ThrowableEntity.OnRep_Hit // (Final|Native|Public) // @ game+0x10611e0
	void OnHitActorChanged(struct UPrimitiveComponent* NewPrimitiveComponent); // Function LF.ThrowableEntity.OnHitActorChanged // (Final|Native|Public) // @ game+0x1061130
	void OnEntityAttached(struct FHitResult ImpactResult, struct AActor* Actor); // Function LF.ThrowableEntity.OnEntityAttached // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1395fe0
	void OnDropImpl(); // Function LF.ThrowableEntity.OnDropImpl // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void OnBounce(struct FHitResult ImpactResult, struct FVector ImpactVelocity); // Function LF.ThrowableEntity.OnBounce // (Event|Protected|HasOutParms|HasDefaults|BlueprintEvent) // @ game+0x1395fe0
	void OnAfterTrailEffectLoaded(); // Function LF.ThrowableEntity.OnAfterTrailEffectLoaded // (Final|Native|Private) // @ game+0x10610b0
	void OnAfterThrowableSoundLoaded(); // Function LF.ThrowableEntity.OnAfterThrowableSoundLoaded // (Final|Native|Private) // @ game+0x1061090
	void OnAfterThrowableEffectLoaded(); // Function LF.ThrowableEntity.OnAfterThrowableEffectLoaded // (Final|Native|Private) // @ game+0x1061070
	void OnAfterDecalLoaded(); // Function LF.ThrowableEntity.OnAfterDecalLoaded // (Final|Native|Private) // @ game+0x1061050
	void NativeOnStop(struct FHitResult ImpactResult); // Function LF.ThrowableEntity.NativeOnStop // (Final|Native|Private|HasOutParms) // @ game+0x1060f70
	void NativeOnBounce(struct FHitResult ImpactResult, struct FVector ImpactVelocity); // Function LF.ThrowableEntity.NativeOnBounce // (Native|Protected|HasOutParms|HasDefaults) // @ game+0x1060e40
	void MulticastMakeEffect_Reliable(struct FHitResult ImpactResult); // Function LF.ThrowableEntity.MulticastMakeEffect_Reliable // (Net|NetReliableNative|Event|NetMulticast|Protected) // @ game+0x1060c40
	void MulticastMakeEffect(struct FHitResult ImpactResult); // Function LF.ThrowableEntity.MulticastMakeEffect // (Net|Native|Event|NetMulticast|Protected) // @ game+0x1060b70
	bool IsTeamKill(struct AActor* Actor); // Function LF.ThrowableEntity.IsTeamKill // (Final|Native|Private|BlueprintCallable) // @ game+0x1060a80
	bool IsTargetValid(struct FHitResult ImpactResult); // Function LF.ThrowableEntity.IsTargetValid // (Native|Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1060990
	void GiveThrowableDamage(struct FHitResult ImpactResult); // Function LF.ThrowableEntity.GiveThrowableDamage // (Final|Native|Protected|HasOutParms|BlueprintCallable) // @ game+0x10608b0
	bool GiveDamage(struct FHitResult ImpactResult); // Function LF.ThrowableEntity.GiveDamage // (Final|Native|Private|HasOutParms) // @ game+0x10607c0
	void GiveAreaDamage(struct FHitResult ImpactResult); // Function LF.ThrowableEntity.GiveAreaDamage // (Final|Native|Private|HasOutParms) // @ game+0x1060600
	void DelayedSimulatePhysics(); // Function LF.ThrowableEntity.DelayedSimulatePhysics // (Final|Native|Private) // @ game+0x105ff50
	bool CanUseRope(); // Function LF.ThrowableEntity.CanUseRope // (Final|Native|Private|Const) // @ game+0x105ff00
};

// Class LF.TimeLimitedActor
// Size: 0x230 (Inherited: 0x220)
struct ATimeLimitedActor : AActor {
	struct UStaticMeshComponent* StaticMeshComponent; // 0x220(0x08)
	float DestroyTime; // 0x228(0x04)
	char pad_22C[0x4]; // 0x22c(0x04)
};

// Class LF.TooltipWidget
// Size: 0x358 (Inherited: 0x260)
struct UTooltipWidget : UUserWidget {
	struct FInventoryItem CurrentItem; // 0x260(0xf8)

	void ShowTooltip(); // Function LF.TooltipWidget.ShowTooltip // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void SetItemTooltip(struct FInventoryItem Item); // Function LF.TooltipWidget.SetItemTooltip // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void HideTooltip(); // Function LF.TooltipWidget.HideTooltip // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
};

// Class LF.TrapBlueprint
// Size: 0x448 (Inherited: 0x448)
struct ATrapBlueprint : ABuildingBlueprint {
};

// Class LF.TutorialWidget
// Size: 0x268 (Inherited: 0x260)
struct UTutorialWidget : UUserWidget {
	int32_t CurrentIndex; // 0x260(0x04)
	char pad_264[0x4]; // 0x264(0x04)

	void ShowTutorial(int32_t TutorialIndex, struct FTutorialData TutorialData); // Function LF.TutorialWidget.ShowTutorial // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnCompleteAllTutorial(); // Function LF.TutorialWidget.OnCompleteAllTutorial // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void CompleteTutorial(int32_t TutorialIndex, struct FTutorialData TutorialData); // Function LF.TutorialWidget.CompleteTutorial // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1395fe0
};

// Class LF.Unlockable
// Size: 0x28 (Inherited: 0x28)
struct UUnlockable : UInterface {
};

// Class LF.UtilityTrapEntity
// Size: 0x838 (Inherited: 0x838)
struct AUtilityTrapEntity : AAutomaticTrapEntity {
};

// Class LF.VolumeLevelStreamer
// Size: 0x2e0 (Inherited: 0x220)
struct AVolumeLevelStreamer : AActor {
	struct UBoxComponent* LoadingVolume; // 0x220(0x08)
	bool bUnloadVolume; // 0x228(0x01)
	char pad_229[0x7]; // 0x229(0x07)
	struct TArray<struct TSoftObjectPtr<struct UWorld>> Levels; // 0x230(0x10)
	struct TMap<struct FName, uint64_t> LoadUUID; // 0x240(0x50)
	struct TMap<struct FName, uint64_t> UnloadUUID; // 0x290(0x50)

	void OnVolumeOverlap(struct UPrimitiveComponent* OverlappedComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function LF.VolumeLevelStreamer.OnVolumeOverlap // (Final|Native|Protected|HasOutParms) // @ game+0x10616a0
	void OnVolumeEndOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function LF.VolumeLevelStreamer.OnVolumeEndOverlap // (Final|Native|Protected) // @ game+0x1061540
};

// Class LF.WaveDifficultyDataAsset
// Size: 0x130 (Inherited: 0x30)
struct UWaveDifficultyDataAsset : UGameDifficultyDataAsset {
	struct FWaveStatusModifier WaveStatus; // 0x30(0x100)
};

// Class LF.WaveLocation
// Size: 0x228 (Inherited: 0x220)
struct AWaveLocation : AActor {
	struct UBoxComponent* SpawnBox; // 0x220(0x08)
};

// Class LF.WaveSpawner
// Size: 0x590 (Inherited: 0x220)
struct AWaveSpawner : AActor {
	char pad_220[0x8]; // 0x220(0x08)
	struct FTimerHandle SpawnTimerHandle; // 0x228(0x08)
	struct FWaveData LastWaveData; // 0x230(0x188)
	struct FGameDate LastCheckedDate; // 0x3b8(0x10)
	struct FGameDate LastGiantRandomWaveCheckedDate; // 0x3c8(0x10)
	struct FGameDate LastTimeWaveDate; // 0x3d8(0x10)
	struct TArray<struct AWaveLocation*> WaveLocations; // 0x3e8(0x10)
	int32_t CurrentWave; // 0x3f8(0x04)
	int32_t NotifiedLastWaveIndex; // 0x3fc(0x04)
	struct TArray<struct FWaveData> WaveData; // 0x400(0x10)
	struct TArray<struct FRandomWaveData> RandomWaveData; // 0x410(0x10)
	struct TArray<struct FRandomWaveData> ScreamerRandomWaveData; // 0x420(0x10)
	struct TArray<struct FRandomWaveData> GiantRandomWaveData; // 0x430(0x10)
	struct TArray<struct FTimeWaveData> TimeWaveData; // 0x440(0x10)
	struct TArray<struct FWaveData> InitialWaveData; // 0x450(0x10)
	struct TArray<struct FRandomWaveData> InitialRandomWaveData; // 0x460(0x10)
	struct TArray<struct FRandomWaveData> InitialScreamerRandomWaveData; // 0x470(0x10)
	struct TArray<struct FRandomWaveData> InitialGiantRandomWaveData; // 0x480(0x10)
	struct TArray<struct FTimeWaveData> InitialTimeWaveData; // 0x490(0x10)
	struct TArray<struct ALFZombie*> SpawnedZombies; // 0x4a0(0x10)
	struct TArray<struct FAIActorData> SavedSpawnedZombieData; // 0x4b0(0x10)
	struct TMap<struct ALFZombie*, struct FZombieClass> ZombieClasses; // 0x4c0(0x50)
	struct TMap<struct ALFZombie*, struct FZombieClass> GiantZombieClasses; // 0x510(0x50)
	struct TArray<struct ALFZombie*> WaveBossClasses; // 0x560(0x10)
	char pad_570[0x8]; // 0x570(0x08)
	struct TArray<struct FGameDate> ReservedScreamerRandomWaveSpawnDate; // 0x578(0x10)
	int32_t ScreamerRandomWaveMinHour; // 0x588(0x04)
	int32_t ScreamerRandomWaveMaxHour; // 0x58c(0x04)

	void StopCurrentWave(); // Function LF.WaveSpawner.StopCurrentWave // (Final|Native|Public) // @ game+0x1061b50
	void OnWaveZombieSpawned(struct ALFZombie* SpawnedWaveZombie); // Function LF.WaveSpawner.OnWaveZombieSpawned // (Final|Native|Public) // @ game+0x10618d0
	void OnSecondPassed(); // Function LF.WaveSpawner.OnSecondPassed // (Final|Native|Public) // @ game+0x1061220
	void OnMinutePassed(); // Function LF.WaveSpawner.OnMinutePassed // (Final|Native|Public) // @ game+0x10611c0
	void OnDayPassed(); // Function LF.WaveSpawner.OnDayPassed // (Final|Native|Public) // @ game+0x1061110
	float GetWaveProgress(); // Function LF.WaveSpawner.GetWaveProgress // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10605d0
	int32_t GetWaveNumber(); // Function LF.WaveSpawner.GetWaveNumber // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10605a0
	struct TArray<struct FWaveData> GetWaveDataOfSameWaveIndex(int32_t WaveIndex); // Function LF.WaveSpawner.GetWaveDataOfSameWaveIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x10604f0
	struct TArray<struct FWaveData> GetWaveDataOfCurrentWaveIndex(); // Function LF.WaveSpawner.GetWaveDataOfCurrentWaveIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x10604a0
	struct TMap<struct ALFZombie*, int32_t> GetWaveAmountOfWaveIndex(int32_t WaveIndex); // Function LF.WaveSpawner.GetWaveAmountOfWaveIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1060380
	int32_t GetWaveAmount(); // Function LF.WaveSpawner.GetWaveAmount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1060350
	int32_t GetTotalAmountCurrentWaveIndex(); // Function LF.WaveSpawner.GetTotalAmountCurrentWaveIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1060320
	struct TMap<struct ALFZombie*, int32_t> GetSpawnedAmountOfWaveIndex(int32_t WaveIndex); // Function LF.WaveSpawner.GetSpawnedAmountOfWaveIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1060150
	int32_t GetSpawnedAmountCurrentWaveIndex(); // Function LF.WaveSpawner.GetSpawnedAmountCurrentWaveIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1060120
	int32_t GetCurrentWaveIndex(); // Function LF.WaveSpawner.GetCurrentWaveIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x10600f0
	void CheckWaveAmount(); // Function LF.WaveSpawner.CheckWaveAmount // (Final|Native|Public) // @ game+0x105ff30
};

// Class LF.WeaponHolder
// Size: 0x28 (Inherited: 0x28)
struct UWeaponHolder : UInterface {

	bool IsWeaponUseEquipmentLocomotion(); // Function LF.WeaponHolder.IsWeaponUseEquipmentLocomotion // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x105c0d0
	bool IsSubWeaponUseEquipmentLocomotion(); // Function LF.WeaponHolder.IsSubWeaponUseEquipmentLocomotion // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x782d40
	enum class EWeaponType GetWeaponType(); // Function LF.WeaponHolder.GetWeaponType // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x105c0a0
	enum class EWeaponPoseType GetWeaponPoseType(); // Function LF.WeaponHolder.GetWeaponPoseType // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xff2d10
	float GetWeaponPoseBlendWeight(); // Function LF.WeaponHolder.GetWeaponPoseBlendWeight // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1062230
	enum class EWeaponPoseType GetSubWeaponPoseType(); // Function LF.WeaponHolder.GetSubWeaponPoseType // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xff2d40
	float GetSubWeaponPoseBlendWeight(); // Function LF.WeaponHolder.GetSubWeaponPoseBlendWeight // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x782d10
	enum class EPoseType GetPoseType(); // Function LF.WeaponHolder.GetPoseType // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1062100
};

// Class LF.WeaponVisibleCondition
// Size: 0x28 (Inherited: 0x28)
struct UWeaponVisibleCondition : UInterface {
};

// Class LF.ZombieSummoner
// Size: 0x28 (Inherited: 0x28)
struct UZombieSummoner : USummoner {

	struct ALFZombie* GetZombieClassFromZombiePool(int32_t ZombiePoolIndex); // Function LF.ZombieSummoner.GetZombieClassFromZombiePool // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1062260
	struct TArray<struct FLFZombieClassArray> GetSummonZombiePool(); // Function LF.ZombieSummoner.GetSummonZombiePool // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1062130
	struct TArray<struct ALFZombie*> GetSummonedZombies(); // Function LF.ZombieSummoner.GetSummonedZombies // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x10621b0
};

