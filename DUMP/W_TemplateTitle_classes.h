// WidgetBlueprintGeneratedClass W_TemplateTitle.W_TemplateTitle_C
// Size: 0x298 (Inherited: 0x260)
struct UW_TemplateTitle_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct USizeBox* MySizeBox; // 0x268(0x08)
	struct UTextBlock* TextBlock_Title; // 0x270(0x08)
	struct FText ShowTitle; // 0x278(0x18)
	bool First?; // 0x290(0x01)
	char pad_291[0x3]; // 0x291(0x03)
	float CustomSize; // 0x294(0x04)

	void ChangeTitleColor(struct FSlateColor NewColorAndOpacity); // Function W_TemplateTitle.W_TemplateTitle_C.ChangeTitleColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void PreConstruct(bool IsDesignTime); // Function W_TemplateTitle.W_TemplateTitle_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_W_TemplateTitle(int32_t EntryPoint); // Function W_TemplateTitle.W_TemplateTitle_C.ExecuteUbergraph_W_TemplateTitle // (Final|UbergraphFunction) // @ game+0x1395fe0
};

