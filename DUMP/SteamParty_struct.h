// Enum SteamParty.ESteamAvatarSize
enum class ESteamAvatarSize : uint8 {
	AvatarNone,
	AvatarSmall,
	AvatarMedium,
	AvatarLarge,
	ESteamAvatarSize_MAX,
};

// Enum SteamParty.EPartyStatus
enum class EPartyStatus : uint8 {
	PartyNone,
	PartyLeader,
	PartyMember,
	EPartyStatus_MAX,
};

// Enum SteamParty.ESteamPresenceState
enum class ESteamPresenceState : uint8 {
	Online,
	Offline,
	Away,
	ExtendedAway,
	DoNotDisturb,
	Chat,
	ESteamPresenceState_MAX,
};

// Enum SteamParty.EPartyChatType
enum class EPartyChatType : uint8 {
	Global,
	Whisper,
	EPartyChatType_MAX,
};

// ScriptStruct SteamParty.SteamBeaconSessionResult
// Size: 0x150 (Inherited: 0x00)
struct FSteamBeaconSessionResult {
	char pad_0[0x108]; // 0x00(0x108)
	struct FString SessionType; // 0x108(0x10)
	struct FString HostAddr; // 0x118(0x10)
	struct FString SteamP2PAddr; // 0x128(0x10)
	struct FString SessionID; // 0x138(0x10)
	bool bIsPresence; // 0x148(0x01)
	bool bIsLan; // 0x149(0x01)
	char pad_14A[0x6]; // 0x14a(0x06)
};

// ScriptStruct SteamParty.SteamFriendInfo
// Size: 0x50 (Inherited: 0x00)
struct FSteamFriendInfo {
	struct FUniqueNetIdRepl UniqueNetId; // 0x00(0x28)
	struct FString DisplayName; // 0x28(0x10)
	struct FString RealName; // 0x38(0x10)
	enum class ESteamPresenceState OnlineState; // 0x48(0x01)
	bool bIsOnline; // 0x49(0x01)
	bool BIsPlaying; // 0x4a(0x01)
	bool bIsPlayingThisGame; // 0x4b(0x01)
	bool bIsJoinable; // 0x4c(0x01)
	bool bHasVoiceSupport; // 0x4d(0x01)
	char pad_4E[0x2]; // 0x4e(0x02)
};

// ScriptStruct SteamParty.PartyMessage
// Size: 0x80 (Inherited: 0x00)
struct FPartyMessage {
	float TimeSent; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString SenderName; // 0x08(0x10)
	struct FUniqueNetIdRepl SenderId; // 0x18(0x28)
	struct FString Message; // 0x40(0x10)
	enum class EPartyChatType ChatType; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct FUniqueNetIdRepl ReceiverId; // 0x58(0x28)
};

// ScriptStruct SteamParty.PartySaveInfo
// Size: 0x110 (Inherited: 0x00)
struct FPartySaveInfo {
	bool IsInParty; // 0x00(0x01)
	bool IsPartyLeader; // 0x01(0x01)
	char pad_2[0x10e]; // 0x02(0x10e)
};

