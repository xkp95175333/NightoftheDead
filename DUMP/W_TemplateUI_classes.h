// WidgetBlueprintGeneratedClass W_TemplateUI.W_TemplateUI_C
// Size: 0x3f4 (Inherited: 0x260)
struct UW_TemplateUI_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UButton* Button_Apply; // 0x268(0x08)
	struct UButton* Button_Down; // 0x270(0x08)
	struct UButton* Button_Up; // 0x278(0x08)
	struct UImage* Image_L; // 0x280(0x08)
	struct UImage* Image_Over; // 0x288(0x08)
	struct UImage* Image_R; // 0x290(0x08)
	struct UImage* Image_SliderFocus; // 0x298(0x08)
	struct USizeBox* MySizeBox; // 0x2a0(0x08)
	struct UWidgetSwitcher* MySwitcher; // 0x2a8(0x08)
	struct UProgressBar* ProgressBar_UI; // 0x2b0(0x08)
	struct USlider* Slider_UI; // 0x2b8(0x08)
	struct UTextBlock* TextBlock_ActualChoice; // 0x2c0(0x08)
	struct UTextBlock* TextBlock_Apply; // 0x2c8(0x08)
	struct UTextBlock* TextBlock_SliderUI; // 0x2d0(0x08)
	struct UTextBlock* TextBlock_UIName; // 0x2d8(0x08)
	struct FText UIName; // 0x2e0(0x18)
	struct FText Description; // 0x2f8(0x18)
	enum class E_TemplateUI SettingName; // 0x310(0x01)
	enum class E_GraphicWidgetType Slider; // 0x311(0x01)
	char pad_312[0x2]; // 0x312(0x02)
	float SettingValue; // 0x314(0x04)
	float SliderValue; // 0x318(0x04)
	int32_t ButtonIndex; // 0x31c(0x04)
	struct TArray<struct FText> ButtonOptions; // 0x320(0x10)
	int32_t ButtonDefaultIndex; // 0x330(0x04)
	bool SliderNeedApply?; // 0x334(0x01)
	char pad_335[0x3]; // 0x335(0x03)
	float SliderDefaultValue(Percent); // 0x338(0x04)
	int32_t SliderMinFractionnalShow; // 0x33c(0x04)
	int32_t SliderMaxFractionnalShow; // 0x340(0x04)
	int32_t SliderMinFractionnalValue; // 0x344(0x04)
	int32_t SliderMaxFractionnalValue; // 0x348(0x04)
	float SliderMultiply; // 0x34c(0x04)
	struct UW_Options_C* OptionsRef; // 0x350(0x08)
	int32_t BackupButton; // 0x358(0x04)
	float BackupSlider; // 0x35c(0x04)
	float SliderValueMin; // 0x360(0x04)
	float SliderValueMax; // 0x364(0x04)
	bool AddSpace?; // 0x368(0x01)
	char pad_369[0x3]; // 0x369(0x03)
	float SpaceSize; // 0x36c(0x04)
	struct UHorizontalBoxSlot* MyLeft; // 0x370(0x08)
	bool IsHovered?; // 0x378(0x01)
	char pad_379[0x7]; // 0x379(0x07)
	struct FString MyTest; // 0x380(0x10)
	struct FLinearColor MouseEnterColor; // 0x390(0x10)
	struct FLinearColor MouseLeaveColor; // 0x3a0(0x10)
	bool MakeAnim?; // 0x3b0(0x01)
	char pad_3B1[0x3]; // 0x3b1(0x03)
	float ActualLeft; // 0x3b4(0x04)
	bool IsInEdit?; // 0x3b8(0x01)
	char pad_3B9[0x7]; // 0x3b9(0x07)
	struct FText Prefix; // 0x3c0(0x18)
	bool AffectedByDefault?; // 0x3d8(0x01)
	char pad_3D9[0x7]; // 0x3d9(0x07)
	struct TArray<struct FString> ButtonOptions_Lang; // 0x3e0(0x10)
	bool bShowTutorial; // 0x3f0(0x01)
	bool bCameraShake; // 0x3f1(0x01)
	bool bCloseUIOnAttacked; // 0x3f2(0x01)
	bool bGameKeyGuide; // 0x3f3(0x01)

	void CheckForMultiplayerButton(bool Continue?); // Function W_TemplateUI.W_TemplateUI_C.CheckForMultiplayerButton // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void MakeActionUI(); // Function W_TemplateUI.W_TemplateUI_C.MakeActionUI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	struct UWidget* CustomNavigation_Down(enum class EUINavigation Navigation); // Function W_TemplateUI.W_TemplateUI_C.CustomNavigation_Down // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	struct UWidget* CustomNavigation_Up(enum class EUINavigation Navigation); // Function W_TemplateUI.W_TemplateUI_C.CustomNavigation_Up // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	struct UWidget* CustomNavigation_Right(enum class EUINavigation Navigation); // Function W_TemplateUI.W_TemplateUI_C.CustomNavigation_Right // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	struct UWidget* CustomNavigation_Left(enum class EUINavigation Navigation); // Function W_TemplateUI.W_TemplateUI_C.CustomNavigation_Left // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ChangeColor(struct FSlateColor TitleColor, struct FLinearColor LAndRColor, struct FSlateColor ChoiceColor, struct FSlateColor ApplyColor, struct FLinearColor SliderColor, struct FLinearColor SliderHandleColor); // Function W_TemplateUI.W_TemplateUI_C.ChangeColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void CheckUIIsDefault(bool IsDefault?); // Function W_TemplateUI.W_TemplateUI_C.CheckUIIsDefault // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ConvertAndSetSliderValue(float Value); // Function W_TemplateUI.W_TemplateUI_C.ConvertAndSetSliderValue // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void SetSliderValue(float SliderValue); // Function W_TemplateUI.W_TemplateUI_C.SetSliderValue // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void PreConstruct(bool IsDesignTime); // Function W_TemplateUI.W_TemplateUI_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function W_TemplateUI.W_TemplateUI_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1395fe0
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function W_TemplateUI.W_TemplateUI_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1395fe0
	void MouseEnter(); // Function W_TemplateUI.W_TemplateUI_C.MouseEnter // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void MouseLeave(); // Function W_TemplateUI.W_TemplateUI_C.MouseLeave // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void MakeAnim(); // Function W_TemplateUI.W_TemplateUI_C.MakeAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Slider_Sensitivity_K2Node_ComponentBoundEvent_0_OnControllerCaptureBeginEvent__DelegateSignature(); // Function W_TemplateUI.W_TemplateUI_C.BndEvt__Slider_Sensitivity_K2Node_ComponentBoundEvent_0_OnControllerCaptureBeginEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Slider_Sensitivity_K2Node_ComponentBoundEvent_2_OnControllerCaptureEndEvent__DelegateSignature(); // Function W_TemplateUI.W_TemplateUI_C.BndEvt__Slider_Sensitivity_K2Node_ComponentBoundEvent_2_OnControllerCaptureEndEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void RestoreUI(); // Function W_TemplateUI.W_TemplateUI_C.RestoreUI // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void MakeBackupUI(); // Function W_TemplateUI.W_TemplateUI_C.MakeBackupUI // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ReloadBackupUI(); // Function W_TemplateUI.W_TemplateUI_C.ReloadBackupUI // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Construct(); // Function W_TemplateUI.W_TemplateUI_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Button_Apply_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function W_TemplateUI.W_TemplateUI_C.BndEvt__Button_Apply_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Slider_UI_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value); // Function W_TemplateUI.W_TemplateUI_C.BndEvt__Slider_UI_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Button_Down_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function W_TemplateUI.W_TemplateUI_C.BndEvt__Button_Down_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Button_Up_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function W_TemplateUI.W_TemplateUI_C.BndEvt__Button_Up_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void CheckForStyle(bool ShowStyle?); // Function W_TemplateUI.W_TemplateUI_C.CheckForStyle // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void SetButtonChange(); // Function W_TemplateUI.W_TemplateUI_C.SetButtonChange // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_W_TemplateUI(int32_t EntryPoint); // Function W_TemplateUI.W_TemplateUI_C.ExecuteUbergraph_W_TemplateUI // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
};

