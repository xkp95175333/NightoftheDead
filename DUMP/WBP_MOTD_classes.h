// WidgetBlueprintGeneratedClass WBP_MOTD.WBP_MOTD_C
// Size: 0x294 (Inherited: 0x260)
struct UWBP_MOTD_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* FadeIn; // 0x268(0x08)
	struct UTextBlock* TextBlock_MOTD; // 0x270(0x08)
	struct FText Message; // 0x278(0x18)
	float LifeTime; // 0x290(0x04)

	void PreConstruct(bool IsDesignTime); // Function WBP_MOTD.WBP_MOTD_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void Construct(); // Function WBP_MOTD.WBP_MOTD_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void FadeOut(); // Function WBP_MOTD.WBP_MOTD_C.FadeOut // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_WBP_MOTD(int32_t EntryPoint); // Function WBP_MOTD.WBP_MOTD_C.ExecuteUbergraph_WBP_MOTD // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
};

