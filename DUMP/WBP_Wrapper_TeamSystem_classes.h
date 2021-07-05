// WidgetBlueprintGeneratedClass WBP_Wrapper_TeamSystem.WBP_Wrapper_TeamSystem_C
// Size: 0x310 (Inherited: 0x260)
struct UWBP_Wrapper_TeamSystem_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UTeamSystem_C* TeamSystem; // 0x268(0x08)
	struct UWBP_Wrapper_Confirmation_Generic_C* WBP_Confirm_Kick; // 0x270(0x08)
	struct UWBP_Wrapper_Confirmation_Generic_C* WBP_Confirm_Leader; // 0x278(0x08)
	struct UWBP_Wrapper_Confirmation_Generic_C* WBP_Confirm_Leave; // 0x280(0x08)
	struct UWBP_Wrapper_Confirmation_Generic_C* WBP_Confirm_Manager; // 0x288(0x08)
	struct UWBP_Multi_Password_C* WBP_Create_Prompt; // 0x290(0x08)
	struct UButton* Btn_TeamNameEdit; // 0x298(0x08)
	struct UScrollBox* List_TeamPlayers; // 0x2a0(0x08)
	struct UScrollBox* List_OtherPlayers; // 0x2a8(0x08)
	struct UButton* Btn_TeamRefresh; // 0x2b0(0x08)
	struct UButton* Btn_OtherRefresh; // 0x2b8(0x08)
	struct UButton* BTN_Back; // 0x2c0(0x08)
	struct UButton* Btn_Leave; // 0x2c8(0x08)
	struct UEditableText* Text_TeamName; // 0x2d0(0x08)
	struct TArray<struct FLFTeamAgentId> TeamOnlinePlayers; // 0x2d8(0x10)
	struct TArray<struct FLFTeamAgentId> TeamOfflinePlayers; // 0x2e8(0x10)
	struct TArray<struct FLFTeamAgentId> TeamPlayers; // 0x2f8(0x10)
	struct UButton* Btn_Create; // 0x308(0x08)

	bool IsLeader(); // Function WBP_Wrapper_TeamSystem.WBP_Wrapper_TeamSystem_C.IsLeader // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	void PreConstruct(bool IsDesignTime); // Function WBP_Wrapper_TeamSystem.WBP_Wrapper_TeamSystem_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void Construct(); // Function WBP_Wrapper_TeamSystem.WBP_Wrapper_TeamSystem_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_Wrapper_TeamSystem.WBP_Wrapper_TeamSystem_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void OnBackButtonClicked(); // Function WBP_Wrapper_TeamSystem.WBP_Wrapper_TeamSystem_C.OnBackButtonClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnLeaveButtonClicked(); // Function WBP_Wrapper_TeamSystem.WBP_Wrapper_TeamSystem_C.OnLeaveButtonClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void RefreshTeamName(); // Function WBP_Wrapper_TeamSystem.WBP_Wrapper_TeamSystem_C.RefreshTeamName // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void RefreshTeamList(); // Function WBP_Wrapper_TeamSystem.WBP_Wrapper_TeamSystem_C.RefreshTeamList // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void BindButtonEvents(); // Function WBP_Wrapper_TeamSystem.WBP_Wrapper_TeamSystem_C.BindButtonEvents // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void RefreshPlayerTeamList(); // Function WBP_Wrapper_TeamSystem.WBP_Wrapper_TeamSystem_C.RefreshPlayerTeamList // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void RefreshOtherTeamList(); // Function WBP_Wrapper_TeamSystem.WBP_Wrapper_TeamSystem_C.RefreshOtherTeamList // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Refresh(); // Function WBP_Wrapper_TeamSystem.WBP_Wrapper_TeamSystem_C.Refresh // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void RenameTeam(); // Function WBP_Wrapper_TeamSystem.WBP_Wrapper_TeamSystem_C.RenameTeam // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void BindCreateTeamEvents(); // Function WBP_Wrapper_TeamSystem.WBP_Wrapper_TeamSystem_C.BindCreateTeamEvents // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnCreateCancel(); // Function WBP_Wrapper_TeamSystem.WBP_Wrapper_TeamSystem_C.OnCreateCancel // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnCreateClicked(); // Function WBP_Wrapper_TeamSystem.WBP_Wrapper_TeamSystem_C.OnCreateClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__WBP_Create_Prompt_K2Node_ComponentBoundEvent_0_OnPasswordSubmit__DelegateSignature(struct FString Password); // Function WBP_Wrapper_TeamSystem.WBP_Wrapper_TeamSystem_C.BndEvt__WBP_Create_Prompt_K2Node_ComponentBoundEvent_0_OnPasswordSubmit__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void Destruct(); // Function WBP_Wrapper_TeamSystem.WBP_Wrapper_TeamSystem_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void RefreshLoop(); // Function WBP_Wrapper_TeamSystem.WBP_Wrapper_TeamSystem_C.RefreshLoop // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void TeamRefresh(); // Function WBP_Wrapper_TeamSystem.WBP_Wrapper_TeamSystem_C.TeamRefresh // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OtherRefresh(); // Function WBP_Wrapper_TeamSystem.WBP_Wrapper_TeamSystem_C.OtherRefresh // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExitByGiveLeader(); // Function WBP_Wrapper_TeamSystem.WBP_Wrapper_TeamSystem_C.ExitByGiveLeader // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void BindLeaveTeamEvent(); // Function WBP_Wrapper_TeamSystem.WBP_Wrapper_TeamSystem_C.BindLeaveTeamEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnTeamLeave(); // Function WBP_Wrapper_TeamSystem.WBP_Wrapper_TeamSystem_C.OnTeamLeave // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnTeamLeaveCancel(); // Function WBP_Wrapper_TeamSystem.WBP_Wrapper_TeamSystem_C.OnTeamLeaveCancel // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_WBP_Wrapper_TeamSystem(int32_t EntryPoint); // Function WBP_Wrapper_TeamSystem.WBP_Wrapper_TeamSystem_C.ExecuteUbergraph_WBP_Wrapper_TeamSystem // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
};

