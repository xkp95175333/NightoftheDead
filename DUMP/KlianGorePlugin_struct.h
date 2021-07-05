// ScriptStruct KlianGorePlugin.GorePassInfo
// Size: 0x68 (Inherited: 0x00)
struct FGorePassInfo {
	struct TArray<struct FGoreBodyParts> InGoreParts; // 0x00(0x10)
	struct TArray<struct FName> InBrokenBones; // 0x10(0x10)
	struct FName InFirstBone; // 0x20(0x08)
	struct TArray<struct FGoreParticlePass> InParticleRefs; // 0x28(0x10)
	struct UParticleSystem* InDefaultHitParticle; // 0x38(0x08)
	struct USoundCue* InDefaultHitSound; // 0x40(0x08)
	struct ADecalActor* InDefaultBloodDecalClass; // 0x48(0x08)
	struct TArray<struct FOtherActorsPass> OtherActorsToPass; // 0x50(0x10)
	float InDecalScale; // 0x60(0x04)
	float InDecalScaleVariation; // 0x64(0x04)
};

// ScriptStruct KlianGorePlugin.OtherActorsPass
// Size: 0x50 (Inherited: 0x00)
struct FOtherActorsPass {
	struct AActor* AdditionalActor; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform AddActOffset; // 0x10(0x30)
	struct FName ParentBone; // 0x40(0x08)
	char pad_48[0x8]; // 0x48(0x08)
};

// ScriptStruct KlianGorePlugin.GoreParticlePass
// Size: 0x50 (Inherited: 0x00)
struct FGoreParticlePass {
	struct FName SocketName; // 0x00(0x08)
	struct FName FirstBone; // 0x08(0x08)
	struct UParticleSystem* ParticleRef; // 0x10(0x08)
	char pad_18[0x8]; // 0x18(0x08)
	struct FTransform ParticleTransf; // 0x20(0x30)
};

// ScriptStruct KlianGorePlugin.GoreBodyParts
// Size: 0x100 (Inherited: 0x00)
struct FGoreBodyParts {
	struct FName BodyPartName; // 0x00(0x08)
	struct FName SocketName; // 0x08(0x08)
	bool bCanBeBroken; // 0x10(0x01)
	bool BreakAlive; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)
	float MaxHealth; // 0x14(0x04)
	float CurrentHealth; // 0x18(0x04)
	float DMGMultip; // 0x1c(0x04)
	struct UParticleSystem* HitSpillParticles; // 0x20(0x08)
	struct USoundCue* HitAudio; // 0x28(0x08)
	struct UParticleSystem* BreakSpillParticles; // 0x30(0x08)
	struct USoundCue* BreakAudio; // 0x38(0x08)
	struct USoundCue* LongBreakAudio; // 0x40(0x08)
	struct ACPP_Tool_Master* Part_SpawnClass; // 0x48(0x08)
	float DetachImpulse; // 0x50(0x04)
	float RandomDetachImpulse; // 0x54(0x04)
	bool bUseAlternativePhAt; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
	struct UParticleSystem* Body_BreakEmitter; // 0x60(0x08)
	char pad_68[0x8]; // 0x68(0x08)
	struct FTransform Body_BreakParticlesTransform; // 0x70(0x30)
	struct TArray<struct FOtherActors> Body_AdditionalActorsToSpawn; // 0xa0(0x10)
	struct UParticleSystem* Part_BreakEmitter; // 0xb0(0x08)
	char pad_B8[0x8]; // 0xb8(0x08)
	struct FTransform Part_BreakParticlesTransform; // 0xc0(0x30)
	struct TArray<struct FOtherActors> Part_AdditionalActorsToSpawn; // 0xf0(0x10)
};

// ScriptStruct KlianGorePlugin.OtherActors
// Size: 0x40 (Inherited: 0x00)
struct FOtherActors {
	struct AActor* AdditionalActor; // 0x00(0x08)
	bool bAddActShouldAttach; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FTransform AddActOffset; // 0x10(0x30)
};

// ScriptStruct KlianGorePlugin.GoreParticleRef
// Size: 0x50 (Inherited: 0x00)
struct FGoreParticleRef {
	struct FName SocketName; // 0x00(0x08)
	struct FName FirstBone; // 0x08(0x08)
	struct UParticleSystemComponent* ParticleRef; // 0x10(0x08)
	char pad_18[0x8]; // 0x18(0x08)
	struct FTransform ParticleTransf; // 0x20(0x30)
};

// ScriptStruct KlianGorePlugin.OtherActorsAttached
// Size: 0x50 (Inherited: 0x00)
struct FOtherActorsAttached {
	struct AActor* AdditionalActor; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform AddActOffset; // 0x10(0x30)
	struct FName ParentBone; // 0x40(0x08)
	char pad_48[0x8]; // 0x48(0x08)
};

