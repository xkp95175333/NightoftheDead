// WidgetBlueprintGeneratedClass WBP_Main_Connect.WBP_Main_Connect_C
// Size: 0x270 (Inherited: 0x260)
struct UWBP_Main_Connect_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWBP_Wrapper_Confirmation_C* WBP_Wrapper_Confirmation; // 0x268(0x08)

	void PreConstruct(bool IsDesignTime); // Function WBP_Main_Connect.WBP_Main_Connect_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void SetConnectionMessage(struct FText Msg); // Function WBP_Main_Connect.WBP_Main_Connect_C.SetConnectionMessage // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_WBP_Main_Connect(int32_t EntryPoint); // Function WBP_Main_Connect.WBP_Main_Connect_C.ExecuteUbergraph_WBP_Main_Connect // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
};

