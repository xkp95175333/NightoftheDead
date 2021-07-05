// WidgetBlueprintGeneratedClass W_TemplateInputAxis.W_TemplateInputAxis_C
// Size: 0x3b1 (Inherited: 0x260)
struct UW_TemplateInputAxis_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* Image_Over; // 0x268(0x08)
	struct UImage* Image_PrimaryFocus; // 0x270(0x08)
	struct UImage* Image_SecondaryFocus; // 0x278(0x08)
	struct UInputKeySelector* InputKey_P; // 0x280(0x08)
	struct UInputKeySelector* InputKey_S; // 0x288(0x08)
	struct USizeBox* MySizeBox; // 0x290(0x08)
	struct USizeBox* SizeBox_Primary; // 0x298(0x08)
	struct USizeBox* SizeBox_Secondary; // 0x2a0(0x08)
	struct UTextBlock* TextBlock_InputName; // 0x2a8(0x08)
	bool OnPrimary?; // 0x2b0(0x01)
	char pad_2B1[0x3]; // 0x2b1(0x03)
	struct FLinearColor MouseEnterColor; // 0x2b4(0x10)
	struct FLinearColor MouseLeaveColor; // 0x2c4(0x10)
	bool IsInEdit?; // 0x2d4(0x01)
	bool InSecure?; // 0x2d5(0x01)
	char pad_2D6[0x2]; // 0x2d6(0x02)
	struct FText AxisName; // 0x2d8(0x18)
	struct FText Description; // 0x2f0(0x18)
	enum class E_TemplateControlAxis SettingName; // 0x308(0x01)
	enum class E_AxisType AxisType; // 0x309(0x01)
	char pad_30A[0x6]; // 0x30a(0x06)
	struct FS_AxisKeySetting PrimaryKey; // 0x310(0x30)
	struct FS_AxisKeySetting SecondaryKey; // 0x340(0x30)
	struct UW_Options_C* OptionsRef; // 0x370(0x08)
	struct TArray<struct FInputAxisKeyMapping> BackupAxis; // 0x378(0x10)
	bool IsBackUp?; // 0x388(0x01)
	bool AddSpace?; // 0x389(0x01)
	char pad_38A[0x2]; // 0x38a(0x02)
	float SpaceSize; // 0x38c(0x04)
	bool ForceHide?; // 0x390(0x01)
	char pad_391[0x3]; // 0x391(0x03)
	struct FName MappingName; // 0x394(0x08)
	int32_t AutoGeneralIndex; // 0x39c(0x04)
	bool MakeAnim?; // 0x3a0(0x01)
	char pad_3A1[0x3]; // 0x3a1(0x03)
	float ActualLeft; // 0x3a4(0x04)
	struct UHorizontalBoxSlot* MyLeft; // 0x3a8(0x08)
	bool IsHovered?; // 0x3b0(0x01)

	void StartupMapping(); // Function W_TemplateInputAxis.W_TemplateInputAxis_C.StartupMapping // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	struct UWidget* CustomNavigation_Down(enum class EUINavigation Navigation); // Function W_TemplateInputAxis.W_TemplateInputAxis_C.CustomNavigation_Down // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	struct UWidget* CustomNavigation_Up(enum class EUINavigation Navigation); // Function W_TemplateInputAxis.W_TemplateInputAxis_C.CustomNavigation_Up // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	struct UWidget* CustomNavigation_Right(enum class EUINavigation Navigation); // Function W_TemplateInputAxis.W_TemplateInputAxis_C.CustomNavigation_Right // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	struct UWidget* CustomNavigation_Left(enum class EUINavigation Navigation); // Function W_TemplateInputAxis.W_TemplateInputAxis_C.CustomNavigation_Left // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void CheckKeyBind(); // Function W_TemplateInputAxis.W_TemplateInputAxis_C.CheckKeyBind // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void GetIndex(int32_t NewParam); // Function W_TemplateInputAxis.W_TemplateInputAxis_C.GetIndex // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	void GetCorrectScale(struct FKey Key, float Scale); // Function W_TemplateInputAxis.W_TemplateInputAxis_C.GetCorrectScale // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	void GetCorrectIndex(bool Primary?, int32_t Index); // Function W_TemplateInputAxis.W_TemplateInputAxis_C.GetCorrectIndex // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	void ChangeTitleColor(struct FSlateColor TitleColor); // Function W_TemplateInputAxis.W_TemplateInputAxis_C.ChangeTitleColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void LoadDataAxis(); // Function W_TemplateInputAxis.W_TemplateInputAxis_C.LoadDataAxis // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void CheckAxisIsDefault(bool IsDefault?); // Function W_TemplateInputAxis.W_TemplateInputAxis_C.CheckAxisIsDefault // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ActualiseInputKey(bool IgnoreCheckDefault); // Function W_TemplateInputAxis.W_TemplateInputAxis_C.ActualiseInputKey // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void CheckForRename(struct UInputKeySelector* InputRef); // Function W_TemplateInputAxis.W_TemplateInputAxis_C.CheckForRename // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void RestoreAxis(); // Function W_TemplateInputAxis.W_TemplateInputAxis_C.RestoreAxis // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void SetDefaultKey(); // Function W_TemplateInputAxis.W_TemplateInputAxis_C.SetDefaultKey // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ReloadBackupAxis(); // Function W_TemplateInputAxis.W_TemplateInputAxis_C.ReloadBackupAxis // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void MakeBackupAxis(); // Function W_TemplateInputAxis.W_TemplateInputAxis_C.MakeBackupAxis // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void PreConstruct(bool IsDesignTime); // Function W_TemplateInputAxis.W_TemplateInputAxis_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void Construct(); // Function W_TemplateInputAxis.W_TemplateInputAxis_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__InputKey_K2Node_ComponentBoundEvent_0_OnKeySelected__DelegateSignature(struct FInputChord SelectedKey); // Function W_TemplateInputAxis.W_TemplateInputAxis_C.BndEvt__InputKey_K2Node_ComponentBoundEvent_0_OnKeySelected__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__InputKey_S_K2Node_ComponentBoundEvent_0_OnKeySelected__DelegateSignature(struct FInputChord SelectedKey); // Function W_TemplateInputAxis.W_TemplateInputAxis_C.BndEvt__InputKey_S_K2Node_ComponentBoundEvent_0_OnKeySelected__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void EditMyKey(struct FInputChord SelectedKey); // Function W_TemplateInputAxis.W_TemplateInputAxis_C.EditMyKey // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function W_TemplateInputAxis.W_TemplateInputAxis_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1395fe0
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function W_TemplateInputAxis.W_TemplateInputAxis_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1395fe0
	void MouseEnter(); // Function W_TemplateInputAxis.W_TemplateInputAxis_C.MouseEnter // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void MouseLeave(); // Function W_TemplateInputAxis.W_TemplateInputAxis_C.MouseLeave // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void MakeAnim(); // Function W_TemplateInputAxis.W_TemplateInputAxis_C.MakeAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__InputKey_P_K2Node_ComponentBoundEvent_0_OnIsSelectingKeyChanged__DelegateSignature(); // Function W_TemplateInputAxis.W_TemplateInputAxis_C.BndEvt__InputKey_P_K2Node_ComponentBoundEvent_0_OnIsSelectingKeyChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__InputKey_S_K2Node_ComponentBoundEvent_3_OnIsSelectingKeyChanged__DelegateSignature(); // Function W_TemplateInputAxis.W_TemplateInputAxis_C.BndEvt__InputKey_S_K2Node_ComponentBoundEvent_3_OnIsSelectingKeyChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void CheckForStyle(bool ShowStyle?); // Function W_TemplateInputAxis.W_TemplateInputAxis_C.CheckForStyle // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_W_TemplateInputAxis(int32_t EntryPoint); // Function W_TemplateInputAxis.W_TemplateInputAxis_C.ExecuteUbergraph_W_TemplateInputAxis // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
};

