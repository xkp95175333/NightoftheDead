// WidgetBlueprintGeneratedClass WBP_ImageButton.WBP_ImageButton_C
// Size: 0x368 (Inherited: 0x260)
struct UWBP_ImageButton_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UButton* Button_Root; // 0x268(0x08)
	struct UImage* Image_Background; // 0x270(0x08)
	struct UImage* Image_Texture; // 0x278(0x08)
	struct UTextBlock* TextBlock_ButtonText; // 0x280(0x08)
	struct TSoftObjectPtr<struct UTexture2D> Image; // 0x288(0x28)
	struct FSlateColor TintColor; // 0x2b0(0x28)
	struct TSoftObjectPtr<struct UTexture2D> Image_Bg; // 0x2d8(0x28)
	struct FSlateColor BgTint; // 0x300(0x28)
	struct FText ButtonText; // 0x328(0x18)
	struct FSlateColor FontColor; // 0x340(0x28)

	void PreConstruct(bool IsDesignTime); // Function WBP_ImageButton.WBP_ImageButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_WBP_ImageButton(int32_t EntryPoint); // Function WBP_ImageButton.WBP_ImageButton_C.ExecuteUbergraph_WBP_ImageButton // (Final|UbergraphFunction) // @ game+0x1395fe0
};

