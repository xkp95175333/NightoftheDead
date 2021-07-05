// Class AdvancedSessions.AdvancedExternalUILibrary
// Size: 0x28 (Inherited: 0x28)
struct UAdvancedExternalUILibrary : UBlueprintFunctionLibrary {

	void ShowWebURLUI(struct FString URLToShow, enum class EBlueprintResultSwitch Result, struct TArray<struct FString> AllowedDomains, bool bEmbedded, bool bShowBackground, bool bShowCloseButton, int32_t OffsetX, int32_t OffsetY, int32_t SizeX, int32_t SizeY); // Function AdvancedSessions.AdvancedExternalUILibrary.ShowWebURLUI // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xb31c70
	void ShowProfileUI(struct FBPUniqueNetId PlayerViewingProfile, struct FBPUniqueNetId PlayerToViewProfileOf, enum class EBlueprintResultSwitch Result); // Function AdvancedSessions.AdvancedExternalUILibrary.ShowProfileUI // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xb31aa0
	void ShowLeaderBoardUI(struct FString LeaderboardName, enum class EBlueprintResultSwitch Result); // Function AdvancedSessions.AdvancedExternalUILibrary.ShowLeaderBoardUI // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xb31970
	void ShowInviteUI(struct APlayerController* PlayerController, enum class EBlueprintResultSwitch Result); // Function AdvancedSessions.AdvancedExternalUILibrary.ShowInviteUI // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xb318a0
	void ShowFriendsUI(struct APlayerController* PlayerController, enum class EBlueprintResultSwitch Result); // Function AdvancedSessions.AdvancedExternalUILibrary.ShowFriendsUI // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xb317d0
	void ShowAccountUpgradeUI(struct FBPUniqueNetId PlayerRequestingAccountUpgradeUI, enum class EBlueprintResultSwitch Result); // Function AdvancedSessions.AdvancedExternalUILibrary.ShowAccountUpgradeUI // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xb316a0
	void CloseWebURLUI(); // Function AdvancedSessions.AdvancedExternalUILibrary.CloseWebURLUI // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb2ccb0
};

// Class AdvancedSessions.AdvancedFriendsGameInstance
// Size: 0x228 (Inherited: 0x1a8)
struct UAdvancedFriendsGameInstance : UGameInstance {
	bool bCallFriendInterfaceEventsOnPlayerControllers; // 0x1a8(0x01)
	bool bCallIdentityInterfaceEventsOnPlayerControllers; // 0x1a9(0x01)
	bool bCallVoiceInterfaceEventsOnPlayerControllers; // 0x1aa(0x01)
	bool bEnableTalkingStatusDelegate; // 0x1ab(0x01)
	char pad_1AC[0x7c]; // 0x1ac(0x7c)

	void OnSessionInviteReceived(int32_t LocalPlayerNum, struct FBPUniqueNetId PersonInviting, struct FString AppID, struct FBlueprintSessionResult SessionToJoin); // Function AdvancedSessions.AdvancedFriendsGameInstance.OnSessionInviteReceived // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1395fe0
	void OnSessionInviteAccepted(int32_t LocalPlayerNum, struct FBPUniqueNetId PersonInvited, struct FBlueprintSessionResult SessionToJoin); // Function AdvancedSessions.AdvancedFriendsGameInstance.OnSessionInviteAccepted // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1395fe0
	void OnPlayerTalkingStateChanged(struct FBPUniqueNetId PlayerId, bool bIsTalking); // Function AdvancedSessions.AdvancedFriendsGameInstance.OnPlayerTalkingStateChanged // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void OnPlayerLoginStatusChanged(int32_t PlayerNum, enum class EBPLoginStatus PreviousStatus, enum class EBPLoginStatus NewStatus, struct FBPUniqueNetId NewPlayerUniqueNetID); // Function AdvancedSessions.AdvancedFriendsGameInstance.OnPlayerLoginStatusChanged // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void OnPlayerLoginChanged(int32_t PlayerNum); // Function AdvancedSessions.AdvancedFriendsGameInstance.OnPlayerLoginChanged // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
};

// Class AdvancedSessions.AdvancedFriendsInterface
// Size: 0x28 (Inherited: 0x28)
struct UAdvancedFriendsInterface : UInterface {

	void OnSessionInviteReceived(struct FBPUniqueNetId PersonInviting, struct FBlueprintSessionResult SearchResult); // Function AdvancedSessions.AdvancedFriendsInterface.OnSessionInviteReceived // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1395fe0
	void OnSessionInviteAccepted(struct FBPUniqueNetId PersonInvited, struct FBlueprintSessionResult SearchResult); // Function AdvancedSessions.AdvancedFriendsInterface.OnSessionInviteAccepted // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1395fe0
	void OnPlayerVoiceStateChanged(struct FBPUniqueNetId PlayerId, bool bIsTalking); // Function AdvancedSessions.AdvancedFriendsInterface.OnPlayerVoiceStateChanged // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void OnPlayerLoginStatusChanged(enum class EBPLoginStatus PreviousStatus, enum class EBPLoginStatus NewStatus, struct FBPUniqueNetId PlayerUniqueNetId); // Function AdvancedSessions.AdvancedFriendsInterface.OnPlayerLoginStatusChanged // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void OnPlayerLoginChanged(int32_t PlayerNum); // Function AdvancedSessions.AdvancedFriendsInterface.OnPlayerLoginChanged // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
};

// Class AdvancedSessions.AdvancedFriendsLibrary
// Size: 0x28 (Inherited: 0x28)
struct UAdvancedFriendsLibrary : UBlueprintFunctionLibrary {

	void SendSessionInviteToFriends(struct APlayerController* PlayerController, struct TArray<struct FBPUniqueNetId> Friends, enum class EBlueprintResultSwitch Result); // Function AdvancedSessions.AdvancedFriendsLibrary.SendSessionInviteToFriends // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xb31240
	void SendSessionInviteToFriend(struct APlayerController* PlayerController, struct FBPUniqueNetId FriendUniqueNetId, enum class EBlueprintResultSwitch Result); // Function AdvancedSessions.AdvancedFriendsLibrary.SendSessionInviteToFriend // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xb310e0
	void IsAFriend(struct APlayerController* PlayerController, struct FBPUniqueNetId UniqueNetId, bool IsFriend); // Function AdvancedSessions.AdvancedFriendsLibrary.IsAFriend // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xb30350
	void GetStoredRecentPlayersList(struct FBPUniqueNetId UniqueNetId, struct TArray<struct FBPOnlineRecentPlayer> PlayersList); // Function AdvancedSessions.AdvancedFriendsLibrary.GetStoredRecentPlayersList // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xb2f1a0
	void GetStoredFriendsList(struct APlayerController* PlayerController, struct TArray<struct FBPFriendInfo> FriendsList); // Function AdvancedSessions.AdvancedFriendsLibrary.GetStoredFriendsList // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xb2f050
	void GetFriend(struct APlayerController* PlayerController, struct FBPUniqueNetId FriendUniqueNetId, struct FBPFriendInfo Friend); // Function AdvancedSessions.AdvancedFriendsLibrary.GetFriend // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xb2d7d0
};

// Class AdvancedSessions.AdvancedGameSession
// Size: 0x288 (Inherited: 0x238)
struct AAdvancedGameSession : AGameSession {
	struct TMap<struct FUniqueNetIdRepl, struct FText> BanList; // 0x238(0x50)
};

// Class AdvancedSessions.AdvancedIdentityLibrary
// Size: 0x28 (Inherited: 0x28)
struct UAdvancedIdentityLibrary : UBlueprintFunctionLibrary {

	void SetUserAccountAttribute(struct FBPUserOnlineAccount AccountInfo, struct FString AttributeName, struct FString NewAttributeValue, enum class EBlueprintResultSwitch Result); // Function AdvancedSessions.AdvancedIdentityLibrary.SetUserAccountAttribute // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xb314e0
	void GetUserID(struct FBPUserOnlineAccount AccountInfo, struct FBPUniqueNetId UniqueNetId); // Function AdvancedSessions.AdvancedIdentityLibrary.GetUserID // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xb30170
	void GetUserAccountRealName(struct FBPUserOnlineAccount AccountInfo, struct FString UserName); // Function AdvancedSessions.AdvancedIdentityLibrary.GetUserAccountRealName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xb30050
	void GetUserAccountDisplayName(struct FBPUserOnlineAccount AccountInfo, struct FString DisplayName); // Function AdvancedSessions.AdvancedIdentityLibrary.GetUserAccountDisplayName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xb2ff30
	void GetUserAccountAuthAttribute(struct FBPUserOnlineAccount AccountInfo, struct FString AttributeName, struct FString AuthAttribute, enum class EBlueprintResultSwitch Result); // Function AdvancedSessions.AdvancedIdentityLibrary.GetUserAccountAuthAttribute // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xb2fd50
	void GetUserAccountAttribute(struct FBPUserOnlineAccount AccountInfo, struct FString AttributeName, struct FString AttributeValue, enum class EBlueprintResultSwitch Result); // Function AdvancedSessions.AdvancedIdentityLibrary.GetUserAccountAttribute // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xb2fb70
	void GetUserAccountAccessToken(struct FBPUserOnlineAccount AccountInfo, struct FString AccessToken); // Function AdvancedSessions.AdvancedIdentityLibrary.GetUserAccountAccessToken // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xb2fa50
	void GetUserAccount(struct FBPUniqueNetId UniqueNetId, struct FBPUserOnlineAccount AccountInfo, enum class EBlueprintResultSwitch Result); // Function AdvancedSessions.AdvancedIdentityLibrary.GetUserAccount // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xb2f8b0
	void GetPlayerNickname(struct FBPUniqueNetId UniqueNetId, struct FString PlayerNickname); // Function AdvancedSessions.AdvancedIdentityLibrary.GetPlayerNickname // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xb2dee0
	void GetPlayerAuthToken(struct APlayerController* PlayerController, struct FString AuthToken, enum class EBlueprintResultSwitch Result); // Function AdvancedSessions.AdvancedIdentityLibrary.GetPlayerAuthToken // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xb2dcc0
	void GetLoginStatus(struct FBPUniqueNetId UniqueNetId, enum class EBPLoginStatus LoginStatus, enum class EBlueprintResultSwitch Result); // Function AdvancedSessions.AdvancedIdentityLibrary.GetLoginStatus // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xb2d9c0
	void GetAllUserAccounts(struct TArray<struct FBPUserOnlineAccount> AccountInfos, enum class EBlueprintResultSwitch Result); // Function AdvancedSessions.AdvancedIdentityLibrary.GetAllUserAccounts // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xb2d190
};

// Class AdvancedSessions.AdvancedSessionsLibrary
// Size: 0x28 (Inherited: 0x28)
struct UAdvancedSessionsLibrary : UBlueprintFunctionLibrary {

	void UniqueNetIdToString(struct FBPUniqueNetId UniqueNetId, struct FString String); // Function AdvancedSessions.AdvancedSessionsLibrary.UniqueNetIdToString // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xb32000
	void SetPlayerName(struct APlayerController* PlayerController, struct FString PlayerName); // Function AdvancedSessions.AdvancedSessionsLibrary.SetPlayerName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb313c0
	struct FSessionsSearchSetting MakeLiteralSessionSearchProperty(struct FSessionPropertyKeyPair SessionSearchProperty, enum class EOnlineComparisonOpRedux ComparisonOp); // Function AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionSearchProperty // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xb30fa0
	struct FSessionPropertyKeyPair MakeLiteralSessionPropertyString(struct FName Key, struct FString Value); // Function AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionPropertyString // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xb30e50
	struct FSessionPropertyKeyPair MakeLiteralSessionPropertyInt(struct FName Key, int32_t Value); // Function AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionPropertyInt // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xb30d60
	struct FSessionPropertyKeyPair MakeLiteralSessionPropertyFloat(struct FName Key, float Value); // Function AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionPropertyFloat // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xb30c70
	struct FSessionPropertyKeyPair MakeLiteralSessionPropertyByte(struct FName Key, char Value); // Function AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionPropertyByte // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xb30b80
	struct FSessionPropertyKeyPair MakeLiteralSessionPropertyBool(struct FName Key, bool Value); // Function AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionPropertyBool // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xb30a90
	bool KickPlayer(struct UObject* WorldContextObject, struct APlayerController* PlayerToKick, struct FText KickReason); // Function AdvancedSessions.AdvancedSessionsLibrary.KickPlayer // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb30920
	bool IsValidUniqueNetID(struct FBPUniqueNetId UniqueNetId); // Function AdvancedSessions.AdvancedSessionsLibrary.IsValidUniqueNetID // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xb30850
	bool IsValidSession(struct FBlueprintSessionResult SessionResult); // Function AdvancedSessions.AdvancedSessionsLibrary.IsValidSession // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xb30630
	void IsPlayerInSession(struct UObject* WorldContextObject, struct FBPUniqueNetId PlayerToCheck, bool bIsInSession); // Function AdvancedSessions.AdvancedSessionsLibrary.IsPlayerInSession // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xb304d0
	bool HasOnlineSubsystem(struct FName SubSystemName); // Function AdvancedSessions.AdvancedSessionsLibrary.HasOnlineSubsystem // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xb302c0
	void GetUniqueNetIDFromPlayerState(struct APlayerState* PlayerState, struct FBPUniqueNetId UniqueNetId); // Function AdvancedSessions.AdvancedSessionsLibrary.GetUniqueNetIDFromPlayerState // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xb2f7b0
	void GetUniqueNetID(struct APlayerController* PlayerController, struct FBPUniqueNetId UniqueNetId); // Function AdvancedSessions.AdvancedSessionsLibrary.GetUniqueNetID // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xb2f6b0
	void GetUniqueBuildID(struct FBlueprintSessionResult SessionResult, int32_t UniqueBuildId); // Function AdvancedSessions.AdvancedSessionsLibrary.GetUniqueBuildID // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xb2f350
	void GetSessionState(struct UObject* WorldContextObject, enum class EBPOnlineSessionState SessionState); // Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionState // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xb2ef80
	void GetSessionSettings(struct UObject* WorldContextObject, int32_t NumConnections, int32_t NumPrivateConnections, bool bIsLan, bool bIsDedicated, bool bAllowInvites, bool bAllowJoinInProgress, bool bIsAnticheatEnabled, int32_t BuildUniqueID, struct TArray<struct FSessionPropertyKeyPair> ExtraSettings, enum class EBlueprintResultSwitch Result); // Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionSettings // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xb2eb90
	void GetSessionPropertyString(struct TArray<struct FSessionPropertyKeyPair> ExtraSettings, struct FName SettingName, enum class ESessionSettingSearchResult SearchResult, struct FString SettingValue); // Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyString // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xb2e9d0
	struct FName GetSessionPropertyKey(struct FSessionPropertyKeyPair SessionProperty); // Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyKey // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xb2e920
	void GetSessionPropertyInt(struct TArray<struct FSessionPropertyKeyPair> ExtraSettings, struct FName SettingName, enum class ESessionSettingSearchResult SearchResult, int32_t SettingValue); // Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyInt // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xb2e780
	void GetSessionPropertyFloat(struct TArray<struct FSessionPropertyKeyPair> ExtraSettings, struct FName SettingName, enum class ESessionSettingSearchResult SearchResult, float SettingValue); // Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyFloat // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xb2e5d0
	void GetSessionPropertyByte(struct TArray<struct FSessionPropertyKeyPair> ExtraSettings, struct FName SettingName, enum class ESessionSettingSearchResult SearchResult, char SettingValue); // Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyByte // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xb2e430
	void GetSessionPropertyBool(struct TArray<struct FSessionPropertyKeyPair> ExtraSettings, struct FName SettingName, enum class ESessionSettingSearchResult SearchResult, bool SettingValue); // Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyBool // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xb2e290
	void GetSessionID_AsString(struct FBlueprintSessionResult SessionResult, struct FString SessionID); // Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionID_AsString // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xb2e010
	void GetPlayerName(struct APlayerController* PlayerController, struct FString PlayerName); // Function AdvancedSessions.AdvancedSessionsLibrary.GetPlayerName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xb2de00
	void GetNumberOfNetworkPlayers(struct UObject* WorldContextObject, int32_t NumNetPlayers); // Function AdvancedSessions.AdvancedSessionsLibrary.GetNumberOfNetworkPlayers // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xb2dbf0
	void GetNetPlayerIndex(struct APlayerController* PlayerController, int32_t NetPlayerIndex); // Function AdvancedSessions.AdvancedSessionsLibrary.GetNetPlayerIndex // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xb2db20
	void GetExtraSettings(struct FBlueprintSessionResult SessionResult, struct TArray<struct FSessionPropertyKeyPair> ExtraSettings); // Function AdvancedSessions.AdvancedSessionsLibrary.GetExtraSettings // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xb2d430
	void GetCurrentUniqueBuildID(int32_t UniqueBuildId); // Function AdvancedSessions.AdvancedSessionsLibrary.GetCurrentUniqueBuildID // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xb2d3b0
	void GetCurrentSessionID_AsString(struct UObject* WorldContextObject, struct FString SessionID); // Function AdvancedSessions.AdvancedSessionsLibrary.GetCurrentSessionID_AsString // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xb2d2d0
	void FindSessionPropertyIndexByName(struct TArray<struct FSessionPropertyKeyPair> ExtraSettings, struct FName SettingName, enum class EBlueprintResultSwitch Result, int32_t OutIndex); // Function AdvancedSessions.AdvancedSessionsLibrary.FindSessionPropertyIndexByName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xb2cff0
	void FindSessionPropertyByName(struct TArray<struct FSessionPropertyKeyPair> ExtraSettings, struct FName SettingsName, enum class EBlueprintResultSwitch Result, struct FSessionPropertyKeyPair OutProperty); // Function AdvancedSessions.AdvancedSessionsLibrary.FindSessionPropertyByName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xb2ce30
	bool EqualEqual_UNetIDUnetID(struct FBPUniqueNetId A, struct FBPUniqueNetId B); // Function AdvancedSessions.AdvancedSessionsLibrary.EqualEqual_UNetIDUnetID // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xb2ccd0
	bool BanPlayer(struct UObject* WorldContextObject, struct APlayerController* PlayerToBan, struct FText BanReason); // Function AdvancedSessions.AdvancedSessionsLibrary.BanPlayer // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb2cb40
	void AddOrModifyExtraSettings(struct TArray<struct FSessionPropertyKeyPair> SettingsArray, struct TArray<struct FSessionPropertyKeyPair> NewOrChangedSettings, struct TArray<struct FSessionPropertyKeyPair> ModifiedSettingsArray); // Function AdvancedSessions.AdvancedSessionsLibrary.AddOrModifyExtraSettings // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xb2c970
};

// Class AdvancedSessions.AdvancedVoiceLibrary
// Size: 0x28 (Inherited: 0x28)
struct UAdvancedVoiceLibrary : UBlueprintFunctionLibrary {

	bool UnRegisterRemoteTalker(struct FBPUniqueNetId UniqueNetId); // Function AdvancedSessions.AdvancedVoiceLibrary.UnRegisterRemoteTalker // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xb368e0
	void UnRegisterLocalTalker(char LocalPlayerNum); // Function AdvancedSessions.AdvancedVoiceLibrary.UnRegisterLocalTalker // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb36870
	void UnRegisterAllLocalTalkers(); // Function AdvancedSessions.AdvancedVoiceLibrary.UnRegisterAllLocalTalkers // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb36850
	bool UnMuteRemoteTalker(char LocalUserNum, struct FBPUniqueNetId UniqueNetId, bool bIsSystemWide); // Function AdvancedSessions.AdvancedVoiceLibrary.UnMuteRemoteTalker // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xb366f0
	void StopNetworkedVoice(char LocalPlayerNum); // Function AdvancedSessions.AdvancedVoiceLibrary.StopNetworkedVoice // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb36680
	void StartNetworkedVoice(char LocalPlayerNum); // Function AdvancedSessions.AdvancedVoiceLibrary.StartNetworkedVoice // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb36610
	void RemoveAllRemoteTalkers(); // Function AdvancedSessions.AdvancedVoiceLibrary.RemoveAllRemoteTalkers // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb36490
	bool RegisterRemoteTalker(struct FBPUniqueNetId UniqueNetId); // Function AdvancedSessions.AdvancedVoiceLibrary.RegisterRemoteTalker // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xb363c0
	bool RegisterLocalTalker(char LocalPlayerNum); // Function AdvancedSessions.AdvancedVoiceLibrary.RegisterLocalTalker // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb36340
	void RegisterAllLocalTalkers(); // Function AdvancedSessions.AdvancedVoiceLibrary.RegisterAllLocalTalkers // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb36320
	bool MuteRemoteTalker(char LocalUserNum, struct FBPUniqueNetId UniqueNetId, bool bIsSystemWide); // Function AdvancedSessions.AdvancedVoiceLibrary.MuteRemoteTalker // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xb361c0
	bool IsRemotePlayerTalking(struct FBPUniqueNetId UniqueNetId); // Function AdvancedSessions.AdvancedVoiceLibrary.IsRemotePlayerTalking // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xb35e30
	bool IsPlayerMuted(char LocalUserNumChecking, struct FBPUniqueNetId UniqueNetId); // Function AdvancedSessions.AdvancedVoiceLibrary.IsPlayerMuted // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xb35d20
	bool IsLocalPlayerTalking(char LocalPlayerNum); // Function AdvancedSessions.AdvancedVoiceLibrary.IsLocalPlayerTalking // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xb35ca0
	void IsHeadsetPresent(bool bHasHeadset, char LocalPlayerNum); // Function AdvancedSessions.AdvancedVoiceLibrary.IsHeadsetPresent // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xb35bd0
	void GetNumLocalTalkers(int32_t NumLocalTalkers); // Function AdvancedSessions.AdvancedVoiceLibrary.GetNumLocalTalkers // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xb359f0
};

// Class AdvancedSessions.CancelFindSessionsCallbackProxy
// Size: 0x78 (Inherited: 0x30)
struct UCancelFindSessionsCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x28]; // 0x50(0x28)

	struct UCancelFindSessionsCallbackProxy* CancelFindSessions(struct UObject* WorldContextObject, struct APlayerController* PlayerController); // Function AdvancedSessions.CancelFindSessionsCallbackProxy.CancelFindSessions // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb34b90
};

// Class AdvancedSessions.CreateSessionCallbackProxyAdvanced
// Size: 0xb8 (Inherited: 0x30)
struct UCreateSessionCallbackProxyAdvanced : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x68]; // 0x50(0x68)

	struct UCreateSessionCallbackProxyAdvanced* CreateAdvancedSession(struct UObject* WorldContextObject, struct TArray<struct FSessionPropertyKeyPair> ExtraSettings, struct APlayerController* PlayerController, int32_t PublicConnections, int32_t PrivateConnections, bool bUseLAN, bool bAllowInvites, bool bIsDedicatedServer, bool bUsePresence, bool bAllowJoinViaPresence, bool bAllowJoinViaPresenceFriendsOnly, bool bAntiCheatProtected, bool bUsesStats, bool bShouldAdvertise); // Function AdvancedSessions.CreateSessionCallbackProxyAdvanced.CreateAdvancedSession // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xb34c60
};

// Class AdvancedSessions.EndSessionCallbackProxy
// Size: 0x78 (Inherited: 0x30)
struct UEndSessionCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x28]; // 0x50(0x28)

	struct UEndSessionCallbackProxy* EndSession(struct UObject* WorldContextObject, struct APlayerController* PlayerController); // Function AdvancedSessions.EndSessionCallbackProxy.EndSession // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb350d0
};

// Class AdvancedSessions.FindFriendSessionCallbackProxy
// Size: 0x98 (Inherited: 0x30)
struct UFindFriendSessionCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x48]; // 0x50(0x48)

	struct UFindFriendSessionCallbackProxy* FindFriendSession(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FBPUniqueNetId FriendUniqueNetId); // Function AdvancedSessions.FindFriendSessionCallbackProxy.FindFriendSession // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xb35370
};

// Class AdvancedSessions.FindSessionsCallbackProxyAdvanced
// Size: 0xd0 (Inherited: 0x30)
struct UFindSessionsCallbackProxyAdvanced : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x80]; // 0x50(0x80)

	struct UFindSessionsCallbackProxyAdvanced* FindSessionsAdvanced(struct UObject* WorldContextObject, struct APlayerController* PlayerController, int32_t MaxResults, bool bUseLAN, enum class EBPServerPresenceSearchType ServerTypeToSearch, struct TArray<struct FSessionsSearchSetting> Filters, bool bEmptyServersOnly, bool bNonEmptyServersOnly, bool bSecureServersOnly, int32_t MinSlotsAvailable); // Function AdvancedSessions.FindSessionsCallbackProxyAdvanced.FindSessionsAdvanced // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xb354d0
	void FilterSessionResults(struct TArray<struct FBlueprintSessionResult> SessionResults, struct TArray<struct FSessionsSearchSetting> Filters, struct TArray<struct FBlueprintSessionResult> FilteredResults); // Function AdvancedSessions.FindSessionsCallbackProxyAdvanced.FilterSessionResults // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xb351a0
};

// Class AdvancedSessions.GetFriendsCallbackProxy
// Size: 0x70 (Inherited: 0x30)
struct UGetFriendsCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x20]; // 0x50(0x20)

	struct UGetFriendsCallbackProxy* GetAndStoreFriendsList(struct UObject* WorldContextObject, struct APlayerController* PlayerController); // Function AdvancedSessions.GetFriendsCallbackProxy.GetAndStoreFriendsList // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb35810
};

// Class AdvancedSessions.GetRecentPlayersCallbackProxy
// Size: 0x90 (Inherited: 0x30)
struct UGetRecentPlayersCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x40]; // 0x50(0x40)

	struct UGetRecentPlayersCallbackProxy* GetAndStoreRecentPlayersList(struct UObject* WorldContextObject, struct FBPUniqueNetId UniqueNetId); // Function AdvancedSessions.GetRecentPlayersCallbackProxy.GetAndStoreRecentPlayersList // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xb358e0
};

// Class AdvancedSessions.GetUserPrivilegeCallbackProxy
// Size: 0x80 (Inherited: 0x30)
struct UGetUserPrivilegeCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x30]; // 0x50(0x30)

	struct UGetUserPrivilegeCallbackProxy* GetUserPrivilege(struct UObject* WorldContextObject, enum class EBPUserPrivileges PrivilegeToCheck, struct FBPUniqueNetId PlayerUniqueNetId); // Function AdvancedSessions.GetUserPrivilegeCallbackProxy.GetUserPrivilege // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xb35a70
};

// Class AdvancedSessions.LoginUserCallbackProxy
// Size: 0x98 (Inherited: 0x30)
struct ULoginUserCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x48]; // 0x50(0x48)

	struct ULoginUserCallbackProxy* LoginUser(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FString UserID, struct FString UserToken); // Function AdvancedSessions.LoginUserCallbackProxy.LoginUser // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb35f00
};

// Class AdvancedSessions.LogoutUserCallbackProxy
// Size: 0x78 (Inherited: 0x30)
struct ULogoutUserCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x28]; // 0x50(0x28)

	struct ULogoutUserCallbackProxy* LogoutUser(struct UObject* WorldContextObject, struct APlayerController* PlayerController); // Function AdvancedSessions.LogoutUserCallbackProxy.LogoutUser // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb360f0
};

// Class AdvancedSessions.SendFriendInviteCallbackProxy
// Size: 0x90 (Inherited: 0x30)
struct USendFriendInviteCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x40]; // 0x50(0x40)

	struct USendFriendInviteCallbackProxy* SendFriendInvite(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FBPUniqueNetId UniqueNetIDInvited); // Function AdvancedSessions.SendFriendInviteCallbackProxy.SendFriendInvite // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xb364b0
};

// Class AdvancedSessions.UpdateSessionCallbackProxyAdvanced
// Size: 0x98 (Inherited: 0x30)
struct UUpdateSessionCallbackProxyAdvanced : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x48]; // 0x50(0x48)

	struct UUpdateSessionCallbackProxyAdvanced* UpdateSession(struct UObject* WorldContextObject, struct TArray<struct FSessionPropertyKeyPair> ExtraSettings, int32_t PublicConnections, int32_t PrivateConnections, bool bUseLAN, bool bAllowInvites, bool bAllowJoinInProgress, bool bRefreshOnlineData, bool bIsDedicatedServer); // Function AdvancedSessions.UpdateSessionCallbackProxyAdvanced.UpdateSession // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xb369b0
};

