// WidgetBlueprintGeneratedClass WBP_Multi_Ip.WBP_Multi_Ip_C
// Size: 0x2c8 (Inherited: 0x260)
struct UWBP_Multi_Ip_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UBorder* Border_Background; // 0x268(0x08)
	struct UBorder* Border_State; // 0x270(0x08)
	struct UBorder* Border_StateOverlay; // 0x278(0x08)
	struct UWBP_BtnPanel_C* Btn_Cancel; // 0x280(0x08)
	struct UWBP_BtnPanel_C* Btn_Submit; // 0x288(0x08)
	struct UEditableTextBox* EditableTextBox_Password; // 0x290(0x08)
	struct UImage* Image_117; // 0x298(0x08)
	struct UTextBlock* TextBlock_66; // 0x2a0(0x08)
	struct FMulticastInlineDelegate OnIpSubmit; // 0x2a8(0x10)
	struct FMulticastInlineDelegate OnIpCancel; // 0x2b8(0x10)

	void PreConstruct(bool IsDesignTime); // Function WBP_Multi_Ip.WBP_Multi_Ip_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void Construct(); // Function WBP_Multi_Ip.WBP_Multi_Ip_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void OnClicked_Cancel(); // Function WBP_Multi_Ip.WBP_Multi_Ip_C.OnClicked_Cancel // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnClicked_Submit(); // Function WBP_Multi_Ip.WBP_Multi_Ip_C.OnClicked_Submit // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_WBP_Multi_Ip(int32_t EntryPoint); // Function WBP_Multi_Ip.WBP_Multi_Ip_C.ExecuteUbergraph_WBP_Multi_Ip // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
	void OnIpCancel__DelegateSignature(); // Function WBP_Multi_Ip.WBP_Multi_Ip_C.OnIpCancel__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnIpSubmit__DelegateSignature(struct FString IP); // Function WBP_Multi_Ip.WBP_Multi_Ip_C.OnIpSubmit__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
};

