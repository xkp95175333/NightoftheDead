// WidgetBlueprintGeneratedClass WBP_Confirmation.WBP_Confirmation_C
// Size: 0x2b0 (Inherited: 0x260)
struct UWBP_Confirmation_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UBorder* Border_Background; // 0x268(0x08)
	struct UBorder* Border_State; // 0x270(0x08)
	struct UBorder* Border_StateOverlay; // 0x278(0x08)
	struct UTextBlock* TextBlock_Message; // 0x280(0x08)
	struct UTextBlock* TextBlock_Title; // 0x288(0x08)
	struct UWBP_BtnPanel_Confirm_C* WBP_BtnPanel_Confirm_Cancel; // 0x290(0x08)
	struct UWBP_BtnPanel_Confirm_C* WBP_BtnPanel_Confirm_Yes; // 0x298(0x08)
	struct FMulticastInlineDelegate OnConfirmationCancel; // 0x2a0(0x10)

	void Construct(); // Function WBP_Confirmation.WBP_Confirmation_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void OnClicked_Cancel(); // Function WBP_Confirmation.WBP_Confirmation_C.OnClicked_Cancel // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnClicked_Submit(); // Function WBP_Confirmation.WBP_Confirmation_C.OnClicked_Submit // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_WBP_Confirmation(int32_t EntryPoint); // Function WBP_Confirmation.WBP_Confirmation_C.ExecuteUbergraph_WBP_Confirmation // (Final|UbergraphFunction) // @ game+0x1395fe0
	void OnConfirmationCancel__DelegateSignature(); // Function WBP_Confirmation.WBP_Confirmation_C.OnConfirmationCancel__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
};

