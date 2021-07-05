// WidgetBlueprintGeneratedClass WBP_HUD.WBP_HUD_C
// Size: 0x2b4 (Inherited: 0x298)
struct UWBP_HUD_C : ULFHudWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x298(0x08)
	struct UWBP_Scene_HUD_C* WBP_Scene_HUD; // 0x2a0(0x08)
	float StatUnit; // 0x2a8(0x04)
	float RealSeconds; // 0x2ac(0x04)
	float GameMinute; // 0x2b0(0x04)

	void PreConstruct(bool IsDesignTime); // Function WBP_HUD.WBP_HUD_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void Construct(); // Function WBP_HUD.WBP_HUD_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_HUD.WBP_HUD_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void OnRefreshCharacterStatus(enum class ECharacterStatus Status); // Function WBP_HUD.WBP_HUD_C.OnRefreshCharacterStatus // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void OnRefreshEquipmentStatus(enum class EEquipmentStatus Status); // Function WBP_HUD.WBP_HUD_C.OnRefreshEquipmentStatus // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void OnRefreshGameTime(struct FGameDate GameDate); // Function WBP_HUD.WBP_HUD_C.OnRefreshGameTime // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1395fe0
	void OnRefreshWaveProgress(float Progress); // Function WBP_HUD.WBP_HUD_C.OnRefreshWaveProgress // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void ShowCompass(); // Function WBP_HUD.WBP_HUD_C.ShowCompass // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void ShowCrosshair(); // Function WBP_HUD.WBP_HUD_C.ShowCrosshair // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void HideCompass(); // Function WBP_HUD.WBP_HUD_C.HideCompass // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void HideCrosshair(); // Function WBP_HUD.WBP_HUD_C.HideCrosshair // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void AddCompassMarker(struct AActor* Marker); // Function WBP_HUD.WBP_HUD_C.AddCompassMarker // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void RemoveCompassMarker(struct AActor* Marker); // Function WBP_HUD.WBP_HUD_C.RemoveCompassMarker // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void UpdateCompassMarker(); // Function WBP_HUD.WBP_HUD_C.UpdateCompassMarker // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void HideWave(); // Function WBP_HUD.WBP_HUD_C.HideWave // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void HideStatus(); // Function WBP_HUD.WBP_HUD_C.HideStatus // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void ShowStatus(); // Function WBP_HUD.WBP_HUD_C.ShowStatus // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void ShowWave(); // Function WBP_HUD.WBP_HUD_C.ShowWave // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_WBP_HUD(int32_t EntryPoint); // Function WBP_HUD.WBP_HUD_C.ExecuteUbergraph_WBP_HUD // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
};

