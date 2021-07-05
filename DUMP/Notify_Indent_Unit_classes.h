// WidgetBlueprintGeneratedClass Notify_Indent_Unit.Notify_Indent_Unit_C
// Size: 0x2cb (Inherited: 0x260)
struct UNotify_Indent_Unit_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* GrowReverse; // 0x268(0x08)
	struct UWidgetAnimation* Grow; // 0x270(0x08)
	struct UButton* Button_1; // 0x278(0x08)
	struct UImage* Image_14; // 0x280(0x08)
	struct UImage* Image_78; // 0x288(0x08)
	struct UOverlay* Overlay; // 0x290(0x08)
	struct UTextBlock* Text; // 0x298(0x08)
	enum class MessageType MessageType; // 0x2a0(0x01)
	char pad_2A1[0x3]; // 0x2a1(0x03)
	float Duration; // 0x2a4(0x04)
	struct FText IndentText; // 0x2a8(0x18)
	struct UUserWidget* Owner; // 0x2c0(0x08)
	bool bOnlyDismissIfClicked; // 0x2c8(0x01)
	enum class IndentPosition Position; // 0x2c9(0x01)
	bool BeingDestroyed; // 0x2ca(0x01)

	void Construct(); // Function Notify_Indent_Unit.Notify_Indent_Unit_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void Destroy(); // Function Notify_Indent_Unit.Notify_Indent_Unit_C.Destroy // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature(); // Function Notify_Indent_Unit.Notify_Indent_Unit_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_Notify_Indent_Unit(int32_t EntryPoint); // Function Notify_Indent_Unit.Notify_Indent_Unit_C.ExecuteUbergraph_Notify_Indent_Unit // (Final|UbergraphFunction) // @ game+0x1395fe0
};

