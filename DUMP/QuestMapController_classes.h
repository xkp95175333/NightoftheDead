// BlueprintGeneratedClass QuestMapController.QuestMapController_C
// Size: 0x5a0 (Inherited: 0x570)
struct AQuestMapController_C : APlayerController {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x570(0x08)
	struct UC_Manager-Compass_C* C_Manager-Compass; // 0x578(0x08)
	struct UC_Manager-LocalMap_C* C_Manager-LocalMap; // 0x580(0x08)
	struct UC_Manager-WorldMap_C* C_Manager-WorldMap; // 0x588(0x08)
	struct UQuestMapManager_C* QuestMapManager; // 0x590(0x08)
	float ForwardScale; // 0x598(0x04)
	float RightScale; // 0x59c(0x04)

	void GetComponents(struct UQuestMapComponent_C* CompassManager, struct UQuestMapComponent_C* LocalMapManager, struct UQuestMapComponent_C* WorldMapManager); // Function QuestMapController.QuestMapController_C.GetComponents // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void GetQMManager(struct UQuestMapManager_C* QuestMapManager); // Function QuestMapController.QuestMapController_C.GetQMManager // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void InpActEvt_M_K2Node_InputKeyEvent_8(struct FKey Key); // Function QuestMapController.QuestMapController_C.InpActEvt_M_K2Node_InputKeyEvent_8 // (BlueprintEvent) // @ game+0x1395fe0
	void InpActEvt_L_K2Node_InputKeyEvent_7(struct FKey Key); // Function QuestMapController.QuestMapController_C.InpActEvt_L_K2Node_InputKeyEvent_7 // (BlueprintEvent) // @ game+0x1395fe0
	void InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_6(struct FKey Key); // Function QuestMapController.QuestMapController_C.InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_6 // (BlueprintEvent) // @ game+0x1395fe0
	void InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_5(struct FKey Key); // Function QuestMapController.QuestMapController_C.InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_5 // (BlueprintEvent) // @ game+0x1395fe0
	void InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_4(struct FKey Key); // Function QuestMapController.QuestMapController_C.InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_4 // (BlueprintEvent) // @ game+0x1395fe0
	void InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_3(struct FKey Key); // Function QuestMapController.QuestMapController_C.InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_3 // (BlueprintEvent) // @ game+0x1395fe0
	void InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_2(struct FKey Key); // Function QuestMapController.QuestMapController_C.InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_2 // (BlueprintEvent) // @ game+0x1395fe0
	void InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_1(struct FKey Key); // Function QuestMapController.QuestMapController_C.InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_1 // (BlueprintEvent) // @ game+0x1395fe0
	void InpAxisKeyEvt_MouseWheelAxis_K2Node_InputAxisKeyEvent_20(float AxisValue); // Function QuestMapController.QuestMapController_C.InpAxisKeyEvt_MouseWheelAxis_K2Node_InputAxisKeyEvent_20 // (BlueprintEvent) // @ game+0x1395fe0
	void ToggleMovement(bool GamepadEvent); // Function QuestMapController.QuestMapController_C.ToggleMovement // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void InpAxisKeyEvt_Gamepad_RightX_K2Node_InputAxisKeyEvent_61(float AxisValue); // Function QuestMapController.QuestMapController_C.InpAxisKeyEvt_Gamepad_RightX_K2Node_InputAxisKeyEvent_61 // (BlueprintEvent) // @ game+0x1395fe0
	void InpAxisKeyEvt_Gamepad_RightY_K2Node_InputAxisKeyEvent_68(float AxisValue); // Function QuestMapController.QuestMapController_C.InpAxisKeyEvt_Gamepad_RightY_K2Node_InputAxisKeyEvent_68 // (BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_QuestMapController(int32_t EntryPoint); // Function QuestMapController.QuestMapController_C.ExecuteUbergraph_QuestMapController // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
};

