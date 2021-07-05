// WidgetBlueprintGeneratedClass WBP_BuildTab_Second.WBP_BuildTab_Second_C
// Size: 0x2c8 (Inherited: 0x260)
struct UWBP_BuildTab_Second_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UButton* Button_47; // 0x268(0x08)
	struct UImage* Image_CategoryIcon; // 0x270(0x08)
	struct UImage* Image_Selected; // 0x278(0x08)
	struct FText CategoryText; // 0x280(0x18)
	enum class EBuildingCategory Category; // 0x298(0x01)
	char pad_299[0x7]; // 0x299(0x07)
	struct TSoftObjectPtr<struct UTexture2D> CategoryIcon; // 0x2a0(0x28)

	void PreConstruct(bool IsDesignTime); // Function WBP_BuildTab_Second.WBP_BuildTab_Second_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Button_46_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function WBP_BuildTab_Second.WBP_BuildTab_Second_C.BndEvt__Button_46_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Button_46_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function WBP_BuildTab_Second.WBP_BuildTab_Second_C.BndEvt__Button_46_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Button_46_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function WBP_BuildTab_Second.WBP_BuildTab_Second_C.BndEvt__Button_46_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void OnSelected(); // Function WBP_BuildTab_Second.WBP_BuildTab_Second_C.OnSelected // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnDeselected(); // Function WBP_BuildTab_Second.WBP_BuildTab_Second_C.OnDeselected // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_WBP_BuildTab_Second(int32_t EntryPoint); // Function WBP_BuildTab_Second.WBP_BuildTab_Second_C.ExecuteUbergraph_WBP_BuildTab_Second // (Final|UbergraphFunction) // @ game+0x1395fe0
};

