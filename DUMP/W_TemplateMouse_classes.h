// WidgetBlueprintGeneratedClass W_TemplateMouse.W_TemplateMouse_C
// Size: 0x3a2 (Inherited: 0x260)
struct UW_TemplateMouse_C : UUserWidget {
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
	struct UProgressBar* ProgressBar_Sensitivity; // 0x2b0(0x08)
	struct USlider* Slider_Sensitivity; // 0x2b8(0x08)
	struct UTextBlock* TextBlock_ActualChoice; // 0x2c0(0x08)
	struct UTextBlock* TextBlock_Apply; // 0x2c8(0x08)
	struct UTextBlock* TextBlock_Name; // 0x2d0(0x08)
	struct UTextBlock* TextBlock_Sensitivity; // 0x2d8(0x08)
	struct FText MouseName; // 0x2e0(0x18)
	struct FText Description; // 0x2f8(0x18)
	enum class E_GraphicWidgetType Slider; // 0x310(0x01)
	char pad_311[0x3]; // 0x311(0x03)
	struct FLinearColor MouseEnterColor; // 0x314(0x10)
	struct FLinearColor MouseLeaveColor; // 0x324(0x10)
	float SensitivityValue; // 0x334(0x04)
	int32_t ButtonIndex; // 0x338(0x04)
	bool SliderNeedApply?; // 0x33c(0x01)
	char pad_33D[0x3]; // 0x33d(0x03)
	float SliderDefaultValue(Percent); // 0x340(0x04)
	char pad_344[0x4]; // 0x344(0x04)
	struct TArray<struct FText> ButtonText; // 0x348(0x10)
	int32_t ButtonDefaultIndex; // 0x358(0x04)
	int32_t SliderMinFractionnalShow; // 0x35c(0x04)
	int32_t SliderMaxFractionnalShow; // 0x360(0x04)
	int32_t SliderMinFractionnalValue; // 0x364(0x04)
	int32_t SliderMaxFractionnalValue; // 0x368(0x04)
	float SliderMultiply; // 0x36c(0x04)
	struct UW_Options_C* OptionsRef; // 0x370(0x08)
	int32_t BackupButton; // 0x378(0x04)
	float BackupSlider; // 0x37c(0x04)
	float SliderValueMin; // 0x380(0x04)
	float SliderValueMax; // 0x384(0x04)
	bool AddSpace?; // 0x388(0x01)
	char pad_389[0x3]; // 0x389(0x03)
	float SpaceSize; // 0x38c(0x04)
	bool MakeAnim?; // 0x390(0x01)
	char pad_391[0x3]; // 0x391(0x03)
	float ActualLeft; // 0x394(0x04)
	struct UHorizontalBoxSlot* MyLeft; // 0x398(0x08)
	bool IsHovered?; // 0x3a0(0x01)
	bool IsInEdit?; // 0x3a1(0x01)

	struct UWidget* CustomNavigation_Down(enum class EUINavigation Navigation); // Function W_TemplateMouse.W_TemplateMouse_C.CustomNavigation_Down // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	struct UWidget* CustomNavigation_Up(enum class EUINavigation Navigation); // Function W_TemplateMouse.W_TemplateMouse_C.CustomNavigation_Up // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	struct UWidget* CustomNavigation_Right(enum class EUINavigation Navigation); // Function W_TemplateMouse.W_TemplateMouse_C.CustomNavigation_Right // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	struct UWidget* CustomNavigation_Left(enum class EUINavigation Navigation); // Function W_TemplateMouse.W_TemplateMouse_C.CustomNavigation_Left // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ChangeColor(struct FSlateColor TitleColor, struct FLinearColor LAndRColor, struct FSlateColor ChoiceColor, struct FSlateColor ApplyColor, struct FLinearColor SliderColor, struct FLinearColor SliderHandleColor); // Function W_TemplateMouse.W_TemplateMouse_C.ChangeColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void CheckMouseIsDefault(bool IsDefault?); // Function W_TemplateMouse.W_TemplateMouse_C.CheckMouseIsDefault // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ConvertAndSetSliderValue(float Value); // Function W_TemplateMouse.W_TemplateMouse_C.ConvertAndSetSliderValue // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void SetSliderValue(float SliderValue); // Function W_TemplateMouse.W_TemplateMouse_C.SetSliderValue // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void RestoreMouse(); // Function W_TemplateMouse.W_TemplateMouse_C.RestoreMouse // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ReloadBackupMouse(); // Function W_TemplateMouse.W_TemplateMouse_C.ReloadBackupMouse // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void MakeBackupMouse(); // Function W_TemplateMouse.W_TemplateMouse_C.MakeBackupMouse // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void PreConstruct(bool IsDesignTime); // Function W_TemplateMouse.W_TemplateMouse_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void Construct(); // Function W_TemplateMouse.W_TemplateMouse_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Button_Down_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature(); // Function W_TemplateMouse.W_TemplateMouse_C.BndEvt__Button_Down_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Button_Up_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature(); // Function W_TemplateMouse.W_TemplateMouse_C.BndEvt__Button_Up_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Button_Apply_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function W_TemplateMouse.W_TemplateMouse_C.BndEvt__Button_Apply_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Slider_Sensitivity_K2Node_ComponentBoundEvent_6_OnFloatValueChangedEvent__DelegateSignature(float Value); // Function W_TemplateMouse.W_TemplateMouse_C.BndEvt__Slider_Sensitivity_K2Node_ComponentBoundEvent_6_OnFloatValueChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function W_TemplateMouse.W_TemplateMouse_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1395fe0
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function W_TemplateMouse.W_TemplateMouse_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1395fe0
	void MouseEnter(); // Function W_TemplateMouse.W_TemplateMouse_C.MouseEnter // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void MouseLeave(); // Function W_TemplateMouse.W_TemplateMouse_C.MouseLeave // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void MakeAnim(); // Function W_TemplateMouse.W_TemplateMouse_C.MakeAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Slider_Sensitivity_K2Node_ComponentBoundEvent_0_OnControllerCaptureBeginEvent__DelegateSignature(); // Function W_TemplateMouse.W_TemplateMouse_C.BndEvt__Slider_Sensitivity_K2Node_ComponentBoundEvent_0_OnControllerCaptureBeginEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Slider_Sensitivity_K2Node_ComponentBoundEvent_2_OnControllerCaptureEndEvent__DelegateSignature(); // Function W_TemplateMouse.W_TemplateMouse_C.BndEvt__Slider_Sensitivity_K2Node_ComponentBoundEvent_2_OnControllerCaptureEndEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void CheckForStyle(bool ShowStyle?); // Function W_TemplateMouse.W_TemplateMouse_C.CheckForStyle // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_W_TemplateMouse(int32_t EntryPoint); // Function W_TemplateMouse.W_TemplateMouse_C.ExecuteUbergraph_W_TemplateMouse // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
};

