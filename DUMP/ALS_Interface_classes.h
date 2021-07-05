// BlueprintGeneratedClass ALS_Interface.ALS_Interface_C
// Size: 0x28 (Inherited: 0x28)
struct UALS_Interface_C : UInterface {

	void Set RF_BPI(bool RF); // Function ALS_Interface.ALS_Interface_C.Set RF_BPI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void CameraShake_BPI(struct UMatineeCameraShake* ShakeClass, float Scale); // Function ALS_Interface.ALS_Interface_C.CameraShake_BPI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Set CrouchingSpeed BPI(float CrouchingSpeed); // Function ALS_Interface.ALS_Interface_C.Set CrouchingSpeed BPI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Set SprintingSpeed BPI(float SprintingSpeed); // Function ALS_Interface.ALS_Interface_C.Set SprintingSpeed BPI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Set RunningSpeed BPI(float RunningSpeed); // Function ALS_Interface.ALS_Interface_C.Set RunningSpeed BPI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Set WalkingSpeed BPI(float WalkingSpeed); // Function ALS_Interface.ALS_Interface_C.Set WalkingSpeed BPI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ShowTraces_BPI(bool ShowTraces); // Function ALS_Interface.ALS_Interface_C.ShowTraces_BPI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Set ALS_ViewMode BPI(enum class ALS_ViewMode ViewMode); // Function ALS_Interface.ALS_Interface_C.Set ALS_ViewMode BPI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void AddCharacterRotation_BPI(struct FRotator AddAmount); // Function ALS_Interface.ALS_Interface_C.AddCharacterRotation_BPI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void SavePoseSnapshot_BPI(struct FName PoseName); // Function ALS_Interface.ALS_Interface_C.SavePoseSnapshot_BPI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Play_GetUp_Anim BPI(bool FaceDown); // Function ALS_Interface.ALS_Interface_C.Play_GetUp_Anim BPI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Set ALS_Aiming BPI(bool Aiming); // Function ALS_Interface.ALS_Interface_C.Set ALS_Aiming BPI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void AnimNotify_IdleEntryState BPI(enum class IdleEntryState IdleEntryState); // Function ALS_Interface.ALS_Interface_C.AnimNotify_IdleEntryState BPI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void AnimNotify_TurningInPlace BPI(struct UAnimMontage* TurnInPlaceMontage, bool ShouldTurnInPlace, bool TurningInPlace, bool TurningRight); // Function ALS_Interface.ALS_Interface_C.AnimNotify_TurningInPlace BPI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void AnimNotify_Pivot BPI(struct FALS_PivotParams PivotParams); // Function ALS_Interface.ALS_Interface_C.AnimNotify_Pivot BPI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Set ALS_MovementMode BPI(enum class ALS_MovementMode ALS_MovementMode); // Function ALS_Interface.ALS_Interface_C.Set ALS_MovementMode BPI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Set ALS_RotationMode BPI(enum class ALS_RotationMode ALS_RotationMode BPI); // Function ALS_Interface.ALS_Interface_C.Set ALS_RotationMode BPI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Set ALS_Stance BPI(enum class ALS_Stance ALS_Stance); // Function ALS_Interface.ALS_Interface_C.Set ALS_Stance BPI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Set ALS_Gait BPI(enum class ALS_Gait ALS_Gait); // Function ALS_Interface.ALS_Interface_C.Set ALS_Gait BPI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
};

