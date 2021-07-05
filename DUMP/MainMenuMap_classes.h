// BlueprintGeneratedClass MainMenuMap.MainMenuMap_C
// Size: 0x260 (Inherited: 0x228)
struct AMainMenuMap_C : ALevelScriptActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x228(0x08)
	struct UBP_MyGameInstance_C* MyGameInstanceRef; // 0x230(0x08)
	enum class E_TemplateGraphic TempResolution; // 0x238(0x01)
	enum class E_TemplateGraphic TempScreenMode; // 0x239(0x01)
	char pad_23A[0x6]; // 0x23a(0x06)
	struct UWBP_Wrapper_Splash_C* IntroRef; // 0x240(0x08)
	struct UWBP_Core_MainMenu_C* MenuWidgetRef; // 0x248(0x08)
	struct AAmbientSound* amb_title_cue_5_ExecuteUbergraph_MainMenuMap_RefProperty; // 0x250(0x08)
	struct AAmbientSound* Post-Mortem_Cue_21_ExecuteUbergraph_MainMenuMap_RefProperty; // 0x258(0x08)

	void InpActEvt_AnyKey_K2Node_InputKeyEvent_1(struct FKey Key); // Function MainMenuMap.MainMenuMap_C.InpActEvt_AnyKey_K2Node_InputKeyEvent_1 // (BlueprintEvent) // @ game+0x1395fe0
	void ReceiveBeginPlay(); // Function MainMenuMap.MainMenuMap_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1395fe0
	void ContinueLoadWithIntro(); // Function MainMenuMap.MainMenuMap_C.ContinueLoadWithIntro // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ContinueLoadWithoutIntro(); // Function MainMenuMap.MainMenuMap_C.ContinueLoadWithoutIntro // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_MainMenuMap(int32_t EntryPoint); // Function MainMenuMap.MainMenuMap_C.ExecuteUbergraph_MainMenuMap // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
};

