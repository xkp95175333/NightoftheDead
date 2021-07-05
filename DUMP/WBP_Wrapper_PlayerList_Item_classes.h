// WidgetBlueprintGeneratedClass WBP_Wrapper_PlayerList_Item.WBP_Wrapper_PlayerList_Item_C
// Size: 0x2d8 (Inherited: 0x260)
struct UWBP_Wrapper_PlayerList_Item_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWBP_PlayerList_Item_C* WBP_PlayerList_Item; // 0x268(0x08)
	struct FString PlayerName; // 0x270(0x10)
	struct FBPUniqueNetId UniqueNetId; // 0x280(0x20)
	bool bMyself; // 0x2a0(0x01)
	bool bIsAdmin; // 0x2a1(0x01)
	bool bIsBan; // 0x2a2(0x01)
	char pad_2A3[0x5]; // 0x2a3(0x05)
	struct FMulticastInlineDelegate OnPlayerBanned; // 0x2a8(0x10)
	struct FLFGamePlayerId BanInfo; // 0x2b8(0x20)

	void PreConstruct(bool IsDesignTime); // Function WBP_Wrapper_PlayerList_Item.WBP_Wrapper_PlayerList_Item_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void Construct(); // Function WBP_Wrapper_PlayerList_Item.WBP_Wrapper_PlayerList_Item_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void Refresh(); // Function WBP_Wrapper_PlayerList_Item.WBP_Wrapper_PlayerList_Item_C.Refresh // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnProfileClicked(); // Function WBP_Wrapper_PlayerList_Item.WBP_Wrapper_PlayerList_Item_C.OnProfileClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void BindButtonEvents(); // Function WBP_Wrapper_PlayerList_Item.WBP_Wrapper_PlayerList_Item_C.BindButtonEvents // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnBanButtonClicked(); // Function WBP_Wrapper_PlayerList_Item.WBP_Wrapper_PlayerList_Item_C.OnBanButtonClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnUnbanButtonClicked(); // Function WBP_Wrapper_PlayerList_Item.WBP_Wrapper_PlayerList_Item_C.OnUnbanButtonClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_WBP_Wrapper_PlayerList_Item(int32_t EntryPoint); // Function WBP_Wrapper_PlayerList_Item.WBP_Wrapper_PlayerList_Item_C.ExecuteUbergraph_WBP_Wrapper_PlayerList_Item // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
	void OnPlayerBanned__DelegateSignature(); // Function WBP_Wrapper_PlayerList_Item.WBP_Wrapper_PlayerList_Item_C.OnPlayerBanned__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
};

