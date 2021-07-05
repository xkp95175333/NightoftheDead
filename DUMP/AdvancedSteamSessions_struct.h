// Enum AdvancedSteamSessions.FBPWorkshopFileType
enum class FBPWorkshopFileType : uint8 {
	k_EWorkshopFileTypeCommunity,
	k_EWorkshopFileTypeMicrotransaction,
	k_EWorkshopFileTypeCollection,
	k_EWorkshopFileTypeArt,
	k_EWorkshopFileTypeVideo,
	k_EWorkshopFileTypeScreenshot,
	k_EWorkshopFileTypeGame,
	k_EWorkshopFileTypeSoftware,
	k_EWorkshopFileTypeConcept,
	k_EWorkshopFileTypeWebGuide,
	k_EWorkshopFileTypeIntegratedGuide,
	k_EWorkshopFileTypeMerch,
	k_EWorkshopFileTypeControllerBinding,
	k_EWorkshopFileTypeSteamworksAccessInvite,
	k_EWorkshopFileTypeSteamVideo,
	k_EWorkshopFileTypeMax,
	k_MAX,
};

// Enum AdvancedSteamSessions.FBPSteamResult
enum class FBPSteamResult : uint8 {
	K_EResultInvalid,
	k_EResultOK,
	k_EResultFail,
	k_EResultNoConnection,
	k_EResultInvalidPassword,
	k_EResultLoggedInElsewhere,
	k_EResultInvalidProtocolVer,
	k_EResultInvalidParam,
	k_EResultFileNotFound,
	k_EResultBusy,
	k_EResultInvalidState,
	k_EResultInvalidName,
	k_EResultInvalidEmail,
	k_EResultDuplicateName,
	k_EResultAccessDenied,
	k_EResultTimeout,
	k_EResultBanned,
	k_EResultAccountNotFound,
	k_EResultInvalidSteamID,
	k_EResultServiceUnavailable,
	k_EResultNotLoggedOn,
	k_EResultPending,
	k_EResultEncryptionFailure,
	k_EResultInsufficientPrivilege,
	k_EResultLimitExceeded,
	k_EResultRevoked,
	k_EResultExpired,
	k_EResultAlreadyRedeemed,
	k_EResultDuplicateRequest,
	k_EResultAlreadyOwned,
	k_EResultIPNotFound,
	k_EResultPersistFailed,
	k_EResultLockingFailed,
	k_EResultLogonSessionReplaced,
	k_EResultConnectFailed,
	k_EResultHandshakeFailed,
	k_EResultIOFailure,
	k_EResultRemoteDisconnect,
	k_EResultShoppingCartNotFound,
	k_EResultBlocked,
	k_EResultIgnored,
	k_EResultNoMatch,
	k_EResultAccountDisabled,
	k_EResultServiceReadOnly,
	k_EResultAccountNotFeatured,
	k_EResultAdministratorOK,
	k_EResultContentVersion,
	k_EResultTryAnotherCM,
	k_EResultPasswordRequiredToKickSession,
	k_EResultAlreadyLoggedInElsewhere,
	k_EResultSuspended,
	k_EResultCancelled,
	k_EResultDataCorruption,
	k_EResultDiskFull,
	k_EResultRemoteCallFailed,
	k_EResultPasswordUnset,
	k_EResultExternalAccountUnlinked,
	k_EResultPSNTicketInvalid,
	k_EResultExternalAccountAlreadyLinked,
	k_EResultRemoteFileConflict,
	k_EResultIllegalPassword,
	k_EResultSameAsPreviousValue,
	k_EResultAccountLogonDenied,
	k_EResultCannotUseOldPassword,
	k_EResultInvalidLoginAuthCode,
	k_EResultAccountLogonDeniedNoMail,
	k_EResultHardwareNotCapableOfIPT,
	k_EResultIPTInitError,
	k_EResultParentalControlRestricted,
	k_EResultFacebookQueryError,
	k_EResultExpiredLoginAuthCode,
	k_EResultIPLoginRestrictionFailed,
	k_EResultAccountLockedDown,
	k_EResultAccountLogonDeniedVerifiedEmailRequired,
	k_EResultNoMatchingURL,
	k_EResultBadResponse,
	k_EResultRequirePasswordReEntry,
	k_EResultValueOutOfRange,
	k_EResultUnexpectedError,
	k_EResultDisabled,
	k_EResultInvalidCEGSubmission,
	k_EResultRestrictedDevice,
	k_EResultRegionLocked,
	k_EResultRateLimitExceeded,
	k_EResultAccountLoginDeniedNeedTwoFactor,
	k_EResultItemDeleted,
	k_EResultAccountLoginDeniedThrottle,
	k_EResultTwoFactorCodeMismatch,
	k_EResultTwoFactorActivationCodeMismatch,
	k_EResultAccountAssociatedToMultiplePartners,
	k_EResultNotModified,
	FBPSteamResult_MAX,
};

// Enum AdvancedSteamSessions.ESteamUserOverlayType
enum class ESteamUserOverlayType : uint8 {
	steamid,
	chat,
	jointrade,
	stats,
	achievements,
	friendadd,
	friendremove,
	friendrequestaccept,
	friendrequestignore,
	ESteamUserOverlayType_MAX,
};

// Enum AdvancedSteamSessions.SteamAvatarSize
enum class SteamAvatarSize : uint8 {
	SteamAvatar_INVALID,
	SteamAvatar_Small,
	SteamAvatar_Medium,
	SteamAvatar_Large,
	SteamAvatar_MAX,
};

// ScriptStruct AdvancedSteamSessions.BPSteamGroupOfficer
// Size: 0x28 (Inherited: 0x00)
struct FBPSteamGroupOfficer {
	struct FBPUniqueNetId OfficerUniqueNetID; // 0x00(0x20)
	bool bIsOwner; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct AdvancedSteamSessions.BPSteamWorkshopItemDetails
// Size: 0x60 (Inherited: 0x00)
struct FBPSteamWorkshopItemDetails {
	enum class FBPSteamResult ResultOfRequest; // 0x00(0x01)
	enum class FBPWorkshopFileType FileType; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	int32_t CreatorAppID; // 0x04(0x04)
	int32_t ConsumerAppID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString Title; // 0x10(0x10)
	struct FString Description; // 0x20(0x10)
	struct FString ItemUrl; // 0x30(0x10)
	int32_t VotesUp; // 0x40(0x04)
	int32_t VotesDown; // 0x44(0x04)
	float CalculatedScore; // 0x48(0x04)
	bool bBanned; // 0x4c(0x01)
	bool bAcceptedForUse; // 0x4d(0x01)
	bool bTagsTruncated; // 0x4e(0x01)
	char pad_4F[0x1]; // 0x4f(0x01)
	struct FString CreatorSteamID; // 0x50(0x10)
};

// ScriptStruct AdvancedSteamSessions.BPSteamGroupInfo
// Size: 0x50 (Inherited: 0x00)
struct FBPSteamGroupInfo {
	struct FBPUniqueNetId GroupID; // 0x00(0x20)
	struct FString GroupName; // 0x20(0x10)
	struct FString GroupTag; // 0x30(0x10)
	int32_t numOnline; // 0x40(0x04)
	int32_t numInGame; // 0x44(0x04)
	int32_t numChatting; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct AdvancedSteamSessions.BPSteamWorkshopID
// Size: 0x08 (Inherited: 0x00)
struct FBPSteamWorkshopID {
	char pad_0[0x8]; // 0x00(0x08)
};

