// WidgetBlueprintGeneratedClass WBP_Sign.WBP_Sign_C
// Size: 0x298 (Inherited: 0x270)
struct UWBP_Sign_C : USignWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct UBaseButton_C* Button_SetContentsPanel_Close; // 0x278(0x08)
	struct UBaseButton_C* Button_SetContentsPanel_Submit; // 0x280(0x08)
	struct UEditableTextBox* EditableText_SetContentsPanel_Contents; // 0x288(0x08)
	struct UVerticalBox* SetContentsPanel; // 0x290(0x08)

	void ShowSetContentsPanel(); // Function WBP_Sign.WBP_Sign_C.ShowSetContentsPanel // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void HideSetContentsPanel(); // Function WBP_Sign.WBP_Sign_C.HideSetContentsPanel // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Button_SetContentsPanel_Submit_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(); // Function WBP_Sign.WBP_Sign_C.BndEvt__Button_SetContentsPanel_Submit_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Button_SetContentsPanel_Close_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(); // Function WBP_Sign.WBP_Sign_C.BndEvt__Button_SetContentsPanel_Close_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_WBP_Sign(int32_t EntryPoint); // Function WBP_Sign.WBP_Sign_C.ExecuteUbergraph_WBP_Sign // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
};

