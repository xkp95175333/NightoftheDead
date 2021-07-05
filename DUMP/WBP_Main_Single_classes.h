// WidgetBlueprintGeneratedClass WBP_Main_Single.WBP_Main_Single_C
// Size: 0x2b9 (Inherited: 0x260)
struct UWBP_Main_Single_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWBP_BtnLarge_C* Button_LoadGame; // 0x268(0x08)
	struct UWBP_BtnLarge_C* Button_NewGame; // 0x270(0x08)
	struct USpacer* Spacer_BelowNewGame; // 0x278(0x08)
	struct USpacer* Spacer_HostJoin_3; // 0x280(0x08)
	struct UVerticalBox* VBX_Buttons; // 0x288(0x08)
	struct UWBP_BtnLarge_C* WBP_BtnLarge_BackToMain; // 0x290(0x08)
	struct UWBP_BtnLarge_C* WBP_BtnLarge_Spacer; // 0x298(0x08)
	struct UWBP_BtnLarge_C* WBP_BtnLarge_Spacer_3; // 0x2a0(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_Back; // 0x2a8(0x08)
	struct UWBP_Core_MainMenu_C* MainRef; // 0x2b0(0x08)
	enum class E_Main_Multi CurrentMenu; // 0x2b8(0x01)

	void Construct(); // Function WBP_Main_Single.WBP_Main_Single_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void AnimChange(); // Function WBP_Main_Single.WBP_Main_Single_C.AnimChange // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ChangeMenu(enum class E_Main_Multi Menu); // Function WBP_Main_Single.WBP_Main_Single_C.ChangeMenu // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ShowMultiMain(); // Function WBP_Main_Single.WBP_Main_Single_C.ShowMultiMain // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_WBP_Main_Single(int32_t EntryPoint); // Function WBP_Main_Single.WBP_Main_Single_C.ExecuteUbergraph_WBP_Main_Single // (Final|UbergraphFunction) // @ game+0x1395fe0
};

