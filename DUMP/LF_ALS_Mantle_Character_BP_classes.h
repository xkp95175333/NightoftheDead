// BlueprintGeneratedClass LF_ALS_Mantle_Character_BP.LF_ALS_Mantle_Character_BP_C
// Size: 0x1150 (Inherited: 0xea8)
struct ALF_ALS_Mantle_Character_BP_C : ALFCharacter_BP_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xea8(0x08)
	float MantleTimeline_BlendIn_3D3605134B7514EFE4BC0A9C25093A81; // 0xeb0(0x04)
	enum class ETimelineDirection MantleTimeline__Direction_3D3605134B7514EFE4BC0A9C25093A81; // 0xeb4(0x01)
	char pad_EB5[0x3]; // 0xeb5(0x03)
	struct UTimelineComponent* MantleTimeline; // 0xeb8(0x08)
	float MovementInputAmount; // 0xec0(0x04)
	bool HasMovementInput; // 0xec4(0x01)
	char pad_EC5[0x3]; // 0xec5(0x03)
	struct FMantle_TraceSettings GroundedTraceSettings; // 0xec8(0x14)
	struct FMantle_TraceSettings FallingTraceSettings; // 0xedc(0x14)
	struct UPrimitiveComponent* MantleHitComponent; // 0xef0(0x08)
	struct FVector InitialTrace_ImpactPoint; // 0xef8(0x0c)
	struct FVector InitialTrace_Normal; // 0xf04(0x0c)
	struct FVector DownTraceLocation; // 0xf10(0x0c)
	char pad_F1C[0x4]; // 0xf1c(0x04)
	struct FTransform TargetTransform; // 0xf20(0x30)
	float MantleHeight; // 0xf50(0x04)
	enum class MantleType MantleType; // 0xf54(0x01)
	enum class ALS_MovementState MovementState; // 0xf55(0x01)
	enum class ALS_MovementAction MovementAction; // 0xf56(0x01)
	char pad_F57[0x1]; // 0xf57(0x01)
	struct FMantle_Params MantleParams; // 0xf58(0x30)
	char pad_F88[0x8]; // 0xf88(0x08)
	struct FALS_ComponentAndTransform MantleLedgeLS; // 0xf90(0x40)
	struct FTransform MantleTarget; // 0xfd0(0x30)
	struct FTransform MantleActualStartOffset; // 0x1000(0x30)
	struct FTransform MantleAnimatedStartOffset; // 0x1030(0x30)
	struct UAnimInstance* MainAnimInstance; // 0x1060(0x08)
	char pad_1068[0x8]; // 0x1068(0x08)
	struct FTransform LerpedTarget; // 0x1070(0x30)
	float PositionAlpha; // 0x10a0(0x04)
	float XYCorrectionAlpha; // 0x10a4(0x04)
	float ZCorrectionAlpha; // 0x10a8(0x04)
	struct FRotator TargetRotation; // 0x10ac(0x0c)
	struct FMantle_Asset Mantle_2m_Default; // 0x10b8(0x40)
	struct FMantle_Asset Mantle_1m_Default; // 0x10f8(0x40)
	bool bIsMantling; // 0x1138(0x01)
	char pad_1139[0x7]; // 0x1139(0x07)
	struct TArray<enum class EObjectTypeQuery> MantleTargetObjects; // 0x1140(0x10)

	bool CanRecieveDamage(); // Function LF_ALS_Mantle_Character_BP.LF_ALS_Mantle_Character_BP_C.CanRecieveDamage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void BPI_Get_CurrentStates(enum class EMovementMode PawnMovementMode, enum class ALS_MovementState MovementState, enum class ALS_MovementState PrevMovementState, enum class ALS_MovementAction MovementAction, enum class ALS_RotationMode_New RotationMode, enum class ALS_Gait_New ActualGait, enum class ALS_Stance_New ActualStance, enum class ALS_ViewMode_New ViewMode, enum class ALS_OverlayState OverlayState); // Function LF_ALS_Mantle_Character_BP.LF_ALS_Mantle_Character_BP_C.BPI_Get_CurrentStates // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void BPI_Get_EssentialValues(struct FVector Velocity, struct FVector Acceleration, struct FVector MovementInput, bool IsMoving, bool HasMovementInput, float Speed, float MovementInputAmount, struct FRotator AimingRotation, float AimYawRate); // Function LF_ALS_Mantle_Character_BP.LF_ALS_Mantle_Character_BP_C.BPI_Get_EssentialValues // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	bool IsMantling(); // Function LF_ALS_Mantle_Character_BP.LF_ALS_Mantle_Character_BP_C.IsMantling // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1395fe0
	bool SetActorLocationAndRotation(UpdateTarget)(struct FVector NewLocation, struct FRotator NewRotation, bool bSweep, bool bTeleport, struct FHitResult SweepHitResult); // Function LF_ALS_Mantle_Character_BP.LF_ALS_Mantle_Character_BP_C.SetActorLocationAndRotation(UpdateTarget) // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void RightVector(struct FVector ForwardVector, struct FVector RightVector); // Function LF_ALS_Mantle_Character_BP.LF_ALS_Mantle_Character_BP_C.RightVector // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	struct FVector GetPlayerMovementInput(); // Function LF_ALS_Mantle_Character_BP.LF_ALS_Mantle_Character_BP_C.GetPlayerMovementInput // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	struct FVector GetCapsuleLocationFromBase(struct FVector BaseLocation, float ZOffset); // Function LF_ALS_Mantle_Character_BP.LF_ALS_Mantle_Character_BP_C.GetCapsuleLocationFromBase // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	struct FVector GetCapsuleBaseLocation(float ZOffset); // Function LF_ALS_Mantle_Character_BP.LF_ALS_Mantle_Character_BP_C.GetCapsuleBaseLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	struct FMantle_Asset GetMantleAsset(enum class MantleType MantleType); // Function LF_ALS_Mantle_Character_BP.LF_ALS_Mantle_Character_BP_C.GetMantleAsset // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	void CapsuleHasRoomCheck(struct UCapsuleComponent* Capsule, struct FVector TargetLocation, float HeightOffset, float RadiusOffset, enum class EDrawDebugTrace DebugType, bool HasRoom); // Function LF_ALS_Mantle_Character_BP.LF_ALS_Mantle_Character_BP_C.CapsuleHasRoomCheck // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	void MantleUpdate(float BlendIn); // Function LF_ALS_Mantle_Character_BP.LF_ALS_Mantle_Character_BP_C.MantleUpdate // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void MantleEnd(); // Function LF_ALS_Mantle_Character_BP.LF_ALS_Mantle_Character_BP_C.MantleEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void MantleStart(float MantleHeight, struct FALS_ComponentAndTransform MantleLedgeWS, enum class MantleType MantleType); // Function LF_ALS_Mantle_Character_BP.LF_ALS_Mantle_Character_BP_C.MantleStart // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void MantleCheck(struct FMantle_TraceSettings TraceSettings, enum class EDrawDebugTrace DebugType, bool Vault); // Function LF_ALS_Mantle_Character_BP.LF_ALS_Mantle_Character_BP_C.MantleCheck // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void MantleTimeline__FinishedFunc(); // Function LF_ALS_Mantle_Character_BP.LF_ALS_Mantle_Character_BP_C.MantleTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x1395fe0
	void MantleTimeline__UpdateFunc(); // Function LF_ALS_Mantle_Character_BP.LF_ALS_Mantle_Character_BP_C.MantleTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x1395fe0
	void BPI_Set_RotationMode(enum class ALS_RotationMode_New NewRotationMode); // Function LF_ALS_Mantle_Character_BP.LF_ALS_Mantle_Character_BP_C.BPI_Set_RotationMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void BPI_Set_Gait(enum class ALS_Gait_New NewGait); // Function LF_ALS_Mantle_Character_BP.LF_ALS_Mantle_Character_BP_C.BPI_Set_Gait // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void BPI_Set_ViewMode(enum class ALS_ViewMode_New NewViewMode); // Function LF_ALS_Mantle_Character_BP.LF_ALS_Mantle_Character_BP_C.BPI_Set_ViewMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void BPI_Set_OverlayState(enum class ALS_OverlayState NewOverlayState); // Function LF_ALS_Mantle_Character_BP.LF_ALS_Mantle_Character_BP_C.BPI_Set_OverlayState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ReceiveBeginPlay(); // Function LF_ALS_Mantle_Character_BP.LF_ALS_Mantle_Character_BP_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1395fe0
	void ReceiveTick(float DeltaSeconds); // Function LF_ALS_Mantle_Character_BP.LF_ALS_Mantle_Character_BP_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void OnJumped(); // Function LF_ALS_Mantle_Character_BP.LF_ALS_Mantle_Character_BP_C.OnJumped // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void BPI_Set_MovementState(enum class ALS_MovementState NewMovementState); // Function LF_ALS_Mantle_Character_BP.LF_ALS_Mantle_Character_BP_C.BPI_Set_MovementState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void BPI_Set_MovementAction(enum class ALS_MovementAction NewMovementAction); // Function LF_ALS_Mantle_Character_BP.LF_ALS_Mantle_Character_BP_C.BPI_Set_MovementAction // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void PlayMantleAnimMontage(struct FMantle_Params MantleParams); // Function LF_ALS_Mantle_Character_BP.LF_ALS_Mantle_Character_BP_C.PlayMantleAnimMontage // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ServerPlayMantleAnimMontage(struct FMantle_Params MantleParams); // Function LF_ALS_Mantle_Character_BP.LF_ALS_Mantle_Character_BP_C.ServerPlayMantleAnimMontage // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void MulticastPlayMantleAnimMontage(struct FMantle_Params MantleParams); // Function LF_ALS_Mantle_Character_BP.LF_ALS_Mantle_Character_BP_C.MulticastPlayMantleAnimMontage // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void PlayMantleAnimMontageImpl(struct FMantle_Params MantleParams); // Function LF_ALS_Mantle_Character_BP.LF_ALS_Mantle_Character_BP_C.PlayMantleAnimMontageImpl // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_LF_ALS_Mantle_Character_BP(int32_t EntryPoint); // Function LF_ALS_Mantle_Character_BP.LF_ALS_Mantle_Character_BP_C.ExecuteUbergraph_LF_ALS_Mantle_Character_BP // (Final|UbergraphFunction) // @ game+0x1395fe0
};

