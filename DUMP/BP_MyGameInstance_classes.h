// BlueprintGeneratedClass BP_MyGameInstance.BP_MyGameInstance_C
// Size: 0x628 (Inherited: 0x398)
struct UBP_MyGameInstance_C : ULFGameInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x398(0x08)
	struct UBP_MySaveGame_C* MyGameSave; // 0x3a0(0x08)
	struct FTimerHandle Timer_Secondes; // 0x3a8(0x08)
	bool Multiplayer?; // 0x3b0(0x01)
	char pad_3B1[0x7]; // 0x3b1(0x07)
	struct FText UserName; // 0x3b8(0x18)
	struct UW_TransitionScreen_C* W_LoadingScreenRef; // 0x3d0(0x08)
	struct FText LoadingMessage; // 0x3d8(0x18)
	bool AlreadyIntro?; // 0x3f0(0x01)
	char pad_3F1[0x3]; // 0x3f1(0x03)
	float TimeLoadingBeforeContinue; // 0x3f4(0x04)
	struct FName LevelName; // 0x3f8(0x08)
	struct FName LevelName_MultiTest; // 0x400(0x08)
	struct FBlueprintSessionResult CurrentSession; // 0x408(0x108)
	struct FName LevelName_Lobby; // 0x510(0x08)
	struct FName LevelName_MainMenu; // 0x518(0x08)
	struct FMulticastInlineDelegate OnJoinSessionFail; // 0x520(0x10)
	struct FString connect; // 0x530(0x10)
	struct FString Password; // 0x540(0x10)
	struct UWBP_Main_Connect_C* ConnectionWidget; // 0x550(0x08)
	bool bServerFound; // 0x558(0x01)
	char pad_559[0x7]; // 0x559(0x07)
	struct FString P2PAddr; // 0x560(0x10)
	int32_t Port; // 0x570(0x04)
	char pad_574[0x4]; // 0x574(0x04)
	struct FGameServerItem FoundServer; // 0x578(0xb0)

	void GetDifficultyLevel(struct FString Difficulty, struct FString Level); // Function BP_MyGameInstance.BP_MyGameInstance_C.GetDifficultyLevel // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	void MakeGameTags(struct FString Password, struct FString Mode, struct FString Difficulty, bool Hardcore, bool NoTeamKill, bool NoWave, int32_t Day, struct FString GameVersion, bool Official, struct FString Tags); // Function BP_MyGameInstance.BP_MyGameInstance_C.MakeGameTags // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void GetBoolFromString(struct FString Input, bool Result); // Function BP_MyGameInstance.BP_MyGameInstance_C.GetBoolFromString // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	void GetDifficultyFromLevel(struct FString Level, struct FString Difficulty); // Function BP_MyGameInstance.BP_MyGameInstance_C.GetDifficultyFromLevel // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	void Get String from Array(struct TArray<struct FString> Strings, int32_t StringIndex, struct FString Output); // Function BP_MyGameInstance.BP_MyGameInstance_C.Get String from Array // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	void ParseGameTags(struct FString Tags, struct FString Password, struct FString Mode, struct FString Difficulty, bool Hardcore, bool NoTeamKill, bool NoWave, int32_t Day, struct FString GameVersion, bool Official); // Function BP_MyGameInstance.BP_MyGameInstance_C.ParseGameTags // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnFailure_B065C47F48B157C121B06CAFCED8C6AC(); // Function BP_MyGameInstance.BP_MyGameInstance_C.OnFailure_B065C47F48B157C121B06CAFCED8C6AC // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnSuccess_B065C47F48B157C121B06CAFCED8C6AC(); // Function BP_MyGameInstance.BP_MyGameInstance_C.OnSuccess_B065C47F48B157C121B06CAFCED8C6AC // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnFailure_C00D661349CA708A95145581FF251FE3(); // Function BP_MyGameInstance.BP_MyGameInstance_C.OnFailure_C00D661349CA708A95145581FF251FE3 // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnSuccess_C00D661349CA708A95145581FF251FE3(); // Function BP_MyGameInstance.BP_MyGameInstance_C.OnSuccess_C00D661349CA708A95145581FF251FE3 // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnFailure_2CA503BA459624C380FFB8A25A60F3A9(); // Function BP_MyGameInstance.BP_MyGameInstance_C.OnFailure_2CA503BA459624C380FFB8A25A60F3A9 // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnSuccess_2CA503BA459624C380FFB8A25A60F3A9(); // Function BP_MyGameInstance.BP_MyGameInstance_C.OnSuccess_2CA503BA459624C380FFB8A25A60F3A9 // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnFailure_121244F24E5A3514625F6CB789A784D4(); // Function BP_MyGameInstance.BP_MyGameInstance_C.OnFailure_121244F24E5A3514625F6CB789A784D4 // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnSuccess_121244F24E5A3514625F6CB789A784D4(); // Function BP_MyGameInstance.BP_MyGameInstance_C.OnSuccess_121244F24E5A3514625F6CB789A784D4 // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnFailure_5720133F4ACBDB72B7FF9F8054218289(); // Function BP_MyGameInstance.BP_MyGameInstance_C.OnFailure_5720133F4ACBDB72B7FF9F8054218289 // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnSuccess_5720133F4ACBDB72B7FF9F8054218289(); // Function BP_MyGameInstance.BP_MyGameInstance_C.OnSuccess_5720133F4ACBDB72B7FF9F8054218289 // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnFailure_55B328164E2B7F605401CB82C7617A98(); // Function BP_MyGameInstance.BP_MyGameInstance_C.OnFailure_55B328164E2B7F605401CB82C7617A98 // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnSuccess_55B328164E2B7F605401CB82C7617A98(); // Function BP_MyGameInstance.BP_MyGameInstance_C.OnSuccess_55B328164E2B7F605401CB82C7617A98 // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnFailure_39A01426451D9FABCA440E8C8B6D35EB(); // Function BP_MyGameInstance.BP_MyGameInstance_C.OnFailure_39A01426451D9FABCA440E8C8B6D35EB // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnSuccess_39A01426451D9FABCA440E8C8B6D35EB(); // Function BP_MyGameInstance.BP_MyGameInstance_C.OnSuccess_39A01426451D9FABCA440E8C8B6D35EB // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnFailure_31A82DE1490E51863A0EBEBE208D20C1(); // Function BP_MyGameInstance.BP_MyGameInstance_C.OnFailure_31A82DE1490E51863A0EBEBE208D20C1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnSuccess_31A82DE1490E51863A0EBEBE208D20C1(); // Function BP_MyGameInstance.BP_MyGameInstance_C.OnSuccess_31A82DE1490E51863A0EBEBE208D20C1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnFailure_4BE6ABA344E86FC9E54CCD98DEFC10F4(); // Function BP_MyGameInstance.BP_MyGameInstance_C.OnFailure_4BE6ABA344E86FC9E54CCD98DEFC10F4 // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnSuccess_4BE6ABA344E86FC9E54CCD98DEFC10F4(); // Function BP_MyGameInstance.BP_MyGameInstance_C.OnSuccess_4BE6ABA344E86FC9E54CCD98DEFC10F4 // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnCallback_6C81E9EC4644B033553993B64C4E2E29(struct TArray<struct FGameServerItem> data, bool bWasSuccessful); // Function BP_MyGameInstance.BP_MyGameInstance_C.OnCallback_6C81E9EC4644B033553993B64C4E2E29 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ChangeDifficultyOnSave(enum class E_Difficulty Difficulty); // Function BP_MyGameInstance.BP_MyGameInstance_C.ChangeDifficultyOnSave // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ShowLoadingScreen(struct APlayerController* PlayerController, struct FText Message); // Function BP_MyGameInstance.BP_MyGameInstance_C.ShowLoadingScreen // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void LaunchSoloGame(struct APlayerController* PlayerController, struct UBP_MySaveGame_C* MyGameSave, struct UWidget* ParentRef); // Function BP_MyGameInstance.BP_MyGameInstance_C.LaunchSoloGame // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void JoinServerSession(struct FBlueprintSessionResult Session, struct APlayerController* PlayerController, struct UWidget* ParentRef); // Function BP_MyGameInstance.BP_MyGameInstance_C.JoinServerSession // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ResetAfterErrorFocus(struct APlayerController* PlayerController, struct UWidget* Widget); // Function BP_MyGameInstance.BP_MyGameInstance_C.ResetAfterErrorFocus // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void CreateLobby(struct APlayerController* PlayerController, int32_t MaxPlayer, bool bUseLAN, struct FName SessionName, struct FString GameMode); // Function BP_MyGameInstance.BP_MyGameInstance_C.CreateLobby // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void TravelToMap(struct APlayerController* PlayerController, struct UWidget* ParentRef, bool Standalone); // Function BP_MyGameInstance.BP_MyGameInstance_C.TravelToMap // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void CreateServer(struct APlayerController* PlayerController, struct UWidget* ParentRef, struct FName LevelName, int32_t MaxPlayer, bool bUseLAN); // Function BP_MyGameInstance.BP_MyGameInstance_C.CreateServer // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void SetGameDifficulty(enum class EGameDifficulty Difficulty); // Function BP_MyGameInstance.BP_MyGameInstance_C.SetGameDifficulty // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void SetGameHardcore(bool bHardcore); // Function BP_MyGameInstance.BP_MyGameInstance_C.SetGameHardcore // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void SetNoTeamKill(bool bNewFlag); // Function BP_MyGameInstance.BP_MyGameInstance_C.SetNoTeamKill // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void SetNoWave(bool bNewFlag); // Function BP_MyGameInstance.BP_MyGameInstance_C.SetNoWave // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void SetGameFlags(bool bHardcore, bool bNoTeamkill, bool bNoWave); // Function BP_MyGameInstance.BP_MyGameInstance_C.SetGameFlags // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void SetGameDay(int32_t NewDay); // Function BP_MyGameInstance.BP_MyGameInstance_C.SetGameDay // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ReceiveInit(); // Function BP_MyGameInstance.BP_MyGameInstance_C.ReceiveInit // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void UpdateDedicatedServer(); // Function BP_MyGameInstance.BP_MyGameInstance_C.UpdateDedicatedServer // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnSessionInviteReceived(int32_t LocalPlayerNum, struct FBPUniqueNetId PersonInviting, struct FString AppID, struct FBlueprintSessionResult SessionToJoin); // Function BP_MyGameInstance.BP_MyGameInstance_C.OnSessionInviteReceived // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1395fe0
	void OnSessionInviteAccepted(int32_t LocalPlayerNum, struct FBPUniqueNetId PersonInvited, struct FBlueprintSessionResult SessionToJoin); // Function BP_MyGameInstance.BP_MyGameInstance_C.OnSessionInviteAccepted // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1395fe0
	void OnInit_CheckConnect(); // Function BP_MyGameInstance.BP_MyGameInstance_C.OnInit_CheckConnect // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void JoinSteamServer(); // Function BP_MyGameInstance.BP_MyGameInstance_C.JoinSteamServer // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void StopGameTimer(); // Function BP_MyGameInstance.BP_MyGameInstance_C.StopGameTimer // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void JoinServerIP(struct FString Command, struct APlayerController* PlayerController, struct UWidget* ParentRef); // Function BP_MyGameInstance.BP_MyGameInstance_C.JoinServerIP // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Timer_TimePlayed(); // Function BP_MyGameInstance.BP_MyGameInstance_C.Timer_TimePlayed // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void StartGameTime(); // Function BP_MyGameInstance.BP_MyGameInstance_C.StartGameTime // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnAfterInit(); // Function BP_MyGameInstance.BP_MyGameInstance_C.OnAfterInit // (Event|Protected|BlueprintEvent) // @ game+0x1395fe0
	void OnAfterStart(); // Function BP_MyGameInstance.BP_MyGameInstance_C.OnAfterStart // (Event|Protected|BlueprintEvent) // @ game+0x1395fe0
	void SetResourceRespawn(bool NewFlag); // Function BP_MyGameInstance.BP_MyGameInstance_C.SetResourceRespawn // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_BP_MyGameInstance(int32_t EntryPoint); // Function BP_MyGameInstance.BP_MyGameInstance_C.ExecuteUbergraph_BP_MyGameInstance // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
	void OnJoinSessionFail__DelegateSignature(); // Function BP_MyGameInstance.BP_MyGameInstance_C.OnJoinSessionFail__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
};

