// WidgetBlueprintGeneratedClass WB_LootNotify.WB_LootNotify_C
// Size: 0x2dc (Inherited: 0x260)
struct UWB_LootNotify_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* Fading; // 0x268(0x08)
	struct UBorder* b_DynamicBackground; // 0x270(0x08)
	struct UBorder* b_Particle; // 0x278(0x08)
	struct UImage* IconImage; // 0x280(0x08)
	struct UTextBlock* Text_Notification; // 0x288(0x08)
	struct UTextBlock* Text_NotificationValue; // 0x290(0x08)
	struct FText NotificationText; // 0x298(0x18)
	float DisplayTime; // 0x2b0(0x04)
	int32_t NotificationValue; // 0x2b4(0x04)
	bool ValuePositiveOrNegative; // 0x2b8(0x01)
	char pad_2B9[0x7]; // 0x2b9(0x07)
	struct UObject* IconBrush; // 0x2c0(0x08)
	bool DynamicBackground; // 0x2c8(0x01)
	char pad_2C9[0x3]; // 0x2c9(0x03)
	struct FLinearColor DynamicBackgroundColor; // 0x2cc(0x10)

	void SetData(struct FText NotificationText, float DisplayTime, int32_t NotificationValue, bool ValuePositiveOrNegative, struct UObject* IconBrush, bool DynamicBackground, struct FLinearColor DynamicBackgroundColor); // Function WB_LootNotify.WB_LootNotify_C.SetData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Construct(); // Function WB_LootNotify.WB_LootNotify_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void OnSetData(); // Function WB_LootNotify.WB_LootNotify_C.OnSetData // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_WB_LootNotify(int32_t EntryPoint); // Function WB_LootNotify.WB_LootNotify_C.ExecuteUbergraph_WB_LootNotify // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
};

