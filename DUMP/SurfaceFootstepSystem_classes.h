// Class SurfaceFootstepSystem.FootstepActor
// Size: 0x250 (Inherited: 0x220)
struct AFootstepActor : AActor {
	struct UAudioComponent* AudioComponent; // 0x220(0x08)
	struct UParticleSystemComponent* ParticleComponent; // 0x228(0x08)
	struct UNiagaraComponent* NiagaraComponent; // 0x230(0x08)
	char pad_238[0x18]; // 0x238(0x18)
};

// Class SurfaceFootstepSystem.FootstepComponent
// Size: 0x120 (Inherited: 0xb0)
struct UFootstepComponent : UActorComponent {
	struct TMap<enum class EPhysicalSurface, struct UFootstepDataAsset*> FootstepFXes; // 0xb0(0x50)
	float TraceLength; // 0x100(0x04)
	bool bShowDebug; // 0x104(0x01)
	char pad_105[0x3]; // 0x105(0x03)
	struct USurfaceFootstepSystemSettings* FootstepSettings; // 0x108(0x08)
	struct TArray<struct AActor*> ActorsToIgnore; // 0x110(0x10)

	void SetActorsToIgnoreForTrace(struct TArray<struct AActor*> NewActorsToIgnore); // Function SurfaceFootstepSystem.FootstepComponent.SetActorsToIgnoreForTrace // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x8af8a0
	bool GetPlaySound2D(); // Function SurfaceFootstepSystem.FootstepComponent.GetPlaySound2D // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8af870
};

// Class SurfaceFootstepSystem.FootstepDataAsset
// Size: 0xb8 (Inherited: 0x30)
struct UFootstepDataAsset : UDataAsset {
	struct TMap<struct FGameplayTag, struct FFootstepData> FootstepData; // 0x30(0x50)
	float MinVolume; // 0x80(0x04)
	float MaxVolume; // 0x84(0x04)
	float MinPitch; // 0x88(0x04)
	float MaxPitch; // 0x8c(0x04)
	struct USoundAttenuation* AttenuationSettingsOverride; // 0x90(0x08)
	struct USoundConcurrency* ConcurrencySettingsOverride; // 0x98(0x08)
	float MinParticleScale; // 0xa0(0x04)
	float MaxParticleScale; // 0xa4(0x04)
	float FootstepLifeSpan; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
	struct USurfaceFootstepSystemSettings* FootstepSettings; // 0xb0(0x08)
};

// Class SurfaceFootstepSystem.FootstepInterface
// Size: 0x28 (Inherited: 0x28)
struct UFootstepInterface : UInterface {

	struct UFootstepComponent* GetFootstepComponent(); // Function SurfaceFootstepSystem.FootstepInterface.GetFootstepComponent // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x8af840
};

// Class SurfaceFootstepSystem.FootstepWorldSettings
// Size: 0x3a8 (Inherited: 0x3a0)
struct AFootstepWorldSettings : AWorldSettings {
	char pad_3A0[0x8]; // 0x3a0(0x08)
};

// Class SurfaceFootstepSystem.SurfaceFootstepSystemSettings
// Size: 0x90 (Inherited: 0x28)
struct USurfaceFootstepSystemSettings : UObject {
	struct TArray<struct FGameplayTag> FootstepCategories; // 0x28(0x10)
	struct TArray<enum class ECollisionChannel> FootstepObjectTypes; // 0x38(0x10)
	float DefaultTraceLength; // 0x48(0x04)
	bool bTraceComplex; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	int32_t MaxPoolSize; // 0x50(0x04)
	float DefaultFootstepActorLifeSpan; // 0x54(0x04)
	bool bPlaySound2D_ForLocalPlayer; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
	struct FSoftObjectPath DefaultAttenuationOverride; // 0x60(0x18)
	struct FSoftObjectPath DefaultConcurrencyOverride; // 0x78(0x18)
};

