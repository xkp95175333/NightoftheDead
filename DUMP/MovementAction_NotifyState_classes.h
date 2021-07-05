// BlueprintGeneratedClass MovementAction_NotifyState.MovementAction_NotifyState_C
// Size: 0x31 (Inherited: 0x30)
struct UMovementAction_NotifyState_C : UAnimNotifyState {
	enum class ALS_MovementAction MovementAction; // 0x30(0x01)

	struct FString GetNotifyName(); // Function MovementAction_NotifyState.MovementAction_NotifyState_C.GetNotifyName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1395fe0
	bool Received_NotifyEnd(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation); // Function MovementAction_NotifyState.MovementAction_NotifyState_C.Received_NotifyEnd // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1395fe0
	bool Received_NotifyBegin(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation, float TotalDuration); // Function MovementAction_NotifyState.MovementAction_NotifyState_C.Received_NotifyBegin // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1395fe0
};

