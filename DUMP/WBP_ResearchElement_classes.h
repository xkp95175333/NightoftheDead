// WidgetBlueprintGeneratedClass WBP_ResearchElement.WBP_ResearchElement_C
// Size: 0x3e0 (Inherited: 0x328)
struct UWBP_ResearchElement_C : UResearchElementWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UBorder* Border_Background; // 0x330(0x08)
	struct UBorder* Border_State; // 0x338(0x08)
	struct UBorder* Border_StateOverlay; // 0x340(0x08)
	struct UButton* Button_142; // 0x348(0x08)
	struct UHorizontalBox* HorizontalBox_Output; // 0x350(0x08)
	struct UTextBlock* TextBlock_ResearchName; // 0x358(0x08)
	struct UWBP_SlotSmall_C* WBP_SlotSmall; // 0x360(0x08)
	struct UWBP_SlotSmall_C* WBP_SlotSmall_2; // 0x368(0x08)
	struct UWBP_SlotSmall_C* WBP_SlotSmall_3; // 0x370(0x08)
	struct UWBP_SlotSmall_C* WBP_SlotSmall_10; // 0x378(0x08)
	struct FLinearColor CompleteBorderColor; // 0x380(0x10)
	struct FLinearColor AvailableBorderColor; // 0x390(0x10)
	struct FLinearColor UnavailableBorderColor; // 0x3a0(0x10)
	struct FLinearColor CompleteOverlayColor; // 0x3b0(0x10)
	struct FLinearColor AvailableOverlayColor; // 0x3c0(0x10)
	struct FLinearColor UnavailableOverlayColor; // 0x3d0(0x10)

	void On_Border_Background_MouseButtonUp_1(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_ResearchElement.WBP_ResearchElement_C.On_Border_Background_MouseButtonUp_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	struct FEventReply OnMouseButtonDown_Background(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_ResearchElement.WBP_ResearchElement_C.OnMouseButtonDown_Background // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void PreConstruct(bool IsDesignTime); // Function WBP_ResearchElement.WBP_ResearchElement_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void Construct(); // Function WBP_ResearchElement.WBP_ResearchElement_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void OnSetResearchName(struct FText ResearchName); // Function WBP_ResearchElement.WBP_ResearchElement_C.OnSetResearchName // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1395fe0
	void OnSetResearchOutput(struct TArray<struct FEntityData> ResearchOutputs); // Function WBP_ResearchElement.WBP_ResearchElement_C.OnSetResearchOutput // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1395fe0
	void OnResearchAvailable(); // Function WBP_ResearchElement.WBP_ResearchElement_C.OnResearchAvailable // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void OnResearchCompleted(); // Function WBP_ResearchElement.WBP_ResearchElement_C.OnResearchCompleted // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void OnResearchUnavailable(); // Function WBP_ResearchElement.WBP_ResearchElement_C.OnResearchUnavailable // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_ResearchElement.WBP_ResearchElement_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1395fe0
	void CosmeticOnClick_Event_1(); // Function WBP_ResearchElement.WBP_ResearchElement_C.CosmeticOnClick_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Button_141_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_ResearchElement.WBP_ResearchElement_C.BndEvt__Button_141_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_WBP_ResearchElement(int32_t EntryPoint); // Function WBP_ResearchElement.WBP_ResearchElement_C.ExecuteUbergraph_WBP_ResearchElement // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
};

