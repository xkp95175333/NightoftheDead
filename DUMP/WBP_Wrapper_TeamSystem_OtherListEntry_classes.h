// WidgetBlueprintGeneratedClass WBP_Wrapper_TeamSystem_OtherListEntry.WBP_Wrapper_TeamSystem_OtherListEntry_C
// Size: 0x2b8 (Inherited: 0x260)
struct UWBP_Wrapper_TeamSystem_OtherListEntry_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWBP_OtherPlayerListEntry_C* WEP_OtherPlayerListEntry; // 0x268(0x08)
	struct UCollapsibleTextBlock* Text_Nickname; // 0x270(0x08)
	struct UButton* Btn_Invite; // 0x278(0x08)
	struct FLFTeamAgentId AgentId; // 0x280(0x20)
	struct FText InviteText; // 0x2a0(0x18)

	void PreConstruct(bool IsDesignTime); // Function WBP_Wrapper_TeamSystem_OtherListEntry.WBP_Wrapper_TeamSystem_OtherListEntry_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void Construct(); // Function WBP_Wrapper_TeamSystem_OtherListEntry.WBP_Wrapper_TeamSystem_OtherListEntry_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_Wrapper_TeamSystem_OtherListEntry.WBP_Wrapper_TeamSystem_OtherListEntry_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void SetNickname(); // Function WBP_Wrapper_TeamSystem_OtherListEntry.WBP_Wrapper_TeamSystem_OtherListEntry_C.SetNickname // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void RefreshInviteState(); // Function WBP_Wrapper_TeamSystem_OtherListEntry.WBP_Wrapper_TeamSystem_OtherListEntry_C.RefreshInviteState // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Invite(); // Function WBP_Wrapper_TeamSystem_OtherListEntry.WBP_Wrapper_TeamSystem_OtherListEntry_C.Invite // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_WBP_Wrapper_TeamSystem_OtherListEntry(int32_t EntryPoint); // Function WBP_Wrapper_TeamSystem_OtherListEntry.WBP_Wrapper_TeamSystem_OtherListEntry_C.ExecuteUbergraph_WBP_Wrapper_TeamSystem_OtherListEntry // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
};

