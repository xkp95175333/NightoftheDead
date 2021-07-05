// WidgetBlueprintGeneratedClass WBP_Wrapper_ServerAdmin.WBP_Wrapper_ServerAdmin_C
// Size: 0x2fc (Inherited: 0x260)
struct UWBP_Wrapper_ServerAdmin_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UServerAdmin_C* ServerAdmin; // 0x268(0x08)
	struct UWBP_Multi_Password_C* WBP_Multi_SaveAsPrompt; // 0x270(0x08)
	struct UMultiLineEditableText* MOTD_EditBox; // 0x278(0x08)
	struct UScrollBox* ScrollBox_Players_Normal; // 0x280(0x08)
	struct UScrollBox* ScrollBox_Players_Admin; // 0x288(0x08)
	struct UScrollBox* ScrollBox_BannedPlayers; // 0x290(0x08)
	struct UCanvasPanel* NormalPanel; // 0x298(0x08)
	struct UCanvasPanel* AdminPanel; // 0x2a0(0x08)
	struct TArray<struct UWidget*> Ref_PlayerButtons; // 0x2a8(0x10)
	struct UEditableTextBox* TextBox_AdminPassword; // 0x2b8(0x08)
	struct FText EditingMOTD; // 0x2c0(0x18)
	struct UTextBlock* MOTDTextBox; // 0x2d8(0x08)
	struct UButton* SaveButton; // 0x2e0(0x08)
	struct UButton* SaveAsButton; // 0x2e8(0x08)
	struct UButton* RefreshMOTDButton; // 0x2f0(0x08)
	int32_t MOTD_Limit; // 0x2f8(0x04)

	void UpdateMOTDLength(struct FText InText); // Function WBP_Wrapper_ServerAdmin.WBP_Wrapper_ServerAdmin_C.UpdateMOTDLength // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function WBP_Wrapper_ServerAdmin.WBP_Wrapper_ServerAdmin_C.OnKeyDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnPlayerBanned_Event_1(); // Function WBP_Wrapper_ServerAdmin.WBP_Wrapper_ServerAdmin_C.OnPlayerBanned_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_Wrapper_ServerAdmin.WBP_Wrapper_ServerAdmin_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void RefreshPlayerList(); // Function WBP_Wrapper_ServerAdmin.WBP_Wrapper_ServerAdmin_C.RefreshPlayerList // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Construct(); // Function WBP_Wrapper_ServerAdmin.WBP_Wrapper_ServerAdmin_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void PreConstruct(bool IsDesignTime); // Function WBP_Wrapper_ServerAdmin.WBP_Wrapper_ServerAdmin_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void RefreshAdmin(); // Function WBP_Wrapper_ServerAdmin.WBP_Wrapper_ServerAdmin_C.RefreshAdmin // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Close(); // Function WBP_Wrapper_ServerAdmin.WBP_Wrapper_ServerAdmin_C.Close // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void BindButtonEvents(); // Function WBP_Wrapper_ServerAdmin.WBP_Wrapper_ServerAdmin_C.BindButtonEvents // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnBackButtonClicked(); // Function WBP_Wrapper_ServerAdmin.WBP_Wrapper_ServerAdmin_C.OnBackButtonClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnInviteButtonClicked(); // Function WBP_Wrapper_ServerAdmin.WBP_Wrapper_ServerAdmin_C.OnInviteButtonClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnAdminButtonClicked(); // Function WBP_Wrapper_ServerAdmin.WBP_Wrapper_ServerAdmin_C.OnAdminButtonClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnMOTDButtonClicked(); // Function WBP_Wrapper_ServerAdmin.WBP_Wrapper_ServerAdmin_C.OnMOTDButtonClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void UpdateMOTD(); // Function WBP_Wrapper_ServerAdmin.WBP_Wrapper_ServerAdmin_C.UpdateMOTD // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnMotdTextCommited(struct FText Text, enum class ETextCommit CommitMethod); // Function WBP_Wrapper_ServerAdmin.WBP_Wrapper_ServerAdmin_C.OnMotdTextCommited // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnRefreshClicked(); // Function WBP_Wrapper_ServerAdmin.WBP_Wrapper_ServerAdmin_C.OnRefreshClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnSaveButtonClicked(); // Function WBP_Wrapper_ServerAdmin.WBP_Wrapper_ServerAdmin_C.OnSaveButtonClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnSaveAsButtonClicked(); // Function WBP_Wrapper_ServerAdmin.WBP_Wrapper_ServerAdmin_C.OnSaveAsButtonClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnPasswordSubmit_Event_1(struct FString Password); // Function WBP_Wrapper_ServerAdmin.WBP_Wrapper_ServerAdmin_C.OnPasswordSubmit_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void RefreshMOTD(); // Function WBP_Wrapper_ServerAdmin.WBP_Wrapper_ServerAdmin_C.RefreshMOTD // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnMOTDTextChanged(struct FText Text); // Function WBP_Wrapper_ServerAdmin.WBP_Wrapper_ServerAdmin_C.OnMOTDTextChanged // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnPlayerBanned(); // Function WBP_Wrapper_ServerAdmin.WBP_Wrapper_ServerAdmin_C.OnPlayerBanned // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_WBP_Wrapper_ServerAdmin(int32_t EntryPoint); // Function WBP_Wrapper_ServerAdmin.WBP_Wrapper_ServerAdmin_C.ExecuteUbergraph_WBP_Wrapper_ServerAdmin // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
};

