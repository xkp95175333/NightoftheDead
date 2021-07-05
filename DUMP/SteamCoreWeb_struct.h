// Enum SteamCoreWeb.ESteamJsonResult
enum class ESteamJsonResult : uint8 {
	Found,
	NotFound,
	ESteamJsonResult_MAX,
};

// Enum SteamCoreWeb.ESteamValueType
enum class ESteamValueType : uint8 {
	STRING,
	NUMBER,
	BOOL,
	ESteamValueType_MAX,
};

// Enum SteamCoreWeb.ESubsystemWeb
enum class ESubsystemWeb : uint8 {
	SteamCoreWeb,
	Apps,
	Broadcast,
	CheatReporting,
	Community,
	Econ,
	EconMarket,
	Economy,
	GameInventory,
	GameNotifications,
	GameServers,
	GameServerStats,
	Inventory,
	LobbyMatchmaking,
	Leaderboards,
	MicroTxn,
	News,
	PlayerService,
	PublishedFile,
	PublishedItemSearch,
	PublishedItemVoting,
	RemoteStorage,
	User,
	UserAuth,
	UserStats,
	Workshop,
	ESubsystemWeb_MAX,
};

// Enum SteamCoreWeb.ESteamCoreWebLobbyType
enum class ESteamCoreWebLobbyType : uint8 {
	Private,
	FriendsOnly,
	TypePublic,
	TypeInvisible,
	ESteamCoreWebLobbyType_MAX,
};

// Enum SteamCoreWeb.EVanityUrlType
enum class EVanityUrlType : uint8 {
	Individual,
	Group,
	OfficialGameGroup,
	EVanityUrlType_MAX,
};

// ScriptStruct SteamCoreWeb.SteamCoreJson
// Size: 0x28 (Inherited: 0x00)
struct FSteamCoreJson {
	struct FString Key; // 0x00(0x10)
	struct FString String; // 0x10(0x10)
	int32_t Number; // 0x20(0x04)
	bool Bool; // 0x24(0x01)
	enum class ESteamValueType Type; // 0x25(0x01)
	char pad_26[0x2]; // 0x26(0x02)
};

