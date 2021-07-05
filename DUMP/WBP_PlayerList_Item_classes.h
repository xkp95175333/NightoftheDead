// WidgetBlueprintGeneratedClass WBP_PlayerList_Item.WBP_PlayerList_Item_C
// Size: 0x2e2 (Inherited: 0x260)
struct UWBP_PlayerList_Item_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UButton* Btn_Ban; // 0x268(0x08)
	struct UButton* Btn_UnBan; // 0x270(0x08)
	struct UButton* Button_Profile; // 0x278(0x08)
	struct UCollapsibleTextBlock* NickName; // 0x280(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_Button; // 0x288(0x08)
	struct FSlateColor BanColor; // 0x290(0x28)
	struct FSlateColor NormalColor; // 0x2b8(0x28)
	bool bIsAdmin; // 0x2e0(0x01)
	bool bIsBan; // 0x2e1(0x01)

	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_PlayerList_Item.WBP_PlayerList_Item_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void Construct(); // Function WBP_PlayerList_Item.WBP_PlayerList_Item_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void PreConstruct(bool IsDesignTime); // Function WBP_PlayerList_Item.WBP_PlayerList_Item_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void Refresh(); // Function WBP_PlayerList_Item.WBP_PlayerList_Item_C.Refresh // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_WBP_PlayerList_Item(int32_t EntryPoint); // Function WBP_PlayerList_Item.WBP_PlayerList_Item_C.ExecuteUbergraph_WBP_PlayerList_Item // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
};

