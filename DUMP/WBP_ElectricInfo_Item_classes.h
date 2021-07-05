// WidgetBlueprintGeneratedClass WBP_ElectricInfo_Item.WBP_ElectricInfo_Item_C
// Size: 0x29d (Inherited: 0x260)
struct UWBP_ElectricInfo_Item_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UTextBlock* TextBlock_Colon; // 0x268(0x08)
	struct UTextBlock* TextBlock_Key; // 0x270(0x08)
	struct UTextBlock* TextBlock_Value; // 0x278(0x08)
	struct FText Text; // 0x280(0x18)
	int32_t Value; // 0x298(0x04)
	bool bIsCollapsible; // 0x29c(0x01)

	void SetFont(struct FSlateFontInfo NewFont); // Function WBP_ElectricInfo_Item.WBP_ElectricInfo_Item_C.SetFont // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void SetValue(int32_t Value); // Function WBP_ElectricInfo_Item.WBP_ElectricInfo_Item_C.SetValue // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void PreConstruct(bool IsDesignTime); // Function WBP_ElectricInfo_Item.WBP_ElectricInfo_Item_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_WBP_ElectricInfo_Item(int32_t EntryPoint); // Function WBP_ElectricInfo_Item.WBP_ElectricInfo_Item_C.ExecuteUbergraph_WBP_ElectricInfo_Item // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
};

