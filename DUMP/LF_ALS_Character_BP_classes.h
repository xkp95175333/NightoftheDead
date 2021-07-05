// BlueprintGeneratedClass LF_ALS_Character_BP.LF_ALS_Character_BP_C
// Size: 0x1478 (Inherited: 0x1150)
struct ALF_ALS_Character_BP_C : ALF_ALS_Mantle_Character_BP_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1150(0x08)
	struct UBP_AquaticInteraction_C* BP_AquaticInteraction; // 0x1158(0x08)
	struct UBP_AquaticInteraction_C* BP_AquaticInteractionRightFoot; // 0x1160(0x08)
	struct UBP_AquaticInteraction_C* BP_AquaticInteractionRightHand; // 0x1168(0x08)
	struct UBP_AquaticInteraction_C* BP_AquaticInteractionLeftHand; // 0x1170(0x08)
	struct UBP_AquaticInteraction_C* BP_AquaticInteractionLeftFoot; // 0x1178(0x08)
	struct UStaticMeshComponent* Watch; // 0x1180(0x08)
	struct USphereComponent* PlayerSphere; // 0x1188(0x08)
	struct USkeletalMeshComponent* item1; // 0x1190(0x08)
	struct USkeletalMeshComponent* Item; // 0x1198(0x08)
	struct USkeletalMeshComponent* Bag; // 0x11a0(0x08)
	struct USkeletalMeshComponent* Rope; // 0x11a8(0x08)
	struct URectLightComponent* RectLight2; // 0x11b0(0x08)
	struct URectLightComponent* RectLight1; // 0x11b8(0x08)
	struct URectLightComponent* RectLight; // 0x11c0(0x08)
	struct UArrowComponent* LastVelocityRotationArrow; // 0x11c8(0x08)
	struct UArrowComponent* VelocityArrow; // 0x11d0(0x08)
	struct UArrowComponent* LastMovementInputRotationArrow; // 0x11d8(0x08)
	struct UArrowComponent* MovementInputArrow; // 0x11e0(0x08)
	struct UArrowComponent* CharacterRotationArrow; // 0x11e8(0x08)
	struct UArrowComponent* TargetRotationArrow; // 0x11f0(0x08)
	struct UArrowComponent* LookingRotationArrow; // 0x11f8(0x08)
	struct USceneComponent* Arrows; // 0x1200(0x08)
	bool ShouldSprint; // 0x1208(0x01)
	char pad_1209[0x3]; // 0x1209(0x03)
	float DownRate; // 0x120c(0x04)
	float RightRate; // 0x1210(0x04)
	struct FVector MovementInput; // 0x1214(0x0c)
	float AimYawDelta; // 0x1220(0x04)
	float AimYawRate; // 0x1224(0x04)
	float VelocityDifference; // 0x1228(0x04)
	float CharacterRotationDifference; // 0x122c(0x04)
	float Direction; // 0x1230(0x04)
	struct FRotator CharacterRotation; // 0x1234(0x0c)
	struct FRotator LookingRotation; // 0x1240(0x0c)
	struct FRotator LastVelocityRotation; // 0x124c(0x0c)
	struct FRotator LastMovementInputRotation; // 0x1258(0x0c)
	bool IsMoving; // 0x1264(0x01)
	bool HasMovementInput_1; // 0x1265(0x01)
	enum class ALS_Gait ALS_Gait; // 0x1266(0x01)
	enum class ALS_Stance ALS_Stance; // 0x1267(0x01)
	enum class ALS_RotationMode ALS_RotationMode; // 0x1268(0x01)
	enum class ALS_MovementMode ALS_MovementMode; // 0x1269(0x01)
	enum class ALS_MovementMode ALS_PrevMovementMode; // 0x126a(0x01)
	enum class CardinalDirection CardinalDirection; // 0x126b(0x01)
	struct FRotator TargetRotation_1; // 0x126c(0x0c)
	float WalkingSpeed; // 0x1278(0x04)
	float RunningSpeed; // 0x127c(0x04)
	float SprintingSpeed; // 0x1280(0x04)
	float CrouchingSpeed; // 0x1284(0x04)
	float WalkingAcceleration; // 0x1288(0x04)
	float RunningAcceleration; // 0x128c(0x04)
	float WalkingDeceleration; // 0x1290(0x04)
	float RunningDeceleration; // 0x1294(0x04)
	float WalkingGroundFriction; // 0x1298(0x04)
	float RunningGroundFriction; // 0x129c(0x04)
	struct FRotator JumpRotation; // 0x12a0(0x0c)
	float RotationOffset; // 0x12ac(0x04)
	float RotationRateMultiplier; // 0x12b0(0x04)
	float ForwardAxisValue; // 0x12b4(0x04)
	float RightAxisValue; // 0x12b8(0x04)
	bool ALS_Aiming; // 0x12bc(0x01)
	char pad_12BD[0x3]; // 0x12bd(0x03)
	struct FALS_Camera_Targets CameraTargets; // 0x12c0(0xc8)
	struct FName FirstPersonCameraSocket; // 0x1388(0x08)
	struct FALS_CameraSettings CurrentCameraSettings; // 0x1390(0x14)
	char pad_13A4[0x4]; // 0x13a4(0x04)
	struct UCurveFloat* CameraLerpCurve; // 0x13a8(0x08)
	bool ShowTraces; // 0x13b0(0x01)
	bool ShowSettings; // 0x13b1(0x01)
	char pad_13B2[0x2]; // 0x13b2(0x02)
	struct FName PelvisBone; // 0x13b4(0x08)
	struct FName RagdollPoseSnapshot; // 0x13bc(0x08)
	bool RagdollOnGround; // 0x13c4(0x01)
	char pad_13C5[0x3]; // 0x13c5(0x03)
	struct FVector RagdollLocation; // 0x13c8(0x0c)
	struct FVector RagdollVelocity; // 0x13d4(0x0c)
	bool RightShoulder; // 0x13e0(0x01)
	char pad_13E1[0x7]; // 0x13e1(0x07)
	struct FText UserName; // 0x13e8(0x18)
	struct UWidgetComponent* Widget_1; // 0x1400(0x08)
	bool IsGamepadKey?; // 0x1408(0x01)
	enum class E_InputMode MyInputMode; // 0x1409(0x01)
	char pad_140A[0x2]; // 0x140a(0x02)
	float Sensitivity; // 0x140c(0x04)
	float BaseTurnRate; // 0x1410(0x04)
	bool InvertMouse?; // 0x1414(0x01)
	char pad_1415[0x3]; // 0x1415(0x03)
	float BaseLookUpRate; // 0x1418(0x04)
	char pad_141C[0x4]; // 0x141c(0x04)
	struct UCurveFloat* LightCurve; // 0x1420(0x08)
	struct TMap<struct ULightComponent*, float> InitialLightValues; // 0x1428(0x50)

	void MSG_RequestKey(bool Action?, enum class E_TemplateControlAction ActionName, enum class E_TemplateControlAxis AxisName, struct FInputChord MyKey); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.MSG_RequestKey // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void DoesHoldBowString(bool Result); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.DoesHoldBowString // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void GetBowStringSocketName(struct FName Name); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.GetBowStringSocketName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void GetBlueprintEquipmentMeshes(struct TArray<struct UMeshComponent*> OutBlueprintMeshes); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.GetBlueprintEquipmentMeshes // (Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	bool IsMouseInverted(); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.IsMouseInverted // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1395fe0
	float GetMouseSensitivity(); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.GetMouseSensitivity // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1395fe0
	void UpdateCharacterLights(); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.UpdateCharacterLights // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void GetCanPass(bool bCanPass); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.GetCanPass // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	void ComponentsToSave(struct TArray<struct UActorComponent*> Components); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.ComponentsToSave // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void PlayerMovementInput(bool Is Forward Axis); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.PlayerMovementInput // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void CalculateActorLocationAndRotationInRagdoll(struct FRotator RagdollRotation, struct FVector RagdollLocation, struct FRotator ActorRotation, struct FVector ActorLocation); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.CalculateActorLocationAndRotationInRagdoll // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void CanSprint(bool CanSprint); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.CanSprint // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	void CustomAcceleration(); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.CustomAcceleration // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ChooseVelocity(struct FVector Velocity); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.ChooseVelocity // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	void LimitRotation(float AimYawLimit, float InterpSpeed); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.LimitRotation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void On ALS_Aiming Changed(); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.On ALS_Aiming Changed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void LerpCameraSettings(float LerpAlpha, struct USpringArmComponent* TargetSpringArm); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.LerpCameraSettings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ChooseCameraSettings(struct FALS_CameraSettings TargetCameraSettings); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.ChooseCameraSettings // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	float CalculateRotationRate(float SlowSpeed, float SlowSpeedRate, float FastSpeed, float FastSpeedRate); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.CalculateRotationRate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	void LookingDirectionWithOffset(float OffsetInterpSpeed, float NE Angle, float NW Angle, float SE Angle, float SW Angle, float buffer, struct FRotator TargetRotation); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.LookingDirectionWithOffset // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void AddCharacterRotation(struct FRotator AddAmount); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.AddCharacterRotation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ChooseGroundFriction(float MaxWalkSpeed); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.ChooseGroundFriction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	void ChooseBrakingDeceleration(float MaxWalkSpeed); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.ChooseBrakingDeceleration // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	void ChooseMaxAcceleration(float MaxWalkSpeed); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.ChooseMaxAcceleration // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	void ChooseMaxWalkSpeed(float MaxWalkSpeed); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.ChooseMaxWalkSpeed // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	void UpdateALS_CharacterMovementSettings(); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.UpdateALS_CharacterMovementSettings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void SetCharacterRotation(struct FRotator TargetRotation, bool InterpRotation, float InterpSpeed); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.SetCharacterRotation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void On ALS_RotationMode Changed(); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.On ALS_RotationMode Changed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void On ALS_Stance Changed(); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.On ALS_Stance Changed // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void On ALS_Gait Changed(); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.On ALS_Gait Changed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void On ALS_MovementMode Changed(); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.On ALS_MovementMode Changed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void On PawnMovementMode Changed(enum class EMovementMode PrevMovementMode, enum class EMovementMode NewMovementMode, char PrevCustomMode, char NewCustomMove); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.On PawnMovementMode Changed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void CalculateEssentialVariables(); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.CalculateEssentialVariables // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void UserConstructionScript(); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void InpActEvt_Hyphen_K2Node_InputKeyEvent_9(struct FKey Key); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.InpActEvt_Hyphen_K2Node_InputKeyEvent_9 // (BlueprintEvent) // @ game+0x1395fe0
	void InpActEvt_Equals_K2Node_InputKeyEvent_8(struct FKey Key); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.InpActEvt_Equals_K2Node_InputKeyEvent_8 // (BlueprintEvent) // @ game+0x1395fe0
	void InpActEvt_LeftBracket_K2Node_InputKeyEvent_7(struct FKey Key); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.InpActEvt_LeftBracket_K2Node_InputKeyEvent_7 // (BlueprintEvent) // @ game+0x1395fe0
	void InpActEvt_RightBracket_K2Node_InputKeyEvent_6(struct FKey Key); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.InpActEvt_RightBracket_K2Node_InputKeyEvent_6 // (BlueprintEvent) // @ game+0x1395fe0
	void InpActEvt_O_K2Node_InputKeyEvent_5(struct FKey Key); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.InpActEvt_O_K2Node_InputKeyEvent_5 // (BlueprintEvent) // @ game+0x1395fe0
	void InpActEvt_P_K2Node_InputKeyEvent_4(struct FKey Key); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.InpActEvt_P_K2Node_InputKeyEvent_4 // (BlueprintEvent) // @ game+0x1395fe0
	void InpActEvt_Jump_K2Node_InputActionEvent_2(struct FKey Key); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.InpActEvt_Jump_K2Node_InputActionEvent_2 // (BlueprintEvent) // @ game+0x1395fe0
	void InpActEvt_Jump_K2Node_InputActionEvent_1(struct FKey Key); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.InpActEvt_Jump_K2Node_InputActionEvent_1 // (BlueprintEvent) // @ game+0x1395fe0
	void InpActEvt_AnyKey_K2Node_InputKeyEvent_3(struct FKey Key); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.InpActEvt_AnyKey_K2Node_InputKeyEvent_3 // (BlueprintEvent) // @ game+0x1395fe0
	void InpActEvt_PageUp_K2Node_InputKeyEvent_2(struct FKey Key); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.InpActEvt_PageUp_K2Node_InputKeyEvent_2 // (BlueprintEvent) // @ game+0x1395fe0
	void InpActEvt_PageDown_K2Node_InputKeyEvent_1(struct FKey Key); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.InpActEvt_PageDown_K2Node_InputKeyEvent_1 // (BlueprintEvent) // @ game+0x1395fe0
	void AnimNotify_IdleEntryState BPI(enum class IdleEntryState IdleEntryState); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.AnimNotify_IdleEntryState BPI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Set ALS_Aiming BPI(bool Aiming); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.Set ALS_Aiming BPI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Play_GetUp_Anim BPI(bool FaceDown); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.Play_GetUp_Anim BPI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void SavePoseSnapshot_BPI(struct FName PoseName); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.SavePoseSnapshot_BPI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Set ALS_ViewMode BPI(enum class ALS_ViewMode ViewMode); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.Set ALS_ViewMode BPI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ShowTraces_BPI(bool ShowTraces); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.ShowTraces_BPI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Set WalkingSpeed BPI(float WalkingSpeed); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.Set WalkingSpeed BPI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Set RunningSpeed BPI(float RunningSpeed); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.Set RunningSpeed BPI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Set SprintingSpeed BPI(float SprintingSpeed); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.Set SprintingSpeed BPI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Set CrouchingSpeed BPI(float CrouchingSpeed); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.Set CrouchingSpeed BPI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Set RF_BPI(bool RF); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.Set RF_BPI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void AnimNotify_TurningInPlace BPI(struct UAnimMontage* TurnInPlaceMontage, bool ShouldTurnInPlace, bool TurningInPlace, bool TurningRight); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.AnimNotify_TurningInPlace BPI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void AnimNotify_Pivot BPI(struct FALS_PivotParams PivotParams); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.AnimNotify_Pivot BPI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Set ALS_MovementMode BPI(enum class ALS_MovementMode ALS_MovementMode); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.Set ALS_MovementMode BPI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Set ALS_RotationMode BPI(enum class ALS_RotationMode ALS_RotationMode BPI); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.Set ALS_RotationMode BPI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Set ALS_Stance BPI(enum class ALS_Stance ALS_Stance); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.Set ALS_Stance BPI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Set ALS_Gait BPI(enum class ALS_Gait ALS_Gait); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.Set ALS_Gait BPI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void MSG_ChangeGameplaySetting(enum class E_TemplateUI Setting, int32_t Index, float Value); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.MSG_ChangeGameplaySetting // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ALSMoveForward(float Value); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.ALSMoveForward // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void ALSMoveRight(float Value); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.ALSMoveRight // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void ALSLookUp(float Value); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.ALSLookUp // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void ALSTurn(float Value); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.ALSTurn // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void ALSRagdoll(); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.ALSRagdoll // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void ALSAimStop(); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.ALSAimStop // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void ALSAim(); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.ALSAim // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void AimRange(float DeltaTime); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.AimRange // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void ALSRun_2(); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.ALSRun_2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ALSRunStop_2(); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.ALSRunStop_2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ALSWalkStart_2(); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.ALSWalkStart_2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ALSWalkStop_2(); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.ALSWalkStop_2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ReceiveTick(float DeltaSeconds); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void ReceiveBeginPlay(); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1395fe0
	void InpAxisEvt_MoveForward_K2Node_InputAxisEvent_80(float AxisValue); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_80 // (BlueprintEvent) // @ game+0x1395fe0
	void InpAxisEvt_MoveRight_K2Node_InputAxisEvent_91(float AxisValue); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_91 // (BlueprintEvent) // @ game+0x1395fe0
	void InpAxisEvt_TurnRate_K2Node_InputAxisEvent_39(float AxisValue); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.InpAxisEvt_TurnRate_K2Node_InputAxisEvent_39 // (BlueprintEvent) // @ game+0x1395fe0
	void InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_54(float AxisValue); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_54 // (BlueprintEvent) // @ game+0x1395fe0
	void MSG_ChangeInvertMouse(bool InvertMouse); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.MSG_ChangeInvertMouse // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void MSG_ChangeSensitivity(float Sensitivity); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.MSG_ChangeSensitivity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Server_SetName(struct FText InText); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.Server_SetName // (Net|NetReliableNetServer|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Multi_SetName(); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.Multi_SetName // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void SetName(); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.SetName // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnRotationChanged(struct FRotator NewRotator); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.OnRotationChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1395fe0
	void Un_Ragdoll Event(); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.Un_Ragdoll Event // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void To_Ragdoll Event(); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.To_Ragdoll Event // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Un_Ragdoll ( MULTICAST )(bool OnGround); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.Un_Ragdoll ( MULTICAST ) // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void To_Ragdoll ( MULTICAST )(); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.To_Ragdoll ( MULTICAST ) // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnLanded(struct FHitResult Hit); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.OnLanded // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1395fe0
	void K2_OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.K2_OnEndCrouch // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void K2_OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.K2_OnStartCrouch // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void K2_OnMovementModeChanged(enum class EMovementMode PrevMovementMode, enum class EMovementMode NewMovementMode, char PrevCustomMode, char NewCustomMode); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.K2_OnMovementModeChanged // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void CameraShake_BPI(struct UMatineeCameraShake* ShakeClass, float Scale); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.CameraShake_BPI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void AddCharacterRotation_BPI(struct FRotator AddAmount); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.AddCharacterRotation_BPI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void To_Ragdoll ( SERVER )(); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.To_Ragdoll ( SERVER ) // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Un_Ragdoll ( SERVER )(bool OnGround); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.Un_Ragdoll ( SERVER ) // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void UpdateRagdoll ( MULTICAST )(struct FVector ActorLocation); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.UpdateRagdoll ( MULTICAST ) // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void UpdateRagdoll ( SERVER )(struct FVector RagdollVelocity, struct FVector RagdollLocation, struct FRotator ActorRotation, struct FVector ActorLocation); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.UpdateRagdoll ( SERVER ) // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Set ALS_Gait Event ( SERVER )(enum class ALS_Gait ALS_Gait); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.Set ALS_Gait Event ( SERVER ) // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Set ALS_Gait Event ( MULTICAST )(enum class ALS_Gait ALS_Gait); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.Set ALS_Gait Event ( MULTICAST ) // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Set ALS_RotationMode Event ( SERVER )(enum class ALS_RotationMode ALS_RotationMode); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.Set ALS_RotationMode Event ( SERVER ) // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Set ALS_RotationMode Event ( MULTICAST )(enum class ALS_RotationMode ALS_RotationMode); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.Set ALS_RotationMode Event ( MULTICAST ) // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Set ALS_Aiming Event ( SERVER )(bool ALS_Aiming); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.Set ALS_Aiming Event ( SERVER ) // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Set ALS_Aiming Event ( MULTICAST )(bool ALS_Aiming); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.Set ALS_Aiming Event ( MULTICAST ) // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Play Networked Montage ( MULTICAST )(struct UAnimMontage* MontageToPlay, float InPlayRate, float InTimeToStartMontageAt, bool bStopAllMontages); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.Play Networked Montage ( MULTICAST ) // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Play Networked Montage ( SERVER )(struct UAnimMontage* MontageToPlay, float InPlayRate, float InTimeToStartMontageAt, bool bStopAllMontages); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.Play Networked Montage ( SERVER ) // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Set CharacterRotation Event ( SERVER )(struct FRotator TargetRotation, struct FRotator CharacterRotation); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.Set CharacterRotation Event ( SERVER ) // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Set LookingRotation Event ( SERVER )(struct FRotator LookingRotation); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.Set LookingRotation Event ( SERVER ) // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Set MovementInput Event ( SERVER )(struct FVector MovementInput); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.Set MovementInput Event ( SERVER ) // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Set ALS_MovementMode Event(enum class ALS_MovementMode New ALS_MovementMode); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.Set ALS_MovementMode Event // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Set ALS_Gait Event(enum class ALS_Gait New ALS_Gait); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.Set ALS_Gait Event // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Set ALS_Stance Event(enum class ALS_Stance New ALS_Stance); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.Set ALS_Stance Event // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Set ALS_RotationMode Event(enum class ALS_RotationMode New ALS_RotationMode); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.Set ALS_RotationMode Event // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Set ALS_Aiming Event(bool ALS_Aiming); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.Set ALS_Aiming Event // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Set WalkingSpeed Event(float WalkingSpeed); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.Set WalkingSpeed Event // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Set RunningSpeed Event(float RunningSpeed); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.Set RunningSpeed Event // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Set SprintingSpeed Event(float SprintingSpeed); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.Set SprintingSpeed Event // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Set CrouchingSpeed Event(float CrouchingSpeed); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.Set CrouchingSpeed Event // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_LF_ALS_Character_BP(int32_t EntryPoint); // Function LF_ALS_Character_BP.LF_ALS_Character_BP_C.ExecuteUbergraph_LF_ALS_Character_BP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
};

