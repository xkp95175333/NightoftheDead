// WidgetBlueprintGeneratedClass W_CreditsTitleName.W_CreditsTitleName_C
// Size: 0x318 (Inherited: 0x260)
struct UW_CreditsTitleName_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct USizeBox* MySizeBox; // 0x268(0x08)
	struct UTextBlock* TextBlock_Name; // 0x270(0x08)
	float HeightSize; // 0x278(0x04)
	float BottomSize; // 0x27c(0x04)
	struct FText Name; // 0x280(0x18)
	struct FSlateFontInfo Font; // 0x298(0x58)
	struct FSlateColor FontColor; // 0x2f0(0x28)

	void PreConstruct(bool IsDesignTime); // Function W_CreditsTitleName.W_CreditsTitleName_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_W_CreditsTitleName(int32_t EntryPoint); // Function W_CreditsTitleName.W_CreditsTitleName_C.ExecuteUbergraph_W_CreditsTitleName // (Final|UbergraphFunction) // @ game+0x1395fe0
};

