// WidgetBlueprintGeneratedClass WBP_BtnLarge.WBP_BtnLarge_C
// Size: 0x2a8 (Inherited: 0x260)
struct UWBP_BtnLarge_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UButton* Button_206; // 0x268(0x08)
	struct UTextBlock* TextBlock_56; // 0x270(0x08)
	struct FText Text; // 0x278(0x18)
	bool bIsSelected; // 0x290(0x01)
	char pad_291[0x7]; // 0x291(0x07)
	struct FMulticastInlineDelegate OnClick; // 0x298(0x10)

	void PreConstruct(bool IsDesignTime); // Function WBP_BtnLarge.WBP_BtnLarge_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Button_205_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function WBP_BtnLarge.WBP_BtnLarge_C.BndEvt__Button_205_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Button_205_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function WBP_BtnLarge.WBP_BtnLarge_C.BndEvt__Button_205_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Button_205_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function WBP_BtnLarge.WBP_BtnLarge_C.BndEvt__Button_205_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void OnSelect(); // Function WBP_BtnLarge.WBP_BtnLarge_C.OnSelect // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnDeselect(); // Function WBP_BtnLarge.WBP_BtnLarge_C.OnDeselect // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnHovered(); // Function WBP_BtnLarge.WBP_BtnLarge_C.OnHovered // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnUnhovered(); // Function WBP_BtnLarge.WBP_BtnLarge_C.OnUnhovered // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_WBP_BtnLarge(int32_t EntryPoint); // Function WBP_BtnLarge.WBP_BtnLarge_C.ExecuteUbergraph_WBP_BtnLarge // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
	void OnClick__DelegateSignature(); // Function WBP_BtnLarge.WBP_BtnLarge_C.OnClick__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
};

