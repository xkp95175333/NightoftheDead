// WidgetBlueprintGeneratedClass WBP_GameGuideHUD.WBP_GameGuideHUD_C
// Size: 0x360 (Inherited: 0x260)
struct UWBP_GameGuideHUD_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UVerticalBox* VerticalBox_Container; // 0x268(0x08)
	struct UWBP_GameGuideViewWrapper_C* WBP_GameGuideViewWrapper; // 0x270(0x08)
	struct UWBP_GameGuideViewWrapper_C* WBP_GameGuideViewWrapper_537; // 0x278(0x08)
	struct UWBP_GameGuideViewWrapper_C* WBP_GameGuideViewWrapper_657; // 0x280(0x08)
	struct UDataTable* WeaponTable; // 0x288(0x08)
	struct UDataTable* WeaponTypeTable; // 0x290(0x08)
	struct UDataTable* WeaponPoseTypeTable; // 0x298(0x08)
	struct ALFCharacterPlayer* PlayerCharacter; // 0x2a0(0x08)
	struct ULFCharacterEquipmentComponent* Equipment; // 0x2a8(0x08)
	struct FName CurrentGuideName; // 0x2b0(0x08)
	int32_t CurrentMaxPriority; // 0x2b8(0x04)
	bool HasRight; // 0x2bc(0x01)
	bool HasLeft; // 0x2bd(0x01)
	char pad_2BE[0x2]; // 0x2be(0x02)
	struct TMap<struct FName, struct UWBP_GameGuideViewWrapper_C*> CachedGuides; // 0x2c0(0x50)
	struct TMap<struct FName, struct UWBP_GameGuideViewWrapper_C*> PresentingGuides; // 0x310(0x50)

	void UpdateGuideContent(struct UWBP_GameGuideViewWrapper_C* Widget, struct FGameAction GameAction); // Function WBP_GameGuideHUD.WBP_GameGuideHUD_C.UpdateGuideContent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ResetLeft(); // Function WBP_GameGuideHUD.WBP_GameGuideHUD_C.ResetLeft // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ResetRight(); // Function WBP_GameGuideHUD.WBP_GameGuideHUD_C.ResetRight // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Present Guide(struct TArray<struct FGameAction> ValidActions); // Function WBP_GameGuideHUD.WBP_GameGuideHUD_C.Present Guide // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void CreateAndCacheContents(struct FGameAction Valid Action); // Function WBP_GameGuideHUD.WBP_GameGuideHUD_C.CreateAndCacheContents // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Present Entity(int32_t Priority, struct UDataTable* DataTable, struct FName RowName, bool NeedFallback); // Function WBP_GameGuideHUD.WBP_GameGuideHUD_C.Present Entity // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void EraseAllGuides(); // Function WBP_GameGuideHUD.WBP_GameGuideHUD_C.EraseAllGuides // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void FindValidActionFromTable(int32_t Priority, struct UDataTable* DataTable, struct FName RowName, struct TArray<struct FGameAction> ValidActions, bool Find Result, struct FName ValidGuideName, int32_t ValidPriority); // Function WBP_GameGuideHUD.WBP_GameGuideHUD_C.FindValidActionFromTable // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ValidateGuideEntry(); // Function WBP_GameGuideHUD.WBP_GameGuideHUD_C.ValidateGuideEntry // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void PreConstruct(bool IsDesignTime); // Function WBP_GameGuideHUD.WBP_GameGuideHUD_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_GameGuideHUD.WBP_GameGuideHUD_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_WBP_GameGuideHUD(int32_t EntryPoint); // Function WBP_GameGuideHUD.WBP_GameGuideHUD_C.ExecuteUbergraph_WBP_GameGuideHUD // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
};

