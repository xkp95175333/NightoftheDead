// WidgetBlueprintGeneratedClass WBP_ResearchCategory.WBP_ResearchCategory_C
// Size: 0x2b1 (Inherited: 0x260)
struct UWBP_ResearchCategory_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* Unselected; // 0x268(0x08)
	struct UWidgetAnimation* Selected; // 0x270(0x08)
	struct UWidgetAnimation* Press; // 0x278(0x08)
	struct UWidgetAnimation* Hover; // 0x280(0x08)
	struct UButton* BTN_Category; // 0x288(0x08)
	struct UCollapsibleTextBlock* CollapsibleTextBlock_Desc; // 0x290(0x08)
	struct UImage* IMG_Arrow; // 0x298(0x08)
	struct UImage* Img_Icon; // 0x2a0(0x08)
	struct UTextBlock* TXT_Category; // 0x2a8(0x08)
	bool bIsSelected; // 0x2b0(0x01)

	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function WBP_ResearchCategory.WBP_ResearchCategory_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function WBP_ResearchCategory.WBP_ResearchCategory_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void On Selected(); // Function WBP_ResearchCategory.WBP_ResearchCategory_C.On Selected // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature(); // Function WBP_ResearchCategory.WBP_ResearchCategory_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void OnUnSelected(); // Function WBP_ResearchCategory.WBP_ResearchCategory_C.OnUnSelected // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_WBP_ResearchCategory(int32_t EntryPoint); // Function WBP_ResearchCategory.WBP_ResearchCategory_C.ExecuteUbergraph_WBP_ResearchCategory // (Final|UbergraphFunction) // @ game+0x1395fe0
};

