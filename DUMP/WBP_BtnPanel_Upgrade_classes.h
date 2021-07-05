// WidgetBlueprintGeneratedClass WBP_BtnPanel_Upgrade.WBP_BtnPanel_Upgrade_C
// Size: 0x2a8 (Inherited: 0x260)
struct UWBP_BtnPanel_Upgrade_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UButton* Btn_Panel; // 0x268(0x08)
	struct USizeBox* SizeBox_1; // 0x270(0x08)
	struct UCollapsibleTextBlock* TextBlock_56; // 0x278(0x08)
	struct FText Text; // 0x280(0x18)
	struct FMulticastInlineDelegate OnClick; // 0x298(0x10)

	void PreConstruct(bool IsDesignTime); // Function WBP_BtnPanel_Upgrade.WBP_BtnPanel_Upgrade_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void Construct(); // Function WBP_BtnPanel_Upgrade.WBP_BtnPanel_Upgrade_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Btn_Panel_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function WBP_BtnPanel_Upgrade.WBP_BtnPanel_Upgrade_C.BndEvt__Btn_Panel_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Btn_Panel_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature(); // Function WBP_BtnPanel_Upgrade.WBP_BtnPanel_Upgrade_C.BndEvt__Btn_Panel_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void OnClicked_Event_1(); // Function WBP_BtnPanel_Upgrade.WBP_BtnPanel_Upgrade_C.OnClicked_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_WBP_BtnPanel_Upgrade(int32_t EntryPoint); // Function WBP_BtnPanel_Upgrade.WBP_BtnPanel_Upgrade_C.ExecuteUbergraph_WBP_BtnPanel_Upgrade // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
	void OnClick__DelegateSignature(); // Function WBP_BtnPanel_Upgrade.WBP_BtnPanel_Upgrade_C.OnClick__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
};

