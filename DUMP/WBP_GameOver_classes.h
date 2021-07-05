// WidgetBlueprintGeneratedClass WBP_GameOver.WBP_GameOver_C
// Size: 0x281 (Inherited: 0x260)
struct UWBP_GameOver_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UBaseButton_C* BaseButton_Continue; // 0x268(0x08)
	struct UBaseButton_C* BaseButton_Quit; // 0x270(0x08)
	struct UWBP_GameOverAnimation_C* WBP_GameOverAnimation; // 0x278(0x08)
	bool bContinue; // 0x280(0x01)

	void OnFailure_46627C04436B03106EEF62A0FF8F624C(); // Function WBP_GameOver.WBP_GameOver_C.OnFailure_46627C04436B03106EEF62A0FF8F624C // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnSuccess_46627C04436B03106EEF62A0FF8F624C(); // Function WBP_GameOver.WBP_GameOver_C.OnSuccess_46627C04436B03106EEF62A0FF8F624C // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void PreConstruct(bool IsDesignTime); // Function WBP_GameOver.WBP_GameOver_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void Construct(); // Function WBP_GameOver.WBP_GameOver_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_GameOver.WBP_GameOver_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void Quit(); // Function WBP_GameOver.WBP_GameOver_C.Quit // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__BaseButton_Continue_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(); // Function WBP_GameOver.WBP_GameOver_C.BndEvt__BaseButton_Continue_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__BaseButton_Quit_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(); // Function WBP_GameOver.WBP_GameOver_C.BndEvt__BaseButton_Quit_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_WBP_GameOver(int32_t EntryPoint); // Function WBP_GameOver.WBP_GameOver_C.ExecuteUbergraph_WBP_GameOver // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
};

