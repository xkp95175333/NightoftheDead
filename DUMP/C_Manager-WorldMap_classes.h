// BlueprintGeneratedClass C_Manager-WorldMap.C_Manager-WorldMap_C
// Size: 0x1b0 (Inherited: 0xb0)
struct UC_Manager-WorldMap_C : UQuestMapComponent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	bool MouseWithinBounds; // 0xb8(0x01)
	char pad_B9[0x3]; // 0xb9(0x03)
	struct FVector2D MouseHitCoords; // 0xbc(0x08)
	char pad_C4[0x4]; // 0xc4(0x04)
	struct APlayerController* Controller; // 0xc8(0x08)
	struct AWaypoint_C* WaypointActor; // 0xd0(0x08)
	struct UCompass_C* CompassWidget; // 0xd8(0x08)
	struct UWorldMap_C* WorldMapWidget; // 0xe0(0x08)
	struct UOverlay* MapMarkersOverlay; // 0xe8(0x08)
	struct UMaterialInstanceDynamic* WorldMap; // 0xf0(0x08)
	bool StartZoomedIn; // 0xf8(0x01)
	char pad_F9[0x3]; // 0xf9(0x03)
	float ZoomStep; // 0xfc(0x04)
	float CurrentZoom; // 0x100(0x04)
	float ZoomDeadZone; // 0x104(0x04)
	float MousePanRate; // 0x108(0x04)
	float GamepadPanRate; // 0x10c(0x04)
	int32_t GamepadCursorSpeed; // 0x110(0x04)
	struct FVector2D WorldCenter; // 0x114(0x08)
	struct FVector2D WorldDimensions; // 0x11c(0x08)
	char pad_124[0x4]; // 0x124(0x04)
	struct UImage* PlayerMarker; // 0x128(0x08)
	struct UImage* WaypointMarker; // 0x130(0x08)
	struct TArray<struct AWorldLocation_C*> DiscoveredLocations; // 0x138(0x10)
	struct TArray<struct AWorldLocation_C*> DisplayedLocations; // 0x148(0x10)
	float MapSizeOffset; // 0x158(0x04)
	char pad_15C[0x4]; // 0x15c(0x04)
	struct TArray<struct AActor*> ActorsToIgnore; // 0x160(0x10)
	float BaseX; // 0x170(0x04)
	float BaseY; // 0x174(0x04)
	float UseY; // 0x178(0x04)
	float UseX; // 0x17c(0x04)
	float DeadzoneX; // 0x180(0x04)
	float DeadzoneY; // 0x184(0x04)
	struct FTimerHandle CursorUpdateLoop; // 0x188(0x08)
	struct ULocationInfo_Gamepad_C* GamepadTooltip; // 0x190(0x08)
	bool MapOpen; // 0x198(0x01)
	bool MouseDown; // 0x199(0x01)
	char pad_19A[0x2]; // 0x19a(0x02)
	float DirectionOffset; // 0x19c(0x04)
	float LocationDirectionOffset; // 0x1a0(0x04)
	float ZoomMin; // 0x1a4(0x04)
	float ZoomMax; // 0x1a8(0x04)
	float ZoomInitial; // 0x1ac(0x04)

	void GetWaypointActor(struct AWaypoint_C* WayPoint); // Function C_Manager-WorldMap.C_Manager-WorldMap_C.GetWaypointActor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void GetActiveLocation(struct AWorldLocation_C* Location); // Function C_Manager-WorldMap.C_Manager-WorldMap_C.GetActiveLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void PlayFade(bool Forward); // Function C_Manager-WorldMap.C_Manager-WorldMap_C.PlayFade // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	struct FVector FindRotatedLocation(struct FVector InLocation); // Function C_Manager-WorldMap.C_Manager-WorldMap_C.FindRotatedLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	void GetMapState(bool State); // Function C_Manager-WorldMap.C_Manager-WorldMap_C.GetMapState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	void SetMouseHitCoords(struct FVector2D MouseHitCoords); // Function C_Manager-WorldMap.C_Manager-WorldMap_C.SetMouseHitCoords // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void SetMouseWithinBounds(bool State); // Function C_Manager-WorldMap.C_Manager-WorldMap_C.SetMouseWithinBounds // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void GamepadClick(); // Function C_Manager-WorldMap.C_Manager-WorldMap_C.GamepadClick // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void DetectLocation(float VectorX, float VectorY, struct AWorldLocation_C* Location); // Function C_Manager-WorldMap.C_Manager-WorldMap_C.DetectLocation // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	void CursorUpdate(); // Function C_Manager-WorldMap.C_Manager-WorldMap_C.CursorUpdate // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void GamepadMoveCheck(); // Function C_Manager-WorldMap.C_Manager-WorldMap_C.GamepadMoveCheck // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void AdjustToGamepad(); // Function C_Manager-WorldMap.C_Manager-WorldMap_C.AdjustToGamepad // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void MoveGamepadCursor(bool IsX, float AxisValue); // Function C_Manager-WorldMap.C_Manager-WorldMap_C.MoveGamepadCursor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ResetDeadZone(); // Function C_Manager-WorldMap.C_Manager-WorldMap_C.ResetDeadZone // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void CalcResetCoords(float AdjustedX, float AdjustedY); // Function C_Manager-WorldMap.C_Manager-WorldMap_C.CalcResetCoords // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	void ResetMap(); // Function C_Manager-WorldMap.C_Manager-WorldMap_C.ResetMap // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void MouseMoveCheck(); // Function C_Manager-WorldMap.C_Manager-WorldMap_C.MouseMoveCheck // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void DetectGround(float VectorX, float VectorY, float VectorZ); // Function C_Manager-WorldMap.C_Manager-WorldMap_C.DetectGround // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	void AddWaypointInfo(); // Function C_Manager-WorldMap.C_Manager-WorldMap_C.AddWaypointInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void RemoveWaypoint(); // Function C_Manager-WorldMap.C_Manager-WorldMap_C.RemoveWaypoint // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void UpdateWaypoint(); // Function C_Manager-WorldMap.C_Manager-WorldMap_C.UpdateWaypoint // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void VectorReversal(struct FVector2D WaypointLocation, struct FSlateBrush MarkerBrush, float WorldX, float WorldY); // Function C_Manager-WorldMap.C_Manager-WorldMap_C.VectorReversal // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	void AdjustmentMaths(float X, float Y, struct FSlateBrush MarkerBrush, struct FVector2D AdjustedLocation); // Function C_Manager-WorldMap.C_Manager-WorldMap_C.AdjustmentMaths // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	void AddWaypoint(bool GamepadEvent, struct FVector2D GamepadLocation); // Function C_Manager-WorldMap.C_Manager-WorldMap_C.AddWaypoint // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void AddPlayerInfo(); // Function C_Manager-WorldMap.C_Manager-WorldMap_C.AddPlayerInfo // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void FastTravelOnClick(struct AWorldLocation_C* WorldLocation); // Function C_Manager-WorldMap.C_Manager-WorldMap_C.FastTravelOnClick // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void AdjustToCursor(); // Function C_Manager-WorldMap.C_Manager-WorldMap_C.AdjustToCursor // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void GetWidgetBounds(float MinX, float MinY, float MaxX, float MaxY); // Function C_Manager-WorldMap.C_Manager-WorldMap_C.GetWidgetBounds // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	void UpdateMarkers(); // Function C_Manager-WorldMap.C_Manager-WorldMap_C.UpdateMarkers // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void CheckMarkerBounds(struct FVector2D Translation, bool InBounds); // Function C_Manager-WorldMap.C_Manager-WorldMap_C.CheckMarkerBounds // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	void GetMapSizeOffset(); // Function C_Manager-WorldMap.C_Manager-WorldMap_C.GetMapSizeOffset // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void AddLocationMarker(struct AWorldLocation_C* WorldLocation, bool Discovered); // Function C_Manager-WorldMap.C_Manager-WorldMap_C.AddLocationMarker // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void AddMarkers(); // Function C_Manager-WorldMap.C_Manager-WorldMap_C.AddMarkers // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void GetLocations(); // Function C_Manager-WorldMap.C_Manager-WorldMap_C.GetLocations // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void AdjustMapLocation(struct AActor* BaseActor, struct FSlateBrush MarkerBrush, struct FVector2D AdjustedLocation); // Function C_Manager-WorldMap.C_Manager-WorldMap_C.AdjustMapLocation // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	void UpdatePlayerMarker(); // Function C_Manager-WorldMap.C_Manager-WorldMap_C.UpdatePlayerMarker // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void GetCoords(float CoordX, float CoordY, float MouseX, float MouseY); // Function C_Manager-WorldMap.C_Manager-WorldMap_C.GetCoords // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	void ClampLimits(float XValue, float YValue, float ClampedX, float ClampedY); // Function C_Manager-WorldMap.C_Manager-WorldMap_C.ClampLimits // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	void DragMap(struct FVector2D LocationVector); // Function C_Manager-WorldMap.C_Manager-WorldMap_C.DragMap // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ZoomMap(bool GamepadZoom, float AxisInput); // Function C_Manager-WorldMap.C_Manager-WorldMap_C.ZoomMap // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ToggleOff(); // Function C_Manager-WorldMap.C_Manager-WorldMap_C.ToggleOff // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void InitializeReferences(struct APlayerController* PlayerController); // Function C_Manager-WorldMap.C_Manager-WorldMap_C.InitializeReferences // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ToggleOn(bool GamepadEvent); // Function C_Manager-WorldMap.C_Manager-WorldMap_C.ToggleOn // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void DragLocationVector(struct FVector2D Location); // Function C_Manager-WorldMap.C_Manager-WorldMap_C.DragLocationVector // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void FastTravel(struct AWorldLocation_C* Location); // Function C_Manager-WorldMap.C_Manager-WorldMap_C.FastTravel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Initialize(struct APlayerController* Controller); // Function C_Manager-WorldMap.C_Manager-WorldMap_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void GamepadZoom(float AxisInput, struct FKey Key); // Function C_Manager-WorldMap.C_Manager-WorldMap_C.GamepadZoom // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ControlEvent(bool State); // Function C_Manager-WorldMap.C_Manager-WorldMap_C.ControlEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ReceiveTick(float DeltaSeconds); // Function C_Manager-WorldMap.C_Manager-WorldMap_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_C_Manager-WorldMap(int32_t EntryPoint); // Function C_Manager-WorldMap.C_Manager-WorldMap_C.ExecuteUbergraph_C_Manager-WorldMap // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
};

