// WidgetBlueprintGeneratedClass W_CategoryButtons.W_CategoryButtons_C
// Size: 0x2e8 (Inherited: 0x260)
struct UW_CategoryButtons_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* OnWait; // 0x268(0x08)
	struct UButton* Button_Category; // 0x270(0x08)
	struct UImage* Chatting_Icon; // 0x278(0x08)
	struct UImage* Image_Anim; // 0x280(0x08)
	struct USizeBox* MySizeBox; // 0x288(0x08)
	struct USpacer* Spacer_Left; // 0x290(0x08)
	struct USpacer* Spacer_Right; // 0x298(0x08)
	struct UTextBlock* TextBlock_Category; // 0x2a0(0x08)
	enum class E_ChatCategory Category; // 0x2a8(0x01)
	char pad_2A9[0x7]; // 0x2a9(0x07)
	struct UW_MainChat_C* MainChatRef; // 0x2b0(0x08)
	struct FText Button Name; // 0x2b8(0x18)
	float LeftSpacerSize; // 0x2d0(0x04)
	float RightSpacerSize; // 0x2d4(0x04)
	float OverrideWidth; // 0x2d8(0x04)
	char pad_2DC[0x4]; // 0x2dc(0x04)
	struct UTexture2D* ChatIcon; // 0x2e0(0x08)

	void BndEvt__Button_Category_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function W_CategoryButtons.W_CategoryButtons_C.BndEvt__Button_Category_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void OnSelected(); // Function W_CategoryButtons.W_CategoryButtons_C.OnSelected // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnUnSelected(); // Function W_CategoryButtons.W_CategoryButtons_C.OnUnSelected // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void PreConstruct(bool IsDesignTime); // Function W_CategoryButtons.W_CategoryButtons_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void OnNewMessage(); // Function W_CategoryButtons.W_CategoryButtons_C.OnNewMessage // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_W_CategoryButtons(int32_t EntryPoint); // Function W_CategoryButtons.W_CategoryButtons_C.ExecuteUbergraph_W_CategoryButtons // (Final|UbergraphFunction) // @ game+0x1395fe0
};

