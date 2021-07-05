// WidgetBlueprintGeneratedClass WBP_ToolHUD.WBP_ToolHUD_C
// Size: 0x2b8 (Inherited: 0x260)
struct UWBP_ToolHUD_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UBorder* Border_Icon_Cancel; // 0x268(0x08)
	struct UBorder* Border_Icon_Use; // 0x270(0x08)
	struct UBorder* Border_Icon_Wheel; // 0x278(0x08)
	struct UImage* Image_338; // 0x280(0x08)
	struct USizeBox* SizeBox_Cancel; // 0x288(0x08)
	struct USizeBox* SizeBox_Use; // 0x290(0x08)
	struct USizeBox* SizeBox_Wheel; // 0x298(0x08)
	struct UTextBlock* TextBlock_Cancel; // 0x2a0(0x08)
	struct UTextBlock* TextBlock_Use; // 0x2a8(0x08)
	struct UTextBlock* TextBlock_Wheel; // 0x2b0(0x08)

	enum class ESlateVisibility Get_SizeBox_Cancel_Visibility_1(); // Function WBP_ToolHUD.WBP_ToolHUD_C.Get_SizeBox_Cancel_Visibility_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	void PreConstruct(bool IsDesignTime); // Function WBP_ToolHUD.WBP_ToolHUD_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_ToolHUD.WBP_ToolHUD_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_WBP_ToolHUD(int32_t EntryPoint); // Function WBP_ToolHUD.WBP_ToolHUD_C.ExecuteUbergraph_WBP_ToolHUD // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
};

