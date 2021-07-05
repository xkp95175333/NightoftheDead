// WidgetBlueprintGeneratedClass WBP_HudWaveTimer.WBP_HudWaveTimer_C
// Size: 0x2c0 (Inherited: 0x260)
struct UWBP_HudWaveTimer_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* Image_504; // 0x268(0x08)
	struct UImage* Skul_Image; // 0x270(0x08)
	struct UImage* Skul_Image_OVerlay; // 0x278(0x08)
	struct UTextBlock* TextBlock_Day; // 0x280(0x08)
	struct UTextBlock* TextBlock_Difficulty; // 0x288(0x08)
	struct UTextBlock* TextBlock_Hour; // 0x290(0x08)
	struct UTextBlock* TextBlock_Minute; // 0x298(0x08)
	struct UImage* WaveGauge_2; // 0x2a0(0x08)
	struct UMaterialInstanceDynamic* GaugeMat; // 0x2a8(0x08)
	struct UMaterialInstanceDynamic* SkulGaugeMat; // 0x2b0(0x08)
	struct UMaterialInstanceDynamic* AlertImageMat; // 0x2b8(0x08)

	void CalculateWaveProgress(float WaveProgress, float OutWaveProgress); // Function WBP_HudWaveTimer.WBP_HudWaveTimer_C.CalculateWaveProgress // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	void Create HUDDynamic Material(struct UMaterialInstanceConstant* Material, struct UImage* Image, struct UMaterialInstanceDynamic* DynamicMaterial); // Function WBP_HudWaveTimer.WBP_HudWaveTimer_C.Create HUDDynamic Material // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	struct FText Get_TextBlock_Difficulty_Text_1(); // Function WBP_HudWaveTimer.WBP_HudWaveTimer_C.Get_TextBlock_Difficulty_Text_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	void SetWaveProgress(float Percent); // Function WBP_HudWaveTimer.WBP_HudWaveTimer_C.SetWaveProgress // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Construct(); // Function WBP_HudWaveTimer.WBP_HudWaveTimer_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_WBP_HudWaveTimer(int32_t EntryPoint); // Function WBP_HudWaveTimer.WBP_HudWaveTimer_C.ExecuteUbergraph_WBP_HudWaveTimer // (Final|UbergraphFunction) // @ game+0x1395fe0
};

