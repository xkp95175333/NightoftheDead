// WidgetBlueprintGeneratedClass WBP_CheatWindow.WBP_CheatWindow_C
// Size: 0x2a8 (Inherited: 0x260)
struct UWBP_CheatWindow_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UBorder* Border_Background; // 0x268(0x08)
	struct UBorder* Border_State; // 0x270(0x08)
	struct UBorder* Border_StateOverlay; // 0x278(0x08)
	struct UWBP_BtnPanel_C* Btn_Cancel; // 0x280(0x08)
	struct UWBP_BtnPanel_C* Btn_Submit; // 0x288(0x08)
	struct UEditableTextBox* EditableTextBox_Password; // 0x290(0x08)
	struct UImage* Image_117; // 0x298(0x08)
	struct UTextBlock* TextBlock_66; // 0x2a0(0x08)

	void PreConstruct(bool IsDesignTime); // Function WBP_CheatWindow.WBP_CheatWindow_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void Construct(); // Function WBP_CheatWindow.WBP_CheatWindow_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void OnClicked_Cancel(); // Function WBP_CheatWindow.WBP_CheatWindow_C.OnClicked_Cancel // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnClicked_Submit(); // Function WBP_CheatWindow.WBP_CheatWindow_C.OnClicked_Submit // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_WBP_CheatWindow(int32_t EntryPoint); // Function WBP_CheatWindow.WBP_CheatWindow_C.ExecuteUbergraph_WBP_CheatWindow // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
};

