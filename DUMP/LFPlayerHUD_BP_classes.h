// BlueprintGeneratedClass LFPlayerHUD_BP.LFPlayerHUD_BP_C
// Size: 0x4b8 (Inherited: 0x498)
struct ALFPlayerHUD_BP_C : APlayerHUD {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x498(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x4a0(0x08)
	struct UUserWidget* NotifyUMG; // 0x4a8(0x08)
	struct UWBP_HUD_Overlay_C* HUDOverlay; // 0x4b0(0x08)

	void SetupNotification(struct UUserWidget* NotifyUMG); // Function LFPlayerHUD_BP.LFPlayerHUD_BP_C.SetupNotification // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ReceiveBeginPlay(); // Function LFPlayerHUD_BP.LFPlayerHUD_BP_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_LFPlayerHUD_BP(int32_t EntryPoint); // Function LFPlayerHUD_BP.LFPlayerHUD_BP_C.ExecuteUbergraph_LFPlayerHUD_BP // (Final|UbergraphFunction) // @ game+0x1395fe0
};

