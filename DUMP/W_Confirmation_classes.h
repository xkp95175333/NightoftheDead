// WidgetBlueprintGeneratedClass W_Confirmation.W_Confirmation_C
// Size: 0x2d0 (Inherited: 0x260)
struct UW_Confirmation_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UButton* Button_No; // 0x268(0x08)
	struct UButton* Button_Yes; // 0x270(0x08)
	struct UImage* Image_NoFocus; // 0x278(0x08)
	struct UImage* Image_YesFocus; // 0x280(0x08)
	struct UProgressBar* ProgressBar_Seconde; // 0x288(0x08)
	struct UTextBlock* TextBlock_Message; // 0x290(0x08)
	struct UTextBlock* TextBlock_Seconds; // 0x298(0x08)
	struct UTextBlock* TextBlock_Title; // 0x2a0(0x08)
	struct UWBP_Confirmation_C* WBP_Confirmation; // 0x2a8(0x08)
	enum class E_Comfirmation ConfirmationFor; // 0x2b0(0x01)
	bool CancelAnim?; // 0x2b1(0x01)
	char pad_2B2[0x2]; // 0x2b2(0x02)
	float TimeMake; // 0x2b4(0x04)
	float ConfirmationTime; // 0x2b8(0x04)
	char pad_2BC[0x4]; // 0x2bc(0x04)
	struct UW_Options_C* OptionsRef; // 0x2c0(0x08)
	struct UWBP_Core_MainMenu_C* MainMenuRef; // 0x2c8(0x08)

	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function W_Confirmation.W_Confirmation_C.OnMouseButtonUp // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	struct UWidget* CustomNavigation_Right(enum class EUINavigation Navigation); // Function W_Confirmation.W_Confirmation_C.CustomNavigation_Right // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	struct UWidget* CustomNavigation_Left(enum class EUINavigation Navigation); // Function W_Confirmation.W_Confirmation_C.CustomNavigation_Left // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnFailure_9E20E26A458E94E603BACCBDDD8B2B9B(); // Function W_Confirmation.W_Confirmation_C.OnFailure_9E20E26A458E94E603BACCBDDD8B2B9B // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnSuccess_9E20E26A458E94E603BACCBDDD8B2B9B(); // Function W_Confirmation.W_Confirmation_C.OnSuccess_9E20E26A458E94E603BACCBDDD8B2B9B // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void UpdateConfirmation(struct FText Title, enum class E_Comfirmation ConfirmationFor); // Function W_Confirmation.W_Confirmation_C.UpdateConfirmation // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Button_No_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function W_Confirmation.W_Confirmation_C.BndEvt__Button_No_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Button_Yes_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function W_Confirmation.W_Confirmation_C.BndEvt__Button_Yes_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void Construct(); // Function W_Confirmation.W_Confirmation_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void RefreshFocus(); // Function W_Confirmation.W_Confirmation_C.RefreshFocus // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void No(); // Function W_Confirmation.W_Confirmation_C.No // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function W_Confirmation.W_Confirmation_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void BindConfirmButtons(); // Function W_Confirmation.W_Confirmation_C.BindConfirmButtons // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnClicked_Confirm(); // Function W_Confirmation.W_Confirmation_C.OnClicked_Confirm // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnClicked_Cancel(); // Function W_Confirmation.W_Confirmation_C.OnClicked_Cancel // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_W_Confirmation(int32_t EntryPoint); // Function W_Confirmation.W_Confirmation_C.ExecuteUbergraph_W_Confirmation // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
};

