// WidgetBlueprintGeneratedClass WBP_Main_Multi_Join.WBP_Main_Multi_Join_C
// Size: 0x3f2 (Inherited: 0x260)
struct UWBP_Main_Multi_Join_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UBaseButton_C* Btn_Join; // 0x268(0x08)
	struct UBaseButton_C* Btn_Refresh; // 0x270(0x08)
	struct UBaseButton_C* Button_Back; // 0x278(0x08)
	struct UBaseButton_C* Button_IP_2; // 0x280(0x08)
	struct UEditableTextBox* EditableTextBox_Search; // 0x288(0x08)
	struct UScrollBox* ScrollBox_ServerList; // 0x290(0x08)
	struct UTextBlock* TextBlock_PlayerName; // 0x298(0x08)
	struct UTextBlock* TextBlock_State; // 0x2a0(0x08)
	struct UVerticalBox* VerticalBox_Multiplayer; // 0x2a8(0x08)
	struct UWBP_Line3px_C* WBP_Line3px; // 0x2b0(0x08)
	struct UWBP_Line3px_C* WBP_Line3px_2; // 0x2b8(0x08)
	struct UWBP_Multi_Ip_C* WBP_Multi_Ip; // 0x2c0(0x08)
	struct UWBP_Multi_Password_C* WBP_Multi_Password; // 0x2c8(0x08)
	struct UWBP_Multi_ServerInfo_C* WBP_Multiplayer_ServerInfo; // 0x2d0(0x08)
	bool bIsFirstRefresh; // 0x2d8(0x01)
	char pad_2D9[0x7]; // 0x2d9(0x07)
	struct FString LocalPassword; // 0x2e0(0x10)
	struct FString LocalMode; // 0x2f0(0x10)
	struct FString LocalDifficulty; // 0x300(0x10)
	struct FString LocalServerName; // 0x310(0x10)
	struct FString LocalServerName_NonEmpty; // 0x320(0x10)
	struct TArray<struct UWBP_Multi_ServerEntry_C*> ServerEntries; // 0x330(0x10)
	struct UWBP_Multi_ServerEntry_C* SelectedServerEntry; // 0x340(0x08)
	struct TArray<struct FBlueprintSessionResult> AllFoundSessions; // 0x348(0x10)
	struct TArray<struct FBlueprintSessionResult> FilteredSessions; // 0x358(0x10)
	bool bLocalHardcore; // 0x368(0x01)
	char pad_369[0x7]; // 0x369(0x07)
	struct UWBP_Wrapper_Confirmation_C* VersionConfirm; // 0x370(0x08)
	struct TArray<struct FBlueprintSessionResult> SearchSessions; // 0x378(0x10)
	bool bLocalNoTeamKill; // 0x388(0x01)
	bool bLocalNoWave; // 0x389(0x01)
	char pad_38A[0x2]; // 0x38a(0x02)
	int32_t LocalDay; // 0x38c(0x04)
	enum class E_Main_Multi_Type MultiType; // 0x390(0x01)
	char pad_391[0x7]; // 0x391(0x07)
	struct TArray<struct FGameServerItem> AllServerList; // 0x398(0x10)
	struct TArray<struct FString> CreatedServerId; // 0x3a8(0x10)
	int32_t EntryLength; // 0x3b8(0x04)
	int32_t EntryIndex; // 0x3bc(0x04)
	struct UWBP_Multi_ServerEntry_C* TransientServerEntryForRules; // 0x3c0(0x08)
	struct TArray<struct UWBP_Multi_ServerEntry_C*> RetrievedServerEntries; // 0x3c8(0x10)
	struct UWBP_Multi_ServerEntry_C* LocalRulesServer; // 0x3d8(0x08)
	struct FString LocalGameVersion; // 0x3e0(0x10)
	bool bLocalIsOfficial; // 0x3f0(0x01)
	bool bCanInteract; // 0x3f1(0x01)

	bool Get Btn Join Is Enabled(); // Function WBP_Main_Multi_Join.WBP_Main_Multi_Join_C.Get Btn Join Is Enabled // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	bool IsServerVersionCompatible(struct UWBP_Multi_ServerEntry_C* ServerEntry); // Function WBP_Main_Multi_Join.WBP_Main_Multi_Join_C.IsServerVersionCompatible // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	struct FString GetGameServerDebugInfo(struct FGameServerItem GameServerItem); // Function WBP_Main_Multi_Join.WBP_Main_Multi_Join_C.GetGameServerDebugInfo // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	enum class ESlateVisibility Get_Button_IP_1_Visibility_1(); // Function WBP_Main_Multi_Join.WBP_Main_Multi_Join_C.Get_Button_IP_1_Visibility_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	void CreateServerEntryFromSessionResult(struct FBlueprintSessionResult SessionResult, struct UWBP_Multi_ServerEntry_C* ServerEntryWidget); // Function WBP_Main_Multi_Join.WBP_Main_Multi_Join_C.CreateServerEntryFromSessionResult // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ClearServerEntries(); // Function WBP_Main_Multi_Join.WBP_Main_Multi_Join_C.ClearServerEntries // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnFailure_2B40ACBB42882297265F279B42F64CAD(struct TArray<struct FBlueprintSessionResult> Results); // Function WBP_Main_Multi_Join.WBP_Main_Multi_Join_C.OnFailure_2B40ACBB42882297265F279B42F64CAD // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnSuccess_2B40ACBB42882297265F279B42F64CAD(struct TArray<struct FBlueprintSessionResult> Results); // Function WBP_Main_Multi_Join.WBP_Main_Multi_Join_C.OnSuccess_2B40ACBB42882297265F279B42F64CAD // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnFailure_95B22FC247DB9A71FFF78F945549DB10(struct TArray<struct FBlueprintSessionResult> Results); // Function WBP_Main_Multi_Join.WBP_Main_Multi_Join_C.OnFailure_95B22FC247DB9A71FFF78F945549DB10 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnSuccess_95B22FC247DB9A71FFF78F945549DB10(struct TArray<struct FBlueprintSessionResult> Results); // Function WBP_Main_Multi_Join.WBP_Main_Multi_Join_C.OnSuccess_95B22FC247DB9A71FFF78F945549DB10 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnFailure_6AD485A141D6F05B0098DA8DC73C49D5(struct TArray<struct FBlueprintSessionResult> Results); // Function WBP_Main_Multi_Join.WBP_Main_Multi_Join_C.OnFailure_6AD485A141D6F05B0098DA8DC73C49D5 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnSuccess_6AD485A141D6F05B0098DA8DC73C49D5(struct TArray<struct FBlueprintSessionResult> Results); // Function WBP_Main_Multi_Join.WBP_Main_Multi_Join_C.OnSuccess_6AD485A141D6F05B0098DA8DC73C49D5 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnCallback_A9DE3DAE4A997AF2FB15549A8A2C07DC(struct TArray<struct FGameServerItem> data, bool bWasSuccessful); // Function WBP_Main_Multi_Join.WBP_Main_Multi_Join_C.OnCallback_A9DE3DAE4A997AF2FB15549A8A2C07DC // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnCallback_85237D52484B7CF8026CFDB4E6F1C54A(struct TArray<struct FGameServerItem> data, bool bWasSuccessful); // Function WBP_Main_Multi_Join.WBP_Main_Multi_Join_C.OnCallback_85237D52484B7CF8026CFDB4E6F1C54A // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnCallback_889CF00644BEBD29CF5E6AA0FFDAB065(struct FGameServerItem data, bool bWasSuccessful); // Function WBP_Main_Multi_Join.WBP_Main_Multi_Join_C.OnCallback_889CF00644BEBD29CF5E6AA0FFDAB065 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnCallback_2DBD238B4FCD11EEAE719E9029837E38(struct TArray<struct FGameServerItem> data, bool bWasSuccessful); // Function WBP_Main_Multi_Join.WBP_Main_Multi_Join_C.OnCallback_2DBD238B4FCD11EEAE719E9029837E38 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Construct(); // Function WBP_Main_Multi_Join.WBP_Main_Multi_Join_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void Refresh(); // Function WBP_Main_Multi_Join.WBP_Main_Multi_Join_C.Refresh // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void RetryRefresh(); // Function WBP_Main_Multi_Join.WBP_Main_Multi_Join_C.RetryRefresh // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnServerSelected(struct UWBP_Multi_ServerEntry_C* SelectedServerEntry); // Function WBP_Main_Multi_Join.WBP_Main_Multi_Join_C.OnServerSelected // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void JoinSessionServer(struct UWBP_Multi_ServerEntry_C* SelectedServer); // Function WBP_Main_Multi_Join.WBP_Main_Multi_Join_C.JoinSessionServer // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnPasswordSubmit(struct FString Password); // Function WBP_Main_Multi_Join.WBP_Main_Multi_Join_C.OnPasswordSubmit // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OpenPasswordWindow(); // Function WBP_Main_Multi_Join.WBP_Main_Multi_Join_C.OpenPasswordWindow // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void JoinServerImpl(struct UWBP_Multi_ServerEntry_C* SelectedServer); // Function WBP_Main_Multi_Join.WBP_Main_Multi_Join_C.JoinServerImpl // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void JoinIp(struct FString IP); // Function WBP_Main_Multi_Join.WBP_Main_Multi_Join_C.JoinIp // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Button_IP_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature(); // Function WBP_Main_Multi_Join.WBP_Main_Multi_Join_C.BndEvt__Button_IP_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Btn_Refresh_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(); // Function WBP_Main_Multi_Join.WBP_Main_Multi_Join_C.BndEvt__Btn_Refresh_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Btn_Join_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(); // Function WBP_Main_Multi_Join.WBP_Main_Multi_Join_C.BndEvt__Btn_Join_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Button_IP_1_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature(); // Function WBP_Main_Multi_Join.WBP_Main_Multi_Join_C.BndEvt__Button_IP_1_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__EditableTextBox_Search_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText Text, enum class ETextCommit CommitMethod); // Function WBP_Main_Multi_Join.WBP_Main_Multi_Join_C.BndEvt__EditableTextBox_Search_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1395fe0
	void OnClicked_VersionDiff(); // Function WBP_Main_Multi_Join.WBP_Main_Multi_Join_C.OnClicked_VersionDiff // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnJoinSessionFail_Event_1(); // Function WBP_Main_Multi_Join.WBP_Main_Multi_Join_C.OnJoinSessionFail_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void BindServerEntry(struct UWBP_Multi_ServerEntry_C* ServerEntryWidget, bool bNoSession); // Function WBP_Main_Multi_Join.WBP_Main_Multi_Join_C.BindServerEntry // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void JoinNonSessionServer(struct UWBP_Multi_ServerEntry_C* SelectedServer); // Function WBP_Main_Multi_Join.WBP_Main_Multi_Join_C.JoinNonSessionServer // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void CreateNonSessionServerEntry(struct FGameServerItem GameServerItem); // Function WBP_Main_Multi_Join.WBP_Main_Multi_Join_C.CreateNonSessionServerEntry // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void JoinNonSessionServer_AfterPassword(struct UWBP_Multi_ServerEntry_C* SelectedServer); // Function WBP_Main_Multi_Join.WBP_Main_Multi_Join_C.JoinNonSessionServer_AfterPassword // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void JoinGameServer(struct FGameServerItem GameServerItem); // Function WBP_Main_Multi_Join.WBP_Main_Multi_Join_C.JoinGameServer // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnClicked_WarnVersionDiff_NonSession(); // Function WBP_Main_Multi_Join.WBP_Main_Multi_Join_C.OnClicked_WarnVersionDiff_NonSession // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void AddGameServerToHistory(struct FGameServerItem GameServerItem); // Function WBP_Main_Multi_Join.WBP_Main_Multi_Join_C.AddGameServerToHistory // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__EditableTextBox_Search_K2Node_ComponentBoundEvent_3_OnEditableTextBoxChangedEvent__DelegateSignature(struct FText Text); // Function WBP_Main_Multi_Join.WBP_Main_Multi_Join_C.BndEvt__EditableTextBox_Search_K2Node_ComponentBoundEvent_3_OnEditableTextBoxChangedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1395fe0
	void CreateServerEntries(struct TArray<struct FBlueprintSessionResult> SessionResults); // Function WBP_Main_Multi_Join.WBP_Main_Multi_Join_C.CreateServerEntries // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Enable Interaction(); // Function WBP_Main_Multi_Join.WBP_Main_Multi_Join_C.Enable Interaction // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Disable Interaction(); // Function WBP_Main_Multi_Join.WBP_Main_Multi_Join_C.Disable Interaction // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_WBP_Main_Multi_Join(int32_t EntryPoint); // Function WBP_Main_Multi_Join.WBP_Main_Multi_Join_C.ExecuteUbergraph_WBP_Main_Multi_Join // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
};

