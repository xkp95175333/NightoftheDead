// ScriptStruct MirrorAnimationSystem.AnimNode_Mirror
// Size: 0x28 (Inherited: 0x10)
struct FAnimNode_Mirror : FAnimNode_Base {
	struct FPoseLink BasePose; // 0x10(0x10)
	struct UMirrorTable* MirrorTable; // 0x20(0x08)
};

// ScriptStruct MirrorAnimationSystem.AnimNode_MirrorCS
// Size: 0x128 (Inherited: 0xc8)
struct FAnimNode_MirrorCS : FAnimNode_SkeletalControlBase {
	enum class EAxis MirrorAxis; // 0xc8(0x01)
	bool CompletlySymmetrical; // 0xc9(0x01)
	char pad_CA[0x6]; // 0xca(0x06)
	struct FString Substring_A; // 0xd0(0x10)
	struct FString Substring_B; // 0xe0(0x10)
	char pad_F0[0x38]; // 0xf0(0x38)
};

// ScriptStruct MirrorAnimationSystem.MirrorBone
// Size: 0x28 (Inherited: 0x00)
struct FMirrorBone {
	struct FName BoneName; // 0x00(0x08)
	enum class EAxis MirrorAxis; // 0x08(0x01)
	enum class EAxis FlipAxis; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	struct FRotator RotationOffset; // 0x0c(0x0c)
	bool IsTwinBone; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	struct FName TwinBoneName; // 0x1c(0x08)
	bool MirrorTranslation; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
};

