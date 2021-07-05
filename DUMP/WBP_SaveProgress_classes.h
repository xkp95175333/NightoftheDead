// WidgetBlueprintGeneratedClass WBP_SaveProgress.WBP_SaveProgress_C
// Size: 0x285 (Inherited: 0x260)
struct UWBP_SaveProgress_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* NewAnimation; // 0x268(0x08)
	struct UImage* Image_56; // 0x270(0x08)
	float Angle; // 0x278(0x04)
	float RotationSpeed; // 0x27c(0x04)
	float PausedTime; // 0x280(0x04)
	bool bPaused; // 0x284(0x01)

	enum class ESlateVisibility GetVisibility_1(); // Function WBP_SaveProgress.WBP_SaveProgress_C.GetVisibility_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	void PreConstruct(bool IsDesignTime); // Function WBP_SaveProgress.WBP_SaveProgress_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void Construct(); // Function WBP_SaveProgress.WBP_SaveProgress_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_SaveProgress.WBP_SaveProgress_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_WBP_SaveProgress(int32_t EntryPoint); // Function WBP_SaveProgress.WBP_SaveProgress_C.ExecuteUbergraph_WBP_SaveProgress // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
};

