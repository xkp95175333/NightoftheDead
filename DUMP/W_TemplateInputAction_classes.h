// WidgetBlueprintGeneratedClass W_TemplateInputAction.W_TemplateInputAction_C
// Size: 0x3b0 (Inherited: 0x260)
struct UW_TemplateInputAction_C : UUserWidget {
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
	struct FText ActionName; // 0x2d8(0x18)
	struct FText Description; // 0x2f0(0x18)
	struct FName MappingName; // 0x308(0x08)
	enum class E_TemplateControlAction SettingName; // 0x310(0x01)
	char pad_311[0x7]; // 0x311(0x07)
	struct FS_ActionKeySetting PrimaryKey; // 0x318(0x30)
	struct FS_ActionKeySetting SecondaryKey; // 0x348(0x30)
	struct UW_Options_C* OptionsRef; // 0x378(0x08)
	struct TArray<struct FInputActionKeyMapping> BackupAction; // 0x380(0x10)
	bool IsBackUp?; // 0x390(0x01)
	bool AddSpace?; // 0x391(0x01)
	char pad_392[0x2]; // 0x392(0x02)
	float SpaceSize; // 0x394(0x04)
	bool ForceHide?; // 0x398(0x01)
	char pad_399[0x7]; // 0x399(0x07)
	struct UHorizontalBoxSlot* MyLeft; // 0x3a0(0x08)
	bool IsHovered?; // 0x3a8(0x01)
	bool MakeAnim?; // 0x3a9(0x01)
	char pad_3AA[0x2]; // 0x3aa(0x02)
	float ActualLeft; // 0x3ac(0x04)

	struct UWidget* CustomNavigation_Down(enum class EUINavigation Navigation); // Function W_TemplateInputAction.W_TemplateInputAction_C.CustomNavigation_Down // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	struct UWidget* CustomNavigation_Up(enum class EUINavigation Navigation); // Function W_TemplateInputAction.W_TemplateInputAction_C.CustomNavigation_Up // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	struct UWidget* CustomNavigation_Right(enum class EUINavigation Navigation); // Function W_TemplateInputAction.W_TemplateInputAction_C.CustomNavigation_Right // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	struct UWidget* CustomNavigation_Left(enum class EUINavigation Navigation); // Function W_TemplateInputAction.W_TemplateInputAction_C.CustomNavigation_Left // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ChangeTitleColor(struct FSlateColor TitleColor); // Function W_TemplateInputAction.W_TemplateInputAction_C.ChangeTitleColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void CheckSizeArray(); // Function W_TemplateInputAction.W_TemplateInputAction_C.CheckSizeArray // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void LoadDataAction(); // Function W_TemplateInputAction.W_TemplateInputAction_C.LoadDataAction // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void CheckActionIsDefault(bool IsDefault?); // Function W_TemplateInputAction.W_TemplateInputAction_C.CheckActionIsDefault // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ActualiseInputKey(bool IgnoreCheckDefault); // Function W_TemplateInputAction.W_TemplateInputAction_C.ActualiseInputKey // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void CheckForRename(struct UInputKeySelector* InputRef); // Function W_TemplateInputAction.W_TemplateInputAction_C.CheckForRename // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void RestoreAction(); // Function W_TemplateInputAction.W_TemplateInputAction_C.RestoreAction // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void SetDefaultKey(); // Function W_TemplateInputAction.W_TemplateInputAction_C.SetDefaultKey // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ReloadBackupAction(); // Function W_TemplateInputAction.W_TemplateInputAction_C.ReloadBackupAction // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void MakeBackupAction(); // Function W_TemplateInputAction.W_TemplateInputAction_C.MakeBackupAction // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void PreConstruct(bool IsDesignTime); // Function W_TemplateInputAction.W_TemplateInputAction_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void Construct(); // Function W_TemplateInputAction.W_TemplateInputAction_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__InputKey_K2Node_ComponentBoundEvent_0_OnKeySelected__DelegateSignature(struct FInputChord SelectedKey); // Function W_TemplateInputAction.W_TemplateInputAction_C.BndEvt__InputKey_K2Node_ComponentBoundEvent_0_OnKeySelected__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__InputKey_S_K2Node_ComponentBoundEvent_0_OnKeySelected__DelegateSignature(struct FInputChord SelectedKey); // Function W_TemplateInputAction.W_TemplateInputAction_C.BndEvt__InputKey_S_K2Node_ComponentBoundEvent_0_OnKeySelected__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void EditMyKey(struct FInputChord SelectedKey); // Function W_TemplateInputAction.W_TemplateInputAction_C.EditMyKey // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function W_TemplateInputAction.W_TemplateInputAction_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1395fe0
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function W_TemplateInputAction.W_TemplateInputAction_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1395fe0
	void MouseEnter(); // Function W_TemplateInputAction.W_TemplateInputAction_C.MouseEnter // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void MouseLeave(); // Function W_TemplateInputAction.W_TemplateInputAction_C.MouseLeave // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void MakeAnim(); // Function W_TemplateInputAction.W_TemplateInputAction_C.MakeAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__InputKey_P_K2Node_ComponentBoundEvent_0_OnIsSelectingKeyChanged__DelegateSignature(); // Function W_TemplateInputAction.W_TemplateInputAction_C.BndEvt__InputKey_P_K2Node_ComponentBoundEvent_0_OnIsSelectingKeyChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__InputKey_S_K2Node_ComponentBoundEvent_3_OnIsSelectingKeyChanged__DelegateSignature(); // Function W_TemplateInputAction.W_TemplateInputAction_C.BndEvt__InputKey_S_K2Node_ComponentBoundEvent_3_OnIsSelectingKeyChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void CheckForStyle(bool ShowStyle?); // Function W_TemplateInputAction.W_TemplateInputAction_C.CheckForStyle // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_W_TemplateInputAction(int32_t EntryPoint); // Function W_TemplateInputAction.W_TemplateInputAction_C.ExecuteUbergraph_W_TemplateInputAction // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
};

