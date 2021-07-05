// WidgetBlueprintGeneratedClass WBP_Wrapper_ToolHUD.WBP_Wrapper_ToolHUD_C
// Size: 0x270 (Inherited: 0x260)
struct UWBP_Wrapper_ToolHUD_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWBP_ToolHUD_C* WBP_ToolHUD; // 0x268(0x08)

	enum class ESlateVisibility GetVisibility_1(); // Function WBP_Wrapper_ToolHUD.WBP_Wrapper_ToolHUD_C.GetVisibility_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_Wrapper_ToolHUD.WBP_Wrapper_ToolHUD_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void SelectContentEntity(struct FName ToolName); // Function WBP_Wrapper_ToolHUD.WBP_Wrapper_ToolHUD_C.SelectContentEntity // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_WBP_Wrapper_ToolHUD(int32_t EntryPoint); // Function WBP_Wrapper_ToolHUD.WBP_Wrapper_ToolHUD_C.ExecuteUbergraph_WBP_Wrapper_ToolHUD // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
};

