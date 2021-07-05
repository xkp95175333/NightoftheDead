// Class SteamCoreWeb.SteamCoreWeb
// Size: 0x28 (Inherited: 0x28)
struct USteamCoreWeb : UObject {
};

// Class SteamCoreWeb.SteamCoreWebSubsystem
// Size: 0x48 (Inherited: 0x30)
struct USteamCoreWebSubsystem : UGameInstanceSubsystem {
	char pad_30[0x18]; // 0x30(0x18)
};

// Class SteamCoreWeb.SteamCoreWebAsyncAction
// Size: 0x50 (Inherited: 0x30)
struct USteamCoreWebAsyncAction : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate OnCallback; // 0x30(0x10)
	char pad_40[0x10]; // 0x40(0x10)

	void HandleCallback(struct FString data, bool bWasSuccessful); // Function SteamCoreWeb.SteamCoreWebAsyncAction.HandleCallback // (Native|Public) // @ game+0xc0e3b0
};

// Class SteamCoreWeb.SteamCoreWebSettings
// Size: 0x78 (Inherited: 0x38)
struct USteamCoreWebSettings : UDeveloperSettings {
	float AsyncTaskTimeout; // 0x38(0x04)
	int32_t DisabledSubsystems; // 0x3c(0x04)
	bool bDebugging; // 0x40(0x01)
	bool bDevMode; // 0x41(0x01)
	char pad_42[0x6]; // 0x42(0x06)
	struct FString Key; // 0x48(0x10)
	int32_t AppID; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FString DevSteamID; // 0x60(0x10)
	bool bSandboxMode; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

// Class SteamCoreWeb.SteamWebUtilities
// Size: 0x28 (Inherited: 0x28)
struct USteamWebUtilities : UBlueprintFunctionLibrary {

	bool ParseJson(struct FString JsonString, struct TArray<struct FSteamCoreJson> data); // Function SteamCoreWeb.SteamWebUtilities.ParseJson // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xc0e4a0
	struct FString GetProjectKey(); // Function SteamCoreWeb.SteamWebUtilities.GetProjectKey // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xc0dc90
	int32_t GetProjectAppID(); // Function SteamCoreWeb.SteamWebUtilities.GetProjectAppID // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xc0dc60
	struct FString GetDevSteamID(); // Function SteamCoreWeb.SteamWebUtilities.GetDevSteamID // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xc0d8f0
	void FindJsonStrings(struct FString JsonString, struct FString Key, struct TArray<struct FString> Values, enum class ESteamJsonResult Result); // Function SteamCoreWeb.SteamWebUtilities.FindJsonStrings // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xc0c1c0
	void FindJsonString(struct FString JsonString, struct FString Key, struct FString Value, enum class ESteamJsonResult Result); // Function SteamCoreWeb.SteamWebUtilities.FindJsonString // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xc0bfe0
	void FindJsonNumbers(struct FString JsonString, struct FString Key, struct TArray<int32_t> Values, enum class ESteamJsonResult Result); // Function SteamCoreWeb.SteamWebUtilities.FindJsonNumbers // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xc0be00
	void FindJsonNumber(struct FString JsonString, struct FString Key, int32_t Value, enum class ESteamJsonResult Result); // Function SteamCoreWeb.SteamWebUtilities.FindJsonNumber // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xc0bc40
	void FindJsonBools(struct FString JsonString, struct FString Key, struct TArray<bool> Values, enum class ESteamJsonResult Result); // Function SteamCoreWeb.SteamWebUtilities.FindJsonBools // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xc0ba60
	void FindJsonBool(struct FString JsonString, struct FString Key, bool Value, enum class ESteamJsonResult Result); // Function SteamCoreWeb.SteamWebUtilities.FindJsonBool // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xc0b8a0
};

// Class SteamCoreWeb.WebApps
// Size: 0x48 (Inherited: 0x48)
struct UWebApps : USteamCoreWebSubsystem {

	void UpToDateCheck(struct FDelegate callback, int32_t AppID, int32_t Version); // Function SteamCoreWeb.WebApps.UpToDateCheck // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc10980
	void SetAppBuildLive(struct FDelegate callback, struct FString Key, int32_t AppID, int32_t buildID, struct FString betaKey, struct FString Description); // Function SteamCoreWeb.WebApps.SetAppBuildLive // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc101b0
	void GetServersAtAddress(struct FDelegate callback, struct FString addr); // Function SteamCoreWeb.WebApps.GetServersAtAddress // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc0e120
	void GetServerList(struct FDelegate callback, struct FString Key, struct FString Filter, int32_t Limit); // Function SteamCoreWeb.WebApps.GetServerList // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc0dd10
	void GetPlayersBanned(struct FDelegate callback, struct FString Key, int32_t AppID); // Function SteamCoreWeb.WebApps.GetPlayersBanned // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc0d970
	void GetCheatingReports(struct FDelegate callback, struct FString Key, int32_t AppID, int32_t timeBegin, int32_t timeEnd, bool bIncludeReports, bool bIncludeBans, int32_t reportidMin); // Function SteamCoreWeb.WebApps.GetCheatingReports // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc0cf90
	void GetAppList(struct FDelegate callback, struct FString Key); // Function SteamCoreWeb.WebApps.GetAppList // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc0cd00
	void GetAppDepotVersions(struct FDelegate callback, struct FString Key, int32_t AppID); // Function SteamCoreWeb.WebApps.GetAppDepotVersions // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc0ca10
	void GetAppBuilds(struct FDelegate callback, struct FString Key, int32_t AppID, int32_t Count); // Function SteamCoreWeb.WebApps.GetAppBuilds // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc0c6c0
	void GetAppBetas(struct FDelegate callback, struct FString Key, int32_t AppID); // Function SteamCoreWeb.WebApps.GetAppBetas // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc0c3d0
};

// Class SteamCoreWeb.SteamCoreAppsAsyncActionGetAppBetas
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreAppsAsyncActionGetAppBetas : USteamCoreWebAsyncAction {

	struct USteamCoreAppsAsyncActionGetAppBetas* GetAppBetasAsync(struct UObject* WorldContextObject, struct FString Key, int32_t AppID); // Function SteamCoreWeb.SteamCoreAppsAsyncActionGetAppBetas.GetAppBetasAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc0c560
};

// Class SteamCoreWeb.SteamCoreAppsAsyncActionGetAppBuilds
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreAppsAsyncActionGetAppBuilds : USteamCoreWebAsyncAction {

	struct USteamCoreAppsAsyncActionGetAppBuilds* GetAppBuildsAsync(struct UObject* WorldContextObject, struct FString Key, int32_t AppID, int32_t Count); // Function SteamCoreWeb.SteamCoreAppsAsyncActionGetAppBuilds.GetAppBuildsAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc0c880
};

// Class SteamCoreWeb.SteamCoreAppsAsyncActionGetAppDepotVersions
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreAppsAsyncActionGetAppDepotVersions : USteamCoreWebAsyncAction {

	struct USteamCoreAppsAsyncActionGetAppDepotVersions* GetAppDepotVersionsAsync(struct UObject* WorldContextObject, struct FString Key, int32_t AppID); // Function SteamCoreWeb.SteamCoreAppsAsyncActionGetAppDepotVersions.GetAppDepotVersionsAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc0cba0
};

// Class SteamCoreWeb.SteamCoreAppsAsyncActionGetAppList
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreAppsAsyncActionGetAppList : USteamCoreWebAsyncAction {

	struct USteamCoreAppsAsyncActionGetAppList* GetAppListAsync(struct UObject* WorldContextObject, struct FString Key); // Function SteamCoreWeb.SteamCoreAppsAsyncActionGetAppList.GetAppListAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc0ce60
};

// Class SteamCoreWeb.SteamCoreAppsAsyncActionGetCheatingReports
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreAppsAsyncActionGetCheatingReports : USteamCoreWebAsyncAction {

	struct USteamCoreAppsAsyncActionGetCheatingReports* GetCheatingReportsAsync(struct UObject* WorldContextObject, struct FString Key, int32_t AppID, int32_t timeBegin, int32_t timeEnd, bool bIncludeReports, bool bIncludeBans, int32_t reportidMin); // Function SteamCoreWeb.SteamCoreAppsAsyncActionGetCheatingReports.GetCheatingReportsAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc0d640
};

// Class SteamCoreWeb.SteamCoreAppsAsyncActionGetPlayersBanned
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreAppsAsyncActionGetPlayersBanned : USteamCoreWebAsyncAction {

	struct USteamCoreAppsAsyncActionGetPlayersBanned* GetPlayersBannedAsync(struct UObject* WorldContextObject, struct FString Key, int32_t AppID); // Function SteamCoreWeb.SteamCoreAppsAsyncActionGetPlayersBanned.GetPlayersBannedAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc0db00
};

// Class SteamCoreWeb.SteamCoreAppsAsyncActionGetServerList
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreAppsAsyncActionGetServerList : USteamCoreWebAsyncAction {

	struct USteamCoreAppsAsyncActionGetServerList* GetServerListAsync(struct UObject* WorldContextObject, struct FString Key, struct FString Filter, int32_t Limit); // Function SteamCoreWeb.SteamCoreAppsAsyncActionGetServerList.GetServerListAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc0df30
};

// Class SteamCoreWeb.SteamCoreAppsAsyncActionGetServersAtAddress
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreAppsAsyncActionGetServersAtAddress : USteamCoreWebAsyncAction {

	struct USteamCoreAppsAsyncActionGetServersAtAddress* GetServersAtAddressAsync(struct UObject* WorldContextObject, struct FString addr); // Function SteamCoreWeb.SteamCoreAppsAsyncActionGetServersAtAddress.GetServersAtAddressAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc0e280
};

// Class SteamCoreWeb.SteamCoreAppsAsyncActionSetAppBuildLive
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreAppsAsyncActionSetAppBuildLive : USteamCoreWebAsyncAction {

	struct USteamCoreAppsAsyncActionSetAppBuildLive* SetAppBuildLiveAsync(struct UObject* WorldContextObject, struct FString Key, int32_t AppID, int32_t buildID, struct FString betaKey, struct FString Description); // Function SteamCoreWeb.SteamCoreAppsAsyncActionSetAppBuildLive.SetAppBuildLiveAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc104a0
};

// Class SteamCoreWeb.SteamCoreAppsAsyncActionUpToDateCheck
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreAppsAsyncActionUpToDateCheck : USteamCoreWebAsyncAction {

	struct USteamCoreAppsAsyncActionUpToDateCheck* UpToDateCheckAsync(struct UObject* WorldContextObject, int32_t AppID, int32_t Version); // Function SteamCoreWeb.SteamCoreAppsAsyncActionUpToDateCheck.UpToDateCheckAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc10ab0
};

// Class SteamCoreWeb.WebBroadcastService
// Size: 0x48 (Inherited: 0x48)
struct UWebBroadcastService : USteamCoreWebSubsystem {

	void PostGameDataFrame(struct FDelegate callback, struct FString Key, int32_t AppID, struct FString SteamID, struct FString broadcastID, struct FString frameData); // Function SteamCoreWeb.WebBroadcastService.PostGameDataFrame // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc0e5e0
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionPostGameDataFrame
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreWebAsyncActionPostGameDataFrame : USteamCoreWebAsyncAction {

	struct USteamCoreWebAsyncActionPostGameDataFrame* PostGameDataFrameAsync(struct UObject* WorldContextObject, struct FString Key, int32_t AppID, struct FString SteamID, struct FString broadcastID, struct FString frameData); // Function SteamCoreWeb.SteamCoreWebAsyncActionPostGameDataFrame.PostGameDataFrameAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc0e920
};

// Class SteamCoreWeb.WebCheatReporting
// Size: 0x48 (Inherited: 0x48)
struct UWebCheatReporting : USteamCoreWebSubsystem {

	void StartSecureMultiplayerSession(struct FDelegate callback, struct FString Key, struct FString SteamID, int32_t AppID); // Function SteamCoreWeb.WebCheatReporting.StartSecureMultiplayerSession // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc10760
	void RequestVacStatusForUser(struct FDelegate callback, struct FString Key, struct FString SteamID, int32_t AppID, struct FString SessionID); // Function SteamCoreWeb.WebCheatReporting.RequestVacStatusForUser // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc0ff00
	void RequestPlayerGameBan(struct FDelegate callback, struct FString Key, struct FString SteamID, int32_t AppID, struct FString reportID, struct FString cheatDescription, int32_t Duration, bool bDelayBan); // Function SteamCoreWeb.WebCheatReporting.RequestPlayerGameBan // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc0fb30
	void ReportPlayerCheating(struct FDelegate callback, struct FString Key, int32_t AppID, struct FString SteamID, struct FString steamIDReporter, struct FString appData, bool bHeuristic, bool bDetection, bool bPlayerReport, bool bNoReportID, int32_t GameMode, int32_t suspicionStartTime, int32_t Severity); // Function SteamCoreWeb.WebCheatReporting.ReportPlayerCheating // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc0f5f0
	void ReportCheatData(struct FDelegate callback, struct FString Key, struct FString SteamID, int32_t AppID, struct FString pathAndFileName, struct FString webCheatURL, struct FString timeNow, struct FString timeStarted, struct FString timeStopped, struct FString cheatName, int32_t gameProcessID, int32_t cheatProcessID, struct FString cheatParam1, struct FString cheatParam2); // Function SteamCoreWeb.WebCheatReporting.ReportCheatData // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc0ee50
	void RemovePlayerGameBan(struct FDelegate callback, struct FString Key, struct FString SteamID, int32_t AppID); // Function SteamCoreWeb.WebCheatReporting.RemovePlayerGameBan // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc0ec30
	void GetCheatingReports(struct FDelegate callback, struct FString Key, int32_t AppID, int32_t timeEnd, int32_t timeBegin, struct FString reportidMin, bool bIncludeReports, bool bIncludeBans, struct FString SteamID); // Function SteamCoreWeb.WebCheatReporting.GetCheatingReports // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc0d280
	void EndSecureMultiplayerSession(struct FDelegate callback, struct FString Key, struct FString SteamID, int32_t AppID, struct FString SessionID); // Function SteamCoreWeb.WebCheatReporting.EndSecureMultiplayerSession // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc0b5f0
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionReportPlayerCheating
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreWebAsyncActionReportPlayerCheating : USteamCoreWebAsyncAction {

	struct USteamCoreWebAsyncActionReportPlayerCheating* ReportPlayerCheatingAsync(struct UObject* WorldContextObject, struct FString Key, int32_t AppID, struct FString SteamID, struct FString steamIDReporter, struct FString appData, bool bHeuristic, bool bDetection, bool bPlayerReport, bool bNoReportID, int32_t GameMode, int32_t suspicionStartTime, int32_t Severity); // Function SteamCoreWeb.SteamCoreWebAsyncActionReportPlayerCheating.ReportPlayerCheatingAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc177d0
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionRequestPlayerGameBan
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreWebAsyncActionRequestPlayerGameBan : USteamCoreWebAsyncAction {

	struct USteamCoreWebAsyncActionRequestPlayerGameBan* RequestPlayerGameBanAsync(struct UObject* WorldContextObject, struct FString Key, struct FString SteamID, int32_t AppID, struct FString reportID, struct FString cheatDescription, int32_t Duration, bool bDelayBan); // Function SteamCoreWeb.SteamCoreWebAsyncActionRequestPlayerGameBan.RequestPlayerGameBanAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc17ce0
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionRemovePlayerGameBan
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreWebAsyncActionRemovePlayerGameBan : USteamCoreWebAsyncAction {

	struct USteamCoreWebAsyncActionRemovePlayerGameBan* RemovePlayerGameBanAsync(struct UObject* WorldContextObject, struct FString Key, struct FString SteamID, int32_t AppID); // Function SteamCoreWeb.SteamCoreWebAsyncActionRemovePlayerGameBan.RemovePlayerGameBanAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc16e90
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionGetCheatingReports
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreWebAsyncActionGetCheatingReports : USteamCoreWebAsyncAction {

	struct USteamCoreWebAsyncActionGetCheatingReports* GetCheatingReportsAsync(struct UObject* WorldContextObject, struct FString Key, int32_t AppID, int32_t timeEnd, int32_t timeBegin, struct FString reportidMin, bool bIncludeReports, bool bIncludeBans, struct FString SteamID); // Function SteamCoreWeb.SteamCoreWebAsyncActionGetCheatingReports.GetCheatingReportsAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc14b50
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionReportCheatData
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreWebAsyncActionReportCheatData : USteamCoreWebAsyncAction {

	struct USteamCoreWebAsyncActionReportCheatData* ReportCheatDataAsync(struct UObject* WorldContextObject, struct FString Key, struct FString SteamID, int32_t AppID, struct FString pathAndFileName, struct FString webCheatURL, struct FString timeNow, struct FString timeStarted, struct FString timeStopped, struct FString cheatName, int32_t gameProcessID, int32_t cheatProcessID, struct FString cheatParam1, struct FString cheatParam2); // Function SteamCoreWeb.SteamCoreWebAsyncActionReportCheatData.ReportCheatDataAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc17080
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionRequestVacStatusForUser
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreWebAsyncActionRequestVacStatusForUser : USteamCoreWebAsyncAction {

	struct USteamCoreWebAsyncActionRequestVacStatusForUser* RequestVacStatusForUserAsync(struct UObject* WorldContextObject, struct FString Key, struct FString SteamID, int32_t AppID, struct FString SessionID); // Function SteamCoreWeb.SteamCoreWebAsyncActionRequestVacStatusForUser.RequestVacStatusForUserAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc18080
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionStartSecureMultiplayerSession
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreWebAsyncActionStartSecureMultiplayerSession : USteamCoreWebAsyncAction {

	struct USteamCoreWebAsyncActionStartSecureMultiplayerSession* StartSecureMultiplayerSessionAsync(struct UObject* WorldContextObject, struct FString Key, struct FString SteamID, int32_t AppID); // Function SteamCoreWeb.SteamCoreWebAsyncActionStartSecureMultiplayerSession.StartSecureMultiplayerSessionAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc18300
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionEndSecureMultiplayerSession
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreWebAsyncActionEndSecureMultiplayerSession : USteamCoreWebAsyncAction {

	struct USteamCoreWebAsyncActionEndSecureMultiplayerSession* EndSecureMultiplayerSessionAsync(struct UObject* WorldContextObject, struct FString Key, struct FString SteamID, int32_t AppID, struct FString SessionID); // Function SteamCoreWeb.SteamCoreWebAsyncActionEndSecureMultiplayerSession.EndSecureMultiplayerSessionAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc139b0
};

// Class SteamCoreWeb.WebEconMarketService
// Size: 0x48 (Inherited: 0x48)
struct UWebEconMarketService : USteamCoreWebSubsystem {

	void GetPopular(struct FDelegate callback, struct FString Key, struct FString Language, int32_t rows, int32_t Start, int32_t filterAppID, int32_t eCurrency); // Function SteamCoreWeb.WebEconMarketService.GetPopular // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc15270
	void GetMarketEligibility(struct FDelegate callback, struct FString Key, struct FString SteamID); // Function SteamCoreWeb.WebEconMarketService.GetMarketEligibility // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc14ee0
	void GetAssetID(struct FDelegate callback, struct FString Key, int32_t AppID, struct FString listingID); // Function SteamCoreWeb.WebEconMarketService.GetAssetID // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc14740
	void CancelAppListingsForUser(struct FDelegate callback, struct FString Key, int32_t AppID, struct FString SteamID, bool bSynchronous); // Function SteamCoreWeb.WebEconMarketService.CancelAppListingsForUser // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc12df0
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionGetMarketEligibility
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreWebAsyncActionGetMarketEligibility : USteamCoreWebAsyncAction {

	struct USteamCoreWebAsyncActionGetMarketEligibility* GetMarketEligibilityAsync(struct UObject* WorldContextObject, struct FString Key, struct FString SteamID); // Function SteamCoreWeb.SteamCoreWebAsyncActionGetMarketEligibility.GetMarketEligibilityAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc150c0
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionCancelAppListingsForUser
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreWebAsyncActionCancelAppListingsForUser : USteamCoreWebAsyncAction {

	struct USteamCoreWebAsyncActionCancelAppListingsForUser* CancelAppListingsForUserAsync(struct UObject* WorldContextObject, struct FString Key, int32_t AppID, struct FString SteamID, bool bSynchronous); // Function SteamCoreWeb.SteamCoreWebAsyncActionCancelAppListingsForUser.CancelAppListingsForUserAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc13060
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionGetAssetID
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreWebAsyncActionGetAssetID : USteamCoreWebAsyncAction {

	struct USteamCoreWebAsyncActionGetAssetID* GetAssetIDAsync(struct UObject* WorldContextObject, struct FString Key, int32_t AppID, struct FString listingID); // Function SteamCoreWeb.SteamCoreWebAsyncActionGetAssetID.GetAssetIDAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc14960
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionGetPopular
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreWebAsyncActionGetPopular : USteamCoreWebAsyncAction {

	struct USteamCoreWebAsyncActionGetPopular* GetPopularAsync(struct UObject* WorldContextObject, struct FString Key, struct FString Language, int32_t rows, int32_t Start, int32_t filterAppID, int32_t eCurrency); // Function SteamCoreWeb.SteamCoreWebAsyncActionGetPopular.GetPopularAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc15550
};

// Class SteamCoreWeb.WebEconService
// Size: 0x48 (Inherited: 0x48)
struct UWebEconService : USteamCoreWebSubsystem {

	void GetTradeOffersSummary(struct FDelegate callback, struct FString Key, int32_t timeLastVisit); // Function SteamCoreWeb.WebEconService.GetTradeOffersSummary // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc16ba0
	void GetTradeOffers(struct FDelegate callback, struct FString Key, bool bGetSentOffers, bool bGetReceivedOffers, bool bGetDescriptions, struct FString Language, bool bActiveOnly, bool bHistoricalOnly, int32_t timeHistoricalCutoff); // Function SteamCoreWeb.WebEconService.GetTradeOffers // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc164b0
	void GetTradeOffer(struct FDelegate callback, struct FString Key, struct FString tradeOfferID, struct FString Language); // Function SteamCoreWeb.WebEconService.GetTradeOffer // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc16000
	void GetTradeHistory(struct FDelegate callback, struct FString Key, int32_t maxTrades, int32_t startAfterTime, struct FString startAfterTradeID, bool bNavigatingBack, bool bGetDescriptions, struct FString Language, bool bIncludeFailed, bool bIncludeTotal); // Function SteamCoreWeb.WebEconService.GetTradeHistory // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc15800
	void FlushInventoryCache(struct FDelegate callback, struct FString Key, struct FString SteamID, int32_t AppID, struct FString contextID); // Function SteamCoreWeb.WebEconService.FlushInventoryCache // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc14210
	void FlushContextCache(struct FDelegate callback, struct FString Key, int32_t AppID); // Function SteamCoreWeb.WebEconService.FlushContextCache // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc13f20
	void FlushAssetAppearanceCache(struct FDelegate callback, struct FString Key, int32_t AppID); // Function SteamCoreWeb.WebEconService.FlushAssetAppearanceCache // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc13c30
	void DeclineTradeOffer(struct FDelegate callback, struct FString Key, struct FString tradeOfferID); // Function SteamCoreWeb.WebEconService.DeclineTradeOffer // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc13620
	void CancelTradeOffer(struct FDelegate callback, struct FString Key, struct FString tradeOfferID); // Function SteamCoreWeb.WebEconService.CancelTradeOffer // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc13290
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionGetTradeHistory
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreWebAsyncActionGetTradeHistory : USteamCoreWebAsyncAction {

	struct USteamCoreWebAsyncActionGetTradeHistory* GetTradeHistoryAsync(struct UObject* WorldContextObject, struct FString Key, int32_t maxTrades, int32_t startAfterTime, struct FString startAfterTradeID, bool bNavigatingBack, bool bGetDescriptions, struct FString Language, bool bIncludeFailed, bool bIncludeTotal); // Function SteamCoreWeb.SteamCoreWebAsyncActionGetTradeHistory.GetTradeHistoryAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc15c10
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionFlushInventoryCache
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreWebAsyncActionFlushInventoryCache : USteamCoreWebAsyncAction {

	struct USteamCoreWebAsyncActionFlushInventoryCache* FlushInventoryCacheAsync(struct UObject* WorldContextObject, struct FString Key, struct FString SteamID, int32_t AppID, struct FString contextID); // Function SteamCoreWeb.SteamCoreWebAsyncActionFlushInventoryCache.FlushInventoryCacheAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc144c0
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionFlushAssetAppearanceCache
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreWebAsyncActionFlushAssetAppearanceCache : USteamCoreWebAsyncAction {

	struct USteamCoreWebAsyncActionFlushAssetAppearanceCache* FlushAssetAppearanceCacheAsync(struct UObject* WorldContextObject, struct FString Key, int32_t AppID); // Function SteamCoreWeb.SteamCoreWebAsyncActionFlushAssetAppearanceCache.FlushAssetAppearanceCacheAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc13dc0
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionFlushContextCache
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreWebAsyncActionFlushContextCache : USteamCoreWebAsyncAction {

	struct USteamCoreWebAsyncActionFlushContextCache* FlushContextCacheAsync(struct UObject* WorldContextObject, struct FString Key, int32_t AppID); // Function SteamCoreWeb.SteamCoreWebAsyncActionFlushContextCache.FlushContextCacheAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc140b0
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionGetTradeOffers
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreWebAsyncActionGetTradeOffers : USteamCoreWebAsyncAction {

	struct USteamCoreWebAsyncActionGetTradeOffers* GetTradeOffersAsync(struct UObject* WorldContextObject, struct FString Key, bool bGetSentOffers, bool bGetReceivedOffers, bool bGetDescriptions, struct FString Language, bool bActiveOnly, bool bHistoricalOnly, int32_t timeHistoricalCutoff); // Function SteamCoreWeb.SteamCoreWebAsyncActionGetTradeOffers.GetTradeOffersAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc16830
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionGetTradeOffer
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreWebAsyncActionGetTradeOffer : USteamCoreWebAsyncAction {

	struct USteamCoreWebAsyncActionGetTradeOffer* GetTradeOfferAsync(struct UObject* WorldContextObject, struct FString Key, struct FString tradeOfferID, struct FString Language); // Function SteamCoreWeb.SteamCoreWebAsyncActionGetTradeOffer.GetTradeOfferAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc16270
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionGetTradeOffersSummary
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreWebAsyncActionGetTradeOffersSummary : USteamCoreWebAsyncAction {

	struct USteamCoreWebAsyncActionGetTradeOffersSummary* GetTradeOffersSummaryAsync(struct UObject* WorldContextObject, struct FString Key, int32_t timeLastVisit); // Function SteamCoreWeb.SteamCoreWebAsyncActionGetTradeOffersSummary.GetTradeOffersSummaryAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc16d30
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionDeclineTradeOffer
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreWebAsyncActionDeclineTradeOffer : USteamCoreWebAsyncAction {

	struct USteamCoreWebAsyncActionDeclineTradeOffer* DeclineTradeOfferAsync(struct UObject* WorldContextObject, struct FString Key, struct FString tradeOfferID); // Function SteamCoreWeb.SteamCoreWebAsyncActionDeclineTradeOffer.DeclineTradeOfferAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc13800
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionCancelTradeOffer
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreWebAsyncActionCancelTradeOffer : USteamCoreWebAsyncAction {

	struct USteamCoreWebAsyncActionCancelTradeOffer* CancelTradeOfferAsync(struct UObject* WorldContextObject, struct FString Key, struct FString tradeOfferID); // Function SteamCoreWeb.SteamCoreWebAsyncActionCancelTradeOffer.CancelTradeOfferAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc13470
};

// Class SteamCoreWeb.WebGameInventory
// Size: 0x48 (Inherited: 0x48)
struct UWebGameInventory : USteamCoreWebSubsystem {

	void UpdateItemDefs(); // Function SteamCoreWeb.WebGameInventory.UpdateItemDefs // (Final|Native|Public|BlueprintCallable) // @ game+0xc20320
	void SupportGetAssetHistory(struct FDelegate callback, struct FString Key, int32_t AppID, struct FString assetID, struct FString contextID); // Function SteamCoreWeb.WebGameInventory.SupportGetAssetHistory // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc1fdf0
	void HistoryExecuteCommands(struct FDelegate callback, struct FString Key, int32_t AppID, struct FString SteamID, struct FString contextID, int32_t ActorId); // Function SteamCoreWeb.WebGameInventory.HistoryExecuteCommands // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc1ee90
	void GetUserHistory(struct FDelegate callback, struct FString Key, int32_t AppID, struct FString SteamID, struct FString contextID, int32_t StartTime, int32_t EndTime); // Function SteamCoreWeb.WebGameInventory.GetUserHistory // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc1e5b0
	void GetHistoryCommandDetails(struct FDelegate callback, struct FString Key, int32_t AppID, struct FString SteamID, struct FString Command, struct FString contextID, struct FString arguments); // Function SteamCoreWeb.WebGameInventory.GetHistoryCommandDetails // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc1cee0
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionGetHistoryCommandDetails
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreWebAsyncActionGetHistoryCommandDetails : USteamCoreWebAsyncAction {

	struct USteamCoreWebAsyncActionGetHistoryCommandDetails* GetHistoryCommandDetailsAsync(struct UObject* WorldContextObject, struct FString Key, int32_t AppID, struct FString SteamID, struct FString Command, struct FString contextID, struct FString arguments); // Function SteamCoreWeb.SteamCoreWebAsyncActionGetHistoryCommandDetails.GetHistoryCommandDetailsAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc1d2b0
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionGetUserHistory
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreWebAsyncActionGetUserHistory : USteamCoreWebAsyncAction {

	struct USteamCoreWebAsyncActionGetUserHistory* GetUserHistoryAsync(struct UObject* WorldContextObject, struct FString Key, int32_t AppID, struct FString SteamID, struct FString contextID, int32_t StartTime, int32_t EndTime); // Function SteamCoreWeb.SteamCoreWebAsyncActionGetUserHistory.GetUserHistoryAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc1e8e0
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionHistoryExecuteCommand
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreWebAsyncActionHistoryExecuteCommand : USteamCoreWebAsyncAction {

	struct USteamCoreWebAsyncActionHistoryExecuteCommand* HistoryExecuteCommandAsync(struct UObject* WorldContextObject, struct FString Key, int32_t AppID, struct FString SteamID, struct FString contextID, int32_t ActorId); // Function SteamCoreWeb.SteamCoreWebAsyncActionHistoryExecuteCommand.HistoryExecuteCommandAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc1ebe0
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionSupportGetAssetHistory
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreWebAsyncActionSupportGetAssetHistory : USteamCoreWebAsyncAction {

	struct USteamCoreWebAsyncActionSupportGetAssetHistory* SupportGetAssetHistoryAsync(struct UObject* WorldContextObject, struct FString Key, int32_t AppID, struct FString assetID, struct FString contextID); // Function SteamCoreWeb.SteamCoreWebAsyncActionSupportGetAssetHistory.SupportGetAssetHistoryAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc200a0
};

// Class SteamCoreWeb.WebGameNotificationsService
// Size: 0x48 (Inherited: 0x48)
struct UWebGameNotificationsService : USteamCoreWebSubsystem {

	void UpdateSession(struct FDelegate callback, struct FString Key, struct FString SessionID, int32_t AppID, struct FString Title, struct FString users, struct FString SteamID); // Function SteamCoreWeb.WebGameNotificationsService.UpdateSession // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc20340
	void RequestNotifications(struct FDelegate callback, struct FString Key, struct FString SteamID, int32_t AppID); // Function SteamCoreWeb.WebGameNotificationsService.RequestNotifications // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc1f500
	void GetSessionDetailsForApp(struct FDelegate callback, struct FString Key, struct FString sessions, int32_t AppID, struct FString Language); // Function SteamCoreWeb.WebGameNotificationsService.GetSessionDetailsForApp // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc1e080
	void EnumerateSessionsForApp(struct FDelegate callback, struct FString Key, int32_t AppID, struct FString SteamID, bool bIncludeAllUserMessages, bool bIncludeAuthUserMessage, struct FString Language); // Function SteamCoreWeb.WebGameNotificationsService.EnumerateSessionsForApp // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc1c360
	void DeleteSessionBatch(struct FDelegate callback, struct FString Key, struct FString SessionID, int32_t AppID); // Function SteamCoreWeb.WebGameNotificationsService.DeleteSessionBatch // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc1bf50
	void DeleteSession(struct FDelegate callback, struct FString Key, struct FString SessionID, int32_t AppID, struct FString SteamID); // Function SteamCoreWeb.WebGameNotificationsService.DeleteSession // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc1ba20
	void CreateSession(struct FDelegate callback, struct FString Key, int32_t AppID, struct FString Context, struct FString Title, struct FString users, struct FString SteamID); // Function SteamCoreWeb.WebGameNotificationsService.CreateSession // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc1b0d0
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionCreateSession
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreWebAsyncActionCreateSession : USteamCoreWebAsyncAction {

	struct USteamCoreWebAsyncActionCreateSession* CreateSessionAsync(struct UObject* WorldContextObject, struct FString Key, int32_t AppID, struct FString Context, struct FString Title, struct FString users, struct FString SteamID); // Function SteamCoreWeb.SteamCoreWebAsyncActionCreateSession.CreateSessionAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc1b4a0
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionUpdateSession
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreWebAsyncActionUpdateSession : USteamCoreWebAsyncAction {

	struct USteamCoreWebAsyncActionUpdateSession* UpdateSessionAsync(struct UObject* WorldContextObject, struct FString Key, struct FString SessionID, int32_t AppID, struct FString Title, struct FString users, struct FString SteamID); // Function SteamCoreWeb.SteamCoreWebAsyncActionUpdateSession.UpdateSessionAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc20710
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionEnumerateSessionsForApp
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreWebAsyncActionEnumerateSessionsForApp : USteamCoreWebAsyncAction {

	struct USteamCoreWebAsyncActionEnumerateSessionsForApp* EnumerateSessionsForAppAsync(struct UObject* WorldContextObject, struct FString Key, int32_t AppID, struct FString SteamID, bool bIncludeAllUserMessages, bool bIncludeAuthUserMessage, struct FString Language); // Function SteamCoreWeb.SteamCoreWebAsyncActionEnumerateSessionsForApp.EnumerateSessionsForAppAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc1c6a0
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionGetSessionDetailsForApp
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreWebAsyncActionGetSessionDetailsForApp : USteamCoreWebAsyncAction {

	struct USteamCoreWebAsyncActionGetSessionDetailsForApp* GetSessionDetailsForAppAsync(struct UObject* WorldContextObject, struct FString Key, struct FString sessions, int32_t AppID, struct FString Language); // Function SteamCoreWeb.SteamCoreWebAsyncActionGetSessionDetailsForApp.GetSessionDetailsForAppAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc1e330
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionRequestNotifications
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreWebAsyncActionRequestNotifications : USteamCoreWebAsyncAction {

	struct USteamCoreWebAsyncActionRequestNotifications* RequestNotificationsAsync(struct UObject* WorldContextObject, struct FString Key, struct FString SteamID, int32_t AppID); // Function SteamCoreWeb.SteamCoreWebAsyncActionRequestNotifications.RequestNotificationsAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc1f720
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionDeleteSession
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreWebAsyncActionDeleteSession : USteamCoreWebAsyncAction {

	struct USteamCoreWebAsyncActionDeleteSession* DeleteSessionAsync(struct UObject* WorldContextObject, struct FString Key, struct FString SessionID, int32_t AppID, struct FString SteamID); // Function SteamCoreWeb.SteamCoreWebAsyncActionDeleteSession.DeleteSessionAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc1bcd0
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionDeleteSessionBatch
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreWebAsyncActionDeleteSessionBatch : USteamCoreWebAsyncAction {

	struct USteamCoreWebAsyncActionDeleteSessionBatch* DeleteSessionBatchAsync(struct UObject* WorldContextObject, struct FString Key, struct FString SessionID, int32_t AppID); // Function SteamCoreWeb.SteamCoreWebAsyncActionDeleteSessionBatch.DeleteSessionBatchAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc1c170
};

// Class SteamCoreWeb.WebGameServersService
// Size: 0x48 (Inherited: 0x48)
struct UWebGameServersService : USteamCoreWebSubsystem {

	void SetMemo(struct FDelegate callback, struct FString Key, struct FString SteamID, struct FString memo); // Function SteamCoreWeb.WebGameServersService.SetMemo // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc1fb80
	void SetBanStatus(struct FDelegate callback, struct FString Key, struct FString SteamID, bool bBanned, int32_t banSeconds); // Function SteamCoreWeb.WebGameServersService.SetBanStatus // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc1f910
	void ResetLoginToken(struct FDelegate callback, struct FString Key, struct FString SteamID); // Function SteamCoreWeb.WebGameServersService.ResetLoginToken // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc1b840
	void QueryLoginToken(struct FDelegate callback, struct FString Key, struct FString loginToken); // Function SteamCoreWeb.WebGameServersService.QueryLoginToken // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc1b840
	void GetServerSteamIDsByIP(struct FDelegate callback, struct FString Key, struct FString serverIP); // Function SteamCoreWeb.WebGameServersService.GetServerSteamIDsByIP // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc1b840
	void GetServerIPsBySteamID(struct FDelegate callback, struct FString Key, struct FString serverSteamID); // Function SteamCoreWeb.WebGameServersService.GetServerIPsBySteamID // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc1b840
	void GetAccountPublicInfo(struct FDelegate callback, struct FString Key, struct FString SteamID); // Function SteamCoreWeb.WebGameServersService.GetAccountPublicInfo // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc1b840
	void GetAccountList(struct FDelegate callback, struct FString Key); // Function SteamCoreWeb.WebGameServersService.GetAccountList // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc1cd80
	void DeleteAccount(struct FDelegate callback, struct FString Key, struct FString SteamID); // Function SteamCoreWeb.WebGameServersService.DeleteAccount // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc1b840
	void CreateAccount(struct FDelegate callback, struct FString Key, int32_t AppID, struct FString memo); // Function SteamCoreWeb.WebGameServersService.CreateAccount // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc1aeb0
};

// Class SteamCoreWeb.WebInventoryService
// Size: 0x48 (Inherited: 0x48)
struct UWebInventoryService : USteamCoreWebSubsystem {

	void ModifyItems(struct FDelegate callback, struct FString Key, int32_t AppID, struct FString inputJson, struct FString SteamID, int32_t Timestamp, struct FString updates); // Function SteamCoreWeb.WebInventoryService.ModifyItems // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc1f180
	void GetQuantity(struct FDelegate callback, struct FString Key, int32_t AppID, struct FString SteamID, struct TArray<int32_t> itemdefIDs, bool bForce); // Function SteamCoreWeb.WebInventoryService.GetQuantity // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc1dd80
	void GetPriceSheet(struct FDelegate callback, struct FString Key, int32_t Currency); // Function SteamCoreWeb.WebInventoryService.GetPriceSheet // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc1dbf0
	void GetItemDefs(struct FDelegate callback, struct FString Key, int32_t AppID, struct FString modifiedSince, struct TArray<int32_t> itemdefIDs, struct TArray<int32_t> workshopIDs, int32_t cacheMaxAgeSeconds); // Function SteamCoreWeb.WebInventoryService.GetItemDefs // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc1d870
	void GetInventory(struct FDelegate callback, struct FString Key, int32_t AppID, struct FString SteamID); // Function SteamCoreWeb.WebInventoryService.GetInventory // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc1d650
	void ExchangeItem(struct FDelegate callback, struct FString Key, int32_t AppID, struct FString SteamID, struct TArray<int32_t> materialsItemID, struct TArray<int32_t> materialsQuantity, struct FString outputItemdefID); // Function SteamCoreWeb.WebInventoryService.ExchangeItem // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc1c9b0
	void ConsumeItem(struct FDelegate callback, struct FString Key, int32_t AppID, struct FString ItemId, struct FString Quantity, struct FString SteamID, struct FString RequestID); // Function SteamCoreWeb.WebInventoryService.ConsumeItem // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc1aae0
	void Consolidate(struct FDelegate callback, struct FString Key, int32_t AppID, struct FString SteamID, struct TArray<int32_t> itemdefIDs, bool bForce); // Function SteamCoreWeb.WebInventoryService.Consolidate // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc1a7e0
	void AddPromoItem(struct FDelegate callback, struct FString Key, int32_t AppID, int32_t itemdefID, struct FString itemPropsJson, struct FString SteamID, bool bNotify, struct FString RequestID); // Function SteamCoreWeb.WebInventoryService.AddPromoItem // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc1a410
	void AddItem(struct FDelegate callback, struct FString Key, int32_t AppID, struct TArray<int32_t> itemdefID, struct FString itemPropsJson, struct FString SteamID, bool bNotify, struct FString RequestID, bool bTradeRestriction); // Function SteamCoreWeb.WebInventoryService.AddItem // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc19f90
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionAddItem
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreWebAsyncActionAddItem : USteamCoreWebAsyncAction {

	struct USteamCoreWebAsyncActionAddItem* AddItemAsync(struct UObject* WorldContextObject, struct FString Key, int32_t AppID, struct TArray<int32_t> itemdefID, struct FString itemPropsJson, struct FString SteamID, bool bNotify, struct FString RequestID, bool bTradeRestriction); // Function SteamCoreWeb.SteamCoreWebAsyncActionAddItem.AddItemAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc228d0
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionAddPromoItem
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreWebAsyncActionAddPromoItem : USteamCoreWebAsyncAction {

	struct USteamCoreWebAsyncActionAddPromoItem* AddPromoItemAsync(struct UObject* WorldContextObject, struct FString Key, int32_t AppID, int32_t itemdefID, struct FString itemPropsJson, struct FString SteamID, bool bNotify, struct FString RequestID); // Function SteamCoreWeb.SteamCoreWebAsyncActionAddPromoItem.AddPromoItemAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc22d00
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionConsumeItem
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreWebAsyncActionConsumeItem : USteamCoreWebAsyncAction {

	struct USteamCoreWebAsyncActionConsumeItem* ConsumeItemAsync(struct UObject* WorldContextObject, struct FString Key, int32_t AppID, struct FString ItemId, struct FString Quantity, struct FString SteamID, struct FString RequestID); // Function SteamCoreWeb.SteamCoreWebAsyncActionConsumeItem.ConsumeItemAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc23960
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionExchangeItem
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreWebAsyncActionExchangeItem : USteamCoreWebAsyncAction {

	struct USteamCoreWebAsyncActionExchangeItem* ExchangeItemAsync(struct UObject* WorldContextObject, struct FString Key, int32_t AppID, struct FString SteamID, struct TArray<int32_t> materialsItemID, struct TArray<int32_t> materialsQuantity, struct FString outputItemdefID); // Function SteamCoreWeb.SteamCoreWebAsyncActionExchangeItem.ExchangeItemAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc24610
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionGetInventory
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreWebAsyncActionGetInventory : USteamCoreWebAsyncAction {

	struct USteamCoreWebAsyncActionGetInventory* GetInventoryAsync(struct UObject* WorldContextObject, struct FString Key, int32_t AppID, struct FString SteamID); // Function SteamCoreWeb.SteamCoreWebAsyncActionGetInventory.GetInventoryAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc253e0
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionGetItemDefs
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreWebAsyncActionGetItemDefs : USteamCoreWebAsyncAction {

	struct USteamCoreWebAsyncActionGetItemDefs* GetItemDefsAsync(struct UObject* WorldContextObject, struct FString Key, int32_t AppID, struct FString modifiedSince, struct TArray<int32_t> itemdefIDs, struct TArray<int32_t> workshopIDs, int32_t cacheMaxAgeSeconds); // Function SteamCoreWeb.SteamCoreWebAsyncActionGetItemDefs.GetItemDefsAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc255d0
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionGetPriceSheet
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreWebAsyncActionGetPriceSheet : USteamCoreWebAsyncAction {

	struct USteamCoreWebAsyncActionGetPriceSheet* GetPriceSheetAsync(struct UObject* WorldContextObject, struct FString Key, int32_t Currency); // Function SteamCoreWeb.SteamCoreWebAsyncActionGetPriceSheet.GetPriceSheetAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc26220
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionConsolidate
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreWebAsyncActionConsolidate : USteamCoreWebAsyncAction {

	struct USteamCoreWebAsyncActionConsolidate* ConsolidateAsync(struct UObject* WorldContextObject, struct FString Key, int32_t AppID, struct FString SteamID, struct TArray<int32_t> itemdefIDs, bool bForce); // Function SteamCoreWeb.SteamCoreWebAsyncActionConsolidate.ConsolidateAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc23690
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionGetQuantity
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreWebAsyncActionGetQuantity : USteamCoreWebAsyncAction {

	struct USteamCoreWebAsyncActionGetQuantity* GetQuantityAsync(struct UObject* WorldContextObject, struct FString Key, int32_t AppID, struct FString SteamID, struct TArray<int32_t> itemdefIDs, bool bForce); // Function SteamCoreWeb.SteamCoreWebAsyncActionGetQuantity.GetQuantityAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc26380
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionModifyItems
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreWebAsyncActionModifyItems : USteamCoreWebAsyncAction {

	struct USteamCoreWebAsyncActionModifyItems* ModifyItemsAsync(struct UObject* WorldContextObject, struct FString Key, int32_t AppID, struct FString inputJson, struct FString SteamID, int32_t Timestamp, struct FString updates); // Function SteamCoreWeb.SteamCoreWebAsyncActionModifyItems.ModifyItemsAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc28350
};

// Class SteamCoreWeb.WebLeaderboards
// Size: 0x48 (Inherited: 0x48)
struct UWebLeaderboards : USteamCoreWebSubsystem {

	void SetLeaderboardScore(struct FDelegate callback, struct FString Key, int32_t AppID, int32_t leaderbordID, struct FString SteamID, int32_t Score, struct TArray<char> Details, struct FString scoreMethod); // Function SteamCoreWeb.WebLeaderboards.SetLeaderboardScore // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc29610
	void ResetLeaderboard(struct FDelegate callback, struct FString Key, int32_t AppID, int32_t leaderbordID); // Function SteamCoreWeb.WebLeaderboards.ResetLeaderboard // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc292c0
	void GetLeaderboardsForGame(struct FDelegate callback, struct FString Key, int32_t AppID); // Function SteamCoreWeb.WebLeaderboards.GetLeaderboardsForGame // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc25f30
	void GetLeaderboardEntries(struct FDelegate callback, struct FString Key, int32_t AppID, int32_t rangeStart, int32_t rangeEnd, int32_t leaderboardID, int32_t dataRequest, struct FString SteamID); // Function SteamCoreWeb.WebLeaderboards.GetLeaderboardEntries // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc25920
	void FindOrCreateLeaderboard(struct FDelegate callback, struct FString Key, int32_t AppID, struct FString Name, struct FString SortMethod, struct FString displayType, bool bCreateIfNotFound, bool bOnlyTrustedWrites, bool bOnlyFriendsReads); // Function SteamCoreWeb.WebLeaderboards.FindOrCreateLeaderboard // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc24bd0
	void DeleteLeaderboard(struct FDelegate callback, struct FString Key, int32_t AppID, struct FString Name); // Function SteamCoreWeb.WebLeaderboards.DeleteLeaderboard // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc24200
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionDeleteLeaderboard
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreWebAsyncActionDeleteLeaderboard : USteamCoreWebAsyncAction {

	struct USteamCoreWebAsyncActionDeleteLeaderboard* DeleteLeaderboardAsync(struct UObject* WorldContextObject, struct FString Key, int32_t AppID, struct FString Name); // Function SteamCoreWeb.SteamCoreWebAsyncActionDeleteLeaderboard.DeleteLeaderboardAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc24420
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionFindOrCreateLeaderboard
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreWebAsyncActionFindOrCreateLeaderboard : USteamCoreWebAsyncAction {

	struct USteamCoreWebAsyncActionFindOrCreateLeaderboard* FindOrCreateLeaderboardAsync(struct UObject* WorldContextObject, struct FString Key, int32_t AppID, struct FString Name, struct FString SortMethod, struct FString displayType, bool bCreateIfNotFound, bool bOnlyTrustedWrites, bool bOnlyFriendsReads); // Function SteamCoreWeb.SteamCoreWebAsyncActionFindOrCreateLeaderboard.FindOrCreateLeaderboardAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc24ff0
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionGetLeaderboardEntries
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreWebAsyncActionGetLeaderboardEntries : USteamCoreWebAsyncAction {

	struct USteamCoreWebAsyncActionGetLeaderboardEntries* GetLeaderboardEntriesAsync(struct UObject* WorldContextObject, struct FString Key, int32_t AppID, int32_t rangeStart, int32_t rangeEnd, int32_t leaderboardID, int32_t dataRequest, struct FString SteamID); // Function SteamCoreWeb.SteamCoreWebAsyncActionGetLeaderboardEntries.GetLeaderboardEntriesAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc25c40
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionGetLeaderboardsForGame
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreWebAsyncActionGetLeaderboardsForGame : USteamCoreWebAsyncAction {

	struct USteamCoreWebAsyncActionGetLeaderboardsForGame* GetLeaderboardsForGameAsync(struct UObject* WorldContextObject, struct FString Key, int32_t AppID); // Function SteamCoreWeb.SteamCoreWebAsyncActionGetLeaderboardsForGame.GetLeaderboardsForGameAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc260c0
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionResetLeaderboard
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreWebAsyncActionResetLeaderboard : USteamCoreWebAsyncAction {

	struct USteamCoreWebAsyncActionResetLeaderboard* ResetLeaderboardAsync(struct UObject* WorldContextObject, struct FString Key, int32_t AppID, int32_t leaderbordID); // Function SteamCoreWeb.SteamCoreWebAsyncActionResetLeaderboard.ResetLeaderboardAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc29480
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionSetLeaderboardScore
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreWebAsyncActionSetLeaderboardScore : USteamCoreWebAsyncAction {

	struct USteamCoreWebAsyncActionSetLeaderboardScore* SetLeaderboardScoreAsync(struct UObject* WorldContextObject, struct FString Key, int32_t AppID, int32_t leaderbordID, struct FString SteamID, int32_t Score, struct TArray<char> Details, struct FString scoreMethod); // Function SteamCoreWeb.SteamCoreWebAsyncActionSetLeaderboardScore.SetLeaderboardScoreAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc299d0
};

// Class SteamCoreWeb.WebLobbyMatchmakingService
// Size: 0x48 (Inherited: 0x48)
struct UWebLobbyMatchmakingService : USteamCoreWebSubsystem {

	void RemoveUserFromLobby(struct FDelegate callback, struct FString Key, int32_t AppID, struct FString steamIDToRemove, struct FString SteamIDLobby, struct FString inputJson); // Function SteamCoreWeb.WebLobbyMatchmakingService.RemoveUserFromLobby // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc28f80
	void CreateLobby(struct FDelegate callback, struct FString Key, int32_t AppID, int32_t maxMembers, enum class ESteamCoreWebLobbyType lobbyType, struct FString lobbyName, struct FString inputJson, struct TArray<struct FString> steamIDInvitedMembers, struct FString lobbyMetaData); // Function SteamCoreWeb.WebLobbyMatchmakingService.CreateLobby // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc23d00
};

// Class SteamCoreWeb.WebMicroTxn
// Size: 0x48 (Inherited: 0x48)
struct UWebMicroTxn : USteamCoreWebSubsystem {

	void RefundTxn(struct FDelegate callback, struct FString Key, struct FString OrderId, int32_t AppID); // Function SteamCoreWeb.WebMicroTxn.RefundTxn // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc28d60
	void QueryTxn(struct FDelegate callback, struct FString Key, int32_t AppID, struct FString OrderId, struct FString transID); // Function SteamCoreWeb.WebMicroTxn.QueryTxn // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc28ab0
	void ProcessAgreement(struct FDelegate callback, struct FString Key, struct FString OrderId, struct FString SteamID, struct FString agreementID, int32_t AppID, int32_t Amount, struct FString Currency); // Function SteamCoreWeb.WebMicroTxn.ProcessAgreement // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc28690
	struct FString MakeTransactionID(); // Function SteamCoreWeb.WebMicroTxn.MakeTransactionID // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc282d0
	void InitTxn(struct FDelegate callback, struct FString Key, struct FString OrderId, struct FString SteamID, int32_t AppID, struct FString Language, struct FString Currency, struct FString userSession, struct FString ipaddress, struct TArray<int32_t> ItemId, struct TArray<int32_t> Quantity, struct TArray<struct FString> Amount, struct TArray<struct FString> Description, struct TArray<struct FString> Category, struct TArray<int32_t> associatedBundle, struct TArray<struct FString> billingType, struct TArray<struct FString> StartDate, struct TArray<struct FString> EndDate, struct TArray<struct FString> Period, struct TArray<int32_t> Frequency, struct TArray<struct FString> recurringAmt, struct TArray<int32_t> bundleCount, struct TArray<int32_t> bundleID, struct TArray<int32_t> bundleQty, struct TArray<struct FString> bundleDesc, struct TArray<struct FString> bundleCategory); // Function SteamCoreWeb.WebMicroTxn.InitTxn // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc26d80
	void GetUserInfo(struct FDelegate callback, struct FString Key, struct FString SteamID, int32_t ipaddress); // Function SteamCoreWeb.WebMicroTxn.GetUserInfo // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc26b60
	void GetUserAgreementInfo(struct FDelegate callback, struct FString Key, struct FString SteamID, int32_t AppID); // Function SteamCoreWeb.WebMicroTxn.GetUserAgreementInfo // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc26940
	void GetReport(struct FDelegate callback, struct FString Key, int32_t AppID, struct FString Time, struct FString Type, int32_t MaxResults); // Function SteamCoreWeb.WebMicroTxn.GetReport // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc26650
	void FinalizeTxn(struct FDelegate callback, struct FString Key, struct FString OrderId, int32_t AppID); // Function SteamCoreWeb.WebMicroTxn.FinalizeTxn // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc249b0
	void CancelAgreement(struct FDelegate callback, struct FString Key, struct FString SteamID, struct FString agreementID, int32_t AppID); // Function SteamCoreWeb.WebMicroTxn.CancelAgreement // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc233e0
	void AdjustAgreement(struct FDelegate callback, struct FString Key, struct FString SteamID, struct FString agreementID, int32_t AppID, struct FString nextProcessDate); // Function SteamCoreWeb.WebMicroTxn.AdjustAgreement // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc230a0
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionAdjustAgreement
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreWebAsyncActionAdjustAgreement : USteamCoreWebAsyncAction {

	struct USteamCoreWebAsyncActionAdjustAgreement* AdjustAgreementAsync(struct UObject* WorldContextObject, struct FString Key, struct FString SteamID, struct FString agreementID, int32_t AppID, struct FString nextProcessDate); // Function SteamCoreWeb.SteamCoreWebAsyncActionAdjustAgreement.AdjustAgreementAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc2bb00
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionCancelAgreement
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreWebAsyncActionCancelAgreement : USteamCoreWebAsyncAction {

	struct USteamCoreWebAsyncActionCancelAgreement* CancelAgreementAsync(struct UObject* WorldContextObject, struct FString Key, struct FString SteamID, struct FString agreementID, int32_t AppID); // Function SteamCoreWeb.SteamCoreWebAsyncActionCancelAgreement.CancelAgreementAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc2be10
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionFinalizeTxn
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreWebAsyncActionFinalizeTxn : USteamCoreWebAsyncAction {

	struct USteamCoreWebAsyncActionFinalizeTxn* FinalizeTxnAsync(struct UObject* WorldContextObject, struct FString Key, struct FString OrderId, int32_t AppID); // Function SteamCoreWeb.SteamCoreWebAsyncActionFinalizeTxn.FinalizeTxnAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc2c090
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionGetReport
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreWebAsyncActionGetReport : USteamCoreWebAsyncAction {

	struct USteamCoreWebAsyncActionGetReport* GetReportAsync(struct UObject* WorldContextObject, struct FString Key, int32_t AppID, struct FString Time, struct FString Type, int32_t MaxResults); // Function SteamCoreWeb.SteamCoreWebAsyncActionGetReport.GetReportAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc2d400
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionGetUserAgreementInfo
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreWebAsyncActionGetUserAgreementInfo : USteamCoreWebAsyncAction {

	struct USteamCoreWebAsyncActionGetUserAgreementInfo* GetUserAgreementInfoAsync(struct UObject* WorldContextObject, struct FString Key, struct FString SteamID, int32_t AppID); // Function SteamCoreWeb.SteamCoreWebAsyncActionGetUserAgreementInfo.GetUserAgreementInfoAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc2da40
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionGetUserInfo
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreWebAsyncActionGetUserInfo : USteamCoreWebAsyncAction {

	struct USteamCoreWebAsyncActionGetUserInfo* GetUserInfoAsync(struct UObject* WorldContextObject, struct FString Key, struct FString SteamID, int32_t ipaddress); // Function SteamCoreWeb.SteamCoreWebAsyncActionGetUserInfo.GetUserInfoAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc2dc30
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionInitTxn
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreWebAsyncActionInitTxn : USteamCoreWebAsyncAction {

	struct USteamCoreWebAsyncActionInitTxn* InitTxnAsync(struct UObject* WorldContextObject, struct FString Key, struct FString OrderId, struct FString SteamID, int32_t AppID, struct FString Language, struct FString Currency, struct FString userSession, struct FString ipaddress, struct TArray<int32_t> ItemId, struct TArray<int32_t> Quantity, struct TArray<struct FString> Amount, struct TArray<struct FString> Description, struct TArray<struct FString> Category, struct TArray<int32_t> associatedBundle, struct TArray<struct FString> billingType, struct TArray<struct FString> StartDate, struct TArray<struct FString> EndDate, struct TArray<struct FString> Period, struct TArray<int32_t> Frequency, struct TArray<struct FString> recurringAmt, struct TArray<int32_t> bundleCount, struct TArray<int32_t> bundleID, struct TArray<int32_t> bundleQty, struct TArray<struct FString> bundleDesc, struct TArray<struct FString> bundleCategory); // Function SteamCoreWeb.SteamCoreWebAsyncActionInitTxn.InitTxnAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc2de20
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionProcessAgreement
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreWebAsyncActionProcessAgreement : USteamCoreWebAsyncAction {

	struct USteamCoreWebAsyncActionProcessAgreement* ProcessAgreementAsync(struct UObject* WorldContextObject, struct FString Key, struct FString OrderId, struct FString SteamID, struct FString agreementID, int32_t AppID, int32_t Amount, struct FString Currency); // Function SteamCoreWeb.SteamCoreWebAsyncActionProcessAgreement.ProcessAgreementAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc2f720
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionQueryTxn
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreWebAsyncActionQueryTxn : USteamCoreWebAsyncAction {

	struct USteamCoreWebAsyncActionQueryTxn* QueryTxnAsync(struct UObject* WorldContextObject, struct FString Key, int32_t AppID, struct FString OrderId, struct FString transID); // Function SteamCoreWeb.SteamCoreWebAsyncActionQueryTxn.QueryTxnAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc307c0
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionRefundTxn
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreWebAsyncActionRefundTxn : USteamCoreWebAsyncAction {

	struct USteamCoreWebAsyncActionRefundTxn* RefundTxnAsync(struct UObject* WorldContextObject, struct FString Key, struct FString OrderId, int32_t AppID); // Function SteamCoreWeb.SteamCoreWebAsyncActionRefundTxn.RefundTxnAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc31ab0
};

// Class SteamCoreWeb.WebPlayerService
// Size: 0x48 (Inherited: 0x48)
struct UWebPlayerService : USteamCoreWebSubsystem {

	void IsPlayingSharedGame(struct FDelegate callback, struct FString Key, struct FString SteamID, int32_t appIDplaying); // Function SteamCoreWeb.WebPlayerService.IsPlayingSharedGame // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc2f310
	void GetSteamLevel(struct FDelegate callback, struct FString Key, struct FString SteamID); // Function SteamCoreWeb.WebPlayerService.GetSteamLevel // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc2d6b0
	void GetRecentlyPlayedGames(struct FDelegate callback, struct FString Key, struct FString SteamID, int32_t Count); // Function SteamCoreWeb.WebPlayerService.GetRecentlyPlayedGames // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc2cff0
	void GetOwnedGames(struct FDelegate callback, struct FString Key, struct FString SteamID, bool bIncludeAppInfo, bool bIncludePlayedFreeGames, struct TArray<int32_t> Filter); // Function SteamCoreWeb.WebPlayerService.GetOwnedGames // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc2ca20
	void GetCommunityBadgeProgress(struct FDelegate callback, struct FString Key, struct FString SteamID, int32_t badgeID); // Function SteamCoreWeb.WebPlayerService.GetCommunityBadgeProgress // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc2c610
	void GetBadges(struct FDelegate callback, struct FString Key, struct FString SteamID); // Function SteamCoreWeb.WebPlayerService.GetBadges // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc2c280
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionGetRecentlyPlayedGames
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreWebAsyncActionGetRecentlyPlayedGames : USteamCoreWebAsyncAction {

	struct USteamCoreWebAsyncActionGetRecentlyPlayedGames* GetRecentlyPlayedGamesAsync(struct UObject* WorldContextObject, struct FString Key, struct FString SteamID, int32_t Count); // Function SteamCoreWeb.SteamCoreWebAsyncActionGetRecentlyPlayedGames.GetRecentlyPlayedGamesAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc2d210
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionGetOwnedGames
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreWebAsyncActionGetOwnedGames : USteamCoreWebAsyncAction {

	struct USteamCoreWebAsyncActionGetOwnedGames* GetOwnedGamesAsync(struct UObject* WorldContextObject, struct FString Key, struct FString SteamID, bool bIncludeAppInfo, bool bIncludePlayedFreeGames, struct TArray<int32_t> Filter); // Function SteamCoreWeb.SteamCoreWebAsyncActionGetOwnedGames.GetOwnedGamesAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc2cd20
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionGetSteamLevel
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreWebAsyncActionGetSteamLevel : USteamCoreWebAsyncAction {

	struct USteamCoreWebAsyncActionGetSteamLevel* GetSteamLevelAsync(struct UObject* WorldContextObject, struct FString Key, struct FString SteamID); // Function SteamCoreWeb.SteamCoreWebAsyncActionGetSteamLevel.GetSteamLevelAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc2d890
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionGetBadges
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreWebAsyncActionGetBadges : USteamCoreWebAsyncAction {

	struct USteamCoreWebAsyncActionGetBadges* GetBadgesAsync(struct UObject* WorldContextObject, struct FString Key, struct FString SteamID); // Function SteamCoreWeb.SteamCoreWebAsyncActionGetBadges.GetBadgesAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc2c460
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionGetCommunityBadgeProgress
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreWebAsyncActionGetCommunityBadgeProgress : USteamCoreWebAsyncAction {

	struct USteamCoreWebAsyncActionGetCommunityBadgeProgress* GetCommunityBadgeProgressAsync(struct UObject* WorldContextObject, struct FString Key, struct FString SteamID, int32_t badgeID); // Function SteamCoreWeb.SteamCoreWebAsyncActionGetCommunityBadgeProgress.GetCommunityBadgeProgressAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc2c830
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionIsPlayingSharedGame
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreWebAsyncActionIsPlayingSharedGame : USteamCoreWebAsyncAction {

	struct USteamCoreWebAsyncActionIsPlayingSharedGame* IsPlayingSharedGameAsync(struct UObject* WorldContextObject, struct FString Key, struct FString SteamID, int32_t appIDplaying); // Function SteamCoreWeb.SteamCoreWebAsyncActionIsPlayingSharedGame.IsPlayingSharedGameAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc2f530
};

// Class SteamCoreWeb.WebPublishedFileService
// Size: 0x48 (Inherited: 0x48)
struct UWebPublishedFileService : USteamCoreWebSubsystem {

	void UpdateTags(struct FDelegate callback, struct FString Key, struct FString PublishedFileID, int32_t AppID, struct FString addTags, struct FString removeTags); // Function SteamCoreWeb.WebPublishedFileService.UpdateTags // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc329f0
	void UpdateIncompatibleStatus(struct FDelegate callback, struct FString Key, struct FString PublishedFileID, int32_t AppID, bool bIncompatible); // Function SteamCoreWeb.WebPublishedFileService.UpdateIncompatibleStatus // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc32780
	void UpdateBanStatus(struct FDelegate callback, struct FString Key, struct FString PublishedFileID, int32_t AppID, bool bBanned, struct FString Reason); // Function SteamCoreWeb.WebPublishedFileService.UpdateBanStatus // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc32480
	void SetDeveloperMetadata(struct FDelegate callback, struct FString Key, struct FString PublishedFileID, int32_t AppID, struct FString MetaData); // Function SteamCoreWeb.WebPublishedFileService.SetDeveloperMetadata // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc321d0
	void QueryFiles(struct FDelegate callback, struct FString Key, int32_t queryType, int32_t page, struct FString Cursor, int32_t numPerPage, int32_t CreatorAppID, int32_t AppID, struct FString requiredTags, struct FString excludedTags, bool bMatchAllTags, struct FString requiredFlags, struct FString omittedFlags, struct FString SearchText, int32_t FileType, struct FString ChildPublishedFileId, int32_t days, bool bIncludeRecentVotesOnly, int32_t cacheMaxAgeSeconds, int32_t Language, struct FString requiredKvTags, bool bTotalOnly, bool bIDsOnly, bool bReturnVoteData, bool bReturnTags, bool bReturnKvTags, bool bReturnPreviews, bool bReturnChildren, bool bReturnShortDescription, bool bReturnForSaleData, bool bReturnMetadata, int32_t returnPlaytimeStats); // Function SteamCoreWeb.WebPublishedFileService.QueryFiles // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc2faf0
};

// Class SteamCoreWeb.WebSteamPublishedItemSearch
// Size: 0x48 (Inherited: 0x48)
struct UWebSteamPublishedItemSearch : USteamCoreWebSubsystem {

	void ResultSetSummary(struct FDelegate callback, struct FString Key, struct FString SteamID, int32_t AppID, int32_t startID, bool bHasAppAdminAccess, int32_t FileType, struct TArray<struct FString> Tag, struct TArray<struct FString> UserTag); // Function SteamCoreWeb.WebSteamPublishedItemSearch.ResultSetSummary // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc31ca0
	void RankedByVote(struct FDelegate callback, struct FString Key, struct FString SteamID, int32_t AppID, int32_t startID, int32_t Count, bool bHasAppAdminAccess, int32_t FileType, struct TArray<struct FString> Tag, struct TArray<struct FString> UserTag); // Function SteamCoreWeb.WebSteamPublishedItemSearch.RankedByVote // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc31550
	void RankedByTrend(struct FDelegate callback, struct FString Key, struct FString SteamID, int32_t AppID, int32_t startID, int32_t Count, bool bHasAppAdminAccess, int32_t FileType, int32_t days, struct TArray<struct FString> Tag, struct TArray<struct FString> UserTag); // Function SteamCoreWeb.WebSteamPublishedItemSearch.RankedByTrend // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc30fa0
	void RankedByPublicationOrder(struct FDelegate callback, struct FString Key, struct FString SteamID, int32_t AppID, int32_t startID, int32_t Count, bool bHasAppAdminAccess, int32_t FileType, struct TArray<struct FString> Tag, struct TArray<struct FString> UserTag); // Function SteamCoreWeb.WebSteamPublishedItemSearch.RankedByPublicationOrder // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc30a40
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionRankedByPublicationOrder
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreWebAsyncActionRankedByPublicationOrder : USteamCoreWebAsyncAction {

	struct USteamCoreWebAsyncActionRankedByPublicationOrder* RankedByPublicationOrderAsync(struct UObject* WorldContextObject, struct FString Key, struct FString SteamID, int32_t AppID, int32_t startID, int32_t Count, bool bHasAppAdminAccess, int32_t FileType, struct TArray<struct FString> Tag, struct TArray<struct FString> UserTag); // Function SteamCoreWeb.SteamCoreWebAsyncActionRankedByPublicationOrder.RankedByPublicationOrderAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc38fa0
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionRankedByTrend
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreWebAsyncActionRankedByTrend : USteamCoreWebAsyncAction {

	struct USteamCoreWebAsyncActionRankedByTrend* RankedByTrendAsync(struct UObject* WorldContextObject, struct FString Key, struct FString SteamID, int32_t AppID, int32_t startID, int32_t Count, bool bHasAppAdminAccess, int32_t FileType, int32_t days, struct TArray<struct FString> Tag, struct TArray<struct FString> UserTag); // Function SteamCoreWeb.SteamCoreWebAsyncActionRankedByTrend.RankedByTrendAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc394f0
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionRankedByVote
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreWebAsyncActionRankedByVote : USteamCoreWebAsyncAction {

	struct USteamCoreWebAsyncActionRankedByVote* RankedByVoteAsync(struct UObject* WorldContextObject, struct FString Key, struct FString SteamID, int32_t AppID, int32_t startID, int32_t Count, bool bHasAppAdminAccess, int32_t FileType, struct TArray<struct FString> Tag, struct TArray<struct FString> UserTag); // Function SteamCoreWeb.SteamCoreWebAsyncActionRankedByVote.RankedByVoteAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc39a70
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionResultSetSummary
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreWebAsyncActionResultSetSummary : USteamCoreWebAsyncAction {

	struct USteamCoreWebAsyncActionResultSetSummary* ResultSetSummaryAsync(struct UObject* WorldContextObject, struct FString Key, struct FString SteamID, int32_t AppID, int32_t startID, bool bHasAppAdminAccess, int32_t FileType, struct TArray<struct FString> Tag, struct TArray<struct FString> UserTag); // Function SteamCoreWeb.SteamCoreWebAsyncActionResultSetSummary.ResultSetSummaryAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc3a830
};

// Class SteamCoreWeb.WebPublishedItemVoting
// Size: 0x48 (Inherited: 0x48)
struct UWebPublishedItemVoting : USteamCoreWebSubsystem {

	void UserVoteSummary(struct FDelegate callback, struct FString Key, struct FString SteamID, struct TArray<struct FString> publishedFileIDs); // Function SteamCoreWeb.WebPublishedItemVoting.UserVoteSummary // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc3cdc0
	void ItemVoteSummary(struct FDelegate callback, struct FString Key, struct FString SteamID, int32_t AppID, struct TArray<struct FString> publishedFileIDs); // Function SteamCoreWeb.WebPublishedItemVoting.ItemVoteSummary // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc38920
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionItemVoteSummary
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreWebAsyncActionItemVoteSummary : USteamCoreWebAsyncAction {

	struct USteamCoreWebAsyncActionItemVoteSummary* ItemVoteSummaryAsync(struct UObject* WorldContextObject, struct FString Key, struct FString SteamID, int32_t AppID, struct TArray<struct FString> publishedFileIDs); // Function SteamCoreWeb.SteamCoreWebAsyncActionItemVoteSummary.ItemVoteSummaryAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc38c70
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionUserVoteSummary
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreWebAsyncActionUserVoteSummary : USteamCoreWebAsyncAction {

	struct USteamCoreWebAsyncActionUserVoteSummary* UserVoteSummaryAsync(struct UObject* WorldContextObject, struct FString Key, struct FString SteamID, struct TArray<struct FString> publishedFileIDs); // Function SteamCoreWeb.SteamCoreWebAsyncActionUserVoteSummary.UserVoteSummaryAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc3d0c0
};

// Class SteamCoreWeb.WebRemoteStorage
// Size: 0x48 (Inherited: 0x48)
struct UWebRemoteStorage : USteamCoreWebSubsystem {

	void UnsubscribePublishedFile(struct FDelegate callback, struct FString Key, struct FString SteamID, int32_t AppID, struct FString PublishedFileID); // Function SteamCoreWeb.WebRemoteStorage.UnsubscribePublishedFile // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc3c890
	void SubscribePublishedFile(struct FDelegate callback, struct FString Key, struct FString SteamID, int32_t AppID, struct FString PublishedFileID); // Function SteamCoreWeb.WebRemoteStorage.SubscribePublishedFile // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc3c360
	void SetUGCUsedByGC(struct FDelegate callback, struct FString Key, struct FString SteamID, struct FString UGCID, int32_t AppID, bool bUsed); // Function SteamCoreWeb.WebRemoteStorage.SetUGCUsedByGC // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc3ad40
	void GetUGCFileDetails(struct FDelegate callback, struct FString Key, struct FString SteamID, struct FString UGCID, int32_t AppID); // Function SteamCoreWeb.WebRemoteStorage.GetUGCFileDetails // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc383f0
	void GetPublishedFileDetails(struct FDelegate callback, struct FString PublishedFileID); // Function SteamCoreWeb.WebRemoteStorage.GetPublishedFileDetails // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc38160
	void GetCollectionDetails(struct FDelegate callback, struct TArray<struct FString> publishedFileIDs); // Function SteamCoreWeb.WebRemoteStorage.GetCollectionDetails // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc375a0
	void EnumerateUserSubscribedFiles(struct FDelegate callback, struct FString Key, struct FString SteamID, int32_t AppID, int32_t listType); // Function SteamCoreWeb.WebRemoteStorage.EnumerateUserSubscribedFiles // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc35ef0
	void EnumerateUserPublishedFiles(struct FDelegate callback, struct FString Key, struct FString SteamID, int32_t AppID); // Function SteamCoreWeb.WebRemoteStorage.EnumerateUserPublishedFiles // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc35ae0
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionEnumerateUserPublishedFiles
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreWebAsyncActionEnumerateUserPublishedFiles : USteamCoreWebAsyncAction {

	struct USteamCoreWebAsyncActionEnumerateUserPublishedFiles* EnumerateUserPublishedFilesAsync(struct UObject* WorldContextObject, struct FString Key, struct FString SteamID, int32_t AppID); // Function SteamCoreWeb.SteamCoreWebAsyncActionEnumerateUserPublishedFiles.EnumerateUserPublishedFilesAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc35d00
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionEnumerateUserSubscribedFiles
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreWebAsyncActionEnumerateUserSubscribedFiles : USteamCoreWebAsyncAction {

	struct USteamCoreWebAsyncActionEnumerateUserSubscribedFiles* EnumerateUserSubscribedFilesAsync(struct UObject* WorldContextObject, struct FString Key, struct FString SteamID, int32_t AppID, int32_t listType); // Function SteamCoreWeb.SteamCoreWebAsyncActionEnumerateUserSubscribedFiles.EnumerateUserSubscribedFilesAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc36140
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionGetCollectionDetails
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreWebAsyncActionGetCollectionDetails : USteamCoreWebAsyncAction {

	struct USteamCoreWebAsyncActionGetCollectionDetails* GetCollectionDetailsAsync(struct UObject* WorldContextObject, struct TArray<struct FString> publishedFileIDs); // Function SteamCoreWeb.SteamCoreWebAsyncActionGetCollectionDetails.GetCollectionDetailsAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc37780
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionGetPublishedFileDetails
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreWebAsyncActionGetPublishedFileDetails : USteamCoreWebAsyncAction {

	struct USteamCoreWebAsyncActionGetPublishedFileDetails* GetPublishedFileDetailsAsync(struct UObject* WorldContextObject, struct FString PublishedFileID); // Function SteamCoreWeb.SteamCoreWebAsyncActionGetPublishedFileDetails.GetPublishedFileDetailsAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc382c0
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionGetUGCFileDetails
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreWebAsyncActionGetUGCFileDetails : USteamCoreWebAsyncAction {

	struct USteamCoreWebAsyncActionGetUGCFileDetails* GetUGCFileDetailsAsync(struct UObject* WorldContextObject, struct FString Key, struct FString SteamID, struct FString UGCID, int32_t AppID); // Function SteamCoreWeb.SteamCoreWebAsyncActionGetUGCFileDetails.GetUGCFileDetailsAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc386a0
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionSetUGCUsedByGC
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreWebAsyncActionSetUGCUsedByGC : USteamCoreWebAsyncAction {

	struct USteamCoreWebAsyncActionSetUGCUsedByGC* SetUGCUsedByGCAsync(struct UObject* WorldContextObject, struct FString Key, struct FString SteamID, struct FString UGCID, int32_t AppID, bool bUsed); // Function SteamCoreWeb.SteamCoreWebAsyncActionSetUGCUsedByGC.SetUGCUsedByGCAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc3b040
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionSubscribePublishedFile
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreWebAsyncActionSubscribePublishedFile : USteamCoreWebAsyncAction {

	struct USteamCoreWebAsyncActionSubscribePublishedFile* SubscribePublishedFileAsync(struct UObject* WorldContextObject, struct FString Key, struct FString SteamID, int32_t AppID, struct FString PublishedFileID); // Function SteamCoreWeb.SteamCoreWebAsyncActionSubscribePublishedFile.SubscribePublishedFileAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc3c610
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionUnsubscribePublishedFile
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreWebAsyncActionUnsubscribePublishedFile : USteamCoreWebAsyncAction {

	struct USteamCoreWebAsyncActionUnsubscribePublishedFile* UnsubscribePublishedFileAsync(struct UObject* WorldContextObject, struct FString Key, struct FString SteamID, int32_t AppID, struct FString PublishedFileID); // Function SteamCoreWeb.SteamCoreWebAsyncActionUnsubscribePublishedFile.UnsubscribePublishedFileAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc3cb40
};

// Class SteamCoreWeb.WebSteamCommunity
// Size: 0x48 (Inherited: 0x48)
struct UWebSteamCommunity : USteamCoreWebSubsystem {

	void ReportAbuse(struct FDelegate callback, struct FString Key, struct FString steamIDActor, struct FString steamIDTarget, int32_t AppID, int32_t abuseType, int32_t contentType, struct FString Description, struct FString gid); // Function SteamCoreWeb.WebSteamCommunity.ReportAbuse // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc39fc0
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionReportAbuse
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreWebAsyncActionReportAbuse : USteamCoreWebAsyncAction {

	struct USteamCoreWebAsyncActionReportAbuse* ReportAbuseAsync(struct UObject* WorldContextObject, struct FString Key, struct FString steamIDActor, struct FString steamIDTarget, int32_t AppID, int32_t abuseType, int32_t contentType, struct FString Description, struct FString gid); // Function SteamCoreWeb.SteamCoreWebAsyncActionReportAbuse.ReportAbuseAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc3a420
};

// Class SteamCoreWeb.WebSteamEconomy
// Size: 0x48 (Inherited: 0x48)
struct UWebSteamEconomy : USteamCoreWebSubsystem {

	void StartTrade(struct FDelegate callback, struct FString Key, int32_t AppID, struct FString steamID1, struct FString steamID2); // Function SteamCoreWeb.WebSteamEconomy.StartTrade // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc3be30
	void StartAssetTransaction(struct FDelegate callback, struct FString Key, int32_t AppID, struct FString SteamID, struct FString assetID, int32_t assetQuantity, struct FString Currency, struct FString Language, struct FString ipaddress, struct FString referer, bool bClientAuth); // Function SteamCoreWeb.WebSteamEconomy.StartAssetTransaction // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc3b310
	void GetMarketPrices(struct FDelegate callback, struct FString Key, int32_t AppID); // Function SteamCoreWeb.WebSteamEconomy.GetMarketPrices // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc37e70
	void GetExportedAssetsForUser(struct FDelegate callback, struct FString Key, struct FString SteamID, int32_t AppID, struct FString contextID); // Function SteamCoreWeb.WebSteamEconomy.GetExportedAssetsForUser // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc37940
	void GetAssetPrices(struct FDelegate callback, struct FString Key, int32_t AppID, struct FString Currency, struct FString Language); // Function SteamCoreWeb.WebSteamEconomy.GetAssetPrices // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc37070
	void GetAssetClassInfo(struct FDelegate callback, struct FString Key, int32_t AppID, struct FString Language, int32_t classCount, struct FString classID, struct FString InstanceID); // Function SteamCoreWeb.WebSteamEconomy.GetAssetClassInfo // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc369b0
	void FinalizeAssetTransaction(struct FDelegate callback, struct FString Key, int32_t AppID, struct FString SteamID, struct FString txnID, struct FString Language); // Function SteamCoreWeb.WebSteamEconomy.FinalizeAssetTransaction // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc36360
	void CanTrade(struct FDelegate callback, struct FString Key, int32_t AppID, struct FString SteamID, struct FString TargetId); // Function SteamCoreWeb.WebSteamEconomy.CanTrade // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc355b0
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionCanTrade
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreWebAsyncActionCanTrade : USteamCoreWebAsyncAction {

	struct USteamCoreWebAsyncActionCanTrade* CanTradeAsync(struct UObject* WorldContextObject, struct FString Key, int32_t AppID, struct FString SteamID, struct FString TargetId); // Function SteamCoreWeb.SteamCoreWebAsyncActionCanTrade.CanTradeAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc35860
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionFinalizeAssetTransaction
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreWebAsyncActionFinalizeAssetTransaction : USteamCoreWebAsyncAction {

	struct USteamCoreWebAsyncActionFinalizeAssetTransaction* FinalizeAssetTransactionAsync(struct UObject* WorldContextObject, struct FString Key, int32_t AppID, struct FString SteamID, struct FString txnID, struct FString Language); // Function SteamCoreWeb.SteamCoreWebAsyncActionFinalizeAssetTransaction.FinalizeAssetTransactionAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc366a0
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionGetAssetClassInfo
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreWebAsyncActionGetAssetClassInfo : USteamCoreWebAsyncAction {

	struct USteamCoreWebAsyncActionGetAssetClassInfo* GetAssetClassInfoAsync(struct UObject* WorldContextObject, struct FString Key, int32_t AppID, struct FString Language, int32_t classCount, struct FString classID, struct FString InstanceID); // Function SteamCoreWeb.SteamCoreWebAsyncActionGetAssetClassInfo.GetAssetClassInfoAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc36d30
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionGetAssetPrices
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreWebAsyncActionGetAssetPrices : USteamCoreWebAsyncAction {

	struct USteamCoreWebAsyncActionGetAssetPrices* GetAssetPricesAsync(struct UObject* WorldContextObject, struct FString Key, int32_t AppID, struct FString Currency, struct FString Language); // Function SteamCoreWeb.SteamCoreWebAsyncActionGetAssetPrices.GetAssetPricesAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc37320
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionGetExportedAssetsForUser
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreWebAsyncActionGetExportedAssetsForUser : USteamCoreWebAsyncAction {

	struct USteamCoreWebAsyncActionGetExportedAssetsForUser* GetExportedAssetsForUserAsync(struct UObject* WorldContextObject, struct FString Key, struct FString SteamID, int32_t AppID, struct FString contextID); // Function SteamCoreWeb.SteamCoreWebAsyncActionGetExportedAssetsForUser.GetExportedAssetsForUserAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc37bf0
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionGetMarketPrices
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreWebAsyncActionGetMarketPrices : USteamCoreWebAsyncAction {

	struct USteamCoreWebAsyncActionGetMarketPrices* GetMarketPricesAsync(struct UObject* WorldContextObject, struct FString Key, int32_t AppID); // Function SteamCoreWeb.SteamCoreWebAsyncActionGetMarketPrices.GetMarketPricesAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc38000
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionStartAssetTransaction
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreWebAsyncActionStartAssetTransaction : USteamCoreWebAsyncAction {

	struct USteamCoreWebAsyncActionStartAssetTransaction* StartAssetTransactionAsync(struct UObject* WorldContextObject, struct FString Key, int32_t AppID, struct FString SteamID, struct FString assetID, int32_t assetQuantity, struct FString Currency, struct FString Language, struct FString ipaddress, struct FString referer, bool bClientAuth); // Function SteamCoreWeb.SteamCoreWebAsyncActionStartAssetTransaction.StartAssetTransactionAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc3b8b0
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionStartTrade
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreWebAsyncActionStartTrade : USteamCoreWebAsyncAction {

	struct USteamCoreWebAsyncActionStartTrade* StartTradeAsync(struct UObject* WorldContextObject, struct FString Key, int32_t AppID, struct FString steamID1, struct FString steamID2); // Function SteamCoreWeb.SteamCoreWebAsyncActionStartTrade.StartTradeAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc3c0e0
};

// Class SteamCoreWeb.WebSteamGameServerStats
// Size: 0x48 (Inherited: 0x48)
struct UWebSteamGameServerStats : USteamCoreWebSubsystem {

	void GetGameServerPlayerStatsForGame(struct FDelegate callback, struct FString Key, struct FString GameID, int32_t AppID, struct FString rangeStart, struct FString rangeEnd, int32_t MaxResults); // Function SteamCoreWeb.WebSteamGameServerStats.GetGameServerPlayerStatsForGame // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc411e0
};

// Class SteamCoreWeb.WebSteamNews
// Size: 0x48 (Inherited: 0x48)
struct UWebSteamNews : USteamCoreWebSubsystem {

	void GetNewsForAppAuthed(struct FDelegate callback, struct FString Key, int32_t AppID, int32_t maxLength, struct TArray<struct FString> feeds, int32_t EndDate, int32_t Count); // Function SteamCoreWeb.WebSteamNews.GetNewsForAppAuthed // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc422b0
	void GetNewsForApp(struct FDelegate callback, int32_t AppID, int32_t maxLength, struct TArray<struct FString> feeds, int32_t EndDate, int32_t Count); // Function SteamCoreWeb.WebSteamNews.GetNewsForApp // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc41d00
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionGetNewsForApp
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreWebAsyncActionGetNewsForApp : USteamCoreWebAsyncAction {

	struct USteamCoreWebAsyncActionGetNewsForApp* GetNewsForAppAsync(struct UObject* WorldContextObject, int32_t AppID, int32_t maxLength, struct TArray<struct FString> feeds, int32_t EndDate, int32_t Count); // Function SteamCoreWeb.SteamCoreWebAsyncActionGetNewsForApp.GetNewsForAppAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc41ff0
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionGetNewsForAppAuthed
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreWebAsyncActionGetNewsForAppAuthed : USteamCoreWebAsyncAction {

	struct USteamCoreWebAsyncActionGetNewsForAppAuthed* GetNewsForAppAuthedAsync(struct UObject* WorldContextObject, struct FString Key, int32_t AppID, int32_t maxLength, struct TArray<struct FString> feeds, int32_t EndDate, int32_t Count); // Function SteamCoreWeb.SteamCoreWebAsyncActionGetNewsForAppAuthed.GetNewsForAppAuthedAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc42630
};

// Class SteamCoreWeb.WebSteamUser
// Size: 0x48 (Inherited: 0x48)
struct UWebSteamUser : USteamCoreWebSubsystem {

	void ResolveVanityURL(struct FDelegate callback, struct FString Key, struct FString vanityURL, enum class EVanityUrlType urlType); // Function SteamCoreWeb.WebSteamUser.ResolveVanityURL // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc455d0
	void GrantPackage(struct FDelegate callback, struct FString Key, struct FString SteamID, int32_t packageID, struct FString ipaddress, struct FString thirdPartyKey, int32_t thirdPartyAppID); // Function SteamCoreWeb.WebSteamUser.GrantPackage // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc44f20
	void GetUserGroupList(struct FDelegate callback, struct FString Key, struct FString SteamID); // Function SteamCoreWeb.WebSteamUser.GetUserGroupList // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc44780
	void GetPublisherAppOwnershipChanges(struct FDelegate callback, struct FString Key, struct FString packageRowVersion, struct FString cdkeyRowVersion); // Function SteamCoreWeb.WebSteamUser.GetPublisherAppOwnershipChanges // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc43da0
	void GetPublisherAppOwnership(struct FDelegate callback, struct FString Key, struct FString SteamID); // Function SteamCoreWeb.WebSteamUser.GetPublisherAppOwnership // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc43a10
	void GetPlayerSummaries(struct FDelegate callback, struct FString Key, struct TArray<struct FString> SteamIDs); // Function SteamCoreWeb.WebSteamUser.GetPlayerSummaries // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc43550
	void GetPlayerBans(struct FDelegate callback, struct FString Key, struct TArray<struct FString> SteamIDs); // Function SteamCoreWeb.WebSteamUser.GetPlayerBans // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc43090
	void GetFriendList(struct FDelegate callback, struct FString Key, struct FString SteamID, struct FString relationship); // Function SteamCoreWeb.WebSteamUser.GetFriendList // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc40d30
	void GetAppPriceInfo(struct FDelegate callback, struct FString Key, struct FString SteamID, struct TArray<int32_t> AppIDs); // Function SteamCoreWeb.WebSteamUser.GetAppPriceInfo // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc40880
	void CheckAppOwnership(struct FDelegate callback, struct FString Key, struct FString SteamID, int32_t AppID); // Function SteamCoreWeb.WebSteamUser.CheckAppOwnership // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc40470
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionCheckAppOwnership
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreWebAsyncActionCheckAppOwnership : USteamCoreWebAsyncAction {

	struct USteamCoreWebAsyncActionCheckAppOwnership* CheckAppOwnershipAsync(struct UObject* WorldContextObject, struct FString Key, struct FString SteamID, int32_t AppID); // Function SteamCoreWeb.SteamCoreWebAsyncActionCheckAppOwnership.CheckAppOwnershipAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc40690
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionGetAppPriceInfo
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreWebAsyncActionGetAppPriceInfo : USteamCoreWebAsyncAction {

	struct USteamCoreWebAsyncActionGetAppPriceInfo* GetAppPriceInfoAsync(struct UObject* WorldContextObject, struct FString Key, struct FString SteamID, struct TArray<int32_t> AppIDs); // Function SteamCoreWeb.SteamCoreWebAsyncActionGetAppPriceInfo.GetAppPriceInfoAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc40af0
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionGetFriendList
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreWebAsyncActionGetFriendList : USteamCoreWebAsyncAction {

	struct USteamCoreWebAsyncActionGetFriendList* GetFriendListAsync(struct UObject* WorldContextObject, struct FString Key, struct FString SteamID, struct FString relationship); // Function SteamCoreWeb.SteamCoreWebAsyncActionGetFriendList.GetFriendListAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc40fa0
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionGetPlayerBans
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreWebAsyncActionGetPlayerBans : USteamCoreWebAsyncAction {

	struct USteamCoreWebAsyncActionGetPlayerBans* GetPlayerBansAsync(struct UObject* WorldContextObject, struct FString Key, struct TArray<struct FString> SteamIDs); // Function SteamCoreWeb.SteamCoreWebAsyncActionGetPlayerBans.GetPlayerBansAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc43300
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionGetPlayerSummaries
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreWebAsyncActionGetPlayerSummaries : USteamCoreWebAsyncAction {

	struct USteamCoreWebAsyncActionGetPlayerSummaries* GetPlayerSummariesAsync(struct UObject* WorldContextObject, struct FString Key, struct TArray<struct FString> SteamIDs); // Function SteamCoreWeb.SteamCoreWebAsyncActionGetPlayerSummaries.GetPlayerSummariesAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc437c0
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionGetPublisherAppOwnership
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreWebAsyncActionGetPublisherAppOwnership : USteamCoreWebAsyncAction {

	struct USteamCoreWebAsyncActionGetPublisherAppOwnership* GetPublisherAppOwnershipAsync(struct UObject* WorldContextObject, struct FString Key, struct FString SteamID); // Function SteamCoreWeb.SteamCoreWebAsyncActionGetPublisherAppOwnership.GetPublisherAppOwnershipAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc43bf0
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionGetPublisherAppOwnershipChanges
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges : USteamCoreWebAsyncAction {

	struct USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges* GetPublisherAppOwnershipChangesAsync(struct UObject* WorldContextObject, struct FString Key, struct FString packageRowVersion, struct FString cdkeyRowVersion); // Function SteamCoreWeb.SteamCoreWebAsyncActionGetPublisherAppOwnershipChanges.GetPublisherAppOwnershipChangesAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc44010
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionGetUserGroupList
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreWebAsyncActionGetUserGroupList : USteamCoreWebAsyncAction {

	struct USteamCoreWebAsyncActionGetUserGroupList* GetUserGroupListAsync(struct UObject* WorldContextObject, struct FString Key, struct FString SteamID); // Function SteamCoreWeb.SteamCoreWebAsyncActionGetUserGroupList.GetUserGroupListAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc44960
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionGrantPackage
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreWebAsyncActionGrantPackage : USteamCoreWebAsyncAction {

	struct USteamCoreWebAsyncActionGrantPackage* GrantPackageAsync(struct UObject* WorldContextObject, struct FString Key, struct FString SteamID, int32_t packageID, struct FString ipaddress, struct FString thirdPartyKey, int32_t thirdPartyAppID); // Function SteamCoreWeb.SteamCoreWebAsyncActionGrantPackage.GrantPackageAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc45290
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionResolveVanityURL
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreWebAsyncActionResolveVanityURL : USteamCoreWebAsyncAction {

	struct USteamCoreWebAsyncActionResolveVanityURL* ResolveVanityURLAsync(struct UObject* WorldContextObject, struct FString Key, struct FString vanityURL, enum class EVanityUrlType urlType); // Function SteamCoreWeb.SteamCoreWebAsyncActionResolveVanityURL.ResolveVanityURLAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc457f0
};

// Class SteamCoreWeb.WebUserAuth
// Size: 0x48 (Inherited: 0x48)
struct UWebUserAuth : USteamCoreWebSubsystem {

	void AuthenticateUserTicket(struct FDelegate callback, struct FString Key, int32_t AppID, struct FString ticket); // Function SteamCoreWeb.WebUserAuth.AuthenticateUserTicket // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc40060
	void AuthenticateUser(struct FDelegate callback, struct FString SteamID, struct TArray<char> sessionKey, struct TArray<char> encryptedLoginKey); // Function SteamCoreWeb.WebUserAuth.AuthenticateUser // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc3fbc0
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionAuthenticateUser
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreWebAsyncActionAuthenticateUser : USteamCoreWebAsyncAction {

	struct USteamCoreWebAsyncActionAuthenticateUser* AuthenticateUserAsync(struct UObject* WorldContextObject, struct FString SteamID, struct TArray<char> sessionKey, struct TArray<char> encryptedLoginKey); // Function SteamCoreWeb.SteamCoreWebAsyncActionAuthenticateUser.AuthenticateUserAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc3fe30
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionAuthenticateUserTicket
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreWebAsyncActionAuthenticateUserTicket : USteamCoreWebAsyncAction {

	struct USteamCoreWebAsyncActionAuthenticateUserTicket* AuthenticateUserTicketAsync(struct UObject* WorldContextObject, struct FString Key, int32_t AppID, struct FString ticket); // Function SteamCoreWeb.SteamCoreWebAsyncActionAuthenticateUserTicket.AuthenticateUserTicketAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc40280
};

// Class SteamCoreWeb.WebUserStats
// Size: 0x48 (Inherited: 0x48)
struct UWebUserStats : USteamCoreWebSubsystem {

	void SetUserStatsForGame(struct FDelegate callback, struct FString Key, struct FString SteamID, int32_t AppID, struct TArray<struct FString> Names, struct TArray<int32_t> Values); // Function SteamCoreWeb.WebUserStats.SetUserStatsForGame // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc459e0
	void GetUserStatsForGame(struct FDelegate callback, struct FString Key, struct FString SteamID, int32_t AppID); // Function SteamCoreWeb.WebUserStats.GetUserStatsForGame // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc44b10
	void GetSchemaForGame(struct FDelegate callback, struct FString Key, struct FString SteamID, int32_t AppID, struct FString Language); // Function SteamCoreWeb.WebUserStats.GetSchemaForGame // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc44250
	void GetPlayerAchievements(struct FDelegate callback, struct FString Key, struct FString SteamID, int32_t AppID, struct FString Language); // Function SteamCoreWeb.WebUserStats.GetPlayerAchievements // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc42b60
	void GetNumberOfCurrentPlayers(struct FDelegate callback, int32_t AppID); // Function SteamCoreWeb.WebUserStats.GetNumberOfCurrentPlayers // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc42990
	void GetGlobalStatsForGame(struct FDelegate callback, int32_t AppID, struct TArray<struct FString> Names, int32_t StartDate, int32_t EndDate); // Function SteamCoreWeb.WebUserStats.GetGlobalStatsForGame // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc417e0
	void GetGlobalAchievementPercentagesForApp(struct FDelegate callback, struct FString GameID); // Function SteamCoreWeb.WebUserStats.GetGlobalAchievementPercentagesForApp // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc41550
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp : USteamCoreWebAsyncAction {

	struct USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp* GetGlobalAchievementPercentagesForAppAsync(struct UObject* WorldContextObject, struct FString GameID); // Function SteamCoreWeb.SteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp.GetGlobalAchievementPercentagesForAppAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc416b0
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionGetGlobalStatsForGame
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreWebAsyncActionGetGlobalStatsForGame : USteamCoreWebAsyncAction {

	struct USteamCoreWebAsyncActionGetGlobalStatsForGame* GetGlobalStatsForGameAsync(struct UObject* WorldContextObject, int32_t AppID, struct TArray<struct FString> Names, int32_t StartDate, int32_t EndDate); // Function SteamCoreWeb.SteamCoreWebAsyncActionGetGlobalStatsForGame.GetGlobalStatsForGameAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc41a80
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionGetNumberOfCurrentPlayers
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreWebAsyncActionGetNumberOfCurrentPlayers : USteamCoreWebAsyncAction {

	struct USteamCoreWebAsyncActionGetNumberOfCurrentPlayers* GetNumberOfCurrentPlayersAsync(struct UObject* WorldContextObject, int32_t AppID); // Function SteamCoreWeb.SteamCoreWebAsyncActionGetNumberOfCurrentPlayers.GetNumberOfCurrentPlayersAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc42a90
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionGetPlayerAchievements
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreWebAsyncActionGetPlayerAchievements : USteamCoreWebAsyncAction {

	struct USteamCoreWebAsyncActionGetPlayerAchievements* GetPlayerAchievementsAsync(struct UObject* WorldContextObject, struct FString Key, struct FString SteamID, int32_t AppID, struct FString Language); // Function SteamCoreWeb.SteamCoreWebAsyncActionGetPlayerAchievements.GetPlayerAchievementsAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc42e10
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionGetSchemaForGame
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreWebAsyncActionGetSchemaForGame : USteamCoreWebAsyncAction {

	struct USteamCoreWebAsyncActionGetSchemaForGame* GetSchemaForGameAsync(struct UObject* WorldContextObject, struct FString Key, struct FString SteamID, int32_t AppID, struct FString Language); // Function SteamCoreWeb.SteamCoreWebAsyncActionGetSchemaForGame.GetSchemaForGameAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc44500
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionGetUserStatsForGame
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreWebAsyncActionGetUserStatsForGame : USteamCoreWebAsyncAction {

	struct USteamCoreWebAsyncActionGetUserStatsForGame* GetUserStatsForGameAsync(struct UObject* WorldContextObject, struct FString Key, struct FString SteamID, int32_t AppID); // Function SteamCoreWeb.SteamCoreWebAsyncActionGetUserStatsForGame.GetUserStatsForGameAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc44d30
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionSetUserStatsForGame
// Size: 0x50 (Inherited: 0x50)
struct USteamCoreWebAsyncActionSetUserStatsForGame : USteamCoreWebAsyncAction {

	struct USteamCoreWebAsyncActionSetUserStatsForGame* SetUserStatsForGameAsync(struct UObject* WorldContextObject, struct FString Key, struct FString SteamID, int32_t AppID, struct TArray<struct FString> Names, struct TArray<int32_t> Values); // Function SteamCoreWeb.SteamCoreWebAsyncActionSetUserStatsForGame.SetUserStatsForGameAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc45db0
};

