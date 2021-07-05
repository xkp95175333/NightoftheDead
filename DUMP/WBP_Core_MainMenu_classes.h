// WidgetBlueprintGeneratedClass WBP_Core_MainMenu.WBP_Core_MainMenu_C
// Size: 0xcc1 (Inherited: 0x260)
struct UWBP_Core_MainMenu_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UButton* Button_BackNewGame; // 0x268(0x08)
	struct UButton* Button_Easy; // 0x270(0x08)
	struct UButton* Button_Hard; // 0x278(0x08)
	struct UWBP_BtnLarge_C* Button_Host_Load; // 0x280(0x08)
	struct UWBP_BtnLarge_C* Button_Host_NewGame; // 0x288(0x08)
	struct UButton* Button_Normal; // 0x290(0x08)
	struct UScaleBox* MyScaleBox; // 0x298(0x08)
	struct UWidgetSwitcher* MySwitcher; // 0x2a0(0x08)
	struct UOverlay* Overlay_LoadGame; // 0x2a8(0x08)
	struct UOverlay* Overlay_NewGame; // 0x2b0(0x08)
	struct UScrollBox* ScrollBox_LoadGame; // 0x2b8(0x08)
	struct USizeBox* SizeBox_DifficultyText; // 0x2c0(0x08)
	struct UTextBlock* TextBlock_DifficultyTitle; // 0x2c8(0x08)
	struct UVerticalBox* VerticalBox_LoadGame; // 0x2d0(0x08)
	struct UVerticalBox* VerticalBox_MultiLoadNew; // 0x2d8(0x08)
	struct UVerticalBox* VerticalBox_NavLoad; // 0x2e0(0x08)
	struct UVerticalBox* VerticalBox_NavNewGame; // 0x2e8(0x08)
	struct UW_Confirmation_C* W_Confirmation; // 0x2f0(0x08)
	struct UW_TemplateTitle_C* W_TemplateTitle; // 0x2f8(0x08)
	struct UWBP_BtnLarge_C* WBP_BtnLarge_BackLoad; // 0x300(0x08)
	struct UWBP_Main_Single_C* WBP_Main_Single; // 0x308(0x08)
	struct UWBP_Main_Multi_C* WBP_MainMenu_Multiplayer; // 0x310(0x08)
	struct UWBP_Title_LoadMenu_C* WBP_Title_LoadMenu; // 0x318(0x08)
	struct UWBP_Wrapper_MainMenu_Background_C* WBP_Wrapper_MainMenu_Background; // 0x320(0x08)
	struct UWBP_Wrapper_MainMenu_MainNav_C* WBP_Wrapper_MainMenu_MainNav; // 0x328(0x08)
	struct UW_Options_C* W_OptionsRef; // 0x330(0x08)
	struct APlayerController* ControllerRef; // 0x338(0x08)
	bool OverrideColor?; // 0x340(0x01)
	char pad_341[0x3]; // 0x341(0x03)
	struct FLinearColor Color_Hovered; // 0x344(0x10)
	struct FLinearColor Color_Unhovered; // 0x354(0x10)
	bool PauseTimer?; // 0x364(0x01)
	enum class ESlateVisibility BackgroundVisibilty; // 0x365(0x01)
	char pad_366[0x2]; // 0x366(0x02)
	float BackgroundOpacity; // 0x368(0x04)
	char pad_36C[0x4]; // 0x36c(0x04)
	struct UTexture2D* BackgroundImage; // 0x370(0x08)
	float BackgroundBlackOpacity; // 0x378(0x04)
	float BackgroundBlur; // 0x37c(0x04)
	struct UTexture2D* BackgroundTestImage; // 0x380(0x08)
	enum class ESlateVisibility BackgroundSmokeVisibility; // 0x388(0x01)
	char pad_389[0x3]; // 0x389(0x03)
	struct FLinearColor BackgroundSmokeColor; // 0x38c(0x10)
	struct FLinearColor Back_Unhovered; // 0x39c(0x10)
	struct FLinearColor Back_Hovered; // 0x3ac(0x10)
	char pad_3BC[0x4]; // 0x3bc(0x04)
	struct FSlateColor Color_Title; // 0x3c0(0x28)
	float InterfaceScale; // 0x3e8(0x04)
	enum class E_MainMenu ActualOn; // 0x3ec(0x01)
	char pad_3ED[0x3]; // 0x3ed(0x03)
	float AnimSpeed; // 0x3f0(0x04)
	enum class E_MainMenu BeforeOn; // 0x3f4(0x01)
	bool HideJoinByIP?; // 0x3f5(0x01)
	bool ShowMultiButton?; // 0x3f6(0x01)
	bool ShowSoloButton?; // 0x3f7(0x01)
	bool DifficultySelect?; // 0x3f8(0x01)
	enum class E_Difficulty DefaultDifficulty; // 0x3f9(0x01)
	bool ShowDifficultyTooltips?; // 0x3fa(0x01)
	char pad_3FB[0x5]; // 0x3fb(0x05)
	struct TArray<struct FText> DifficultyTooltipsText; // 0x400(0x10)
	struct UW_LoadGameButton_C* LoadGameRef; // 0x410(0x08)
	struct UBP_MySaveGame_C* ContinueGame; // 0x418(0x08)
	struct UTexture2D* Logo; // 0x420(0x08)
	float LogoSizeHeight; // 0x428(0x04)
	char pad_42C[0x4]; // 0x42c(0x04)
	struct FEditableTextBoxStyle Style; // 0x430(0x7f8)
	struct FVector2D LastMousePosition; // 0xc28(0x08)
	bool ShowStyle?; // 0xc30(0x01)
	char pad_C31[0x3]; // 0xc31(0x03)
	float LogoSizeWidth; // 0xc34(0x04)
	struct FSlateFontInfo GameNameFont; // 0xc38(0x58)
	struct FSlateColor GameNameColor; // 0xc90(0x28)
	struct FName DefaultMultLevel; // 0xcb8(0x08)
	bool bStartFlag; // 0xcc0(0x01)

	void GetAnimSpeed(float AnimSpeed); // Function WBP_Core_MainMenu.WBP_Core_MainMenu_C.GetAnimSpeed // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_Core_MainMenu.WBP_Core_MainMenu_C.OnMouseButtonUp // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function WBP_Core_MainMenu.WBP_Core_MainMenu_C.OnKeyUp // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void CheckHasFocus(); // Function WBP_Core_MainMenu.WBP_Core_MainMenu_C.CheckHasFocus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void MyInstanceLaunchSolo(struct UBP_MySaveGame_C* MyGameSave); // Function WBP_Core_MainMenu.WBP_Core_MainMenu_C.MyInstanceLaunchSolo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void MakeLoadGame(); // Function WBP_Core_MainMenu.WBP_Core_MainMenu_C.MakeLoadGame // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void CreateNewGame(enum class E_Difficulty Difficulty); // Function WBP_Core_MainMenu.WBP_Core_MainMenu_C.CreateNewGame // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void UpdateDifficultyToolTips(bool Hovered?, enum class E_Difficulty Difficulty); // Function WBP_Core_MainMenu.WBP_Core_MainMenu_C.UpdateDifficultyToolTips // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Construct(); // Function WBP_Core_MainMenu.WBP_Core_MainMenu_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void PreConstruct(bool IsDesignTime); // Function WBP_Core_MainMenu.WBP_Core_MainMenu_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Button_Back_K2Node_ComponentBoundEvent_391_OnButtonClickedEvent__DelegateSignature(); // Function WBP_Core_MainMenu.WBP_Core_MainMenu_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_391_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Button_Back_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function WBP_Core_MainMenu.WBP_Core_MainMenu_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Button_Back_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function WBP_Core_MainMenu.WBP_Core_MainMenu_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Button_Easy_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function WBP_Core_MainMenu.WBP_Core_MainMenu_C.BndEvt__Button_Easy_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Button_Easy_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function WBP_Core_MainMenu.WBP_Core_MainMenu_C.BndEvt__Button_Easy_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Button_Medium_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // Function WBP_Core_MainMenu.WBP_Core_MainMenu_C.BndEvt__Button_Medium_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Button_Medium_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature(); // Function WBP_Core_MainMenu.WBP_Core_MainMenu_C.BndEvt__Button_Medium_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Button_Hard_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature(); // Function WBP_Core_MainMenu.WBP_Core_MainMenu_C.BndEvt__Button_Hard_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Button_Hard_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature(); // Function WBP_Core_MainMenu.WBP_Core_MainMenu_C.BndEvt__Button_Hard_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void AnimChange(); // Function WBP_Core_MainMenu.WBP_Core_MainMenu_C.AnimChange // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Button_Easy_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_Core_MainMenu.WBP_Core_MainMenu_C.BndEvt__Button_Easy_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Button_Medium_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function WBP_Core_MainMenu.WBP_Core_MainMenu_C.BndEvt__Button_Medium_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Button_Hard_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function WBP_Core_MainMenu.WBP_Core_MainMenu_C.BndEvt__Button_Hard_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void CheckForStyle(); // Function WBP_Core_MainMenu.WBP_Core_MainMenu_C.CheckForStyle // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnPressAnyKey(); // Function WBP_Core_MainMenu.WBP_Core_MainMenu_C.OnPressAnyKey // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnClicked_NewGame(); // Function WBP_Core_MainMenu.WBP_Core_MainMenu_C.OnClicked_NewGame // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnClicked_Continue(); // Function WBP_Core_MainMenu.WBP_Core_MainMenu_C.OnClicked_Continue // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnClicked_Load(); // Function WBP_Core_MainMenu.WBP_Core_MainMenu_C.OnClicked_Load // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnClicked_Multiplayer(); // Function WBP_Core_MainMenu.WBP_Core_MainMenu_C.OnClicked_Multiplayer // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnClicked_Settings(); // Function WBP_Core_MainMenu.WBP_Core_MainMenu_C.OnClicked_Settings // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnClicked_Credits(); // Function WBP_Core_MainMenu.WBP_Core_MainMenu_C.OnClicked_Credits // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnClicked_Exit(); // Function WBP_Core_MainMenu.WBP_Core_MainMenu_C.OnClicked_Exit // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnSaveDeleted_Event_1(); // Function WBP_Core_MainMenu.WBP_Core_MainMenu_C.OnSaveDeleted_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void BackLoad(); // Function WBP_Core_MainMenu.WBP_Core_MainMenu_C.BackLoad // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnClicked_MultiBack(); // Function WBP_Core_MainMenu.WBP_Core_MainMenu_C.OnClicked_MultiBack // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Refresh Focus(); // Function WBP_Core_MainMenu.WBP_Core_MainMenu_C.Refresh Focus // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void HideBackground(); // Function WBP_Core_MainMenu.WBP_Core_MainMenu_C.HideBackground // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ShowBackground(); // Function WBP_Core_MainMenu.WBP_Core_MainMenu_C.ShowBackground // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_Core_MainMenu.WBP_Core_MainMenu_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void OnClicked_Event_1(); // Function WBP_Core_MainMenu.WBP_Core_MainMenu_C.OnClicked_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnClicked_Singleplayer(); // Function WBP_Core_MainMenu.WBP_Core_MainMenu_C.OnClicked_Singleplayer // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnClicked_Single_Back(); // Function WBP_Core_MainMenu.WBP_Core_MainMenu_C.OnClicked_Single_Back // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_WBP_Core_MainMenu(int32_t EntryPoint); // Function WBP_Core_MainMenu.WBP_Core_MainMenu_C.ExecuteUbergraph_WBP_Core_MainMenu // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
};

