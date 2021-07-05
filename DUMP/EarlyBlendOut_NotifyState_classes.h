// BlueprintGeneratedClass EarlyBlendOut_NotifyState.EarlyBlendOut_NotifyState_C
// Size: 0x41 (Inherited: 0x30)
struct UEarlyBlendOut_NotifyState_C : UAnimNotifyState {
	struct UAnimMontage* ThisMontage; // 0x30(0x08)
	float BlendOutTime; // 0x38(0x04)
	bool CheckMovementState; // 0x3c(0x01)
	enum class ALS_MovementState MovementStateEquals; // 0x3d(0x01)
	bool CheckStance; // 0x3e(0x01)
	enum class ALS_Stance_New StanceEquals; // 0x3f(0x01)
	bool CheckMovementInput; // 0x40(0x01)

	struct FString GetNotifyName(); // Function EarlyBlendOut_NotifyState.EarlyBlendOut_NotifyState_C.GetNotifyName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1395fe0
	bool Received_NotifyTick(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation, float FrameDeltaTime); // Function EarlyBlendOut_NotifyState.EarlyBlendOut_NotifyState_C.Received_NotifyTick // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1395fe0
};

