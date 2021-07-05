// Class AdvancedSteamSessions.AdvancedSteamFriendsLibrary
// Size: 0x28 (Inherited: 0x28)
struct UAdvancedSteamFriendsLibrary : UBlueprintFunctionLibrary {

	bool RequestSteamFriendInfo(struct FBPUniqueNetId UniqueNetId, bool bRequireNameOnly); // Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.RequestSteamFriendInfo // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb3c660
	bool OpenSteamUserOverlay(struct FBPUniqueNetId UniqueNetId, enum class ESteamUserOverlayType DialogType); // Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.OpenSteamUserOverlay // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb3c520
	struct FString GetSteamPersonaName(struct FBPUniqueNetId UniqueNetId); // Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetSteamPersonaName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb3c240
	void GetSteamGroups(struct TArray<struct FBPSteamGroupInfo> SteamGroups); // Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetSteamGroups // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xb3c140
	void GetSteamFriendGamePlayed(struct FBPUniqueNetId UniqueNetId, enum class EBlueprintResultSwitch Result, int32_t AppID); // Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetSteamFriendGamePlayed // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xb3be60
	struct UTexture2D* GetSteamFriendAvatar(struct FBPUniqueNetId UniqueNetId, enum class EBlueprintAsyncResultSwitch Result, enum class SteamAvatarSize AvatarSize); // Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetSteamFriendAvatar // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xb3bcc0
	struct FBPUniqueNetId GetLocalSteamIDFromSteam(); // Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetLocalSteamIDFromSteam // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xb3bbd0
	int32_t GetFriendSteamLevel(struct FBPUniqueNetId UniqueNetId); // Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetFriendSteamLevel // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb3bae0
	struct FBPUniqueNetId CreateSteamIDFromString(struct FString SteamID64); // Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.CreateSteamIDFromString // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xb3b9c0
};

// Class AdvancedSteamSessions.AdvancedSteamWorkshopLibrary
// Size: 0x28 (Inherited: 0x28)
struct UAdvancedSteamWorkshopLibrary : UBlueprintFunctionLibrary {

	struct TArray<struct FBPSteamWorkshopID> GetSubscribedWorkshopItems(int32_t NumberOfItems); // Function AdvancedSteamSessions.AdvancedSteamWorkshopLibrary.GetSubscribedWorkshopItems // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xb3c380
	void GetNumSubscribedWorkshopItems(int32_t NumberOfItems); // Function AdvancedSteamSessions.AdvancedSteamWorkshopLibrary.GetNumSubscribedWorkshopItems // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xb3bc40
};

// Class AdvancedSteamSessions.SteamRequestGroupOfficersCallbackProxy
// Size: 0xa0 (Inherited: 0x30)
struct USteamRequestGroupOfficersCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x50]; // 0x50(0x50)

	struct USteamRequestGroupOfficersCallbackProxy* GetSteamGroupOfficerList(struct UObject* WorldContextObject, struct FBPUniqueNetId GroupUniqueNetID); // Function AdvancedSteamSessions.SteamRequestGroupOfficersCallbackProxy.GetSteamGroupOfficerList // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb3c000
};

// Class AdvancedSteamSessions.SteamWSRequestUGCDetailsCallbackProxy
// Size: 0x88 (Inherited: 0x30)
struct USteamWSRequestUGCDetailsCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x38]; // 0x50(0x38)

	struct USteamWSRequestUGCDetailsCallbackProxy* GetWorkshopItemDetails(struct UObject* WorldContextObject, struct FBPSteamWorkshopID WorkShopID); // Function AdvancedSteamSessions.SteamWSRequestUGCDetailsCallbackProxy.GetWorkshopItemDetails // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb3c450
};

