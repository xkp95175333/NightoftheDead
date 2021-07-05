// BlueprintGeneratedClass HUD_ProHUD.HUD_ProHUD_C
// Size: 0xcb0 (Inherited: 0x4b8)
struct AHUD_ProHUD_C : ALFPlayerHUD_BP_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4b8(0x08)
	struct UPostProcessComponent* ExternalBlends; // 0x4c0(0x08)
	struct UPostProcessComponent* PP_ChromAberation; // 0x4c8(0x08)
	struct UPostProcessComponent* PP_Vignette; // 0x4d0(0x08)
	struct UPostProcessComponent* PP_Saturation; // 0x4d8(0x08)
	struct UPostProcessComponent* PP_Blur; // 0x4e0(0x08)
	float Timeline_1_Opacity_3EDAE24B4203D3207281B78017DE0C23; // 0x4e8(0x04)
	enum class ETimelineDirection Timeline_1__Direction_3EDAE24B4203D3207281B78017DE0C23; // 0x4ec(0x01)
	char pad_4ED[0x3]; // 0x4ed(0x03)
	struct UTimelineComponent* Timeline_2; // 0x4f0(0x08)
	float Timeline_5_Saturation_5B1CAA6044B3A47127C82B8A84D083B3; // 0x4f8(0x04)
	float Timeline_5_ChromAberation_5B1CAA6044B3A47127C82B8A84D083B3; // 0x4fc(0x04)
	float Timeline_5_NewTrack_0_5B1CAA6044B3A47127C82B8A84D083B3; // 0x500(0x04)
	enum class ETimelineDirection Timeline_5__Direction_5B1CAA6044B3A47127C82B8A84D083B3; // 0x504(0x01)
	char pad_505[0x3]; // 0x505(0x03)
	struct UTimelineComponent* Timeline_6; // 0x508(0x08)
	float Timeline_7_Blend_356EF1314F819608FABCA99699F327DB; // 0x510(0x04)
	enum class ETimelineDirection Timeline_7__Direction_356EF1314F819608FABCA99699F327DB; // 0x514(0x01)
	char pad_515[0x3]; // 0x515(0x03)
	struct UTimelineComponent* Timeline_8; // 0x518(0x08)
	float Timeline_6_Blend_6F0594A94539FBA094576C82EA965A1B; // 0x520(0x04)
	enum class ETimelineDirection Timeline_6__Direction_6F0594A94539FBA094576C82EA965A1B; // 0x524(0x01)
	char pad_525[0x3]; // 0x525(0x03)
	struct UTimelineComponent* Timeline_7; // 0x528(0x08)
	float TL_LightningOpacity_Opacity_C94AB18D417650AB61D66399DC3166D2; // 0x530(0x04)
	enum class ETimelineDirection TL_LightningOpacity__Direction_C94AB18D417650AB61D66399DC3166D2; // 0x534(0x01)
	char pad_535[0x3]; // 0x535(0x03)
	struct UTimelineComponent* TL_LightningOpacity; // 0x538(0x08)
	float TL_PowerUp_Opacity_32FBA7274D3A28CCDF65E08782B70AD9; // 0x540(0x04)
	enum class ETimelineDirection TL_PowerUp__Direction_32FBA7274D3A28CCDF65E08782B70AD9; // 0x544(0x01)
	char pad_545[0x3]; // 0x545(0x03)
	struct UTimelineComponent* TL_PowerUp; // 0x548(0x08)
	float Timeline_0_Saturation_32DBBF0141D4B2BB324CFEB0E5F7A32D; // 0x550(0x04)
	float Timeline_0_ChromAberation_32DBBF0141D4B2BB324CFEB0E5F7A32D; // 0x554(0x04)
	float Timeline_0_NewTrack_0_32DBBF0141D4B2BB324CFEB0E5F7A32D; // 0x558(0x04)
	enum class ETimelineDirection Timeline_0__Direction_32DBBF0141D4B2BB324CFEB0E5F7A32D; // 0x55c(0x01)
	char pad_55D[0x3]; // 0x55d(0x03)
	struct UTimelineComponent* Timeline_1; // 0x560(0x08)
	float Timeline_4_Opacity_D6504526415FD132CDBCB38F50714E38; // 0x568(0x04)
	enum class ETimelineDirection Timeline_4__Direction_D6504526415FD132CDBCB38F50714E38; // 0x56c(0x01)
	char pad_56D[0x3]; // 0x56d(0x03)
	struct UTimelineComponent* Timeline_5; // 0x570(0x08)
	float Timeline_2_MidPower_5C2F2B9549775AC0C1123EA5B31FE1AD; // 0x578(0x04)
	float Timeline_2_MidIntensity_5C2F2B9549775AC0C1123EA5B31FE1AD; // 0x57c(0x04)
	enum class ETimelineDirection Timeline_2__Direction_5C2F2B9549775AC0C1123EA5B31FE1AD; // 0x580(0x01)
	char pad_581[0x7]; // 0x581(0x07)
	struct UTimelineComponent* Timeline_3; // 0x588(0x08)
	float DamageViewHard_HardPower_DB86487E4D34973EA6B252B8075FFABF; // 0x590(0x04)
	float DamageViewHard_HardIntensity_DB86487E4D34973EA6B252B8075FFABF; // 0x594(0x04)
	enum class ETimelineDirection DamageViewHard__Direction_DB86487E4D34973EA6B252B8075FFABF; // 0x598(0x01)
	char pad_599[0x7]; // 0x599(0x07)
	struct UTimelineComponent* DamageViewHard; // 0x5a0(0x08)
	float DamageViewMiddle_MidPower_798A9E464474EC9C0C87A38E741C040C; // 0x5a8(0x04)
	float DamageViewMiddle_MidIntensity_798A9E464474EC9C0C87A38E741C040C; // 0x5ac(0x04)
	enum class ETimelineDirection DamageViewMiddle__Direction_798A9E464474EC9C0C87A38E741C040C; // 0x5b0(0x01)
	char pad_5B1[0x7]; // 0x5b1(0x07)
	struct UTimelineComponent* DamageViewMiddle; // 0x5b8(0x08)
	float DamageViewSoftly_SoftlyPower_54638E6D440B587D2A481192E6254450; // 0x5c0(0x04)
	float DamageViewSoftly_SoftlyIntensity_54638E6D440B587D2A481192E6254450; // 0x5c4(0x04)
	enum class ETimelineDirection DamageViewSoftly__Direction_54638E6D440B587D2A481192E6254450; // 0x5c8(0x01)
	char pad_5C9[0x7]; // 0x5c9(0x07)
	struct UTimelineComponent* DamageViewSoftly; // 0x5d0(0x08)
	float FadeInOutDamageView_Opacity_7AA26BA64159357421628BBC7B37DEE8; // 0x5d8(0x04)
	enum class ETimelineDirection FadeInOutDamageView__Direction_7AA26BA64159357421628BBC7B37DEE8; // 0x5dc(0x01)
	char pad_5DD[0x3]; // 0x5dd(0x03)
	struct UTimelineComponent* FadeInOutDamageView; // 0x5e0(0x08)
	float TL_HardDamage_Time_ADC2FD964260852851E99ABB90BF965F; // 0x5e8(0x04)
	float TL_HardDamage_Opacity_ADC2FD964260852851E99ABB90BF965F; // 0x5ec(0x04)
	enum class ETimelineDirection TL_HardDamage__Direction_ADC2FD964260852851E99ABB90BF965F; // 0x5f0(0x01)
	char pad_5F1[0x7]; // 0x5f1(0x07)
	struct UTimelineComponent* TL_HardDamage; // 0x5f8(0x08)
	float TL_Softdamage_Time_F65DBF2C4B92E8DFB3E9C7BAEDD7942D; // 0x600(0x04)
	float TL_Softdamage_Opacity_F65DBF2C4B92E8DFB3E9C7BAEDD7942D; // 0x604(0x04)
	enum class ETimelineDirection TL_Softdamage__Direction_F65DBF2C4B92E8DFB3E9C7BAEDD7942D; // 0x608(0x01)
	char pad_609[0x7]; // 0x609(0x07)
	struct UTimelineComponent* TL_Softdamage; // 0x610(0x08)
	float TL_MidDamage_Time_99B8BDD84BA96160D44F54980BA3F043; // 0x618(0x04)
	float TL_MidDamage_Opacity_99B8BDD84BA96160D44F54980BA3F043; // 0x61c(0x04)
	enum class ETimelineDirection TL_MidDamage__Direction_99B8BDD84BA96160D44F54980BA3F043; // 0x620(0x01)
	char pad_621[0x7]; // 0x621(0x07)
	struct UTimelineComponent* TL_MidDamage; // 0x628(0x08)
	float BlurTimeline_BlurValue_84A473AD4E7F9678417FA7A6E130293A; // 0x630(0x04)
	enum class ETimelineDirection BlurTimeline__Direction_84A473AD4E7F9678417FA7A6E130293A; // 0x634(0x01)
	char pad_635[0x3]; // 0x635(0x03)
	struct UTimelineComponent* BlurTimeline; // 0x638(0x08)
	float TL_Blackscreen_Long_BlackscreenOpacity_797E40C64AF55C35D0431C8E37FFA5C3; // 0x640(0x04)
	enum class ETimelineDirection TL_Blackscreen_Long__Direction_797E40C64AF55C35D0431C8E37FFA5C3; // 0x644(0x01)
	char pad_645[0x3]; // 0x645(0x03)
	struct UTimelineComponent* TL_Blackscreen_Long; // 0x648(0x08)
	float TL_Blackscreen_BlackscreenOpacity_6494571C4CE58512F2AECB827AB75E18; // 0x650(0x04)
	enum class ETimelineDirection TL_Blackscreen__Direction_6494571C4CE58512F2AECB827AB75E18; // 0x654(0x01)
	char pad_655[0x3]; // 0x655(0x03)
	struct UTimelineComponent* TL_Blackscreen; // 0x658(0x08)
	struct UWB_ProHUD_C* WB_ProHUD; // 0x660(0x08)
	float CamShakeScale; // 0x668(0x04)
	char pad_66C[0x4]; // 0x66c(0x04)
	struct FPostProcessSettings EmptySettings; // 0x670(0x550)
	struct FS_BigLootNotificationInfo Journal; // 0xbc0(0xc0)
	struct UMaterialInstanceDynamic* MID_Blackscreen; // 0xc80(0x08)
	struct UMaterialInstanceDynamic* MID_ColorScreen; // 0xc88(0x08)
	struct UMaterialInstanceDynamic* MID_Damage; // 0xc90(0x08)
	struct UMaterialInstanceDynamic* MID_ViewDamage; // 0xc98(0x08)
	struct UMaterialInstanceDynamic* MID_PowerUp; // 0xca0(0x08)
	struct FName MainMenuLevel; // 0xca8(0x08)

	void UpdateAllBlendables(); // Function HUD_ProHUD.HUD_ProHUD_C.UpdateAllBlendables // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void CreateHUD(); // Function HUD_ProHUD.HUD_ProHUD_C.CreateHUD // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void TL_Blackscreen__FinishedFunc(); // Function HUD_ProHUD.HUD_ProHUD_C.TL_Blackscreen__FinishedFunc // (BlueprintEvent) // @ game+0x1395fe0
	void TL_Blackscreen__UpdateFunc(); // Function HUD_ProHUD.HUD_ProHUD_C.TL_Blackscreen__UpdateFunc // (BlueprintEvent) // @ game+0x1395fe0
	void TL_Blackscreen_Long__FinishedFunc(); // Function HUD_ProHUD.HUD_ProHUD_C.TL_Blackscreen_Long__FinishedFunc // (BlueprintEvent) // @ game+0x1395fe0
	void TL_Blackscreen_Long__UpdateFunc(); // Function HUD_ProHUD.HUD_ProHUD_C.TL_Blackscreen_Long__UpdateFunc // (BlueprintEvent) // @ game+0x1395fe0
	void BlurTimeline__FinishedFunc(); // Function HUD_ProHUD.HUD_ProHUD_C.BlurTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x1395fe0
	void BlurTimeline__UpdateFunc(); // Function HUD_ProHUD.HUD_ProHUD_C.BlurTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x1395fe0
	void DamageViewHard__FinishedFunc(); // Function HUD_ProHUD.HUD_ProHUD_C.DamageViewHard__FinishedFunc // (BlueprintEvent) // @ game+0x1395fe0
	void DamageViewHard__UpdateFunc(); // Function HUD_ProHUD.HUD_ProHUD_C.DamageViewHard__UpdateFunc // (BlueprintEvent) // @ game+0x1395fe0
	void DamageViewMiddle__FinishedFunc(); // Function HUD_ProHUD.HUD_ProHUD_C.DamageViewMiddle__FinishedFunc // (BlueprintEvent) // @ game+0x1395fe0
	void DamageViewMiddle__UpdateFunc(); // Function HUD_ProHUD.HUD_ProHUD_C.DamageViewMiddle__UpdateFunc // (BlueprintEvent) // @ game+0x1395fe0
	void DamageViewSoftly__FinishedFunc(); // Function HUD_ProHUD.HUD_ProHUD_C.DamageViewSoftly__FinishedFunc // (BlueprintEvent) // @ game+0x1395fe0
	void DamageViewSoftly__UpdateFunc(); // Function HUD_ProHUD.HUD_ProHUD_C.DamageViewSoftly__UpdateFunc // (BlueprintEvent) // @ game+0x1395fe0
	void FadeInOutDamageView__FinishedFunc(); // Function HUD_ProHUD.HUD_ProHUD_C.FadeInOutDamageView__FinishedFunc // (BlueprintEvent) // @ game+0x1395fe0
	void FadeInOutDamageView__UpdateFunc(); // Function HUD_ProHUD.HUD_ProHUD_C.FadeInOutDamageView__UpdateFunc // (BlueprintEvent) // @ game+0x1395fe0
	void TL_HardDamage__FinishedFunc(); // Function HUD_ProHUD.HUD_ProHUD_C.TL_HardDamage__FinishedFunc // (BlueprintEvent) // @ game+0x1395fe0
	void TL_HardDamage__UpdateFunc(); // Function HUD_ProHUD.HUD_ProHUD_C.TL_HardDamage__UpdateFunc // (BlueprintEvent) // @ game+0x1395fe0
	void TL_Softdamage__FinishedFunc(); // Function HUD_ProHUD.HUD_ProHUD_C.TL_Softdamage__FinishedFunc // (BlueprintEvent) // @ game+0x1395fe0
	void TL_Softdamage__UpdateFunc(); // Function HUD_ProHUD.HUD_ProHUD_C.TL_Softdamage__UpdateFunc // (BlueprintEvent) // @ game+0x1395fe0
	void TL_MidDamage__FinishedFunc(); // Function HUD_ProHUD.HUD_ProHUD_C.TL_MidDamage__FinishedFunc // (BlueprintEvent) // @ game+0x1395fe0
	void TL_MidDamage__UpdateFunc(); // Function HUD_ProHUD.HUD_ProHUD_C.TL_MidDamage__UpdateFunc // (BlueprintEvent) // @ game+0x1395fe0
	void Timeline_5__FinishedFunc(); // Function HUD_ProHUD.HUD_ProHUD_C.Timeline_5__FinishedFunc // (BlueprintEvent) // @ game+0x1395fe0
	void Timeline_5__UpdateFunc(); // Function HUD_ProHUD.HUD_ProHUD_C.Timeline_5__UpdateFunc // (BlueprintEvent) // @ game+0x1395fe0
	void Timeline_0__FinishedFunc(); // Function HUD_ProHUD.HUD_ProHUD_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x1395fe0
	void Timeline_0__UpdateFunc(); // Function HUD_ProHUD.HUD_ProHUD_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x1395fe0
	void Timeline_1__FinishedFunc(); // Function HUD_ProHUD.HUD_ProHUD_C.Timeline_1__FinishedFunc // (BlueprintEvent) // @ game+0x1395fe0
	void Timeline_1__UpdateFunc(); // Function HUD_ProHUD.HUD_ProHUD_C.Timeline_1__UpdateFunc // (BlueprintEvent) // @ game+0x1395fe0
	void Timeline_4__FinishedFunc(); // Function HUD_ProHUD.HUD_ProHUD_C.Timeline_4__FinishedFunc // (BlueprintEvent) // @ game+0x1395fe0
	void Timeline_4__UpdateFunc(); // Function HUD_ProHUD.HUD_ProHUD_C.Timeline_4__UpdateFunc // (BlueprintEvent) // @ game+0x1395fe0
	void Timeline_2__FinishedFunc(); // Function HUD_ProHUD.HUD_ProHUD_C.Timeline_2__FinishedFunc // (BlueprintEvent) // @ game+0x1395fe0
	void Timeline_2__UpdateFunc(); // Function HUD_ProHUD.HUD_ProHUD_C.Timeline_2__UpdateFunc // (BlueprintEvent) // @ game+0x1395fe0
	void TL_PowerUp__FinishedFunc(); // Function HUD_ProHUD.HUD_ProHUD_C.TL_PowerUp__FinishedFunc // (BlueprintEvent) // @ game+0x1395fe0
	void TL_PowerUp__UpdateFunc(); // Function HUD_ProHUD.HUD_ProHUD_C.TL_PowerUp__UpdateFunc // (BlueprintEvent) // @ game+0x1395fe0
	void TL_LightningOpacity__FinishedFunc(); // Function HUD_ProHUD.HUD_ProHUD_C.TL_LightningOpacity__FinishedFunc // (BlueprintEvent) // @ game+0x1395fe0
	void TL_LightningOpacity__UpdateFunc(); // Function HUD_ProHUD.HUD_ProHUD_C.TL_LightningOpacity__UpdateFunc // (BlueprintEvent) // @ game+0x1395fe0
	void Timeline_6__FinishedFunc(); // Function HUD_ProHUD.HUD_ProHUD_C.Timeline_6__FinishedFunc // (BlueprintEvent) // @ game+0x1395fe0
	void Timeline_6__UpdateFunc(); // Function HUD_ProHUD.HUD_ProHUD_C.Timeline_6__UpdateFunc // (BlueprintEvent) // @ game+0x1395fe0
	void Timeline_7__FinishedFunc(); // Function HUD_ProHUD.HUD_ProHUD_C.Timeline_7__FinishedFunc // (BlueprintEvent) // @ game+0x1395fe0
	void Timeline_7__UpdateFunc(); // Function HUD_ProHUD.HUD_ProHUD_C.Timeline_7__UpdateFunc // (BlueprintEvent) // @ game+0x1395fe0
	void OnFailure_89F9CE124CD0205C98D1F8A38498D116(); // Function HUD_ProHUD.HUD_ProHUD_C.OnFailure_89F9CE124CD0205C98D1F8A38498D116 // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnSuccess_89F9CE124CD0205C98D1F8A38498D116(); // Function HUD_ProHUD.HUD_ProHUD_C.OnSuccess_89F9CE124CD0205C98D1F8A38498D116 // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ReceiveBeginPlay(); // Function HUD_ProHUD.HUD_ProHUD_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1395fe0
	void ReceiveTick(float DeltaSeconds); // Function HUD_ProHUD.HUD_ProHUD_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void UpdatePowerUp(struct FLinearColor Color); // Function HUD_ProHUD.HUD_ProHUD_C.UpdatePowerUp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void UpdateDamageFX2(enum class E_DamageStates Damage State, bool Display Damage); // Function HUD_ProHUD.HUD_ProHUD_C.UpdateDamageFX2 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void UpdateDamageFX1(enum class E_DamageStates Damage State, bool Display Damage); // Function HUD_ProHUD.HUD_ProHUD_C.UpdateDamageFX1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void UpdateBlur(bool DisplayBlur); // Function HUD_ProHUD.HUD_ProHUD_C.UpdateBlur // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void UpdateBlackScreen(bool DisplayBlackscreen, bool SlowFading); // Function HUD_ProHUD.HUD_ProHUD_C.UpdateBlackScreen // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void DisplayHUD(bool ShowingHUD); // Function HUD_ProHUD.HUD_ProHUD_C.DisplayHUD // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void CreateMarker(struct AActor* ActorToMark, struct UMaterialInstance* MarkerIcon, struct ACharacter* PlayerCharacter, struct UCameraComponent* PlayerCamera); // Function HUD_ProHUD.HUD_ProHUD_C.CreateMarker // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void RemoveMarker(struct AActor* ActorToMark); // Function HUD_ProHUD.HUD_ProHUD_C.RemoveMarker // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void UpdateMarker(struct AActor* ActorToMark, float MarkerPrecision, bool ParticlesVisible, struct FLinearColor ParticlesColor); // Function HUD_ProHUD.HUD_ProHUD_C.UpdateMarker // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void DisplayCompass(bool bVisible, bool PlayFX); // Function HUD_ProHUD.HUD_ProHUD_C.DisplayCompass // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void DisplayLootNotification(float DisplayTime, struct UObject* Icon, struct FText Text, int32_t Value, bool ValuePositive?, bool DynamicBackground?, struct FLinearColor DynamicBackgroundColor); // Function HUD_ProHUD.HUD_ProHUD_C.DisplayLootNotification // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void DisplayUpdaterNotification(float DisplayTime, struct FS_UpdaterNotificatorInfo Updater Notificator Info, bool DisplayToolTip, struct UObject* ToolTip Icon, struct FText ToolTip Text, bool ToolTip Only); // Function HUD_ProHUD.HUD_ProHUD_C.DisplayUpdaterNotification // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void DisplayIngameTutorial(float DisplayTime, struct FS_IngameTutorial Row1, struct FS_IngameTutorial Row2, struct FLinearColor BackgroundColor); // Function HUD_ProHUD.HUD_ProHUD_C.DisplayIngameTutorial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void DisplayCrosshair(enum class E_CrosshairTypes Crosshair_Type, bool CrosshairVisibility, struct FLinearColor Crosshair_Color, enum class E_HitIndicatorTypes HitIndicator_Type, bool HitIndicatorVisibility); // Function HUD_ProHUD.HUD_ProHUD_C.DisplayCrosshair // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void DisplayHitIndicator(float IndicatorTime, struct FLinearColor IndicatorColor); // Function HUD_ProHUD.HUD_ProHUD_C.DisplayHitIndicator // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void RemoveLootNotification(); // Function HUD_ProHUD.HUD_ProHUD_C.RemoveLootNotification // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void RemoveUpdaterNotification(); // Function HUD_ProHUD.HUD_ProHUD_C.RemoveUpdaterNotification // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void RemoveQuestNotification(); // Function HUD_ProHUD.HUD_ProHUD_C.RemoveQuestNotification // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void RemoveIngameTutorial(); // Function HUD_ProHUD.HUD_ProHUD_C.RemoveIngameTutorial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void DisplayRecoil(bool IsRecoil); // Function HUD_ProHUD.HUD_ProHUD_C.DisplayRecoil // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void DisplaySingleRecoil(); // Function HUD_ProHUD.HUD_ProHUD_C.DisplaySingleRecoil // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void DisplayBigLootNotification(struct FS_BigLootNotificationInfo Big Loot Notify Info); // Function HUD_ProHUD.HUD_ProHUD_C.DisplayBigLootNotification // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void RemoveBigLootNotification(); // Function HUD_ProHUD.HUD_ProHUD_C.RemoveBigLootNotification // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void DisplayToolTip(float DisplayTime, struct FS_IngameTutorial Row1, struct FS_IngameTutorial Row2); // Function HUD_ProHUD.HUD_ProHUD_C.DisplayToolTip // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void RemoveToolTip(); // Function HUD_ProHUD.HUD_ProHUD_C.RemoveToolTip // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void RemoveGlobalNotification(); // Function HUD_ProHUD.HUD_ProHUD_C.RemoveGlobalNotification // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void DisplayGlobalNotification(float DisplayTime, struct FText TypeText, struct FText HeadlineText); // Function HUD_ProHUD.HUD_ProHUD_C.DisplayGlobalNotification // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void CrosshairVisibility(bool bVisible); // Function HUD_ProHUD.HUD_ProHUD_C.CrosshairVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void DisplayQuestNotification(float DisplayTime, struct FS_QuestNotificatorInfo Quest Notificator Info, bool DisplayToolTip, struct UObject* ToolTipIcon, struct FText ToolTipText, bool ToolTipOnly); // Function HUD_ProHUD.HUD_ProHUD_C.DisplayQuestNotification // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ShowDamageFx(enum class ECharacterHitType HitType); // Function HUD_ProHUD.HUD_ProHUD_C.ShowDamageFx // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ShowPowerUpFx(); // Function HUD_ProHUD.HUD_ProHUD_C.ShowPowerUpFx // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ShowStaminaDamageFx(); // Function HUD_ProHUD.HUD_ProHUD_C.ShowStaminaDamageFx // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ShowGameOverMessage(); // Function HUD_ProHUD.HUD_ProHUD_C.ShowGameOverMessage // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void HideGameOverMessage(); // Function HUD_ProHUD.HUD_ProHUD_C.HideGameOverMessage // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ShowNotificationInline(struct FText Text, struct UObject* Icon); // Function HUD_ProHUD.HUD_ProHUD_C.ShowNotificationInline // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ShowOwningNotification(struct FText Name, int32_t Amount, struct TSoftObjectPtr<struct UTexture2D> Icon, bool bPositive); // Function HUD_ProHUD.HUD_ProHUD_C.ShowOwningNotification // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ShowJournalNotification(); // Function HUD_ProHUD.HUD_ProHUD_C.ShowJournalNotification // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ShowEndScreen(); // Function HUD_ProHUD.HUD_ProHUD_C.ShowEndScreen // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void DamageFX1CameraShake(); // Function HUD_ProHUD.HUD_ProHUD_C.DamageFX1CameraShake // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_HUD_ProHUD(int32_t EntryPoint); // Function HUD_ProHUD.HUD_ProHUD_C.ExecuteUbergraph_HUD_ProHUD // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
};

