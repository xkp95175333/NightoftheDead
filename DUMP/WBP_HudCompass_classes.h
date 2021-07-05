// WidgetBlueprintGeneratedClass WBP_HudCompass.WBP_HudCompass_C
// Size: 0x318 (Inherited: 0x260)
struct UWBP_HudCompass_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UOverlay* Overlay_Compass; // 0x268(0x08)
	struct UOverlay* Overlay_Marker; // 0x270(0x08)
	struct TMap<struct AActor*, struct UUserWidget*> ActorMarkers; // 0x278(0x50)
	struct UCameraComponent* PlayerCamComp; // 0x2c8(0x08)
	struct FVector CamOffset; // 0x2d0(0x0c)
	float CompassViewAngle; // 0x2dc(0x04)
	float CompassWidgetHalfWidth; // 0x2e0(0x04)
	float SortElapsed; // 0x2e4(0x04)
	float SortInterval; // 0x2e8(0x04)
	char pad_2EC[0x4]; // 0x2ec(0x04)
	struct ACharacter* Player; // 0x2f0(0x08)
	struct APlayerController* PlayerController; // 0x2f8(0x08)
	bool ShouldUpdateOrder; // 0x300(0x01)
	char pad_301[0x7]; // 0x301(0x07)
	struct TArray<struct AActor*> Actors; // 0x308(0x10)

	void GetPlayerCamLoc(struct FVector Location); // Function WBP_HudCompass.WBP_HudCompass_C.GetPlayerCamLoc // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	void Construct(); // Function WBP_HudCompass.WBP_HudCompass_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void AddMarker(struct AActor* InMarker); // Function WBP_HudCompass.WBP_HudCompass_C.AddMarker // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void RemoveMarker(struct AActor* InMarker); // Function WBP_HudCompass.WBP_HudCompass_C.RemoveMarker // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void UpdateMarkers(); // Function WBP_HudCompass.WBP_HudCompass_C.UpdateMarkers // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void SortMarkers(); // Function WBP_HudCompass.WBP_HudCompass_C.SortMarkers // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_HudCompass.WBP_HudCompass_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void ValidateMarkers(); // Function WBP_HudCompass.WBP_HudCompass_C.ValidateMarkers // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_WBP_HudCompass(int32_t EntryPoint); // Function WBP_HudCompass.WBP_HudCompass_C.ExecuteUbergraph_WBP_HudCompass // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
};

