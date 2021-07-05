// WidgetBlueprintGeneratedClass WBP_IngameSystemMenu.WBP_IngameSystemMenu_C
// Size: 0x358 (Inherited: 0x270)
struct UWBP_IngameSystemMenu_C : ULFSystemMenuWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct UButton* Button_Exit; // 0x278(0x08)
	struct UButton* Button_Option; // 0x280(0x08)
	struct UButton* Button_PlayerList; // 0x288(0x08)
	struct UButton* Button_QuickSave; // 0x290(0x08)
	struct UButton* Button_Resume; // 0x298(0x08)
	struct UButton* Button_Save; // 0x2a0(0x08)
	struct UButton* Button_ServerAdmin; // 0x2a8(0x08)
	struct UButton* Button_Team; // 0x2b0(0x08)
	struct UButton* Button_Title; // 0x2b8(0x08)
	struct UImage* Image; // 0x2c0(0x08)
	struct UImage* Image_2; // 0x2c8(0x08)
	struct UImage* Image_3; // 0x2d0(0x08)
	struct UImage* Image_44; // 0x2d8(0x08)
	struct USpacer* Spacer_Quicksave; // 0x2e0(0x08)
	struct USpacer* Spacer_Saveload; // 0x2e8(0x08)
	struct UTextBlock* TextBlock_115; // 0x2f0(0x08)
	struct UTextBlock* TxtExit; // 0x2f8(0x08)
	struct UTextBlock* TxtOption; // 0x300(0x08)
	struct UTextBlock* TxtPlayerList; // 0x308(0x08)
	struct UTextBlock* TxtQuicksave; // 0x310(0x08)
	struct UTextBlock* TxtResume; // 0x318(0x08)
	struct UTextBlock* TxtSave; // 0x320(0x08)
	struct UTextBlock* TxtServerAdmin; // 0x328(0x08)
	struct UTextBlock* TxtTeam; // 0x330(0x08)
	struct UTextBlock* TxtTitle; // 0x338(0x08)
	struct UVerticalBox* VerticalBox_Multi; // 0x340(0x08)
	struct UWBP_Line3px_C* WBP_Line3px_148; // 0x348(0x08)
	struct FName MainMenuLevel; // 0x350(0x08)

	bool Get_Button_Save_bIsEnabled_1(); // Function WBP_IngameSystemMenu.WBP_IngameSystemMenu_C.Get_Button_Save_bIsEnabled_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	bool Get_Button_QuickSave_bIsEnabled_1(); // Function WBP_IngameSystemMenu.WBP_IngameSystemMenu_C.Get_Button_QuickSave_bIsEnabled_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function WBP_IngameSystemMenu.WBP_IngameSystemMenu_C.OnKeyDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	struct FText GetText_1(); // Function WBP_IngameSystemMenu.WBP_IngameSystemMenu_C.GetText_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	void OnFailure_F16060084FB1F52D00B0D59F4B97EC8B(); // Function WBP_IngameSystemMenu.WBP_IngameSystemMenu_C.OnFailure_F16060084FB1F52D00B0D59F4B97EC8B // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnSuccess_F16060084FB1F52D00B0D59F4B97EC8B(); // Function WBP_IngameSystemMenu.WBP_IngameSystemMenu_C.OnSuccess_F16060084FB1F52D00B0D59F4B97EC8B // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnFailure_FDBC368C4099F234F0DDC79681D5CB75(); // Function WBP_IngameSystemMenu.WBP_IngameSystemMenu_C.OnFailure_FDBC368C4099F234F0DDC79681D5CB75 // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnSuccess_FDBC368C4099F234F0DDC79681D5CB75(); // Function WBP_IngameSystemMenu.WBP_IngameSystemMenu_C.OnSuccess_FDBC368C4099F234F0DDC79681D5CB75 // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnFailure_A0B9644345A327753C844D83B6C1CE37(); // Function WBP_IngameSystemMenu.WBP_IngameSystemMenu_C.OnFailure_A0B9644345A327753C844D83B6C1CE37 // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnSuccess_A0B9644345A327753C844D83B6C1CE37(); // Function WBP_IngameSystemMenu.WBP_IngameSystemMenu_C.OnSuccess_A0B9644345A327753C844D83B6C1CE37 // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Button_Exit_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature(); // Function WBP_IngameSystemMenu.WBP_IngameSystemMenu_C.BndEvt__Button_Exit_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void OnReturn(); // Function WBP_IngameSystemMenu.WBP_IngameSystemMenu_C.OnReturn // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void OnExit(); // Function WBP_IngameSystemMenu.WBP_IngameSystemMenu_C.OnExit // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Button_QuickSave_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature(); // Function WBP_IngameSystemMenu.WBP_IngameSystemMenu_C.BndEvt__Button_QuickSave_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Button_Resume_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature(); // Function WBP_IngameSystemMenu.WBP_IngameSystemMenu_C.BndEvt__Button_Resume_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Button_Resume_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature(); // Function WBP_IngameSystemMenu.WBP_IngameSystemMenu_C.BndEvt__Button_Resume_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Button_Title_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function WBP_IngameSystemMenu.WBP_IngameSystemMenu_C.BndEvt__Button_Title_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Button_QuickSave_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature(); // Function WBP_IngameSystemMenu.WBP_IngameSystemMenu_C.BndEvt__Button_QuickSave_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Button_QuickSave_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature(); // Function WBP_IngameSystemMenu.WBP_IngameSystemMenu_C.BndEvt__Button_QuickSave_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Button_Save_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature(); // Function WBP_IngameSystemMenu.WBP_IngameSystemMenu_C.BndEvt__Button_Save_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Button_Save_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature(); // Function WBP_IngameSystemMenu.WBP_IngameSystemMenu_C.BndEvt__Button_Save_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Button_Option_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function WBP_IngameSystemMenu.WBP_IngameSystemMenu_C.BndEvt__Button_Option_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Button_Option_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature(); // Function WBP_IngameSystemMenu.WBP_IngameSystemMenu_C.BndEvt__Button_Option_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Button_Option_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature(); // Function WBP_IngameSystemMenu.WBP_IngameSystemMenu_C.BndEvt__Button_Option_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Button_Title_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature(); // Function WBP_IngameSystemMenu.WBP_IngameSystemMenu_C.BndEvt__Button_Title_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Button_Title_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature(); // Function WBP_IngameSystemMenu.WBP_IngameSystemMenu_C.BndEvt__Button_Title_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Button_Save_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function WBP_IngameSystemMenu.WBP_IngameSystemMenu_C.BndEvt__Button_Save_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Button_Exit_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature(); // Function WBP_IngameSystemMenu.WBP_IngameSystemMenu_C.BndEvt__Button_Exit_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Button_Exit_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature(); // Function WBP_IngameSystemMenu.WBP_IngameSystemMenu_C.BndEvt__Button_Exit_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Button_PlayerList_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature(); // Function WBP_IngameSystemMenu.WBP_IngameSystemMenu_C.BndEvt__Button_PlayerList_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Button_PlayerList_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature(); // Function WBP_IngameSystemMenu.WBP_IngameSystemMenu_C.BndEvt__Button_PlayerList_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Button_ServerAdmin_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature(); // Function WBP_IngameSystemMenu.WBP_IngameSystemMenu_C.BndEvt__Button_ServerAdmin_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Button_ServerAdmin_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature(); // Function WBP_IngameSystemMenu.WBP_IngameSystemMenu_C.BndEvt__Button_ServerAdmin_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Button_Resume_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_IngameSystemMenu.WBP_IngameSystemMenu_C.BndEvt__Button_Resume_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void Construct(); // Function WBP_IngameSystemMenu.WBP_IngameSystemMenu_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Button_PlayerList_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature(); // Function WBP_IngameSystemMenu.WBP_IngameSystemMenu_C.BndEvt__Button_PlayerList_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Button_Team_K2Node_ComponentBoundEvent_29_OnButtonHoverEvent__DelegateSignature(); // Function WBP_IngameSystemMenu.WBP_IngameSystemMenu_C.BndEvt__Button_Team_K2Node_ComponentBoundEvent_29_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Button_Team_K2Node_ComponentBoundEvent_30_OnButtonHoverEvent__DelegateSignature(); // Function WBP_IngameSystemMenu.WBP_IngameSystemMenu_C.BndEvt__Button_Team_K2Node_ComponentBoundEvent_30_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Button_Team_K2Node_ComponentBoundEvent_31_OnButtonClickedEvent__DelegateSignature(); // Function WBP_IngameSystemMenu.WBP_IngameSystemMenu_C.BndEvt__Button_Team_K2Node_ComponentBoundEvent_31_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_WBP_IngameSystemMenu(int32_t EntryPoint); // Function WBP_IngameSystemMenu.WBP_IngameSystemMenu_C.ExecuteUbergraph_WBP_IngameSystemMenu // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
};

