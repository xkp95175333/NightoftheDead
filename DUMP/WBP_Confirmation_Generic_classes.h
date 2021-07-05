// WidgetBlueprintGeneratedClass WBP_Confirmation_Generic.WBP_Confirmation_Generic_C
// Size: 0x2a0 (Inherited: 0x260)
struct UWBP_Confirmation_Generic_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UBorder* Border_Background; // 0x268(0x08)
	struct UBorder* Border_State; // 0x270(0x08)
	struct UBorder* Border_StateOverlay; // 0x278(0x08)
	struct UTextBlock* TextBlock_Message; // 0x280(0x08)
	struct UTextBlock* TextBlock_Title; // 0x288(0x08)
	struct UWBP_BtnPanel_Confirm_C* WBP_BtnPanel_Confirm_Cancel; // 0x290(0x08)
	struct UWBP_BtnPanel_Confirm_C* WBP_BtnPanel_Confirm_Yes; // 0x298(0x08)

	void Construct(); // Function WBP_Confirmation_Generic.WBP_Confirmation_Generic_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_WBP_Confirmation_Generic(int32_t EntryPoint); // Function WBP_Confirmation_Generic.WBP_Confirmation_Generic_C.ExecuteUbergraph_WBP_Confirmation_Generic // (Final|UbergraphFunction) // @ game+0x1395fe0
};

