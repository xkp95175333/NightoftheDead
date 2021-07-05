// BlueprintGeneratedClass BP_AntizeChatInterface.BP_AntizeChatInterface_C
// Size: 0x28 (Inherited: 0x28)
struct UBP_AntizeChatInterface_C : UInterface {

	void MSG_PlayEmote(enum class E_Emote EmoteToPlay); // Function BP_AntizeChatInterface.BP_AntizeChatInterface_C.MSG_PlayEmote // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void MSG_SetTeamID(int32_t TeamId); // Function BP_AntizeChatInterface.BP_AntizeChatInterface_C.MSG_SetTeamID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void MSG_GetTeamID(int32_t TeamId); // Function BP_AntizeChatInterface.BP_AntizeChatInterface_C.MSG_GetTeamID // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void MSG_GetUsername(bool Success?, struct FText UserName); // Function BP_AntizeChatInterface.BP_AntizeChatInterface_C.MSG_GetUsername // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void MSG_GetPlayerIDFromUsername(struct FText UserName, int32_t PlayerId); // Function BP_AntizeChatInterface.BP_AntizeChatInterface_C.MSG_GetPlayerIDFromUsername // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void MSG_RequestPrivateMessage(enum class E_PrivateMessage Request, int32_t ToPlayerID, struct FText UserName, struct FText Message, bool Online?); // Function BP_AntizeChatInterface.BP_AntizeChatInterface_C.MSG_RequestPrivateMessage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void MSG_GetPlayerID(int32_t PlayerId); // Function BP_AntizeChatInterface.BP_AntizeChatInterface_C.MSG_GetPlayerID // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void MSG_SetPlayerID(int32_t PlayerId); // Function BP_AntizeChatInterface.BP_AntizeChatInterface_C.MSG_SetPlayerID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void MSG_GetConnectedPlayers(struct TArray<struct AController*> Players); // Function BP_AntizeChatInterface.BP_AntizeChatInterface_C.MSG_GetConnectedPlayers // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void MSG_NewMessage(bool Received?, enum class E_ChatCategory MessageCategory, int32_t PlayerId, int32_t ToPlayerID, struct FText UserName, struct FText Message, enum class E_Prefix Prefix); // Function BP_AntizeChatInterface.BP_AntizeChatInterface_C.MSG_NewMessage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
};

