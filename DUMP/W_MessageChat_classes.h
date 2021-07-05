// WidgetBlueprintGeneratedClass W_MessageChat.W_MessageChat_C
// Size: 0x371 (Inherited: 0x260)
struct UW_MessageChat_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UButton* Button_Username; // 0x268(0x08)
	struct UHorizontalBox* HorizontalBox_Heure; // 0x270(0x08)
	struct UTextBlock* TextBlock_Heure; // 0x278(0x08)
	struct UTextBlock* TextBlock_Message; // 0x280(0x08)
	struct UTextBlock* TextBlock_Prefix; // 0x288(0x08)
	struct UTextBlock* TextBlock_Username; // 0x290(0x08)
	bool ShowTime?; // 0x298(0x01)
	char pad_299[0x7]; // 0x299(0x07)
	struct UW_MainChat_C* MainChatRef; // 0x2a0(0x08)
	enum class E_ChatCategory MessageCategory; // 0x2a8(0x01)
	char pad_2A9[0x3]; // 0x2a9(0x03)
	int32_t PlayerId; // 0x2ac(0x04)
	struct FText Prefix; // 0x2b0(0x18)
	struct FText UserName; // 0x2c8(0x18)
	struct FText Message; // 0x2e0(0x18)
	struct FSlateColor PrefixColor; // 0x2f8(0x28)
	struct FSlateColor UsernameColor; // 0x320(0x28)
	struct FSlateColor MessageColor; // 0x348(0x28)
	bool AlreadySpawn?; // 0x370(0x01)

	void BndEvt__Button_Username_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature(); // Function W_MessageChat.W_MessageChat_C.BndEvt__Button_Username_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void PreConstruct(bool IsDesignTime); // Function W_MessageChat.W_MessageChat_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void RefreshTimeVisibility(bool Visible?); // Function W_MessageChat.W_MessageChat_C.RefreshTimeVisibility // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_W_MessageChat(int32_t EntryPoint); // Function W_MessageChat.W_MessageChat_C.ExecuteUbergraph_W_MessageChat // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
};

