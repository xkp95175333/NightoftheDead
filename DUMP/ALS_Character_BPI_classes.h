// BlueprintGeneratedClass ALS_Character_BPI.ALS_Character_BPI_C
// Size: 0x28 (Inherited: 0x28)
struct UALS_Character_BPI_C : UInterface {

	void BPI_Set_OverlayState(enum class ALS_OverlayState NewOverlayState); // Function ALS_Character_BPI.ALS_Character_BPI_C.BPI_Set_OverlayState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void BPI_Set_ViewMode(enum class ALS_ViewMode_New NewViewMode); // Function ALS_Character_BPI.ALS_Character_BPI_C.BPI_Set_ViewMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void BPI_Set_Gait(enum class ALS_Gait_New NewGait); // Function ALS_Character_BPI.ALS_Character_BPI_C.BPI_Set_Gait // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void BPI_Set_RotationMode(enum class ALS_RotationMode_New NewRotationMode); // Function ALS_Character_BPI.ALS_Character_BPI_C.BPI_Set_RotationMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void BPI_Set_MovementAction(enum class ALS_MovementAction NewMovementAction); // Function ALS_Character_BPI.ALS_Character_BPI_C.BPI_Set_MovementAction // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void BPI_Set_MovementState(enum class ALS_MovementState NewMovementState); // Function ALS_Character_BPI.ALS_Character_BPI_C.BPI_Set_MovementState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void BPI_Get_EssentialValues(struct FVector Velocity, struct FVector Acceleration, struct FVector MovementInput, bool IsMoving, bool HasMovementInput, float Speed, float MovementInputAmount, struct FRotator AimingRotation, float AimYawRate); // Function ALS_Character_BPI.ALS_Character_BPI_C.BPI_Get_EssentialValues // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void BPI_Get_CurrentStates(enum class EMovementMode PawnMovementMode, enum class ALS_MovementState MovementState, enum class ALS_MovementState PrevMovementState, enum class ALS_MovementAction MovementAction, enum class ALS_RotationMode_New RotationMode, enum class ALS_Gait_New ActualGait, enum class ALS_Stance_New ActualStance, enum class ALS_ViewMode_New ViewMode, enum class ALS_OverlayState OverlayState); // Function ALS_Character_BPI.ALS_Character_BPI_C.BPI_Get_CurrentStates // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
};

