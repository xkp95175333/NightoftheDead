// WidgetBlueprintGeneratedClass W_TemplateGraphic.W_TemplateGraphic_C
// Size: 0x404 (Inherited: 0x260)
struct UW_TemplateGraphic_C : UUserWidget {
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
	struct UProgressBar* ProgressBar_Graphic; // 0x2b0(0x08)
	struct USlider* Slider_Graphic; // 0x2b8(0x08)
	struct UTextBlock* TextBlock_ActualGraphic; // 0x2c0(0x08)
	struct UTextBlock* TextBlock_Apply; // 0x2c8(0x08)
	struct UTextBlock* TextBlock_GraphicName; // 0x2d0(0x08)
	struct UTextBlock* TextBlock_Slider; // 0x2d8(0x08)
	bool MakeAnim?; // 0x2e0(0x01)
	char pad_2E1[0x3]; // 0x2e1(0x03)
	float ActualLeft; // 0x2e4(0x04)
	struct UHorizontalBoxSlot* MyLeft; // 0x2e8(0x08)
	bool ByUser?; // 0x2f0(0x01)
	char pad_2F1[0x3]; // 0x2f1(0x03)
	float SliderValue; // 0x2f4(0x04)
	int32_t ButtonIndex; // 0x2f8(0x04)
	char pad_2FC[0x4]; // 0x2fc(0x04)
	struct FString MyTest; // 0x300(0x10)
	struct FLinearColor MouseEnterColor; // 0x310(0x10)
	struct FLinearColor MouseLeaveColor; // 0x320(0x10)
	bool IsHovered?; // 0x330(0x01)
	char pad_331[0x7]; // 0x331(0x07)
	struct UW_Options_C* OptionsRef; // 0x338(0x08)
	bool AffectedByGlobalSetting?; // 0x340(0x01)
	char pad_341[0x7]; // 0x341(0x07)
	struct FText GraphicName; // 0x348(0x18)
	struct FText Description; // 0x360(0x18)
	enum class E_TemplateGraphic SettingName; // 0x378(0x01)
	enum class E_GraphicCommandeType CommandType; // 0x379(0x01)
	enum class E_GraphicWidgetType Slider; // 0x37a(0x01)
	bool IsInEdit?; // 0x37b(0x01)
	char pad_37C[0x4]; // 0x37c(0x04)
	struct TArray<struct FText> ButtonOptions; // 0x380(0x10)
	int32_t SliderMinFractionnalShow; // 0x390(0x04)
	int32_t SliderMaxFractionnalShow; // 0x394(0x04)
	int32_t SliderMinFractionnalCommand; // 0x398(0x04)
	int32_t SliderMaxFractionnalCommand; // 0x39c(0x04)
	float SliderMultiply; // 0x3a0(0x04)
	bool SliderNeedApply?; // 0x3a4(0x01)
	char pad_3A5[0x3]; // 0x3a5(0x03)
	float SliderDefaultValue(Percent); // 0x3a8(0x04)
	char pad_3AC[0x4]; // 0x3ac(0x04)
	struct FString SliderCommand; // 0x3b0(0x10)
	struct FText Prefix; // 0x3c0(0x18)
	float SliderValueMin; // 0x3d8(0x04)
	float SliderValueMax; // 0x3dc(0x04)
	struct TArray<struct FS_ButtonCommandes> ButtonCommands; // 0x3e0(0x10)
	int32_t ButtonDefaultIndex; // 0x3f0(0x04)
	int32_t BackupButton; // 0x3f4(0x04)
	float BackupSlider; // 0x3f8(0x04)
	bool EnableLink?; // 0x3fc(0x01)
	enum class E_TemplateGraphic SettingLinkWith; // 0x3fd(0x01)
	bool AddSpace?; // 0x3fe(0x01)
	char pad_3FF[0x1]; // 0x3ff(0x01)
	float SpaceSize; // 0x400(0x04)

	void CallApplySettings(bool Wait?); // Function W_TemplateGraphic.W_TemplateGraphic_C.CallApplySettings // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	struct UWidget* CustomNavigation_Down(enum class EUINavigation Navigation); // Function W_TemplateGraphic.W_TemplateGraphic_C.CustomNavigation_Down // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	struct UWidget* CustomNavigation_Up(); // Function W_TemplateGraphic.W_TemplateGraphic_C.CustomNavigation_Up // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	struct UWidget* CustomNavigation_Right(enum class EUINavigation Navigation); // Function W_TemplateGraphic.W_TemplateGraphic_C.CustomNavigation_Right // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	struct UWidget* CustomNavigation_Left(enum class EUINavigation Navigation); // Function W_TemplateGraphic.W_TemplateGraphic_C.CustomNavigation_Left // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ChangeColor(struct FSlateColor TitleColor, struct FLinearColor LAndRColor, struct FSlateColor ChoiceColor, struct FSlateColor ApplyColor, struct FLinearColor SliderColor, struct FLinearColor SliderHandleColor); // Function W_TemplateGraphic.W_TemplateGraphic_C.ChangeColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void CheckGraphicIsDefault(bool IsDefault?); // Function W_TemplateGraphic.W_TemplateGraphic_C.CheckGraphicIsDefault // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ApplyGraphicSetting(); // Function W_TemplateGraphic.W_TemplateGraphic_C.ApplyGraphicSetting // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ConvertAndSetSliderValue(float Value); // Function W_TemplateGraphic.W_TemplateGraphic_C.ConvertAndSetSliderValue // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void SetSliderValue(float Value); // Function W_TemplateGraphic.W_TemplateGraphic_C.SetSliderValue // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function W_TemplateGraphic.W_TemplateGraphic_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1395fe0
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function W_TemplateGraphic.W_TemplateGraphic_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Button_Apply_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // Function W_TemplateGraphic.W_TemplateGraphic_C.BndEvt__Button_Apply_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Button_Apply_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature(); // Function W_TemplateGraphic.W_TemplateGraphic_C.BndEvt__Button_Apply_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Button_Down_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature(); // Function W_TemplateGraphic.W_TemplateGraphic_C.BndEvt__Button_Down_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Button_Up_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature(); // Function W_TemplateGraphic.W_TemplateGraphic_C.BndEvt__Button_Up_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Button_Down_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature(); // Function W_TemplateGraphic.W_TemplateGraphic_C.BndEvt__Button_Down_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Button_Up_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature(); // Function W_TemplateGraphic.W_TemplateGraphic_C.BndEvt__Button_Up_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void ApplyLinked(); // Function W_TemplateGraphic.W_TemplateGraphic_C.ApplyLinked // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void MakeAnim(); // Function W_TemplateGraphic.W_TemplateGraphic_C.MakeAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void MouseEnter(); // Function W_TemplateGraphic.W_TemplateGraphic_C.MouseEnter // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void MouseLeave(); // Function W_TemplateGraphic.W_TemplateGraphic_C.MouseLeave // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Slider_Graphic_K2Node_ComponentBoundEvent_12_OnControllerCaptureBeginEvent__DelegateSignature(); // Function W_TemplateGraphic.W_TemplateGraphic_C.BndEvt__Slider_Graphic_K2Node_ComponentBoundEvent_12_OnControllerCaptureBeginEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Slider_Graphic_K2Node_ComponentBoundEvent_13_OnControllerCaptureEndEvent__DelegateSignature(); // Function W_TemplateGraphic.W_TemplateGraphic_C.BndEvt__Slider_Graphic_K2Node_ComponentBoundEvent_13_OnControllerCaptureEndEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Button_Down_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function W_TemplateGraphic.W_TemplateGraphic_C.BndEvt__Button_Down_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Button_Up_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function W_TemplateGraphic.W_TemplateGraphic_C.BndEvt__Button_Up_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void ByGlobalSetting(int32_t NewButtonIndex); // Function W_TemplateGraphic.W_TemplateGraphic_C.ByGlobalSetting // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Slider_Graphic_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value); // Function W_TemplateGraphic.W_TemplateGraphic_C.BndEvt__Slider_Graphic_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Button_Apply_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function W_TemplateGraphic.W_TemplateGraphic_C.BndEvt__Button_Apply_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void Construct(); // Function W_TemplateGraphic.W_TemplateGraphic_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void PreConstruct(bool IsDesignTime); // Function W_TemplateGraphic.W_TemplateGraphic_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void ReloadBackupGraphic(); // Function W_TemplateGraphic.W_TemplateGraphic_C.ReloadBackupGraphic // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void MakeBackupGraphic(); // Function W_TemplateGraphic.W_TemplateGraphic_C.MakeBackupGraphic // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void RestoreGraphic(); // Function W_TemplateGraphic.W_TemplateGraphic_C.RestoreGraphic // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void CheckForStyle(bool ShowStyle?); // Function W_TemplateGraphic.W_TemplateGraphic_C.CheckForStyle // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_W_TemplateGraphic(int32_t EntryPoint); // Function W_TemplateGraphic.W_TemplateGraphic_C.ExecuteUbergraph_W_TemplateGraphic // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
};

