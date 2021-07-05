// BlueprintGeneratedClass I_HUD_Manager.I_HUD_Manager_C
// Size: 0x28 (Inherited: 0x28)
struct UI_HUD_Manager_C : UInterface {

	void CrosshairVisibility(bool bVisible); // Function I_HUD_Manager.I_HUD_Manager_C.CrosshairVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void RemoveGlobalNotification(); // Function I_HUD_Manager.I_HUD_Manager_C.RemoveGlobalNotification // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void DisplayGlobalNotification(float DisplayTime, struct FText TypeText, struct FText HeadlineText); // Function I_HUD_Manager.I_HUD_Manager_C.DisplayGlobalNotification // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void RemoveToolTip(); // Function I_HUD_Manager.I_HUD_Manager_C.RemoveToolTip // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void DisplayToolTip(float DisplayTime, struct FS_IngameTutorial Row1, struct FS_IngameTutorial Row2); // Function I_HUD_Manager.I_HUD_Manager_C.DisplayToolTip // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void RemoveBigLootNotification(); // Function I_HUD_Manager.I_HUD_Manager_C.RemoveBigLootNotification // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void DisplayBigLootNotification(struct FS_BigLootNotificationInfo Big Loot Notify Info); // Function I_HUD_Manager.I_HUD_Manager_C.DisplayBigLootNotification // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void DisplaySingleRecoil(); // Function I_HUD_Manager.I_HUD_Manager_C.DisplaySingleRecoil // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void DisplayRecoil(bool IsRecoil); // Function I_HUD_Manager.I_HUD_Manager_C.DisplayRecoil // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void RemoveIngameTutorial(); // Function I_HUD_Manager.I_HUD_Manager_C.RemoveIngameTutorial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void RemoveLootNotification(); // Function I_HUD_Manager.I_HUD_Manager_C.RemoveLootNotification // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void RemoveQuestNotification(); // Function I_HUD_Manager.I_HUD_Manager_C.RemoveQuestNotification // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void RemoveUpdaterNotification(); // Function I_HUD_Manager.I_HUD_Manager_C.RemoveUpdaterNotification // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void DisplayHitIndicator(float IndicatorTime, struct FLinearColor IndicatorColor); // Function I_HUD_Manager.I_HUD_Manager_C.DisplayHitIndicator // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void DisplayCrosshair(enum class E_CrosshairTypes Crosshair_Type, bool CrosshairVisibility, struct FLinearColor Crosshair_Color, enum class E_HitIndicatorTypes HitIndicator_Type, bool HitIndicatorVisibility); // Function I_HUD_Manager.I_HUD_Manager_C.DisplayCrosshair // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void DisplayIngameTutorial(float DisplayTime, struct FS_IngameTutorial Row1, struct FS_IngameTutorial Row2, struct FLinearColor BackgroundColor); // Function I_HUD_Manager.I_HUD_Manager_C.DisplayIngameTutorial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void DisplayQuestNotification(float DisplayTime, struct FS_QuestNotificatorInfo Quest Notificator Info, bool DisplayToolTip, struct UObject* ToolTipIcon, struct FText ToolTipText, bool ToolTipOnly); // Function I_HUD_Manager.I_HUD_Manager_C.DisplayQuestNotification // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void DisplayUpdaterNotification(float DisplayTime, struct FS_UpdaterNotificatorInfo Updater Notificator Info, bool DisplayToolTip, struct UObject* ToolTip Icon, struct FText ToolTip Text, bool ToolTip Only); // Function I_HUD_Manager.I_HUD_Manager_C.DisplayUpdaterNotification // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void DisplayLootNotification(float DisplayTime, struct UObject* Icon, struct FText Text, int32_t Value, bool ValuePositive?, bool DynamicBackground?, struct FLinearColor DynamicBackgroundColor); // Function I_HUD_Manager.I_HUD_Manager_C.DisplayLootNotification // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void DisplayCompass(bool bVisible, bool PlayFX); // Function I_HUD_Manager.I_HUD_Manager_C.DisplayCompass // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void UpdateMarker(struct AActor* ActorToMark, float MarkerPrecision, bool ParticlesVisible, struct FLinearColor ParticlesColor); // Function I_HUD_Manager.I_HUD_Manager_C.UpdateMarker // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void RemoveMarker(struct AActor* ActorToMark); // Function I_HUD_Manager.I_HUD_Manager_C.RemoveMarker // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void CreateMarker(struct AActor* ActorToMark, struct UMaterialInstance* MarkerIcon, struct ACharacter* PlayerCharacter, struct UCameraComponent* PlayerCamera); // Function I_HUD_Manager.I_HUD_Manager_C.CreateMarker // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void UpdatePowerUp(struct FLinearColor Color); // Function I_HUD_Manager.I_HUD_Manager_C.UpdatePowerUp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void UpdateDamageFX2(enum class E_DamageStates Damage State, bool Display Damage); // Function I_HUD_Manager.I_HUD_Manager_C.UpdateDamageFX2 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void UpdateDamageFX1(enum class E_DamageStates Damage State, bool Display Damage); // Function I_HUD_Manager.I_HUD_Manager_C.UpdateDamageFX1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void UpdateBlur(bool DisplayBlur); // Function I_HUD_Manager.I_HUD_Manager_C.UpdateBlur // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void UpdateBlackScreen(bool DisplayBlackscreen, bool SlowFading); // Function I_HUD_Manager.I_HUD_Manager_C.UpdateBlackScreen // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void DisplayHUD(bool ShowingHUD); // Function I_HUD_Manager.I_HUD_Manager_C.DisplayHUD // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
};

