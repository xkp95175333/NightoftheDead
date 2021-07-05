// WidgetBlueprintGeneratedClass WBP_CircularIndicator.WBP_CircularIndicator_C
// Size: 0x278 (Inherited: 0x260)
struct UWBP_CircularIndicator_C : UCircularWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* WaveGauge_2; // 0x268(0x08)
	struct UMaterialInstanceDynamic* GaugeMat; // 0x270(0x08)

	void Construct(); // Function WBP_CircularIndicator.WBP_CircularIndicator_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void SetProgress(float Value); // Function WBP_CircularIndicator.WBP_CircularIndicator_C.SetProgress // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_WBP_CircularIndicator(int32_t EntryPoint); // Function WBP_CircularIndicator.WBP_CircularIndicator_C.ExecuteUbergraph_WBP_CircularIndicator // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
};

