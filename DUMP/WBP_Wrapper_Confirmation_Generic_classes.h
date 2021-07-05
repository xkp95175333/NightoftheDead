// WidgetBlueprintGeneratedClass WBP_Wrapper_Confirmation_Generic.WBP_Wrapper_Confirmation_Generic_C
// Size: 0x300 (Inherited: 0x260)
struct UWBP_Wrapper_Confirmation_Generic_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UBackgroundBlur* BackgroundBlur_Bg; // 0x268(0x08)
	struct UBorder* Border_Bg; // 0x270(0x08)
	struct UWBP_Confirmation_Generic_C* WBP_Confirmation_Generic; // 0x278(0x08)
	struct FText Title; // 0x280(0x18)
	struct FText Text; // 0x298(0x18)
	struct FText Submit; // 0x2b0(0x18)
	struct FText Cancel; // 0x2c8(0x18)
	struct FMulticastInlineDelegate OnSubmit; // 0x2e0(0x10)
	struct FMulticastInlineDelegate OnCancel; // 0x2f0(0x10)

	void PreConstruct(bool IsDesignTime); // Function WBP_Wrapper_Confirmation_Generic.WBP_Wrapper_Confirmation_Generic_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void Construct(); // Function WBP_Wrapper_Confirmation_Generic.WBP_Wrapper_Confirmation_Generic_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void OnClick_Event_1(); // Function WBP_Wrapper_Confirmation_Generic.WBP_Wrapper_Confirmation_Generic_C.OnClick_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnClick_Event_2(); // Function WBP_Wrapper_Confirmation_Generic.WBP_Wrapper_Confirmation_Generic_C.OnClick_Event_2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_WBP_Wrapper_Confirmation_Generic(int32_t EntryPoint); // Function WBP_Wrapper_Confirmation_Generic.WBP_Wrapper_Confirmation_Generic_C.ExecuteUbergraph_WBP_Wrapper_Confirmation_Generic // (Final|UbergraphFunction) // @ game+0x1395fe0
	void OnCancel__DelegateSignature(); // Function WBP_Wrapper_Confirmation_Generic.WBP_Wrapper_Confirmation_Generic_C.OnCancel__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnSubmit__DelegateSignature(); // Function WBP_Wrapper_Confirmation_Generic.WBP_Wrapper_Confirmation_Generic_C.OnSubmit__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
};

