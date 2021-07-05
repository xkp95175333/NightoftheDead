// WidgetBlueprintGeneratedClass WB_GlobalNotificator.WB_GlobalNotificator_C
// Size: 0x2b5 (Inherited: 0x260)
struct UWB_GlobalNotificator_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* FadeOut; // 0x268(0x08)
	struct UWidgetAnimation* FadeIn; // 0x270(0x08)
	struct UBorder* b_Content; // 0x278(0x08)
	struct UBorder* b_Shine; // 0x280(0x08)
	struct UTextBlock* HeadlineText; // 0x288(0x08)
	struct UImage* Img_BackgroundMask; // 0x290(0x08)
	struct UImage* Img_BackgroundMaskWhite; // 0x298(0x08)
	struct UImage* Img_Particle; // 0x2a0(0x08)
	struct UTextBlock* TypeText; // 0x2a8(0x08)
	float DisplayTime; // 0x2b0(0x04)
	bool bFinished; // 0x2b4(0x01)

	void RemoveGlobalNotification(); // Function WB_GlobalNotificator.WB_GlobalNotificator_C.RemoveGlobalNotification // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void HandleGlobalNotification(float Time, struct FText Type, struct FText Head); // Function WB_GlobalNotificator.WB_GlobalNotificator_C.HandleGlobalNotification // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_WB_GlobalNotificator(int32_t EntryPoint); // Function WB_GlobalNotificator.WB_GlobalNotificator_C.ExecuteUbergraph_WB_GlobalNotificator // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
};

