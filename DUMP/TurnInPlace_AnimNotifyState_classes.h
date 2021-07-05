// BlueprintGeneratedClass TurnInPlace_AnimNotifyState.TurnInPlace_AnimNotifyState_C
// Size: 0x41 (Inherited: 0x30)
struct UTurnInPlace_AnimNotifyState_C : UAnimNotifyState {
	struct UCurveFloat* RotationCurveAsset; // 0x30(0x08)
	struct UAnimMontage* Montage; // 0x38(0x08)
	bool IsRightTurn; // 0x40(0x01)

	bool Received_NotifyEnd(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation); // Function TurnInPlace_AnimNotifyState.TurnInPlace_AnimNotifyState_C.Received_NotifyEnd // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1395fe0
	bool Received_NotifyTick(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation, float FrameDeltaTime); // Function TurnInPlace_AnimNotifyState.TurnInPlace_AnimNotifyState_C.Received_NotifyTick // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1395fe0
	bool Received_NotifyBegin(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation, float TotalDuration); // Function TurnInPlace_AnimNotifyState.TurnInPlace_AnimNotifyState_C.Received_NotifyBegin // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1395fe0
};

