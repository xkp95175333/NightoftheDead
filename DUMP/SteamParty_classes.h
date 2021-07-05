// Class SteamParty.CreateSessionGameCallbackProxy
// Size: 0xb0 (Inherited: 0x30)
struct UCreateSessionGameCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x60]; // 0x50(0x60)

	struct UCreateSessionGameCallbackProxy* CreateSessionGame(struct UObject* WorldContextObject, struct APlayerController* PlayerController, int32_t PublicConnections, bool bUseLAN, struct FString InGameType, bool AutoStartSession); // Function SteamParty.CreateSessionGameCallbackProxy.CreateSessionGame // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xce7a40
};

// Class SteamParty.CreateSessionPartyCallbackProxy
// Size: 0xb0 (Inherited: 0x30)
struct UCreateSessionPartyCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x60]; // 0x50(0x60)

	struct UCreateSessionPartyCallbackProxy* CreateSessionParty(struct UObject* WorldContextObject, struct APlayerController* PlayerController, int32_t PublicConnections, bool bUseLAN, struct FString InGameType, bool AutoStartSession); // Function SteamParty.CreateSessionPartyCallbackProxy.CreateSessionParty // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xce7c20
};

// Class SteamParty.DestroySessionGameCallbackProxy
// Size: 0x70 (Inherited: 0x30)
struct UDestroySessionGameCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x20]; // 0x50(0x20)

	struct UDestroySessionGameCallbackProxy* DestroySessionGame(struct APlayerController* PlayerController); // Function SteamParty.DestroySessionGameCallbackProxy.DestroySessionGame // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xce7e20
};

// Class SteamParty.DestroySessionPartyCallbackProxy
// Size: 0x70 (Inherited: 0x30)
struct UDestroySessionPartyCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x20]; // 0x50(0x20)

	struct UDestroySessionPartyCallbackProxy* DestroySessionParty(struct APlayerController* PlayerController); // Function SteamParty.DestroySessionPartyCallbackProxy.DestroySessionParty // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xce7eb0
};

// Class SteamParty.DummyPlayerController
// Size: 0x570 (Inherited: 0x570)
struct ADummyPlayerController : APlayerController {
};

// Class SteamParty.EndSessionGameCallbackProxy
// Size: 0x70 (Inherited: 0x30)
struct UEndSessionGameCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x20]; // 0x50(0x20)

	struct UEndSessionGameCallbackProxy* EndSessionGame(struct APlayerController* PlayerController); // Function SteamParty.EndSessionGameCallbackProxy.EndSessionGame // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xce81a0
};

// Class SteamParty.EndSessionPartyCallbackProxy
// Size: 0x70 (Inherited: 0x30)
struct UEndSessionPartyCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x20]; // 0x50(0x20)

	struct UEndSessionPartyCallbackProxy* EndSessionParty(struct APlayerController* PlayerController); // Function SteamParty.EndSessionPartyCallbackProxy.EndSessionParty // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xce8230
};

// Class SteamParty.FindSessionsGameCallbackProxy
// Size: 0xa0 (Inherited: 0x30)
struct UFindSessionsGameCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x50]; // 0x50(0x50)

	struct FString GetGameType(struct FBlueprintSessionResult Result); // Function SteamParty.FindSessionsGameCallbackProxy.GetGameType // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xce8660
	struct UFindSessionsGameCallbackProxy* FindSessionsGame(struct UObject* WorldContextObject, struct APlayerController* PlayerController, int32_t MaxResults, bool bUseLAN, struct FString InGameType); // Function SteamParty.FindSessionsGameCallbackProxy.FindSessionsGame // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xce82c0
};

// Class SteamParty.FindSessionsPartyCallbackProxy
// Size: 0xa0 (Inherited: 0x30)
struct UFindSessionsPartyCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x50]; // 0x50(0x50)

	struct FString GetGameType(struct FBlueprintSessionResult Result); // Function SteamParty.FindSessionsPartyCallbackProxy.GetGameType // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xce8660
	struct UFindSessionsPartyCallbackProxy* FindSessionsParty(struct UObject* WorldContextObject, struct APlayerController* PlayerController, int32_t MaxResults, bool bUseLAN, struct FString InGameType); // Function SteamParty.FindSessionsPartyCallbackProxy.FindSessionsParty // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xce8490
};

// Class SteamParty.InviteSessionCallbackProxy
// Size: 0xb8 (Inherited: 0x30)
struct UInviteSessionCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnInviteReceived; // 0x30(0x10)
	char pad_40[0x78]; // 0x40(0x78)

	struct UInviteSessionCallbackProxy* InviteSessionCallback(struct APlayerController* PlayerController); // Function SteamParty.InviteSessionCallbackProxy.InviteSessionCallback // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xce8ea0
};

// Class SteamParty.JoinSessionGameCallbackProxy
// Size: 0x180 (Inherited: 0x30)
struct UJoinSessionGameCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x130]; // 0x50(0x130)

	struct UJoinSessionGameCallbackProxy* JoinSessionGame(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FBlueprintSessionResult SearchResult); // Function SteamParty.JoinSessionGameCallbackProxy.JoinSessionGame // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xce9710
};

// Class SteamParty.JoinSessionPartyCallbackProxy
// Size: 0x180 (Inherited: 0x30)
struct UJoinSessionPartyCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x130]; // 0x50(0x130)

	struct UJoinSessionPartyCallbackProxy* JoinSessionParty(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FBlueprintSessionResult SearchResult); // Function SteamParty.JoinSessionPartyCallbackProxy.JoinSessionParty // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xce9860
};

// Class SteamParty.StartSessionGameCallbackProxy
// Size: 0x70 (Inherited: 0x30)
struct UStartSessionGameCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x20]; // 0x50(0x20)

	struct UStartSessionGameCallbackProxy* StartSessionGame(struct APlayerController* PlayerController); // Function SteamParty.StartSessionGameCallbackProxy.StartSessionGame // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xce9f10
};

// Class SteamParty.StartSessionPartyCallbackProxy
// Size: 0x70 (Inherited: 0x30)
struct UStartSessionPartyCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x20]; // 0x50(0x20)

	struct UStartSessionPartyCallbackProxy* StartSessionParty(struct APlayerController* PlayerController); // Function SteamParty.StartSessionPartyCallbackProxy.StartSessionParty // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xce9fa0
};

// Class SteamParty.SteamBeaconClient
// Size: 0x368 (Inherited: 0x338)
struct ASteamBeaconClient : ALobbyBeaconClient {
	bool bHasHandShakeCompleted; // 0x338(0x01)
	char pad_339[0x7]; // 0x339(0x07)
	struct ASteamBeaconState* BeaconLobbyState; // 0x340(0x08)
	struct ASteamBeaconPlayerState* BeaconPlayerState; // 0x348(0x08)
	bool bHasRegisterComponentsCompleted; // 0x350(0x01)
	char pad_351[0x17]; // 0x351(0x17)

	void ServerSetHandshakeComplete(); // Function SteamParty.SteamBeaconClient.ServerSetHandshakeComplete // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0xce9ec0
	void OnRep_PlayerState(); // Function SteamParty.SteamBeaconClient.OnRep_PlayerState // (Native|Public) // @ game+0xce9bc0
	void OnRep_LobbyState(); // Function SteamParty.SteamBeaconClient.OnRep_LobbyState // (Native|Public) // @ game+0xce9ba0
	void OnPartyDisbanded(); // Function SteamParty.SteamBeaconClient.OnPartyDisbanded // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0xce9b80
	void LeaveParty(); // Function SteamParty.SteamBeaconClient.LeaveParty // (Native|Public|BlueprintCallable) // @ game+0xce9b60
	void KickFromParty(struct FUniqueNetIdRepl PlayerToKick, struct FText Reason); // Function SteamParty.SteamBeaconClient.KickFromParty // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0xce99b0
	struct ASteamBeaconPlayerState* GetPlayerState(); // Function SteamParty.SteamBeaconClient.GetPlayerState // (Final|Native|Public|BlueprintCallable) // @ game+0xce8aa0
	struct ASteamBeaconState* GetPartyState(); // Function SteamParty.SteamBeaconClient.GetPartyState // (Native|Public|BlueprintCallable) // @ game+0xce8930
	void ClientJoinGameSession(struct FSteamBeaconSessionResult InSearchResult, bool bIsPartyHostCreatingServer); // Function SteamParty.SteamBeaconClient.ClientJoinGameSession // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0xce7770
	void ClientJoinGameServer(struct FString GameServerURL); // Function SteamParty.SteamBeaconClient.ClientJoinGameServer // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0xce76d0
	void ChatToPartyMember(struct ASteamBeaconPlayerState* InPlayer); // Function SteamParty.SteamBeaconClient.ChatToPartyMember // (Native|Public|BlueprintCallable) // @ game+0xce7600
};

// Class SteamParty.SteamBeaconGameInstance
// Size: 0x5f8 (Inherited: 0x1a8)
struct USteamBeaconGameInstance : UGameInstance {
	struct FMulticastInlineDelegate OnPreLoadMapSteamParty; // 0x1a8(0x10)
	int32_t MaxPartyCount; // 0x1b8(0x04)
	char pad_1BC[0x4]; // 0x1bc(0x04)
	struct ALobbyBeaconPlayerState* LobbyBeaconPlayerStateClass; // 0x1c0(0x08)
	bool VoiceChatEnabled; // 0x1c8(0x01)
	bool IsPartyHostCreatingServer; // 0x1c9(0x01)
	char pad_1CA[0x2]; // 0x1ca(0x02)
	float PartyHostGameTravelDelay; // 0x1cc(0x04)
	int32_t PartyHostGameTravelMaxRetries; // 0x1d0(0x04)
	int32_t CurrentTravelRetries; // 0x1d4(0x04)
	enum class EPartyStatus PartyStatus; // 0x1d8(0x01)
	char pad_1D9[0x7]; // 0x1d9(0x07)
	struct ASteamBeaconHost* BeaconHostObject; // 0x1e0(0x08)
	struct ASteamBeaconListener* BeaconHostListener; // 0x1e8(0x08)
	struct ASteamBeaconClient* BeaconClient; // 0x1f0(0x08)
	char pad_1F8[0x68]; // 0x1f8(0x68)
	struct FMulticastInlineDelegate OnCreateGameSessionCompleted; // 0x260(0x10)
	struct FMulticastInlineDelegate OnJoinGameSessionComplete; // 0x270(0x10)
	char pad_280[0x378]; // 0x280(0x378)

	bool SendPartySessionInviteToFriend(struct APlayerController* PlayerController, struct FUniqueNetIdRepl FriendUniqueNetId); // Function SteamParty.SteamBeaconGameInstance.SendPartySessionInviteToFriend // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xce9d80
	void SavePartyInfo(); // Function SteamParty.SteamBeaconGameInstance.SavePartyInfo // (Native|Public|BlueprintCallable) // @ game+0xce9d60
	void RestorePartyInfo(); // Function SteamParty.SteamBeaconGameInstance.RestorePartyInfo // (Native|Public|BlueprintCallable) // @ game+0xce9d20
	void RemoveSteamPlayerSession(struct APlayerState* InPlayerState); // Function SteamParty.SteamBeaconGameInstance.RemoveSteamPlayerSession // (Native|Public|BlueprintCallable) // @ game+0xce9c70
	void OnJoinGameSessionComplete__DelegateSignature(bool bWasSuccessful); // DelegateFunction SteamParty.SteamBeaconGameInstance.OnJoinGameSessionComplete__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1395fe0
	void OnCreateGameSessionCompleted__DelegateSignature(bool bWasSuccessful); // DelegateFunction SteamParty.SteamBeaconGameInstance.OnCreateGameSessionCompleted__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1395fe0
	bool JoinSessionFromSteamBeacon(struct FSteamBeaconSessionResult InSearchResult, bool bIsPartyHostCreatingServer); // Function SteamParty.SteamBeaconGameInstance.JoinSessionFromSteamBeacon // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0xce9590
	void JoinPartyToSessionBP(struct FBlueprintSessionResult InSearchResult); // Function SteamParty.SteamBeaconGameInstance.JoinPartyToSessionBP // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0xce9340
	bool JoinPartyToHostGameSession(); // Function SteamParty.SteamBeaconGameInstance.JoinPartyToHostGameSession // (Final|Native|Public|BlueprintCallable) // @ game+0xce9240
	void JoinFriendPartySession(struct FUniqueNetIdRepl FriendUniqueNetId); // Function SteamParty.SteamBeaconGameInstance.JoinFriendPartySession // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xce9120
	bool IsPartyLeader(); // Function SteamParty.SteamBeaconGameInstance.IsPartyLeader // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xce9000
	bool IsPartyFull(); // Function SteamParty.SteamBeaconGameInstance.IsPartyFull // (Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xce8fb0
	bool IsInParty(); // Function SteamParty.SteamBeaconGameInstance.IsInParty // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xce8f50
	bool HostParty(int32_t MaxPlayers); // Function SteamParty.SteamBeaconGameInstance.HostParty // (Final|Native|Public|BlueprintCallable) // @ game+0xce8e00
	bool HostGame(int32_t MaxPlayers); // Function SteamParty.SteamBeaconGameInstance.HostGame // (Final|Native|Public|BlueprintCallable) // @ game+0xce8cc0
	struct UTexture2D* GetSteamFriendAvatar(struct FUniqueNetIdRepl FriendUniqueNetId, enum class ESteamAvatarSize InAvatarSize); // Function SteamParty.SteamBeaconGameInstance.GetSteamFriendAvatar // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xce8ad0
	struct FString GetPlayerIdString(struct FUniqueNetIdRepl UniqueNetId); // Function SteamParty.SteamBeaconGameInstance.GetPlayerIdString // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xce8960
	int32_t GetPartyCount(); // Function SteamParty.SteamBeaconGameInstance.GetPartyCount // (Native|Public|BlueprintCallable) // @ game+0xce8900
	int32_t GetMaxPartyCount(); // Function SteamParty.SteamBeaconGameInstance.GetMaxPartyCount // (Native|Public|BlueprintCallable) // @ game+0xce88a0
	struct FString GetHostCurrentGameSessionId(); // Function SteamParty.SteamBeaconGameInstance.GetHostCurrentGameSessionId // (Final|Native|Public|BlueprintCallable) // @ game+0xce87f0
	void DumpDebugParty(); // Function SteamParty.SteamBeaconGameInstance.DumpDebugParty // (Native|Public|BlueprintCallable) // @ game+0xce8180
	void DisbandParty(); // Function SteamParty.SteamBeaconGameInstance.DisbandParty // (Final|Native|Public|BlueprintCallable) // @ game+0xce8140
	void DirectTravelToGameSession(struct FString ServerURL); // Function SteamParty.SteamBeaconGameInstance.DirectTravelToGameSession // (Native|Public|BlueprintCallable) // @ game+0xce8030
	void DestroyGameSession(); // Function SteamParty.SteamBeaconGameInstance.DestroyGameSession // (Final|Native|Public|BlueprintCallable) // @ game+0xce7e00
	void ClearPartyBeacons(); // Function SteamParty.SteamBeaconGameInstance.ClearPartyBeacons // (Native|Public|BlueprintCallable) // @ game+0xce76b0
	void AddCustomPlayerStateData(struct ASteamBeaconPlayerState* InPlayerState); // Function SteamParty.SteamBeaconGameInstance.AddCustomPlayerStateData // (Native|Event|Public|BlueprintEvent) // @ game+0xce7570
	void AcceptPartyInvite(); // Function SteamParty.SteamBeaconGameInstance.AcceptPartyInvite // (Native|Public|BlueprintCallable) // @ game+0xce7550
};

// Class SteamParty.SteamBeaconGameSession
// Size: 0x348 (Inherited: 0x238)
struct ASteamBeaconGameSession : AGameSession {
	char pad_238[0x110]; // 0x238(0x110)
};

// Class SteamParty.SteamBeaconGISubsystem
// Size: 0x470 (Inherited: 0x30)
struct USteamBeaconGISubsystem : UGameInstanceSubsystem {
	struct FMulticastInlineDelegate OnPreLoadMapSteamParty; // 0x30(0x10)
	int32_t MaxPartyCount; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct ALobbyBeaconPlayerState* LobbyBeaconPlayerStateClass; // 0x48(0x08)
	bool VoiceChatEnabled; // 0x50(0x01)
	bool IsPartyHostCreatingServer; // 0x51(0x01)
	char pad_52[0x2]; // 0x52(0x02)
	float PartyHostGameTravelDelay; // 0x54(0x04)
	int32_t PartyHostGameTravelMaxRetries; // 0x58(0x04)
	int32_t CurrentTravelRetries; // 0x5c(0x04)
	enum class EPartyStatus PartyStatus; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
	struct ASteamBeaconHost* BeaconHostObject; // 0x68(0x08)
	struct ASteamBeaconListener* BeaconHostListener; // 0x70(0x08)
	struct ASteamBeaconClient* BeaconClient; // 0x78(0x08)
	char pad_80[0x68]; // 0x80(0x68)
	struct FMulticastInlineDelegate OnCreateGameSessionCompleted; // 0xe8(0x10)
	struct FMulticastInlineDelegate OnJoinGameSessionComplete; // 0xf8(0x10)
	char pad_108[0x368]; // 0x108(0x368)

	bool SendPartySessionInviteToFriend(struct APlayerController* PlayerController, struct FUniqueNetIdRepl FriendUniqueNetId); // Function SteamParty.SteamBeaconGISubsystem.SendPartySessionInviteToFriend // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xce9d80
	void SavePartyInfo(); // Function SteamParty.SteamBeaconGISubsystem.SavePartyInfo // (Native|Public|BlueprintCallable) // @ game+0xce9d40
	void RestorePartyInfo(); // Function SteamParty.SteamBeaconGISubsystem.RestorePartyInfo // (Native|Public|BlueprintCallable) // @ game+0xce9d00
	void RemoveSteamPlayerSession(struct APlayerState* InPlayerState); // Function SteamParty.SteamBeaconGISubsystem.RemoveSteamPlayerSession // (Native|Public|BlueprintCallable) // @ game+0xce9be0
	void OnJoinGameSessionComplete__DelegateSignature(bool bWasSuccessful); // DelegateFunction SteamParty.SteamBeaconGISubsystem.OnJoinGameSessionComplete__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1395fe0
	void OnCreateGameSessionCompleted__DelegateSignature(bool bWasSuccessful); // DelegateFunction SteamParty.SteamBeaconGISubsystem.OnCreateGameSessionCompleted__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1395fe0
	bool JoinSessionFromSteamBeacon(struct FSteamBeaconSessionResult InSearchResult, bool bIsPartyHostCreatingServer); // Function SteamParty.SteamBeaconGISubsystem.JoinSessionFromSteamBeacon // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0xce9410
	void JoinPartyToSessionBP(struct FBlueprintSessionResult InSearchResult); // Function SteamParty.SteamBeaconGISubsystem.JoinPartyToSessionBP // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0xce9270
	bool JoinPartyToHostGameSession(); // Function SteamParty.SteamBeaconGISubsystem.JoinPartyToHostGameSession // (Final|Native|Public|BlueprintCallable) // @ game+0xce9210
	void JoinFriendPartySession(struct FUniqueNetIdRepl FriendUniqueNetId); // Function SteamParty.SteamBeaconGISubsystem.JoinFriendPartySession // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xce9030
	bool IsPartyLeader(); // Function SteamParty.SteamBeaconGISubsystem.IsPartyLeader // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xce8fe0
	bool IsPartyFull(); // Function SteamParty.SteamBeaconGISubsystem.IsPartyFull // (Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xce8f80
	bool IsInParty(); // Function SteamParty.SteamBeaconGISubsystem.IsInParty // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xce8f30
	bool HostParty(int32_t MaxPlayers); // Function SteamParty.SteamBeaconGISubsystem.HostParty // (Final|Native|Public|BlueprintCallable) // @ game+0xce8d60
	bool HostGame(int32_t MaxPlayers); // Function SteamParty.SteamBeaconGISubsystem.HostGame // (Final|Native|Public|BlueprintCallable) // @ game+0xce8c20
	struct UTexture2D* GetSteamFriendAvatar(struct FUniqueNetIdRepl FriendUniqueNetId, enum class ESteamAvatarSize InAvatarSize); // Function SteamParty.SteamBeaconGISubsystem.GetSteamFriendAvatar // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xce8ad0
	struct FString GetPlayerIdString(struct FUniqueNetIdRepl UniqueNetId); // Function SteamParty.SteamBeaconGISubsystem.GetPlayerIdString // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xce8960
	int32_t GetPartyCount(); // Function SteamParty.SteamBeaconGISubsystem.GetPartyCount // (Native|Public|BlueprintCallable) // @ game+0xce88d0
	int32_t GetMaxPartyCount(); // Function SteamParty.SteamBeaconGISubsystem.GetMaxPartyCount // (Native|Public|BlueprintCallable) // @ game+0xce8870
	struct FString GetHostCurrentGameSessionId(); // Function SteamParty.SteamBeaconGISubsystem.GetHostCurrentGameSessionId // (Final|Native|Public|BlueprintCallable) // @ game+0xce8770
	void DumpDebugParty(); // Function SteamParty.SteamBeaconGISubsystem.DumpDebugParty // (Native|Public|BlueprintCallable) // @ game+0xce8160
	void DisbandParty(); // Function SteamParty.SteamBeaconGISubsystem.DisbandParty // (Final|Native|Public|BlueprintCallable) // @ game+0xce8120
	void DirectTravelToGameSession(struct FString ServerURL); // Function SteamParty.SteamBeaconGISubsystem.DirectTravelToGameSession // (Native|Public|BlueprintCallable) // @ game+0xce7f40
	void DestroyGameSession(); // Function SteamParty.SteamBeaconGISubsystem.DestroyGameSession // (Final|Native|Public|BlueprintCallable) // @ game+0xce7e00
	void ClearPartyBeacons(); // Function SteamParty.SteamBeaconGISubsystem.ClearPartyBeacons // (Native|Public|BlueprintCallable) // @ game+0xce7690
	void AcceptPartyInvite(); // Function SteamParty.SteamBeaconGISubsystem.AcceptPartyInvite // (Native|Public|BlueprintCallable) // @ game+0xce7530
};

// Class SteamParty.SteamBeaconHost
// Size: 0x288 (Inherited: 0x280)
struct ASteamBeaconHost : ALobbyBeaconHost {
	bool bIsDisbandingParty; // 0x280(0x01)
	bool bIsJoiningGame; // 0x281(0x01)
	bool bIsLevelChanging; // 0x282(0x01)
	char pad_283[0x5]; // 0x283(0x05)

	struct ASteamBeaconState* GetPartyState(); // Function SteamParty.SteamBeaconHost.GetPartyState // (Native|Public|BlueprintCallable) // @ game+0xced590
	void DisbandParty(); // Function SteamParty.SteamBeaconHost.DisbandParty // (Native|Public|BlueprintCallable) // @ game+0xced0f0
};

// Class SteamParty.SteamBeaconListener
// Size: 0x308 (Inherited: 0x308)
struct ASteamBeaconListener : AOnlineBeaconHost {
};

// Class SteamParty.SteamBeaconPlayerController
// Size: 0x598 (Inherited: 0x570)
struct ASteamBeaconPlayerController : APlayerController {
	struct ASteamBeaconState* PartyBeaconState; // 0x570(0x08)
	char pad_578[0x18]; // 0x578(0x18)
	bool IsPushToTalk; // 0x590(0x01)
	char pad_591[0x7]; // 0x591(0x07)

	void UnMutePlayerVoice(struct FUniqueNetIdRepl PlayerId); // Function SteamParty.SteamBeaconPlayerController.UnMutePlayerVoice // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0xceef60
	void StopPlayerTalking(); // Function SteamParty.SteamBeaconPlayerController.StopPlayerTalking // (Final|Native|Public|BlueprintCallable) // @ game+0xceef20
	void StartPlayerTalking(); // Function SteamParty.SteamBeaconPlayerController.StartPlayerTalking // (Final|Native|Public|BlueprintCallable) // @ game+0xceeee0
	void MutePlayerVoice(struct FUniqueNetIdRepl PlayerId); // Function SteamParty.SteamBeaconPlayerController.MutePlayerVoice // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0xcee0f0
	bool IsPlayerVoiceMuted(struct FUniqueNetIdRepl PlayerId); // Function SteamParty.SteamBeaconPlayerController.IsPlayerVoiceMuted // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0xcedc40
	bool IsPlayerControllerUniqueIdMatch(struct FUniqueNetIdRepl PlayerId); // Function SteamParty.SteamBeaconPlayerController.IsPlayerControllerUniqueIdMatch // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0xced980
	void BPEvent_PlayerStateChanged(struct ASteamBeaconPlayerState* InPlayerBeaconStateChanged); // Function SteamParty.SteamBeaconPlayerController.BPEvent_PlayerStateChanged // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void BPEvent_PlayerLeftParty(struct ASteamBeaconPlayerState* InPlayerStateLeft); // Function SteamParty.SteamBeaconPlayerController.BPEvent_PlayerLeftParty // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void BPEvent_PlayerJoinedParty(struct ASteamBeaconPlayerState* InPlayerStateJoined); // Function SteamParty.SteamBeaconPlayerController.BPEvent_PlayerJoinedParty // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void BPEvent_PartyStateChanged(); // Function SteamParty.SteamBeaconPlayerController.BPEvent_PartyStateChanged // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void BPEvent_PartyOwnerChanged(struct FUniqueNetIdRepl InUniqueId); // Function SteamParty.SteamBeaconPlayerController.BPEvent_PartyOwnerChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1395fe0
	void BPEvent_PartyJoiningGame(); // Function SteamParty.SteamBeaconPlayerController.BPEvent_PartyJoiningGame // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void BPEvent_PartyInviteReceived(struct FString FriendName); // Function SteamParty.SteamBeaconPlayerController.BPEvent_PartyInviteReceived // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void BPEvent_PartyHostReconnecting(); // Function SteamParty.SteamBeaconPlayerController.BPEvent_PartyHostReconnecting // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void BPEvent_PartyHostConnectionFailure(); // Function SteamParty.SteamBeaconPlayerController.BPEvent_PartyHostConnectionFailure // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void BPEvent_ChatMessageReceived(struct FPartyMessage InPartyMessage); // Function SteamParty.SteamBeaconPlayerController.BPEvent_ChatMessageReceived // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
};

// Class SteamParty.SteamBeaconPlayerState
// Size: 0x310 (Inherited: 0x2e0)
struct ASteamBeaconPlayerState : ALobbyBeaconPlayerState {
	int32_t PlayerProfileLevel; // 0x2e0(0x04)
	char pad_2E4[0x1c]; // 0x2e4(0x1c)
	struct FMulticastInlineDelegate OnPlayerTalkingStateChanged; // 0x300(0x10)

	struct APlayerState* SpawnConvertedPlayerState(); // Function SteamParty.SteamBeaconPlayerState.SpawnConvertedPlayerState // (Native|Public|BlueprintCallable) // @ game+0xceeeb0
	void ServerSetPlayerProfileLevel(int32_t InPlayerProfileLevel); // Function SteamParty.SteamBeaconPlayerState.ServerSetPlayerProfileLevel // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0xceedf0
	void ServerSendPartyMessage(struct FPartyMessage ChatMessage); // Function SteamParty.SteamBeaconPlayerState.ServerSendPartyMessage // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0xceea60
	void SendPartyMessage(struct FPartyMessage ChatMessage); // Function SteamParty.SteamBeaconPlayerState.SendPartyMessage // (Native|Public|BlueprintCallable) // @ game+0xcee6a0
	void OnPartyMessageReceived(struct FPartyMessage InPartyMessage); // Function SteamParty.SteamBeaconPlayerState.OnPartyMessageReceived // (Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable) // @ game+0xcee310
	bool IsPlayerPartyLeader(struct APlayerState* InPlayerState); // Function SteamParty.SteamBeaconPlayerState.IsPlayerPartyLeader // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xcedba0
	bool IsPlayer(struct APlayerState* InPlayerState); // Function SteamParty.SteamBeaconPlayerState.IsPlayer // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xced8e0
	bool IsPartyLeader(); // Function SteamParty.SteamBeaconPlayerState.IsPartyLeader // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xced8b0
	void InitializePlayerStateData(); // Function SteamParty.SteamBeaconPlayerState.InitializePlayerStateData // (Native|Event|Public|BlueprintEvent) // @ game+0xced890
	struct FUniqueNetIdRepl GetPlayerUniqueId(); // Function SteamParty.SteamBeaconPlayerState.GetPlayerUniqueId // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xced5c0
	struct FText GetDisplayName(); // Function SteamParty.SteamBeaconPlayerState.GetDisplayName // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xced270
};

// Class SteamParty.SteamBeaconState
// Size: 0x420 (Inherited: 0x3c8)
struct ASteamBeaconState : ALobbyBeaconState {
	struct FUniqueNetIdRepl PartyOwnerUniqueId; // 0x3c8(0x28)
	char pad_3F0[0x30]; // 0x3f0(0x30)

	void RemoveAllPlayers(); // Function SteamParty.SteamBeaconState.RemoveAllPlayers // (Final|Native|Public|BlueprintCallable) // @ game+0xcee5b0
	void OnRep_PartyOwnerUniqueId(); // Function SteamParty.SteamBeaconState.OnRep_PartyOwnerUniqueId // (Native|Public) // @ game+0xcee590
	void OnLobbyStateInfoUpdated_NetRefresh(); // Function SteamParty.SteamBeaconState.OnLobbyStateInfoUpdated_NetRefresh // (Native|Public) // @ game+0xcee2f0
	void OnLobbyStateInfoUpdated(); // Function SteamParty.SteamBeaconState.OnLobbyStateInfoUpdated // (Net|NetReliableNative|Event|NetMulticast|Public) // @ game+0xced890
	struct ASteamBeaconPlayerState* GetPartyPlayer(struct FUniqueNetIdRepl UniqueId); // Function SteamParty.SteamBeaconState.GetPartyPlayer // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xced380
	struct ASteamBeaconPlayerState* GetPartyLeader(); // Function SteamParty.SteamBeaconState.GetPartyLeader // (Final|Native|Public|BlueprintCallable) // @ game+0xced320
	void GetAllPartyMembers(struct TArray<struct ASteamBeaconPlayerState*> InPlayerArray); // Function SteamParty.SteamBeaconState.GetAllPartyMembers // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xced110
};

// Class SteamParty.SteamGetFriendsCallbackProxy
// Size: 0x70 (Inherited: 0x30)
struct USteamGetFriendsCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x20]; // 0x50(0x20)

	struct USteamGetFriendsCallbackProxy* RequestSteamFriendsList(struct UObject* WorldContextObject, struct APlayerController* PlayerController); // Function SteamParty.SteamGetFriendsCallbackProxy.RequestSteamFriendsList // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xcee5d0
};

// Class SteamParty.SteamPartyComponent
// Size: 0x178 (Inherited: 0xb0)
struct USteamPartyComponent : UActorComponent {
	struct ASteamBeaconState* PartyBeaconState; // 0xb0(0x08)
	struct FMulticastInlineDelegate OnPlayerJoinedSteamParty; // 0xb8(0x10)
	struct FMulticastInlineDelegate OnPlayerLeftSteamParty; // 0xc8(0x10)
	struct FMulticastInlineDelegate OnPlayerChangedSteamParty; // 0xd8(0x10)
	struct FMulticastInlineDelegate OnPartyStateChangedSteamParty; // 0xe8(0x10)
	struct FMulticastInlineDelegate OnPartyOwnerChangedSteamParty; // 0xf8(0x10)
	struct FMulticastInlineDelegate OnPartyMessageSteamParty; // 0x108(0x10)
	struct FMulticastInlineDelegate OnPartyJoiningGameSteamParty; // 0x118(0x10)
	struct FMulticastInlineDelegate OnPartyHostConnectionFailureSteamParty; // 0x128(0x10)
	struct FMulticastInlineDelegate OnPartyHostReconnectingSteamParty; // 0x138(0x10)
	struct FMulticastInlineDelegate OnPartyInviteReceivedSteamParty; // 0x148(0x10)
	bool IsPushToTalk; // 0x158(0x01)
	char pad_159[0x1f]; // 0x159(0x1f)

	void UnMutePlayerVoice(struct FUniqueNetIdRepl PlayerId); // Function SteamParty.SteamPartyComponent.UnMutePlayerVoice // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0xcef060
	void StopPlayerTalking(); // Function SteamParty.SteamPartyComponent.StopPlayerTalking // (Final|Native|Public|BlueprintCallable) // @ game+0xceef40
	void StartPlayerTalking(); // Function SteamParty.SteamPartyComponent.StartPlayerTalking // (Final|Native|Public|BlueprintCallable) // @ game+0xceef00
	void MutePlayerVoice(struct FUniqueNetIdRepl PlayerId); // Function SteamParty.SteamPartyComponent.MutePlayerVoice // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0xcee1f0
	bool IsPlayerVoiceMuted(struct FUniqueNetIdRepl PlayerId); // Function SteamParty.SteamPartyComponent.IsPlayerVoiceMuted // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0xcedd50
	bool IsPlayerControllerUniqueIdMatch(struct FUniqueNetIdRepl PlayerId); // Function SteamParty.SteamPartyComponent.IsPlayerControllerUniqueIdMatch // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0xceda90
	struct ASteamBeaconPlayerState* GetPartyPlayer(struct FUniqueNetIdRepl PlayerId); // Function SteamParty.SteamPartyComponent.GetPartyPlayer // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0xced480
	struct ASteamBeaconPlayerState* GetPartyLeader(); // Function SteamParty.SteamPartyComponent.GetPartyLeader // (Final|Native|Public|BlueprintCallable) // @ game+0xced350
	void GetAllPartyMembers(struct TArray<struct ASteamBeaconPlayerState*> InPlayerArray); // Function SteamParty.SteamPartyComponent.GetAllPartyMembers // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0xced1c0
};

// Class SteamParty.SteamPartyFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct USteamPartyFunctionLibrary : UBlueprintFunctionLibrary {

	bool SendSessionInviteToFriend(struct FUniqueNetIdRepl FriendUniqueNetId, bool bIsParty); // Function SteamParty.SteamPartyFunctionLibrary.SendSessionInviteToFriend // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xcee920
	bool JoinFriendPartySession(struct FUniqueNetIdRepl FriendUniqueNetId); // Function SteamParty.SteamPartyFunctionLibrary.JoinFriendPartySession // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xcee000
	bool IsUniqueIdEqual(struct FUniqueNetIdRepl FirstUniqueNetId, struct FUniqueNetIdRepl SecondUniqueNetId); // Function SteamParty.SteamPartyFunctionLibrary.IsUniqueIdEqual // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xcede60
	struct FUniqueNetIdRepl GetUniqueNetID(struct APlayerState* PlayerState); // Function SteamParty.SteamPartyFunctionLibrary.GetUniqueNetID // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xced7b0
	struct UTexture2D* GetSteamFriendAvatar(struct FUniqueNetIdRepl FriendUniqueNetId, enum class ESteamAvatarSize InAvatarSize); // Function SteamParty.SteamPartyFunctionLibrary.GetSteamFriendAvatar // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xced670
};

// Class SteamParty.SteamPartyNetDriver
// Size: 0x7b8 (Inherited: 0x7b8)
struct USteamPartyNetDriver : UIpNetDriver {
};

// Class SteamParty.UpdateSessionGameCallbackProxy
// Size: 0x70 (Inherited: 0x30)
struct UUpdateSessionGameCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x20]; // 0x50(0x20)

	struct UUpdateSessionGameCallbackProxy* UpdateSessionGame(int32_t MaxPlayers, bool PublicSearchable, bool AllowInvites, bool JoinViaPresence, bool JoinViaPresenceFriendsOnly); // Function SteamParty.UpdateSessionGameCallbackProxy.UpdateSessionGame // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xcef160
};

// Class SteamParty.UpdateSessionPartyCallbackProxy
// Size: 0x70 (Inherited: 0x30)
struct UUpdateSessionPartyCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x20]; // 0x50(0x20)

	struct UUpdateSessionPartyCallbackProxy* UpdateSessionParty(int32_t MaxPlayers, bool PublicSearchable, bool AllowInvites, bool JoinViaPresence, bool JoinViaPresenceFriendsOnly); // Function SteamParty.UpdateSessionPartyCallbackProxy.UpdateSessionParty // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xcef330
};

