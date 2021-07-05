// WidgetBlueprintGeneratedClass W_Cover.W_Cover_C
// Size: 0x2a8 (Inherited: 0x260)
struct UW_Cover_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UTextBlock* BodyText; // 0x268(0x08)
	struct UVerticalBox* CoverBox; // 0x270(0x08)
	struct UTextBlock* HeadingText; // 0x278(0x08)
	struct UTextBlock* PageNumber; // 0x280(0x08)
	struct UImage* Picture; // 0x288(0x08)
	struct UTextBlock* SpineBottom; // 0x290(0x08)
	struct UTextBlock* SpineLengthwise; // 0x298(0x08)
	struct UTextBlock* SpineTop; // 0x2a0(0x08)

	void PreConstruct(bool IsDesignTime); // Function W_Cover.W_Cover_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void Construct(); // Function W_Cover.W_Cover_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_W_Cover(int32_t EntryPoint); // Function W_Cover.W_Cover_C.ExecuteUbergraph_W_Cover // (Final|UbergraphFunction) // @ game+0x1395fe0
};

