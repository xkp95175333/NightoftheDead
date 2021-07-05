// WidgetBlueprintGeneratedClass W_Page.W_Page_C
// Size: 0x288 (Inherited: 0x260)
struct UW_Page_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UTextBlock* BodyText; // 0x268(0x08)
	struct UTextBlock* HeadingText; // 0x270(0x08)
	struct UTextBlock* PageNumber; // 0x278(0x08)
	struct UImage* Picture; // 0x280(0x08)

	void PreConstruct(bool IsDesignTime); // Function W_Page.W_Page_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void Construct(); // Function W_Page.W_Page_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_W_Page(int32_t EntryPoint); // Function W_Page.W_Page_C.ExecuteUbergraph_W_Page // (Final|UbergraphFunction) // @ game+0x1395fe0
};

