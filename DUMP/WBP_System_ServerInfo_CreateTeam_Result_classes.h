// WidgetBlueprintGeneratedClass WBP_System_ServerInfo_CreateTeam_Result.WBP_System_ServerInfo_CreateTeam_Result_C
// Size: 0x288 (Inherited: 0x260)
struct UWBP_System_ServerInfo_CreateTeam_Result_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWBP_Wrapper_Confirmation_C* WBP_Wrapper_Confirmation; // 0x268(0x08)
	bool bIsSuccess; // 0x270(0x01)
	char pad_271[0x7]; // 0x271(0x07)
	struct FString FailureReason; // 0x278(0x10)

	void OnClick_Event_1(); // Function WBP_System_ServerInfo_CreateTeam_Result.WBP_System_ServerInfo_CreateTeam_Result_C.OnClick_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Construct(); // Function WBP_System_ServerInfo_CreateTeam_Result.WBP_System_ServerInfo_CreateTeam_Result_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void PreConstruct(bool IsDesignTime); // Function WBP_System_ServerInfo_CreateTeam_Result.WBP_System_ServerInfo_CreateTeam_Result_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_WBP_System_ServerInfo_CreateTeam_Result(int32_t EntryPoint); // Function WBP_System_ServerInfo_CreateTeam_Result.WBP_System_ServerInfo_CreateTeam_Result_C.ExecuteUbergraph_WBP_System_ServerInfo_CreateTeam_Result // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
};

