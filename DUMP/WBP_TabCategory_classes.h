// WidgetBlueprintGeneratedClass WBP_TabCategory.WBP_TabCategory_C
// Size: 0x318 (Inherited: 0x260)
struct UWBP_TabCategory_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UBorder* Bdr_TabImage; // 0x268(0x08)
	struct UButton* Button_1; // 0x270(0x08)
	struct UImage* Image; // 0x278(0x08)
	struct UImage* Image_2; // 0x280(0x08)
	struct UImage* Image_3; // 0x288(0x08)
	struct UImage* Image_4; // 0x290(0x08)
	struct UImage* Image_46; // 0x298(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_50; // 0x2a0(0x08)
	bool bIsSelected; // 0x2a8(0x01)
	enum class ECraftCategory TabCategory; // 0x2a9(0x01)
	char pad_2AA[0x6]; // 0x2aa(0x06)
	struct TMap<enum class ECraftCategory, struct UTexture2D*> CategoryImages; // 0x2b0(0x50)
	struct FText NeedUpgradeText; // 0x300(0x18)

	void TabSelect(bool bSuccess); // Function WBP_TabCategory.WBP_TabCategory_C.TabSelect // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void IsDisabledCategory(bool IsDisabled); // Function WBP_TabCategory.WBP_TabCategory_C.IsDisabledCategory // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function WBP_TabCategory.WBP_TabCategory_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function WBP_TabCategory.WBP_TabCategory_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void Hover(); // Function WBP_TabCategory.WBP_TabCategory_C.Hover // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Unhover(); // Function WBP_TabCategory.WBP_TabCategory_C.Unhover // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void TabDeselected(); // Function WBP_TabCategory.WBP_TabCategory_C.TabDeselected // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void SetCategory(enum class ECraftCategory Category); // Function WBP_TabCategory.WBP_TabCategory_C.SetCategory // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void SetCategoryIcon(enum class ECraftCategory Category); // Function WBP_TabCategory.WBP_TabCategory_C.SetCategoryIcon // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_WBP_TabCategory(int32_t EntryPoint); // Function WBP_TabCategory.WBP_TabCategory_C.ExecuteUbergraph_WBP_TabCategory // (Final|UbergraphFunction) // @ game+0x1395fe0
};

