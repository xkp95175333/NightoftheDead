// WidgetBlueprintGeneratedClass WBP_System_ServerInfo_Invited.WBP_System_ServerInfo_Invited_C
// Size: 0x290 (Inherited: 0x260)
struct UWBP_System_ServerInfo_Invited_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWBP_Wrapper_Confirmation_C* WBP_Wrapper_Confirmation; // 0x268(0x08)
	struct FLFTeamId TeamId; // 0x270(0x10)
	struct FString PlayerName; // 0x280(0x10)

	void PreConstruct(bool IsDesignTime); // Function WBP_System_ServerInfo_Invited.WBP_System_ServerInfo_Invited_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void Construct(); // Function WBP_System_ServerInfo_Invited.WBP_System_ServerInfo_Invited_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_System_ServerInfo_Invited.WBP_System_ServerInfo_Invited_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void OnClick_Event_1(); // Function WBP_System_ServerInfo_Invited.WBP_System_ServerInfo_Invited_C.OnClick_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnClick_Decline(); // Function WBP_System_ServerInfo_Invited.WBP_System_ServerInfo_Invited_C.OnClick_Decline // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_WBP_System_ServerInfo_Invited(int32_t EntryPoint); // Function WBP_System_ServerInfo_Invited.WBP_System_ServerInfo_Invited_C.ExecuteUbergraph_WBP_System_ServerInfo_Invited // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
};

