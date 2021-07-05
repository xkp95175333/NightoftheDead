// WidgetBlueprintGeneratedClass WBP_SlotList.WBP_SlotList_C
// Size: 0x2d0 (Inherited: 0x260)
struct UWBP_SlotList_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* AnimSelected; // 0x268(0x08)
	struct UWidgetAnimation* AnimPress; // 0x270(0x08)
	struct UWidgetAnimation* AnimHover; // 0x278(0x08)
	struct UBorder* Bdr_hover; // 0x280(0x08)
	struct UBorder* Bdr_OwnValue; // 0x288(0x08)
	struct UBorder* Bdr_press; // 0x290(0x08)
	struct UBorder* Bdr_TierValue; // 0x298(0x08)
	struct UBorder* Border_Enough; // 0x2a0(0x08)
	struct UImage* Img_Icon; // 0x2a8(0x08)
	struct UImage* Img_Icon_NeedResearch; // 0x2b0(0x08)
	struct UTextBlock* TextBlock_149; // 0x2b8(0x08)
	struct UTextBlock* TextBlock_217; // 0x2c0(0x08)
	struct UTextBlock* TextBlock_Tier; // 0x2c8(0x08)

	void Mouse Press(); // Function WBP_SlotList.WBP_SlotList_C.Mouse Press // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Slot Selected(); // Function WBP_SlotList.WBP_SlotList_C.Slot Selected // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void SlotDeselected(); // Function WBP_SlotList.WBP_SlotList_C.SlotDeselected // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void MouseEnter(); // Function WBP_SlotList.WBP_SlotList_C.MouseEnter // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void MouseLeave(); // Function WBP_SlotList.WBP_SlotList_C.MouseLeave // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_WBP_SlotList(int32_t EntryPoint); // Function WBP_SlotList.WBP_SlotList_C.ExecuteUbergraph_WBP_SlotList // (Final|UbergraphFunction) // @ game+0x1395fe0
};

