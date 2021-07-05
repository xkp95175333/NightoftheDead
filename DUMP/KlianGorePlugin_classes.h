// Class KlianGorePlugin.AnimCPP_BodyPart
// Size: 0x300 (Inherited: 0x2c0)
struct UAnimCPP_BodyPart : UAnimInstance {
	struct ACPP_Tool_Master* Parent; // 0x2b8(0x08)
	struct FPoseSnapshot InitialSnapshotPose; // 0x2c0(0x38)
	bool bBodyIsSimulatingPhysics; // 0x2f8(0x01)
	bool bDoPhysicsOnce; // 0x2f9(0x01)

	void EnableBodyPh(); // Function KlianGorePlugin.AnimCPP_BodyPart.EnableBodyPh // (Final|Native|Public|BlueprintCallable) // @ game+0x872480
	void CheckBodyPartInitialization(bool Initialized); // Function KlianGorePlugin.AnimCPP_BodyPart.CheckBodyPartInitialization // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x8721a0
};

// Class KlianGorePlugin.CPP_Tool_Master
// Size: 0x330 (Inherited: 0x220)
struct ACPP_Tool_Master : AActor {
	struct USceneComponent* Root; // 0x220(0x08)
	struct USceneComponent* Rotation; // 0x228(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x230(0x08)
	struct UGoreSystem* GoreSystemComp; // 0x238(0x08)
	float LifeDelayTime; // 0x240(0x04)
	char pad_244[0x4]; // 0x244(0x04)
	struct FPoseSnapshot CurrentPose; // 0x248(0x38)
	enum class EPhysBodyOp Mode; // 0x280(0x01)
	char pad_281[0x3]; // 0x281(0x03)
	struct FVector DetachImpulse; // 0x284(0x0c)
	struct FGorePassInfo PassInfo; // 0x290(0x68)
	struct TArray<struct FGoreParticleRef> SpawnedPartRef; // 0x2f8(0x10)
	struct TArray<struct FOtherActorsPass> OtherActorsPassed; // 0x308(0x10)
	struct TArray<struct FOtherActorsAttached> OtherActorsAttached; // 0x318(0x10)
	bool bUseDynamicMaterialFromParent; // 0x328(0x01)
	char pad_329[0x7]; // 0x329(0x07)

	void SyncParticles(); // Function KlianGorePlugin.CPP_Tool_Master.SyncParticles // (Final|Native|Public|BlueprintCallable) // @ game+0x878af0
	void SyncOtherActors(); // Function KlianGorePlugin.CPP_Tool_Master.SyncOtherActors // (Final|Native|Public|BlueprintCallable) // @ game+0x878ad0
	void SyncBroken(); // Function KlianGorePlugin.CPP_Tool_Master.SyncBroken // (Final|Native|Public|BlueprintCallable) // @ game+0x878ab0
	void SpawnPartEmitter(struct FVector EmitLocation, struct FRotator EmitRotation, struct FVector EmitScale, struct UParticleSystem* EmitTemplate, struct FName EmitBoneNam, struct USoundCue* EmitterSound); // Function KlianGorePlugin.CPP_Tool_Master.SpawnPartEmitter // (Net|Native|Event|NetMulticast|Public|HasDefaults) // @ game+0x8788a0
	void SpawnOtherActors(struct TArray<struct FOtherActors> ActorsToSpawn, struct FName ActBoneNam); // Function KlianGorePlugin.CPP_Tool_Master.SpawnOtherActors // (Net|Native|Event|NetMulticast|Public) // @ game+0x8787b0
	void LifetimeOver(); // Function KlianGorePlugin.CPP_Tool_Master.LifetimeOver // (Final|Native|Public) // @ game+0x872d40
	void IsChildOrSame(struct USkeletalMeshComponent* Mesh, struct TArray<struct FName> InBrokenBones, struct FName InBoneName, bool IsChild); // Function KlianGorePlugin.CPP_Tool_Master.IsChildOrSame // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x872b90
	struct USkeletalMeshComponent* GetSkeletalMesh(); // Function KlianGorePlugin.CPP_Tool_Master.GetSkeletalMesh // (Final|Native|Public) // @ game+0x8724a0
	void DestroyAdditionalActorsOnDestroyed(); // Function KlianGorePlugin.CPP_Tool_Master.DestroyAdditionalActorsOnDestroyed // (Final|Native|Public|BlueprintCallable) // @ game+0x872230
};

// Class KlianGorePlugin.GoreSystem
// Size: 0x1a0 (Inherited: 0xb0)
struct UGoreSystem : UActorComponent {
	struct USkeletalMeshComponent* Mesh; // 0xb0(0x08)
	struct AActor* ParentRef; // 0xb8(0x08)
	struct FPoseSnapshot SKPose; // 0xc0(0x38)
	struct TArray<struct FGoreParticleRef> BodyParticlesSpawned; // 0xf8(0x10)
	struct TArray<struct FOtherActorsAttached> OtherActorsAttached; // 0x108(0x10)
	struct TArray<struct ACPP_Tool_Master*> SpawnedBodyParts; // 0x118(0x10)
	struct TArray<struct FName> BrokenBones; // 0x128(0x10)
	struct FMulticastInlineDelegate GoreSystem_BoneHasBeenBroken; // 0x138(0x10)
	struct TArray<struct FGoreBodyParts> GoreParts; // 0x148(0x10)
	int32_t BrokeLimitation; // 0x158(0x04)
	char pad_15C[0x4]; // 0x15c(0x04)
	struct UPhysicsAsset* AlternativePhAt; // 0x160(0x08)
	struct UPhysicsAsset* DefaultPhAt; // 0x168(0x08)
	struct FName FirstBone; // 0x170(0x08)
	struct UParticleSystem* DefaultHitParticle; // 0x178(0x08)
	struct USoundCue* DefaultHitSound; // 0x180(0x08)
	struct UParticleSystem* CollideParticleDecal; // 0x188(0x08)
	struct ADecalActor* DefaultBloodDecalClass; // 0x190(0x08)
	float DecalScale; // 0x198(0x04)
	float DecalScaleVariation; // 0x19c(0x04)

	void SpawnDecalOnParticleHit(struct FName EventName, float EmitterTime, int32_t ParticleTime, struct FVector Location, struct FVector Velocity, struct FVector Direction, struct FVector Normal, struct FName BoneName, struct UPhysicalMaterial* PhysMat); // Function KlianGorePlugin.GoreSystem.SpawnDecalOnParticleHit // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x8784d0
	void SetUseAlternativePhAtBySocketNames(struct TArray<struct FName> Names, bool UseAlternativePhAt); // Function KlianGorePlugin.GoreSystem.SetUseAlternativePhAtBySocketNames // (Final|Native|Public|BlueprintCallable) // @ game+0x8783a0
	void SetUseAlternativePhAtByIndexes(struct TArray<int32_t> Indexes, bool UseAlternativePhAt); // Function KlianGorePlugin.GoreSystem.SetUseAlternativePhAtByIndexes // (Final|Native|Public|BlueprintCallable) // @ game+0x878270
	void SetUseAlternativePhAtByCustomNames(struct TArray<struct FName> Names, bool UseAlternativePhAt); // Function KlianGorePlugin.GoreSystem.SetUseAlternativePhAtByCustomNames // (Final|Native|Public|BlueprintCallable) // @ game+0x878140
	void SetUseAlternativePhAtAll(bool UseAlternativePhAt); // Function KlianGorePlugin.GoreSystem.SetUseAlternativePhAtAll // (Final|Native|Public|BlueprintCallable) // @ game+0x8780b0
	void SetRandomDetachImpulseBySocketNames(struct TArray<struct FName> Names, float RandomDetachImpulse); // Function KlianGorePlugin.GoreSystem.SetRandomDetachImpulseBySocketNames // (Final|Native|Public|BlueprintCallable) // @ game+0x877f80
	void SetRandomDetachImpulseByIndexes(struct TArray<int32_t> Indexes, float RandomDetachImpulse); // Function KlianGorePlugin.GoreSystem.SetRandomDetachImpulseByIndexes // (Final|Native|Public|BlueprintCallable) // @ game+0x877e50
	void SetRandomDetachImpulseByCustomNames(struct TArray<struct FName> Names, float RandomDetachImpulse); // Function KlianGorePlugin.GoreSystem.SetRandomDetachImpulseByCustomNames // (Final|Native|Public|BlueprintCallable) // @ game+0x877d20
	void SetRandomDetachImpulseAll(float RandomDetachImpulse); // Function KlianGorePlugin.GoreSystem.SetRandomDetachImpulseAll // (Final|Native|Public|BlueprintCallable) // @ game+0x877ca0
	void SetPartSpawnClassBySocketNames(struct TArray<struct FName> Names, struct ACPP_Tool_Master* Part_SpawnClass); // Function KlianGorePlugin.GoreSystem.SetPartSpawnClassBySocketNames // (Final|Native|Public|BlueprintCallable) // @ game+0x877b70
	void SetPartSpawnClassByIndexes(struct TArray<int32_t> Indexes, struct ACPP_Tool_Master* Part_SpawnClass); // Function KlianGorePlugin.GoreSystem.SetPartSpawnClassByIndexes // (Final|Native|Public|BlueprintCallable) // @ game+0x877a40
	void SetPartSpawnClassByCustomNames(struct TArray<struct FName> Names, struct ACPP_Tool_Master* Part_SpawnClass); // Function KlianGorePlugin.GoreSystem.SetPartSpawnClassByCustomNames // (Final|Native|Public|BlueprintCallable) // @ game+0x877910
	void SetPartSpawnClassAll(struct ACPP_Tool_Master* Part_SpawnClass); // Function KlianGorePlugin.GoreSystem.SetPartSpawnClassAll // (Final|Native|Public|BlueprintCallable) // @ game+0x877880
	void SetPartBreakParticleTransformBySocketNames(struct TArray<struct FName> Names, struct FTransform PartBreakParticleTransform); // Function KlianGorePlugin.GoreSystem.SetPartBreakParticleTransformBySocketNames // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x877700
	void SetPartBreakParticleTransformByIndexes(struct TArray<int32_t> Indexes, struct FTransform PartBreakParticleTransform); // Function KlianGorePlugin.GoreSystem.SetPartBreakParticleTransformByIndexes // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x877580
	void SetPartBreakParticleTransformByCustomNames(struct TArray<struct FName> Names, struct FTransform PartBreakParticleTransform); // Function KlianGorePlugin.GoreSystem.SetPartBreakParticleTransformByCustomNames // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x877400
	void SetPartBreakParticleTransformAll(struct FTransform PartBreakParticleTransform); // Function KlianGorePlugin.GoreSystem.SetPartBreakParticleTransformAll // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x877310
	void SetPartBreakEmitterBySocketNames(struct TArray<struct FName> Names, struct UParticleSystem* PartBreakEmitter); // Function KlianGorePlugin.GoreSystem.SetPartBreakEmitterBySocketNames // (Final|Native|Public|BlueprintCallable) // @ game+0x8771e0
	void SetPartBreakEmitterByIndexes(struct TArray<int32_t> Indexes, struct UParticleSystem* PartBreakEmitter); // Function KlianGorePlugin.GoreSystem.SetPartBreakEmitterByIndexes // (Final|Native|Public|BlueprintCallable) // @ game+0x8770b0
	void SetPartBreakEmitterByCustomNames(struct TArray<struct FName> Names, struct UParticleSystem* PartBreakEmitter); // Function KlianGorePlugin.GoreSystem.SetPartBreakEmitterByCustomNames // (Final|Native|Public|BlueprintCallable) // @ game+0x876f80
	void SetPartBreakEmitterAll(struct UParticleSystem* PartBreakEmitter); // Function KlianGorePlugin.GoreSystem.SetPartBreakEmitterAll // (Final|Native|Public|BlueprintCallable) // @ game+0x876ef0
	void SetPartAdditionalActorsToSpawnBySocketNames(struct TArray<struct FName> Names, struct TArray<struct FOtherActors> PartAdditionalActorsToSpawn); // Function KlianGorePlugin.GoreSystem.SetPartAdditionalActorsToSpawnBySocketNames // (Final|Native|Public|BlueprintCallable) // @ game+0x876d70
	void SetPartAdditionalActorsToSpawnByIndexes(struct TArray<int32_t> Indexes, struct TArray<struct FOtherActors> PartAdditionalActorsToSpawn); // Function KlianGorePlugin.GoreSystem.SetPartAdditionalActorsToSpawnByIndexes // (Final|Native|Public|BlueprintCallable) // @ game+0x876bf0
	void SetPartAdditionalActorsToSpawnByCustomNames(struct TArray<struct FName> Names, struct TArray<struct FOtherActors> PartAdditionalActorsToSpawn); // Function KlianGorePlugin.GoreSystem.SetPartAdditionalActorsToSpawnByCustomNames // (Final|Native|Public|BlueprintCallable) // @ game+0x876a70
	void SetPartAdditionalActorsToSpawnAll(struct TArray<struct FOtherActors> PartAdditionalActorsToSpawn); // Function KlianGorePlugin.GoreSystem.SetPartAdditionalActorsToSpawnAll // (Final|Native|Public|BlueprintCallable) // @ game+0x876980
	void SetMaxHealthBySocketNames(struct TArray<struct FName> Names, float MaxHealth); // Function KlianGorePlugin.GoreSystem.SetMaxHealthBySocketNames // (Final|Native|Public|BlueprintCallable) // @ game+0x876850
	void SetMaxHealthByIndexes(struct TArray<int32_t> Indexes, float MaxHealth); // Function KlianGorePlugin.GoreSystem.SetMaxHealthByIndexes // (Final|Native|Public|BlueprintCallable) // @ game+0x876720
	void SetMaxHealthByCustomNames(struct TArray<struct FName> Names, float MaxHealth); // Function KlianGorePlugin.GoreSystem.SetMaxHealthByCustomNames // (Final|Native|Public|BlueprintCallable) // @ game+0x8765f0
	void SetMaxHealthAll(float MaxHealth); // Function KlianGorePlugin.GoreSystem.SetMaxHealthAll // (Final|Native|Public|BlueprintCallable) // @ game+0x876570
	void SetLongBreakAudioBySocketNames(struct TArray<struct FName> Names, struct USoundCue* LongBreakAudio); // Function KlianGorePlugin.GoreSystem.SetLongBreakAudioBySocketNames // (Final|Native|Public|BlueprintCallable) // @ game+0x876440
	void SetLongBreakAudioByIndexes(struct TArray<int32_t> Indexes, struct USoundCue* LongBreakAudio); // Function KlianGorePlugin.GoreSystem.SetLongBreakAudioByIndexes // (Final|Native|Public|BlueprintCallable) // @ game+0x876310
	void SetLongBreakAudioByCustomNames(struct TArray<struct FName> Names, struct USoundCue* LongBreakAudio); // Function KlianGorePlugin.GoreSystem.SetLongBreakAudioByCustomNames // (Final|Native|Public|BlueprintCallable) // @ game+0x8761e0
	void SetLongBreakAudioAll(struct USoundCue* LongBreakAudio); // Function KlianGorePlugin.GoreSystem.SetLongBreakAudioAll // (Final|Native|Public|BlueprintCallable) // @ game+0x876150
	void SetHitSpillParticlesBySocketNames(struct TArray<struct FName> Names, struct UParticleSystem* HitSpillParticles); // Function KlianGorePlugin.GoreSystem.SetHitSpillParticlesBySocketNames // (Final|Native|Public|BlueprintCallable) // @ game+0x876020
	void SetHitSpillParticlesByIndexes(struct TArray<int32_t> Indexes, struct UParticleSystem* HitSpillParticles); // Function KlianGorePlugin.GoreSystem.SetHitSpillParticlesByIndexes // (Final|Native|Public|BlueprintCallable) // @ game+0x875ef0
	void SetHitSpillParticlesByCustomNames(struct TArray<struct FName> Names, struct UParticleSystem* HitSpillParticles); // Function KlianGorePlugin.GoreSystem.SetHitSpillParticlesByCustomNames // (Final|Native|Public|BlueprintCallable) // @ game+0x875dc0
	void SetHitSpillParticlesAll(struct UParticleSystem* HitSpillParticles); // Function KlianGorePlugin.GoreSystem.SetHitSpillParticlesAll // (Final|Native|Public|BlueprintCallable) // @ game+0x875d30
	void SetHitAudioBySocketNames(struct TArray<struct FName> Names, struct USoundCue* HitAudio); // Function KlianGorePlugin.GoreSystem.SetHitAudioBySocketNames // (Final|Native|Public|BlueprintCallable) // @ game+0x875c00
	void SetHitAudioByIndexes(struct TArray<int32_t> Indexes, struct USoundCue* HitAudio); // Function KlianGorePlugin.GoreSystem.SetHitAudioByIndexes // (Final|Native|Public|BlueprintCallable) // @ game+0x875ad0
	void SetHitAudioByCustomNames(struct TArray<struct FName> Names, struct USoundCue* HitAudio); // Function KlianGorePlugin.GoreSystem.SetHitAudioByCustomNames // (Final|Native|Public|BlueprintCallable) // @ game+0x8759a0
	void SetHitAudioAll(struct USoundCue* HitAudio); // Function KlianGorePlugin.GoreSystem.SetHitAudioAll // (Final|Native|Public|BlueprintCallable) // @ game+0x875910
	void SetDMGMultipBySocketNames(struct TArray<struct FName> Names, float DMGMultip); // Function KlianGorePlugin.GoreSystem.SetDMGMultipBySocketNames // (Final|Native|Public|BlueprintCallable) // @ game+0x8753d0
	void SetDMGMultipByIndexes(struct TArray<int32_t> Indexes, float DMGMultip); // Function KlianGorePlugin.GoreSystem.SetDMGMultipByIndexes // (Final|Native|Public|BlueprintCallable) // @ game+0x8752a0
	void SetDMGMultipByCustomNames(struct TArray<struct FName> Names, float DMGMultip); // Function KlianGorePlugin.GoreSystem.SetDMGMultipByCustomNames // (Final|Native|Public|BlueprintCallable) // @ game+0x875170
	void SetDMGMultipAll(float DMGMultip); // Function KlianGorePlugin.GoreSystem.SetDMGMultipAll // (Final|Native|Public|BlueprintCallable) // @ game+0x8750f0
	void SetDetachImpulseBySocketNames(struct TArray<struct FName> Names, float DetachImpulse); // Function KlianGorePlugin.GoreSystem.SetDetachImpulseBySocketNames // (Final|Native|Public|BlueprintCallable) // @ game+0x8757e0
	void SetDetachImpulseByIndexes(struct TArray<int32_t> Indexes, float DetachImpulse); // Function KlianGorePlugin.GoreSystem.SetDetachImpulseByIndexes // (Final|Native|Public|BlueprintCallable) // @ game+0x8756b0
	void SetDetachImpulseByCustomNames(struct TArray<struct FName> Names, float DetachImpulse); // Function KlianGorePlugin.GoreSystem.SetDetachImpulseByCustomNames // (Final|Native|Public|BlueprintCallable) // @ game+0x875580
	void SetDetachImpulseAll(float DetachImpulse); // Function KlianGorePlugin.GoreSystem.SetDetachImpulseAll // (Final|Native|Public|BlueprintCallable) // @ game+0x875500
	void SetCurrentHealthBySocketNames(struct TArray<struct FName> Names, float CurrentHealth); // Function KlianGorePlugin.GoreSystem.SetCurrentHealthBySocketNames // (Final|Native|Public|BlueprintCallable) // @ game+0x874fc0
	void SetCurrentHealthByIndexes(struct TArray<int32_t> Indexes, float CurrentHealth); // Function KlianGorePlugin.GoreSystem.SetCurrentHealthByIndexes // (Final|Native|Public|BlueprintCallable) // @ game+0x874e90
	void SetCurrentHealthByCustomNames(struct TArray<struct FName> Names, float CurrentHealth); // Function KlianGorePlugin.GoreSystem.SetCurrentHealthByCustomNames // (Final|Native|Public|BlueprintCallable) // @ game+0x874d60
	void SetCurrentHealthAll(float CurrentHealth); // Function KlianGorePlugin.GoreSystem.SetCurrentHealthAll // (Final|Native|Public|BlueprintCallable) // @ game+0x874ce0
	void SetCanBeBrokenBySocketNames(struct TArray<struct FName> Names, bool CanBeBroken); // Function KlianGorePlugin.GoreSystem.SetCanBeBrokenBySocketNames // (Final|Native|Public|BlueprintCallable) // @ game+0x874bb0
	void SetCanBeBrokenByIndexes(struct TArray<int32_t> Indexes, bool CanBeBroken); // Function KlianGorePlugin.GoreSystem.SetCanBeBrokenByIndexes // (Final|Native|Public|BlueprintCallable) // @ game+0x874a80
	void SetCanBeBrokenByCustomNames(struct TArray<struct FName> Names, bool CanBeBroken); // Function KlianGorePlugin.GoreSystem.SetCanBeBrokenByCustomNames // (Final|Native|Public|BlueprintCallable) // @ game+0x874950
	void SetCanBeBrokenAll(bool CanBeBroken); // Function KlianGorePlugin.GoreSystem.SetCanBeBrokenAll // (Final|Native|Public|BlueprintCallable) // @ game+0x8748c0
	void SetBreakSpillParticlesBySocketNames(struct TArray<struct FName> Names, struct UParticleSystem* BreakSpillParticles); // Function KlianGorePlugin.GoreSystem.SetBreakSpillParticlesBySocketNames // (Final|Native|Public|BlueprintCallable) // @ game+0x874790
	void SetBreakSpillParticlesByIndexes(struct TArray<int32_t> Indexes, struct UParticleSystem* BreakSpillParticles); // Function KlianGorePlugin.GoreSystem.SetBreakSpillParticlesByIndexes // (Final|Native|Public|BlueprintCallable) // @ game+0x874660
	void SetBreakSpillParticlesByCustomNames(struct TArray<struct FName> Names, struct UParticleSystem* BreakSpillParticles); // Function KlianGorePlugin.GoreSystem.SetBreakSpillParticlesByCustomNames // (Final|Native|Public|BlueprintCallable) // @ game+0x874530
	void SetBreakSpillParticlesAll(struct UParticleSystem* BreakSpillParticles); // Function KlianGorePlugin.GoreSystem.SetBreakSpillParticlesAll // (Final|Native|Public|BlueprintCallable) // @ game+0x8744a0
	void SetBreakAudioBySocketNames(struct TArray<struct FName> Names, struct USoundCue* BreakAudio); // Function KlianGorePlugin.GoreSystem.SetBreakAudioBySocketNames // (Final|Native|Public|BlueprintCallable) // @ game+0x874370
	void SetBreakAudioByIndexes(struct TArray<int32_t> Indexes, struct USoundCue* BreakAudio); // Function KlianGorePlugin.GoreSystem.SetBreakAudioByIndexes // (Final|Native|Public|BlueprintCallable) // @ game+0x874240
	void SetBreakAudioByCustomNames(struct TArray<struct FName> Names, struct USoundCue* BreakAudio); // Function KlianGorePlugin.GoreSystem.SetBreakAudioByCustomNames // (Final|Native|Public|BlueprintCallable) // @ game+0x874110
	void SetBreakAudioAll(struct USoundCue* BreakAudio); // Function KlianGorePlugin.GoreSystem.SetBreakAudioAll // (Final|Native|Public|BlueprintCallable) // @ game+0x874080
	void SetBreakAliveBySocketNames(struct TArray<struct FName> Names, bool BreakAlive); // Function KlianGorePlugin.GoreSystem.SetBreakAliveBySocketNames // (Final|Native|Public|BlueprintCallable) // @ game+0x873f50
	void SetBreakAliveByIndexes(struct TArray<int32_t> Indexes, bool BreakAlive); // Function KlianGorePlugin.GoreSystem.SetBreakAliveByIndexes // (Final|Native|Public|BlueprintCallable) // @ game+0x873e20
	void SetBreakAliveByCustomNames(struct TArray<struct FName> Names, bool BreakAlive); // Function KlianGorePlugin.GoreSystem.SetBreakAliveByCustomNames // (Final|Native|Public|BlueprintCallable) // @ game+0x873cf0
	void SetBreakAliveAll(bool BreakAlive); // Function KlianGorePlugin.GoreSystem.SetBreakAliveAll // (Final|Native|Public|BlueprintCallable) // @ game+0x873c60
	void SetBodyBreakParticleTransformBySocketNames(struct TArray<struct FName> Names, struct FTransform BodyBreakParticleTransform); // Function KlianGorePlugin.GoreSystem.SetBodyBreakParticleTransformBySocketNames // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x873ae0
	void SetBodyBreakParticleTransformByIndexes(struct TArray<int32_t> Indexes, struct FTransform BodyBreakParticleTransform); // Function KlianGorePlugin.GoreSystem.SetBodyBreakParticleTransformByIndexes // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x873960
	void SetBodyBreakParticleTransformByCustomNames(struct TArray<struct FName> Names, struct FTransform BodyBreakParticleTransform); // Function KlianGorePlugin.GoreSystem.SetBodyBreakParticleTransformByCustomNames // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x8737e0
	void SetBodyBreakParticleTransformAll(struct FTransform BodyBreakParticleTransform); // Function KlianGorePlugin.GoreSystem.SetBodyBreakParticleTransformAll // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x8736f0
	void SetBodyBreakEmitterBySocketNames(struct TArray<struct FName> Names, struct UParticleSystem* BodyBreakEmitter); // Function KlianGorePlugin.GoreSystem.SetBodyBreakEmitterBySocketNames // (Final|Native|Public|BlueprintCallable) // @ game+0x8735c0
	void SetBodyBreakEmitterByIndexes(struct TArray<int32_t> Indexes, struct UParticleSystem* BodyBreakEmitter); // Function KlianGorePlugin.GoreSystem.SetBodyBreakEmitterByIndexes // (Final|Native|Public|BlueprintCallable) // @ game+0x873490
	void SetBodyBreakEmitterByCustomNames(struct TArray<struct FName> Names, struct UParticleSystem* BodyBreakEmitter); // Function KlianGorePlugin.GoreSystem.SetBodyBreakEmitterByCustomNames // (Final|Native|Public|BlueprintCallable) // @ game+0x873360
	void SetBodyBreakEmitterAll(struct UParticleSystem* BodyBreakEmitter); // Function KlianGorePlugin.GoreSystem.SetBodyBreakEmitterAll // (Final|Native|Public|BlueprintCallable) // @ game+0x8732d0
	void SetBodyAdditionalActorsToSpawnBySocketNames(struct TArray<struct FName> Names, struct TArray<struct FOtherActors> BodyAdditionalActorsToSpawn); // Function KlianGorePlugin.GoreSystem.SetBodyAdditionalActorsToSpawnBySocketNames // (Final|Native|Public|BlueprintCallable) // @ game+0x873150
	void SetBodyAdditionalActorsToSpawnByIndexes(struct TArray<int32_t> Indexes, struct TArray<struct FOtherActors> BodyAdditionalActorsToSpawn); // Function KlianGorePlugin.GoreSystem.SetBodyAdditionalActorsToSpawnByIndexes // (Final|Native|Public|BlueprintCallable) // @ game+0x872fd0
	void SetBodyAdditionalActorsToSpawnByCustomNames(struct TArray<struct FName> Names, struct TArray<struct FOtherActors> BodyAdditionalActorsToSpawn); // Function KlianGorePlugin.GoreSystem.SetBodyAdditionalActorsToSpawnByCustomNames // (Final|Native|Public|BlueprintCallable) // @ game+0x872e50
	void SetBodyAdditionalActorsToSpawnAll(struct TArray<struct FOtherActors> BodyAdditionalActorsToSpawn); // Function KlianGorePlugin.GoreSystem.SetBodyAdditionalActorsToSpawnAll // (Final|Native|Public|BlueprintCallable) // @ game+0x872d60
	void InitializeGore(struct AActor* Parent, struct USkeletalMeshComponent* SkeletalMesh); // Function KlianGorePlugin.GoreSystem.InitializeGore // (Final|Native|Public|BlueprintCallable) // @ game+0x872ac0
	void InitializeAfterDetach(struct FGorePassInfo GorePassInfo, struct TArray<struct FGoreParticleRef> SpawnedPartRef); // Function KlianGorePlugin.GoreSystem.InitializeAfterDetach // (Final|Native|Public|BlueprintCallable) // @ game+0x8727d0
	void GoreReset(); // Function KlianGorePlugin.GoreSystem.GoreReset // (Final|Native|Public|BlueprintCallable) // @ game+0x8727b0
	bool GoreApplyDamage(float Damage, float CurrentTotHealth, float TotalDamageMultiplier, struct FVector BloodDropStartLocation, struct FName BoneName, struct FVector HitFromDirection, struct AActor* DamageCauser, enum class EPhysBodyOp Mode, float NewTotalHealth); // Function KlianGorePlugin.GoreSystem.GoreApplyDamage // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x8724d0
	void DestroyAllSpawnedBodyParts(bool SpawnedFromChildrenToo); // Function KlianGorePlugin.GoreSystem.DestroyAllSpawnedBodyParts // (Final|Native|Public|BlueprintCallable) // @ game+0x8723f0
	void DestroyAllChildrenBodyEmitters(bool SpawnedFromChildrenToo, struct FName ParentBone); // Function KlianGorePlugin.GoreSystem.DestroyAllChildrenBodyEmitters // (Final|Native|Public|BlueprintCallable) // @ game+0x872320
	void DestroyAllChildrenAdditionalActors(bool SpawnedFromChildrenToo, struct FName ParentBone); // Function KlianGorePlugin.GoreSystem.DestroyAllChildrenAdditionalActors // (Final|Native|Public|BlueprintCallable) // @ game+0x872250
};

