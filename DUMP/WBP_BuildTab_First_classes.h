// WidgetBlueprintGeneratedClass WBP_BuildTab_First.WBP_BuildTab_First_C
// Size: 0x2a8 (Inherited: 0x260)
struct UWBP_BuildTab_First_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UBorder* Border_Selected; // 0x268(0x08)
	struct UButton* Button_FirstTab; // 0x270(0x08)
	struct UImage* Img_Icon; // 0x278(0x08)
	struct TSoftObjectPtr<struct UTexture2D> CategoryIcon; // 0x280(0x28)

	void PreConstruct(bool IsDesignTime); // Function WBP_BuildTab_First.WBP_BuildTab_First_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Button_FirstTab_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function WBP_BuildTab_First.WBP_BuildTab_First_C.BndEvt__Button_FirstTab_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Button_FirstTab_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature(); // Function WBP_BuildTab_First.WBP_BuildTab_First_C.BndEvt__Button_FirstTab_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void OnSelected(); // Function WBP_BuildTab_First.WBP_BuildTab_First_C.OnSelected // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnDeselected(); // Function WBP_BuildTab_First.WBP_BuildTab_First_C.OnDeselected // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_WBP_BuildTab_First(int32_t EntryPoint); // Function WBP_BuildTab_First.WBP_BuildTab_First_C.ExecuteUbergraph_WBP_BuildTab_First // (Final|UbergraphFunction) // @ game+0x1395fe0
};

