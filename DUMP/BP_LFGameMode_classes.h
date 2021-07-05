// BlueprintGeneratedClass BP_LFGameMode.BP_LFGameMode_C
// Size: 0x640 (Inherited: 0x5b0)
struct ABP_LFGameMode_C : ALFGameModeBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5b0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x5b8(0x08)
	struct FString LocalSessionName; // 0x5c0(0x10)
	struct FString LocalSessionPassword; // 0x5d0(0x10)
	struct ALFSessionBeaconHost* BeaconHost; // 0x5e0(0x08)
	struct ALFSessionBeaconHostObject* BeaconHostObject; // 0x5e8(0x08)
	struct FName EndingMapName; // 0x5f0(0x08)
	struct TArray<struct AController*> ConnectedPlayers; // 0x5f8(0x10)
	int32_t UniquePlayerID; // 0x608(0x04)
	char pad_60C[0x4]; // 0x60c(0x04)
	struct UConfigFile* ServerSettingConfig; // 0x610(0x08)
	struct FString CurrentSaveSlot; // 0x618(0x10)
	struct UConfigFile* GameSettings; // 0x628(0x08)
	struct FString GameVersion; // 0x630(0x10)

	void MSG_GetConnectedPlayers(struct TArray<struct AController*> Players); // Function BP_LFGameMode.BP_LFGameMode_C.MSG_GetConnectedPlayers // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void MSG_GetPlayerID(int32_t PlayerId); // Function BP_LFGameMode.BP_LFGameMode_C.MSG_GetPlayerID // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void MSG_RequestPrivateMessage(enum class E_PrivateMessage Request, int32_t ToPlayerID, struct FText UserName, struct FText Message, bool Online?); // Function BP_LFGameMode.BP_LFGameMode_C.MSG_RequestPrivateMessage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void MSG_GetPlayerIDFromUsername(struct FText UserName, int32_t PlayerId); // Function BP_LFGameMode.BP_LFGameMode_C.MSG_GetPlayerIDFromUsername // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void MSG_GetUsername(bool Success?, struct FText UserName); // Function BP_LFGameMode.BP_LFGameMode_C.MSG_GetUsername // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void MSG_GetTeamID(int32_t TeamId); // Function BP_LFGameMode.BP_LFGameMode_C.MSG_GetTeamID // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	bool IsLoadedGame(); // Function BP_LFGameMode.BP_LFGameMode_C.IsLoadedGame // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	void SaveSlotInfo(); // Function BP_LFGameMode.BP_LFGameMode_C.SaveSlotInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void LoadSettingsFromOptionsAndConfig(); // Function BP_LFGameMode.BP_LFGameMode_C.LoadSettingsFromOptionsAndConfig // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void GetSessionOptionInt(struct FString OptionKey, int32_t FallbackConfig, int32_t NewParam); // Function BP_LFGameMode.BP_LFGameMode_C.GetSessionOptionInt // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	bool GetSessionOptionFlag(struct FString OptionKey, bool FallbackConfig); // Function BP_LFGameMode.BP_LFGameMode_C.GetSessionOptionFlag // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	struct FString GetSessionOptionString(struct FString OptionKey, struct FString FallbackConfig); // Function BP_LFGameMode.BP_LFGameMode_C.GetSessionOptionString // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	void ResetPlayerID(); // Function BP_LFGameMode.BP_LFGameMode_C.ResetPlayerID // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnCompleted_38280C4C4C6355BD0CC144A49807B1C4(); // Function BP_LFGameMode.BP_LFGameMode_C.OnCompleted_38280C4C4C6355BD0CC144A49807B1C4 // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnFailure_ED73B1AD405B3EEFB38AEFAD361532DA(); // Function BP_LFGameMode.BP_LFGameMode_C.OnFailure_ED73B1AD405B3EEFB38AEFAD361532DA // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnSuccess_ED73B1AD405B3EEFB38AEFAD361532DA(); // Function BP_LFGameMode.BP_LFGameMode_C.OnSuccess_ED73B1AD405B3EEFB38AEFAD361532DA // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnFailure_9927867C4FAEABF27548D0960927D82A(); // Function BP_LFGameMode.BP_LFGameMode_C.OnFailure_9927867C4FAEABF27548D0960927D82A // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnSuccess_9927867C4FAEABF27548D0960927D82A(); // Function BP_LFGameMode.BP_LFGameMode_C.OnSuccess_9927867C4FAEABF27548D0960927D82A // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnCompleted_F173066E4C7EA6C7E8C72E925B6714AE(); // Function BP_LFGameMode.BP_LFGameMode_C.OnCompleted_F173066E4C7EA6C7E8C72E925B6714AE // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void FailedToSendEmail_84AB2957449B632BFA27B5B1BCA52A6B(int32_t ErrorCode); // Function BP_LFGameMode.BP_LFGameMode_C.FailedToSendEmail_84AB2957449B632BFA27B5B1BCA52A6B // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void EmailSent_84AB2957449B632BFA27B5B1BCA52A6B(int32_t ErrorCode); // Function BP_LFGameMode.BP_LFGameMode_C.EmailSent_84AB2957449B632BFA27B5B1BCA52A6B // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void MSG_NewMessage(bool Received?, enum class E_ChatCategory MessageCategory, int32_t PlayerId, int32_t ToPlayerID, struct FText UserName, struct FText Message, enum class E_Prefix Prefix); // Function BP_LFGameMode.BP_LFGameMode_C.MSG_NewMessage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void MSG_SetPlayerID(int32_t PlayerId); // Function BP_LFGameMode.BP_LFGameMode_C.MSG_SetPlayerID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void MSG_SetTeamID(int32_t TeamId); // Function BP_LFGameMode.BP_LFGameMode_C.MSG_SetTeamID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void MSG_PlayEmote(enum class E_Emote EmoteToPlay); // Function BP_LFGameMode.BP_LFGameMode_C.MSG_PlayEmote // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ReceiveBeginPlay(); // Function BP_LFGameMode.BP_LFGameMode_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1395fe0
	void OnLevelLoaded(); // Function BP_LFGameMode.BP_LFGameMode_C.OnLevelLoaded // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_LFGameMode.BP_LFGameMode_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1395fe0
	void GameOverlayActivated_Event_1(struct FGameOverlayActivated data); // Function BP_LFGameMode.BP_LFGameMode_C.GameOverlayActivated_Event_1 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void K2_PostLogin(struct APlayerController* NewPlayer); // Function BP_LFGameMode.BP_LFGameMode_C.K2_PostLogin // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void K2_OnLogout(struct AController* ExitingController); // Function BP_LFGameMode.BP_LFGameMode_C.K2_OnLogout // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void SendsSystemMessageToPlayers(struct FText Message); // Function BP_LFGameMode.BP_LFGameMode_C.SendsSystemMessageToPlayers // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnDayPassed(); // Function BP_LFGameMode.BP_LFGameMode_C.OnDayPassed // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void SaveGameToCurrentSlot(); // Function BP_LFGameMode.BP_LFGameMode_C.SaveGameToCurrentSlot // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteAutoSave(); // Function BP_LFGameMode.BP_LFGameMode_C.ExecuteAutoSave // (Event|Protected|BlueprintEvent) // @ game+0x1395fe0
	void UpdateDedicatedServer(); // Function BP_LFGameMode.BP_LFGameMode_C.UpdateDedicatedServer // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void MakeGameTag(); // Function BP_LFGameMode.BP_LFGameMode_C.MakeGameTag // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnEndGame(); // Function BP_LFGameMode.BP_LFGameMode_C.OnEndGame // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void TestQuit(); // Function BP_LFGameMode.BP_LFGameMode_C.TestQuit // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void TestRestart(); // Function BP_LFGameMode.BP_LFGameMode_C.TestRestart // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ChangeSaveAndExit(); // Function BP_LFGameMode.BP_LFGameMode_C.ChangeSaveAndExit // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void SendEmailReportForServerReset(enum class EServerResetReason Reason, struct FString Detail); // Function BP_LFGameMode.BP_LFGameMode_C.SendEmailReportForServerReset // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_BP_LFGameMode(int32_t EntryPoint); // Function BP_LFGameMode.BP_LFGameMode_C.ExecuteUbergraph_BP_LFGameMode // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
};

