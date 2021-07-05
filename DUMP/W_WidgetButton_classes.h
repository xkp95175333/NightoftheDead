// WidgetBlueprintGeneratedClass W_WidgetButton.W_WidgetButton_C
// Size: 0x28c (Inherited: 0x260)
struct UW_WidgetButton_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UButton* Button; // 0x268(0x08)
	struct UTextBlock* ButtonLabelText; // 0x270(0x08)
	struct ABP_AnimatedBook_C* BookToControl; // 0x278(0x08)
	enum class E_ButtonFuncts Button Function; // 0x280(0x01)
	char pad_281[0x3]; // 0x281(0x03)
	int32_t Page number; // 0x284(0x04)
	float Open Book Amount; // 0x288(0x04)

	void Construct(); // Function W_WidgetButton.W_WidgetButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Button_181_K2Node_ComponentBoundEvent_92_OnButtonClickedEvent__DelegateSignature(); // Function W_WidgetButton.W_WidgetButton_C.BndEvt__Button_181_K2Node_ComponentBoundEvent_92_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function W_WidgetButton.W_WidgetButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_W_WidgetButton(int32_t EntryPoint); // Function W_WidgetButton.W_WidgetButton_C.ExecuteUbergraph_W_WidgetButton // (Final|UbergraphFunction) // @ game+0x1395fe0
};

