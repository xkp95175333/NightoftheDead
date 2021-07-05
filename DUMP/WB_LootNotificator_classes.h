// WidgetBlueprintGeneratedClass WB_LootNotificator.WB_LootNotificator_C
// Size: 0x2d8 (Inherited: 0x260)
struct UWB_LootNotificator_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* Fading; // 0x268(0x08)
	struct UImage* Image_85; // 0x270(0x08)
	struct UImage* Image_177; // 0x278(0x08)
	struct UOverlay* Overlay_Content; // 0x280(0x08)
	struct USlider* S_Top; // 0x288(0x08)
	struct USizeBox* SB_Content1; // 0x290(0x08)
	struct USizeBox* SB_Content2; // 0x298(0x08)
	struct USizeBox* SB_Content3; // 0x2a0(0x08)
	struct USizeBox* SB_Content4; // 0x2a8(0x08)
	struct USizeBox* SB_Content5; // 0x2b0(0x08)
	struct UVerticalBox* VB_Content; // 0x2b8(0x08)
	float CurrentDisplayTime; // 0x2c0(0x04)
	bool CanRemove; // 0x2c4(0x01)
	bool Fade; // 0x2c5(0x01)
	char pad_2C6[0x2]; // 0x2c6(0x02)
	struct TArray<struct UWB_LootNotify_C*> WidgetPool; // 0x2c8(0x10)

	struct UWB_LootNotify_C* GetNotifyWidget(struct FText NotificationText, float DisplayTime, int32_t NotificationValue, bool ValuePositiveOrNegative, struct UObject* IconBrush, bool DynamicBackground, struct FLinearColor DynamicBackgroundColor); // Function WB_LootNotificator.WB_LootNotificator_C.GetNotifyWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void UpdateNotificationList(); // Function WB_LootNotificator.WB_LootNotificator_C.UpdateNotificationList // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void DisplayLootNotification(float DisplayTime, struct UObject* NotificationIcon, struct FText NotificationText, int32_t NotificationValue, bool ValuePositiveOrNegative, bool DynamicBackground, struct FLinearColor DynamicBackgroundColor); // Function WB_LootNotificator.WB_LootNotificator_C.DisplayLootNotification // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void RemoveLootNotificator(); // Function WB_LootNotificator.WB_LootNotificator_C.RemoveLootNotificator // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_WB_LootNotificator(int32_t EntryPoint); // Function WB_LootNotificator.WB_LootNotificator_C.ExecuteUbergraph_WB_LootNotificator // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
};

