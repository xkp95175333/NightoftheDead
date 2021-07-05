// WidgetBlueprintGeneratedClass WBP_QuickSlot.WBP_QuickSlot_C
// Size: 0x2b8 (Inherited: 0x260)
struct UWBP_QuickSlot_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* AnimUse; // 0x268(0x08)
	struct UWidgetAnimation* AnimPress; // 0x270(0x08)
	struct UWidgetAnimation* AnimHover; // 0x278(0x08)
	struct UBorder* Bdr_OwnValue; // 0x280(0x08)
	struct UBorder* Bdr_TierValue; // 0x288(0x08)
	struct UImage* Img_Highlight; // 0x290(0x08)
	struct UImage* Img_Icon; // 0x298(0x08)
	struct UTextBlock* TextBlock_119; // 0x2a0(0x08)
	struct UTextBlock* TextBlock_149; // 0x2a8(0x08)
	struct UTextBlock* TextBlock_Tier; // 0x2b0(0x08)

	void Mouse Press(); // Function WBP_QuickSlot.WBP_QuickSlot_C.Mouse Press // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Drage Slot Hit(); // Function WBP_QuickSlot.WBP_QuickSlot_C.Drage Slot Hit // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void MouseLeave(); // Function WBP_QuickSlot.WBP_QuickSlot_C.MouseLeave // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void MouseEnter(); // Function WBP_QuickSlot.WBP_QuickSlot_C.MouseEnter // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void DragSlotLeave(); // Function WBP_QuickSlot.WBP_QuickSlot_C.DragSlotLeave // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_WBP_QuickSlot(int32_t EntryPoint); // Function WBP_QuickSlot.WBP_QuickSlot_C.ExecuteUbergraph_WBP_QuickSlot // (Final|UbergraphFunction) // @ game+0x1395fe0
};

