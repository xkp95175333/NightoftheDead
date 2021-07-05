// WidgetBlueprintGeneratedClass WBP_Security.WBP_Security_C
// Size: 0x2d0 (Inherited: 0x280)
struct UWBP_Security_C : USecurityWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UBaseButton_C* Button_ResetPassword_Close; // 0x288(0x08)
	struct UBaseButton_C* Button_ResetPassword_Submit; // 0x290(0x08)
	struct UBaseButton_C* Button_UnlockPassword_Close; // 0x298(0x08)
	struct UBaseButton_C* Button_UnlockPassword_Submit; // 0x2a0(0x08)
	struct UEditableTextBox* EditableText_ResetPassword_Password; // 0x2a8(0x08)
	struct UEditableTextBox* EditableText_UnlockPassword_Password; // 0x2b0(0x08)
	struct UVerticalBox* ResetPasswordPanel; // 0x2b8(0x08)
	struct UTextBlock* TextBlock; // 0x2c0(0x08)
	struct UVerticalBox* UnlockPasswordPanel; // 0x2c8(0x08)

	struct FText Get Admin Name(); // Function WBP_Security.WBP_Security_C.Get Admin Name // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	void HideAllPanel(); // Function WBP_Security.WBP_Security_C.HideAllPanel // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Button_LockPassword_Close_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(); // Function WBP_Security.WBP_Security_C.BndEvt__Button_LockPassword_Close_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Button_LockPassword_Submit_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(); // Function WBP_Security.WBP_Security_C.BndEvt__Button_LockPassword_Submit_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Button_UnlockPassword_Close_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(); // Function WBP_Security.WBP_Security_C.BndEvt__Button_UnlockPassword_Close_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Button_UnlockPassword_Submit_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(); // Function WBP_Security.WBP_Security_C.BndEvt__Button_UnlockPassword_Submit_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void ShowUnlockPasswordPanel(); // Function WBP_Security.WBP_Security_C.ShowUnlockPasswordPanel // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void HideUnlockPasswordPanel(); // Function WBP_Security.WBP_Security_C.HideUnlockPasswordPanel // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ShowResetPasswordPanel(); // Function WBP_Security.WBP_Security_C.ShowResetPasswordPanel // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void HideResetPasswordPanel(); // Function WBP_Security.WBP_Security_C.HideResetPasswordPanel // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_WBP_Security(int32_t EntryPoint); // Function WBP_Security.WBP_Security_C.ExecuteUbergraph_WBP_Security // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
};

