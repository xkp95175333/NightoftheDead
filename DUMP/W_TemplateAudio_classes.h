// WidgetBlueprintGeneratedClass W_TemplateAudio.W_TemplateAudio_C
// Size: 0x342 (Inherited: 0x260)
struct UW_TemplateAudio_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* Image_Over; // 0x268(0x08)
	struct UImage* Image_SliderFocus; // 0x270(0x08)
	struct USizeBox* MySizeBox; // 0x278(0x08)
	struct UWidgetSwitcher* MySwitcher; // 0x280(0x08)
	struct UProgressBar* ProgressBar_Audio; // 0x288(0x08)
	struct USlider* Slider_Audio; // 0x290(0x08)
	struct UTextBlock* TextBlock_AudioName; // 0x298(0x08)
	struct UTextBlock* TextBlock_Slider; // 0x2a0(0x08)
	float SoundValue; // 0x2a8(0x04)
	float SliderMultiply; // 0x2ac(0x04)
	struct FText AudioName; // 0x2b0(0x18)
	struct FText Description; // 0x2c8(0x18)
	enum class E_TemplateAudio SettingName; // 0x2e0(0x01)
	char pad_2E1[0x3]; // 0x2e1(0x03)
	float SliderDefaultValue(Percent); // 0x2e4(0x04)
	struct UW_Options_C* OptionsRef; // 0x2e8(0x08)
	float BackupSlider; // 0x2f0(0x04)
	bool AddSpace?; // 0x2f4(0x01)
	char pad_2F5[0x3]; // 0x2f5(0x03)
	float SpaceSize; // 0x2f8(0x04)
	bool MakeAnim?; // 0x2fc(0x01)
	char pad_2FD[0x3]; // 0x2fd(0x03)
	float ActualLeft; // 0x300(0x04)
	struct FLinearColor MouseEnterColor; // 0x304(0x10)
	struct FLinearColor MouseLeaveColor; // 0x314(0x10)
	char pad_324[0x4]; // 0x324(0x04)
	struct UHorizontalBoxSlot* MyLeft; // 0x328(0x08)
	struct FString MyTest; // 0x330(0x10)
	bool IsInEdit?; // 0x340(0x01)
	bool IsHovered?; // 0x341(0x01)

	struct UWidget* CustomNavigation_Down(enum class EUINavigation Navigation); // Function W_TemplateAudio.W_TemplateAudio_C.CustomNavigation_Down // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	struct UWidget* CustomNavigation_Up(enum class EUINavigation Navigation); // Function W_TemplateAudio.W_TemplateAudio_C.CustomNavigation_Up // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	struct UWidget* CustomNavigation_Left(enum class EUINavigation Navigation); // Function W_TemplateAudio.W_TemplateAudio_C.CustomNavigation_Left // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ChangeColor(struct FSlateColor TitleColor, struct FSlateColor ChoiceColor, struct FLinearColor SliderColor, struct FLinearColor SliderHandleColor); // Function W_TemplateAudio.W_TemplateAudio_C.ChangeColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void CheckAudioIsDefault(bool IsDefault?); // Function W_TemplateAudio.W_TemplateAudio_C.CheckAudioIsDefault // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void SetSliderValue(float Value, bool MakeSlider?); // Function W_TemplateAudio.W_TemplateAudio_C.SetSliderValue // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void PreConstruct(bool IsDesignTime); // Function W_TemplateAudio.W_TemplateAudio_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void Construct(); // Function W_TemplateAudio.W_TemplateAudio_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void ReloadBackupSound(); // Function W_TemplateAudio.W_TemplateAudio_C.ReloadBackupSound // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void MakeBackupSound(); // Function W_TemplateAudio.W_TemplateAudio_C.MakeBackupSound // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void RestoreAudio(); // Function W_TemplateAudio.W_TemplateAudio_C.RestoreAudio // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function W_TemplateAudio.W_TemplateAudio_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1395fe0
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function W_TemplateAudio.W_TemplateAudio_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1395fe0
	void MakeAnim(); // Function W_TemplateAudio.W_TemplateAudio_C.MakeAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void MouseEnter(); // Function W_TemplateAudio.W_TemplateAudio_C.MouseEnter // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void MouseLeave(); // Function W_TemplateAudio.W_TemplateAudio_C.MouseLeave // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Slider_Audio_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature(float Value); // Function W_TemplateAudio.W_TemplateAudio_C.BndEvt__Slider_Audio_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Slider_Audio_K2Node_ComponentBoundEvent_3_OnControllerCaptureBeginEvent__DelegateSignature(); // Function W_TemplateAudio.W_TemplateAudio_C.BndEvt__Slider_Audio_K2Node_ComponentBoundEvent_3_OnControllerCaptureBeginEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Slider_Audio_K2Node_ComponentBoundEvent_4_OnControllerCaptureEndEvent__DelegateSignature(); // Function W_TemplateAudio.W_TemplateAudio_C.BndEvt__Slider_Audio_K2Node_ComponentBoundEvent_4_OnControllerCaptureEndEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void CheckForStyle(bool ShowStyle?); // Function W_TemplateAudio.W_TemplateAudio_C.CheckForStyle // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ChangeAudio(); // Function W_TemplateAudio.W_TemplateAudio_C.ChangeAudio // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_W_TemplateAudio(int32_t EntryPoint); // Function W_TemplateAudio.W_TemplateAudio_C.ExecuteUbergraph_W_TemplateAudio // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
};

