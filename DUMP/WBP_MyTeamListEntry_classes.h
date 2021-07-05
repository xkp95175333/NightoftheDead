// WidgetBlueprintGeneratedClass WBP_MyTeamListEntry.WBP_MyTeamListEntry_C
// Size: 0x7c0 (Inherited: 0x260)
struct UWBP_MyTeamListEntry_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* Icon; // 0x268(0x08)
	struct UCollapsibleTextBlock* NickName; // 0x270(0x08)
	struct UImage* Space1; // 0x278(0x08)
	struct UImage* Space1_3; // 0x280(0x08)
	struct UImage* Space1_4; // 0x288(0x08)
	struct UImage* Space1_5; // 0x290(0x08)
	struct UImage* Space1_6; // 0x298(0x08)
	struct UImage* Space1_7; // 0x2a0(0x08)
	struct UButton* Teamlead_Icon; // 0x2a8(0x08)
	struct UButton* TeamManager_Icon; // 0x2b0(0x08)
	struct UButton* TeamManager_Icon_KickBtn; // 0x2b8(0x08)
	struct UImage* TL_Icon; // 0x2c0(0x08)
	struct UImage* TM_Icon; // 0x2c8(0x08)
	struct FButtonStyle Manager_Deprive; // 0x2d0(0x278)
	struct FButtonStyle Manager_Normal; // 0x548(0x278)

	void DepriveManagerRole(); // Function WBP_MyTeamListEntry.WBP_MyTeamListEntry_C.DepriveManagerRole // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void GiveManagerRole(); // Function WBP_MyTeamListEntry.WBP_MyTeamListEntry_C.GiveManagerRole // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_WBP_MyTeamListEntry(int32_t EntryPoint); // Function WBP_MyTeamListEntry.WBP_MyTeamListEntry_C.ExecuteUbergraph_WBP_MyTeamListEntry // (Final|UbergraphFunction) // @ game+0x1395fe0
};

