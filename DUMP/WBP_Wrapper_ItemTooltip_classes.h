// WidgetBlueprintGeneratedClass WBP_Wrapper_ItemTooltip.WBP_Wrapper_ItemTooltip_C
// Size: 0x404 (Inherited: 0x358)
struct UWBP_Wrapper_ItemTooltip_C : UTooltipWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x358(0x08)
	struct UWBP_ItemTooltip_C* WBP_ItemTooltip; // 0x360(0x08)
	enum class ESlateVisibility Currently Equipped; // 0x368(0x01)
	bool Is Weapon; // 0x369(0x01)
	char pad_36A[0x6]; // 0x36a(0x06)
	struct UDataTable* TypeTable; // 0x370(0x08)
	struct FText TypeString; // 0x378(0x18)
	float ValueString; // 0x390(0x04)
	char pad_394[0x4]; // 0x394(0x04)
	struct FText SineString; // 0x398(0x18)
	struct FText PostFixText; // 0x3b0(0x18)
	struct UTextBlock* ItemType; // 0x3c8(0x08)
	struct UTextBlock* ItemName; // 0x3d0(0x08)
	struct UTextBlock* ItemDescription; // 0x3d8(0x08)
	struct FVector2D ToolTipCursorOffset; // 0x3e0(0x08)
	struct UTextBlock* ItemDescription_Additional; // 0x3e8(0x08)
	struct UTextBlock* ItemDescription_Additional_Value; // 0x3f0(0x08)
	struct UVerticalBox* AdditionalTooltip; // 0x3f8(0x08)
	float RateString; // 0x400(0x04)

	void SetStatText(); // Function WBP_Wrapper_ItemTooltip.WBP_Wrapper_ItemTooltip_C.SetStatText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void DateToText(struct FGameDate Date, struct FText Text); // Function WBP_Wrapper_ItemTooltip.WBP_Wrapper_ItemTooltip_C.DateToText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_Wrapper_ItemTooltip.WBP_Wrapper_ItemTooltip_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void Construct(); // Function WBP_Wrapper_ItemTooltip.WBP_Wrapper_ItemTooltip_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void SetItemTooltip(struct FInventoryItem Item); // Function WBP_Wrapper_ItemTooltip.WBP_Wrapper_ItemTooltip_C.SetItemTooltip // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ShowTooltip(); // Function WBP_Wrapper_ItemTooltip.WBP_Wrapper_ItemTooltip_C.ShowTooltip // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void HideTooltip(); // Function WBP_Wrapper_ItemTooltip.WBP_Wrapper_ItemTooltip_C.HideTooltip // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void PreConstruct(bool IsDesignTime); // Function WBP_Wrapper_ItemTooltip.WBP_Wrapper_ItemTooltip_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_WBP_Wrapper_ItemTooltip(int32_t EntryPoint); // Function WBP_Wrapper_ItemTooltip.WBP_Wrapper_ItemTooltip_C.ExecuteUbergraph_WBP_Wrapper_ItemTooltip // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
};

