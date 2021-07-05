// BlueprintGeneratedClass LFPlayerController_BP.LFPlayerController_BP_C
// Size: 0x740 (Inherited: 0x620)
struct ALFPlayerController_BP_C : ALFPlayerController {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x620(0x08)
	struct UAudioComponent* Audio; // 0x628(0x08)
	struct UC_Manager-LocalMap_C* C_Manager-LocalMap; // 0x630(0x08)
	struct UQuestMapManager_C* QuestMapManager; // 0x638(0x08)
	struct UC_Manager-WorldMap_C* C_Manager-WorldMap; // 0x640(0x08)
	struct UC_Manager-Compass_C* C_Manager-Compass; // 0x648(0x08)
	struct UNotifyUMG_C* NotifyUMG; // 0x650(0x08)
	struct USaveGameMenu_C* SaveGameMenu; // 0x658(0x08)
	float TimeScale; // 0x660(0x04)
	char pad_664[0x4]; // 0x664(0x04)
	struct FString SlomoCommand; // 0x668(0x10)
	struct APawn* PlayerRef; // 0x678(0x08)
	struct UW_Options_C* W_OptionsRef; // 0x680(0x08)
	struct FInputChord InteractKey; // 0x688(0x20)
	bool SubtitleEnabled?; // 0x6a8(0x01)
	char pad_6A9[0x7]; // 0x6a9(0x07)
	struct ABP_Book_Controller_C* BookController; // 0x6b0(0x08)
	struct ABP_AnimatedBook_C* Book; // 0x6b8(0x08)
	struct FVector BookSize; // 0x6c0(0x0c)
	struct FVector BookDistance; // 0x6cc(0x0c)
	float BookDelay; // 0x6d8(0x04)
	float BookLock; // 0x6dc(0x04)
	struct FText GameSavedText; // 0x6e0(0x18)
	struct UW_LoadingScreen_Client_C* LoadingScreen; // 0x6f8(0x08)
	struct UAudioComponent* LoadingAudio; // 0x700(0x08)
	struct UW_MainChat_C* MainChatRef; // 0x708(0x08)
	int32_t PlayerId; // 0x710(0x04)
	float MaxProximityDistance; // 0x714(0x04)
	struct TArray<char> AuthTicket; // 0x718(0x10)
	struct FSteamTicketHandle AuthHandle; // 0x728(0x04)
	char pad_72C[0x4]; // 0x72c(0x04)
	struct UWBP_MOTD_C* MOTDWidgetRef; // 0x730(0x08)
	struct UUserWidget* LoadingScreen_Level; // 0x738(0x08)

	void MSG_GetConnectedPlayers(struct TArray<struct AController*> Players); // Function LFPlayerController_BP.LFPlayerController_BP_C.MSG_GetConnectedPlayers // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void MSG_GetPlayerID(int32_t PlayerId); // Function LFPlayerController_BP.LFPlayerController_BP_C.MSG_GetPlayerID // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void MSG_RequestPrivateMessage(enum class E_PrivateMessage Request, int32_t ToPlayerID, struct FText UserName, struct FText Message, bool Online?); // Function LFPlayerController_BP.LFPlayerController_BP_C.MSG_RequestPrivateMessage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void MSG_GetPlayerIDFromUsername(struct FText UserName, int32_t PlayerId); // Function LFPlayerController_BP.LFPlayerController_BP_C.MSG_GetPlayerIDFromUsername // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void MSG_GetUsername(bool Success?, struct FText UserName); // Function LFPlayerController_BP.LFPlayerController_BP_C.MSG_GetUsername // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void MSG_GetTeamID(int32_t TeamId); // Function LFPlayerController_BP.LFPlayerController_BP_C.MSG_GetTeamID // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void GetComponents(struct UQuestMapComponent_C* CompassManager, struct UQuestMapComponent_C* LocalMapManager, struct UQuestMapComponent_C* WorldMapManager); // Function LFPlayerController_BP.LFPlayerController_BP_C.GetComponents // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void GetQMManager(struct UQuestMapManager_C* QuestMapManager); // Function LFPlayerController_BP.LFPlayerController_BP_C.GetQMManager // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void MSG_RequestKey(bool Action?, enum class E_TemplateControlAction ActionName, enum class E_TemplateControlAxis AxisName, struct FInputChord MyKey); // Function LFPlayerController_BP.LFPlayerController_BP_C.MSG_RequestKey // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	bool IsLoading(); // Function LFPlayerController_BP.LFPlayerController_BP_C.IsLoading // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Print Leaderboard Log(struct FString Message, struct FName StatName, int32_t StatValue); // Function LFPlayerController_BP.LFPlayerController_BP_C.Print Leaderboard Log // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ShowSystemMessage(struct FText Message, struct FLinearColor Color); // Function LFPlayerController_BP.LFPlayerController_BP_C.ShowSystemMessage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void SendMessage(enum class E_ChatCategory MessageCategory, int32_t PlayerId, int32_t ToPlayerID, struct FText UserName, struct FText Message, enum class E_Prefix Prefix); // Function LFPlayerController_BP.LFPlayerController_BP_C.SendMessage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ReceivedMessage(enum class E_ChatCategory MessageCategory, int32_t PlayerId, struct FText UserName, struct FText Message, enum class E_Prefix Prefix); // Function LFPlayerController_BP.LFPlayerController_BP_C.ReceivedMessage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void SpawnJournal(); // Function LFPlayerController_BP.LFPlayerController_BP_C.SpawnJournal // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void CanToggleJournal(bool CanToggle); // Function LFPlayerController_BP.LFPlayerController_BP_C.CanToggleJournal // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	void IsJournalOpen(bool IsJournalOpen); // Function LFPlayerController_BP.LFPlayerController_BP_C.IsJournalOpen // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	void IsMapOpen(bool MapOpen); // Function LFPlayerController_BP.LFPlayerController_BP_C.IsMapOpen // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ShowSavingMessage(); // Function LFPlayerController_BP.LFPlayerController_BP_C.ShowSavingMessage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void SetupNotification(struct UNotifyUMG_C* NotifyUMG); // Function LFPlayerController_BP.LFPlayerController_BP_C.SetupNotification // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void InpActEvt_Home_K2Node_InputKeyEvent_11(struct FKey Key); // Function LFPlayerController_BP.LFPlayerController_BP_C.InpActEvt_Home_K2Node_InputKeyEvent_11 // (BlueprintEvent) // @ game+0x1395fe0
	void InpActEvt_End_K2Node_InputKeyEvent_10(struct FKey Key); // Function LFPlayerController_BP.LFPlayerController_BP_C.InpActEvt_End_K2Node_InputKeyEvent_10 // (BlueprintEvent) // @ game+0x1395fe0
	void InpActEvt_Delete_K2Node_InputKeyEvent_9(struct FKey Key); // Function LFPlayerController_BP.LFPlayerController_BP_C.InpActEvt_Delete_K2Node_InputKeyEvent_9 // (BlueprintEvent) // @ game+0x1395fe0
	void InpActEvt_Z_K2Node_InputKeyEvent_8(struct FKey Key); // Function LFPlayerController_BP.LFPlayerController_BP_C.InpActEvt_Z_K2Node_InputKeyEvent_8 // (BlueprintEvent) // @ game+0x1395fe0
	void InpActEvt_PageUp_K2Node_InputKeyEvent_7(struct FKey Key); // Function LFPlayerController_BP.LFPlayerController_BP_C.InpActEvt_PageUp_K2Node_InputKeyEvent_7 // (BlueprintEvent) // @ game+0x1395fe0
	void InpActEvt_PageDown_K2Node_InputKeyEvent_6(struct FKey Key); // Function LFPlayerController_BP.LFPlayerController_BP_C.InpActEvt_PageDown_K2Node_InputKeyEvent_6 // (BlueprintEvent) // @ game+0x1395fe0
	void InpActEvt_Gamepad_Special_Right_K2Node_InputKeyEvent_5(struct FKey Key); // Function LFPlayerController_BP.LFPlayerController_BP_C.InpActEvt_Gamepad_Special_Right_K2Node_InputKeyEvent_5 // (BlueprintEvent) // @ game+0x1395fe0
	void InpActEvt_Backslash_K2Node_InputKeyEvent_4(struct FKey Key); // Function LFPlayerController_BP.LFPlayerController_BP_C.InpActEvt_Backslash_K2Node_InputKeyEvent_4 // (BlueprintEvent) // @ game+0x1395fe0
	void InpActEvt_Slash_K2Node_InputKeyEvent_3(struct FKey Key); // Function LFPlayerController_BP.LFPlayerController_BP_C.InpActEvt_Slash_K2Node_InputKeyEvent_3 // (BlueprintEvent) // @ game+0x1395fe0
	void InpActEvt_Comma_K2Node_InputKeyEvent_2(struct FKey Key); // Function LFPlayerController_BP.LFPlayerController_BP_C.InpActEvt_Comma_K2Node_InputKeyEvent_2 // (BlueprintEvent) // @ game+0x1395fe0
	void InpActEvt_ToggleUI_K2Node_InputActionEvent_2(struct FKey Key); // Function LFPlayerController_BP.LFPlayerController_BP_C.InpActEvt_ToggleUI_K2Node_InputActionEvent_2 // (BlueprintEvent) // @ game+0x1395fe0
	void InpActEvt_Submit_K2Node_InputActionEvent_1(struct FKey Key); // Function LFPlayerController_BP.LFPlayerController_BP_C.InpActEvt_Submit_K2Node_InputActionEvent_1 // (BlueprintEvent) // @ game+0x1395fe0
	void OnFailure_9774528E4BADC04AB70E84BCFA517D5C(int32_t LeaderboardValue); // Function LFPlayerController_BP.LFPlayerController_BP_C.OnFailure_9774528E4BADC04AB70E84BCFA517D5C // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnSuccess_9774528E4BADC04AB70E84BCFA517D5C(int32_t LeaderboardValue); // Function LFPlayerController_BP.LFPlayerController_BP_C.OnSuccess_9774528E4BADC04AB70E84BCFA517D5C // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnFailure_114F73284633EC4AB527F9BBBB6DB10E(); // Function LFPlayerController_BP.LFPlayerController_BP_C.OnFailure_114F73284633EC4AB527F9BBBB6DB10E // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnSuccess_114F73284633EC4AB527F9BBBB6DB10E(); // Function LFPlayerController_BP.LFPlayerController_BP_C.OnSuccess_114F73284633EC4AB527F9BBBB6DB10E // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnFailure_03F222614FF3F8D71EC0BE879AC69A71(struct FName WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag); // Function LFPlayerController_BP.LFPlayerController_BP_C.OnFailure_03F222614FF3F8D71EC0BE879AC69A71 // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnSuccess_03F222614FF3F8D71EC0BE879AC69A71(struct FName WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag); // Function LFPlayerController_BP.LFPlayerController_BP_C.OnSuccess_03F222614FF3F8D71EC0BE879AC69A71 // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void InpActEvt_BackSpace_K2Node_InputKeyEvent_1(struct FKey Key); // Function LFPlayerController_BP.LFPlayerController_BP_C.InpActEvt_BackSpace_K2Node_InputKeyEvent_1 // (BlueprintEvent) // @ game+0x1395fe0
	void MSG_SetTeamID(int32_t TeamId); // Function LFPlayerController_BP.LFPlayerController_BP_C.MSG_SetTeamID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Save Game Menu Back(); // Function LFPlayerController_BP.LFPlayerController_BP_C.Save Game Menu Back // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Save Game Menu Load(); // Function LFPlayerController_BP.LFPlayerController_BP_C.Save Game Menu Load // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Save Game Menu Save(); // Function LFPlayerController_BP.LFPlayerController_BP_C.Save Game Menu Save // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void SaveGameToSlot(); // Function LFPlayerController_BP.LFPlayerController_BP_C.SaveGameToSlot // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void LoadGameFromSlot(); // Function LFPlayerController_BP.LFPlayerController_BP_C.LoadGameFromSlot // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void CloseSaveMenu(); // Function LFPlayerController_BP.LFPlayerController_BP_C.CloseSaveMenu // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OpenSaveMenu(); // Function LFPlayerController_BP.LFPlayerController_BP_C.OpenSaveMenu // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ReceiveBeginPlay(); // Function LFPlayerController_BP.LFPlayerController_BP_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1395fe0
	void MSG_ChangeInvertMouse(bool InvertMouse); // Function LFPlayerController_BP.LFPlayerController_BP_C.MSG_ChangeInvertMouse // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void MSG_ChangeSensitivity(float Sensitivity); // Function LFPlayerController_BP.LFPlayerController_BP_C.MSG_ChangeSensitivity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void MSG_ChangeGameplaySetting(enum class E_TemplateUI Setting, int32_t Index, float Value); // Function LFPlayerController_BP.LFPlayerController_BP_C.MSG_ChangeGameplaySetting // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OpenOption(); // Function LFPlayerController_BP.LFPlayerController_BP_C.OpenOption // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void OnInitialize(); // Function LFPlayerController_BP.LFPlayerController_BP_C.OnInitialize // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void InpAxisKeyEvt_MouseWheelAxis_K2Node_InputAxisKeyEvent_1(float AxisValue); // Function LFPlayerController_BP.LFPlayerController_BP_C.InpAxisKeyEvt_MouseWheelAxis_K2Node_InputAxisKeyEvent_1 // (BlueprintEvent) // @ game+0x1395fe0
	void ToggleMap(); // Function LFPlayerController_BP.LFPlayerController_BP_C.ToggleMap // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void CloseMap(bool Force); // Function LFPlayerController_BP.LFPlayerController_BP_C.CloseMap // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void CloseJournal(); // Function LFPlayerController_BP.LFPlayerController_BP_C.CloseJournal // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ToggleJournal(int32_t PageToOpen); // Function LFPlayerController_BP.LFPlayerController_BP_C.ToggleJournal // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function LFPlayerController_BP.LFPlayerController_BP_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1395fe0
	void OpenMap(); // Function LFPlayerController_BP.LFPlayerController_BP_C.OpenMap // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnPageOpened_Event_1(int32_t page, bool bJump); // Function LFPlayerController_BP.LFPlayerController_BP_C.OnPageOpened_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ReceiveTick(float DeltaSeconds); // Function LFPlayerController_BP.LFPlayerController_BP_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void OnToggleJournal(); // Function LFPlayerController_BP.LFPlayerController_BP_C.OnToggleJournal // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ZoomMap(float AxisValue); // Function LFPlayerController_BP.LFPlayerController_BP_C.ZoomMap // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void HideLoadingScreen(); // Function LFPlayerController_BP.LFPlayerController_BP_C.HideLoadingScreen // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void ShowLoadingScreen(); // Function LFPlayerController_BP.LFPlayerController_BP_C.ShowLoadingScreen // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void OnHUDInitialize(); // Function LFPlayerController_BP.LFPlayerController_BP_C.OnHUDInitialize // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void HideHUD(); // Function LFPlayerController_BP.LFPlayerController_BP_C.HideHUD // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Server_OnRequestPrivateMessage(enum class E_PrivateMessage Request, int32_t ToPlayerID, struct FText UserName, struct FText Message); // Function LFPlayerController_BP.LFPlayerController_BP_C.Server_OnRequestPrivateMessage // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Client_OnRequestPrivateMessage(enum class E_PrivateMessage Request, int32_t ToPlayerID, bool PlayerOnline?, struct FText UserName, struct FText Message); // Function LFPlayerController_BP.LFPlayerController_BP_C.Client_OnRequestPrivateMessage // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Server_SendMessage(enum class E_ChatCategory MessageCategory, int32_t PlayerId, int32_t ToPlayerID, struct FText UserName, struct FText Message, enum class E_Prefix Prefix); // Function LFPlayerController_BP.LFPlayerController_BP_C.Server_SendMessage // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Client_ReceivedMessage(enum class E_ChatCategory MessageCategory, int32_t PlayerId, struct FText UserName, struct FText Message, enum class E_Prefix Prefix); // Function LFPlayerController_BP.LFPlayerController_BP_C.Client_ReceivedMessage // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void MSG_NewMessage(bool Received?, enum class E_ChatCategory MessageCategory, int32_t PlayerId, int32_t ToPlayerID, struct FText UserName, struct FText Message, enum class E_Prefix Prefix); // Function LFPlayerController_BP.LFPlayerController_BP_C.MSG_NewMessage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void MSG_SetPlayerID(int32_t PlayerId); // Function LFPlayerController_BP.LFPlayerController_BP_C.MSG_SetPlayerID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Server_SetPlayerID(int32_t PlayerId); // Function LFPlayerController_BP.LFPlayerController_BP_C.Server_SetPlayerID // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnChatBeginPlay(); // Function LFPlayerController_BP.LFPlayerController_BP_C.OnChatBeginPlay // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void MSG_PlayEmote(enum class E_Emote EmoteToPlay); // Function LFPlayerController_BP.LFPlayerController_BP_C.MSG_PlayEmote // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void CheckChat(); // Function LFPlayerController_BP.LFPlayerController_BP_C.CheckChat // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ServerValidateTicketOnServer(struct TArray<char> ticket, struct FString SteamID); // Function LFPlayerController_BP.LFPlayerController_BP_C.ServerValidateTicketOnServer // (Net|NetReliableNetServer|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ReceiveUnPossess(struct APawn* UnpossessedPawn); // Function LFPlayerController_BP.LFPlayerController_BP_C.ReceiveUnPossess // (Event|Protected|BlueprintEvent) // @ game+0x1395fe0
	void OpenPlayerList(); // Function LFPlayerController_BP.LFPlayerController_BP_C.OpenPlayerList // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void OnReceiveMessageOfTheDayImpl(); // Function LFPlayerController_BP.LFPlayerController_BP_C.OnReceiveMessageOfTheDayImpl // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void OnReceiveCreateTeamResultImpl(bool bIsSuccess, struct FString FailureReason); // Function LFPlayerController_BP.LFPlayerController_BP_C.OnReceiveCreateTeamResultImpl // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void OnReceiveInviteToTeamImpl(struct FString InvitingPlayerName, struct FLFTeamId TeamId); // Function LFPlayerController_BP.LFPlayerController_BP_C.OnReceiveInviteToTeamImpl // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1395fe0
	void ShowCheatWindow(); // Function LFPlayerController_BP.LFPlayerController_BP_C.ShowCheatWindow // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void QueryAchievements(); // Function LFPlayerController_BP.LFPlayerController_BP_C.QueryAchievements // (Event|Protected|BlueprintEvent) // @ game+0x1395fe0
	void UnlockAchievement(struct FName AchievementName); // Function LFPlayerController_BP.LFPlayerController_BP_C.UnlockAchievement // (Event|Protected|BlueprintEvent) // @ game+0x1395fe0
	void IncreaseLeaderboardStat(struct FName StatName, int32_t StatValue); // Function LFPlayerController_BP.LFPlayerController_BP_C.IncreaseLeaderboardStat // (Event|Protected|BlueprintEvent) // @ game+0x1395fe0
	void SetLeaderboardStat(struct FName StatName, int32_t StatValue); // Function LFPlayerController_BP.LFPlayerController_BP_C.SetLeaderboardStat // (Event|Protected|BlueprintEvent) // @ game+0x1395fe0
	void SetLoadingScreen(struct UUserWidget* Widget); // Function LFPlayerController_BP.LFPlayerController_BP_C.SetLoadingScreen // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_LFPlayerController_BP(int32_t EntryPoint); // Function LFPlayerController_BP.LFPlayerController_BP_C.ExecuteUbergraph_LFPlayerController_BP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
};

