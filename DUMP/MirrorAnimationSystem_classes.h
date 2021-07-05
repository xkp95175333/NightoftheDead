// Class MirrorAnimationSystem.ExtCharacter
// Size: 0x4c0 (Inherited: 0x4c0)
struct AExtCharacter : ACharacter {

	void SetRootMotionMirrorAndFlipAxis(enum class EAxis MirrorAxis, enum class EAxis FlipAxis); // Function MirrorAnimationSystem.ExtCharacter.SetRootMotionMirrorAndFlipAxis // (Native|Public|BlueprintCallable) // @ game+0x884410
	void SetMirrorRootMotion(bool Mirror); // Function MirrorAnimationSystem.ExtCharacter.SetMirrorRootMotion // (Native|Public|BlueprintCallable) // @ game+0x884380
	void GetRootMotionMirrorAndFlipAxis(enum class EAxis MirrorAxis, enum class EAxis FlipAxis); // Function MirrorAnimationSystem.ExtCharacter.GetRootMotionMirrorAndFlipAxis // (Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x8842a0
	bool GetMirrorRootMotion(); // Function MirrorAnimationSystem.ExtCharacter.GetMirrorRootMotion // (Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x884270
};

// Class MirrorAnimationSystem.ExtCharacterMovementComponent
// Size: 0xb10 (Inherited: 0xb00)
struct UExtCharacterMovementComponent : UCharacterMovementComponent {
	bool MirrorRootMotion; // 0xb00(0x01)
	enum class EAxis MirrorAxis; // 0xb01(0x01)
	enum class EAxis FlipAxis; // 0xb02(0x01)
	char pad_B03[0xd]; // 0xb03(0x0d)
};

// Class MirrorAnimationSystem.MirrorTable
// Size: 0x40 (Inherited: 0x30)
struct UMirrorTable : UDataAsset {
	struct TArray<struct FMirrorBone> MirrorBones; // 0x30(0x10)
};

