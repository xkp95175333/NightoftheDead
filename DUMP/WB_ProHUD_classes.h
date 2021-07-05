// WidgetBlueprintGeneratedClass WB_ProHUD.WB_ProHUD_C
// Size: 0x2b8 (Inherited: 0x260)
struct UWB_ProHUD_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* BlendCompass; // 0x268(0x08)
	struct UWB_BigLootNotificator_C* WB_BigLootNotificator_Normal; // 0x270(0x08)
	struct UWB_Compass_C* WB_Compass_140; // 0x278(0x08)
	struct UWB_CrosshairBase_C* WB_CrosshairBase; // 0x280(0x08)
	struct UWB_GlobalNotificator_C* WB_GlobalNotificator; // 0x288(0x08)
	struct UWB_IngameTutorial_C* WB_IngameTutorial; // 0x290(0x08)
	struct UWB_LootNotificator_C* WB_LootNotificator; // 0x298(0x08)
	struct UWB_QuestNotificator_C* WB_QuestNotificator; // 0x2a0(0x08)
	struct UWB_ToolTip_C* WB_ToolTip; // 0x2a8(0x08)
	struct UWB_UpdaterNotificator_C* WB_UpdaterNotificator; // 0x2b0(0x08)

	void CrosshairVisibility(bool bVisible); // Function WB_ProHUD.WB_ProHUD_C.CrosshairVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void RemoveGlobalNotification(); // Function WB_ProHUD.WB_ProHUD_C.RemoveGlobalNotification // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void DisplayGlobalNotification(float DisplayTime, struct FText TypeText, struct FText HeadlineText); // Function WB_ProHUD.WB_ProHUD_C.DisplayGlobalNotification // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void RemoveToolTip(); // Function WB_ProHUD.WB_ProHUD_C.RemoveToolTip // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void DisplayToolTip(float DisplayTime, struct FS_IngameTutorial Row1, struct FS_IngameTutorial Row2); // Function WB_ProHUD.WB_ProHUD_C.DisplayToolTip // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void RemoveBigLootNotification(); // Function WB_ProHUD.WB_ProHUD_C.RemoveBigLootNotification // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void DisplayBigLootNotification(struct FS_BigLootNotificationInfo S_BigLootNotificationInfo); // Function WB_ProHUD.WB_ProHUD_C.DisplayBigLootNotification // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void DisplaySingleRecoil(); // Function WB_ProHUD.WB_ProHUD_C.DisplaySingleRecoil // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void DisplayRecoil(bool bRecoil); // Function WB_ProHUD.WB_ProHUD_C.DisplayRecoil // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void RemoveIngameTutorial(); // Function WB_ProHUD.WB_ProHUD_C.RemoveIngameTutorial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void RemoveQuestNotifier(); // Function WB_ProHUD.WB_ProHUD_C.RemoveQuestNotifier // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void RemoveUpdaterNotifier(); // Function WB_ProHUD.WB_ProHUD_C.RemoveUpdaterNotifier // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void RemoveLootNotification(); // Function WB_ProHUD.WB_ProHUD_C.RemoveLootNotification // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void DisplayHitIndicator(float IndicationTime, struct FLinearColor Color); // Function WB_ProHUD.WB_ProHUD_C.DisplayHitIndicator // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void DisplayCrosshair(enum class E_CrosshairTypes CrosshairType, bool bCrosshairVisible, struct FLinearColor Crosshair Color, enum class E_HitIndicatorTypes HitIndicatorType, bool bHitIndicatorVisible); // Function WB_ProHUD.WB_ProHUD_C.DisplayCrosshair // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void DisplayIngameTutorial(float DisplayTime, struct FS_IngameTutorial Row1, struct FS_IngameTutorial Row2, struct FLinearColor Color); // Function WB_ProHUD.WB_ProHUD_C.DisplayIngameTutorial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void DisplayQuestNotifier(float DisplayTime, struct FS_QuestNotificatorInfo S_QuestNotificatorInfo, bool DisplayToolTip, struct UObject* ToolTipIcon, struct FText ToolTipText, bool ToolTipOnly); // Function WB_ProHUD.WB_ProHUD_C.DisplayQuestNotifier // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void DisplayUpdaterNotifier(float DisplayTime, struct FS_UpdaterNotificatorInfo Updater Notificator Info, bool DisplayToolTip, struct UObject* ToolTip Icon, struct FText ToolTip Text, bool ToolTip Only); // Function WB_ProHUD.WB_ProHUD_C.DisplayUpdaterNotifier // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void DisplayLootNotification(float DisplayTime, struct UObject* NotificationIcon, struct FText NotificationText, int32_t NotificationValue, bool ValuePositiveOrNegative, bool DynamicBackground, struct FLinearColor DynamicBackgroundColor); // Function WB_ProHUD.WB_ProHUD_C.DisplayLootNotification // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void DisplayCompass(bool bVisible); // Function WB_ProHUD.WB_ProHUD_C.DisplayCompass // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void UpdateMarker(struct AActor* ActorToMark, float MarkerPrecision, bool ParticleVisible, struct FLinearColor ParticleColor); // Function WB_ProHUD.WB_ProHUD_C.UpdateMarker // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void RemoveMarker(struct AActor* Actor To Mark); // Function WB_ProHUD.WB_ProHUD_C.RemoveMarker // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void CreateMarker(struct AActor* ActorToMark, struct UObject* MarkerIcon, struct ACharacter* PlayerCharacter, struct UCameraComponent* PlayerCamera); // Function WB_ProHUD.WB_ProHUD_C.CreateMarker // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void HideCrosshair(float Duration); // Function WB_ProHUD.WB_ProHUD_C.HideCrosshair // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_WB_ProHUD(int32_t EntryPoint); // Function WB_ProHUD.WB_ProHUD_C.ExecuteUbergraph_WB_ProHUD // (Final|UbergraphFunction) // @ game+0x1395fe0
};

