// WidgetBlueprintGeneratedClass W_MainChat.W_MainChat_C
// Size: 0x389 (Inherited: 0x260)
struct UW_MainChat_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* FadeInOut; // 0x268(0x08)
	struct UButton* Button_Commit; // 0x270(0x08)
	struct UButton* Button_Fond; // 0x278(0x08)
	struct UEditableTextBox* EditableText_ChatEntry; // 0x280(0x08)
	struct UHorizontalBox* HorizontalBox_Category; // 0x288(0x08)
	struct UScrollBox* MyScrollBox; // 0x290(0x08)
	struct UOverlay* Overlay_PM; // 0x298(0x08)
	struct UScrollBox* ScrollBox_Messages; // 0x2a0(0x08)
	struct UImage* SPACE; // 0x2a8(0x08)
	struct UButton* TeamListBtn; // 0x2b0(0x08)
	struct UImage* TeamListBtnIcon; // 0x2b8(0x08)
	struct UTextBlock* TextBlock_ActualTeam; // 0x2c0(0x08)
	struct UTextBlock* TextBlock_PM; // 0x2c8(0x08)
	struct UW_CategoryButtons_C* W_CategoryButtons_All; // 0x2d0(0x08)
	struct UW_CategoryButtons_C* W_CategoryButtons_Global; // 0x2d8(0x08)
	struct UW_CategoryButtons_C* W_CategoryButtons_Private; // 0x2e0(0x08)
	struct UW_CategoryButtons_C* W_CategoryButtons_Proximity; // 0x2e8(0x08)
	struct UW_CategoryButtons_C* W_CategoryButtons_Team; // 0x2f0(0x08)
	bool ChatOpen?; // 0x2f8(0x01)
	enum class E_ChatCategory OnMessageCategory; // 0x2f9(0x01)
	char pad_2FA[0x6]; // 0x2fa(0x06)
	struct TArray<struct FText> IgnoreUsername; // 0x300(0x10)
	struct TArray<struct UW_MessageChat_C*> AllMessages; // 0x310(0x10)
	int32_t PlayerId; // 0x320(0x04)
	char pad_324[0x4]; // 0x324(0x04)
	struct APlayerController* ControllerRef; // 0x328(0x08)
	bool ShowHideMouse?; // 0x330(0x01)
	bool ResetFocus?; // 0x331(0x01)
	char pad_332[0x6]; // 0x332(0x06)
	struct TArray<struct UW_CategoryButtons_C*> ButtonsArray; // 0x338(0x10)
	int32_t ToPlayerID; // 0x348(0x04)
	char pad_34C[0x4]; // 0x34c(0x04)
	struct FText CurrentPMUsername; // 0x350(0x18)
	struct FText CurrentMessage; // 0x368(0x18)
	bool CloseOnCommit?; // 0x380(0x01)
	char pad_381[0x3]; // 0x381(0x03)
	int32_t Attempt; // 0x384(0x04)
	bool ShowTime?; // 0x388(0x01)

	void PlayCloseAnimation(struct UWidgetAnimation* InAnimation, float StartAtTime); // Function W_MainChat.W_MainChat_C.PlayCloseAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void PlayOpenAnimation(struct UWidgetAnimation* InAnimation, float StartAtTime); // Function W_MainChat.W_MainChat_C.PlayOpenAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void GetSkipParameterVerification(enum class E_ChatCommand Command, bool Skip?); // Function W_MainChat.W_MainChat_C.GetSkipParameterVerification // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	void SelectNextTab(bool Found?); // Function W_MainChat.W_MainChat_C.SelectNextTab // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ShowSystemMessage(struct FText Message, struct FLinearColor MessageColor); // Function W_MainChat.W_MainChat_C.ShowSystemMessage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void CheckBlocked(struct FText UserName, bool Blocked?); // Function W_MainChat.W_MainChat_C.CheckBlocked // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void CheckForChatCommand(bool Continue?); // Function W_MainChat.W_MainChat_C.CheckForChatCommand // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void CheckOnNewMessage(enum class E_ChatCategory MessageFrom, bool ScrollToEnd?); // Function W_MainChat.W_MainChat_C.CheckOnNewMessage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	struct FEventReply OnPreviewKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function W_MainChat.W_MainChat_C.OnPreviewKeyDown // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__EditableText__ChatEntry_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText Text, enum class ETextCommit CommitMethod); // Function W_MainChat.W_MainChat_C.BndEvt__EditableText__ChatEntry_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1395fe0
	void OpenCloseChat(); // Function W_MainChat.W_MainChat_C.OpenCloseChat // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Construct(); // Function W_MainChat.W_MainChat_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Button_222_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature(); // Function W_MainChat.W_MainChat_C.BndEvt__Button_222_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void AddNewMessage(enum class E_ChatCategory MessageCategory, int32_t PlayerId, struct FText Prefix, struct FText UserName, struct FText Message, struct FSlateColor PrefixColor, struct FSlateColor UsernameColor, struct FSlateColor MessageColor); // Function W_MainChat.W_MainChat_C.AddNewMessage // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ResetFocus(); // Function W_MainChat.W_MainChat_C.ResetFocus // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnClickedCategory(enum class E_ChatCategory NewCategory); // Function W_MainChat.W_MainChat_C.OnClickedCategory // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void CheckForAddMessage(struct UW_MessageChat_C* MessageRef); // Function W_MainChat.W_MainChat_C.CheckForAddMessage // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ContinueOnClickedPrivateMessage(int32_t ToPlayerID, struct FText UserName); // Function W_MainChat.W_MainChat_C.ContinueOnClickedPrivateMessage // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ContinuePrivateMessage(struct FText ToUsername, struct FText Message, int32_t ToPlayerID); // Function W_MainChat.W_MainChat_C.ContinuePrivateMessage // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void PlayerNotFound(struct FText UserName); // Function W_MainChat.W_MainChat_C.PlayerNotFound // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Button_Commit_K2Node_ComponentBoundEvent_156_OnButtonClickedEvent__DelegateSignature(); // Function W_MainChat.W_MainChat_C.BndEvt__Button_Commit_K2Node_ComponentBoundEvent_156_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void MyCommit(struct FText Text); // Function W_MainChat.W_MainChat_C.MyCommit // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void RefreshTeam(int32_t TeamId); // Function W_MainChat.W_MainChat_C.RefreshTeam // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void RefreshTimeVisibility(); // Function W_MainChat.W_MainChat_C.RefreshTimeVisibility // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__TeamListBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function W_MainChat.W_MainChat_C.BndEvt__TeamListBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_W_MainChat(int32_t EntryPoint); // Function W_MainChat.W_MainChat_C.ExecuteUbergraph_W_MainChat // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
};

