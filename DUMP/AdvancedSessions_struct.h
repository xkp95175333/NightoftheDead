// Enum AdvancedSessions.EBPOnlinePresenceState
enum class EBPOnlinePresenceState : uint8 {
	Online,
	Offline,
	Away,
	ExtendedAway,
	DoNotDisturb,
	Chat,
	EBPOnlinePresenceState_MAX,
};

// Enum AdvancedSessions.EBPUserPrivileges
enum class EBPUserPrivileges : uint8 {
	CanPlay,
	CanPlayOnline,
	CanCommunicateOnline,
	CanUseUserGeneratedContent,
	EBPUserPrivileges_MAX,
};

// Enum AdvancedSessions.EOnlineComparisonOpRedux
enum class EOnlineComparisonOpRedux : uint8 {
	Equals,
	NotEquals,
	GreaterThan,
	GreaterThanEquals,
	LessThan,
	LessThanEquals,
	EOnlineComparisonOpRedux_MAX,
};

// Enum AdvancedSessions.EBPOnlineSessionState
enum class EBPOnlineSessionState : uint8 {
	NoSession,
	Creating,
	Pending,
	Starting,
	InProgress,
	Ending,
	Ended,
	Destroying,
	EBPOnlineSessionState_MAX,
};

// Enum AdvancedSessions.EBPServerPresenceSearchType
enum class EBPServerPresenceSearchType : uint8 {
	AllServers,
	ClientServersOnly,
	DedicatedServersOnly,
	EBPServerPresenceSearchType_MAX,
};

// Enum AdvancedSessions.EBlueprintAsyncResultSwitch
enum class EBlueprintAsyncResultSwitch : uint8 {
	OnSuccess,
	AsyncLoading,
	OnFailure,
	EBlueprintAsyncResultSwitch_MAX,
};

// Enum AdvancedSessions.EBlueprintResultSwitch
enum class EBlueprintResultSwitch : uint8 {
	OnSuccess,
	OnFailure,
	EBlueprintResultSwitch_MAX,
};

// Enum AdvancedSessions.ESessionSettingSearchResult
enum class ESessionSettingSearchResult : uint8 {
	Found,
	NotFound,
	WrongType,
	ESessionSettingSearchResult_MAX,
};

// Enum AdvancedSessions.EBPLoginStatus
enum class EBPLoginStatus : uint8 {
	NotLoggedIn,
	UsingLocalProfile,
	LoggedIn,
	EBPLoginStatus_MAX,
};

// ScriptStruct AdvancedSessions.BPFriendInfo
// Size: 0x68 (Inherited: 0x00)
struct FBPFriendInfo {
	struct FString DisplayName; // 0x00(0x10)
	struct FString RealName; // 0x10(0x10)
	enum class EBPOnlinePresenceState OnlineState; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct FBPUniqueNetId UniqueNetId; // 0x28(0x20)
	bool bIsPlayingSameGame; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct FBPFriendPresenceInfo PresenceInfo; // 0x50(0x18)
};

// ScriptStruct AdvancedSessions.BPFriendPresenceInfo
// Size: 0x18 (Inherited: 0x00)
struct FBPFriendPresenceInfo {
	bool bIsOnline; // 0x00(0x01)
	bool BIsPlaying; // 0x01(0x01)
	bool bIsPlayingThisGame; // 0x02(0x01)
	bool bIsJoinable; // 0x03(0x01)
	bool bHasVoiceSupport; // 0x04(0x01)
	enum class EBPOnlinePresenceState PresenceState; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
	struct FString StatusString; // 0x08(0x10)
};

// ScriptStruct AdvancedSessions.BPUniqueNetId
// Size: 0x20 (Inherited: 0x00)
struct FBPUniqueNetId {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct AdvancedSessions.BPOnlineUser
// Size: 0x40 (Inherited: 0x00)
struct FBPOnlineUser {
	struct FBPUniqueNetId UniqueNetId; // 0x00(0x20)
	struct FString DisplayName; // 0x20(0x10)
	struct FString RealName; // 0x30(0x10)
};

// ScriptStruct AdvancedSessions.BPOnlineRecentPlayer
// Size: 0x50 (Inherited: 0x40)
struct FBPOnlineRecentPlayer : FBPOnlineUser {
	struct FString LastSeen; // 0x40(0x10)
};

// ScriptStruct AdvancedSessions.SessionsSearchSetting
// Size: 0x28 (Inherited: 0x00)
struct FSessionsSearchSetting {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct AdvancedSessions.SessionPropertyKeyPair
// Size: 0x20 (Inherited: 0x00)
struct FSessionPropertyKeyPair {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct AdvancedSessions.BPUserOnlineAccount
// Size: 0x10 (Inherited: 0x00)
struct FBPUserOnlineAccount {
	char pad_0[0x10]; // 0x00(0x10)
};

