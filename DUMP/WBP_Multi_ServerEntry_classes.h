// WidgetBlueprintGeneratedClass WBP_Multi_ServerEntry.WBP_Multi_ServerEntry_C
// Size: 0x5d9 (Inherited: 0x260)
struct UWBP_Multi_ServerEntry_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UButton* Button; // 0x268(0x08)
	struct UImage* Image_Clicked; // 0x270(0x08)
	struct UTextBlock* TextBlock_Day; // 0x278(0x08)
	struct UTextBlock* TextBlock_Difficulty; // 0x280(0x08)
	struct UTextBlock* TextBlock_Hardcore; // 0x288(0x08)
	struct UTextBlock* TextBlock_Mode; // 0x290(0x08)
	struct UTextBlock* TextBlock_NoWave; // 0x298(0x08)
	struct UTextBlock* TextBlock_Password; // 0x2a0(0x08)
	struct UTextBlock* TextBlock_Ping; // 0x2a8(0x08)
	struct UTextBlock* TextBlock_Player; // 0x2b0(0x08)
	struct UTextBlock* TextBlock_ServerName; // 0x2b8(0x08)
	struct UTextBlock* TextBlock_TeamKill; // 0x2c0(0x08)
	bool MakeAnim?; // 0x2c8(0x01)
	char pad_2C9[0x3]; // 0x2c9(0x03)
	float ActualLeft; // 0x2cc(0x04)
	struct UHorizontalBoxSlot* MyLeft; // 0x2d0(0x08)
	bool IsHovered?; // 0x2d8(0x01)
	char pad_2D9[0x3]; // 0x2d9(0x03)
	struct FLinearColor MouseEnterColor; // 0x2dc(0x10)
	struct FLinearColor MouseLeaveColor; // 0x2ec(0x10)
	char pad_2FC[0x4]; // 0x2fc(0x04)
	struct FBlueprintSessionResult SessionRef; // 0x300(0x108)
	bool SessinInfo; // 0x408(0x01)
	char pad_409[0x3]; // 0x409(0x03)
	int32_t Click; // 0x40c(0x04)
	int32_t FontSize; // 0x410(0x04)
	char pad_414[0x4]; // 0x414(0x04)
	struct FSlateColor FontColor; // 0x418(0x28)
	struct FString ServerName; // 0x440(0x10)
	struct FString Password; // 0x450(0x10)
	struct FString Mode; // 0x460(0x10)
	int32_t CurPlayer; // 0x470(0x04)
	int32_t MaxPlayer; // 0x474(0x04)
	int32_t Ping; // 0x478(0x04)
	char pad_47C[0x4]; // 0x47c(0x04)
	struct FString Difficulty; // 0x480(0x10)
	bool bIsSelected; // 0x490(0x01)
	char pad_491[0x7]; // 0x491(0x07)
	struct FSlateColor SelectedColor; // 0x498(0x28)
	struct FSlateColor DeSelectedColor; // 0x4c0(0x28)
	struct FMulticastInlineDelegate OnServerSelected; // 0x4e8(0x10)
	struct FMulticastInlineDelegate JoinSelectedServer; // 0x4f8(0x10)
	bool bHardcore; // 0x508(0x01)
	bool bNoTeamkill; // 0x509(0x01)
	bool bNoWave; // 0x50a(0x01)
	char pad_50B[0x1]; // 0x50b(0x01)
	int32_t Day; // 0x50c(0x04)
	struct FGameServerItem GameServerItem; // 0x510(0xb0)
	bool bNoSession; // 0x5c0(0x01)
	char pad_5C1[0x7]; // 0x5c1(0x07)
	struct FString GameVersion; // 0x5c8(0x10)
	bool bIsOfficial; // 0x5d8(0x01)

	void RefreshEntryInfo(); // Function WBP_Multi_ServerEntry.WBP_Multi_ServerEntry_C.RefreshEntryInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void PreConstruct(bool IsDesignTime); // Function WBP_Multi_ServerEntry.WBP_Multi_ServerEntry_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void OnSelected(); // Function WBP_Multi_ServerEntry.WBP_Multi_ServerEntry_C.OnSelected // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnDeselected(); // Function WBP_Multi_ServerEntry.WBP_Multi_ServerEntry_C.OnDeselected // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function WBP_Multi_ServerEntry.WBP_Multi_ServerEntry_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void RefreshNonSessionInfo(); // Function WBP_Multi_ServerEntry.WBP_Multi_ServerEntry_C.RefreshNonSessionInfo // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_WBP_Multi_ServerEntry(int32_t EntryPoint); // Function WBP_Multi_ServerEntry.WBP_Multi_ServerEntry_C.ExecuteUbergraph_WBP_Multi_ServerEntry // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
	void JoinSelectedServer__DelegateSignature(struct UWBP_Multi_ServerEntry_C* SelectedServer); // Function WBP_Multi_ServerEntry.WBP_Multi_ServerEntry_C.JoinSelectedServer__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnServerSelected__DelegateSignature(struct UWBP_Multi_ServerEntry_C* SelectedServerEntry); // Function WBP_Multi_ServerEntry.WBP_Multi_ServerEntry_C.OnServerSelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
};

