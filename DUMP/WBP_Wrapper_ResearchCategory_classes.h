// WidgetBlueprintGeneratedClass WBP_Wrapper_ResearchCategory.WBP_Wrapper_ResearchCategory_C
// Size: 0x310 (Inherited: 0x260)
struct UWBP_Wrapper_ResearchCategory_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWBP_ResearchCategory_C* WBP_ResearchCategory; // 0x268(0x08)
	struct UButton* BTN_Category; // 0x270(0x08)
	struct UImage* IMG_Arrow; // 0x278(0x08)
	struct UImage* Img_Icon; // 0x280(0x08)
	struct UTextBlock* TXT_Category; // 0x288(0x08)
	struct UTextBlock* TXT_Description; // 0x290(0x08)
	struct ULFResearchComponent* ResearchComponent; // 0x298(0x08)
	struct APlayerHUD* PlayerHUD; // 0x2a0(0x08)
	struct ALFCharacterPlayer* PlayerCharacter; // 0x2a8(0x08)
	enum class EResearchCategory ResearchCategory; // 0x2b0(0x01)
	char pad_2B1[0x7]; // 0x2b1(0x07)
	struct TSoftObjectPtr<struct UTexture2D> Icon; // 0x2b8(0x28)
	struct FText Category; // 0x2e0(0x18)
	struct FText Description; // 0x2f8(0x18)

	void OnLoaded_0F429116458C8DA8A6130BBD9F46C1FE(struct UObject* Loaded); // Function WBP_Wrapper_ResearchCategory.WBP_Wrapper_ResearchCategory_C.OnLoaded_0F429116458C8DA8A6130BBD9F46C1FE // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void PreConstruct(bool IsDesignTime); // Function WBP_Wrapper_ResearchCategory.WBP_Wrapper_ResearchCategory_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void Construct(); // Function WBP_Wrapper_ResearchCategory.WBP_Wrapper_ResearchCategory_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_WBP_Wrapper_ResearchCategory(int32_t EntryPoint); // Function WBP_Wrapper_ResearchCategory.WBP_Wrapper_ResearchCategory_C.ExecuteUbergraph_WBP_Wrapper_ResearchCategory // (Final|UbergraphFunction) // @ game+0x1395fe0
};

