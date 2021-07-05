// WidgetBlueprintGeneratedClass WBP_BuildSlot.WBP_BuildSlot_C
// Size: 0x2f8 (Inherited: 0x260)
struct UWBP_BuildSlot_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* Anim_selected; // 0x268(0x08)
	struct UWidgetAnimation* Anim_press; // 0x270(0x08)
	struct UWidgetAnimation* Anim_hover; // 0x278(0x08)
	struct UBorder* Border_Enough; // 0x280(0x08)
	struct UBorder* Border_Selected; // 0x288(0x08)
	struct UButton* Button_47; // 0x290(0x08)
	struct UImage* Icon_Image; // 0x298(0x08)
	bool bSelected; // 0x2a0(0x01)
	char pad_2A1[0x7]; // 0x2a1(0x07)
	struct FSlateColor EnoughTextColor; // 0x2a8(0x28)
	struct FSlateColor NotEnoughTextColor; // 0x2d0(0x28)

	void BndEvt__Button_46_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function WBP_BuildSlot.WBP_BuildSlot_C.BndEvt__Button_46_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Button_46_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature(); // Function WBP_BuildSlot.WBP_BuildSlot_C.BndEvt__Button_46_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void On Selected(); // Function WBP_BuildSlot.WBP_BuildSlot_C.On Selected // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnDeselected(); // Function WBP_BuildSlot.WBP_BuildSlot_C.OnDeselected // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Button_46_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function WBP_BuildSlot.WBP_BuildSlot_C.BndEvt__Button_46_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void OnEnough(); // Function WBP_BuildSlot.WBP_BuildSlot_C.OnEnough // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnNotEnough(); // Function WBP_BuildSlot.WBP_BuildSlot_C.OnNotEnough // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_BuildSlot.WBP_BuildSlot_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_WBP_BuildSlot(int32_t EntryPoint); // Function WBP_BuildSlot.WBP_BuildSlot_C.ExecuteUbergraph_WBP_BuildSlot // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
};

