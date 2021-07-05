// WidgetBlueprintGeneratedClass W_TemplateGlobalSettings.W_TemplateGlobalSettings_C
// Size: 0x360 (Inherited: 0x260)
struct UW_TemplateGlobalSettings_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UButton* Button_Down; // 0x268(0x08)
	struct UButton* Button_Up; // 0x270(0x08)
	struct UImage* Image_L; // 0x278(0x08)
	struct UImage* Image_Over; // 0x280(0x08)
	struct UImage* Image_R; // 0x288(0x08)
	struct USizeBox* MySizeBox; // 0x290(0x08)
	struct UTextBlock* TextBlock_ActualGlobal; // 0x298(0x08)
	struct UTextBlock* TextBlock_GlobalName; // 0x2a0(0x08)
	struct UW_Options_C* OptionsRef; // 0x2a8(0x08)
	int32_t ButtonIndex; // 0x2b0(0x04)
	char pad_2B4[0x4]; // 0x2b4(0x04)
	struct FText GlobalGraphicName; // 0x2b8(0x18)
	struct FText Description; // 0x2d0(0x18)
	enum class E_TemplateGraphic SettingName; // 0x2e8(0x01)
	char pad_2E9[0x7]; // 0x2e9(0x07)
	struct TArray<struct FText> ButtonOptions; // 0x2f0(0x10)
	int32_t ButtonDefaultIndex; // 0x300(0x04)
	int32_t BackupButton; // 0x304(0x04)
	struct FString MyTest; // 0x308(0x10)
	bool AddSpace?; // 0x318(0x01)
	char pad_319[0x3]; // 0x319(0x03)
	float SpaceSize; // 0x31c(0x04)
	struct FLinearColor MouseEnterColor; // 0x320(0x10)
	struct FLinearColor MouseLeaveColor; // 0x330(0x10)
	bool ByUser?; // 0x340(0x01)
	bool IsHovered?; // 0x341(0x01)
	bool MakeAnim?; // 0x342(0x01)
	char pad_343[0x1]; // 0x343(0x01)
	float ActualLeft; // 0x344(0x04)
	struct UHorizontalBoxSlot* MyLeft; // 0x348(0x08)
	struct TArray<enum class E_TemplateGraphic> ExcludeSettingsFromGlobalChange; // 0x350(0x10)

	struct UWidget* CustomNavigation_Down(enum class EUINavigation Navigation); // Function W_TemplateGlobalSettings.W_TemplateGlobalSettings_C.CustomNavigation_Down // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ChangeColor(struct FSlateColor TitleColor, struct FLinearColor LAndRColor, struct FSlateColor ChoiceColor); // Function W_TemplateGlobalSettings.W_TemplateGlobalSettings_C.ChangeColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	struct UWidget* CustomNavigation_Up(enum class EUINavigation Navigation); // Function W_TemplateGlobalSettings.W_TemplateGlobalSettings_C.CustomNavigation_Up // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	struct UWidget* CustomNavigation_Right(enum class EUINavigation Navigation); // Function W_TemplateGlobalSettings.W_TemplateGlobalSettings_C.CustomNavigation_Right // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	struct UWidget* CustomNavigation_Left(enum class EUINavigation Navigation); // Function W_TemplateGlobalSettings.W_TemplateGlobalSettings_C.CustomNavigation_Left // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ChangeAllSettings(); // Function W_TemplateGlobalSettings.W_TemplateGlobalSettings_C.ChangeAllSettings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Button_Down_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function W_TemplateGlobalSettings.W_TemplateGlobalSettings_C.BndEvt__Button_Down_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Button_Up_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function W_TemplateGlobalSettings.W_TemplateGlobalSettings_C.BndEvt__Button_Up_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function W_TemplateGlobalSettings.W_TemplateGlobalSettings_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1395fe0
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function W_TemplateGlobalSettings.W_TemplateGlobalSettings_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Button_Down_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature(); // Function W_TemplateGlobalSettings.W_TemplateGlobalSettings_C.BndEvt__Button_Down_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Button_Up_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature(); // Function W_TemplateGlobalSettings.W_TemplateGlobalSettings_C.BndEvt__Button_Up_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Button_Down_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature(); // Function W_TemplateGlobalSettings.W_TemplateGlobalSettings_C.BndEvt__Button_Down_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Button_Up_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature(); // Function W_TemplateGlobalSettings.W_TemplateGlobalSettings_C.BndEvt__Button_Up_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void Construct(); // Function W_TemplateGlobalSettings.W_TemplateGlobalSettings_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void MakeAnim(); // Function W_TemplateGlobalSettings.W_TemplateGlobalSettings_C.MakeAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void MouseEnter(); // Function W_TemplateGlobalSettings.W_TemplateGlobalSettings_C.MouseEnter // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void MouseLeave(); // Function W_TemplateGlobalSettings.W_TemplateGlobalSettings_C.MouseLeave // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void GraphicsEdited(); // Function W_TemplateGlobalSettings.W_TemplateGlobalSettings_C.GraphicsEdited // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void PreConstruct(bool IsDesignTime); // Function W_TemplateGlobalSettings.W_TemplateGlobalSettings_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void ReloadBackupGlobal(); // Function W_TemplateGlobalSettings.W_TemplateGlobalSettings_C.ReloadBackupGlobal // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void MakeBackupGlobal(); // Function W_TemplateGlobalSettings.W_TemplateGlobalSettings_C.MakeBackupGlobal // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void RestoreGlobal(); // Function W_TemplateGlobalSettings.W_TemplateGlobalSettings_C.RestoreGlobal // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void CheckForStyle(bool ShowStyle?); // Function W_TemplateGlobalSettings.W_TemplateGlobalSettings_C.CheckForStyle // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_W_TemplateGlobalSettings(int32_t EntryPoint); // Function W_TemplateGlobalSettings.W_TemplateGlobalSettings_C.ExecuteUbergraph_W_TemplateGlobalSettings // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
};

