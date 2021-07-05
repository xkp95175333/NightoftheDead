// WidgetBlueprintGeneratedClass WB_UpdaterNotificator.WB_UpdaterNotificator_C
// Size: 0x366 (Inherited: 0x260)
struct UWB_UpdaterNotificator_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* FadeNotificationText; // 0x268(0x08)
	struct UWidgetAnimation* FadeNotification; // 0x270(0x08)
	struct UWidgetAnimation* FadeAllProgressBars; // 0x278(0x08)
	struct UWidgetAnimation* FadeToolTip; // 0x280(0x08)
	struct UWidgetAnimation* FadeSliders; // 0x288(0x08)
	struct UBorder* b_Background; // 0x290(0x08)
	struct UBorder* b_BGColor; // 0x298(0x08)
	struct UBorder* b_BGMask; // 0x2a0(0x08)
	struct UBorder* b_Particle; // 0x2a8(0x08)
	struct UBorder* b_Shine; // 0x2b0(0x08)
	struct UBorder* Border_3; // 0x2b8(0x08)
	struct UImage* Icon_Image; // 0x2c0(0x08)
	struct UImage* IconMask; // 0x2c8(0x08)
	struct UImage* Image_2; // 0x2d0(0x08)
	struct UImage* Image_3; // 0x2d8(0x08)
	struct UImage* Image_4; // 0x2e0(0x08)
	struct UImage* Image_5; // 0x2e8(0x08)
	struct UImage* Img_BackgroundMask; // 0x2f0(0x08)
	struct UOverlay* OV_ToolTip; // 0x2f8(0x08)
	struct UOverlay* OV_UpdaterNotification; // 0x300(0x08)
	struct UProgressBar* PB1; // 0x308(0x08)
	struct UProgressBar* PB2; // 0x310(0x08)
	struct UProgressBar* PB3; // 0x318(0x08)
	struct UProgressBar* PB4; // 0x320(0x08)
	struct UProgressBar* PB5; // 0x328(0x08)
	struct USlider* S_Bottom; // 0x330(0x08)
	struct USlider* S_Top; // 0x338(0x08)
	struct UTextBlock* Text_NotifyHeadline; // 0x340(0x08)
	struct UTextBlock* Text_NotifyText; // 0x348(0x08)
	struct UTextBlock* Text_ToolTip; // 0x350(0x08)
	struct UImage* ToolTip_Icon; // 0x358(0x08)
	float DisplayTime; // 0x360(0x04)
	bool ToolTipFinished; // 0x364(0x01)
	bool NotificationFinished; // 0x365(0x01)

	void SetToolTipInfo(struct UObject* TT Icon, struct FText TT Text); // Function WB_UpdaterNotificator.WB_UpdaterNotificator_C.SetToolTipInfo // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void SetNotificatorInfo(struct FS_UpdaterNotificatorInfo S_UpdaterNotificatorInfo); // Function WB_UpdaterNotificator.WB_UpdaterNotificator_C.SetNotificatorInfo // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void DisplayUpdateNotify(float DisplayTime, struct FS_UpdaterNotificatorInfo Updater Notificator Info, bool DisplayToolTip, struct UObject* ToolTip Icon, struct FText ToolTip Text, bool ToolTip Only); // Function WB_UpdaterNotificator.WB_UpdaterNotificator_C.DisplayUpdateNotify // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void RemoveUpdaterNotification(); // Function WB_UpdaterNotificator.WB_UpdaterNotificator_C.RemoveUpdaterNotification // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_WB_UpdaterNotificator(int32_t EntryPoint); // Function WB_UpdaterNotificator.WB_UpdaterNotificator_C.ExecuteUbergraph_WB_UpdaterNotificator // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
};

