// WidgetBlueprintGeneratedClass WB_BigLootNotificator.WB_BigLootNotificator_C
// Size: 0x32d (Inherited: 0x260)
struct UWB_BigLootNotificator_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* FadeInIcon; // 0x268(0x08)
	struct UWidgetAnimation* FadeInContent; // 0x270(0x08)
	struct UWidgetAnimation* FadeOutDispatchFX; // 0x278(0x08)
	struct UBorder* b_BGColor; // 0x280(0x08)
	struct UBorder* b_Color; // 0x288(0x08)
	struct UBorder* b_IconParticles; // 0x290(0x08)
	struct UBorder* B_TT1; // 0x298(0x08)
	struct UBorder* B_TT2; // 0x2a0(0x08)
	struct UTextBlock* Headline; // 0x2a8(0x08)
	struct UImage* Icon_Image; // 0x2b0(0x08)
	struct UImage* IconMask; // 0x2b8(0x08)
	struct UImage* Image_2; // 0x2c0(0x08)
	struct UImage* Image_3; // 0x2c8(0x08)
	struct UImage* Image_4; // 0x2d0(0x08)
	struct UImage* Image_5; // 0x2d8(0x08)
	struct UImage* Img_FX; // 0x2e0(0x08)
	struct UImage* Img_ParticleBG; // 0x2e8(0x08)
	struct UOverlay* Overlay_1; // 0x2f0(0x08)
	struct USizeBox* SB_MainIcon; // 0x2f8(0x08)
	struct UTextBlock* Text_Content; // 0x300(0x08)
	struct UImage* ToolTip1_Image; // 0x308(0x08)
	struct UTextBlock* ToolTip1_Text; // 0x310(0x08)
	struct UImage* ToolTip2_Image; // 0x318(0x08)
	struct UTextBlock* ToolTip2_Text; // 0x320(0x08)
	float DisplayTime; // 0x328(0x04)
	bool b_Finished; // 0x32c(0x01)

	void DisplayBigLootNotification(float DisplayTime, bool RemoveManually, struct UObject* NotificationIcon, struct FText Headline, struct FText Text, struct FLinearColor IconFrameBackgroundColor, struct FLinearColor HeadlineFrameBackgroundColor, struct FLinearColor ParticlesColor, bool Particles, bool ToolTip 1, struct FText ToolTip1 Text, struct UObject* ToolTip1 Icon, bool ToolTip 2, struct FText ToolTip 2 Text, struct UObject* ToolTip 2 Icon); // Function WB_BigLootNotificator.WB_BigLootNotificator_C.DisplayBigLootNotification // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void RemoveBigLootNotification(); // Function WB_BigLootNotificator.WB_BigLootNotificator_C.RemoveBigLootNotification // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_WB_BigLootNotificator(int32_t EntryPoint); // Function WB_BigLootNotificator.WB_BigLootNotificator_C.ExecuteUbergraph_WB_BigLootNotificator // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
};

