// WidgetBlueprintGeneratedClass WBP_GameGuideViewWrapper.WBP_GameGuideViewWrapper_C
// Size: 0x2c0 (Inherited: 0x260)
struct UWBP_GameGuideViewWrapper_C : UUserWidget {
	struct UWidgetAnimation* Fade; // 0x260(0x08)
	struct UWBP_GameGuideView_C* WBP_GameGuideView; // 0x268(0x08)
	struct TMap<struct FString, struct UWBP_GameGuideView_C*> CachedGameGuideViews; // 0x270(0x50)

	void Set Guide Content(struct UTexture2D* Icon, struct FText ActionName); // Function WBP_GameGuideViewWrapper.WBP_GameGuideViewWrapper_C.Set Guide Content // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
};

