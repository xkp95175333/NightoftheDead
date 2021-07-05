// WidgetBlueprintGeneratedClass WBP_Main_Multi_HostGame.WBP_Main_Multi_HostGame_C
// Size: 0x349 (Inherited: 0x260)
struct UWBP_Main_Multi_HostGame_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UBaseButton_C* Button_CreateLobby; // 0x268(0x08)
	struct UButton* Button_Down; // 0x270(0x08)
	struct UButton* Button_Up; // 0x278(0x08)
	struct UCheckBox* CheckBox_Public; // 0x280(0x08)
	struct UEditableTextBox* EditableText_Password; // 0x288(0x08)
	struct UEditableTextBox* EditableText_Players; // 0x290(0x08)
	struct UEditableTextBox* EditableText_ServerName; // 0x298(0x08)
	struct UHorizontalBox* HorizontalBox_Mode; // 0x2a0(0x08)
	struct UHorizontalBox* HorizontalBox_Public; // 0x2a8(0x08)
	struct UImage* Image_117; // 0x2b0(0x08)
	struct UImage* Image_237; // 0x2b8(0x08)
	struct UTextBlock* TextBlock_GameMode; // 0x2c0(0x08)
	struct UTextBlock* TextBlock_GameSetting; // 0x2c8(0x08)
	struct UWBP_Line2px_C* WBP_Line2px_2; // 0x2d0(0x08)
	struct FString CurrentGameMode; // 0x2d8(0x10)
	struct FString GameMode_PvE; // 0x2e8(0x10)
	struct FString GameMode_PvP; // 0x2f8(0x10)
	int32_t MaxPlayers; // 0x308(0x04)
	char pad_30C[0x4]; // 0x30c(0x04)
	struct FString SessionName; // 0x310(0x10)
	struct FString SessionPassword; // 0x320(0x10)
	bool bIsPublic; // 0x330(0x01)
	bool bIsLoadedGame; // 0x331(0x01)
	char pad_332[0x6]; // 0x332(0x06)
	struct FMulticastInlineDelegate OnMultiGameLoad; // 0x338(0x10)
	bool bIsCreated; // 0x348(0x01)

	void OnFailure_A73E6EFB4C506426C1FB99860AF040CB(); // Function WBP_Main_Multi_HostGame.WBP_Main_Multi_HostGame_C.OnFailure_A73E6EFB4C506426C1FB99860AF040CB // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnSuccess_A73E6EFB4C506426C1FB99860AF040CB(); // Function WBP_Main_Multi_HostGame.WBP_Main_Multi_HostGame_C.OnSuccess_A73E6EFB4C506426C1FB99860AF040CB // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Button_Up_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function WBP_Main_Multi_HostGame.WBP_Main_Multi_HostGame_C.BndEvt__Button_Up_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__EditableText_K2Node_ComponentBoundEvent_2_OnEditableTextCommittedEvent__DelegateSignature(struct FText Text, enum class ETextCommit CommitMethod); // Function WBP_Main_Multi_HostGame.WBP_Main_Multi_HostGame_C.BndEvt__EditableText_K2Node_ComponentBoundEvent_2_OnEditableTextCommittedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Button_Down_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_Main_Multi_HostGame.WBP_Main_Multi_HostGame_C.BndEvt__Button_Down_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void Construct(); // Function WBP_Main_Multi_HostGame.WBP_Main_Multi_HostGame_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void CreateLobby(); // Function WBP_Main_Multi_HostGame.WBP_Main_Multi_HostGame_C.CreateLobby // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__EditableText_ServerName_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature(struct FText Text, enum class ETextCommit CommitMethod); // Function WBP_Main_Multi_HostGame.WBP_Main_Multi_HostGame_C.BndEvt__EditableText_ServerName_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__EditableText_Password_K2Node_ComponentBoundEvent_4_OnEditableTextChangedEvent__DelegateSignature(struct FText Text); // Function WBP_Main_Multi_HostGame.WBP_Main_Multi_HostGame_C.BndEvt__EditableText_Password_K2Node_ComponentBoundEvent_4_OnEditableTextChangedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__CheckBox_Public_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked); // Function WBP_Main_Multi_HostGame.WBP_Main_Multi_HostGame_C.BndEvt__CheckBox_Public_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Button_CreateLobby_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature(); // Function WBP_Main_Multi_HostGame.WBP_Main_Multi_HostGame_C.BndEvt__Button_CreateLobby_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void SetGameLoading(bool bIsLoading); // Function WBP_Main_Multi_HostGame.WBP_Main_Multi_HostGame_C.SetGameLoading // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void HideGameSettings(); // Function WBP_Main_Multi_HostGame.WBP_Main_Multi_HostGame_C.HideGameSettings // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void CreateLoadedServer(); // Function WBP_Main_Multi_HostGame.WBP_Main_Multi_HostGame_C.CreateLoadedServer // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_WBP_Main_Multi_HostGame(int32_t EntryPoint); // Function WBP_Main_Multi_HostGame.WBP_Main_Multi_HostGame_C.ExecuteUbergraph_WBP_Main_Multi_HostGame // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
	void OnMultiGameLoad__DelegateSignature(); // Function WBP_Main_Multi_HostGame.WBP_Main_Multi_HostGame_C.OnMultiGameLoad__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
};

