// WidgetBlueprintGeneratedClass NotifyUMG.NotifyUMG_C
// Size: 0x3d8 (Inherited: 0x260)
struct UNotifyUMG_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* Move2; // 0x268(0x08)
	struct UWidgetAnimation* Move; // 0x270(0x08)
	struct UVerticalBox* IndentBox; // 0x278(0x08)
	struct UTextBlock* Line1; // 0x280(0x08)
	struct UTextBlock* Line2; // 0x288(0x08)
	struct UTextBlock* Line3; // 0x290(0x08)
	bool Line3InUse; // 0x298(0x01)
	bool Line2InUse; // 0x299(0x01)
	bool Line1InUse; // 0x29a(0x01)
	char pad_29B[0x5]; // 0x29b(0x05)
	struct FSlateColor InfoColor; // 0x2a0(0x28)
	struct FSlateColor SuccesColor; // 0x2c8(0x28)
	struct FSlateColor WarningColor; // 0x2f0(0x28)
	struct FSlateColor ErrorColor; // 0x318(0x28)
	struct FText Line1Text; // 0x340(0x18)
	struct FSlateColor Line1Color; // 0x358(0x28)
	struct FSlateColor Line2Color; // 0x380(0x28)
	struct FText Line2Text; // 0x3a8(0x18)
	struct TArray<struct UNotify_Indent_Unit_C*> Indent; // 0x3c0(0x10)
	enum class IndentPosition NotifyType; // 0x3d0(0x01)
	char pad_3D1[0x3]; // 0x3d1(0x03)
	int32_t maxEntries; // 0x3d4(0x04)

	void DestroyFirst(); // Function NotifyUMG.NotifyUMG_C.DestroyFirst // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void RemoveFromList(struct UNotify_Indent_Unit_C* Widget); // Function NotifyUMG.NotifyUMG_C.RemoveFromList // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void NotifyMessage(struct FText InText, enum class MessageType MessageType, float Duration, enum class NotifyType NotifytType, bool bOnlyDismissIfClicked); // Function NotifyUMG.NotifyUMG_C.NotifyMessage // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void DestroyAll(); // Function NotifyUMG.NotifyUMG_C.DestroyAll // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Construct(); // Function NotifyUMG.NotifyUMG_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_NotifyUMG(int32_t EntryPoint); // Function NotifyUMG.NotifyUMG_C.ExecuteUbergraph_NotifyUMG // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
};

