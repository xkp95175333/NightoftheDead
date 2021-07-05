// WidgetBlueprintGeneratedClass WBP_IngameTutorial.WBP_IngameTutorial_C
// Size: 0x329 (Inherited: 0x268)
struct UWBP_IngameTutorial_C : UTutorialWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWidgetAnimation* FadeInAll; // 0x270(0x08)
	struct UWidgetAnimation* FadeIn; // 0x278(0x08)
	struct UHorizontalBox* HorizontalBox_RewardItems; // 0x280(0x08)
	struct UImage* Image_91; // 0x288(0x08)
	struct UImage* Image_CategoryIcon; // 0x290(0x08)
	struct UImage* Image_Icon; // 0x298(0x08)
	struct UImage* Image_Key; // 0x2a0(0x08)
	struct UScaleBox* ScaleBox_Category; // 0x2a8(0x08)
	struct USizeBox* SizeBox_CategoryIcon; // 0x2b0(0x08)
	struct USizeBox* SizeBox_Icon; // 0x2b8(0x08)
	struct USizeBox* SizeBox_Key; // 0x2c0(0x08)
	struct USizeBox* SizeBox_Tutorial; // 0x2c8(0x08)
	struct UTextBlock* Text_Category; // 0x2d0(0x08)
	struct UTextBlock* Text_Item; // 0x2d8(0x08)
	struct UTextBlock* TextBlock_CategoryIconDash; // 0x2e0(0x08)
	struct UTextBlock* TextBlock_IconDash; // 0x2e8(0x08)
	struct UTextBlock* TextBlock_KeyDash; // 0x2f0(0x08)
	struct UTextBlock* TextBlock_Reward; // 0x2f8(0x08)
	struct UVerticalBox* VerticalBox_Reward; // 0x300(0x08)
	struct UWBP_Line2px_C* WBP_Line2px; // 0x308(0x08)
	struct UWBP_Wrapper_SlotSmall_C* WBP_Wrapper_SlotSmall; // 0x310(0x08)
	struct UWBP_Wrapper_SlotSmall_C* WBP_Wrapper_SlotSmall_108; // 0x318(0x08)
	bool bIsHiding; // 0x320(0x01)
	char pad_321[0x3]; // 0x321(0x03)
	int32_t TutorialDay; // 0x324(0x04)
	bool bIsTutorialSet; // 0x328(0x01)

	void Construct(); // Function WBP_IngameTutorial.WBP_IngameTutorial_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_IngameTutorial.WBP_IngameTutorial_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void ShowTutorial(int32_t TutorialIndex, struct FTutorialData TutorialData); // Function WBP_IngameTutorial.WBP_IngameTutorial_C.ShowTutorial // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void CompleteTutorial(int32_t TutorialIndex, struct FTutorialData TutorialData); // Function WBP_IngameTutorial.WBP_IngameTutorial_C.CompleteTutorial // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1395fe0
	void OnCompleteAllTutorial(); // Function WBP_IngameTutorial.WBP_IngameTutorial_C.OnCompleteAllTutorial // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_WBP_IngameTutorial(int32_t EntryPoint); // Function WBP_IngameTutorial.WBP_IngameTutorial_C.ExecuteUbergraph_WBP_IngameTutorial // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
};

