// WidgetBlueprintGeneratedClass WBP_Wrapper_TeamSystem_TeamListEntry.WBP_Wrapper_TeamSystem_TeamListEntry_C
// Size: 0x338 (Inherited: 0x260)
struct UWBP_Wrapper_TeamSystem_TeamListEntry_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWBP_MyTeamListEntry_C* WBP_MyTeamListEntry; // 0x268(0x08)
	struct UCollapsibleTextBlock* Text_Nickname; // 0x270(0x08)
	struct UImage* Image_RoleIcon; // 0x278(0x08)
	struct TSoftObjectPtr<struct UTexture2D> Texture_Leader; // 0x280(0x28)
	struct TSoftObjectPtr<struct UTexture2D> Texture_Manager; // 0x2a8(0x28)
	struct UButton* Btn_Role_Leader; // 0x2d0(0x08)
	struct UButton* Btn_Role_Manager; // 0x2d8(0x08)
	struct UButton* Btn_Kick; // 0x2e0(0x08)
	struct FLFTeamAgentId AgentId; // 0x2e8(0x20)
	bool bIsOnline; // 0x308(0x01)
	bool bIsMyself; // 0x309(0x01)
	char pad_30A[0x6]; // 0x30a(0x06)
	struct UWBP_Wrapper_Confirmation_Generic_C* WBP_Confirm_Kick; // 0x310(0x08)
	struct UWBP_Wrapper_Confirmation_Generic_C* WBP_Confirm_Leader; // 0x318(0x08)
	struct UWBP_Wrapper_Confirmation_Generic_C* WBP_Confirm_Manager; // 0x320(0x08)
	struct FMulticastInlineDelegate OnExit; // 0x328(0x10)

	void Construct(); // Function WBP_Wrapper_TeamSystem_TeamListEntry.WBP_Wrapper_TeamSystem_TeamListEntry_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void SetRoleIcon(); // Function WBP_Wrapper_TeamSystem_TeamListEntry.WBP_Wrapper_TeamSystem_TeamListEntry_C.SetRoleIcon // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void SetNickname(); // Function WBP_Wrapper_TeamSystem_TeamListEntry.WBP_Wrapper_TeamSystem_TeamListEntry_C.SetNickname // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void SetManagerNormal(); // Function WBP_Wrapper_TeamSystem_TeamListEntry.WBP_Wrapper_TeamSystem_TeamListEntry_C.SetManagerNormal // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void SetManagerDeprive(); // Function WBP_Wrapper_TeamSystem_TeamListEntry.WBP_Wrapper_TeamSystem_TeamListEntry_C.SetManagerDeprive // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Kick(); // Function WBP_Wrapper_TeamSystem_TeamListEntry.WBP_Wrapper_TeamSystem_TeamListEntry_C.Kick // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void GiveLeaderRole(); // Function WBP_Wrapper_TeamSystem_TeamListEntry.WBP_Wrapper_TeamSystem_TeamListEntry_C.GiveLeaderRole // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void GiveManagerRole(); // Function WBP_Wrapper_TeamSystem_TeamListEntry.WBP_Wrapper_TeamSystem_TeamListEntry_C.GiveManagerRole // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void PreConstruct(bool IsDesignTime); // Function WBP_Wrapper_TeamSystem_TeamListEntry.WBP_Wrapper_TeamSystem_TeamListEntry_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void KickSubmit(); // Function WBP_Wrapper_TeamSystem_TeamListEntry.WBP_Wrapper_TeamSystem_TeamListEntry_C.KickSubmit // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void KickCancel(); // Function WBP_Wrapper_TeamSystem_TeamListEntry.WBP_Wrapper_TeamSystem_TeamListEntry_C.KickCancel // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void GiveLeaderSubmit(); // Function WBP_Wrapper_TeamSystem_TeamListEntry.WBP_Wrapper_TeamSystem_TeamListEntry_C.GiveLeaderSubmit // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void GiveLeaderCancel(); // Function WBP_Wrapper_TeamSystem_TeamListEntry.WBP_Wrapper_TeamSystem_TeamListEntry_C.GiveLeaderCancel // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void GiveManagerSubmit(); // Function WBP_Wrapper_TeamSystem_TeamListEntry.WBP_Wrapper_TeamSystem_TeamListEntry_C.GiveManagerSubmit // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void GiveManagerCancel(); // Function WBP_Wrapper_TeamSystem_TeamListEntry.WBP_Wrapper_TeamSystem_TeamListEntry_C.GiveManagerCancel // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void InitializeTeamRole(); // Function WBP_Wrapper_TeamSystem_TeamListEntry.WBP_Wrapper_TeamSystem_TeamListEntry_C.InitializeTeamRole // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void SetKickVisibility(); // Function WBP_Wrapper_TeamSystem_TeamListEntry.WBP_Wrapper_TeamSystem_TeamListEntry_C.SetKickVisibility // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_WBP_Wrapper_TeamSystem_TeamListEntry(int32_t EntryPoint); // Function WBP_Wrapper_TeamSystem_TeamListEntry.WBP_Wrapper_TeamSystem_TeamListEntry_C.ExecuteUbergraph_WBP_Wrapper_TeamSystem_TeamListEntry // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
	void OnExit__DelegateSignature(); // Function WBP_Wrapper_TeamSystem_TeamListEntry.WBP_Wrapper_TeamSystem_TeamListEntry_C.OnExit__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
};

