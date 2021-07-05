// WidgetBlueprintGeneratedClass WBP_SlotLarge.WBP_SlotLarge_C
// Size: 0x2b0 (Inherited: 0x260)
struct UWBP_SlotLarge_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* AnimPress; // 0x268(0x08)
	struct UWidgetAnimation* AnimHover; // 0x270(0x08)
	struct UBorder* Bdr_hover; // 0x278(0x08)
	struct UBorder* Bdr_OwnValue; // 0x280(0x08)
	struct UBorder* Bdr_Tier; // 0x288(0x08)
	struct UImage* Img_Icon; // 0x290(0x08)
	struct UBorder* SlotBg; // 0x298(0x08)
	struct UTextBlock* TextBlock_149; // 0x2a0(0x08)
	struct UTextBlock* TextBlock_Tier_2; // 0x2a8(0x08)

	void Mouse Press(); // Function WBP_SlotLarge.WBP_SlotLarge_C.Mouse Press // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Drage Slot Hit(); // Function WBP_SlotLarge.WBP_SlotLarge_C.Drage Slot Hit // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void MouseEnter(); // Function WBP_SlotLarge.WBP_SlotLarge_C.MouseEnter // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void MouseLeave(); // Function WBP_SlotLarge.WBP_SlotLarge_C.MouseLeave // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_WBP_SlotLarge(int32_t EntryPoint); // Function WBP_SlotLarge.WBP_SlotLarge_C.ExecuteUbergraph_WBP_SlotLarge // (Final|UbergraphFunction) // @ game+0x1395fe0
};

