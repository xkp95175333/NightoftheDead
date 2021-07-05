// WidgetBlueprintGeneratedClass WBP_NameTag.WBP_NameTag_C
// Size: 0x278 (Inherited: 0x260)
struct UWBP_NameTag_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UTextBlock* TextBlock_Name; // 0x268(0x08)
	struct UTextBlock* TextBlock_TeamName; // 0x270(0x08)

	void SetName(struct FString Name); // Function WBP_NameTag.WBP_NameTag_C.SetName // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void SetTeamName(struct FString Name); // Function WBP_NameTag.WBP_NameTag_C.SetTeamName // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_WBP_NameTag(int32_t EntryPoint); // Function WBP_NameTag.WBP_NameTag_C.ExecuteUbergraph_WBP_NameTag // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
};

