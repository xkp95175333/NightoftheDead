// WidgetBlueprintGeneratedClass WBP_Wrapper_Confirmation.WBP_Wrapper_Confirmation_C
// Size: 0x280 (Inherited: 0x260)
struct UWBP_Wrapper_Confirmation_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UBackgroundBlur* BackgroundBlur_Bg; // 0x268(0x08)
	struct UBorder* Border_Black; // 0x270(0x08)
	struct UWBP_Confirmation_C* WBP_Confirmation; // 0x278(0x08)

	void Construct(); // Function WBP_Wrapper_Confirmation.WBP_Wrapper_Confirmation_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void OnCancel(); // Function WBP_Wrapper_Confirmation.WBP_Wrapper_Confirmation_C.OnCancel // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_WBP_Wrapper_Confirmation(int32_t EntryPoint); // Function WBP_Wrapper_Confirmation.WBP_Wrapper_Confirmation_C.ExecuteUbergraph_WBP_Wrapper_Confirmation // (Final|UbergraphFunction) // @ game+0x1395fe0
};

