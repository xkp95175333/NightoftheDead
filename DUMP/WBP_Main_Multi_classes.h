// WidgetBlueprintGeneratedClass WBP_Main_Multi.WBP_Main_Multi_C
// Size: 0x331 (Inherited: 0x260)
struct UWBP_Main_Multi_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UBackgroundBlur* BackgroundBlur_Join; // 0x268(0x08)
	struct UBaseButton_C* BaseButton_Guide; // 0x270(0x08)
	struct UBaseButton_C* BaseButton_Rent; // 0x278(0x08)
	struct UWBP_BtnLarge_C* Button_Host; // 0x280(0x08)
	struct UWBP_BtnLarge_C* Button_Host_Load; // 0x288(0x08)
	struct UWBP_BtnLarge_C* Button_Host_NewGame; // 0x290(0x08)
	struct UWBP_BtnLarge_C* Button_Join; // 0x298(0x08)
	struct UWBP_BtnLarge_C* Button_Type_Listen; // 0x2a0(0x08)
	struct UWBP_BtnLarge_C* Button_Type_Official; // 0x2a8(0x08)
	struct UWBP_BtnLarge_C* Button_Type_Unofficial; // 0x2b0(0x08)
	struct UHorizontalBox* HorizontalBox_Server; // 0x2b8(0x08)
	struct USpacer* Spacer_HostJoin; // 0x2c0(0x08)
	struct USpacer* Spacer_HostJoin_3; // 0x2c8(0x08)
	struct USizeBox* SZX_Join; // 0x2d0(0x08)
	struct UVerticalBox* VBX_Buttons; // 0x2d8(0x08)
	struct UWBP_BtnLarge_C* WBP_BtnLarge_BackToMain; // 0x2e0(0x08)
	struct UWBP_BtnLarge_C* WBP_BtnLarge_BackToPrev; // 0x2e8(0x08)
	struct UWBP_BtnLarge_C* WBP_BtnLarge_Spacer; // 0x2f0(0x08)
	struct UWBP_BtnLarge_C* WBP_BtnLarge_Spacer_3; // 0x2f8(0x08)
	struct UWBP_Main_Multi_HostGame_C* WBP_MainMenu_Multiplayer_HostGame_188; // 0x300(0x08)
	struct UWBP_Main_Multi_Join_C* WBP_MainMenu_Multiplayer_Join; // 0x308(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_Back; // 0x310(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_Host; // 0x318(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_MultiMain; // 0x320(0x08)
	struct UWBP_Core_MainMenu_C* MainRef; // 0x328(0x08)
	enum class E_Main_Multi CurrentMenu; // 0x330(0x01)

	void Construct(); // Function WBP_Main_Multi.WBP_Main_Multi_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void AnimChange(); // Function WBP_Main_Multi.WBP_Main_Multi_C.AnimChange // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnClick_Host(); // Function WBP_Main_Multi.WBP_Main_Multi_C.OnClick_Host // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ChangeMenu(enum class E_Main_Multi Menu); // Function WBP_Main_Multi.WBP_Main_Multi_C.ChangeMenu // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnBack(); // Function WBP_Main_Multi.WBP_Main_Multi_C.OnBack // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnClick_HostNewGame(); // Function WBP_Main_Multi.WBP_Main_Multi_C.OnClick_HostNewGame // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ShowMultiMain(); // Function WBP_Main_Multi.WBP_Main_Multi_C.ShowMultiMain // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnClick_Join(); // Function WBP_Main_Multi.WBP_Main_Multi_C.OnClick_Join // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Button_Host_Load_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature(); // Function WBP_Main_Multi.WBP_Main_Multi_C.BndEvt__Button_Host_Load_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void OnClick_JoinBack(); // Function WBP_Main_Multi.WBP_Main_Multi_C.OnClick_JoinBack // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void MakeLoadEnable(); // Function WBP_Main_Multi.WBP_Main_Multi_C.MakeLoadEnable // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnClick_HostNewGameFromMain(); // Function WBP_Main_Multi.WBP_Main_Multi_C.OnClick_HostNewGameFromMain // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnClick_Official(); // Function WBP_Main_Multi.WBP_Main_Multi_C.OnClick_Official // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnClick_Unofficial(); // Function WBP_Main_Multi.WBP_Main_Multi_C.OnClick_Unofficial // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnClick_Listen(); // Function WBP_Main_Multi.WBP_Main_Multi_C.OnClick_Listen // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ShowServerRental(); // Function WBP_Main_Multi.WBP_Main_Multi_C.ShowServerRental // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void HideServerRental(); // Function WBP_Main_Multi.WBP_Main_Multi_C.HideServerRental // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__BaseButton_Guide_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(); // Function WBP_Main_Multi.WBP_Main_Multi_C.BndEvt__BaseButton_Guide_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__BaseButton_Rent_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(); // Function WBP_Main_Multi.WBP_Main_Multi_C.BndEvt__BaseButton_Rent_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_WBP_Main_Multi(int32_t EntryPoint); // Function WBP_Main_Multi.WBP_Main_Multi_C.ExecuteUbergraph_WBP_Main_Multi // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
};

