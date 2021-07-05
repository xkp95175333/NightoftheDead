// WidgetBlueprintGeneratedClass BaseButton.BaseButton_C
// Size: 0x2b0 (Inherited: 0x260)
struct UBaseButton_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UButton* Button; // 0x268(0x08)
	struct UTextBlock* ButtonText; // 0x270(0x08)
	struct FText Label; // 0x278(0x18)
	struct FMulticastInlineDelegate OnClicked; // 0x290(0x10)
	struct FLinearColor BgColor; // 0x2a0(0x10)

	void BndEvt__Button_K2Node_ComponentBoundEvent_115_OnButtonClickedEvent__DelegateSignature(); // Function BaseButton.BaseButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_115_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void Construct(); // Function BaseButton.BaseButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void PreConstruct(bool IsDesignTime); // Function BaseButton.BaseButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_BaseButton(int32_t EntryPoint); // Function BaseButton.BaseButton_C.ExecuteUbergraph_BaseButton // (Final|UbergraphFunction) // @ game+0x1395fe0
	void OnClicked__DelegateSignature(); // Function BaseButton.BaseButton_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
};

