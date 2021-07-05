// WidgetBlueprintGeneratedClass WBP_ResearchLine_Bottom.WBP_ResearchLine_Bottom_C
// Size: 0x2c0 (Inherited: 0x260)
struct UWBP_ResearchLine_Bottom_C : UResearchLineWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* Image_59; // 0x268(0x08)
	struct FSlateColor AvailableColor; // 0x270(0x28)
	struct FSlateColor UnavailableColor; // 0x298(0x28)

	void OnAvailable(); // Function WBP_ResearchLine_Bottom.WBP_ResearchLine_Bottom_C.OnAvailable // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void OnUnavailable(); // Function WBP_ResearchLine_Bottom.WBP_ResearchLine_Bottom_C.OnUnavailable // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_WBP_ResearchLine_Bottom(int32_t EntryPoint); // Function WBP_ResearchLine_Bottom.WBP_ResearchLine_Bottom_C.ExecuteUbergraph_WBP_ResearchLine_Bottom // (Final|UbergraphFunction) // @ game+0x1395fe0
};

