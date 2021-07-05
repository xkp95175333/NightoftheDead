// WidgetBlueprintGeneratedClass W_LoadGameButton.W_LoadGameButton_C
// Size: 0x2fc (Inherited: 0x260)
struct UW_LoadGameButton_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UButton* Button_Delete; // 0x268(0x08)
	struct UButton* Button_Load; // 0x270(0x08)
	struct UImage* Image_Over; // 0x278(0x08)
	struct USizeBox* MySizeBox; // 0x280(0x08)
	struct UTextBlock* TextBlock_Date; // 0x288(0x08)
	struct UTextBlock* TextBlock_Delete; // 0x290(0x08)
	struct UTextBlock* TextBlock_Difficulty; // 0x298(0x08)
	struct UTextBlock* TextBlock_GameName; // 0x2a0(0x08)
	struct UTextBlock* TextBlock_TimePlayed; // 0x2a8(0x08)
	struct UBP_MySaveGame_C* gameData; // 0x2b0(0x08)
	bool MakeAnim?; // 0x2b8(0x01)
	char pad_2B9[0x3]; // 0x2b9(0x03)
	float ActualLeft; // 0x2bc(0x04)
	struct UHorizontalBoxSlot* MyLeft; // 0x2c0(0x08)
	bool IsHovered?; // 0x2c8(0x01)
	char pad_2C9[0x3]; // 0x2c9(0x03)
	struct FLinearColor MouseEnterColor; // 0x2cc(0x10)
	struct FLinearColor MouseLeaveColor; // 0x2dc(0x10)
	char pad_2EC[0x4]; // 0x2ec(0x04)
	struct UWBP_Core_MainMenu_C* MainMenuRef; // 0x2f0(0x08)
	int32_t Click; // 0x2f8(0x04)

	void PreConstruct(bool IsDesignTime); // Function W_LoadGameButton.W_LoadGameButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void MakeAnim(); // Function W_LoadGameButton.W_LoadGameButton_C.MakeAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function W_LoadGameButton.W_LoadGameButton_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1395fe0
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function W_LoadGameButton.W_LoadGameButton_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1395fe0
	void MouseEnter(); // Function W_LoadGameButton.W_LoadGameButton_C.MouseEnter // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void MouseLeave(); // Function W_LoadGameButton.W_LoadGameButton_C.MouseLeave // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Button_Load_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature(); // Function W_LoadGameButton.W_LoadGameButton_C.BndEvt__Button_Load_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Button_Delete_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function W_LoadGameButton.W_LoadGameButton_C.BndEvt__Button_Delete_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Button_Delete_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // Function W_LoadGameButton.W_LoadGameButton_C.BndEvt__Button_Delete_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Button_Delete_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature(); // Function W_LoadGameButton.W_LoadGameButton_C.BndEvt__Button_Delete_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void CheckForStyle(bool ShowStyle?); // Function W_LoadGameButton.W_LoadGameButton_C.CheckForStyle // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_W_LoadGameButton(int32_t EntryPoint); // Function W_LoadGameButton.W_LoadGameButton_C.ExecuteUbergraph_W_LoadGameButton // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
};

