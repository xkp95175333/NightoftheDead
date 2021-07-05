// Class SteamCore.SteamCoreSubsystem
// Size: 0x48 (Inherited: 0x30)
struct USteamCoreSubsystem : UGameInstanceSubsystem {
	char pad_30[0x18]; // 0x30(0x18)
};

// Class SteamCore.AppList
// Size: 0xa8 (Inherited: 0x48)
struct UAppList : USteamCoreSubsystem {
	struct FMulticastInlineDelegate SteamAppInstalled; // 0x48(0x10)
	struct FMulticastInlineDelegate SteamAppUninstalled; // 0x58(0x10)
	char pad_68[0x40]; // 0x68(0x40)

	int32_t GetNumInstalledApps(); // Function SteamCore.AppList.GetNumInstalledApps // (Final|Native|Public|BlueprintCallable) // @ game+0xb82940
	int32_t GetInstalledApps(struct TArray<int32_t> AppIDs, int32_t maxAppIDs); // Function SteamCore.AppList.GetInstalledApps // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xb82410
	int32_t GetAppName(int32_t AppID, struct FString Name); // Function SteamCore.AppList.GetAppName // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xb7ffc0
	int32_t GetAppInstallDir(int32_t AppID, struct FString Directory); // Function SteamCore.AppList.GetAppInstallDir // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xb7fdd0
	int32_t GetAppBuildId(int32_t AppID); // Function SteamCore.AppList.GetAppBuildId // (Final|Native|Public|BlueprintCallable) // @ game+0xb7fd00
};

// Class SteamCore.Apps
// Size: 0xa8 (Inherited: 0x48)
struct UApps : USteamCoreSubsystem {
	struct FMulticastInlineDelegate DLCInstalled; // 0x48(0x10)
	struct FMulticastInlineDelegate FileDetailsResultDelegate; // 0x58(0x10)
	char pad_68[0x40]; // 0x68(0x40)

	void UninstallDLC(int32_t AppID); // Function SteamCore.Apps.UninstallDLC // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb84190
	bool MarkContentCorrupt(bool bMissingFilesOnly); // Function SteamCore.Apps.MarkContentCorrupt // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb83720
	void InstallDLC(int32_t AppID); // Function SteamCore.Apps.InstallDLC // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb82f90
	struct FString GetLaunchQueryParam(struct FString Key); // Function SteamCore.Apps.GetLaunchQueryParam // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb82780
	int32_t GetLaunchCommandLine(struct FString commandLine); // Function SteamCore.Apps.GetLaunchCommandLine // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xb826d0
	int32_t GetInstalledDepots(int32_t AppID, int32_t maxDepots, struct TArray<int32_t> depots); // Function SteamCore.Apps.GetInstalledDepots // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xb82510
	void GetFileDetails(struct FDelegate callback, struct FString Filename); // Function SteamCore.Apps.GetFileDetails // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xb80e60
	int32_t GetEarliestPurchaseUnixTime(int32_t AppID); // Function SteamCore.Apps.GetEarliestPurchaseUnixTime // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb80dd0
	bool GetDlcDownloadProgress(int32_t AppID, int32_t bytesDownloaded, int32_t bytesTotal); // Function SteamCore.Apps.GetDlcDownloadProgress // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xb80cb0
	int32_t GetDLCCount(); // Function SteamCore.Apps.GetDLCCount // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb80c80
	struct FString GetCurrentGameLanguage(); // Function SteamCore.Apps.GetCurrentGameLanguage // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb80c00
	bool GetCurrentBetaName(struct FString Name); // Function SteamCore.Apps.GetCurrentBetaName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xb80b50
	struct FString GetAvailableGameLanguages(); // Function SteamCore.Apps.GetAvailableGameLanguages // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb80100
	struct FSteamID GetAppOwner(); // Function SteamCore.Apps.GetAppOwner // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb800c0
	int32_t GetAppInstallDir(int32_t AppID, struct FString folder); // Function SteamCore.Apps.GetAppInstallDir // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xb7fed0
	int32_t GetAppBuildId(); // Function SteamCore.Apps.GetAppBuildId // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb7fda0
	bool BIsVACBanned(); // Function SteamCore.Apps.BIsVACBanned // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb7f9c0
	bool BIsSubscribedFromFreeWeekend(); // Function SteamCore.Apps.BIsSubscribedFromFreeWeekend // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb7f990
	bool BIsSubscribedFromFamilySharing(); // Function SteamCore.Apps.BIsSubscribedFromFamilySharing // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb7f960
	bool BIsSubscribedApp(int32_t AppID); // Function SteamCore.Apps.BIsSubscribedApp // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb7f8d0
	bool BIsSubscribed(); // Function SteamCore.Apps.BIsSubscribed // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb7f8a0
	bool BIsLowViolence(); // Function SteamCore.Apps.BIsLowViolence // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb7f870
	bool BIsDlcInstalled(int32_t AppID); // Function SteamCore.Apps.BIsDlcInstalled // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb7f7e0
	bool BIsCybercafe(); // Function SteamCore.Apps.BIsCybercafe // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb7f7b0
	bool BIsAppInstalled(int32_t AppID); // Function SteamCore.Apps.BIsAppInstalled // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb7f720
	bool BGetDLCDataByIndex(int32_t dlc, int32_t AppID, bool bAvailable, struct FString Name); // Function SteamCore.Apps.BGetDLCDataByIndex // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xb7f5a0
};

// Class SteamCore.SteamCoreAsyncAction
// Size: 0x30 (Inherited: 0x30)
struct USteamCoreAsyncAction : UBlueprintAsyncActionBase {
};

// Class SteamCore.SteamCoreAppsAsyncActionGetFileDetails
// Size: 0x40 (Inherited: 0x30)
struct USteamCoreAppsAsyncActionGetFileDetails : USteamCoreAsyncAction {
	struct FMulticastInlineDelegate OnCallback; // 0x30(0x10)

	void HandleCallback(struct FFileDetailsResult data, bool bWasSuccessful); // Function SteamCore.SteamCoreAppsAsyncActionGetFileDetails.HandleCallback // (Final|Native|Public|HasOutParms) // @ game+0xb82d50
	struct USteamCoreAppsAsyncActionGetFileDetails* GetFileDetailsAsync(struct UObject* WorldContextObject, struct FString Filename); // Function SteamCore.SteamCoreAppsAsyncActionGetFileDetails.GetFileDetailsAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb80fc0
};

// Class SteamCore.SteamCoreGameMode
// Size: 0x308 (Inherited: 0x308)
struct ASteamCoreGameMode : AGameMode {
};

// Class SteamCore.SteamCore
// Size: 0x28 (Inherited: 0x28)
struct USteamCore : UObject {
};

// Class SteamCore.SteamCoreSettings
// Size: 0x70 (Inherited: 0x38)
struct USteamCoreSettings : UDeveloperSettings {
	int32_t DisabledSubsystems; // 0x38(0x04)
	bool bDebugging; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	float AsyncTaskTimeout; // 0x40(0x04)
	bool bEnabled; // 0x44(0x01)
	bool bRelaunchInSteam; // 0x45(0x01)
	bool bVACEnabled; // 0x46(0x01)
	bool bAllowP2PPacketRelay; // 0x47(0x01)
	int32_t P2PConnectionTimeout; // 0x48(0x04)
	int32_t SteamAppId; // 0x4c(0x04)
	int32_t SteamDevAppId; // 0x50(0x04)
	int32_t Port; // 0x54(0x04)
	int32_t GameServerQueryPort; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FString GameVersion; // 0x60(0x10)
};

// Class SteamCore.Friends
// Size: 0x318 (Inherited: 0x48)
struct UFriends : USteamCoreSubsystem {
	struct FMulticastInlineDelegate AvatarImageLoaded; // 0x48(0x10)
	struct FMulticastInlineDelegate FriendRichPresenceUpdate; // 0x58(0x10)
	struct FMulticastInlineDelegate GameConnectedChatJoin; // 0x68(0x10)
	struct FMulticastInlineDelegate GameConnectedChatLeave; // 0x78(0x10)
	struct FMulticastInlineDelegate GameConnectedClanChatMsg; // 0x88(0x10)
	struct FMulticastInlineDelegate GameConnectedFriendChatMsg; // 0x98(0x10)
	struct FMulticastInlineDelegate GameLobbyJoinRequested; // 0xa8(0x10)
	struct FMulticastInlineDelegate GameOverlayActivated; // 0xb8(0x10)
	struct FMulticastInlineDelegate GameRichPresenceJoinRequested; // 0xc8(0x10)
	struct FMulticastInlineDelegate GameServerChangeRequested; // 0xd8(0x10)
	struct FMulticastInlineDelegate PersonaStateChange; // 0xe8(0x10)
	struct FMulticastInlineDelegate SetPersonaNameResponse; // 0xf8(0x10)
	struct FMulticastInlineDelegate JoinClanChatRoomCompletionResult; // 0x108(0x10)
	struct FMulticastInlineDelegate ClanOfficerListResponse; // 0x118(0x10)
	struct FMulticastInlineDelegate DownloadClanActivityCountsResult; // 0x128(0x10)
	char pad_138[0x1e0]; // 0x138(0x1e0)

	bool SetRichPresence(struct FString Key, struct FString Value); // Function SteamCore.Friends.SetRichPresence // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb84020
	void SetPlayedWith(struct FSteamID steamIDUserPlayedWith); // Function SteamCore.Friends.SetPlayedWith // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb83fa0
	void SetPersonaName(struct FDelegate callback, struct FString Name); // Function SteamCore.Friends.SetPersonaName // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xb83e40
	bool SetListenForFriendsMessages(bool bInterceptEnabled); // Function SteamCore.Friends.SetListenForFriendsMessages // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb83db0
	void SetInGameVoiceSpeaking(struct FSteamID SteamIDUser, bool bSpeaking); // Function SteamCore.Friends.SetInGameVoiceSpeaking // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb83cf0
	bool SendClanChatMessage(struct FSteamID SteamIDClanChat, struct FString Text); // Function SteamCore.Friends.SendClanChatMessage // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb83bc0
	bool RequestUserInformation(struct FSteamID SteamIDUser, bool bRequireNameOnly); // Function SteamCore.Friends.RequestUserInformation // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb83af0
	void RequestFriendRichPresence(struct FSteamID SteamIDFriend); // Function SteamCore.Friends.RequestFriendRichPresence // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb83a70
	void RequestClanOfficerList(struct FDelegate callback, struct FSteamID SteamIDClan); // Function SteamCore.Friends.RequestClanOfficerList // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xb83970
	bool ReplyToFriendMessage(struct FSteamID SteamIDFriend, struct FString msgToSend); // Function SteamCore.Friends.ReplyToFriendMessage // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb83840
	bool OpenClanChatWindowInSteam(struct FSteamID SteamIDClanChat); // Function SteamCore.Friends.OpenClanChatWindowInSteam // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb837b0
	bool LeaveClanChatRoom(struct FSteamID SteamIDClan); // Function SteamCore.Friends.LeaveClanChatRoom // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb83690
	void JoinClanChatRoom(struct FDelegate callback, struct FSteamID SteamIDClan); // Function SteamCore.Friends.JoinClanChatRoom // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xb83590
	bool IsUserInSource(struct FSteamID SteamIDUser, struct FSteamID steamIDSource); // Function SteamCore.Friends.IsUserInSource // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb834c0
	void IsFollowing(struct FDelegate callback, struct FSteamID SteamID); // Function SteamCore.Friends.IsFollowing // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xb833c0
	bool IsClanPublic(struct FSteamID SteamIDClan); // Function SteamCore.Friends.IsClanPublic // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb83330
	bool IsClanOfficialGameGroup(struct FSteamID SteamIDClan); // Function SteamCore.Friends.IsClanOfficialGameGroup // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb832a0
	bool IsClanChatWindowOpenInSteam(struct FSteamID SteamIDClanChat); // Function SteamCore.Friends.IsClanChatWindowOpenInSteam // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb83210
	bool IsClanChatAdmin(struct FSteamID SteamIDClanChat, struct FSteamID SteamIDUser); // Function SteamCore.Friends.IsClanChatAdmin // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb83140
	bool InviteUserToGame(struct FSteamID SteamIDFriend, struct FString ConnectString); // Function SteamCore.Friends.InviteUserToGame // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb83010
	bool HasFriend(struct FSteamID SteamIDFriend, struct TArray<enum class ESteamFriendFlags> Flags); // Function SteamCore.Friends.HasFriend // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb82e60
	struct TArray<enum class ESteamUserRestriction> GetUserRestrictions(); // Function SteamCore.Friends.GetUserRestrictions // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb82cd0
	struct UTexture2D* GetSmallFriendAvatar(struct FSteamID SteamIDFriend); // Function SteamCore.Friends.GetSmallFriendAvatar // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb82c40
	struct FString GetPlayerNickname_Pure(struct FSteamID SteamIDPlayer); // Function SteamCore.Friends.GetPlayerNickname_Pure // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xb82b60
	struct FString GetPlayerNickname(struct FSteamID SteamIDPlayer); // Function SteamCore.Friends.GetPlayerNickname // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb82a90
	enum class ESteamPersonaState GetPersonaState_Pure(); // Function SteamCore.Friends.GetPersonaState_Pure // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xb82a60
	enum class ESteamPersonaState GetPersonaState(); // Function SteamCore.Friends.GetPersonaState // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb82a60
	struct FString GetPersonaName_Pure(); // Function SteamCore.Friends.GetPersonaName_Pure // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xb829f0
	struct FString GetPersonaName(); // Function SteamCore.Friends.GetPersonaName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb82970
	struct UTexture2D* GetMediumFriendAvatar(struct FSteamID SteamIDFriend); // Function SteamCore.Friends.GetMediumFriendAvatar // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb828b0
	struct UTexture2D* GetLargeFriendAvatar(struct FSteamID SteamIDFriend); // Function SteamCore.Friends.GetLargeFriendAvatar // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb82640
	int32_t GetFriendSteamLevel(struct FSteamID SteamIDFriend); // Function SteamCore.Friends.GetFriendSteamLevel // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb82030
	struct FString GetFriendsGroupName(struct FSteamFriendsGroupID friendsGroupID); // Function SteamCore.Friends.GetFriendsGroupName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb82340
	void GetFriendsGroupMembersList(struct FSteamFriendsGroupID friendsGroupID, struct TArray<struct FSteamID> steamIDMembers, int32_t membersCount); // Function SteamCore.Friends.GetFriendsGroupMembersList // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xb82210
	int32_t GetFriendsGroupMembersCount(struct FSteamFriendsGroupID friendsGroupID); // Function SteamCore.Friends.GetFriendsGroupMembersCount // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb82180
	struct FSteamFriendsGroupID GetFriendsGroupIDByIndex(int32_t friendGroup); // Function SteamCore.Friends.GetFriendsGroupIDByIndex // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb820f0
	int32_t GetFriendsGroupCount(); // Function SteamCore.Friends.GetFriendsGroupCount // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb820c0
	int32_t GetFriendRichPresenceKeyCount(struct FSteamID SteamIDFriend); // Function SteamCore.Friends.GetFriendRichPresenceKeyCount // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb81fa0
	struct FString GetFriendRichPresenceKeyByIndex(struct FSteamID SteamIDFriend, int32_t Key); // Function SteamCore.Friends.GetFriendRichPresenceKeyByIndex // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb81e90
	struct FString GetFriendRichPresence(struct FSteamID SteamIDFriend, struct FString Key); // Function SteamCore.Friends.GetFriendRichPresence // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb81d20
	enum class ESteamFriendRelationship GetFriendRelationship(struct FSteamID SteamIDFriend); // Function SteamCore.Friends.GetFriendRelationship // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb81c90
	enum class ESteamPersonaState GetFriendPersonaState(struct FSteamID SteamIDFriend); // Function SteamCore.Friends.GetFriendPersonaState // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb81c00
	struct FString GetFriendPersonaNameHistory(struct FSteamID SteamIDFriend, int32_t personaName); // Function SteamCore.Friends.GetFriendPersonaNameHistory // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb81af0
	struct FString GetFriendPersonaName(struct FSteamID SteamIDFriend); // Function SteamCore.Friends.GetFriendPersonaName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb81a20
	int32_t GetFriendMessage(struct FSteamID SteamIDFriend, int32_t MessageID, struct FString Text, enum class ESteamChatEntryType ChatEntryType); // Function SteamCore.Friends.GetFriendMessage // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xb818a0
	bool GetFriendGamePlayed(struct FSteamID SteamIDFriend, struct FSteamGameID GameID, struct FString gameIP, int32_t ConnectionPort, int32_t QueryPort, struct FSteamID SteamIDLobby); // Function SteamCore.Friends.GetFriendGamePlayed // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xb81670
	struct FSteamID GetFriendFromSourceByIndex(struct FSteamID steamIDSource, int32_t ifriend); // Function SteamCore.Friends.GetFriendFromSourceByIndex // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb815a0
	int32_t GetFriendCountFromSource(struct FSteamID steamIDSource); // Function SteamCore.Friends.GetFriendCountFromSource // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb81510
	int32_t GetFriendCount(struct TArray<enum class ESteamFriendFlags> Flags); // Function SteamCore.Friends.GetFriendCount // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb81430
	int32_t GetFriendCoplayTime(struct FSteamID SteamIDFriend); // Function SteamCore.Friends.GetFriendCoplayTime // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb813a0
	int32_t GetFriendCoplayGame(struct FSteamID SteamIDFriend); // Function SteamCore.Friends.GetFriendCoplayGame // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb81310
	struct FSteamID GetFriendByIndex(int32_t ifriend, struct TArray<enum class ESteamFriendFlags> Flags); // Function SteamCore.Friends.GetFriendByIndex // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb811f0
	void GetFollowerCount(struct FDelegate callback, struct FSteamID SteamID); // Function SteamCore.Friends.GetFollowerCount // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xb810f0
	int32_t GetCoplayFriendCount(); // Function SteamCore.Friends.GetCoplayFriendCount // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb80b20
	struct FSteamID GetCoplayFriend(int32_t coplayFriend); // Function SteamCore.Friends.GetCoplayFriend // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb80a90
	struct FString GetClanTag(struct FSteamID SteamIDClan); // Function SteamCore.Friends.GetClanTag // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb809c0
	struct FSteamID GetClanOwner(struct FSteamID SteamIDClan); // Function SteamCore.Friends.GetClanOwner // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb80930
	int32_t GetClanOfficerCount(struct FSteamID SteamIDClan); // Function SteamCore.Friends.GetClanOfficerCount // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb808a0
	struct FSteamID GetClanOfficerByIndex(struct FSteamID SteamIDClan, int32_t officer); // Function SteamCore.Friends.GetClanOfficerByIndex // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb807d0
	struct FString GetClanName(struct FSteamID SteamIDClan); // Function SteamCore.Friends.GetClanName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb80700
	int32_t GetClanCount(); // Function SteamCore.Friends.GetClanCount // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb806d0
	int32_t GetClanChatMessage(struct FSteamID SteamIDClanChat, int32_t MessageID, struct FString Text, enum class ESteamChatEntryType ChatEntryType, struct FSteamID steamIDChatter); // Function SteamCore.Friends.GetClanChatMessage // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xb804e0
	int32_t GetClanChatMemberCount(struct FSteamID SteamIDClan); // Function SteamCore.Friends.GetClanChatMemberCount // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb80450
	struct FSteamID GetClanByIndex(int32_t clan); // Function SteamCore.Friends.GetClanByIndex // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb803c0
	bool GetClanActivityCounts(struct FSteamID SteamIDClan, int32_t online, int32_t inGame, int32_t chatting); // Function SteamCore.Friends.GetClanActivityCounts // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xb80250
	struct FSteamID GetChatMemberByIndex(struct FSteamID SteamIDClan, int32_t User); // Function SteamCore.Friends.GetChatMemberByIndex // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb80180
	void EnumerateFollowingList(struct FDelegate callback, int32_t startIndex); // Function SteamCore.Friends.EnumerateFollowingList // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xb7fc00
	void DownloadClanActivityCounts(struct FDelegate callback, struct TArray<struct FSteamID> steamIDClans); // Function SteamCore.Friends.DownloadClanActivityCounts // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xb7faa0
	bool CloseClanChatWindowInSteam(struct FSteamID SteamIDClanChat); // Function SteamCore.Friends.CloseClanChatWindowInSteam // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb7fa10
	void ClearRichPresence(); // Function SteamCore.Friends.ClearRichPresence // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb7f9f0
	void ActivateGameOverlayToWebPage(struct FString URL, enum class ESteamActivateGameOverlayToWebPageMode Mode); // Function SteamCore.Friends.ActivateGameOverlayToWebPage // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb7f480
	void ActivateGameOverlayToUser(struct FString dialog, struct FSteamID SteamID); // Function SteamCore.Friends.ActivateGameOverlayToUser // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb7f360
	void ActivateGameOverlayToStore(int32_t AppID, enum class ESteamOverlayToStoreFlag flag); // Function SteamCore.Friends.ActivateGameOverlayToStore // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb7f2a0
	void ActivateGameOverlayInvitedialog(struct FSteamID SteamIDLobby); // Function SteamCore.Friends.ActivateGameOverlayInvitedialog // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb7f220
	void ActivateGameOverlay(struct FString dialog); // Function SteamCore.Friends.ActivateGameOverlay // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb7f140
};

// Class SteamCore.SteamCoreFriendsAsyncActionSetPersonaName
// Size: 0x40 (Inherited: 0x30)
struct USteamCoreFriendsAsyncActionSetPersonaName : USteamCoreAsyncAction {
	struct FMulticastInlineDelegate OnCallback; // 0x30(0x10)

	struct USteamCoreFriendsAsyncActionSetPersonaName* SetPersonaNameAsync(struct UObject* WorldContextObject, struct FString Name); // Function SteamCore.SteamCoreFriendsAsyncActionSetPersonaName.SetPersonaNameAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb875a0
	void HandleCallback(struct FSetPersonaNameResponse data, bool bWasSuccessful); // Function SteamCore.SteamCoreFriendsAsyncActionSetPersonaName.HandleCallback // (Final|Native|Public|HasOutParms) // @ game+0xb87160
};

// Class SteamCore.SteamCoreFriendsAsyncActionDownloadClanActivityCounts
// Size: 0x40 (Inherited: 0x30)
struct USteamCoreFriendsAsyncActionDownloadClanActivityCounts : USteamCoreAsyncAction {
	struct FMulticastInlineDelegate OnCallback; // 0x30(0x10)

	void HandleCallback(struct FDownloadClanActivityCountsResult data, bool bWasSuccessful); // Function SteamCore.SteamCoreFriendsAsyncActionDownloadClanActivityCounts.HandleCallback // (Final|Native|Public|HasOutParms) // @ game+0xb86d90
	struct USteamCoreFriendsAsyncActionDownloadClanActivityCounts* DownloadClanActivityCountsAsync(struct UObject* WorldContextObject, struct TArray<struct FSteamID> steamIDClans); // Function SteamCore.SteamCoreFriendsAsyncActionDownloadClanActivityCounts.DownloadClanActivityCountsAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb86ac0
};

// Class SteamCore.SteamCoreFriendsAsyncActionRequestClanOfficerList
// Size: 0x40 (Inherited: 0x30)
struct USteamCoreFriendsAsyncActionRequestClanOfficerList : USteamCoreAsyncAction {
	struct FMulticastInlineDelegate OnCallback; // 0x30(0x10)

	struct USteamCoreFriendsAsyncActionRequestClanOfficerList* RequestClanOfficerListAsync(struct UObject* WorldContextObject, struct FSteamID SteamIDClan); // Function SteamCore.SteamCoreFriendsAsyncActionRequestClanOfficerList.RequestClanOfficerListAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb873d0
	void HandleCallback(struct FClanOfficerListResponse data, bool bWasSuccessful); // Function SteamCore.SteamCoreFriendsAsyncActionRequestClanOfficerList.HandleCallback // (Final|Native|Public|HasOutParms) // @ game+0xb87050
};

// Class SteamCore.SteamCoreFriendsAsyncActionJoinClanChatRoom
// Size: 0x40 (Inherited: 0x30)
struct USteamCoreFriendsAsyncActionJoinClanChatRoom : USteamCoreAsyncAction {
	struct FMulticastInlineDelegate OnCallback; // 0x30(0x10)

	struct USteamCoreFriendsAsyncActionJoinClanChatRoom* JoinClanChatRoomAsync(struct UObject* WorldContextObject, struct FSteamID SteamIDClan); // Function SteamCore.SteamCoreFriendsAsyncActionJoinClanChatRoom.JoinClanChatRoomAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb87300
	void HandleCallback(struct FJoinClanChatRoomCompletionResult data, bool bWasSuccessful); // Function SteamCore.SteamCoreFriendsAsyncActionJoinClanChatRoom.HandleCallback // (Final|Native|Public|HasOutParms) // @ game+0xb87050
};

// Class SteamCore.SteamCoreFriendsAsyncActionEnumerateFollowingList
// Size: 0x40 (Inherited: 0x30)
struct USteamCoreFriendsAsyncActionEnumerateFollowingList : USteamCoreAsyncAction {
	struct FMulticastInlineDelegate OnCallback; // 0x30(0x10)

	void HandleCallback(struct FFriendsEnumerateFollowingList data, bool bWasSuccessful); // Function SteamCore.SteamCoreFriendsAsyncActionEnumerateFollowingList.HandleCallback // (Final|Native|Public|HasOutParms) // @ game+0xb86e60
	struct USteamCoreFriendsAsyncActionEnumerateFollowingList* EnumerateFollowingListAsync(struct UObject* WorldContextObject, int32_t startIndex); // Function SteamCore.SteamCoreFriendsAsyncActionEnumerateFollowingList.EnumerateFollowingListAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb86bf0
};

// Class SteamCore.SteamCoreFriendsAsyncActionIsFollowing
// Size: 0x40 (Inherited: 0x30)
struct USteamCoreFriendsAsyncActionIsFollowing : USteamCoreAsyncAction {
	struct FMulticastInlineDelegate OnCallback; // 0x30(0x10)

	struct USteamCoreFriendsAsyncActionIsFollowing* IsFollowingAsync(struct UObject* WorldContextObject, struct FSteamID SteamID); // Function SteamCore.SteamCoreFriendsAsyncActionIsFollowing.IsFollowingAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb87230
	void HandleCallback(struct FFriendsIsFollowing data, bool bWasSuccessful); // Function SteamCore.SteamCoreFriendsAsyncActionIsFollowing.HandleCallback // (Final|Native|Public|HasOutParms) // @ game+0xb86f60
};

// Class SteamCore.SteamCoreFriendsAsyncActionGetFollowerCount
// Size: 0x40 (Inherited: 0x30)
struct USteamCoreFriendsAsyncActionGetFollowerCount : USteamCoreAsyncAction {
	struct FMulticastInlineDelegate OnCallback; // 0x30(0x10)

	void HandleCallback(struct FFriendsGetFollowerCount data, bool bWasSuccessful); // Function SteamCore.SteamCoreFriendsAsyncActionGetFollowerCount.HandleCallback // (Final|Native|Public|HasOutParms) // @ game+0xb86f60
	struct USteamCoreFriendsAsyncActionGetFollowerCount* GetFollowerCountAsync(struct UObject* WorldContextObject, struct FSteamID SteamID); // Function SteamCore.SteamCoreFriendsAsyncActionGetFollowerCount.GetFollowerCountAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb86cc0
};

// Class SteamCore.SteamCoreFriendsAsyncActionRequestUserInformation
// Size: 0x70 (Inherited: 0x30)
struct USteamCoreFriendsAsyncActionRequestUserInformation : USteamCoreAsyncAction {
	struct FMulticastInlineDelegate OnCallback; // 0x30(0x10)
	char pad_40[0x30]; // 0x40(0x30)

	struct USteamCoreFriendsAsyncActionRequestUserInformation* RequestUserInformationAsync(struct UObject* WorldContextObject, struct FSteamID SteamIDUser, bool bRequireNameOnly); // Function SteamCore.SteamCoreFriendsAsyncActionRequestUserInformation.RequestUserInformationAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb874a0
	void HandleCallback(); // Function SteamCore.SteamCoreFriendsAsyncActionRequestUserInformation.HandleCallback // (Final|Native|Public) // @ game+0xb87140
};

// Class SteamCore.GameSearch
// Size: 0x198 (Inherited: 0x48)
struct UGameSearch : USteamCoreSubsystem {
	struct FMulticastInlineDelegate SearchForGameProgressDelegate; // 0x48(0x10)
	struct FMulticastInlineDelegate SearchForGameResultDelegate; // 0x58(0x10)
	struct FMulticastInlineDelegate RequestPlayersForGameProgressDelegate; // 0x68(0x10)
	struct FMulticastInlineDelegate RequestPlayersForGameResultDelegate; // 0x78(0x10)
	struct FMulticastInlineDelegate RequestPlayersForGameFinalResultDelegate; // 0x88(0x10)
	struct FMulticastInlineDelegate SubmitPlayerResultResultDelegate; // 0x98(0x10)
	struct FMulticastInlineDelegate EndGameResultDelegate; // 0xa8(0x10)
	char pad_B8[0xe0]; // 0xb8(0xe0)

	enum class ESteamGameSearchErrorCode SubmitPlayerResult(struct FString UniqueGameID, struct FSteamID SteamIDPlayer, enum class ESteamPlayerResult playerResult); // Function SteamCore.GameSearch.SubmitPlayerResult // (Final|Native|Public|BlueprintCallable) // @ game+0xb8cb10
	enum class ESteamGameSearchErrorCode SetGameHostParams(struct FString Key, struct TArray<struct FString> Values); // Function SteamCore.GameSearch.SetGameHostParams // (Final|Native|Public|BlueprintCallable) // @ game+0xb8ba90
	enum class ESteamGameSearchErrorCode SetConnectionDetails(struct FString connectionDetails); // Function SteamCore.GameSearch.SetConnectionDetails // (Final|Native|Public|BlueprintCallable) // @ game+0xb8b720
	enum class ESteamGameSearchErrorCode SearchForGameWithLobby(struct FSteamID SteamIDLobby, int32_t playerMin, int32_t playerMax); // Function SteamCore.GameSearch.SearchForGameWithLobby // (Final|Native|Public|BlueprintCallable) // @ game+0xb8b380
	enum class ESteamGameSearchErrorCode SearchForGameSolo(int32_t playerMin, int32_t playerMax); // Function SteamCore.GameSearch.SearchForGameSolo // (Final|Native|Public|BlueprintCallable) // @ game+0xb8b2b0
	enum class ESteamGameSearchErrorCode RetrieveConnectionDetails(struct FSteamID SteamIDHost, struct FString connectionDetails, int32_t numConnectionDetails); // Function SteamCore.GameSearch.RetrieveConnectionDetails // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xb8b170
	enum class ESteamGameSearchErrorCode RequestPlayersForGame(int32_t playerMin, int32_t playerMax, int32_t maxTeamSize); // Function SteamCore.GameSearch.RequestPlayersForGame // (Final|Native|Public|BlueprintCallable) // @ game+0xb8af90
	enum class ESteamGameSearchErrorCode HostConfirmGameStart(struct FString UniqueGameID); // Function SteamCore.GameSearch.HostConfirmGameStart // (Final|Native|Public|BlueprintCallable) // @ game+0xb8ad60
	enum class ESteamGameSearchErrorCode EndGameSearch(); // Function SteamCore.GameSearch.EndGameSearch // (Final|Native|Public|BlueprintCallable) // @ game+0xb8a630
	enum class ESteamGameSearchErrorCode EndGame(struct FString UniqueGameID); // Function SteamCore.GameSearch.EndGame // (Final|Native|Public|BlueprintCallable) // @ game+0xb8a530
	enum class ESteamGameSearchErrorCode DeclineGame(); // Function SteamCore.GameSearch.DeclineGame // (Final|Native|Public|BlueprintCallable) // @ game+0xb8a3e0
	enum class ESteamGameSearchErrorCode CancelRequestPlayersForGame(); // Function SteamCore.GameSearch.CancelRequestPlayersForGame // (Final|Native|Public|BlueprintCallable) // @ game+0xb8a120
	enum class ESteamGameSearchErrorCode AddGameSearchParams(struct FString keyToFind, struct TArray<struct FString> valuesToFind); // Function SteamCore.GameSearch.AddGameSearchParams // (Final|Native|Public|BlueprintCallable) // @ game+0xb89a80
	enum class ESteamGameSearchErrorCode AcceptGame(); // Function SteamCore.GameSearch.AcceptGame // (Final|Native|Public|BlueprintCallable) // @ game+0xb89a50
};

// Class SteamCore.GameServer
// Size: 0x138 (Inherited: 0x48)
struct UGameServer : USteamCoreSubsystem {
	struct FMulticastInlineDelegate GSPolicyResponse; // 0x48(0x10)
	struct FMulticastInlineDelegate GSClientGroupStatus; // 0x58(0x10)
	struct FMulticastInlineDelegate GSValidateAuthTicketResponse; // 0x68(0x10)
	struct FMulticastInlineDelegate GSClientApprove; // 0x78(0x10)
	struct FMulticastInlineDelegate GSClientDeny; // 0x88(0x10)
	char pad_98[0xa0]; // 0x98(0xa0)

	bool WasRestartRequested(); // Function SteamCore.GameServer.WasRestartRequested // (Final|Native|Public|BlueprintCallable) // @ game+0xb8cf00
	enum class ESteamUserHasLicenseForAppResult UserHasLicenseForApp(struct FSteamID SteamID, int32_t AppID); // Function SteamCore.GameServer.UserHasLicenseForApp // (Final|Native|Public|BlueprintCallable) // @ game+0xb8ce30
	void SetSpectatorServerName(struct FString spectatorServerName); // Function SteamCore.GameServer.SetSpectatorServerName // (Final|Native|Public|BlueprintCallable) // @ game+0xb8c600
	void SetSpectatorPort(int32_t spectatorPort); // Function SteamCore.GameServer.SetSpectatorPort // (Final|Native|Public|BlueprintCallable) // @ game+0xb8c570
	void SetServerName(struct FString ServerName); // Function SteamCore.GameServer.SetServerName // (Final|Native|Public|BlueprintCallable) // @ game+0xb8c480
	void SetRegion(struct FString region); // Function SteamCore.GameServer.SetRegion // (Final|Native|Public|BlueprintCallable) // @ game+0xb8c390
	void SetProduct(struct FString product); // Function SteamCore.GameServer.SetProduct // (Final|Native|Public|BlueprintCallable) // @ game+0xb8c2a0
	void SetPasswordProtected(bool bPasswordProtected); // Function SteamCore.GameServer.SetPasswordProtected // (Final|Native|Public|BlueprintCallable) // @ game+0xb8c210
	void SetModDir(struct FString modDir); // Function SteamCore.GameServer.SetModDir // (Final|Native|Public|BlueprintCallable) // @ game+0xb8c120
	void SetMaxPlayerCount(int32_t playersMax); // Function SteamCore.GameServer.SetMaxPlayerCount // (Final|Native|Public|BlueprintCallable) // @ game+0xb8c090
	void SetMapName(struct FString MapName); // Function SteamCore.GameServer.SetMapName // (Final|Native|Public|BlueprintCallable) // @ game+0xb8bfa0
	void SetKeyValue(struct FString Key, struct FString Value); // Function SteamCore.GameServer.SetKeyValue // (Final|Native|Public|BlueprintCallable) // @ game+0xb8be20
	void SetHeartbeatInterval(int32_t heartbeatInterval); // Function SteamCore.GameServer.SetHeartbeatInterval // (Final|Native|Public|BlueprintCallable) // @ game+0xb8bd90
	void SetGameTags(struct FString GameTags); // Function SteamCore.GameServer.SetGameTags // (Final|Native|Public|BlueprintCallable) // @ game+0xb8bca0
	void SetGameDescription(struct FString GameDescription); // Function SteamCore.GameServer.SetGameDescription // (Final|Native|Public|BlueprintCallable) // @ game+0xb8b9a0
	void SetGameData(struct FString gameData); // Function SteamCore.GameServer.SetGameData // (Final|Native|Public|BlueprintCallable) // @ game+0xb8b8b0
	void SetDedicatedServer(bool bDedicated); // Function SteamCore.GameServer.SetDedicatedServer // (Final|Native|Public|BlueprintCallable) // @ game+0xb8b820
	void SetBotPlayerCount(int32_t BotPlayers); // Function SteamCore.GameServer.SetBotPlayerCount // (Final|Native|Public|BlueprintCallable) // @ game+0xb8b690
	bool RequestUserGroupStatus(struct FSteamID SteamIDUser, struct FSteamID SteamIDGroup); // Function SteamCore.GameServer.RequestUserGroupStatus // (Final|Native|Public|BlueprintCallable) // @ game+0xb8b0a0
	void LogOnAnonymous(); // Function SteamCore.GameServer.LogOnAnonymous // (Final|Native|Public|BlueprintCallable) // @ game+0xb8af70
	void LogOn(struct FString Token); // Function SteamCore.GameServer.LogOn // (Final|Native|Public|BlueprintCallable) // @ game+0xb8ae80
	void LogOff(); // Function SteamCore.GameServer.LogOff // (Final|Native|Public|BlueprintCallable) // @ game+0xb8ae60
	struct FSteamID GetServerSteamID_PureCompact(); // Function SteamCore.GameServer.GetServerSteamID_PureCompact // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xb8a870
	struct FSteamID GetServerSteamID_Pure(); // Function SteamCore.GameServer.GetServerSteamID_Pure // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xb8a870
	struct FSteamID GetServerSteamID(); // Function SteamCore.GameServer.GetServerSteamID // (Final|Native|Public|BlueprintCallable) // @ game+0xb8a830
	struct FString GetServerPublicIP_PureCompact(); // Function SteamCore.GameServer.GetServerPublicIP_PureCompact // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xb8a7c0
	struct FString GetServerPublicIP_Pure(); // Function SteamCore.GameServer.GetServerPublicIP_Pure // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xb8a7c0
	struct FString GetServerPublicIP(); // Function SteamCore.GameServer.GetServerPublicIP // (Final|Native|Public|BlueprintCallable) // @ game+0xb8a740
	struct FSteamTicketHandle GetAuthSessionTicket(struct TArray<char> ticket); // Function SteamCore.GameServer.GetAuthSessionTicket // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xb8a680
	void ForceHeartbeat(); // Function SteamCore.GameServer.ForceHeartbeat // (Final|Native|Public|BlueprintCallable) // @ game+0xb8a660
	void EndAuthSession(struct FSteamID SteamID); // Function SteamCore.GameServer.EndAuthSession // (Final|Native|Public|BlueprintCallable) // @ game+0xb8a4a0
	void EnableHeartbeats(bool bActive); // Function SteamCore.GameServer.EnableHeartbeats // (Final|Native|Public|BlueprintCallable) // @ game+0xb8a410
	struct FSteamID CreateUnauthenticatedUserConnection(); // Function SteamCore.GameServer.CreateUnauthenticatedUserConnection // (Final|Native|Public|BlueprintCallable) // @ game+0xb8a3a0
	void ComputeNewPlayerCompatibility(struct FDelegate callback, struct FSteamID steamIDNewPlayer); // Function SteamCore.GameServer.ComputeNewPlayerCompatibility // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xb8a2a0
	void ClearAllKeyValues(); // Function SteamCore.GameServer.ClearAllKeyValues // (Final|Native|Public|BlueprintCallable) // @ game+0xb8a150
	void CancelAuthTicket(struct FSteamTicketHandle ticketHandle); // Function SteamCore.GameServer.CancelAuthTicket // (Final|Native|Public|BlueprintCallable) // @ game+0xb8a090
	bool BUpdateUserData(struct FSteamID SteamIDUser, struct FString PlayerName, int32_t Score); // Function SteamCore.GameServer.BUpdateUserData // (Final|Native|Public|BlueprintCallable) // @ game+0xb89df0
	bool BSecure(); // Function SteamCore.GameServer.BSecure // (Final|Native|Public|BlueprintCallable) // @ game+0xb89dc0
	bool BLoggedOn(); // Function SteamCore.GameServer.BLoggedOn // (Final|Native|Public|BlueprintCallable) // @ game+0xb89d90
	enum class ESteamBeginAuthSessionResult BeginAuthSession(struct TArray<char> ticket, struct FSteamID SteamID); // Function SteamCore.GameServer.BeginAuthSession // (Final|Native|Public|BlueprintCallable) // @ game+0xb89f60
	void AssociateWithClan(struct FDelegate callback, struct FSteamID SteamIDClan); // Function SteamCore.GameServer.AssociateWithClan // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xb89c90
};

// Class SteamCore.GameServerStats
// Size: 0x78 (Inherited: 0x48)
struct UGameServerStats : USteamCoreSubsystem {
	struct FMulticastInlineDelegate GSStatsUnloaded; // 0x48(0x10)
	char pad_58[0x20]; // 0x58(0x20)

	bool UpdateUserAvgRateStat(struct FSteamID SteamIDUser, struct FString Name, float countThisSession, float sessionLength); // Function SteamCore.GameServerStats.UpdateUserAvgRateStat // (Final|Native|Public|BlueprintCallable) // @ game+0xb8cc80
	bool SetUserStatInt(struct FSteamID SteamIDUser, struct FString Name, int32_t data); // Function SteamCore.GameServerStats.SetUserStatInt // (Final|Native|Public|BlueprintCallable) // @ game+0xb8c9a0
	bool SetUserStatFloat(struct FSteamID SteamIDUser, struct FString Name, float data); // Function SteamCore.GameServerStats.SetUserStatFloat // (Final|Native|Public|BlueprintCallable) // @ game+0xb8c820
	bool SetUserAchievement(struct FSteamID SteamIDUser, struct FString Name); // Function SteamCore.GameServerStats.SetUserAchievement // (Final|Native|Public|BlueprintCallable) // @ game+0xb8c6f0
	void ServerStoreUserStats(struct FDelegate callback, struct FSteamID SteamIDUser); // Function SteamCore.GameServerStats.ServerStoreUserStats // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xb8b590
	void ServerRequestUserStats(struct FDelegate callback, struct FSteamID SteamIDUser); // Function SteamCore.GameServerStats.ServerRequestUserStats // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xb8b490
	bool GetUserStatInt(struct FSteamID SteamIDUser, struct FString Name, int32_t data); // Function SteamCore.GameServerStats.GetUserStatInt // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xb8abd0
	bool GetUserStatFloat(struct FSteamID SteamIDUser, struct FString Name, float data); // Function SteamCore.GameServerStats.GetUserStatFloat // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xb8aa40
	bool GetUserAchievement(struct FSteamID SteamIDUser, struct FString Name, bool bAchieved); // Function SteamCore.GameServerStats.GetUserAchievement // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xb8a8b0
	bool ClearUserAchievement(struct FSteamID SteamIDUser, struct FString Name); // Function SteamCore.GameServerStats.ClearUserAchievement // (Final|Native|Public|BlueprintCallable) // @ game+0xb8a170
};

// Class SteamCore.Input
// Size: 0x48 (Inherited: 0x48)
struct UInput : USteamCoreSubsystem {

	void TriggerVibration(struct FInputHandle Handle, char leftSpeed, char rightSpeed); // Function SteamCore.Input.TriggerVibration // (Final|Native|Public|BlueprintCallable) // @ game+0xb90370
	void TriggerRepeatedHapticPulse(struct FInputHandle Handle, enum class ESteamCoreControllerPad targetPad, char durationMicroSec, char offMicroSec, char repeat, char Flags); // Function SteamCore.Input.TriggerRepeatedHapticPulse // (Final|Native|Public|BlueprintCallable) // @ game+0xb901a0
	void TriggerHapticPulse(struct FInputHandle Handle, enum class ESteamCoreControllerPad targetPad, char durationMicroSec); // Function SteamCore.Input.TriggerHapticPulse // (Final|Native|Public|BlueprintCallable) // @ game+0xb90090
	enum class ESteamCoreInputActionOrigin TranslateActionOrigin(enum class ESteamCoreInputType destinationInputType, enum class ESteamCoreInputActionOrigin sourceOrigin); // Function SteamCore.Input.TranslateActionOrigin // (Final|Native|Public|BlueprintCallable) // @ game+0xb8ffc0
	void StopAnalogActionMomentum(struct FInputHandle Handle, struct FInputAnalogActionHandle eAction); // Function SteamCore.Input.StopAnalogActionMomentum // (Final|Native|Public|BlueprintCallable) // @ game+0xb8fef0
	bool ShowBindingPanel(struct FInputHandle Handle); // Function SteamCore.Input.ShowBindingPanel // (Final|Native|Public|BlueprintCallable) // @ game+0xb8fe50
	void SetLEDColor(struct FInputHandle Handle, char colorR, char colorG, char colorB, enum class ESteamCoreInputLEDFlag Flags); // Function SteamCore.Input.SetLEDColor // (Final|Native|Public|BlueprintCallable) // @ game+0xb8fcb0
	struct FString GetStringForXboxOrigin(enum class ESteamCoreXboxOrigin Origin); // Function SteamCore.Input.GetStringForXboxOrigin // (Final|Native|Public|BlueprintCallable) // @ game+0xb8fbd0
	struct FString GetStringForActionOrigin(enum class ESteamCoreInputActionOrigin Origin); // Function SteamCore.Input.GetStringForActionOrigin // (Final|Native|Public|BlueprintCallable) // @ game+0xb8faf0
	int32_t GetRemotePlaySessionID(struct FInputHandle Handle); // Function SteamCore.Input.GetRemotePlaySessionID // (Final|Native|Public|BlueprintCallable) // @ game+0xb8fa50
	struct FInputMotionData GetMotionData(struct FInputHandle Handle); // Function SteamCore.Input.GetMotionData // (Final|Native|Public|BlueprintCallable) // @ game+0xb8f9a0
	enum class ESteamCoreInputType GetInputTypeForHandle(struct FInputHandle Handle); // Function SteamCore.Input.GetInputTypeForHandle // (Final|Native|Public|BlueprintCallable) // @ game+0xb8f900
	struct FString GetGlyphForXboxOrigin(enum class ESteamCoreXboxOrigin Origin); // Function SteamCore.Input.GetGlyphForXboxOrigin // (Final|Native|Public|BlueprintCallable) // @ game+0xb8f820
	struct FString GetGlyphForActionOrigin(enum class ESteamCoreInputActionOrigin Origin); // Function SteamCore.Input.GetGlyphForActionOrigin // (Final|Native|Public|BlueprintCallable) // @ game+0xb8f740
	int32_t GetGamepadIndexForController(struct FInputHandle Handle); // Function SteamCore.Input.GetGamepadIndexForController // (Final|Native|Public|BlueprintCallable) // @ game+0xb8f6a0
	int32_t GetDigitalActionOrigins(struct FInputHandle Handle, struct FInputActionSetHandle actionSetHandle, struct FInputDigitalActionHandle digitalActionHandle, struct TArray<enum class ESteamCoreInputActionOrigin> originsOut); // Function SteamCore.Input.GetDigitalActionOrigins // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xb8f520
	struct FInputDigitalActionHandle GetDigitalActionHandle(struct FString pszActionName); // Function SteamCore.Input.GetDigitalActionHandle // (Final|Native|Public|BlueprintCallable) // @ game+0xb8f430
	struct FInputDigitalActionData GetDigitalActionData(struct FInputHandle Handle, struct FInputDigitalActionHandle digitalActionHandle); // Function SteamCore.Input.GetDigitalActionData // (Final|Native|Public|BlueprintCallable) // @ game+0xb8f350
	bool GetDeviceBindingRevision(struct FInputHandle Handle, int32_t major, int32_t minor); // Function SteamCore.Input.GetDeviceBindingRevision // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xb8f230
	struct FInputActionSetHandle GetCurrentActionSet(struct FInputHandle Handle); // Function SteamCore.Input.GetCurrentActionSet // (Final|Native|Public|BlueprintCallable) // @ game+0xb8f1a0
	struct FInputHandle GetControllerForGamepadIndex(int32_t Index); // Function SteamCore.Input.GetControllerForGamepadIndex // (Final|Native|Public|BlueprintCallable) // @ game+0xb8f110
	int32_t GetAnalogActionOrigins(struct FInputHandle Handle, struct FInputActionSetHandle actionSetHandle, struct FInputAnalogActionHandle analogActionHandle, struct TArray<enum class ESteamCoreInputActionOrigin> originsOut); // Function SteamCore.Input.GetAnalogActionOrigins // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xb8ef90
	struct FInputAnalogActionHandle GetAnalogActionHandle(struct FString pszActionName); // Function SteamCore.Input.GetAnalogActionHandle // (Final|Native|Public|BlueprintCallable) // @ game+0xb8eea0
	struct FInputAnalogActionData GetAnalogActionData(struct FInputHandle Handle, struct FInputAnalogActionHandle analogActionHandle); // Function SteamCore.Input.GetAnalogActionData // (Final|Native|Public|BlueprintCallable) // @ game+0xb8edc0
	int32_t GetActiveActionSetLayers(struct FInputHandle Handle, struct TArray<struct FInputActionSetHandle> data); // Function SteamCore.Input.GetActiveActionSetLayers // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xb8ecc0
	struct FInputActionSetHandle GetActionSetHandle(struct FString actionSetName); // Function SteamCore.Input.GetActionSetHandle // (Final|Native|Public|BlueprintCallable) // @ game+0xb8ebd0
	enum class ESteamCoreInputActionOrigin GetActionOriginFromXboxOrigin(struct FInputHandle Handle, enum class ESteamCoreXboxOrigin Origin); // Function SteamCore.Input.GetActionOriginFromXboxOrigin // (Final|Native|Public|BlueprintCallable) // @ game+0xb8eb00
	void DeactivateAllActionSetLayers(struct FInputHandle Handle); // Function SteamCore.Input.DeactivateAllActionSetLayers // (Final|Native|Public|BlueprintCallable) // @ game+0xb8ea70
	void DeactivateActionSetLayer(struct FInputHandle Handle, struct FInputActionSetHandle actionSetLayerHandle); // Function SteamCore.Input.DeactivateActionSetLayer // (Final|Native|Public|BlueprintCallable) // @ game+0xb8e9a0
	void ActivateActionSetLayer(struct FInputHandle Handle, struct FInputActionSetHandle actionSetLayerHandle); // Function SteamCore.Input.ActivateActionSetLayer // (Final|Native|Public|BlueprintCallable) // @ game+0xb8e8d0
	void ActivateActionSet(struct FInputHandle Handle, struct FInputActionSetHandle actionSetHandle); // Function SteamCore.Input.ActivateActionSet // (Final|Native|Public|BlueprintCallable) // @ game+0xb8e800
};

// Class SteamCore.Inventory
// Size: 0x168 (Inherited: 0x48)
struct UInventory : USteamCoreSubsystem {
	struct FMulticastInlineDelegate SteamInventoryResultReady; // 0x48(0x10)
	struct FMulticastInlineDelegate SteamInventoryDefinitionUpdate; // 0x58(0x10)
	struct FMulticastInlineDelegate SteamInventoryFullUpdate; // 0x68(0x10)
	struct FMulticastInlineDelegate SteamInventoryStartPurchaseResult; // 0x78(0x10)
	struct FMulticastInlineDelegate SteamInventoryRequestPricesResultDelegate; // 0x88(0x10)
	struct FMulticastInlineDelegate SteamInventoryEligiblePromoItemDefIDs; // 0x98(0x10)
	char pad_A8[0xc0]; // 0xa8(0xc0)

	bool TriggerItemDrop(struct FSteamInventoryResult Result, struct FSteamItemDef listDefinition); // Function SteamCore.Inventory.TriggerItemDrop // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xb94a50
	bool TransferItemQuantity(struct FSteamInventoryResult Result, struct FSteamItemInstanceID itemIDSource, int32_t Quantity, struct FSteamItemInstanceID itemIDDest); // Function SteamCore.Inventory.TransferItemQuantity // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xb948f0
	bool SubmitUpdateProperties(struct FSteamInventoryUpdateHandle Handle, struct FSteamInventoryResult resultHandle); // Function SteamCore.Inventory.SubmitUpdateProperties // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xb94810
	struct FSteamInventoryUpdateHandle StartUpdateProperties(); // Function SteamCore.Inventory.StartUpdateProperties // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb947d0
	void StartPurchase(struct FDelegate callback, struct TArray<struct FSteamItemDef> itemDefs, struct TArray<int32_t> Quantity); // Function SteamCore.Inventory.StartPurchase // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xb94440
	bool SetPropertyString(struct FSteamInventoryUpdateHandle Handle, struct FSteamItemInstanceID ItemId, struct FString PropertyName, struct FString Value); // Function SteamCore.Inventory.SetPropertyString // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb94250
	bool SetPropertyInt(struct FSteamInventoryUpdateHandle Handle, struct FSteamItemInstanceID ItemId, struct FString PropertyName, int32_t Value); // Function SteamCore.Inventory.SetPropertyInt // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb940b0
	bool SetPropertyFloat(struct FSteamInventoryUpdateHandle Handle, struct FSteamItemInstanceID ItemId, struct FString PropertyName, float Value); // Function SteamCore.Inventory.SetPropertyFloat // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb93f10
	bool SetPropertyBool(struct FSteamInventoryUpdateHandle Handle, struct FSteamItemInstanceID ItemId, struct FString PropertyName, bool Value); // Function SteamCore.Inventory.SetPropertyBool // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb93d60
	bool SerializeResult(struct FSteamInventoryResult Handle, struct TArray<char> buffer); // Function SteamCore.Inventory.SerializeResult // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xb93c70
	void RequestPrices(struct FDelegate callback); // Function SteamCore.Inventory.RequestPrices // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xb93b30
	void RequestEligiblePromoItemDefinitionsIDs(struct FDelegate callback, struct FSteamID SteamID); // Function SteamCore.Inventory.RequestEligiblePromoItemDefinitionsIDs // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xb93960
	bool RemoveProperty(struct FSteamInventoryUpdateHandle Handle, struct FSteamItemInstanceID ItemId, struct FString PropertyName); // Function SteamCore.Inventory.RemoveProperty // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb937f0
	bool LoadItemDefinitions(); // Function SteamCore.Inventory.LoadItemDefinitions // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb937c0
	bool GrantPromoItems(struct FSteamInventoryResult Result); // Function SteamCore.Inventory.GrantPromoItems // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xb93520
	int32_t GetResultTimestamp(struct FSteamInventoryResult Handle); // Function SteamCore.Inventory.GetResultTimestamp // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb93490
	enum class ESteamResult GetResultStatus(struct FSteamInventoryResult Handle); // Function SteamCore.Inventory.GetResultStatus // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb93400
	bool GetResultItems(struct FSteamInventoryResult Handle, struct TArray<struct FSteamItemDetails> Items); // Function SteamCore.Inventory.GetResultItems // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xb932f0
	bool GetResultItemProperty(struct FSteamInventoryResult Handle, int32_t ItemIndex, struct FString PropertyName, struct FString Value); // Function SteamCore.Inventory.GetResultItemProperty // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xb93130
	int32_t GetNumItemsWithPrices(); // Function SteamCore.Inventory.GetNumItemsWithPrices // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb93100
	bool GetItemsWithPrices(struct TArray<struct FSteamItemDef> itemDefs, struct TArray<int32_t> prices, struct TArray<int32_t> basePrices); // Function SteamCore.Inventory.GetItemsWithPrices // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xb92f80
	bool GetItemsByID(struct FSteamInventoryResult inventoryResult, struct TArray<struct FSteamItemInstanceID> instanceIDs); // Function SteamCore.Inventory.GetItemsByID // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xb92e40
	bool GetItemPrice(struct FSteamItemDef itemDef, int32_t price, int32_t basePrice); // Function SteamCore.Inventory.GetItemPrice // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xb92d20
	bool GetItemDefinitionProperty(struct FSteamItemDef itemDef, struct FString PropertyName, struct FString Value); // Function SteamCore.Inventory.GetItemDefinitionProperty // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xb92b90
	bool GetItemDefinitionIDs(struct TArray<struct FSteamItemDef> itemDefs); // Function SteamCore.Inventory.GetItemDefinitionIDs // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xb92ae0
	bool GetEligiblePromoItemDefinitionIDs(struct FSteamID SteamID, struct TArray<struct FSteamItemDef> itemDefs); // Function SteamCore.Inventory.GetEligiblePromoItemDefinitionIDs // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xb929f0
	bool GetAllItems(struct FSteamInventoryResult Handle); // Function SteamCore.Inventory.GetAllItems // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xb92960
	bool GenerateItems(struct FSteamInventoryResult Result, struct TArray<struct FSteamItemDef> itemDefs, struct TArray<int32_t> Quantity); // Function SteamCore.Inventory.GenerateItems // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xb927a0
	bool ExchangeItems(struct FSteamInventoryResult Result, struct TArray<struct FSteamItemDef> arrayGenerate, struct TArray<int32_t> arrayGenerateQuantity, struct TArray<struct FSteamItemInstanceID> arrayDestroy, struct TArray<int32_t> arrayDestroyQuantity); // Function SteamCore.Inventory.ExchangeItems // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xb924b0
	void DestroyResult(struct FSteamInventoryResult Handle); // Function SteamCore.Inventory.DestroyResult // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb92430
	bool DeserializeResult(struct FSteamInventoryResult Result, struct TArray<char> buffer, bool bReservedMustBeFalse); // Function SteamCore.Inventory.DeserializeResult // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xb922a0
	bool ConsumeItem(struct FSteamInventoryResult Result, struct FSteamItemInstanceID itemConsume, int32_t Quantity); // Function SteamCore.Inventory.ConsumeItem // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xb92180
	bool CheckResultSteamID(struct FSteamInventoryResult Handle, struct FSteamID steamIDExpected); // Function SteamCore.Inventory.CheckResultSteamID // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb920b0
	bool AddPromoItems(struct FSteamInventoryResult outResult, struct TArray<struct FSteamItemDef> itemDefs); // Function SteamCore.Inventory.AddPromoItems // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xb91f70
	bool AddPromoItem(struct FSteamInventoryResult Result, struct FSteamItemDef itemDef); // Function SteamCore.Inventory.AddPromoItem // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xb91ea0
};

// Class SteamCore.SteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs
// Size: 0x40 (Inherited: 0x30)
struct USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs : USteamCoreAsyncAction {
	struct FMulticastInlineDelegate OnCallback; // 0x30(0x10)

	struct USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs* RequestEligiblePromoItemDefinitionsIDsAsync(struct UObject* WorldContextObject, struct FSteamID SteamID); // Function SteamCore.SteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs.RequestEligiblePromoItemDefinitionsIDsAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb93a60
	void HandleCallback(struct FSteamInventoryEligiblePromoItemDefIDs data, bool bWasSuccessful); // Function SteamCore.SteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs.HandleCallback // (Final|Native|Public|HasOutParms) // @ game+0xb86f60
};

// Class SteamCore.SteamCoreInventoryAsyncActionRequestPricesResult
// Size: 0x40 (Inherited: 0x30)
struct USteamCoreInventoryAsyncActionRequestPricesResult : USteamCoreAsyncAction {
	struct FMulticastInlineDelegate OnCallback; // 0x30(0x10)

	struct USteamCoreInventoryAsyncActionRequestPricesResult* RequestPricesAsync(struct UObject* WorldContextObject); // Function SteamCore.SteamCoreInventoryAsyncActionRequestPricesResult.RequestPricesAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb93be0
	void HandleCallback(struct FSteamInventoryRequestPricesResult data, bool bWasSuccessful); // Function SteamCore.SteamCoreInventoryAsyncActionRequestPricesResult.HandleCallback // (Final|Native|Public|HasOutParms) // @ game+0xb935b0
};

// Class SteamCore.SteamCoreInventoryAsyncActionStartPurchaseResult
// Size: 0x40 (Inherited: 0x30)
struct USteamCoreInventoryAsyncActionStartPurchaseResult : USteamCoreAsyncAction {
	struct FMulticastInlineDelegate OnCallback; // 0x30(0x10)

	struct USteamCoreInventoryAsyncActionStartPurchaseResult* StartPurchaseAsync(struct UObject* WorldContextObject, struct TArray<struct FSteamItemDef> itemDefs, struct TArray<int32_t> Quantity); // Function SteamCore.SteamCoreInventoryAsyncActionStartPurchaseResult.StartPurchaseAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb94620
	void HandleCallback(struct FSteamInventoryStartPurchaseResult data, bool bWasSuccessful); // Function SteamCore.SteamCoreInventoryAsyncActionStartPurchaseResult.HandleCallback // (Final|Native|Public|HasOutParms) // @ game+0xb936b0
};

// Class SteamCore.Matchmaking
// Size: 0x1f8 (Inherited: 0x48)
struct UMatchmaking : USteamCoreSubsystem {
	struct FMulticastInlineDelegate FavoritesListAccountsUpdated; // 0x48(0x10)
	struct FMulticastInlineDelegate FavoritesListChanged; // 0x58(0x10)
	struct FMulticastInlineDelegate LobbyChatMsg; // 0x68(0x10)
	struct FMulticastInlineDelegate LobbyChatUpdate; // 0x78(0x10)
	struct FMulticastInlineDelegate LobbyDataUpdate; // 0x88(0x10)
	struct FMulticastInlineDelegate LobbyEnter; // 0x98(0x10)
	struct FMulticastInlineDelegate LobbyGameCreated; // 0xa8(0x10)
	struct FMulticastInlineDelegate LobbyInvite; // 0xb8(0x10)
	struct FMulticastInlineDelegate LobbyKicked; // 0xc8(0x10)
	char pad_D8[0x120]; // 0xd8(0x120)

	bool SetLobbyType(struct FSteamID SteamIDLobby, enum class ESteamLobbyType lobbyType); // Function SteamCore.Matchmaking.SetLobbyType // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb9ab40
	bool SetLobbyOwner(struct FSteamID SteamIDLobby, struct FSteamID steamIDNewOwner); // Function SteamCore.Matchmaking.SetLobbyOwner // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb9aa70
	bool SetLobbyMemberLimit(struct FSteamID SteamIDLobby, int32_t maxMembers); // Function SteamCore.Matchmaking.SetLobbyMemberLimit // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb9a9a0
	void SetLobbyMemberData(struct FSteamID SteamIDLobby, struct FString Key, struct FString Value); // Function SteamCore.Matchmaking.SetLobbyMemberData // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb9a800
	bool SetLobbyJoinable(struct FSteamID SteamIDLobby, bool bLobbyJoinable); // Function SteamCore.Matchmaking.SetLobbyJoinable // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb9a730
	void SetLobbyGameServer(struct FSteamID SteamIDLobby, struct FString GameServerIP, int32_t GameServerPort, struct FSteamID SteamIDGameServer); // Function SteamCore.Matchmaking.SetLobbyGameServer // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb9a5a0
	bool SetLobbyData(struct FSteamID SteamIDLobby, struct FString Key, struct FString Value); // Function SteamCore.Matchmaking.SetLobbyData // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb9a3f0
	bool SetLinkedLobby(struct FSteamID SteamIDLobby, struct FSteamID steamIDLobbyDependent); // Function SteamCore.Matchmaking.SetLinkedLobby // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb9a320
	bool SendLobbyChatMsg(struct FSteamID SteamIDLobby, struct FString Message); // Function SteamCore.Matchmaking.SendLobbyChatMsg // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb9a060
	void RequestLobbyList(struct FDelegate callback); // Function SteamCore.Matchmaking.RequestLobbyList // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xb99d60
	bool RequestLobbyData(struct FSteamID SteamIDLobby); // Function SteamCore.Matchmaking.RequestLobbyData // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb99cd0
	bool RemoveFavoriteGame(int32_t AppID, struct FString IP, int32_t ConnectionPort, int32_t QueryPort, struct TArray<enum class ESteamFavoriteFlags> Flags); // Function SteamCore.Matchmaking.RemoveFavoriteGame // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb991f0
	void LeaveLobby(struct FSteamID SteamIDLobby); // Function SteamCore.Matchmaking.LeaveLobby // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb98e80
	void JoinLobby(struct FDelegate callback, struct FSteamID SteamIDLobby); // Function SteamCore.Matchmaking.JoinLobby // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xb98cb0
	bool InviteUserToLobby(struct FSteamID SteamIDLobby, struct FSteamID steamIDInvitee); // Function SteamCore.Matchmaking.InviteUserToLobby // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb98be0
	int32_t GetNumLobbyMembers(struct FSteamID SteamIDLobby); // Function SteamCore.Matchmaking.GetNumLobbyMembers // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb98990
	struct FSteamID GetLobbyOwner(struct FSteamID SteamIDLobby); // Function SteamCore.Matchmaking.GetLobbyOwner // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb98900
	int32_t GetLobbyMemberLimit(struct FSteamID SteamIDLobby); // Function SteamCore.Matchmaking.GetLobbyMemberLimit // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb98870
	struct FString GetLobbyMemberData(struct FSteamID SteamIDLobby, struct FSteamID SteamIDUser, struct FString Key); // Function SteamCore.Matchmaking.GetLobbyMemberData // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb986d0
	struct FSteamID GetLobbyMemberByIndex(struct FSteamID SteamIDLobby, int32_t member); // Function SteamCore.Matchmaking.GetLobbyMemberByIndex // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb98600
	bool GetLobbyGameServer(struct FSteamID SteamIDLobby, struct FString GameServerIP, int32_t GameServerPort, struct FSteamID SteamIDGameServer); // Function SteamCore.Matchmaking.GetLobbyGameServer // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xb98480
	int32_t GetLobbyDataCount(struct FSteamID SteamIDLobby); // Function SteamCore.Matchmaking.GetLobbyDataCount // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb983f0
	bool GetLobbyDataByIndex(struct FSteamID SteamIDLobby, int32_t lobbyData, struct FString Key, struct FString Value); // Function SteamCore.Matchmaking.GetLobbyDataByIndex // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xb98260
	struct FString GetLobbyData(struct FSteamID SteamIDLobby, struct FString Key); // Function SteamCore.Matchmaking.GetLobbyData // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb980f0
	int32_t GetLobbyChatEntry(struct FSteamID SteamIDLobby, int32_t MessageID, struct FSteamID SteamIDUser, struct FString Message, enum class ESteamChatEntryType ChatEntryType); // Function SteamCore.Matchmaking.GetLobbyChatEntry // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xb97f00
	struct FSteamID GetLobbyByIndex(int32_t Lobby); // Function SteamCore.Matchmaking.GetLobbyByIndex // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb97e70
	int32_t GetFavoriteGameCount(); // Function SteamCore.Matchmaking.GetFavoriteGameCount // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb97e40
	bool GetFavoriteGame(int32_t Game, int32_t AppID, struct FString IP, int32_t ConnectionPort, int32_t QueryPort, struct TArray<enum class ESteamFavoriteFlags> Flags, int32_t timeLastPlayedOnServer); // Function SteamCore.Matchmaking.GetFavoriteGame // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xb97bb0
	bool DeleteLobbyData(struct FSteamID SteamIDLobby, struct FString Key); // Function SteamCore.Matchmaking.DeleteLobbyData // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb976f0
	void CreateLobby(struct FDelegate callback, enum class ESteamLobbyType lobbyType, int32_t maxMembers); // Function SteamCore.Matchmaking.CreateLobby // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xb96fd0
	void AddRequestLobbyListStringFilter(struct FString keyToMatch, struct FString valueToMatch, enum class ESteamLobbyComparison comparisonType); // Function SteamCore.Matchmaking.AddRequestLobbyListStringFilter // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb96e30
	void AddRequestLobbyListResultCountFilter(int32_t MaxResults); // Function SteamCore.Matchmaking.AddRequestLobbyListResultCountFilter // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb96db0
	void AddRequestLobbyListNumericalFilter(struct FString keyToMatch, int32_t valueToMatch, enum class ESteamLobbyComparison comparisonType); // Function SteamCore.Matchmaking.AddRequestLobbyListNumericalFilter // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb96c50
	void AddRequestLobbyListNearValueFilter(struct FString keyToMatch, int32_t valueToBeCloseTo); // Function SteamCore.Matchmaking.AddRequestLobbyListNearValueFilter // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb96b30
	void AddRequestLobbyListFilterSlotsAvailable(int32_t slotsAvailable); // Function SteamCore.Matchmaking.AddRequestLobbyListFilterSlotsAvailable // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb96ab0
	void AddRequestLobbyListDistanceFilter(enum class ESteamLobbyDistanceFilter lobbyDistanceFilter); // Function SteamCore.Matchmaking.AddRequestLobbyListDistanceFilter // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb96a40
	void AddRequestLobbyListCompatibleMembersFilter(struct FSteamID SteamIDLobby); // Function SteamCore.Matchmaking.AddRequestLobbyListCompatibleMembersFilter // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb969c0
	int32_t AddFavoriteGame(int32_t AppID, struct FString IP, int32_t ConnectionPort, int32_t QueryPort, struct TArray<enum class ESteamFavoriteFlags> Flags, int32_t timeLastPlayedOnServer); // Function SteamCore.Matchmaking.AddFavoriteGame // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb96760
};

// Class SteamCore.SteamCoreMatchmakingAsyncActionCreateLobby
// Size: 0x40 (Inherited: 0x30)
struct USteamCoreMatchmakingAsyncActionCreateLobby : USteamCoreAsyncAction {
	struct FMulticastInlineDelegate OnCallback; // 0x30(0x10)

	void HandleCallback(struct FCreateLobbyData data, bool bWasSuccessful); // Function SteamCore.SteamCoreMatchmakingAsyncActionCreateLobby.HandleCallback // (Final|Native|Public|HasOutParms) // @ game+0xb98a20
	struct USteamCoreMatchmakingAsyncActionCreateLobby* CreateLobbyAsync(struct UObject* WorldContextObject, enum class ESteamLobbyType lobbyType, int32_t maxMembers); // Function SteamCore.SteamCoreMatchmakingAsyncActionCreateLobby.CreateLobbyAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb97100
};

// Class SteamCore.SteamCoreMatchmakingAsyncActionRequestLobbyList
// Size: 0x40 (Inherited: 0x30)
struct USteamCoreMatchmakingAsyncActionRequestLobbyList : USteamCoreAsyncAction {
	struct FMulticastInlineDelegate OnCallback; // 0x30(0x10)

	struct USteamCoreMatchmakingAsyncActionRequestLobbyList* RequestLobbyListAsync(struct UObject* WorldContextObject); // Function SteamCore.SteamCoreMatchmakingAsyncActionRequestLobbyList.RequestLobbyListAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb99e10
	void HandleCallback(struct FLobbyMatchList data, bool bWasSuccessful); // Function SteamCore.SteamCoreMatchmakingAsyncActionRequestLobbyList.HandleCallback // (Final|Native|Public|HasOutParms) // @ game+0xb98b10
};

// Class SteamCore.SteamCoreMatchmakingAsyncActionJoinLobby
// Size: 0x40 (Inherited: 0x30)
struct USteamCoreMatchmakingAsyncActionJoinLobby : USteamCoreAsyncAction {
	struct FMulticastInlineDelegate OnCallback; // 0x30(0x10)

	struct USteamCoreMatchmakingAsyncActionJoinLobby* JoinLobbyAsync(struct UObject* WorldContextObject, struct FSteamID SteamIDLobby); // Function SteamCore.SteamCoreMatchmakingAsyncActionJoinLobby.JoinLobbyAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb98db0
	void HandleCallback(struct FJoinLobbyData data, bool bWasSuccessful); // Function SteamCore.SteamCoreMatchmakingAsyncActionJoinLobby.HandleCallback // (Final|Native|Public|HasOutParms) // @ game+0xb87050
};

// Class SteamCore.SteamCoreCreateSession
// Size: 0x138 (Inherited: 0x30)
struct USteamCoreCreateSession : USteamCoreAsyncAction {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0xe8]; // 0x50(0xe8)

	struct USteamCoreCreateSession* CreateSteamCoreSession(struct UObject* WorldContextObject, struct TMap<struct FString, struct FSteamSessionSetting> SessionSettings, struct FString SessionName, int32_t numPublicConnections, int32_t NumPrivateConnections, bool bUseLAN, bool bAllowInvites, bool bUsesPresence, bool bAllowJoinViaPresence, bool bAllowJoinViaPresenceFriendsOnly, bool bAntiCheatProtected, bool bUsesStats, bool bShouldAdvertise); // Function SteamCore.SteamCoreCreateSession.CreateSteamCoreSession // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb97200
};

// Class SteamCore.SteamCoreFindSession
// Size: 0xd0 (Inherited: 0x30)
struct USteamCoreFindSession : USteamCoreAsyncAction {
	struct FMulticastInlineDelegate OnCallback; // 0x30(0x10)
	char pad_40[0x90]; // 0x40(0x90)

	void OnCompleted(bool bSuccessful); // Function SteamCore.SteamCoreFindSession.OnCompleted // (Final|Native|Public) // @ game+0xb98fd0
	struct USteamCoreFindSession* FindSteamCoreSessions(struct UObject* WorldContextObject, struct TMap<struct FString, struct FSteamSessionSearchSetting> searchSettings, int32_t MaxResults, bool bUseLAN, enum class ESteamSessionFindType serverType, bool bEmptyServersOnly, bool bSecureServersOnly); // Function SteamCore.SteamCoreFindSession.FindSteamCoreSessions // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb978b0
};

// Class SteamCore.SteamCoreDestroySession
// Size: 0x70 (Inherited: 0x30)
struct USteamCoreDestroySession : USteamCoreAsyncAction {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x20]; // 0x50(0x20)

	void OnCompleted(struct FName SessionName, bool bWasSuccessful); // Function SteamCore.SteamCoreDestroySession.OnCompleted // (Final|Native|Public) // @ game+0xb98f00
	struct USteamCoreDestroySession* DestroySteamCoreSession(struct UObject* WorldContextObject); // Function SteamCore.SteamCoreDestroySession.DestroySteamCoreSession // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb97820
};

// Class SteamCore.MatchmakingServers
// Size: 0x48 (Inherited: 0x48)
struct UMatchmakingServers : USteamCoreSubsystem {

	void ServerRules(struct FDelegate callback, struct FString IP, int32_t QueryPort); // Function SteamCore.MatchmakingServers.ServerRules // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xb9a190
	void RequestSpectatorServerList(struct FDelegate serverCallback, int32_t AppID, int32_t MaxResults, bool bIgnoreNonResponsive, struct UServerFilter* ServerFilter); // Function SteamCore.MatchmakingServers.RequestSpectatorServerList // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xb99ea0
	void RequestLANServerList(struct FDelegate serverCallback, int32_t AppID, int32_t MaxResults, bool bIgnoreNonResponsive, struct UServerFilter* ServerFilter); // Function SteamCore.MatchmakingServers.RequestLANServerList // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xb99b10
	void RequestInternetServerList(struct FDelegate serverCallback, int32_t AppID, int32_t MaxResults, bool bIgnoreNonResponsive, struct UServerFilter* ServerFilter); // Function SteamCore.MatchmakingServers.RequestInternetServerList // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xb99950
	void RequestHistoryServerList(struct FDelegate serverCallback, int32_t AppID, int32_t MaxResults, bool bIgnoreNonResponsive, struct UServerFilter* ServerFilter); // Function SteamCore.MatchmakingServers.RequestHistoryServerList // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xb99790
	void RequestFriendsServerList(struct FDelegate serverCallback, int32_t AppID, int32_t MaxResults, bool bIgnoreNonResponsive, struct UServerFilter* ServerFilter); // Function SteamCore.MatchmakingServers.RequestFriendsServerList // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xb995d0
	void RequestFavoritesServerList(struct FDelegate serverCallback, int32_t AppID, int32_t MaxResults, bool bIgnoreNonResponsive, struct UServerFilter* ServerFilter); // Function SteamCore.MatchmakingServers.RequestFavoritesServerList // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xb99410
	void PingServer(struct FDelegate callback, struct FString IP, int32_t QueryPort); // Function SteamCore.MatchmakingServers.PingServer // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xb99060
};

// Class SteamCore.SteamCoreMatchmakingServersAsyncActionPingServer
// Size: 0x40 (Inherited: 0x30)
struct USteamCoreMatchmakingServersAsyncActionPingServer : USteamCoreAsyncAction {
	struct FMulticastInlineDelegate OnCallback; // 0x30(0x10)

	struct USteamCoreMatchmakingServersAsyncActionPingServer* PingServerAsync(struct UObject* WorldContextObject, struct FString IP, int32_t Port); // Function SteamCore.SteamCoreMatchmakingServersAsyncActionPingServer.PingServerAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb9e4f0
	void HandleCallback(struct FGameServerItem data, bool bWasSuccessful); // Function SteamCore.SteamCoreMatchmakingServersAsyncActionPingServer.HandleCallback // (Final|Native|Public|HasOutParms) // @ game+0xb9e060
};

// Class SteamCore.SteamCoreMatchmakingServersAsyncActionRequestServerList
// Size: 0x40 (Inherited: 0x30)
struct USteamCoreMatchmakingServersAsyncActionRequestServerList : USteamCoreAsyncAction {
	struct FMulticastInlineDelegate OnCallback; // 0x30(0x10)

	struct USteamCoreMatchmakingServersAsyncActionRequestServerList* RequestSpectatorServerListAsync(struct UObject* WorldContextObject, int32_t AppID, int32_t MaxResults, bool bIgnoreNonResponsive, struct UServerFilter* ServerFilter); // Function SteamCore.SteamCoreMatchmakingServersAsyncActionRequestServerList.RequestSpectatorServerListAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb9eed0
	struct USteamCoreMatchmakingServersAsyncActionRequestServerList* RequestLANServerListAsync(struct UObject* WorldContextObject, int32_t AppID, int32_t MaxResults, bool bIgnoreNonResponsive, struct UServerFilter* ServerFilter); // Function SteamCore.SteamCoreMatchmakingServersAsyncActionRequestServerList.RequestLANServerListAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb9ed30
	struct USteamCoreMatchmakingServersAsyncActionRequestServerList* RequestInternetServerListAsync(struct UObject* WorldContextObject, int32_t AppID, int32_t MaxResults, bool bIgnoreNonResponsive, struct UServerFilter* ServerFilter); // Function SteamCore.SteamCoreMatchmakingServersAsyncActionRequestServerList.RequestInternetServerListAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb9eb90
	struct USteamCoreMatchmakingServersAsyncActionRequestServerList* RequestHistoryServerListAsync(struct UObject* WorldContextObject, int32_t AppID, int32_t MaxResults, bool bIgnoreNonResponsive, struct UServerFilter* ServerFilter); // Function SteamCore.SteamCoreMatchmakingServersAsyncActionRequestServerList.RequestHistoryServerListAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb9e9f0
	struct USteamCoreMatchmakingServersAsyncActionRequestServerList* RequestFriendsServerListAsync(struct UObject* WorldContextObject, int32_t AppID, int32_t MaxResults, bool bIgnoreNonResponsive, struct UServerFilter* ServerFilter); // Function SteamCore.SteamCoreMatchmakingServersAsyncActionRequestServerList.RequestFriendsServerListAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb9e850
	struct USteamCoreMatchmakingServersAsyncActionRequestServerList* RequestFavoritesServerListAsync(struct UObject* WorldContextObject, int32_t AppID, int32_t MaxResults, bool bIgnoreNonResponsive, struct UServerFilter* ServerFilter); // Function SteamCore.SteamCoreMatchmakingServersAsyncActionRequestServerList.RequestFavoritesServerListAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb9e6b0
	void HandleServerListFinished(); // Function SteamCore.SteamCoreMatchmakingServersAsyncActionRequestServerList.HandleServerListFinished // (Final|Native|Private) // @ game+0xb9e4b0
	void HandleCallback(struct TArray<struct FGameServerItem> data, bool bWasSuccessful); // Function SteamCore.SteamCoreMatchmakingServersAsyncActionRequestServerList.HandleCallback // (Final|Native|Private|HasOutParms) // @ game+0xb9e200
};

// Class SteamCore.SteamCoreMatchmakingServersAsyncActionServerRules
// Size: 0x40 (Inherited: 0x30)
struct USteamCoreMatchmakingServersAsyncActionServerRules : USteamCoreAsyncAction {
	struct FMulticastInlineDelegate OnCallback; // 0x30(0x10)

	struct USteamCoreMatchmakingServersAsyncActionServerRules* ServerRulesAsync(struct UObject* WorldContextObject, struct FString IP, int32_t QueryPort); // Function SteamCore.SteamCoreMatchmakingServersAsyncActionServerRules.ServerRulesAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb9f070
	void HandleCallback(struct TArray<struct FGameServerRule> data, bool bWasSuccessful); // Function SteamCore.SteamCoreMatchmakingServersAsyncActionServerRules.HandleCallback // (Final|Native|Public|HasOutParms) // @ game+0xb9e380
};

// Class SteamCore.ServerFilter
// Size: 0x38 (Inherited: 0x28)
struct UServerFilter : UObject {
	char pad_28[0x10]; // 0x28(0x10)

	struct TMap<struct FString, struct FString> GetFilters(); // Function SteamCore.ServerFilter.GetFilters // (Final|Native|Public|BlueprintCallable) // @ game+0xb9df10
	void AddFilterSecure(); // Function SteamCore.ServerFilter.AddFilterSecure // (Final|Native|Public|BlueprintCallable) // @ game+0xb9de90
	void AddFilterOr(struct FString Value); // Function SteamCore.ServerFilter.AddFilterOr // (Final|Native|Public|BlueprintCallable) // @ game+0xb9dda0
	void AddFilterNotFull(); // Function SteamCore.ServerFilter.AddFilterNotFull // (Final|Native|Public|BlueprintCallable) // @ game+0xb9dd80
	void AddFilterNor(struct FString Value); // Function SteamCore.ServerFilter.AddFilterNor // (Final|Native|Public|BlueprintCallable) // @ game+0xb9dc90
	void AddFilterNoPlayers(); // Function SteamCore.ServerFilter.AddFilterNoPlayers // (Final|Native|Public|BlueprintCallable) // @ game+0xb9dc70
	void AddFilterNand(struct FString Value); // Function SteamCore.ServerFilter.AddFilterNand // (Final|Native|Public|BlueprintCallable) // @ game+0xb9db80
	void AddFilterMap(struct FString Value); // Function SteamCore.ServerFilter.AddFilterMap // (Final|Native|Public|BlueprintCallable) // @ game+0xb9da90
	void AddFilterLinux(); // Function SteamCore.ServerFilter.AddFilterLinux // (Final|Native|Public|BlueprintCallable) // @ game+0xb9da70
	void AddFilterHasPlayers(); // Function SteamCore.ServerFilter.AddFilterHasPlayers // (Final|Native|Public|BlueprintCallable) // @ game+0xb9da50
	void AddFilterGameTagsNor(struct FString Value); // Function SteamCore.ServerFilter.AddFilterGameTagsNor // (Final|Native|Public|BlueprintCallable) // @ game+0xb9d960
	void AddFilterGameTagsAnd(struct FString Value); // Function SteamCore.ServerFilter.AddFilterGameTagsAnd // (Final|Native|Public|BlueprintCallable) // @ game+0xb9d870
	void AddFilterGameDataOr(struct FString Value); // Function SteamCore.ServerFilter.AddFilterGameDataOr // (Final|Native|Public|BlueprintCallable) // @ game+0xb9d780
	void AddFilterGameDataNor(struct FString Value); // Function SteamCore.ServerFilter.AddFilterGameDataNor // (Final|Native|Public|BlueprintCallable) // @ game+0xb9d690
	void AddFilterGameDataAnd(struct FString Value); // Function SteamCore.ServerFilter.AddFilterGameDataAnd // (Final|Native|Public|BlueprintCallable) // @ game+0xb9d5a0
	void AddFilterGameAddr(struct FString Value); // Function SteamCore.ServerFilter.AddFilterGameAddr // (Final|Native|Public|BlueprintCallable) // @ game+0xb9d4b0
	void AddFilterDedicated(); // Function SteamCore.ServerFilter.AddFilterDedicated // (Final|Native|Public|BlueprintCallable) // @ game+0xb9d490
	void AddFilterAnd(struct FString Value); // Function SteamCore.ServerFilter.AddFilterAnd // (Final|Native|Public|BlueprintCallable) // @ game+0xb9d3a0
};

// Class SteamCore.Music
// Size: 0xa8 (Inherited: 0x48)
struct UMusic : USteamCoreSubsystem {
	struct FMulticastInlineDelegate PlaybackStatusHasChanged; // 0x48(0x10)
	struct FMulticastInlineDelegate VolumeHasChanged; // 0x58(0x10)
	char pad_68[0x40]; // 0x68(0x40)

	void SetVolume(float flVolume); // Function SteamCore.Music.SetVolume // (Final|Native|Public|BlueprintCallable) // @ game+0xb9f1d0
	void PlayPrevious(); // Function SteamCore.Music.PlayPrevious // (Final|Native|Public|BlueprintCallable) // @ game+0xb9e690
	void PlayNext(); // Function SteamCore.Music.PlayNext // (Final|Native|Public|BlueprintCallable) // @ game+0xb9e670
	void Play(); // Function SteamCore.Music.Play // (Final|Native|Public|BlueprintCallable) // @ game+0xb9e650
	void Pause(); // Function SteamCore.Music.Pause // (Final|Native|Public|BlueprintCallable) // @ game+0xb9e4d0
	float GetVolume(); // Function SteamCore.Music.GetVolume // (Final|Native|Public|BlueprintCallable) // @ game+0xb9e030
	enum class ESteamAudioPlaybackStatus GetPlaybackStatus(); // Function SteamCore.Music.GetPlaybackStatus // (Final|Native|Public|BlueprintCallable) // @ game+0xb9e000
	bool BIsPlaying(); // Function SteamCore.Music.BIsPlaying // (Final|Native|Public|BlueprintCallable) // @ game+0xb9dee0
	bool BIsEnabled(); // Function SteamCore.Music.BIsEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0xb9deb0
};

// Class SteamCore.Networking
// Size: 0xa8 (Inherited: 0x48)
struct UNetworking : USteamCoreSubsystem {
	struct FMulticastInlineDelegate OnP2PSessionRequestDelegate; // 0x48(0x10)
	struct FMulticastInlineDelegate OnP2PSessionConnectFailDelegate; // 0x58(0x10)
	char pad_68[0x40]; // 0x68(0x40)

	bool SendP2PPacket(struct FSteamID SteamIDRemote, struct TArray<char> data, enum class ESteamP2PSend p2pSendType, int32_t Channel); // Function SteamCore.Networking.SendP2PPacket // (Final|Native|Public|BlueprintCallable) // @ game+0xba3710
	bool ReadP2PPacket(struct TArray<char> data, struct FSteamID SteamIDRemote, int32_t Channel); // Function SteamCore.Networking.ReadP2PPacket // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xba35c0
	bool IsP2PPacketAvailable(int32_t messageSize, int32_t Channel); // Function SteamCore.Networking.IsP2PPacketAvailable // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xba30f0
	bool GetP2PSessionState(struct FSteamID SteamIDRemote, struct FSteamP2PSessionState ConnectionState); // Function SteamCore.Networking.GetP2PSessionState // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xba2ed0
	bool CloseP2PSessionWithUser(struct FSteamID SteamIDRemote); // Function SteamCore.Networking.CloseP2PSessionWithUser // (Final|Native|Public|BlueprintCallable) // @ game+0xba1e10
	bool CloseP2PchannelWithUser(struct FSteamID SteamIDRemote, int32_t Channel); // Function SteamCore.Networking.CloseP2PchannelWithUser // (Final|Native|Public|BlueprintCallable) // @ game+0xba1eb0
	bool AllowP2PPacketRelay(bool bAllow); // Function SteamCore.Networking.AllowP2PPacketRelay // (Final|Native|Public|BlueprintCallable) // @ game+0xba1730
	bool AcceptP2PSessionWithUser(struct FSteamID SteamIDRemote); // Function SteamCore.Networking.AcceptP2PSessionWithUser // (Final|Native|Public|BlueprintCallable) // @ game+0xba1690
};

// Class SteamCore.NetworkingUtils
// Size: 0x48 (Inherited: 0x48)
struct UNetworkingUtils : USteamCoreSubsystem {

	bool ParsePingLocationString(struct FString String, struct FSteamNetworkPingLocation Result); // Function SteamCore.NetworkingUtils.ParsePingLocationString // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xba3460
	void InitRelayNetworkAccess(); // Function SteamCore.NetworkingUtils.InitRelayNetworkAccess // (Final|Native|Public|BlueprintCallable) // @ game+0xba30d0
	float GetLocalPingLocation(struct FSteamNetworkPingLocation Result); // Function SteamCore.NetworkingUtils.GetLocalPingLocation // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xba2d50
	int32_t EstimatePingTimeFromLocalHost(struct FSteamNetworkPingLocation remoteLocation); // Function SteamCore.NetworkingUtils.EstimatePingTimeFromLocalHost // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xba2790
	int32_t EstimatePingTimeBetweenTwoLocations(struct FSteamNetworkPingLocation location1, struct FSteamNetworkPingLocation location2); // Function SteamCore.NetworkingUtils.EstimatePingTimeBetweenTwoLocations // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xba2670
	void ConvertPingLocationToString(struct FSteamNetworkPingLocation Location, struct FString String); // Function SteamCore.NetworkingUtils.ConvertPingLocationToString // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xba1f80
	bool CheckPingDataUpToDate(float maxAgeSeconds); // Function SteamCore.NetworkingUtils.CheckPingDataUpToDate // (Final|Native|Public|BlueprintCallable) // @ game+0xba1d80
};

// Class SteamCore.ParentalSettings
// Size: 0x48 (Inherited: 0x48)
struct UParentalSettings : USteamCoreSubsystem {

	bool BIsParentalLockLocked(); // Function SteamCore.ParentalSettings.BIsParentalLockLocked // (Final|Native|Public|BlueprintCallable) // @ game+0xba1a60
	bool BIsParentalLockEnabled(); // Function SteamCore.ParentalSettings.BIsParentalLockEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0xba1a30
	bool BIsFeatureInBlockList(enum class ESteamParentalFeature feature); // Function SteamCore.ParentalSettings.BIsFeatureInBlockList // (Final|Native|Public|BlueprintCallable) // @ game+0xba19a0
	bool BIsFeatureBlocked(enum class ESteamParentalFeature feature); // Function SteamCore.ParentalSettings.BIsFeatureBlocked // (Final|Native|Public|BlueprintCallable) // @ game+0xba1910
	bool BIsAppInBlockList(int32_t AppID); // Function SteamCore.ParentalSettings.BIsAppInBlockList // (Final|Native|Public|BlueprintCallable) // @ game+0xba1870
	bool BIsAppBlocked(int32_t AppID); // Function SteamCore.ParentalSettings.BIsAppBlocked // (Final|Native|Public|BlueprintCallable) // @ game+0xba17d0
};

// Class SteamCore.SteamParties
// Size: 0x168 (Inherited: 0x48)
struct USteamParties : USteamCoreSubsystem {
	struct FMulticastInlineDelegate JoinPartyDelegate; // 0x48(0x10)
	struct FMulticastInlineDelegate CreateBeaconDelegate; // 0x58(0x10)
	struct FMulticastInlineDelegate ReservationNotificationDelegate; // 0x68(0x10)
	struct FMulticastInlineDelegate ChangeNumOpenSlotsDelegate; // 0x78(0x10)
	struct FMulticastInlineDelegate AvailableBeaconLocationsDelegate; // 0x88(0x10)
	struct FMulticastInlineDelegate ActiveBeaconsDelegate; // 0x98(0x10)
	char pad_A8[0xc0]; // 0xa8(0xc0)

	void OnReservationCompleted(struct FPartyBeaconID BeaconID, struct FSteamID SteamIDUser); // Function SteamCore.SteamParties.OnReservationCompleted // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xba33a0
	void JoinParty(struct FDelegate callback, struct FPartyBeaconID BeaconID); // Function SteamCore.SteamParties.JoinParty // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xba31d0
	bool GetNumAvailableBeaconLocations(int32_t numLocations); // Function SteamCore.SteamParties.GetNumAvailableBeaconLocations // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xba2e40
	int32_t GetNumActiveBeacons(); // Function SteamCore.SteamParties.GetNumActiveBeacons // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xba2e10
	bool GetBeaconLocationData(struct FSteamPartyBeaconLocation beaconLocation, enum class ESteamPartiesBeaconLocationData eData, struct FString pchDataStringOut); // Function SteamCore.SteamParties.GetBeaconLocationData // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xba2bc0
	bool GetBeaconDetails(struct FPartyBeaconID BeaconID, struct FSteamID SteamIDBeaconOwner, struct FSteamPartyBeaconLocation Location, struct FString outMetadata); // Function SteamCore.SteamParties.GetBeaconDetails // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xba2a00
	struct FPartyBeaconID GetBeaconByIndex(int32_t Index); // Function SteamCore.SteamParties.GetBeaconByIndex // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xba2970
	bool GetAvailableBeaconLocations(struct TArray<struct FSteamPartyBeaconLocation> locationList, int32_t maxNumLocations); // Function SteamCore.SteamParties.GetAvailableBeaconLocations // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xba2850
	bool DestroyBeacon(struct FPartyBeaconID BeaconID); // Function SteamCore.SteamParties.DestroyBeacon // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xba25e0
	void CreateBeacon(struct FDelegate callback, int32_t openSlots, struct FSteamPartyBeaconLocation beaconLocation, struct FString ConnectString, struct FString MetaData); // Function SteamCore.SteamParties.CreateBeacon // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xba2090
	void ChangeNumOpenSlots(struct FDelegate callback, struct FPartyBeaconID BeaconID, int32_t openSlots); // Function SteamCore.SteamParties.ChangeNumOpenSlots // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xba1b50
	void CancelReservation(struct FPartyBeaconID BeaconID, struct FSteamID SteamIDUser); // Function SteamCore.SteamParties.CancelReservation // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xba1a90
};

// Class SteamCore.SteamCoreSteamPartiesAsyncActionJoinParty
// Size: 0x40 (Inherited: 0x30)
struct USteamCoreSteamPartiesAsyncActionJoinParty : USteamCoreAsyncAction {
	struct FMulticastInlineDelegate OnCallback; // 0x30(0x10)

	struct USteamCoreSteamPartiesAsyncActionJoinParty* JoinPartyAsync(struct UObject* WorldContextObject, struct FPartyBeaconID BeaconID); // Function SteamCore.SteamCoreSteamPartiesAsyncActionJoinParty.JoinPartyAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xba32d0
	void HandleCallback(struct FJoinPartyData data, bool bWasSuccessful); // Function SteamCore.SteamCoreSteamPartiesAsyncActionJoinParty.HandleCallback // (Final|Native|Public|HasOutParms) // @ game+0xba2fd0
};

// Class SteamCore.SteamCoreSteamPartiesAsyncActionCreateBeacon
// Size: 0x40 (Inherited: 0x30)
struct USteamCoreSteamPartiesAsyncActionCreateBeacon : USteamCoreAsyncAction {
	struct FMulticastInlineDelegate OnCallback; // 0x30(0x10)

	void HandleCallback(struct FCreateBeaconData data, bool bWasSuccessful); // Function SteamCore.SteamCoreSteamPartiesAsyncActionCreateBeacon.HandleCallback // (Final|Native|Public|HasOutParms) // @ game+0xb98a20
	struct USteamCoreSteamPartiesAsyncActionCreateBeacon* CreateBeaconAsync(struct UObject* WorldContextObject, int32_t openSlots, struct FSteamPartyBeaconLocation beaconLocation, struct FString ConnectString, struct FString MetaData); // Function SteamCore.SteamCoreSteamPartiesAsyncActionCreateBeacon.CreateBeaconAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xba2350
};

// Class SteamCore.SteamCoreSteamPartiesAsyncActionChangeNumOpenSlots
// Size: 0x40 (Inherited: 0x30)
struct USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots : USteamCoreAsyncAction {
	struct FMulticastInlineDelegate OnCallback; // 0x30(0x10)

	void HandleCallback(struct FChangeNumOpenSlotsData data, bool bWasSuccessful); // Function SteamCore.SteamCoreSteamPartiesAsyncActionChangeNumOpenSlots.HandleCallback // (Final|Native|Public|HasOutParms) // @ game+0xb86d90
	struct USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots* ChangeNumOpenSlotsAsync(struct UObject* WorldContextObject, struct FPartyBeaconID BeaconID, int32_t openSlots); // Function SteamCore.SteamCoreSteamPartiesAsyncActionChangeNumOpenSlots.ChangeNumOpenSlotsAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xba1c80
};

// Class SteamCore.RemotePlay
// Size: 0xa8 (Inherited: 0x48)
struct URemotePlay : USteamCoreSubsystem {
	struct FMulticastInlineDelegate SteamRemotePlaySessionConnected; // 0x48(0x10)
	struct FMulticastInlineDelegate SteamRemotePlaySessionDisconnected; // 0x58(0x10)
	char pad_68[0x40]; // 0x68(0x40)

	struct FSteamID GetSessionSteamID(int32_t SessionID); // Function SteamCore.RemotePlay.GetSessionSteamID // (Final|Native|Public|BlueprintCallable) // @ game+0xba70d0
	int32_t GetSessionID(int32_t sessionIndex); // Function SteamCore.RemotePlay.GetSessionID // (Final|Native|Public|BlueprintCallable) // @ game+0xba7030
	int32_t GetSessionCount(); // Function SteamCore.RemotePlay.GetSessionCount // (Final|Native|Public|BlueprintCallable) // @ game+0xba7000
	struct FString GetSessionClientName(int32_t SessionID); // Function SteamCore.RemotePlay.GetSessionClientName // (Final|Native|Public|BlueprintCallable) // @ game+0xba6f20
	enum class ESteamCoreDeviceFormFactor GetSessionClientFormFactor(int32_t SessionID); // Function SteamCore.RemotePlay.GetSessionClientFormFactor // (Final|Native|Public|BlueprintCallable) // @ game+0xba6e80
	bool BSendRemotePlayTogetherInvite(struct FSteamID SteamIDFriend); // Function SteamCore.RemotePlay.BSendRemotePlayTogetherInvite // (Final|Native|Public|BlueprintCallable) // @ game+0xba58b0
	bool BGetSessionClientResolution(int32_t SessionID, int32_t resolutionX, int32_t resolutionY); // Function SteamCore.RemotePlay.BGetSessionClientResolution // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xba5790
};

// Class SteamCore.RemoteStorage
// Size: 0x108 (Inherited: 0x48)
struct URemoteStorage : USteamCoreSubsystem {
	struct FMulticastInlineDelegate RemoteStorageUnsubscribePublishedFileResult; // 0x48(0x10)
	struct FMulticastInlineDelegate RemoteStorageSubscribePublishedFileResult; // 0x58(0x10)
	struct FMulticastInlineDelegate RemoteStoragePublishedFileUnsubscribed; // 0x68(0x10)
	struct FMulticastInlineDelegate RemoteStoragePublishedFileSubscribed; // 0x78(0x10)
	char pad_88[0x80]; // 0x88(0x80)

	int32_t UGCRead(struct FSteamUGCHandle Content, struct TArray<char> outData, int32_t dataToRead, int32_t Offset, enum class ESteamUGCReadAction Action); // Function SteamCore.RemoteStorage.UGCRead // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xba7e20
	void UGCDownloadToLocation(struct FDelegate callback, struct FSteamUGCHandle Content, struct FString Location, int32_t Priority); // Function SteamCore.RemoteStorage.UGCDownloadToLocation // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xba7c60
	void UGCDownload(struct FDelegate callback, struct FSteamUGCHandle Content, int32_t Priority); // Function SteamCore.RemoteStorage.UGCDownload // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xba7b30
	bool SetSyncPlatforms(struct FString File, enum class ESteamRemoteStoragePlatform remoteStoragePlatform); // Function SteamCore.RemoteStorage.SetSyncPlatforms // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xba7840
	void SetCloudEnabledForApp(bool bEnabled); // Function SteamCore.RemoteStorage.SetCloudEnabledForApp // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xba7690
	bool IsCloudEnabledForApp(); // Function SteamCore.RemoteStorage.IsCloudEnabledForApp // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xba7630
	bool IsCloudEnabledForAccount(); // Function SteamCore.RemoteStorage.IsCloudEnabledForAccount // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xba7600
	bool GetUGCDownloadProgress(struct FSteamUGCHandle Handle, int32_t bytesDownloaded, int32_t bytesExpected); // Function SteamCore.RemoteStorage.GetUGCDownloadProgress // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xba7460
	bool GetUGCDetails(struct FSteamUGCHandle Handle, int32_t AppID, struct FString Name, int32_t fileSizeInBytes, struct FSteamID SteamIDOwner); // Function SteamCore.RemoteStorage.GetUGCDetails // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xba7250
	enum class ESteamRemoteStoragePlatform GetSyncPlatforms(struct FString File); // Function SteamCore.RemoteStorage.GetSyncPlatforms // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xba7160
	bool GetQuota(int32_t totalBytes, int32_t availableBytes); // Function SteamCore.RemoteStorage.GetQuota // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xba6da0
	int32_t GetFileTimestamp(struct FString File); // Function SteamCore.RemoteStorage.GetFileTimestamp // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xba6cb0
	int32_t GetFileSize(struct FString File); // Function SteamCore.RemoteStorage.GetFileSize // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xba6bc0
	struct FString GetFileNameAndSize(int32_t File, int32_t fileSizeInBytes); // Function SteamCore.RemoteStorage.GetFileNameAndSize // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xba6aa0
	int32_t GetFileCount(); // Function SteamCore.RemoteStorage.GetFileCount // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xba6a70
	struct FSteamUGCHandle GetCachedUGCHandle(int32_t iCachedContent); // Function SteamCore.RemoteStorage.GetCachedUGCHandle // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xba69e0
	int32_t GetCachedUGCCount(); // Function SteamCore.RemoteStorage.GetCachedUGCCount // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xba69b0
	bool FileWriteStreamWriteChunk(struct FUGCFileWriteStreamHandle Handle, struct TArray<char> data); // Function SteamCore.RemoteStorage.FileWriteStreamWriteChunk // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xba6880
	struct FUGCFileWriteStreamHandle FileWriteStreamOpen(struct FString File); // Function SteamCore.RemoteStorage.FileWriteStreamOpen // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xba6790
	bool FileWriteStreamClose(struct FUGCFileWriteStreamHandle Handle); // Function SteamCore.RemoteStorage.FileWriteStreamClose // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xba6700
	bool FileWriteStreamCancel(struct FUGCFileWriteStreamHandle Handle); // Function SteamCore.RemoteStorage.FileWriteStreamCancel // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xba6670
	void FileWriteAsync(struct FDelegate callback, struct FString File, struct TArray<char> data); // Function SteamCore.RemoteStorage.FileWriteAsync // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xba6490
	bool FileWrite(struct FString File, struct TArray<char> data); // Function SteamCore.RemoteStorage.FileWrite // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xba6320
	void FileShare(struct FDelegate callback, struct FString File); // Function SteamCore.RemoteStorage.FileShare // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xba61c0
	bool FileReadAsyncComplete(struct FRemoteStorageFileReadAsyncComplete readCall, struct TArray<char> buffer, int32_t bytesToRead); // Function SteamCore.RemoteStorage.FileReadAsyncComplete // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xba6060
	void FileReadAsync(struct FDelegate callback, struct FString File, int32_t Offset, int32_t bytesToRead); // Function SteamCore.RemoteStorage.FileReadAsync // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xba5ea0
	int32_t FileRead(struct FString File, struct TArray<char> buffer, int32_t dataToRead); // Function SteamCore.RemoteStorage.FileRead // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xba5d10
	bool FilePersisted(struct FString File); // Function SteamCore.RemoteStorage.FilePersisted // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xba5c20
	bool FileForget(struct FString File); // Function SteamCore.RemoteStorage.FileForget // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xba5b30
	bool FileExists(struct FString File); // Function SteamCore.RemoteStorage.FileExists // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xba5a40
	bool FileDelete(struct FString File); // Function SteamCore.RemoteStorage.FileDelete // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xba5950
};

// Class SteamCore.Screenshots
// Size: 0xa8 (Inherited: 0x48)
struct UScreenshots : USteamCoreSubsystem {
	struct FMulticastInlineDelegate ScreenshotReady; // 0x48(0x10)
	struct FMulticastInlineDelegate ScreenshotRequested; // 0x58(0x10)
	char pad_68[0x40]; // 0x68(0x40)

	struct FScreenshotHandle WriteScreenshot(struct TArray<char> pubRGB, int32_t Width, int32_t Height); // Function SteamCore.Screenshots.WriteScreenshot // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xba7ff0
	void TriggerScreenshot(); // Function SteamCore.Screenshots.TriggerScreenshot // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xba7b10
	bool TagUser(struct FScreenshotHandle Handle, struct FSteamID SteamID); // Function SteamCore.Screenshots.TagUser // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xba7a40
	bool TagPublishedFile(struct FScreenshotHandle Handle, struct FPublishedFileID PublishedFileID); // Function SteamCore.Screenshots.TagPublishedFile // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xba7970
	bool SetLocation(struct FScreenshotHandle Handle, struct FString Location); // Function SteamCore.Screenshots.SetLocation // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xba7710
	bool IsScreenshotsHooked(); // Function SteamCore.Screenshots.IsScreenshotsHooked // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xba7660
	void HookScreenshots(bool bHook); // Function SteamCore.Screenshots.HookScreenshots // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xba7580
	struct FScreenshotHandle AddVRScreenshotToLibrary(enum class ESteamVRScreenshotType eType, struct FString Filename, struct FString vrFileName); // Function SteamCore.Screenshots.AddVRScreenshotToLibrary // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xba55e0
	struct FScreenshotHandle AddScreenshotToLibrary(struct FString Filename, struct FString thumbnailFilename, int32_t Width, int32_t Height); // Function SteamCore.Screenshots.AddScreenshotToLibrary // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xba5400
};

// Class SteamCore.UGC
// Size: 0xa8 (Inherited: 0x48)
struct UUGC : USteamCoreSubsystem {
	struct FMulticastInlineDelegate ItemInstalled; // 0x48(0x10)
	struct FMulticastInlineDelegate DownloadItemResult; // 0x58(0x10)
	char pad_68[0x40]; // 0x68(0x40)

	bool UpdateItemPreviewVideo(struct FUGCUpdateHandle Handle, int32_t Index, struct FString previewVideo); // Function SteamCore.UGC.UpdateItemPreviewVideo // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbafa20
	bool UpdateItemPreviewFile(struct FUGCUpdateHandle Handle, int32_t Index, struct FString PreviewFile); // Function SteamCore.UGC.UpdateItemPreviewFile // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbaf8c0
	void UnsubscribeItem(struct FDelegate callback, struct FPublishedFileID PublishedFileID); // Function SteamCore.UGC.UnsubscribeItem // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xbaf7c0
	void SuspendDownloads(bool bSuspend); // Function SteamCore.UGC.SuspendDownloads // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbaf740
	void SubscribeItem(struct FDelegate callback, struct FPublishedFileID PublishedFileID); // Function SteamCore.UGC.SubscribeItem // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xbaf640
	void SubmitItemUpdate(struct FDelegate callback, struct FUGCUpdateHandle Handle, struct FString changeNote); // Function SteamCore.UGC.SubmitItemUpdate // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xbaf4b0
	void StopPlaytimeTrackingForAllItems(struct FDelegate callback); // Function SteamCore.UGC.StopPlaytimeTrackingForAllItems // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xbaf400
	void StopPlaytimeTracking(struct FDelegate callback, struct TArray<struct FPublishedFileID> publishedFileIDs); // Function SteamCore.UGC.StopPlaytimeTracking // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xbaf2a0
	void StartPlaytimeTracking(struct FDelegate callback, struct TArray<struct FPublishedFileID> PublishedFileID); // Function SteamCore.UGC.StartPlaytimeTracking // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xbaf140
	struct FUGCUpdateHandle StartItemUpdate(int32_t ConsumerAppID, struct FPublishedFileID PublishedFileID); // Function SteamCore.UGC.StartItemUpdate // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbaf080
	void SetUserItemVote(struct FDelegate callback, struct FPublishedFileID PublishedFileID, bool bVoteUp); // Function SteamCore.UGC.SetUserItemVote // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xbaef50
	bool SetSearchText(struct FUGCQueryHandle Handle, struct FString SearchText); // Function SteamCore.UGC.SetSearchText // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbaee20
	bool SetReturnTotalOnly(struct FUGCQueryHandle Handle, bool bReturnTotalOnly); // Function SteamCore.UGC.SetReturnTotalOnly // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbaed50
	bool SetReturnPlaytimeStats(struct FUGCQueryHandle Handle, int32_t days); // Function SteamCore.UGC.SetReturnPlaytimeStats // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbaec80
	bool SetReturnOnlyIDs(struct FUGCQueryHandle Handle, bool bReturnOnlyIDs); // Function SteamCore.UGC.SetReturnOnlyIDs // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbaebb0
	bool SetReturnMetadata(struct FUGCQueryHandle Handle, bool bReturnMetadata); // Function SteamCore.UGC.SetReturnMetadata // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbaeae0
	bool SetReturnLongDescription(struct FUGCQueryHandle Handle, bool bReturnLongDescription); // Function SteamCore.UGC.SetReturnLongDescription // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbaea10
	bool SetReturnKeyValueTags(struct FUGCQueryHandle Handle, bool bReturnKeyValueTags); // Function SteamCore.UGC.SetReturnKeyValueTags // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbae940
	bool SetReturnChildren(struct FUGCQueryHandle Handle, bool bReturnChildren); // Function SteamCore.UGC.SetReturnChildren // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbae870
	bool SetReturnAdditionalPreviews(struct FUGCQueryHandle Handle, bool bReturnAdditionalPreviews); // Function SteamCore.UGC.SetReturnAdditionalPreviews // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbae7a0
	bool SetRankedByTrendDays(struct FUGCQueryHandle Handle, int32_t days); // Function SteamCore.UGC.SetRankedByTrendDays // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbae6d0
	bool SetMatchAnyTag(struct FUGCQueryHandle Handle, bool bMatchAnyTag); // Function SteamCore.UGC.SetMatchAnyTag // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbae600
	bool SetLanguage(struct FUGCQueryHandle Handle, struct FString Language); // Function SteamCore.UGC.SetLanguage // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbae4d0
	bool SetItemVisibility(struct FUGCUpdateHandle Handle, enum class ESteamRemoteStoragePublishedFileVisibility Visibility); // Function SteamCore.UGC.SetItemVisibility // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbae410
	bool SetItemUpdateLanguage(struct FUGCUpdateHandle Handle, struct FString Language); // Function SteamCore.UGC.SetItemUpdateLanguage // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbae2e0
	bool SetItemTitle(struct FUGCUpdateHandle Handle, struct FString Title); // Function SteamCore.UGC.SetItemTitle // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbae1b0
	bool SetItemTags(struct FUGCUpdateHandle Handle, struct TArray<struct FString> Tags); // Function SteamCore.UGC.SetItemTags // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbadff0
	bool SetItemPreview(struct FUGCUpdateHandle Handle, struct FString PreviewFile); // Function SteamCore.UGC.SetItemPreview // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbadec0
	bool SetItemMetadata(struct FUGCUpdateHandle Handle, struct FString MetaData); // Function SteamCore.UGC.SetItemMetadata // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbadd90
	bool SetItemDescription(struct FUGCUpdateHandle Handle, struct FString Description); // Function SteamCore.UGC.SetItemDescription // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbadc60
	bool SetItemContent(struct FUGCUpdateHandle Handle, struct FString contentFolder); // Function SteamCore.UGC.SetItemContent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbadb30
	bool SetCloudFileNameFilter(struct FUGCQueryHandle Handle, struct FString matchCloudFileName); // Function SteamCore.UGC.SetCloudFileNameFilter // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbada00
	bool SetAllowLegacyUpload(struct FUGCUpdateHandle Handle, bool bAllowLegacyUpload); // Function SteamCore.UGC.SetAllowLegacyUpload // (Final|Native|Public|BlueprintCallable) // @ game+0xbad930
	bool SetAllowCachedResponse(struct FUGCQueryHandle Handle, int32_t maxAgeSeconds); // Function SteamCore.UGC.SetAllowCachedResponse // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbad860
	void SendQueryUGCRequest(struct FDelegate callback, struct FUGCQueryHandle Handle); // Function SteamCore.UGC.SendQueryUGCRequest // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xbad760
	bool RemoveItemPreview(struct FUGCUpdateHandle Handle, int32_t Index); // Function SteamCore.UGC.RemoveItemPreview // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbad690
	bool RemoveItemKeyValueTags(struct FUGCUpdateHandle Handle, struct FString Key); // Function SteamCore.UGC.RemoveItemKeyValueTags // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbad560
	void RemoveItemFromFavorites(struct FDelegate callback, int32_t AppID, struct FPublishedFileID PublishedFileID); // Function SteamCore.UGC.RemoveItemFromFavorites // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xbad430
	void RemoveDependency(struct FDelegate callback, struct FPublishedFileID parentPublishedFileID, struct FPublishedFileID ChildPublishedFileId); // Function SteamCore.UGC.RemoveDependency // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xbad300
	void RemoveAppDependency(struct FDelegate callback, struct FPublishedFileID PublishedFileID, int32_t AppID); // Function SteamCore.UGC.RemoveAppDependency // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xbad1d0
	bool ReleaseQueryUGCRequest(struct FUGCQueryHandle Handle); // Function SteamCore.UGC.ReleaseQueryUGCRequest // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbad150
	void GetUserItemVote(struct FDelegate callback, struct FPublishedFileID PublishedFileID); // Function SteamCore.UGC.GetUserItemVote // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xbad050
	int32_t GetSubscribedItems(struct TArray<struct FPublishedFileID> publishedFileIDs, int32_t maxEntries); // Function SteamCore.UGC.GetSubscribedItems // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xbacf50
	bool GetQueryUGCStatistic(struct FUGCQueryHandle Handle, int32_t Index, enum class ESteamItemStatistic statType, struct FString StatValue); // Function SteamCore.UGC.GetQueryUGCStatistic // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xbacdf0
	bool GetQueryUGCResult(struct FUGCQueryHandle Handle, int32_t Index, struct FSteamUGCDetails Details); // Function SteamCore.UGC.GetQueryUGCResult // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xbacc40
	bool GetQueryUGCPreviewURL(struct FUGCQueryHandle Handle, int32_t Index, struct FString URL); // Function SteamCore.UGC.GetQueryUGCPreviewURL // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xbacb10
	int32_t GetQueryUGCNumKeyValueTags(struct FUGCQueryHandle Handle, int32_t Index); // Function SteamCore.UGC.GetQueryUGCNumKeyValueTags // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbaca40
	int32_t GetQueryUGCNumAdditionalPreviews(struct FUGCQueryHandle Handle, int32_t Index); // Function SteamCore.UGC.GetQueryUGCNumAdditionalPreviews // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbac970
	bool GetQueryUGCMetadata(struct FUGCQueryHandle Handle, int32_t Index, struct FString MetaData, int32_t metadataSize); // Function SteamCore.UGC.GetQueryUGCMetadata // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xbac800
	bool GetQueryUGCKeyValueTag(struct FUGCQueryHandle Handle, int32_t Index, int32_t keyValueTagIndex, struct FString Key, struct FString Value); // Function SteamCore.UGC.GetQueryUGCKeyValueTag // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xbac640
	bool GetQueryUGCChildren(struct FUGCQueryHandle Handle, int32_t Index, struct TArray<struct FPublishedFileID> publishedFileIDs, int32_t maxEntries); // Function SteamCore.UGC.GetQueryUGCChildren // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xbac4d0
	bool GetQueryUGCAdditionalPreview(struct FUGCQueryHandle Handle, int32_t Index, int32_t PreviewIndex, struct FString urlOrVideoID, struct FString OriginalFileName, enum class ESteamItemPreviewType previewType); // Function SteamCore.UGC.GetQueryUGCAdditionalPreview // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xbac2b0
	int32_t GetNumSubscribedItems(); // Function SteamCore.UGC.GetNumSubscribedItems // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbac280
	enum class ESteamItemUpdateStatus GetItemUpdateProgress(struct FUGCUpdateHandle Handle, int32_t bytesProcessed, int32_t bytesTotal); // Function SteamCore.UGC.GetItemUpdateProgress // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xbac160
	int32_t GetItemState(struct FPublishedFileID PublishedFileID, struct TArray<enum class ESteamItemState> States); // Function SteamCore.UGC.GetItemState // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xbac070
	bool GetItemInstallInfo(struct FPublishedFileID PublishedFileID, int32_t sizeOnDisk, struct FString folder, int32_t Timestamp); // Function SteamCore.UGC.GetItemInstallInfo // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xbabef0
	bool GetItemDownloadInfo(struct FPublishedFileID PublishedFileID, int32_t bytesDownloaded, int32_t bytesTotal); // Function SteamCore.UGC.GetItemDownloadInfo // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xbabdd0
	void GetAppDependencies(struct FDelegate callback, struct FPublishedFileID PublishedFileID); // Function SteamCore.UGC.GetAppDependencies // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xbabcd0
	bool DownloadItem(struct FPublishedFileID PublishedFileID, bool bHighPriority); // Function SteamCore.UGC.DownloadItem // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbabc00
	void DeleteItem(struct FDelegate callback, struct FPublishedFileID PublishedFileID); // Function SteamCore.UGC.DeleteItem // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xbabb00
	struct FUGCQueryHandle CreateQueryUserUGCRequest(struct FSteamID SteamID, enum class ESteamUserUGCList listType, enum class ESteamUGCMatchingUGCType matchingUGCType, enum class ESteamUserUGCListSortOrder sortOrder, int32_t CreatorAppID, int32_t ConsumerAppID, int32_t page); // Function SteamCore.UGC.CreateQueryUserUGCRequest // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbab8e0
	struct FUGCQueryHandle CreateQueryUGCDetailsRequest(struct TArray<struct FPublishedFileID> publishedFileIDs); // Function SteamCore.UGC.CreateQueryUGCDetailsRequest // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbab7f0
	struct FUGCQueryHandle CreateQueryAllUGCRequest(enum class ESteamUGCQuery queryType, enum class ESteamUGCMatchingUGCType FileType, int32_t CreatorAppID, int32_t ConsumerAppID, int32_t page); // Function SteamCore.UGC.CreateQueryAllUGCRequest // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbab650
	void CreateItem(struct FDelegate callback, int32_t ConsumerAppID, enum class ESteamWorkshopFileType FileType); // Function SteamCore.UGC.CreateItem // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xbab520
	bool BInitWorkshopForGameServer(int32_t workshopDepotID, struct FString folder); // Function SteamCore.UGC.BInitWorkshopForGameServer // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbab3f0
	bool AddRequiredTag(struct FUGCQueryHandle Handle, struct FString TagName); // Function SteamCore.UGC.AddRequiredTag // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbab2c0
	bool AddRequiredKeyValueTag(struct FUGCQueryHandle Handle, struct FString Key, struct FString Value); // Function SteamCore.UGC.AddRequiredKeyValueTag // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbab110
	void AddItemToFavorites(struct FDelegate callback, int32_t AppID, struct FPublishedFileID PublishedFileID); // Function SteamCore.UGC.AddItemToFavorites // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xbaafe0
	bool AddItemPreviewVideo(struct FUGCUpdateHandle Handle, struct FString videoID); // Function SteamCore.UGC.AddItemPreviewVideo // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbaaeb0
	bool AddItemPreviewFile(struct FUGCUpdateHandle Handle, struct FString PreviewFile, enum class ESteamItemPreviewType Type); // Function SteamCore.UGC.AddItemPreviewFile // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbaad50
	bool AddItemKeyValueTag(struct FUGCUpdateHandle Handle, struct FString Key, struct FString Value); // Function SteamCore.UGC.AddItemKeyValueTag // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbaaba0
	bool AddExcludedTag(struct FUGCQueryHandle Handle, struct FString TagName); // Function SteamCore.UGC.AddExcludedTag // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbaaa70
	void AddDependency(struct FDelegate callback, struct FPublishedFileID PublishedFileID, struct FPublishedFileID ChildPublishedFileId); // Function SteamCore.UGC.AddDependency // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xbaa940
	void AddAppDependency(struct FDelegate callback, struct FPublishedFileID PublishedFileID, int32_t AppID); // Function SteamCore.UGC.AddAppDependency // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xbaa810
};

// Class SteamCore.SteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems
// Size: 0x40 (Inherited: 0x30)
struct USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems : USteamCoreAsyncAction {
	struct FMulticastInlineDelegate OnCallback; // 0x30(0x10)

	struct USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems* StopPlaytimeTrackingForAllItemsAsync(struct UObject* WorldContextObject); // Function SteamCore.SteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems.StopPlaytimeTrackingForAllItemsAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbb2e30
	void HandleCallback(struct FStopPlaytimeTrackingResult data, bool bWasSuccessful); // Function SteamCore.SteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems.HandleCallback // (Final|Native|Public|HasOutParms) // @ game+0xb86d90
};

// Class SteamCore.SteamCoreUGCAsyncActionStopPlaytimeTracking
// Size: 0x40 (Inherited: 0x30)
struct USteamCoreUGCAsyncActionStopPlaytimeTracking : USteamCoreAsyncAction {
	struct FMulticastInlineDelegate OnCallback; // 0x30(0x10)

	struct USteamCoreUGCAsyncActionStopPlaytimeTracking* StopPlaytimeTrackingAsync(struct UObject* WorldContextObject, struct TArray<struct FPublishedFileID> publishedFileIDs); // Function SteamCore.SteamCoreUGCAsyncActionStopPlaytimeTracking.StopPlaytimeTrackingAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbb2d00
	void HandleCallback(struct FStopPlaytimeTrackingResult data, bool bWasSuccessful); // Function SteamCore.SteamCoreUGCAsyncActionStopPlaytimeTracking.HandleCallback // (Final|Native|Public|HasOutParms) // @ game+0xb86d90
};

// Class SteamCore.SteamCoreUGCAsyncActionStartPlaytimeTracking
// Size: 0x40 (Inherited: 0x30)
struct USteamCoreUGCAsyncActionStartPlaytimeTracking : USteamCoreAsyncAction {
	struct FMulticastInlineDelegate OnCallback; // 0x30(0x10)

	struct USteamCoreUGCAsyncActionStartPlaytimeTracking* StartPlaytimeTrackingAsync(struct UObject* WorldContextObject, struct TArray<struct FPublishedFileID> publishedFileIDs); // Function SteamCore.SteamCoreUGCAsyncActionStartPlaytimeTracking.StartPlaytimeTrackingAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbb2bd0
	void HandleCallback(struct FStartPlaytimeTrackingResult data, bool bWasSuccessful); // Function SteamCore.SteamCoreUGCAsyncActionStartPlaytimeTracking.HandleCallback // (Final|Native|Public|HasOutParms) // @ game+0xb86d90
};

// Class SteamCore.SteamCoreUGCAsyncActionUnsubscribeItem
// Size: 0x40 (Inherited: 0x30)
struct USteamCoreUGCAsyncActionUnsubscribeItem : USteamCoreAsyncAction {
	struct FMulticastInlineDelegate OnCallback; // 0x30(0x10)

	struct USteamCoreUGCAsyncActionUnsubscribeItem* UnsubscribeItemAsync(struct UObject* WorldContextObject, struct FPublishedFileID publishedFileIDs); // Function SteamCore.SteamCoreUGCAsyncActionUnsubscribeItem.UnsubscribeItemAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbb30f0
	void HandleCallback(struct FRemoteStorageSubscribePublishedFileResult data, bool bWasSuccessful); // Function SteamCore.SteamCoreUGCAsyncActionUnsubscribeItem.HandleCallback // (Final|Native|Public|HasOutParms) // @ game+0xb98a20
};

// Class SteamCore.SteamCoreUGCAsyncActionSubscribeItem
// Size: 0x40 (Inherited: 0x30)
struct USteamCoreUGCAsyncActionSubscribeItem : USteamCoreAsyncAction {
	struct FMulticastInlineDelegate OnCallback; // 0x30(0x10)

	struct USteamCoreUGCAsyncActionSubscribeItem* SubscribeItemAsync(struct UObject* WorldContextObject, struct FPublishedFileID publishedFileIDs); // Function SteamCore.SteamCoreUGCAsyncActionSubscribeItem.SubscribeItemAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbb3020
	void HandleCallback(struct FRemoteStorageSubscribePublishedFileResult data, bool bWasSuccessful); // Function SteamCore.SteamCoreUGCAsyncActionSubscribeItem.HandleCallback // (Final|Native|Public|HasOutParms) // @ game+0xb98a20
};

// Class SteamCore.SteamCoreUGCAsyncActionRemoveItemFromFavorites
// Size: 0x40 (Inherited: 0x30)
struct USteamCoreUGCAsyncActionRemoveItemFromFavorites : USteamCoreAsyncAction {
	struct FMulticastInlineDelegate OnCallback; // 0x30(0x10)

	struct USteamCoreUGCAsyncActionRemoveItemFromFavorites* RemoveItemFromFavoritesAsync(struct UObject* WorldContextObject, int32_t AppID, struct FPublishedFileID PublishedFileID); // Function SteamCore.SteamCoreUGCAsyncActionRemoveItemFromFavorites.RemoveItemFromFavoritesAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbb2900
	void HandleCallback(struct FUserFavoriteItemsListChanged data, bool bWasSuccessful); // Function SteamCore.SteamCoreUGCAsyncActionRemoveItemFromFavorites.HandleCallback // (Final|Native|Public|HasOutParms) // @ game+0xb87050
};

// Class SteamCore.SteamCoreUGCAsyncActionAddItemToFavorites
// Size: 0x40 (Inherited: 0x30)
struct USteamCoreUGCAsyncActionAddItemToFavorites : USteamCoreAsyncAction {
	struct FMulticastInlineDelegate OnCallback; // 0x30(0x10)

	void HandleCallback(struct FUserFavoriteItemsListChanged data, bool bWasSuccessful); // Function SteamCore.SteamCoreUGCAsyncActionAddItemToFavorites.HandleCallback // (Final|Native|Public|HasOutParms) // @ game+0xb87050
	struct USteamCoreUGCAsyncActionAddItemToFavorites* AddItemToFavoritesAsync(struct UObject* WorldContextObject, int32_t AppID, struct FPublishedFileID PublishedFileID); // Function SteamCore.SteamCoreUGCAsyncActionAddItemToFavorites.AddItemToFavoritesAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbb1ec0
};

// Class SteamCore.SteamCoreUGCAsyncActionGetUserItemVote
// Size: 0x40 (Inherited: 0x30)
struct USteamCoreUGCAsyncActionGetUserItemVote : USteamCoreAsyncAction {
	struct FMulticastInlineDelegate OnCallback; // 0x30(0x10)

	void HandleCallback(struct FGetUserItemVoteResult data, bool bWasSuccessful); // Function SteamCore.SteamCoreUGCAsyncActionGetUserItemVote.HandleCallback // (Final|Native|Public|HasOutParms) // @ game+0xb87050
	struct USteamCoreUGCAsyncActionGetUserItemVote* GetUserItemVoteAsync(struct UObject* WorldContextObject, struct FPublishedFileID PublishedFileID); // Function SteamCore.SteamCoreUGCAsyncActionGetUserItemVote.GetUserItemVoteAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbb2360
};

// Class SteamCore.SteamCoreUGCAsyncActionSetUserItemVote
// Size: 0x40 (Inherited: 0x30)
struct USteamCoreUGCAsyncActionSetUserItemVote : USteamCoreAsyncAction {
	struct FMulticastInlineDelegate OnCallback; // 0x30(0x10)

	struct USteamCoreUGCAsyncActionSetUserItemVote* SetUserItemVoteAsync(struct UObject* WorldContextObject, struct FPublishedFileID PublishedFileID, bool bVoteUp); // Function SteamCore.SteamCoreUGCAsyncActionSetUserItemVote.SetUserItemVoteAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbb2ad0
	void HandleCallback(struct FSetUserItemVoteResult data, bool bWasSuccessful); // Function SteamCore.SteamCoreUGCAsyncActionSetUserItemVote.HandleCallback // (Final|Native|Public|HasOutParms) // @ game+0xb87050
};

// Class SteamCore.SteamCoreUGCAsyncActionSubmitItemUpdate
// Size: 0x40 (Inherited: 0x30)
struct USteamCoreUGCAsyncActionSubmitItemUpdate : USteamCoreAsyncAction {
	struct FMulticastInlineDelegate OnCallback; // 0x30(0x10)

	struct USteamCoreUGCAsyncActionSubmitItemUpdate* SubmitItemUpdateAsync(struct UObject* WorldContextObject, struct FUGCUpdateHandle Handle, struct FString changeNote); // Function SteamCore.SteamCoreUGCAsyncActionSubmitItemUpdate.SubmitItemUpdateAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbb2ec0
	void HandleCallback(struct FSubmitItemUpdateResult data, bool bWasSuccessful); // Function SteamCore.SteamCoreUGCAsyncActionSubmitItemUpdate.HandleCallback // (Final|Native|Public|HasOutParms) // @ game+0xb98a20
};

// Class SteamCore.SteamCoreUGCAsyncActionCreateItem
// Size: 0x40 (Inherited: 0x30)
struct USteamCoreUGCAsyncActionCreateItem : USteamCoreAsyncAction {
	struct FMulticastInlineDelegate OnCallback; // 0x30(0x10)

	void HandleCallback(struct FCreateItemResult data, bool bWasSuccessful); // Function SteamCore.SteamCoreUGCAsyncActionCreateItem.HandleCallback // (Final|Native|Public|HasOutParms) // @ game+0xb86f60
	struct USteamCoreUGCAsyncActionCreateItem* CreateItemAsync(struct UObject* WorldContextObject, int32_t ConsumerAppID, enum class ESteamWorkshopFileType FileType); // Function SteamCore.SteamCoreUGCAsyncActionCreateItem.CreateItemAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbb1fc0
};

// Class SteamCore.SteamCoreUGCAsyncActionSendQueryUGCRequest
// Size: 0x40 (Inherited: 0x30)
struct USteamCoreUGCAsyncActionSendQueryUGCRequest : USteamCoreAsyncAction {
	struct FMulticastInlineDelegate OnCallback; // 0x30(0x10)

	struct USteamCoreUGCAsyncActionSendQueryUGCRequest* SendQueryUGCRequestAsync(struct UObject* WorldContextObject, struct FUGCQueryHandle Handle); // Function SteamCore.SteamCoreUGCAsyncActionSendQueryUGCRequest.SendQueryUGCRequestAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbb2a00
	void HandleCallback(struct FSteamUGCQueryCompleted data, bool bWasSuccessful); // Function SteamCore.SteamCoreUGCAsyncActionSendQueryUGCRequest.HandleCallback // (Final|Native|Public|HasOutParms) // @ game+0xbb2620
};

// Class SteamCore.SteamCoreUGCAsyncActionAddAppDependency
// Size: 0x40 (Inherited: 0x30)
struct USteamCoreUGCAsyncActionAddAppDependency : USteamCoreAsyncAction {
	struct FMulticastInlineDelegate OnCallback; // 0x30(0x10)

	void HandleCallback(struct FAddAppDependencyResult data, bool bWasSuccessful); // Function SteamCore.SteamCoreUGCAsyncActionAddAppDependency.HandleCallback // (Final|Native|Public|HasOutParms) // @ game+0xb86f60
	struct USteamCoreUGCAsyncActionAddAppDependency* AddAppDependencyAsync(struct UObject* WorldContextObject, struct FPublishedFileID PublishedFileID, int32_t AppID); // Function SteamCore.SteamCoreUGCAsyncActionAddAppDependency.AddAppDependencyAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbb1cc0
};

// Class SteamCore.SteamCoreUGCAsyncActionRemoveAppDependency
// Size: 0x40 (Inherited: 0x30)
struct USteamCoreUGCAsyncActionRemoveAppDependency : USteamCoreAsyncAction {
	struct FMulticastInlineDelegate OnCallback; // 0x30(0x10)

	struct USteamCoreUGCAsyncActionRemoveAppDependency* RemoveAppDependencyAsync(struct UObject* WorldContextObject, struct FPublishedFileID PublishedFileID, int32_t AppID); // Function SteamCore.SteamCoreUGCAsyncActionRemoveAppDependency.RemoveAppDependencyAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbb2700
	void HandleCallback(struct FRemoveAppDependencyResult data, bool bWasSuccessful); // Function SteamCore.SteamCoreUGCAsyncActionRemoveAppDependency.HandleCallback // (Final|Native|Public|HasOutParms) // @ game+0xb86f60
};

// Class SteamCore.SteamCoreUGCAsyncActionAddUGCDependency
// Size: 0x40 (Inherited: 0x30)
struct USteamCoreUGCAsyncActionAddUGCDependency : USteamCoreAsyncAction {
	struct FMulticastInlineDelegate OnCallback; // 0x30(0x10)

	void HandleCallback(struct FAddUGCDependencyResult data, bool bWasSuccessful); // Function SteamCore.SteamCoreUGCAsyncActionAddUGCDependency.HandleCallback // (Final|Native|Public|HasOutParms) // @ game+0xbb2430
	struct USteamCoreUGCAsyncActionAddUGCDependency* AddDependencyAsync(struct UObject* WorldContextObject, struct FPublishedFileID PublishedFileID, struct FPublishedFileID ChildPublishedFileId); // Function SteamCore.SteamCoreUGCAsyncActionAddUGCDependency.AddDependencyAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbb1dc0
};

// Class SteamCore.SteamCoreUGCAsyncActionRemoveUGCDependency
// Size: 0x40 (Inherited: 0x30)
struct USteamCoreUGCAsyncActionRemoveUGCDependency : USteamCoreAsyncAction {
	struct FMulticastInlineDelegate OnCallback; // 0x30(0x10)

	struct USteamCoreUGCAsyncActionRemoveUGCDependency* RemoveDependencyAsync(struct UObject* WorldContextObject, struct FPublishedFileID PublishedFileID, struct FPublishedFileID ChildPublishedFileId); // Function SteamCore.SteamCoreUGCAsyncActionRemoveUGCDependency.RemoveDependencyAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbb2800
	void HandleCallback(struct FRemoveUGCDependencyResult data, bool bWasSuccessful); // Function SteamCore.SteamCoreUGCAsyncActionRemoveUGCDependency.HandleCallback // (Final|Native|Public|HasOutParms) // @ game+0xbb2430
};

// Class SteamCore.SteamCoreUGCAsyncActionDeleteItem
// Size: 0x40 (Inherited: 0x30)
struct USteamCoreUGCAsyncActionDeleteItem : USteamCoreAsyncAction {
	struct FMulticastInlineDelegate OnCallback; // 0x30(0x10)

	void HandleCallback(struct FUGCDeleteItemResult data, bool bWasSuccessful); // Function SteamCore.SteamCoreUGCAsyncActionDeleteItem.HandleCallback // (Final|Native|Public|HasOutParms) // @ game+0xb98a20
	struct USteamCoreUGCAsyncActionDeleteItem* DeleteItemAsync(struct UObject* WorldContextObject, struct FPublishedFileID PublishedFileID); // Function SteamCore.SteamCoreUGCAsyncActionDeleteItem.DeleteItemAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbb20c0
};

// Class SteamCore.SteamCoreUGCAsyncActionGetAppDependencies
// Size: 0x40 (Inherited: 0x30)
struct USteamCoreUGCAsyncActionGetAppDependencies : USteamCoreAsyncAction {
	struct FMulticastInlineDelegate OnCallback; // 0x30(0x10)

	void HandleCallback(struct FGetAppDependenciesResult data, bool bWasSuccessful); // Function SteamCore.SteamCoreUGCAsyncActionGetAppDependencies.HandleCallback // (Final|Native|Public|HasOutParms) // @ game+0xbb2520
	struct USteamCoreUGCAsyncActionGetAppDependencies* GetAppDependenciesAsync(struct UObject* WorldContextObject, struct FPublishedFileID PublishedFileID); // Function SteamCore.SteamCoreUGCAsyncActionGetAppDependencies.GetAppDependenciesAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbb2290
};

// Class SteamCore.SteamCoreUGCAsyncActionDownloadItem
// Size: 0x40 (Inherited: 0x30)
struct USteamCoreUGCAsyncActionDownloadItem : USteamCoreAsyncAction {
	struct FMulticastInlineDelegate OnCallback; // 0x30(0x10)

	void HandleCallback(struct FDownloadItemResult data, bool bWasSuccessful); // Function SteamCore.SteamCoreUGCAsyncActionDownloadItem.HandleCallback // (Final|Native|Public|HasOutParms) // @ game+0xb86f60
	struct USteamCoreUGCAsyncActionDownloadItem* DownloadItemAsync(struct UObject* WorldContextObject, struct FPublishedFileID PublishedFileID, bool bHighPriority); // Function SteamCore.SteamCoreUGCAsyncActionDownloadItem.DownloadItemAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbb2190
};

// Class SteamCore.User
// Size: 0x258 (Inherited: 0x48)
struct UUser : USteamCoreSubsystem {
	struct FMulticastInlineDelegate ClientGameServerDeny; // 0x48(0x10)
	struct FMulticastInlineDelegate GameWebCallback; // 0x58(0x10)
	struct FMulticastInlineDelegate GetAuthSessionTicketResponse; // 0x68(0x10)
	struct FMulticastInlineDelegate IPCFailure; // 0x78(0x10)
	struct FMulticastInlineDelegate LicensesUpdated; // 0x88(0x10)
	struct FMulticastInlineDelegate MicroTxnAuthorizationResponse; // 0x98(0x10)
	struct FMulticastInlineDelegate SteamServerConnectFailure; // 0xa8(0x10)
	struct FMulticastInlineDelegate SteamServersConnected; // 0xb8(0x10)
	struct FMulticastInlineDelegate SteamServersDisconnected; // 0xc8(0x10)
	struct FMulticastInlineDelegate ValidateAuthTicketResponse; // 0xd8(0x10)
	struct FMulticastInlineDelegate EncryptedAppTicketResponse; // 0xe8(0x10)
	char pad_F8[0x160]; // 0xf8(0x160)

	enum class ESteamUserHasLicenseForAppResult UserHasLicenseForApp(struct FSteamID SteamID, int32_t AppID); // Function SteamCore.User.UserHasLicenseForApp // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbb64e0
	void StopVoiceRecording(); // Function SteamCore.User.StopVoiceRecording // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbb64c0
	void StartVoiceRecording(); // Function SteamCore.User.StartVoiceRecording // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbb64a0
	void RequestStoreAuthURL(struct FDelegate callback, struct FString RedirectURL); // Function SteamCore.User.RequestStoreAuthURL // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xbb6340
	void RequestEncryptedAppTicket(struct FDelegate callback, struct TArray<char> dataToInclude); // Function SteamCore.User.RequestEncryptedAppTicket // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xbb61e0
	int32_t GetVoiceOptimalSampleRate(); // Function SteamCore.User.GetVoiceOptimalSampleRate // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbb61b0
	enum class ESteamVoiceResult GetVoice(struct TArray<char> destBuffer, int32_t bytesWritten); // Function SteamCore.User.GetVoice // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xbb60b0
	struct FSteamID GetSteamID_Pure(); // Function SteamCore.User.GetSteamID_Pure // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xbb6070
	struct FSteamID GetSteamID(); // Function SteamCore.User.GetSteamID // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbb6030
	int32_t GetPlayerSteamLevel(); // Function SteamCore.User.GetPlayerSteamLevel // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbb6000
	int32_t GetGameBadgeLevel(int32_t series, bool bFoil); // Function SteamCore.User.GetGameBadgeLevel // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbb5f30
	bool GetEncryptedAppTicket(struct TArray<char> ticket); // Function SteamCore.User.GetEncryptedAppTicket // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xbb5e80
	enum class ESteamVoiceResult GetAvailableVoice(int32_t compressedBytes, int32_t uncompressedBytes, int32_t uncompressedVoiceDesiredSampleRate); // Function SteamCore.User.GetAvailableVoice // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xbb5d60
	struct FSteamTicketHandle GetAuthSessionTicket(struct TArray<char> ticket); // Function SteamCore.User.GetAuthSessionTicket // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xbb5cb0
	void EndAuthSession(struct FSteamID SteamID); // Function SteamCore.User.EndAuthSession // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbb5c30
	enum class ESteamVoiceResult DecompressVoice(struct TArray<char> compressedBuffer, int32_t desiredSampleRate, struct TArray<char> destBuffer); // Function SteamCore.User.DecompressVoice // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xbb5ad0
	void CancelAuthTicket(struct FSteamTicketHandle ticketHandle); // Function SteamCore.User.CancelAuthTicket // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbb5a50
	bool BLoggedOn(); // Function SteamCore.User.BLoggedOn // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbb58f0
	bool BIsTwoFactorEnabled(); // Function SteamCore.User.BIsTwoFactorEnabled // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbb58c0
	bool BIsPhoneVerified(); // Function SteamCore.User.BIsPhoneVerified // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbb5890
	bool BIsPhoneRequiringVerification(); // Function SteamCore.User.BIsPhoneRequiringVerification // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbb5860
	bool BIsPhoneIdentifying(); // Function SteamCore.User.BIsPhoneIdentifying // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbb5830
	bool BIsBehindNAT(); // Function SteamCore.User.BIsBehindNAT // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbb5800
	enum class ESteamBeginAuthSessionResult BeginAuthSession(struct TArray<char> ticket, struct FSteamID SteamID); // Function SteamCore.User.BeginAuthSession // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbb5920
	void AdvertiseGame(struct FSteamID SteamIDGameServer, struct FString serverIP, int32_t serverPort); // Function SteamCore.User.AdvertiseGame // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbb56a0
};

// Class SteamCore.SteamCoreUserAsyncActionRequestEncryptedAppTicket
// Size: 0x40 (Inherited: 0x30)
struct USteamCoreUserAsyncActionRequestEncryptedAppTicket : USteamCoreAsyncAction {
	struct FMulticastInlineDelegate OnCallback; // 0x30(0x10)

	struct USteamCoreUserAsyncActionRequestEncryptedAppTicket* RequestEncryptedAppTicketAsync(struct UObject* WorldContextObject, struct TArray<char> dataToInclude); // Function SteamCore.SteamCoreUserAsyncActionRequestEncryptedAppTicket.RequestEncryptedAppTicketAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbbbbe0
	void HandleCallback(struct FEncryptedAppTicketResponse data, bool bWasSuccessful); // Function SteamCore.SteamCoreUserAsyncActionRequestEncryptedAppTicket.HandleCallback // (Final|Native|Public|HasOutParms) // @ game+0xb86d90
};

// Class SteamCore.SteamCoreUserAsyncActionRequestStoreAuthURL
// Size: 0x40 (Inherited: 0x30)
struct USteamCoreUserAsyncActionRequestStoreAuthURL : USteamCoreAsyncAction {
	struct FMulticastInlineDelegate OnCallback; // 0x30(0x10)

	struct USteamCoreUserAsyncActionRequestStoreAuthURL* RequestStoreAuthURLAsync(struct UObject* WorldContextObject, struct FString RedirectURL); // Function SteamCore.SteamCoreUserAsyncActionRequestStoreAuthURL.RequestStoreAuthURLAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbbc020
	void HandleCallback(struct FStoreAuthURLResponse data, bool bWasSuccessful); // Function SteamCore.SteamCoreUserAsyncActionRequestStoreAuthURL.HandleCallback // (Final|Native|Public|HasOutParms) // @ game+0xbbb5b0
};

// Class SteamCore.UserStats
// Size: 0x138 (Inherited: 0x48)
struct UUserStats : USteamCoreSubsystem {
	struct FMulticastInlineDelegate UserAchievementIconFetched; // 0x48(0x10)
	struct FMulticastInlineDelegate UserAchievementStored; // 0x58(0x10)
	struct FMulticastInlineDelegate UserStatsReceived; // 0x68(0x10)
	struct FMulticastInlineDelegate UserStatsStored; // 0x78(0x10)
	struct FMulticastInlineDelegate UserStatsUnloaded; // 0x88(0x10)
	char pad_98[0xa0]; // 0x98(0xa0)

	void UploadLeaderboardScore(struct FDelegate callback, struct FSteamLeaderboard SteamLeaderboard, enum class ESteamLeaderboardUploadScoreMethod uploadScoreMethod, int32_t Score, struct TArray<int32_t> scoreDetails); // Function SteamCore.UserStats.UploadLeaderboardScore // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xbbc890
	bool UpdateAvgRateStat(struct FString Name, float countThisSession, float sessionLength); // Function SteamCore.UserStats.UpdateAvgRateStat // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbbc730
	bool StoreStats(); // Function SteamCore.UserStats.StoreStats // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbbc700
	bool SetStatInt(struct FString Name, int32_t data); // Function SteamCore.UserStats.SetStatInt // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbbc5d0
	bool SetStatFloat(struct FString Name, float data); // Function SteamCore.UserStats.SetStatFloat // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbbc4a0
	bool SetAchievement(struct FString Name); // Function SteamCore.UserStats.SetAchievement // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbbc3b0
	bool ResetAllStats(bool bAchievementsToo); // Function SteamCore.UserStats.ResetAllStats // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbbc320
	void RequestUserStats(struct FDelegate callback, struct FSteamID SteamID); // Function SteamCore.UserStats.RequestUserStats // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xbbc150
	void RequestGlobalStats(struct FDelegate callback, int32_t historyDays); // Function SteamCore.UserStats.RequestGlobalStats // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xbbbe50
	void RequestGlobalAchievementPercentages(struct FDelegate callback); // Function SteamCore.UserStats.RequestGlobalAchievementPercentages // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xbbbd10
	bool RequestCurrentStats(); // Function SteamCore.UserStats.RequestCurrentStats // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbbbbb0
	bool IndicateAchievementProgress(struct FString Name, int32_t CurrentProgress, int32_t MaxProgress); // Function SteamCore.UserStats.IndicateAchievementProgress // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbbba50
	bool GetUserStatInteger(struct FSteamID SteamIDUser, struct FString Name, int32_t data); // Function SteamCore.UserStats.GetUserStatInteger // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xbbb430
	bool GetUserStatFloat(struct FSteamID SteamIDUser, struct FString Name, float data); // Function SteamCore.UserStats.GetUserStatFloat // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xbbb2b0
	bool GetUserAchievementAndUnlockTime(struct FSteamID SteamIDUser, struct FString Name, bool bAchieved, int32_t unlockTime); // Function SteamCore.UserStats.GetUserAchievementAndUnlockTime // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xbbb100
	bool GetUserAchievement(struct FSteamID SteamIDUser, struct FString Name, bool bAchieved); // Function SteamCore.UserStats.GetUserAchievement // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xbbaf80
	bool GetStatInt(struct FString Name, int32_t data); // Function SteamCore.UserStats.GetStatInt // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xbbae40
	bool GetStatFloat(struct FString Name, float data); // Function SteamCore.UserStats.GetStatFloat // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xbbad00
	void GetNumberOfCurrentPlayers(struct FDelegate callback); // Function SteamCore.UserStats.GetNumberOfCurrentPlayers // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xbbabc0
	int32_t GetNumAchievements(); // Function SteamCore.UserStats.GetNumAchievements // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbbab90
	int32_t GetNextMostAchievedAchievementInfo(int32_t iteratorPrevious, struct FString Name, float Percent, bool bAchieved); // Function SteamCore.UserStats.GetNextMostAchievedAchievementInfo // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xbbaa00
	int32_t GetMostAchievedAchievementInfo(struct FString Name, float Percent, bool bAchieved); // Function SteamCore.UserStats.GetMostAchievedAchievementInfo // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xbba8b0
	enum class ESteamLeaderboardSortMethod GetLeaderboardSortMethod(struct FSteamLeaderboard SteamLeaderboard); // Function SteamCore.UserStats.GetLeaderboardSortMethod // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbba820
	struct FString GetLeaderboardName(struct FSteamLeaderboard SteamLeaderboard); // Function SteamCore.UserStats.GetLeaderboardName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbba750
	int32_t GetLeaderboardEntryCount(struct FSteamLeaderboard SteamLeaderboard); // Function SteamCore.UserStats.GetLeaderboardEntryCount // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbba6c0
	enum class ESteamLeaderboardDisplayType GetLeaderboardDisplayType(struct FSteamLeaderboard SteamLeaderboard); // Function SteamCore.UserStats.GetLeaderboardDisplayType // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbba630
	bool GetGlobalStatInt(struct FString StatName, int32_t data); // Function SteamCore.UserStats.GetGlobalStatInt // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xbba4f0
	int32_t GetGlobalStatHistoryInt(struct FString StatName, int32_t historyDays, struct TArray<int32_t> data); // Function SteamCore.UserStats.GetGlobalStatHistoryInt // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xbba360
	int32_t GetGlobalStatHistoryFloat(struct FString StatName, int32_t historyDays, struct TArray<float> data); // Function SteamCore.UserStats.GetGlobalStatHistoryFloat // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xbba1d0
	bool GetGlobalStatFloat(struct FString StatName, float data); // Function SteamCore.UserStats.GetGlobalStatFloat // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xbba090
	bool GetDownloadedLeaderboardEntry(struct FSteamLeaderboardEntries leaderboardEntries, int32_t Index, struct FSteamLeaderboardEntry leaderboardEntry, struct TArray<int32_t> Details, struct TArray<int32_t> outDetails); // Function SteamCore.UserStats.GetDownloadedLeaderboardEntry // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xbb9e60
	struct FString GetAchievementName(int32_t achievement); // Function SteamCore.UserStats.GetAchievementName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbb9d90
	struct UTexture2D* GetAchievementIcon(struct FString Name); // Function SteamCore.UserStats.GetAchievementIcon // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbb9ca0
	struct FString GetAchievementDisplayAttribute(struct FString Name, struct FString Key); // Function SteamCore.UserStats.GetAchievementDisplayAttribute // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbb9af0
	bool GetAchievementAndUnlockTime(struct FString Name, bool bAchieved, int32_t unlockTime); // Function SteamCore.UserStats.GetAchievementAndUnlockTime // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xbb9960
	bool GetAchievementAchievedPercent(struct FString Name, float Percent); // Function SteamCore.UserStats.GetAchievementAchievedPercent // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xbb9820
	bool GetAchievement(struct FString Name, bool bAchieved); // Function SteamCore.UserStats.GetAchievement // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xbb96e0
	void FindOrCreateLeaderboard(struct FDelegate callback, struct FString LeaderboardName, enum class ESteamLeaderboardSortMethod SortMethod, enum class ESteamLeaderboardDisplayType displayType); // Function SteamCore.UserStats.FindOrCreateLeaderboard // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xbb9390
	void FindLeaderboard(struct FDelegate callback, struct FString LeaderboardName); // Function SteamCore.UserStats.FindLeaderboard // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xbb9100
	void DownloadLeaderboardEntriesForUsers(struct FDelegate callback, struct FSteamLeaderboard SteamLeaderboard, struct TArray<struct FSteamID> users); // Function SteamCore.UserStats.DownloadLeaderboardEntriesForUsers // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xbb8e10
	void DownloadLeaderboardEntries(struct FDelegate callback, struct FSteamLeaderboard SteamLeaderboard, enum class ESteamLeaderboardDataRequest dataRequest, int32_t rangeStart, int32_t rangeEnd); // Function SteamCore.UserStats.DownloadLeaderboardEntries // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xbb8ac0
	bool ClearAchievement(struct FString Name); // Function SteamCore.UserStats.ClearAchievement // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbb89d0
	void AttachLeaderboardUGC(struct FDelegate callback, struct FSteamLeaderboard SteamLeaderboard, struct FSteamUGCHandle Handle); // Function SteamCore.UserStats.AttachLeaderboardUGC // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xbb87a0
};

// Class SteamCore.SteamCoreUserStatsAsyncActionFindLeaderboard
// Size: 0x40 (Inherited: 0x30)
struct USteamCoreUserStatsAsyncActionFindLeaderboard : USteamCoreAsyncAction {
	struct FMulticastInlineDelegate OnCallback; // 0x30(0x10)

	void HandleCallback(struct FLeaderboardFindResult data, bool bWasSuccessful); // Function SteamCore.SteamCoreUserStatsAsyncActionFindLeaderboard.HandleCallback // (Final|Native|Public|HasOutParms) // @ game+0xb87050
	struct USteamCoreUserStatsAsyncActionFindLeaderboard* FindLeaderboardAsync(struct UObject* WorldContextObject, struct FString LeaderboardName); // Function SteamCore.SteamCoreUserStatsAsyncActionFindLeaderboard.FindLeaderboardAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbb9260
};

// Class SteamCore.SteamCoreUserStatsAsyncActionDownloadLeaderboardEntries
// Size: 0x40 (Inherited: 0x30)
struct USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries : USteamCoreAsyncAction {
	struct FMulticastInlineDelegate OnCallback; // 0x30(0x10)

	void HandleCallback(struct FLeaderboardScoresDownloaded data, bool bWasSuccessful); // Function SteamCore.SteamCoreUserStatsAsyncActionDownloadLeaderboardEntries.HandleCallback // (Final|Native|Public|HasOutParms) // @ game+0xbbb6b0
	struct USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries* DownloadLeaderboardEntriesAsync(struct UObject* WorldContextObject, struct FSteamLeaderboard SteamLeaderboard, enum class ESteamLeaderboardDataRequest dataRequest, int32_t rangeStart, int32_t rangeEnd); // Function SteamCore.SteamCoreUserStatsAsyncActionDownloadLeaderboardEntries.DownloadLeaderboardEntriesAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbb8c80
};

// Class SteamCore.SteamCoreUserStatsAsyncActionDownloadRequestGlobalStats
// Size: 0x40 (Inherited: 0x30)
struct USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats : USteamCoreAsyncAction {
	struct FMulticastInlineDelegate OnCallback; // 0x30(0x10)

	struct USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats* RequestGlobalStatsAsync(struct UObject* WorldContextObject, int32_t historyDays); // Function SteamCore.SteamCoreUserStatsAsyncActionDownloadRequestGlobalStats.RequestGlobalStatsAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbbbf50
	void HandleCallback(struct FGlobalStatsReceived data, bool bWasSuccessful); // Function SteamCore.SteamCoreUserStatsAsyncActionDownloadRequestGlobalStats.HandleCallback // (Final|Native|Public|HasOutParms) // @ game+0xb87050
};

// Class SteamCore.SteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages
// Size: 0x40 (Inherited: 0x30)
struct USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages : USteamCoreAsyncAction {
	struct FMulticastInlineDelegate OnCallback; // 0x30(0x10)

	struct USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages* RequestGlobalAchievementPercentagesAsync(struct UObject* WorldContextObject); // Function SteamCore.SteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages.RequestGlobalAchievementPercentagesAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbbbdc0
	void HandleCallback(struct FGlobalAchievementPercentagesReady data, bool bWasSuccessful); // Function SteamCore.SteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages.HandleCallback // (Final|Native|Public|HasOutParms) // @ game+0xb87050
};

// Class SteamCore.SteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers
// Size: 0x40 (Inherited: 0x30)
struct USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers : USteamCoreAsyncAction {
	struct FMulticastInlineDelegate OnCallback; // 0x30(0x10)

	void HandleCallback(struct FNumberOfCurrentPlayers data, bool bWasSuccessful); // Function SteamCore.SteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers.HandleCallback // (Final|Native|Public|HasOutParms) // @ game+0xbbb7a0
	struct USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers* GetNumberOfCurrentPlayersAsync(struct UObject* WorldContextObject); // Function SteamCore.SteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers.GetNumberOfCurrentPlayersAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbbac70
};

// Class SteamCore.SteamCoreUserStatsAsyncActionUploadLeaderboardScore
// Size: 0x40 (Inherited: 0x30)
struct USteamCoreUserStatsAsyncActionUploadLeaderboardScore : USteamCoreAsyncAction {
	struct FMulticastInlineDelegate OnCallback; // 0x30(0x10)

	struct USteamCoreUserStatsAsyncActionUploadLeaderboardScore* UploadLeaderboardScoreAsync(struct UObject* WorldContextObject, struct FSteamLeaderboard SteamLeaderboard, enum class ESteamLeaderboardUploadScoreMethod uploadScoreMethod, int32_t Score, struct TArray<int32_t> scoreDetails); // Function SteamCore.SteamCoreUserStatsAsyncActionUploadLeaderboardScore.UploadLeaderboardScoreAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbbcaa0
	void HandleCallback(struct FLeaderboardScoreUploaded data, bool bWasSuccessful); // Function SteamCore.SteamCoreUserStatsAsyncActionUploadLeaderboardScore.HandleCallback // (Final|Native|Public|HasOutParms) // @ game+0xbbb960
};

// Class SteamCore.SteamCoreUserStatsAsyncActionFindOrCreateLeaderboard
// Size: 0x40 (Inherited: 0x30)
struct USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard : USteamCoreAsyncAction {
	struct FMulticastInlineDelegate OnCallback; // 0x30(0x10)

	void HandleCallback(struct FFindOrCreateLeaderboardData data, bool bWasSuccessful); // Function SteamCore.SteamCoreUserStatsAsyncActionFindOrCreateLeaderboard.HandleCallback // (Final|Native|Public|HasOutParms) // @ game+0xb87050
	struct USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard* FindOrCreateLeaderboardAsync(struct UObject* WorldContextObject, struct FString LeaderboardName, enum class ESteamLeaderboardSortMethod SortMethod, enum class ESteamLeaderboardDisplayType displayType); // Function SteamCore.SteamCoreUserStatsAsyncActionFindOrCreateLeaderboard.FindOrCreateLeaderboardAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbb9550
};

// Class SteamCore.SteamCoreUserStatsAsyncActionRequestUserStats
// Size: 0x40 (Inherited: 0x30)
struct USteamCoreUserStatsAsyncActionRequestUserStats : USteamCoreAsyncAction {
	struct FMulticastInlineDelegate OnCallback; // 0x30(0x10)

	struct USteamCoreUserStatsAsyncActionRequestUserStats* RequestUserStatsAsync(struct UObject* WorldContextObject, struct FSteamID SteamID); // Function SteamCore.SteamCoreUserStatsAsyncActionRequestUserStats.RequestUserStatsAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbbc250
	void HandleCallback(struct FRequestUserStatsData data, bool bWasSuccessful); // Function SteamCore.SteamCoreUserStatsAsyncActionRequestUserStats.HandleCallback // (Final|Native|Public|HasOutParms) // @ game+0xbbb870
};

// Class SteamCore.SteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers
// Size: 0x40 (Inherited: 0x30)
struct USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers : USteamCoreAsyncAction {
	struct FMulticastInlineDelegate OnCallback; // 0x30(0x10)

	void HandleCallback(struct FLeaderboardScoresDownloadedForUsers data, bool bWasSuccessful); // Function SteamCore.SteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers.HandleCallback // (Final|Native|Public|HasOutParms) // @ game+0xbbb6b0
	struct USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers* DownloadLeaderboardEntriesForUsersAsync(struct UObject* WorldContextObject, struct FSteamLeaderboard SteamLeaderboard, struct TArray<struct FSteamID> users); // Function SteamCore.SteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers.DownloadLeaderboardEntriesForUsersAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbb8fa0
};

// Class SteamCore.SteamCoreUserStatsAsyncActionAttachLeaderboardUGC
// Size: 0x40 (Inherited: 0x30)
struct USteamCoreUserStatsAsyncActionAttachLeaderboardUGC : USteamCoreAsyncAction {
	struct FMulticastInlineDelegate OnCallback; // 0x30(0x10)

	void HandleCallback(struct FAttachLeaderboardUGCData data, bool bWasSuccessful); // Function SteamCore.SteamCoreUserStatsAsyncActionAttachLeaderboardUGC.HandleCallback // (Final|Native|Public|HasOutParms) // @ game+0xb87050
	struct USteamCoreUserStatsAsyncActionAttachLeaderboardUGC* AttachLeaderboardUGCAsync(struct UObject* WorldContextObject, struct FSteamLeaderboard SteamLeaderboard, struct FSteamUGCHandle Handle); // Function SteamCore.SteamCoreUserStatsAsyncActionAttachLeaderboardUGC.AttachLeaderboardUGCAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbb88d0
};

// Class SteamCore.SteamCoreVoice
// Size: 0x3c0 (Inherited: 0x3c0)
struct USteamCoreVoice : USoundWaveProcedural {

	void DestroySteamCoreVoice(struct USteamCoreVoice* Obj); // Function SteamCore.SteamCoreVoice.DestroySteamCoreVoice // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbbfdd0
	struct USteamCoreVoice* ConstructSteamCoreVoice(int32_t audioSampleRate); // Function SteamCore.SteamCoreVoice.ConstructSteamCoreVoice // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbbfd40
	void AddAudioBuffer(struct TArray<char> buffer); // Function SteamCore.SteamCoreVoice.AddAudioBuffer // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xbbf990
};

// Class SteamCore.SteamUtilities
// Size: 0x28 (Inherited: 0x28)
struct USteamUtilities : UBlueprintFunctionLibrary {

	void SteamItemInstanceID_Equals_Exec(struct FSteamItemInstanceID A, struct FSteamItemInstanceID B, enum class ESteamCoreIdentical Result); // Function SteamCore.SteamUtilities.SteamItemInstanceID_Equals_Exec // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xbc2220
	bool SteamItemInstanceID_Equals(struct FSteamItemInstanceID A, struct FSteamItemInstanceID B); // Function SteamCore.SteamUtilities.SteamItemInstanceID_Equals // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xbc2150
	bool PublishedFileID_NotEquals(struct FPublishedFileID A, struct FPublishedFileID B); // Function SteamCore.SteamUtilities.PublishedFileID_NotEquals // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xbc2080
	void PublishedFileID_Equals_Exec(struct FPublishedFileID A, struct FPublishedFileID B, enum class ESteamCoreIdentical Result); // Function SteamCore.SteamUtilities.PublishedFileID_Equals_Exec // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xbc0050
	bool PublishedFileID_Equals(struct FPublishedFileID A, struct FPublishedFileID B); // Function SteamCore.SteamUtilities.PublishedFileID_Equals // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xbbff80
	bool NotEqual(struct FSteamID A, struct FSteamID B); // Function SteamCore.SteamUtilities.NotEqual // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xbc2080
	struct FSteamUGCHandle MakeUGCHandle(struct FString Value); // Function SteamCore.SteamUtilities.MakeUGCHandle // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xbc1950
	struct FSteamTicketHandle MakeTicketHandle(struct FString Value); // Function SteamCore.SteamUtilities.MakeTicketHandle // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xbc1f90
	struct FSteamSessionSetting MakeString(struct FString Value); // Function SteamCore.SteamUtilities.MakeString // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xbc1dd0
	struct FSteamID MakeSteamID(struct FString Value); // Function SteamCore.SteamUtilities.MakeSteamID // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xbc1950
	struct FSteamGameID MakeSteamGameID(struct FString Value); // Function SteamCore.SteamUtilities.MakeSteamGameID // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xbc1950
	struct FSteamSessionSearchSetting MakeSearchString(struct FString Value); // Function SteamCore.SteamUtilities.MakeSearchString // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xbc1c50
	struct FSteamSessionSearchSetting MakeSearchInteger(enum class ESteamComparisonOp comparisonOperator, int32_t Value); // Function SteamCore.SteamUtilities.MakeSearchInteger // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xbc1b30
	struct FSteamSessionSearchSetting MakeSearchBool(bool Value); // Function SteamCore.SteamUtilities.MakeSearchBool // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xbc1a40
	struct FPublishedFileID MakePublishedFileID(struct FString Value); // Function SteamCore.SteamUtilities.MakePublishedFileID // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xbc1950
	struct FSteamInventoryUpdateHandle MakeInventoryUpdateHandle(struct FString Value); // Function SteamCore.SteamUtilities.MakeInventoryUpdateHandle // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xbc1950
	struct FSteamSessionSetting MakeInteger(int32_t Value); // Function SteamCore.SteamUtilities.MakeInteger // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xbc1810
	struct FSteamSessionSetting MakeBool(bool Value); // Function SteamCore.SteamUtilities.MakeBool // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xbc16d0
	void ListenForSteamMessages(struct FDelegate callback); // Function SteamCore.SteamUtilities.ListenForSteamMessages // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xbc1630
	bool IsValid(struct FSteamID SteamID); // Function SteamCore.SteamUtilities.IsValid // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xbc15a0
	bool IsUsingP2PRelays(); // Function SteamCore.SteamUtilities.IsUsingP2PRelays // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbc1570
	void IsUGCHandleValid_Exec(struct FSteamUGCHandle Handle, enum class ESteamCoreValid Result); // Function SteamCore.SteamUtilities.IsUGCHandleValid_Exec // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xbc14a0
	bool IsUGCHandleValid(struct FSteamUGCHandle Handle); // Function SteamCore.SteamUtilities.IsUGCHandleValid // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xbc1410
	void IsSteamTicketHandleValid_Exec(struct FSteamTicketHandle Handle, enum class ESteamCoreValid Result); // Function SteamCore.SteamUtilities.IsSteamTicketHandleValid_Exec // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xbc1340
	bool IsSteamTicketHandleValid(struct FSteamTicketHandle Handle); // Function SteamCore.SteamUtilities.IsSteamTicketHandleValid // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xbc12b0
	void IsSteamInventoryUpdateHandleValid_Exec(struct FSteamInventoryUpdateHandle Handle, enum class ESteamCoreValid Result); // Function SteamCore.SteamUtilities.IsSteamInventoryUpdateHandleValid_Exec // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xbc11e0
	bool IsSteamInventoryUpdateHandleValid(struct FSteamInventoryUpdateHandle Handle); // Function SteamCore.SteamUtilities.IsSteamInventoryUpdateHandleValid // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xbc1160
	void IsSteamIDValid_Exec(struct FSteamID SteamID, enum class ESteamCoreValid Result); // Function SteamCore.SteamUtilities.IsSteamIDValid_Exec // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xbc0ff0
	bool IsSteamAvailable(); // Function SteamCore.SteamUtilities.IsSteamAvailable // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xbc0fc0
	bool IsRecalculatingPing(); // Function SteamCore.SteamUtilities.IsRecalculatingPing // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xbc0f90
	void IsPublishedFileIDValid_Exec(struct FPublishedFileID Handle, enum class ESteamCoreValid Result); // Function SteamCore.SteamUtilities.IsPublishedFileIDValid_Exec // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xbc0ec0
	bool IsPublishedFileIDValid(struct FPublishedFileID PublishedFileID); // Function SteamCore.SteamUtilities.IsPublishedFileIDValid // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xbc0e30
	bool IsLobby(struct FSteamID SteamID); // Function SteamCore.SteamUtilities.IsLobby // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xbc0da0
	void IsGameIDValid_Exec(struct FSteamGameID GameID, enum class ESteamCoreValid Result); // Function SteamCore.SteamUtilities.IsGameIDValid_Exec // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xbc0c60
	bool IsGameIDValid(struct FSteamGameID GameID); // Function SteamCore.SteamUtilities.IsGameIDValid // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xbc0b60
	struct FString GetString(struct FSteamSessionSetting Settings, struct FString Key); // Function SteamCore.SteamUtilities.GetString // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xbc0900
	void GetPublicIp(struct FDelegate callback); // Function SteamCore.SteamUtilities.GetPublicIp // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xbc0860
	int32_t GetPingFromHostData(struct FHostPingData data); // Function SteamCore.SteamUtilities.GetPingFromHostData // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xbc07b0
	int32_t GetInteger(struct FSteamSessionSetting Settings, struct FString Key); // Function SteamCore.SteamUtilities.GetInteger // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xbc05a0
	struct FHostPingData GetHostPingData(); // Function SteamCore.SteamUtilities.GetHostPingData // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbc0520
	bool GetBool(struct FSteamSessionSetting Settings, struct FString Key); // Function SteamCore.SteamUtilities.GetBool // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xbc0330
	enum class ESteamAccountType GetAccountType(struct FSteamID SteamID); // Function SteamCore.SteamUtilities.GetAccountType // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xbc02a0
	struct FDateTime FromUnixTimestamp(struct FString Timestamp); // Function SteamCore.SteamUtilities.FromUnixTimestamp // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0xbc0160
	void Equal_Exec(struct FSteamID A, struct FSteamID B, enum class ESteamCoreIdentical Result); // Function SteamCore.SteamUtilities.Equal_Exec // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xbc0050
	bool Equal(struct FSteamID A, struct FSteamID B); // Function SteamCore.SteamUtilities.Equal // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xbbff80
	struct FString EncryptString(struct FString String); // Function SteamCore.SteamUtilities.EncryptString // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbbfe50
	struct UServerFilter* ConstructServerFilter(struct UObject* WorldContextObject); // Function SteamCore.SteamUtilities.ConstructServerFilter // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbbfcb0
	struct FString BreakUGCHandle(struct FSteamUGCHandle Handle); // Function SteamCore.SteamUtilities.BreakUGCHandle // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xbbfb10
	struct FString BreakTicketHandle(struct FSteamTicketHandle Handle); // Function SteamCore.SteamUtilities.BreakTicketHandle // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xbbfbe0
	struct FString BreakSteamID(struct FSteamID SteamID); // Function SteamCore.SteamUtilities.BreakSteamID // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xbbfb10
	struct FString BreakSteamGameID(struct FSteamGameID SteamID); // Function SteamCore.SteamUtilities.BreakSteamGameID // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xbbfb10
	struct FString BreakPublishedFileID(struct FPublishedFileID fileID); // Function SteamCore.SteamUtilities.BreakPublishedFileID // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xbbfb10
	struct FString BreakInventoryUpdateHandle(struct FSteamInventoryUpdateHandle Handle); // Function SteamCore.SteamUtilities.BreakInventoryUpdateHandle // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xbbfa40
};

// Class SteamCore.Utils
// Size: 0x138 (Inherited: 0x48)
struct UUtils : USteamCoreSubsystem {
	struct FMulticastInlineDelegate CheckFileSignature; // 0x48(0x10)
	struct FMulticastInlineDelegate GamepadTextInputDismissed; // 0x58(0x10)
	struct FMulticastInlineDelegate IPCountry; // 0x68(0x10)
	struct FMulticastInlineDelegate LowBatteryPower; // 0x78(0x10)
	struct FMulticastInlineDelegate SteamShutdown; // 0x88(0x10)
	char pad_98[0xa0]; // 0x98(0xa0)

	void StartVRDashboard(); // Function SteamCore.Utils.StartVRDashboard // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbc4750
	bool ShowGamepadTextInput(enum class ESteamGamepadTextInputMode InputMode, enum class ESteamGamepadTextInputLineMode lineInputMode, struct FString Description, int32_t charMax, struct FString existingText); // Function SteamCore.Utils.ShowGamepadTextInput // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbc4530
	void SetVRHeadsetStreamingEnabled(bool bEnabled); // Function SteamCore.Utils.SetVRHeadsetStreamingEnabled // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbc44b0
	void SetOverlayNotificationPosition(enum class ESteamNotificationPosition notificationPosition); // Function SteamCore.Utils.SetOverlayNotificationPosition // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbc4440
	void SetOverlayNotificationInset(int32_t horizontalInset, int32_t verticalInset); // Function SteamCore.Utils.SetOverlayNotificationInset // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbc4380
	bool IsVRHeadsetStreamingEnabled(); // Function SteamCore.Utils.IsVRHeadsetStreamingEnabled // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbc4350
	bool IsSteamRunningInVR(); // Function SteamCore.Utils.IsSteamRunningInVR // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbc4320
	bool IsSteamInBigPictureMode(); // Function SteamCore.Utils.IsSteamInBigPictureMode // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbc42f0
	bool IsSteamChinaLauncher(); // Function SteamCore.Utils.IsSteamChinaLauncher // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbc42c0
	bool IsOverlayEnabled(); // Function SteamCore.Utils.IsOverlayEnabled // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbc4290
	bool InitFilterText(); // Function SteamCore.Utils.InitFilterText // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbc41d0
	struct FString GetSteamUILanguage(); // Function SteamCore.Utils.GetSteamUILanguage // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbc40d0
	int32_t GetServerRealTime(); // Function SteamCore.Utils.GetServerRealTime // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbc40a0
	int32_t GetSecondsSinceComputerActive(); // Function SteamCore.Utils.GetSecondsSinceComputerActive // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbc4070
	int32_t GetSecondsSinceAppActive(); // Function SteamCore.Utils.GetSecondsSinceAppActive // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbc4040
	struct FString GetIPCountry(); // Function SteamCore.Utils.GetIPCountry // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbc3c40
	int32_t GetIPCCallCount(); // Function SteamCore.Utils.GetIPCCallCount // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbc3c10
	bool GetImageSize(int32_t iImage, int32_t Width, int32_t Height); // Function SteamCore.Utils.GetImageSize // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xbc3db0
	bool GetImageRGBA(int32_t iImage, struct TArray<char> outBuffer); // Function SteamCore.Utils.GetImageRGBA // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xbc3cc0
	int32_t GetEnteredGamepadTextLength(); // Function SteamCore.Utils.GetEnteredGamepadTextLength // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbc3be0
	bool GetEnteredGamepadTextInput(struct FString Text); // Function SteamCore.Utils.GetEnteredGamepadTextInput // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xbc3b30
	int32_t GetCurrentBatteryPower(); // Function SteamCore.Utils.GetCurrentBatteryPower // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbc3b00
	bool GetCSERIPPort(struct FString IP, int32_t Port); // Function SteamCore.Utils.GetCSERIPPort // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xbc39d0
	enum class ESteamUniverse GetConnectedUniverse(); // Function SteamCore.Utils.GetConnectedUniverse // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbc3ad0
	int32_t GetAppID_Pure(); // Function SteamCore.Utils.GetAppID_Pure // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xbc39a0
	int32_t GetAppID(); // Function SteamCore.Utils.GetAppID // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbc39a0
	int32_t FilterText(struct FString filteredText, struct FString inputMessage, bool bLegalOnly); // Function SteamCore.Utils.FilterText // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xbc3810
	bool BOverlayNeedsPresent(); // Function SteamCore.Utils.BOverlayNeedsPresent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbc37e0
};

// Class SteamCore.Video
// Size: 0xa8 (Inherited: 0x48)
struct UVideo : USteamCoreSubsystem {
	struct FMulticastInlineDelegate GetOPFSettingsResult; // 0x48(0x10)
	struct FMulticastInlineDelegate GetVideoURLResult; // 0x58(0x10)
	char pad_68[0x40]; // 0x68(0x40)

	bool IsBroadcasting(int32_t numViewers); // Function SteamCore.Video.IsBroadcasting // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xbc4200
	void GetVideoURL(int32_t videoAppID); // Function SteamCore.Video.GetVideoURL // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbc4150
	bool GetOPFStringForApp(int32_t videoAppID, struct FString outBuffer); // Function SteamCore.Video.GetOPFStringForApp // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xbc3f50
	void GetOPFSettings(int32_t videoAppID); // Function SteamCore.Video.GetOPFSettings // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbc3ed0
};

