// Enum SteamCore.ESteamResult
enum class ESteamResult : uint8 {
	None,
	OK,
	Fail,
	NoConnection,
	sultNoConnectionRetry,
	InvalidPassword,
	LoggedInElsewhere,
	InvalidProtocolVer,
	InvalidParam,
	FileNotFound,
	Busy,
	InvalidState,
	InvalidName,
	InvalidEmail,
	DuplicateName,
	AccessDenied,
	Timeout,
	Banned,
	AccountNotFound,
	InvalidSteamID,
	ServiceUnavailable,
	NotLoggedOn,
	Pending,
	EncryptionFailure,
	InsufficientPrivilege,
	LimitExceeded,
	Revoked,
	Expired,
	AlreadyRedeemed,
	DuplicateRequest,
	AlreadyOwned,
	IPNotFound,
	PersistFailed,
	LockingFailed,
	LogonSessionReplaced,
	ConnectFailed,
	HandshakeFailed,
	IOFailure,
	RemoteDisconnect,
	ShoppingCartNotFound,
	Blocked,
	Ignored,
	NoMatch,
	AccountDisabled,
	ServiceReadOnly,
	AccountNotFeatured,
	AdministratorOK,
	ContentVersion,
	TryAnotherCM,
	PasswordRequiredToKickSession,
	AlreadyLoggedInElsewhere,
	Suspended,
	Cancelled,
	DataCorruption,
	DiskFull,
	RemoteCallFailed,
	PasswordUnset,
	ExternalAccountUnlinked,
	PSNTicketInvalid,
	ExternalAccountAlreadyLinked,
	RemoteFileConflict,
	IllegalPassword,
	SameAsPreviousValue,
	AccountLogonDenied,
	CannotUseOldPassword,
	InvalidLoginAuthCode,
	AccountLogonDeniedNoMail,
	HardwareNotCapableOfIPT,
	IPTInitError,
	ParentalControlRestricted,
	FacebookQueryError,
	ExpiredLoginAuthCode,
	IPLoginRestrictionFailed,
	AccountLockedDown,
	AccountLogonDeniedVerifiedEmailRequired,
	NoMatchingURL,
	BadResponse,
	RequirePasswordReEntry,
	ValueOutOfRange,
	UnexpectedError,
	Disabled,
	InvalidCEGSubmission,
	RestrictedDevice,
	RegionLocked,
	RateLimitExceeded,
	AccountLoginDeniedNeedTwoFactor,
	ItemDeleted,
	AccountLoginDeniedThrottle,
	TwoFactorCodeMismatch,
	TwoFactorActivationCodeMismatch,
	AccountAssociatedToMultiplePartners,
	NotModified,
	NoMobileDevice,
	TimeNotSynced,
	SmsCodeFailed,
	AccountLimitExceeded,
	AccountActivityLimitExceeded,
	PhoneActivityLimitExceeded,
	RefundToWallet,
	EmailSendFailure,
	NotSettled,
	NeedCaptcha,
	GSLTDenied,
	GSOwnerDenied,
	InvalidItemType,
	IPBanned,
	GSLTExpired,
	InsufficientFunds,
	TooManyPending,
	NoSiteLicensesFound,
	WGNetworkSendExceeded,
	AccountNotFriends,
	LimitedUserAccount,
	CantRemoveItem,
	ESteamResult_MAX,
};

// Enum SteamCore.ESteamMessageType
enum class ESteamMessageType : uint8 {
	ENotification,
	EMessage,
	EWarning,
	ESteamMessageType_MAX,
};

// Enum SteamCore.ESteamPersonaChange
enum class ESteamPersonaChange : uint8 {
	Name,
	Status,
	ComeOnline,
	GoneOffline,
	GamePlayed,
	GameServer,
	Avatar,
	JoinedSource,
	LeftSource,
	RelationshipChanged,
	NameFirstSet,
	FacebookInfo,
	Nickname,
	SteamLevel,
	ESteamPersonaChange_MAX,
};

// Enum SteamCore.ESteamChatRoomEnterResponse
enum class ESteamChatRoomEnterResponse : uint8 {
	None,
	Success,
	DoesntExist,
	NotAllowed,
	Full,
	Error,
	Banned,
	Limited,
	ClanDisabled,
	CommunityBan,
	MemberBlockedYou,
	YouBlockedMember,
	RatelimitExceeded,
	ESteamChatRoomEnterResponse_MAX,
};

// Enum SteamCore.ESteamPlayerAcceptState
enum class ESteamPlayerAcceptState : uint8 {
	Unknown,
	PlayerAccepted,
	PlayerDeclined,
	ESteamPlayerAcceptState_MAX,
};

// Enum SteamCore.ESteamAuthSessionResponse
enum class ESteamAuthSessionResponse : uint8 {
	OK,
	UserNotConnectedToSteam,
	NoLicenseOrExpired,
	VACBanned,
	LoggedInElseWhere,
	VACCheckTimedOut,
	AuthTicketCanceled,
	AuthTicketInvalidAlreadyUsed,
	AuthTicketInvalid,
	PublisherIssuedBan,
	ESteamAuthSessionResponse_MAX,
};

// Enum SteamCore.ESteamDenyReason
enum class ESteamDenyReason : uint8 {
	Invalid,
	InvalidVersion,
	Generic,
	NotLoggedOn,
	NoLicense,
	Cheater,
	LoggedInElseWhere,
	UnknownText,
	IncompatibleAnticheat,
	MemoryCorruption,
	IncompatibleSoftware,
	SteamConnectionLost,
	SteamConnectionError,
	SteamResponseTimedOut,
	SteamValidationStalled,
	SteamOwnerLeftGuestUser,
	ESteamDenyReason_MAX,
};

// Enum SteamCore.ESteamFavoriteFlags
enum class ESteamFavoriteFlags : uint8 {
	None,
	Favorite,
	History,
	ESteamFavoriteFlags_MAX,
};

// Enum SteamCore.ESteamChatEntryType
enum class ESteamChatEntryType : uint8 {
	Invalid,
	ChatMsg,
	Typing,
	InviteGame,
	Emote,
	LeftConversation,
	Entered,
	WasKicked,
	WasBanned,
	Disconnected,
	HistoricalChat,
	LinkBlocked,
	ESteamChatEntryType_MAX,
};

// Enum SteamCore.ESteamChatMemberStateChange
enum class ESteamChatMemberStateChange : uint8 {
	None,
	Entered,
	Left,
	Disconnected,
	Kicked,
	Banned,
	ESteamChatMemberStateChange_MAX,
};

// Enum SteamCore.ESteamP2PSessionError
enum class ESteamP2PSessionError : uint8 {
	None,
	NotRunningApp,
	NoRightsToApp,
	DestinationNotLoggedIn,
	Timeout,
	Max,
};

// Enum SteamCore.ESteamFailureType
enum class ESteamFailureType : uint8 {
	FlushedCallbackQueue,
	PipeFail,
	ESteamFailureType_MAX,
};

// Enum SteamCore.ESteamCheckFileSignature
enum class ESteamCheckFileSignature : uint8 {
	InvalidSignature,
	ValidSignature,
	FileNotFound,
	NoSignaturesFoundForThisApp,
	NoSignaturesFoundForThisFile,
	ESteamCheckFileSignature_MAX,
};

// Enum SteamCore.ESteamSubsystem
enum class ESteamSubsystem : uint8 {
	SteamCore,
	AppList,
	Apps,
	Friends,
	GameServer,
	GameServerStats,
	Inventory,
	Input,
	Matchmaking,
	MatchmakingServers,
	Music,
	Networking,
	NetworkingUtils,
	ParentalSettings,
	RemoteStorage,
	RemotePlay,
	Screenshots,
	UGC,
	User,
	UserStats,
	Utils,
	Video,
	SteamParties,
	GameSearch,
	ESteamSubsystem_MAX,
};

// Enum SteamCore.ESteamOverlayToStoreFlag
enum class ESteamOverlayToStoreFlag : uint8 {
	None,
	AddToCart,
	AddToCartAndShow,
	ESteamOverlayToStoreFlag_MAX,
};

// Enum SteamCore.ESteamUserRestriction
enum class ESteamUserRestriction : uint8 {
	None,
	Unknown,
	AnyChat,
	VoiceChat,
	GroupChat,
	Rating,
	GameInvites,
	Trading,
	ESteamUserRestriction_MAX,
};

// Enum SteamCore.ESteamFriendFlags
enum class ESteamFriendFlags : uint8 {
	None,
	Blocked,
	FriendshipRequested,
	Immediate,
	ClanMember,
	OnGameServer,
	RequestingFriendship,
	RequestingInfo,
	Ignored,
	IgnoredFriend,
	ChatMember,
	All,
	ESteamFriendFlags_MAX,
};

// Enum SteamCore.ESteamPersonaState
enum class ESteamPersonaState : uint8 {
	Offline,
	Online,
	Busy,
	Away,
	Snooze,
	LookingToTrade,
	LookingToPlay,
	Max,
};

// Enum SteamCore.ESteamFriendRelationship
enum class ESteamFriendRelationship : uint8 {
	None,
	Blocked,
	RequestRecipient,
	Friend,
	RequestInitiator,
	Ignored,
	IgnoredFriend,
	Suggested_DEPRECATED,
	Max,
};

// Enum SteamCore.ESteamActivateGameOverlayToWebPageMode
enum class ESteamActivateGameOverlayToWebPageMode : uint8 {
	Default,
	Modal,
	ESteamActivateGameOverlayToWebPageMode_MAX,
};

// Enum SteamCore.ESteamPlayerResult
enum class ESteamPlayerResult : uint8 {
	Invalid,
	FailedToConnect,
	Abandoned,
	Kicked,
	Incomplete,
	Completed,
	ESteamPlayerResult_MAX,
};

// Enum SteamCore.ESteamGameSearchErrorCode
enum class ESteamGameSearchErrorCode : uint8 {
	Invalid,
	OK,
	Failed_Search_Already_In_Progress,
	Failed_No_Search_In_Progress,
	Failed_Not_Lobby_Leader,
	Failed_No_Host_Available,
	Failed_Search_Params_Invalid,
	Failed_Offline,
	Failed_NotAuthorized,
	Failed_Unknown_Error,
	ESteamGameSearchErrorCode_MAX,
};

// Enum SteamCore.ESteamCoreInputLEDFlag
enum class ESteamCoreInputLEDFlag : uint8 {
	SetColor,
	RestoreUserDefault,
	ESteamCoreInputLEDFlag_MAX,
};

// Enum SteamCore.ESteamCoreInputType
enum class ESteamCoreInputType : uint8 {
	Unknown,
	SteamController,
	XBox360Controller,
	XBoxOneController,
	GenericGamepad,
	PS4Controller,
	AppleMFiController,
	AndroidController,
	SwitchJoyConPair,
	SwitchJoyConSingle,
	SwitchProController,
	MobileTouch,
	PS3Controller,
	Count,
	MaximumPossibleValue,
	ESteamCoreInputType_MAX,
};

// Enum SteamCore.ESteamCoreControllerPad
enum class ESteamCoreControllerPad : uint8 {
	Left,
	Right,
	ESteamCoreControllerPad_MAX,
};

// Enum SteamCore.ESteamCoreXboxOrigin
enum class ESteamCoreXboxOrigin : uint8 {
	A,
	B,
	X,
	Y,
	LeftBumper,
	RightBumper,
	Menu,
	View,
	LeftTrigger_Pull,
	LeftTrigger_Click,
	RightTrigger_Pull,
	RightTrigger_Click,
	LeftStick_Move,
	LeftStick_Click,
	LeftStick_DPadNorth,
	LeftStick_DPadSouth,
	LeftStick_DPadWest,
	LeftStick_DPadEast,
	RightStick_Move,
	RightStick_Click,
	RightStick_DPadNorth,
	RightStick_DPadSouth,
	RightStick_DPadWest,
	RightStick_DPadEast,
	DPad_North,
	DPad_South,
	DPad_West,
	DPad_East,
	Count,
	ESteamCoreXboxOrigin_MAX,
};

// Enum SteamCore.ESteamCoreInputActionOrigin
enum class ESteamCoreInputActionOrigin : uint8 {
	None,
	SteamController_A,
	SteamController_B,
	SteamController_X,
	SteamController_Y,
	SteamController_LeftBumper,
	SteamController_RightBumper,
	SteamController_LeftGrip,
	SteamController_RightGrip,
	SteamController_Start,
	SteamController_Back,
	SteamController_LeftPad_Touch,
	SteamController_LeftPad_Swipe,
	SteamController_LeftPad_Click,
	SteamController_LeftPad_DPadNorth,
	SteamController_LeftPad_DPadSouth,
	SteamController_LeftPad_DPadWest,
	SteamController_LeftPad_DPadEast,
	SteamController_RightPad_Touch,
	SteamController_RightPad_Swipe,
	SteamController_RightPad_Click,
	SteamController_RightPad_DPadNorth,
	SteamController_RightPad_DPadSouth,
	SteamController_RightPad_DPadWest,
	SteamController_RightPad_DPadEast,
	SteamController_LeftTrigger_Pull,
	SteamController_LeftTrigger_Click,
	SteamController_RightTrigger_Pull,
	SteamController_RightTrigger_Click,
	SteamController_LeftStick_Move,
	SteamController_LeftStick_Click,
	SteamController_LeftStick_DPadNorth,
	SteamController_LeftStick_DPadSouth,
	SteamController_LeftStick_DPadWest,
	SteamController_LeftStick_DPadEast,
	SteamController_Gyro_Move,
	SteamController_Gyro_Pitch,
	SteamController_Gyro_Yaw,
	SteamController_Gyro_Roll,
	SteamController_Reserved0,
	SteamController_Reserved1,
	SteamController_Reserved2,
	SteamController_Reserved3,
	SteamController_Reserved4,
	SteamController_Reserved5,
	SteamController_Reserved6,
	SteamController_Reserved7,
	SteamController_Reserved8,
	SteamController_Reserved9,
	SteamController_Reserved10,
	PS4_X,
	PS4_Circle,
	PS4_Triangle,
	PS4_Square,
	PS4_LeftBumper,
	PS4_RightBumper,
	PS4_Options,
	PS4_Share,
	PS4_LeftPad_Touch,
	PS4_LeftPad_Swipe,
	PS4_LeftPad_Click,
	PS4_LeftPad_DPadNorth,
	PS4_LeftPad_DPadSouth,
	PS4_LeftPad_DPadWest,
	PS4_LeftPad_DPadEast,
	PS4_RightPad_Touch,
	PS4_RightPad_Swipe,
	PS4_RightPad_Click,
	PS4_RightPad_DPadNorth,
	PS4_RightPad_DPadSouth,
	PS4_RightPad_DPadWest,
	PS4_RightPad_DPadEast,
	PS4_CenterPad_Touch,
	PS4_CenterPad_Swipe,
	PS4_CenterPad_Click,
	PS4_CenterPad_DPadNorth,
	PS4_CenterPad_DPadSouth,
	PS4_CenterPad_DPadWest,
	PS4_CenterPad_DPadEast,
	PS4_LeftTrigger_Pull,
	PS4_LeftTrigger_Click,
	PS4_RightTrigger_Pull,
	PS4_RightTrigger_Click,
	PS4_LeftStick_Move,
	PS4_LeftStick_Click,
	PS4_LeftStick_DPadNorth,
	PS4_LeftStick_DPadSouth,
	PS4_LeftStick_DPadWest,
	PS4_LeftStick_DPadEast,
	PS4_RightStick_Move,
	PS4_RightStick_Click,
	PS4_RightStick_DPadNorth,
	PS4_RightStick_DPadSouth,
	PS4_RightStick_DPadWest,
	PS4_RightStick_DPadEast,
	PS4_DPad_North,
	PS4_DPad_South,
	PS4_DPad_West,
	PS4_DPad_East,
	PS4_Gyro_Move,
	PS4_Gyro_Pitch,
	PS4_Gyro_Yaw,
	PS4_Gyro_Roll,
	PS4_DPad_Move,
	PS4_Reserved1,
	PS4_Reserved2,
	PS4_Reserved3,
	PS4_Reserved4,
	PS4_Reserved5,
	PS4_Reserved6,
	PS4_Reserved7,
	PS4_Reserved8,
	PS4_Reserved9,
	PS4_Reserved10,
	XBoxOne_A,
	XBoxOne_B,
	XBoxOne_X,
	XBoxOne_Y,
	XBoxOne_LeftBumper,
	XBoxOne_RightBumper,
	XBoxOne_Menu,
	XBoxOne_View,
	XBoxOne_LeftTrigger_Pull,
	XBoxOne_LeftTrigger_Click,
	XBoxOne_RightTrigger_Pull,
	XBoxOne_RightTrigger_Click,
	XBoxOne_LeftStick_Move,
	XBoxOne_LeftStick_Click,
	XBoxOne_LeftStick_DPadNorth,
	XBoxOne_LeftStick_DPadSouth,
	XBoxOne_LeftStick_DPadWest,
	XBoxOne_LeftStick_DPadEast,
	XBoxOne_RightStick_Move,
	XBoxOne_RightStick_Click,
	XBoxOne_RightStick_DPadNorth,
	XBoxOne_RightStick_DPadSouth,
	XBoxOne_RightStick_DPadWest,
	XBoxOne_RightStick_DPadEast,
	XBoxOne_DPad_North,
	XBoxOne_DPad_South,
	XBoxOne_DPad_West,
	XBoxOne_DPad_East,
	XBoxOne_DPad_Move,
	XBoxOne_Reserved1,
	XBoxOne_Reserved2,
	XBoxOne_Reserved3,
	XBoxOne_Reserved4,
	XBoxOne_Reserved5,
	XBoxOne_Reserved6,
	XBoxOne_Reserved7,
	XBoxOne_Reserved8,
	XBoxOne_Reserved9,
	XBoxOne_Reserved10,
	XBox360_A,
	XBox360_B,
	XBox360_X,
	XBox360_Y,
	XBox360_LeftBumper,
	XBox360_RightBumper,
	XBox360_Start,
	XBox360_Back,
	XBox360_LeftTrigger_Pull,
	XBox360_LeftTrigger_Click,
	XBox360_RightTrigger_Pull,
	XBox360_RightTrigger_Click,
	XBox360_LeftStick_Move,
	XBox360_LeftStick_Click,
	XBox360_LeftStick_DPadNorth,
	XBox360_LeftStick_DPadSouth,
	XBox360_LeftStick_DPadWest,
	XBox360_LeftStick_DPadEast,
	XBox360_RightStick_Move,
	XBox360_RightStick_Click,
	XBox360_RightStick_DPadNorth,
	XBox360_RightStick_DPadSouth,
	XBox360_RightStick_DPadWest,
	XBox360_RightStick_DPadEast,
	XBox360_DPad_North,
	XBox360_DPad_South,
	XBox360_DPad_West,
	XBox360_DPad_East,
	XBox360_DPad_Move,
	XBox360_Reserved1,
	XBox360_Reserved2,
	XBox360_Reserved3,
	XBox360_Reserved4,
	XBox360_Reserved5,
	XBox360_Reserved6,
	XBox360_Reserved7,
	XBox360_Reserved8,
	XBox360_Reserved9,
	XBox360_Reserved10,
	Switch_A,
	Switch_B,
	Switch_X,
	Switch_Y,
	Switch_LeftBumper,
	Switch_RightBumper,
	Switch_Plus,
	Switch_Minus,
	Switch_Capture,
	Switch_LeftTrigger_Pull,
	Switch_LeftTrigger_Click,
	Switch_RightTrigger_Pull,
	Switch_RightTrigger_Click,
	Switch_LeftStick_Move,
	Switch_LeftStick_Click,
	Switch_LeftStick_DPadNorth,
	Switch_LeftStick_DPadSouth,
	Switch_LeftStick_DPadWest,
	Switch_LeftStick_DPadEast,
	Switch_RightStick_Move,
	Switch_RightStick_Click,
	Switch_RightStick_DPadNorth,
	Switch_RightStick_DPadSouth,
	Switch_RightStick_DPadWest,
	Switch_RightStick_DPadEast,
	Switch_DPad_North,
	Switch_DPad_South,
	Switch_DPad_West,
	Switch_DPad_East,
	Switch_ProGyro_Move,
	Switch_ProGyro_Pitch,
	Switch_ProGyro_Yaw,
	Switch_ProGyro_Roll,
	Switch_DPad_Move,
	Switch_Reserved1,
	Switch_Reserved2,
	Switch_Reserved3,
	Switch_Reserved4,
	Switch_Reserved5,
	Switch_Reserved6,
	Switch_Reserved7,
	Switch_Reserved8,
	Switch_Reserved9,
	Switch_Reserved10,
	Switch_RightGyro_Move,
	Switch_RightGyro_Pitch,
	Switch_RightGyro_Yaw,
	Switch_RightGyro_Roll,
	Switch_LeftGyro_Move,
	Switch_LeftGyro_Pitch,
	Switch_LeftGyro_Yaw,
	Switch_LeftGyro_Roll,
	Switch_LeftGrip_Lower,
	Switch_LeftGrip_Upper,
	Switch_RightGrip_Lower,
	Switch_RightGrip_Upper,
	Switch_Reserved11,
	Switch_Reserved12,
	Switch_Reserved13,
	Switch_Reserved14,
	Switch_Reserved15,
	Switch_Reserved16,
	Switch_Reserved17,
	Switch_Reserved18,
	ESteamCoreInputActionOrigin_MAX,
};

// Enum SteamCore.ESteamCoreInputSourceMode
enum class ESteamCoreInputSourceMode : uint8 {
	None,
	Dpad,
	Buttons,
	FourButtons,
	AbsoluteMouse,
	RelativeMouse,
	JoystickMove,
	JoystickMouse,
	JoystickCamera,
	ScrollWheel,
	Trigger,
	TouchMenu,
	MouseJoystick,
	MouseRegion,
	RadialMenu,
	SingleButton,
	Switches,
	ESteamCoreInputSourceMode_MAX,
};

// Enum SteamCore.ESteamCoreInputSource
enum class ESteamCoreInputSource : uint8 {
	None,
	LeftTrackpad,
	RightTrackpad,
	Joystick,
	ABXY,
	Switch,
	LeftTrigger,
	RightTrigger,
	LeftBumper,
	RightBumper,
	Gyro,
	CenterTrackpad,
	RightJoystick,
	DPad,
	Key,
	Mouse,
	LeftGyro,
	Count,
	ESteamCoreInputSource_MAX,
};

// Enum SteamCore.ESteamCoreItemFlags
enum class ESteamCoreItemFlags : uint8 {
	NoTrade,
	Removed,
	Consumed,
	ESteamCoreItemFlags_MAX,
};

// Enum SteamCore.ESteamLobbyDistanceFilter
enum class ESteamLobbyDistanceFilter : uint8 {
	Close,
	Default,
	Far,
	Worldwide,
	ESteamLobbyDistanceFilter_MAX,
};

// Enum SteamCore.ESteamLobbyComparison
enum class ESteamLobbyComparison : uint8 {
	EqualToOrLessThan,
	LessThan,
	Equal,
	GreaterThan,
	EqualToOrGreaterThan,
	NotEqual,
	ESteamLobbyComparison_MAX,
};

// Enum SteamCore.ESteamLobbyType
enum class ESteamLobbyType : uint8 {
	Private,
	FriendsOnly,
	Public,
	Invisible,
	ESteamLobbyType_MAX,
};

// Enum SteamCore.ESteamSessionFindType
enum class ESteamSessionFindType : uint8 {
	Listen,
	Dedicated,
	ESteamSessionFindType_MAX,
};

// Enum SteamCore.ESteamAudioPlaybackStatus
enum class ESteamAudioPlaybackStatus : uint8 {
	Undefined,
	Playing,
	Paused,
	Idle,
	ESteamAudioPlaybackStatus_MAX,
};

// Enum SteamCore.ESteamP2PSend
enum class ESteamP2PSend : uint8 {
	Unreliable,
	UnreliableNoDelay,
	Reliable,
	ReliableWithBuffering,
	ESteamP2PSend_MAX,
};

// Enum SteamCore.ESteamParentalFeature
enum class ESteamParentalFeature : uint8 {
	Invalid,
	Store,
	Community,
	Profile,
	Friends,
	News,
	Trading,
	Settings,
	Console,
	Browser,
	ParentalSetup,
	Library,
	Test,
	Max,
};

// Enum SteamCore.ESteamPartiesBeaconLocationData
enum class ESteamPartiesBeaconLocationData : uint8 {
	Invalid,
	Name,
	IconURLSmall,
	IconURLMedium,
	IconURLLarge,
	ESteamPartiesBeaconLocationData_MAX,
};

// Enum SteamCore.ESteamPartiesBeaconLocationType
enum class ESteamPartiesBeaconLocationType : uint8 {
	Invalid,
	ChatGroup,
	Max,
};

// Enum SteamCore.ESteamCoreDeviceFormFactor
enum class ESteamCoreDeviceFormFactor : uint8 {
	Unknown,
	Phone,
	Tablet,
	Computer,
	TV,
	ESteamCoreDeviceFormFactor_MAX,
};

// Enum SteamCore.ESteamUGCReadAction
enum class ESteamUGCReadAction : uint8 {
	k_EUGCRead_ContinueReadingUntilFinished,
	k_EUGCRead_ContinueReading,
	k_EUGCRead_Close,
	k_EUGCRead_MAX,
};

// Enum SteamCore.ESteamRemoteStoragePlatform
enum class ESteamRemoteStoragePlatform : uint8 {
	None,
	Windows,
	OSX,
	PS3,
	Linux,
	Reserved2,
	All,
	ESteamRemoteStoragePlatform_MAX,
};

// Enum SteamCore.ESteamVRScreenshotType
enum class ESteamVRScreenshotType : uint8 {
	None,
	Mono,
	Stereo,
	MonoCubemap,
	MonoPanorama,
	StereoPanorama,
	ESteamVRScreenshotType_MAX,
};

// Enum SteamCore.ESteamAccountType
enum class ESteamAccountType : uint8 {
	Invalid,
	Individual,
	Multiseat,
	GameServer,
	AnonGameServer,
	Pending,
	ContentServer,
	Clan,
	Chat,
	ConsoleUser,
	AnonUser,
	Max,
};

// Enum SteamCore.ESteamBeginAuthSessionResult
enum class ESteamBeginAuthSessionResult : uint8 {
	OK,
	InvalidTicket,
	DuplicateRequest,
	InvalidVersion,
	GameMismatch,
	ExpiredTicket,
	ESteamBeginAuthSessionResult_MAX,
};

// Enum SteamCore.ESteamUserHasLicenseForAppResult
enum class ESteamUserHasLicenseForAppResult : uint8 {
	HasLicense,
	DoesNotHaveLicense,
	NoAuth,
	ESteamUserHasLicenseForAppResult_MAX,
};

// Enum SteamCore.EOnlineComparison
enum class EOnlineComparison : uint8 {
	Equals,
	NotEquals,
	GreaterThan,
	GreaterThanEquals,
	LessThan,
	LessThanEquals,
	EOnlineComparison_MAX,
};

// Enum SteamCore.ESteamComparisonOp
enum class ESteamComparisonOp : uint8 {
	Equals,
	NotEquals,
	GreaterThan,
	GreaterThanEquals,
	LessThan,
	LessThanEquals,
	Near,
	In,
	NotIn,
	ESteamComparisonOp_MAX,
};

// Enum SteamCore.ESteamRemoteStoragePublishedFileVisibility
enum class ESteamRemoteStoragePublishedFileVisibility : uint8 {
	Public,
	FriendsOnly,
	Private,
	ESteamRemoteStoragePublishedFileVisibility_MAX,
};

// Enum SteamCore.ESteamWorkshopFileType
enum class ESteamWorkshopFileType : uint8 {
	First,
	Community,
	Microtransaction,
	Collection,
	Art,
	Video,
	Screenshot,
	Game,
	Software,
	Concept,
	WebGuide,
	IntegratedGuide,
	Merch,
	ControllerBinding,
	SteamworksAccessInvite,
	SteamVideo,
	GameManagedItem,
	Max,
};

// Enum SteamCore.ESteamItemPreviewType
enum class ESteamItemPreviewType : uint8 {
	Image,
	YouTubeVideo,
	Sketchfab,
	EnvironmentMap_HorizontalCross,
	EnvironmentMap_LatLong,
	ReservedMax,
	ESteamItemPreviewType_MAX,
};

// Enum SteamCore.ESteamItemStatistic
enum class ESteamItemStatistic : uint8 {
	NumSubscriptions,
	NumFavorites,
	NumFollowers,
	NumUniqueSubscriptions,
	NumUniqueFavorites,
	NumUniqueFollowers,
	NumUniqueWebsiteViews,
	ReportScore,
	NumSecondsPlayed,
	NumPlaytimeSessions,
	NumComments,
	NumSecondsPlayedDuringTimePeriod,
	NumPlaytimeSessionsDuringTimePeriod,
	ESteamItemStatistic_MAX,
};

// Enum SteamCore.ESteamItemState
enum class ESteamItemState : uint8 {
	None,
	Subscribed,
	LegacyItem,
	Installed,
	NeedsUpdate,
	Downloading,
	DownloadPending,
	ESteamItemState_MAX,
};

// Enum SteamCore.ESteamItemUpdateStatus
enum class ESteamItemUpdateStatus : uint8 {
	Invalid,
	PreparingConfig,
	PreparingContent,
	UploadingContent,
	UploadingPreviewFile,
	CommittingChanges,
	ESteamItemUpdateStatus_MAX,
};

// Enum SteamCore.ESteamUGCQuery
enum class ESteamUGCQuery : uint8 {
	RankedByVote,
	RankedByPublicationDate,
	AcceptedForGameRankedByAcceptanceDate,
	RankedByTrend,
	FavoritedByFriendsRankedByPublicationDate,
	CreatedByFriendsRankedByPublicationDate,
	RankedByNumTimesReported,
	CreatedByFollowedUsersRankedByPublicationDate,
	NotYetRated,
	RankedByTotalVotesAsc,
	RankedByVotesUp,
	RankedByTextSearch,
	RankedByTotalUniqueSubscriptions,
	RankedByPlaytimeTrend,
	RankedByTotalPlaytime,
	RankedByAveragePlaytimeTrend,
	RankedByLifetimeAveragePlaytime,
	RankedByPlaytimeSessionsTrend,
	RankedByLifetimePlaytimeSessions,
	ESteamUGCQuery_MAX,
};

// Enum SteamCore.ESteamUserUGCListSortOrder
enum class ESteamUserUGCListSortOrder : uint8 {
	CreationOrderDesc,
	CreationOrderAsc,
	TitleAsc,
	LastUpdatedDesc,
	SubscriptionDateDesc,
	VoteScoreDesc,
	ForModeration,
	ESteamUserUGCListSortOrder_MAX,
};

// Enum SteamCore.ESteamUserUGCList
enum class ESteamUserUGCList : uint8 {
	Published,
	VotedOn,
	VotedUp,
	VotedDown,
	WillVoteLater,
	Favorited,
	Subscribed,
	UsedOrPlayed,
	Followed,
	ESteamUserUGCList_MAX,
};

// Enum SteamCore.ESteamUGCMatchingUGCType
enum class ESteamUGCMatchingUGCType : uint8 {
	Items,
	Items_Mtx,
	Items_ReadyToUse,
	Collections,
	Artwork,
	Videos,
	Screenshots,
	AllGuides,
	WebGuides,
	IntegratedGuides,
	UsableInGame,
	ControllerBindings,
	GameManagedItems,
	All,
	ESteamUGCMatchingUGCType_MAX,
};

// Enum SteamCore.ESteamLeaderboardUploadScoreMethod
enum class ESteamLeaderboardUploadScoreMethod : uint8 {
	None,
	KeepBest,
	ForceUpdate,
	ESteamLeaderboardUploadScoreMethod_MAX,
};

// Enum SteamCore.ESteamLeaderboardDisplayType
enum class ESteamLeaderboardDisplayType : uint8 {
	None,
	Numeric,
	TimeSeconds,
	TimeMilliSeconds,
	ESteamLeaderboardDisplayType_MAX,
};

// Enum SteamCore.ESteamLeaderboardSortMethod
enum class ESteamLeaderboardSortMethod : uint8 {
	None,
	Ascending,
	Descending,
	ESteamLeaderboardSortMethod_MAX,
};

// Enum SteamCore.ESteamLeaderboardDataRequest
enum class ESteamLeaderboardDataRequest : uint8 {
	Global,
	GlobalAroundUser,
	Friends,
	Users,
	ESteamLeaderboardDataRequest_MAX,
};

// Enum SteamCore.ESteamVoiceResult
enum class ESteamVoiceResult : uint8 {
	OK,
	NotInitialized,
	NotRecording,
	NoData,
	BufferTooSmall,
	DataCorrupted,
	Restricted,
	UnsupportedCodec,
	ReceiverOutOfDate,
	ReceiverDidNotAnswer,
	ESteamVoiceResult_MAX,
};

// Enum SteamCore.ESteamCoreIdentical
enum class ESteamCoreIdentical : uint8 {
	Identical,
	NotIdentical,
	ESteamCoreIdentical_MAX,
};

// Enum SteamCore.ESteamCoreValid
enum class ESteamCoreValid : uint8 {
	Valid,
	NotValid,
	ESteamCoreValid_MAX,
};

// Enum SteamCore.ESteamUniverse
enum class ESteamUniverse : uint8 {
	Invalid,
	Public,
	Beta,
	Internal,
	Dev,
	Max,
};

// Enum SteamCore.ESteamNotificationPosition
enum class ESteamNotificationPosition : uint8 {
	TopLeft,
	TopRight,
	BottomLeft,
	BottomRight,
	ESteamNotificationPosition_MAX,
};

// Enum SteamCore.ESteamGamepadTextInputMode
enum class ESteamGamepadTextInputMode : uint8 {
	Normal,
	Password,
	ESteamGamepadTextInputMode_MAX,
};

// Enum SteamCore.ESteamGamepadTextInputLineMode
enum class ESteamGamepadTextInputLineMode : uint8 {
	SingleLine,
	MultipleLines,
	ESteamGamepadTextInputLineMode_MAX,
};

// Enum SteamCore.ESteamBroadcastUploadResult
enum class ESteamBroadcastUploadResult : uint8 {
	None,
	OK,
	InitFailed,
	FrameFailed,
	Timeout,
	BandwidthExceeded,
	LowFPS,
	MissingKeyFrames,
	NoConnection,
	RelayFailed,
	SettingsChanged,
	MissingAudio,
	TooFarBehind,
	TranscodeBehind,
	ESteamBroadcastUploadResult_MAX,
};

// ScriptStruct SteamCore.SteamInventoryResultReady
// Size: 0x08 (Inherited: 0x00)
struct FSteamInventoryResultReady {
	struct FSteamInventoryResult Handle; // 0x00(0x04)
	enum class ESteamResult Result; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct SteamCore.SteamInventoryResult
// Size: 0x04 (Inherited: 0x00)
struct FSteamInventoryResult {
	int32_t Value; // 0x00(0x04)
};

// ScriptStruct SteamCore.SteamInventoryFullUpdate
// Size: 0x04 (Inherited: 0x00)
struct FSteamInventoryFullUpdate {
	struct FSteamInventoryResult Handle; // 0x00(0x04)
};

// ScriptStruct SteamCore.SteamInventoryStartPurchaseResult
// Size: 0x28 (Inherited: 0x00)
struct FSteamInventoryStartPurchaseResult {
	enum class ESteamResult Result; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString OrderId; // 0x08(0x10)
	struct FString TransactionId; // 0x18(0x10)
};

// ScriptStruct SteamCore.SteamInventoryRequestPricesResult
// Size: 0x18 (Inherited: 0x00)
struct FSteamInventoryRequestPricesResult {
	enum class ESteamResult Result; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString Currency; // 0x08(0x10)
};

// ScriptStruct SteamCore.SteamInventoryEligiblePromoItemDefIDs
// Size: 0x18 (Inherited: 0x00)
struct FSteamInventoryEligiblePromoItemDefIDs {
	enum class ESteamResult Result; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FSteamID SteamID; // 0x08(0x08)
	int32_t NumEligiblePromoItemDefs; // 0x10(0x04)
	bool bCachedData; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct SteamCore.SteamID
// Size: 0x08 (Inherited: 0x00)
struct FSteamID {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct SteamCore.SteamAppInstalled
// Size: 0x04 (Inherited: 0x00)
struct FSteamAppInstalled {
	int32_t AppID; // 0x00(0x04)
};

// ScriptStruct SteamCore.SteamAppUninstalled
// Size: 0x04 (Inherited: 0x00)
struct FSteamAppUninstalled {
	int32_t AppID; // 0x00(0x04)
};

// ScriptStruct SteamCore.FileDetailsResult
// Size: 0x28 (Inherited: 0x00)
struct FFileDetailsResult {
	enum class ESteamResult Result; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t FileSize; // 0x04(0x04)
	struct FString SHA; // 0x08(0x10)
	struct TArray<int32_t> Flags; // 0x18(0x10)
};

// ScriptStruct SteamCore.DLCInstalled
// Size: 0x04 (Inherited: 0x00)
struct FDLCInstalled {
	int32_t AppID; // 0x00(0x04)
};

// ScriptStruct SteamCore.GameOverlayActivated
// Size: 0x01 (Inherited: 0x00)
struct FGameOverlayActivated {
	bool bActive; // 0x00(0x01)
};

// ScriptStruct SteamCore.AvatarImageLoaded
// Size: 0x20 (Inherited: 0x00)
struct FAvatarImageLoaded {
	struct FSteamID SteamID; // 0x00(0x08)
	struct UTexture2D* Image; // 0x08(0x08)
	char pad_10[0x10]; // 0x10(0x10)
};

// ScriptStruct SteamCore.GameServerChangeRequested
// Size: 0x20 (Inherited: 0x00)
struct FGameServerChangeRequested {
	struct FString Server; // 0x00(0x10)
	struct FString Password; // 0x10(0x10)
};

// ScriptStruct SteamCore.GameConnectedFriendChatMsg
// Size: 0x10 (Inherited: 0x00)
struct FGameConnectedFriendChatMsg {
	struct FSteamID SteamIDUser; // 0x00(0x08)
	int32_t MessageID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct SteamCore.GameLobbyJoinRequested
// Size: 0x10 (Inherited: 0x00)
struct FGameLobbyJoinRequested {
	struct FSteamID SteamIDLobby; // 0x00(0x08)
	struct FSteamID SteamIDFriend; // 0x08(0x08)
};

// ScriptStruct SteamCore.GameRichPresenceJoinRequested
// Size: 0x18 (Inherited: 0x00)
struct FGameRichPresenceJoinRequested {
	struct FSteamID SteamIDFriend; // 0x00(0x08)
	struct FString connect; // 0x08(0x10)
};

// ScriptStruct SteamCore.PersonaStateChange
// Size: 0x18 (Inherited: 0x00)
struct FPersonaStateChange {
	struct FSteamID SteamID; // 0x00(0x08)
	struct TArray<enum class ESteamPersonaChange> Flags; // 0x08(0x10)
};

// ScriptStruct SteamCore.ClanOfficerListResponse
// Size: 0x10 (Inherited: 0x00)
struct FClanOfficerListResponse {
	struct FSteamID SteamIDClan; // 0x00(0x08)
	int32_t Officers; // 0x08(0x04)
	bool bSuccess; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct SteamCore.FriendRichPresenceUpdate
// Size: 0x10 (Inherited: 0x00)
struct FFriendRichPresenceUpdate {
	struct FSteamID SteamIDFriend; // 0x00(0x08)
	int32_t AppID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct SteamCore.GameConnectedClanChatMsg
// Size: 0x18 (Inherited: 0x00)
struct FGameConnectedClanChatMsg {
	struct FSteamID SteamIDUser; // 0x00(0x08)
	struct FSteamID SteamIDClanChat; // 0x08(0x08)
	int32_t MessageID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct SteamCore.GameConnectedChatJoin
// Size: 0x10 (Inherited: 0x00)
struct FGameConnectedChatJoin {
	struct FSteamID SteamIDClanChat; // 0x00(0x08)
	struct FSteamID SteamIDUser; // 0x08(0x08)
};

// ScriptStruct SteamCore.GameConnectedChatLeave
// Size: 0x18 (Inherited: 0x00)
struct FGameConnectedChatLeave {
	struct FSteamID SteamIDClanChat; // 0x00(0x08)
	struct FSteamID SteamIDUser; // 0x08(0x08)
	bool bKicked; // 0x10(0x01)
	bool bDropped; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)
};

// ScriptStruct SteamCore.DownloadClanActivityCountsResult
// Size: 0x01 (Inherited: 0x00)
struct FDownloadClanActivityCountsResult {
	bool bSuccess; // 0x00(0x01)
};

// ScriptStruct SteamCore.JoinClanChatRoomCompletionResult
// Size: 0x10 (Inherited: 0x00)
struct FJoinClanChatRoomCompletionResult {
	struct FSteamID SteamIDClanChat; // 0x00(0x08)
	enum class ESteamChatRoomEnterResponse ChatRoomEnterResponse; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct SteamCore.SetPersonaNameResponse
// Size: 0x03 (Inherited: 0x00)
struct FSetPersonaNameResponse {
	enum class ESteamResult Result; // 0x00(0x01)
	bool bSuccess; // 0x01(0x01)
	bool bLocalSuccess; // 0x02(0x01)
};

// ScriptStruct SteamCore.FriendsGetFollowerCount
// Size: 0x18 (Inherited: 0x00)
struct FFriendsGetFollowerCount {
	enum class ESteamResult Result; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FSteamID SteamID; // 0x08(0x08)
	int32_t Count; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct SteamCore.FriendsIsFollowing
// Size: 0x18 (Inherited: 0x00)
struct FFriendsIsFollowing {
	enum class ESteamResult Result; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FSteamID SteamID; // 0x08(0x08)
	bool bIsFollowing; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct SteamCore.FriendsEnumerateFollowingList
// Size: 0x20 (Inherited: 0x00)
struct FFriendsEnumerateFollowingList {
	enum class ESteamResult Result; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FSteamID> SteamIDs; // 0x08(0x10)
	int32_t Results; // 0x18(0x04)
	int32_t TotalResult; // 0x1c(0x04)
};

// ScriptStruct SteamCore.SearchForGameProgressCallback
// Size: 0x30 (Inherited: 0x00)
struct FSearchForGameProgressCallback {
	struct FString SearchID; // 0x00(0x10)
	enum class ESteamResult Result; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FSteamID LobbyID; // 0x18(0x08)
	struct FSteamID SteamIDEndedSearch; // 0x20(0x08)
	int32_t SecondsRemainingEstimate; // 0x28(0x04)
	int32_t PlayersSearching; // 0x2c(0x04)
};

// ScriptStruct SteamCore.SearchForGameResultCallback
// Size: 0x30 (Inherited: 0x00)
struct FSearchForGameResultCallback {
	struct FString SearchID; // 0x00(0x10)
	enum class ESteamResult Result; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	int32_t CountPlayersInGame; // 0x14(0x04)
	int32_t CountAcceptedGame; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FSteamID SteamIDHost; // 0x20(0x08)
	bool bFinalCallback; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct SteamCore.RequestPlayersForGameProgressCallback
// Size: 0x18 (Inherited: 0x00)
struct FRequestPlayersForGameProgressCallback {
	enum class ESteamResult Result; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString SearchID; // 0x08(0x10)
};

// ScriptStruct SteamCore.RequestPlayersForGameResultCallback
// Size: 0x50 (Inherited: 0x00)
struct FRequestPlayersForGameResultCallback {
	enum class ESteamResult Result; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString SearchID; // 0x08(0x10)
	struct FSteamID SteamIDPlayerFound; // 0x18(0x08)
	struct FSteamID SteamIDLobby; // 0x20(0x08)
	enum class ESteamPlayerAcceptState PlayerAcceptState; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	int32_t PlayerIndex; // 0x2c(0x04)
	int32_t TotalPlayersFound; // 0x30(0x04)
	int32_t TotalPlayersAcceptedGame; // 0x34(0x04)
	int32_t SuggestedTeamIndex; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FString UniqueGameID; // 0x40(0x10)
};

// ScriptStruct SteamCore.RequestPlayersForGameFinalResultCallback
// Size: 0x28 (Inherited: 0x00)
struct FRequestPlayersForGameFinalResultCallback {
	enum class ESteamResult Result; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString SearchID; // 0x08(0x10)
	struct FString UniqueGameID; // 0x18(0x10)
};

// ScriptStruct SteamCore.SubmitPlayerResultResultCallback
// Size: 0x20 (Inherited: 0x00)
struct FSubmitPlayerResultResultCallback {
	enum class ESteamResult Result; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString UniqueGameID; // 0x08(0x10)
	struct FSteamID SteamIDPlayer; // 0x18(0x08)
};

// ScriptStruct SteamCore.EndGameResultCallback
// Size: 0x18 (Inherited: 0x00)
struct FEndGameResultCallback {
	enum class ESteamResult Result; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString UniqueGameID; // 0x08(0x10)
};

// ScriptStruct SteamCore.AssociateWithClanResult
// Size: 0x01 (Inherited: 0x00)
struct FAssociateWithClanResult {
	enum class ESteamResult Result; // 0x00(0x01)
};

// ScriptStruct SteamCore.ComputeNewPlayerCompatibilityResult
// Size: 0x18 (Inherited: 0x00)
struct FComputeNewPlayerCompatibilityResult {
	enum class ESteamResult Result; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t PlayersThatDontLikeCandidate; // 0x04(0x04)
	int32_t PlayersThatCandidateDoesntLike; // 0x08(0x04)
	int32_t ClanPlayersThatDontLikeCandidate; // 0x0c(0x04)
	struct FSteamID SteamIDCandidate; // 0x10(0x08)
};

// ScriptStruct SteamCore.GSPolicyResponse
// Size: 0x01 (Inherited: 0x00)
struct FGSPolicyResponse {
	bool BSecure; // 0x00(0x01)
};

// ScriptStruct SteamCore.GSClientGroupStatus
// Size: 0x18 (Inherited: 0x00)
struct FGSClientGroupStatus {
	struct FSteamID SteamIDUser; // 0x00(0x08)
	struct FSteamID SteamIDGroup; // 0x08(0x08)
	bool bMember; // 0x10(0x01)
	bool bOfficer; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)
};

// ScriptStruct SteamCore.ValidateAuthTicketResponse
// Size: 0x18 (Inherited: 0x00)
struct FValidateAuthTicketResponse {
	struct FSteamID SteamID; // 0x00(0x08)
	enum class ESteamAuthSessionResponse AuthSessionResponse; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FSteamID OwnerSteamID; // 0x10(0x08)
};

// ScriptStruct SteamCore.GSClientApprove
// Size: 0x10 (Inherited: 0x00)
struct FGSClientApprove {
	struct FSteamID SteamID; // 0x00(0x08)
	struct FSteamID OwnerSteamID; // 0x08(0x08)
};

// ScriptStruct SteamCore.GSClientDeny
// Size: 0x20 (Inherited: 0x00)
struct FGSClientDeny {
	struct FSteamID SteamID; // 0x00(0x08)
	enum class ESteamDenyReason DenyReason; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString OptionalText; // 0x10(0x10)
};

// ScriptStruct SteamCore.GSStatsReceived
// Size: 0x10 (Inherited: 0x00)
struct FGSStatsReceived {
	enum class ESteamResult Result; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FSteamID SteamIDUser; // 0x08(0x08)
};

// ScriptStruct SteamCore.GSStatsStored
// Size: 0x10 (Inherited: 0x00)
struct FGSStatsStored {
	enum class ESteamResult Result; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FSteamID SteamIDUser; // 0x08(0x08)
};

// ScriptStruct SteamCore.GSStatsUnloaded
// Size: 0x08 (Inherited: 0x00)
struct FGSStatsUnloaded {
	struct FSteamID SteamIDUser; // 0x00(0x08)
};

// ScriptStruct SteamCore.FavoritesListAccountsUpdated
// Size: 0x01 (Inherited: 0x00)
struct FFavoritesListAccountsUpdated {
	enum class ESteamResult Result; // 0x00(0x01)
};

// ScriptStruct SteamCore.FavoritesListChanged
// Size: 0x40 (Inherited: 0x00)
struct FFavoritesListChanged {
	struct FString IP; // 0x00(0x10)
	int32_t QueryPort; // 0x10(0x04)
	int32_t ConnectionPort; // 0x14(0x04)
	int32_t AppID; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<enum class ESteamFavoriteFlags> Flags; // 0x20(0x10)
	bool bAdd; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FSteamID SteamID; // 0x38(0x08)
};

// ScriptStruct SteamCore.LobbyChatMsg
// Size: 0x18 (Inherited: 0x00)
struct FLobbyChatMsg {
	struct FSteamID SteamIDLobby; // 0x00(0x08)
	struct FSteamID SteamIDUser; // 0x08(0x08)
	enum class ESteamChatEntryType ChatEntryType; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	int32_t ChatID; // 0x14(0x04)
};

// ScriptStruct SteamCore.LobbyChatUpdate
// Size: 0x28 (Inherited: 0x00)
struct FLobbyChatUpdate {
	struct FSteamID SteamIDLobby; // 0x00(0x08)
	struct FSteamID SteamIDUserChanged; // 0x08(0x08)
	struct FSteamID SteamIDMakingChange; // 0x10(0x08)
	struct TArray<enum class ESteamChatMemberStateChange> ChatMemberStateChange; // 0x18(0x10)
};

// ScriptStruct SteamCore.LobbyDataUpdate
// Size: 0x18 (Inherited: 0x00)
struct FLobbyDataUpdate {
	struct FSteamID SteamIDLobby; // 0x00(0x08)
	struct FSteamID SteamIDMember; // 0x08(0x08)
	bool bSuccess; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct SteamCore.LobbyEnterData
// Size: 0x10 (Inherited: 0x00)
struct FLobbyEnterData {
	struct FSteamID SteamIDLobby; // 0x00(0x08)
	bool bLocked; // 0x08(0x01)
	enum class ESteamChatRoomEnterResponse ChatRoomEnterResponse; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
};

// ScriptStruct SteamCore.LobbyGameCreated
// Size: 0x28 (Inherited: 0x00)
struct FLobbyGameCreated {
	struct FSteamID SteamIDLobby; // 0x00(0x08)
	struct FSteamID SteamIDGameServer; // 0x08(0x08)
	struct FString IP; // 0x10(0x10)
	int32_t Port; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct SteamCore.LobbyInviteData
// Size: 0x18 (Inherited: 0x00)
struct FLobbyInviteData {
	struct FSteamID SteamIDUser; // 0x00(0x08)
	struct FSteamID SteamIDLobby; // 0x08(0x08)
	struct FSteamGameID GameID; // 0x10(0x08)
};

// ScriptStruct SteamCore.SteamGameID
// Size: 0x08 (Inherited: 0x00)
struct FSteamGameID {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct SteamCore.LobbyKickedData
// Size: 0x18 (Inherited: 0x00)
struct FLobbyKickedData {
	struct FSteamID SteamIDLobby; // 0x00(0x08)
	struct FSteamID SteamIDAdmin; // 0x08(0x08)
	bool bKickedDueToDisconnect; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct SteamCore.LobbyMatchList
// Size: 0x04 (Inherited: 0x00)
struct FLobbyMatchList {
	int32_t LobbiesMatching; // 0x00(0x04)
};

// ScriptStruct SteamCore.CreateLobbyData
// Size: 0x10 (Inherited: 0x00)
struct FCreateLobbyData {
	enum class ESteamResult Result; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FSteamID SteamIDLobby; // 0x08(0x08)
};

// ScriptStruct SteamCore.JoinLobbyData
// Size: 0x10 (Inherited: 0x00)
struct FJoinLobbyData {
	struct FSteamID SteamIDLobby; // 0x00(0x08)
	bool bLocked; // 0x08(0x01)
	enum class ESteamChatRoomEnterResponse ChatRoomEnterResponse; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
};

// ScriptStruct SteamCore.SteamSessionResult
// Size: 0x118 (Inherited: 0x00)
struct FSteamSessionResult {
	struct FBlueprintSessionResult Result; // 0x00(0x108)
	struct TArray<struct FSteamSessionSetting> SessionSettings; // 0x108(0x10)
};

// ScriptStruct SteamCore.SteamSessionSetting
// Size: 0x28 (Inherited: 0x00)
struct FSteamSessionSetting {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct SteamCore.GameServerItem
// Size: 0xb0 (Inherited: 0x00)
struct FGameServerItem {
	struct FString ServerName; // 0x00(0x10)
	struct FString MapName; // 0x10(0x10)
	struct FString GameDescription; // 0x20(0x10)
	struct FString GameTags; // 0x30(0x10)
	struct FSteamServerAddr SteamServerAddr; // 0x40(0x38)
	int32_t Ping; // 0x78(0x04)
	int32_t Players; // 0x7c(0x04)
	int32_t MaxPlayers; // 0x80(0x04)
	int32_t BotPlayers; // 0x84(0x04)
	int32_t ServerVersion; // 0x88(0x04)
	bool bPassword; // 0x8c(0x01)
	bool BSecure; // 0x8d(0x01)
	char pad_8E[0x22]; // 0x8e(0x22)
};

// ScriptStruct SteamCore.SteamServerAddr
// Size: 0x38 (Inherited: 0x00)
struct FSteamServerAddr {
	struct FString IP; // 0x00(0x10)
	int32_t Port; // 0x10(0x04)
	int32_t QueryPort; // 0x14(0x04)
	struct FString ConnectionAddressString; // 0x18(0x10)
	struct FString SteamP2PAddr; // 0x28(0x10)
};

// ScriptStruct SteamCore.GameServerRule
// Size: 0x20 (Inherited: 0x00)
struct FGameServerRule {
	struct FString Name; // 0x00(0x10)
	struct FString Value; // 0x10(0x10)
};

// ScriptStruct SteamCore.PlaybackStatusHasChanged
// Size: 0x01 (Inherited: 0x00)
struct FPlaybackStatusHasChanged {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct SteamCore.VolumeHasChanged
// Size: 0x04 (Inherited: 0x00)
struct FVolumeHasChanged {
	float Volume; // 0x00(0x04)
};

// ScriptStruct SteamCore.P2PSessionRequest
// Size: 0x08 (Inherited: 0x00)
struct FP2PSessionRequest {
	struct FSteamID SteamIDRemote; // 0x00(0x08)
};

// ScriptStruct SteamCore.P2PSessionConnectFail
// Size: 0x10 (Inherited: 0x00)
struct FP2PSessionConnectFail {
	struct FSteamID SteamIDRemote; // 0x00(0x08)
	enum class ESteamP2PSessionError P2PSessionError; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct SteamCore.JoinPartyData
// Size: 0x28 (Inherited: 0x00)
struct FJoinPartyData {
	enum class ESteamResult Result; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FPartyBeaconID BeaconID; // 0x08(0x08)
	struct FSteamID SteamIDBeaconOwner; // 0x10(0x08)
	struct FString ConnectString; // 0x18(0x10)
};

// ScriptStruct SteamCore.PartyBeaconID
// Size: 0x08 (Inherited: 0x00)
struct FPartyBeaconID {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct SteamCore.CreateBeaconData
// Size: 0x10 (Inherited: 0x00)
struct FCreateBeaconData {
	enum class ESteamResult Result; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FPartyBeaconID BeaconID; // 0x08(0x08)
};

// ScriptStruct SteamCore.ReservationNotificationData
// Size: 0x10 (Inherited: 0x00)
struct FReservationNotificationData {
	struct FPartyBeaconID BeaconID; // 0x00(0x08)
	struct FSteamID SteamIDJoiner; // 0x08(0x08)
};

// ScriptStruct SteamCore.ChangeNumOpenSlotsData
// Size: 0x01 (Inherited: 0x00)
struct FChangeNumOpenSlotsData {
	enum class ESteamResult Result; // 0x00(0x01)
};

// ScriptStruct SteamCore.SteamRemotePlaySessionConnected
// Size: 0x04 (Inherited: 0x00)
struct FSteamRemotePlaySessionConnected {
	int32_t SessionID; // 0x00(0x04)
};

// ScriptStruct SteamCore.SteamRemotePlaySessionDisconnected
// Size: 0x04 (Inherited: 0x00)
struct FSteamRemotePlaySessionDisconnected {
	int32_t SessionID; // 0x00(0x04)
};

// ScriptStruct SteamCore.RemoteStorageUnsubscribePublishedFileResult
// Size: 0x10 (Inherited: 0x00)
struct FRemoteStorageUnsubscribePublishedFileResult {
	enum class ESteamResult Result; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FPublishedFileID PublishedFileID; // 0x08(0x08)
};

// ScriptStruct SteamCore.PublishedFileID
// Size: 0x08 (Inherited: 0x00)
struct FPublishedFileID {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct SteamCore.RemoteStorageSubscribePublishedFileResult
// Size: 0x10 (Inherited: 0x00)
struct FRemoteStorageSubscribePublishedFileResult {
	enum class ESteamResult Result; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FPublishedFileID PublishedFileID; // 0x08(0x08)
};

// ScriptStruct SteamCore.RemoteStoragePublishedFileUnsubscribed
// Size: 0x10 (Inherited: 0x00)
struct FRemoteStoragePublishedFileUnsubscribed {
	struct FPublishedFileID PublishedFileID; // 0x00(0x08)
	int32_t AppID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct SteamCore.RemoteStoragePublishedFileSubscribed
// Size: 0x10 (Inherited: 0x00)
struct FRemoteStoragePublishedFileSubscribed {
	struct FPublishedFileID PublishedFileID; // 0x00(0x08)
	int32_t AppID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct SteamCore.RemoteStorageFileWriteAsyncComplete
// Size: 0x01 (Inherited: 0x00)
struct FRemoteStorageFileWriteAsyncComplete {
	enum class ESteamResult Result; // 0x00(0x01)
};

// ScriptStruct SteamCore.RemoteStorageFileReadAsyncComplete
// Size: 0x18 (Inherited: 0x00)
struct FRemoteStorageFileReadAsyncComplete {
	enum class ESteamResult Result; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t Offset; // 0x04(0x04)
	int32_t Read; // 0x08(0x04)
	char pad_C[0xc]; // 0x0c(0x0c)
};

// ScriptStruct SteamCore.RemoteStorageDownloadUGCResult
// Size: 0x30 (Inherited: 0x00)
struct FRemoteStorageDownloadUGCResult {
	enum class ESteamResult Result; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FSteamUGCHandle FileHandle; // 0x08(0x08)
	int32_t AppID; // 0x10(0x04)
	int32_t SizeInBytes; // 0x14(0x04)
	struct FString Filename; // 0x18(0x10)
	struct FSteamID SteamIDOwner; // 0x28(0x08)
};

// ScriptStruct SteamCore.SteamUGCHandle
// Size: 0x08 (Inherited: 0x00)
struct FSteamUGCHandle {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct SteamCore.RemoteStorageFileShareResult
// Size: 0x20 (Inherited: 0x00)
struct FRemoteStorageFileShareResult {
	enum class ESteamResult Result; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FSteamUGCHandle File; // 0x08(0x08)
	struct FString Filename; // 0x10(0x10)
};

// ScriptStruct SteamCore.ScreenshotReady
// Size: 0x08 (Inherited: 0x00)
struct FScreenshotReady {
	struct FScreenshotHandle Handle; // 0x00(0x04)
	enum class ESteamResult Result; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct SteamCore.ScreenshotHandle
// Size: 0x04 (Inherited: 0x00)
struct FScreenshotHandle {
	char pad_0[0x4]; // 0x00(0x04)
};

// ScriptStruct SteamCore.ScreenshotRequested
// Size: 0x01 (Inherited: 0x00)
struct FScreenshotRequested {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct SteamCore.UserFavoriteItemsListChanged
// Size: 0x10 (Inherited: 0x00)
struct FUserFavoriteItemsListChanged {
	struct FPublishedFileID PublishedFileID; // 0x00(0x08)
	enum class ESteamResult Result; // 0x08(0x01)
	bool bWasAddRequest; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
};

// ScriptStruct SteamCore.CreateItemResult
// Size: 0x18 (Inherited: 0x00)
struct FCreateItemResult {
	enum class ESteamResult Result; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FPublishedFileID PublishedFileID; // 0x08(0x08)
	bool bUserNeedsToAcceptWorkshopLegalAgreement; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct SteamCore.SetUserItemVoteResult
// Size: 0x10 (Inherited: 0x00)
struct FSetUserItemVoteResult {
	struct FPublishedFileID PublishedFileID; // 0x00(0x08)
	enum class ESteamResult Result; // 0x08(0x01)
	bool bVoteUp; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
};

// ScriptStruct SteamCore.GetUserItemVoteResult
// Size: 0x10 (Inherited: 0x00)
struct FGetUserItemVoteResult {
	struct FPublishedFileID PublishedFileID; // 0x00(0x08)
	enum class ESteamResult Result; // 0x08(0x01)
	bool bVotedUp; // 0x09(0x01)
	bool bVotedDown; // 0x0a(0x01)
	bool bVoteSkipped; // 0x0b(0x01)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct SteamCore.SteamUGCQueryCompleted
// Size: 0x18 (Inherited: 0x00)
struct FSteamUGCQueryCompleted {
	struct FUGCQueryHandle Handle; // 0x00(0x08)
	enum class ESteamResult Result; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t NumResultsReturned; // 0x0c(0x04)
	int32_t TotalMatchingResults; // 0x10(0x04)
	bool bCachedData; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct SteamCore.UGCQueryHandle
// Size: 0x08 (Inherited: 0x00)
struct FUGCQueryHandle {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct SteamCore.AddAppDependencyResult
// Size: 0x18 (Inherited: 0x00)
struct FAddAppDependencyResult {
	enum class ESteamResult Result; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FPublishedFileID PublishedFileID; // 0x08(0x08)
	int32_t AppID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct SteamCore.RemoveAppDependencyResult
// Size: 0x18 (Inherited: 0x00)
struct FRemoveAppDependencyResult {
	enum class ESteamResult Result; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FPublishedFileID PublishedFileID; // 0x08(0x08)
	int32_t AppID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct SteamCore.AddUGCDependencyResult
// Size: 0x18 (Inherited: 0x00)
struct FAddUGCDependencyResult {
	enum class ESteamResult Result; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FPublishedFileID PublishedFileID; // 0x08(0x08)
	struct FPublishedFileID ChildPublishedFileId; // 0x10(0x08)
};

// ScriptStruct SteamCore.RemoveUGCDependencyResult
// Size: 0x18 (Inherited: 0x00)
struct FRemoveUGCDependencyResult {
	enum class ESteamResult Result; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FPublishedFileID PublishedFileID; // 0x08(0x08)
	struct FPublishedFileID ChildPublishedFileId; // 0x10(0x08)
};

// ScriptStruct SteamCore.UGCDeleteItemResult
// Size: 0x10 (Inherited: 0x00)
struct FUGCDeleteItemResult {
	enum class ESteamResult Result; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FPublishedFileID PublishedFileID; // 0x08(0x08)
};

// ScriptStruct SteamCore.GetAppDependenciesResult
// Size: 0x28 (Inherited: 0x00)
struct FGetAppDependenciesResult {
	enum class ESteamResult Result; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FPublishedFileID PublishedFileID; // 0x08(0x08)
	struct TArray<int32_t> AppIDs; // 0x10(0x10)
	int32_t NumAppDependencies; // 0x20(0x04)
	int32_t TotalNumAppDependencies; // 0x24(0x04)
};

// ScriptStruct SteamCore.SubmitItemUpdateResult
// Size: 0x10 (Inherited: 0x00)
struct FSubmitItemUpdateResult {
	enum class ESteamResult Result; // 0x00(0x01)
	bool bUserNeedsToAcceptWorkshopLegalAgreement; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct FPublishedFileID PublishedFileID; // 0x08(0x08)
};

// ScriptStruct SteamCore.StartPlaytimeTrackingResult
// Size: 0x01 (Inherited: 0x00)
struct FStartPlaytimeTrackingResult {
	enum class ESteamResult Result; // 0x00(0x01)
};

// ScriptStruct SteamCore.StopPlaytimeTrackingResult
// Size: 0x01 (Inherited: 0x00)
struct FStopPlaytimeTrackingResult {
	enum class ESteamResult Result; // 0x00(0x01)
};

// ScriptStruct SteamCore.DownloadItemResult
// Size: 0x18 (Inherited: 0x00)
struct FDownloadItemResult {
	int32_t AppID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FPublishedFileID PublishedFileID; // 0x08(0x08)
	enum class ESteamResult Result; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct SteamCore.ItemInstalled
// Size: 0x10 (Inherited: 0x00)
struct FItemInstalled {
	int32_t AppID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FPublishedFileID PublishedFileID; // 0x08(0x08)
};

// ScriptStruct SteamCore.ClientGameServerDeny
// Size: 0x20 (Inherited: 0x00)
struct FClientGameServerDeny {
	int32_t AppID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString GameServerIP; // 0x08(0x10)
	int32_t GameServerPort; // 0x18(0x04)
	bool BSecure; // 0x1c(0x01)
	enum class ESteamDenyReason Reason; // 0x1d(0x01)
	char pad_1E[0x2]; // 0x1e(0x02)
};

// ScriptStruct SteamCore.GameWebCallback
// Size: 0x10 (Inherited: 0x00)
struct FGameWebCallback {
	struct FString URL; // 0x00(0x10)
};

// ScriptStruct SteamCore.GetAuthSessionTicketResponse
// Size: 0x08 (Inherited: 0x00)
struct FGetAuthSessionTicketResponse {
	struct FSteamTicketHandle AuthTicket; // 0x00(0x04)
	enum class ESteamResult Result; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct SteamCore.SteamTicketHandle
// Size: 0x04 (Inherited: 0x00)
struct FSteamTicketHandle {
	char pad_0[0x4]; // 0x00(0x04)
};

// ScriptStruct SteamCore.IPCFailure
// Size: 0x01 (Inherited: 0x00)
struct FIPCFailure {
	enum class ESteamFailureType FailureType; // 0x00(0x01)
};

// ScriptStruct SteamCore.LicensesUpdated
// Size: 0x01 (Inherited: 0x00)
struct FLicensesUpdated {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct SteamCore.MicroTxnAuthorizationResponse
// Size: 0x20 (Inherited: 0x00)
struct FMicroTxnAuthorizationResponse {
	int32_t AppID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString OrderId; // 0x08(0x10)
	bool bAuthorized; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct SteamCore.SteamServersConnected
// Size: 0x01 (Inherited: 0x00)
struct FSteamServersConnected {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct SteamCore.SteamServerConnectFailure
// Size: 0x02 (Inherited: 0x00)
struct FSteamServerConnectFailure {
	enum class ESteamResult Result; // 0x00(0x01)
	bool bStillRetrying; // 0x01(0x01)
};

// ScriptStruct SteamCore.SteamServersDisconnected
// Size: 0x01 (Inherited: 0x00)
struct FSteamServersDisconnected {
	enum class ESteamResult Result; // 0x00(0x01)
};

// ScriptStruct SteamCore.EncryptedAppTicketResponse
// Size: 0x01 (Inherited: 0x00)
struct FEncryptedAppTicketResponse {
	enum class ESteamResult Result; // 0x00(0x01)
};

// ScriptStruct SteamCore.StoreAuthURLResponse
// Size: 0x10 (Inherited: 0x00)
struct FStoreAuthURLResponse {
	struct FString URL; // 0x00(0x10)
};

// ScriptStruct SteamCore.UserAchievementIconFetched
// Size: 0x30 (Inherited: 0x00)
struct FUserAchievementIconFetched {
	struct FSteamGameID GameID; // 0x00(0x08)
	struct FString AchievementName; // 0x08(0x10)
	bool bAchieved; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct UTexture2D* Icon; // 0x20(0x08)
	char pad_28[0x8]; // 0x28(0x08)
};

// ScriptStruct SteamCore.UserAchievementStored
// Size: 0x28 (Inherited: 0x00)
struct FUserAchievementStored {
	struct FSteamGameID GameID; // 0x00(0x08)
	bool bGroupAchievement; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString AchievementName; // 0x10(0x10)
	int32_t CurrentProgress; // 0x20(0x04)
	int32_t MaxProgress; // 0x24(0x04)
};

// ScriptStruct SteamCore.UserStatsReceived
// Size: 0x18 (Inherited: 0x00)
struct FUserStatsReceived {
	struct FSteamID GameID; // 0x00(0x08)
	enum class ESteamResult Result; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FSteamID SteamID; // 0x10(0x08)
};

// ScriptStruct SteamCore.UserStatsStored
// Size: 0x10 (Inherited: 0x00)
struct FUserStatsStored {
	struct FSteamGameID GameID; // 0x00(0x08)
	enum class ESteamResult Result; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct SteamCore.UserStatsUnloaded
// Size: 0x08 (Inherited: 0x00)
struct FUserStatsUnloaded {
	struct FSteamID SteamIDUser; // 0x00(0x08)
};

// ScriptStruct SteamCore.LeaderboardScoresDownloaded
// Size: 0x18 (Inherited: 0x00)
struct FLeaderboardScoresDownloaded {
	struct FSteamLeaderboard SteamLeaderboard; // 0x00(0x08)
	struct FSteamLeaderboardEntries SteamLeaderboardEntries; // 0x08(0x08)
	int32_t EntryCount; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct SteamCore.SteamLeaderboardEntries
// Size: 0x08 (Inherited: 0x00)
struct FSteamLeaderboardEntries {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct SteamCore.SteamLeaderboard
// Size: 0x08 (Inherited: 0x00)
struct FSteamLeaderboard {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct SteamCore.LeaderboardScoresDownloadedForUsers
// Size: 0x18 (Inherited: 0x00)
struct FLeaderboardScoresDownloadedForUsers {
	struct FSteamLeaderboard SteamLeaderboard; // 0x00(0x08)
	struct FSteamLeaderboardEntries SteamLeaderboardEntries; // 0x08(0x08)
	int32_t EntryCount; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct SteamCore.RequestUserStatsData
// Size: 0x18 (Inherited: 0x00)
struct FRequestUserStatsData {
	struct FSteamGameID GameID; // 0x00(0x08)
	enum class ESteamResult Result; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FSteamID SteamIDUser; // 0x10(0x08)
};

// ScriptStruct SteamCore.LeaderboardScoreUploaded
// Size: 0x20 (Inherited: 0x00)
struct FLeaderboardScoreUploaded {
	bool bSuccess; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FSteamLeaderboard SteamLeaderboard; // 0x08(0x08)
	int32_t Score; // 0x10(0x04)
	bool bScoreChanged; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	int32_t GlobalRankNew; // 0x18(0x04)
	int32_t GlobalRankPrevious; // 0x1c(0x04)
};

// ScriptStruct SteamCore.AttachLeaderboardUGCData
// Size: 0x10 (Inherited: 0x00)
struct FAttachLeaderboardUGCData {
	struct FSteamLeaderboard SteamLeaderboard; // 0x00(0x08)
	enum class ESteamResult Result; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct SteamCore.LeaderboardFindResult
// Size: 0x10 (Inherited: 0x00)
struct FLeaderboardFindResult {
	struct FSteamLeaderboard SteamLeaderboard; // 0x00(0x08)
	bool bLeaderboardFound; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct SteamCore.FindOrCreateLeaderboardData
// Size: 0x10 (Inherited: 0x00)
struct FFindOrCreateLeaderboardData {
	struct FSteamLeaderboard SteamLeaderboard; // 0x00(0x08)
	bool bLeaderboardFound; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct SteamCore.NumberOfCurrentPlayers
// Size: 0x08 (Inherited: 0x00)
struct FNumberOfCurrentPlayers {
	bool bSuccess; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t Players; // 0x04(0x04)
};

// ScriptStruct SteamCore.GlobalAchievementPercentagesReady
// Size: 0x10 (Inherited: 0x00)
struct FGlobalAchievementPercentagesReady {
	struct FSteamGameID GameID; // 0x00(0x08)
	enum class ESteamResult Result; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct SteamCore.GlobalStatsReceived
// Size: 0x10 (Inherited: 0x00)
struct FGlobalStatsReceived {
	struct FSteamGameID GameID; // 0x00(0x08)
	enum class ESteamResult Result; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct SteamCore.CheckFileSignature
// Size: 0x01 (Inherited: 0x00)
struct FCheckFileSignature {
	enum class ESteamCheckFileSignature CheckFileSignature; // 0x00(0x01)
};

// ScriptStruct SteamCore.GamepadTextInputDismissed
// Size: 0x08 (Inherited: 0x00)
struct FGamepadTextInputDismissed {
	bool bSubmitted; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t SubmittedText; // 0x04(0x04)
};

// ScriptStruct SteamCore.IPCountry
// Size: 0x01 (Inherited: 0x00)
struct FIPCountry {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct SteamCore.LowBatteryPower
// Size: 0x04 (Inherited: 0x00)
struct FLowBatteryPower {
	int32_t MinutesBatteryLeft; // 0x00(0x04)
};

// ScriptStruct SteamCore.SteamShutdown
// Size: 0x01 (Inherited: 0x00)
struct FSteamShutdown {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct SteamCore.GetOPFSettingsResult
// Size: 0x08 (Inherited: 0x00)
struct FGetOPFSettingsResult {
	enum class ESteamResult Result; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t AppID; // 0x04(0x04)
};

// ScriptStruct SteamCore.GetVideoURLResult
// Size: 0x18 (Inherited: 0x00)
struct FGetVideoURLResult {
	enum class ESteamResult Result; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t AppID; // 0x04(0x04)
	struct FString URL; // 0x08(0x10)
};

// ScriptStruct SteamCore.SteamFriendsGroupID
// Size: 0x02 (Inherited: 0x00)
struct FSteamFriendsGroupID {
	char pad_0[0x2]; // 0x00(0x02)
};

// ScriptStruct SteamCore.InputAnalogActionHandle
// Size: 0x08 (Inherited: 0x00)
struct FInputAnalogActionHandle {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct SteamCore.InputDigitalActionHandle
// Size: 0x08 (Inherited: 0x00)
struct FInputDigitalActionHandle {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct SteamCore.InputActionSetHandle
// Size: 0x08 (Inherited: 0x00)
struct FInputActionSetHandle {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct SteamCore.InputHandle
// Size: 0x08 (Inherited: 0x00)
struct FInputHandle {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct SteamCore.InputMotionData
// Size: 0x28 (Inherited: 0x00)
struct FInputMotionData {
	float RotQuatX; // 0x00(0x04)
	float RotQuatY; // 0x04(0x04)
	float RotQuatZ; // 0x08(0x04)
	float RotQuatW; // 0x0c(0x04)
	float PosAccelX; // 0x10(0x04)
	float PosAccelY; // 0x14(0x04)
	float PosAccelZ; // 0x18(0x04)
	float RotVelX; // 0x1c(0x04)
	float RotVelY; // 0x20(0x04)
	float RotVelZ; // 0x24(0x04)
};

// ScriptStruct SteamCore.InputDigitalActionData
// Size: 0x02 (Inherited: 0x00)
struct FInputDigitalActionData {
	bool bState; // 0x00(0x01)
	bool bActive; // 0x01(0x01)
};

// ScriptStruct SteamCore.InputAnalogActionData
// Size: 0x10 (Inherited: 0x00)
struct FInputAnalogActionData {
	enum class ESteamCoreInputSourceMode Mode; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float X; // 0x04(0x04)
	float Y; // 0x08(0x04)
	bool bActive; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct SteamCore.SteamItemDetails
// Size: 0x20 (Inherited: 0x00)
struct FSteamItemDetails {
	struct FSteamItemInstanceID InstanceID; // 0x00(0x08)
	struct FSteamItemDef Definition; // 0x08(0x04)
	int32_t Quantity; // 0x0c(0x04)
	struct TArray<enum class ESteamCoreItemFlags> Flags; // 0x10(0x10)
};

// ScriptStruct SteamCore.SteamItemDef
// Size: 0x04 (Inherited: 0x00)
struct FSteamItemDef {
	int32_t Value; // 0x00(0x04)
};

// ScriptStruct SteamCore.SteamItemInstanceID
// Size: 0x08 (Inherited: 0x00)
struct FSteamItemInstanceID {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct SteamCore.SteamP2PSessionState
// Size: 0x28 (Inherited: 0x00)
struct FSteamP2PSessionState {
	bool bConnectionActive; // 0x00(0x01)
	bool bConnecting; // 0x01(0x01)
	enum class ESteamP2PSessionError P2PSessionError; // 0x02(0x01)
	bool bUsingRelay; // 0x03(0x01)
	int32_t BytesQueuedForSend; // 0x04(0x04)
	int32_t PacketsQueuedForSend; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString RemoteIP; // 0x10(0x10)
	int32_t RemotePort; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct SteamCore.SteamNetworkPingLocation
// Size: 0x10 (Inherited: 0x00)
struct FSteamNetworkPingLocation {
	struct FString Location; // 0x00(0x10)
};

// ScriptStruct SteamCore.SteamParentalSettingsChanged
// Size: 0x01 (Inherited: 0x00)
struct FSteamParentalSettingsChanged {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct SteamCore.SteamPartyBeaconLocation
// Size: 0x18 (Inherited: 0x00)
struct FSteamPartyBeaconLocation {
	enum class ESteamPartiesBeaconLocationType Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString LocationId; // 0x08(0x10)
};

// ScriptStruct SteamCore.UGCFileWriteStreamHandle
// Size: 0x08 (Inherited: 0x00)
struct FUGCFileWriteStreamHandle {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct SteamCore.SteamSessionSearchSetting
// Size: 0x20 (Inherited: 0x00)
struct FSteamSessionSearchSetting {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct SteamCore.HostPingData
// Size: 0x10 (Inherited: 0x00)
struct FHostPingData {
	struct FString HostString; // 0x00(0x10)
};

// ScriptStruct SteamCore.SteamInventoryUpdateHandle
// Size: 0x08 (Inherited: 0x00)
struct FSteamInventoryUpdateHandle {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct SteamCore.UGCUpdateHandle
// Size: 0x08 (Inherited: 0x00)
struct FUGCUpdateHandle {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct SteamCore.SteamUGCDetails
// Size: 0xa8 (Inherited: 0x00)
struct FSteamUGCDetails {
	struct FPublishedFileID PublishedFileID; // 0x00(0x08)
	enum class ESteamResult Result; // 0x08(0x01)
	enum class ESteamWorkshopFileType FileType; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	int32_t CreatorAppID; // 0x0c(0x04)
	int32_t ConsumerAppID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString Title; // 0x18(0x10)
	struct FString Description; // 0x28(0x10)
	struct FSteamID SteamIDOwner; // 0x38(0x08)
	int32_t TimeCreated; // 0x40(0x04)
	int32_t TimeUpdated; // 0x44(0x04)
	int32_t TimeAddedToUserList; // 0x48(0x04)
	enum class ESteamRemoteStoragePublishedFileVisibility Visibility; // 0x4c(0x01)
	bool bBanned; // 0x4d(0x01)
	bool bAcceptedForUse; // 0x4e(0x01)
	bool bTagsTruncated; // 0x4f(0x01)
	struct TArray<struct FString> Tags; // 0x50(0x10)
	struct FSteamUGCHandle File; // 0x60(0x08)
	struct FSteamUGCHandle PreviewFile; // 0x68(0x08)
	struct FString Filename; // 0x70(0x10)
	int32_t FileSize; // 0x80(0x04)
	int32_t PreviewFileSize; // 0x84(0x04)
	struct FString URL; // 0x88(0x10)
	int32_t VotesUp; // 0x98(0x04)
	int32_t VotesDown; // 0x9c(0x04)
	float Score; // 0xa0(0x04)
	int32_t NumChildren; // 0xa4(0x04)
};

// ScriptStruct SteamCore.SteamLeaderboardEntry
// Size: 0x20 (Inherited: 0x00)
struct FSteamLeaderboardEntry {
	struct FSteamID SteamID; // 0x00(0x08)
	int32_t GlobalRank; // 0x08(0x04)
	int32_t Score; // 0x0c(0x04)
	int32_t Details; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FSteamUGCHandle UGCHandle; // 0x18(0x08)
};

