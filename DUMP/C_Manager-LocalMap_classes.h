// BlueprintGeneratedClass C_Manager-LocalMap.C_Manager-LocalMap_C
// Size: 0xea (Inherited: 0xb0)
struct UC_Manager-LocalMap_C : UQuestMapComponent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	struct AWorldLocation_C* ActiveLocation; // 0xb8(0x08)
	struct UCompass_C* CompassWidget; // 0xc0(0x08)
	struct ULocalMap_C* LocalMapWidget; // 0xc8(0x08)
	struct UMaterialInstanceDynamic* LocalMap; // 0xd0(0x08)
	struct UPlayerMarker_C* PlayerMarker; // 0xd8(0x08)
	struct UMaterialInstanceDynamic* PlayerMarkerMaterial; // 0xe0(0x08)
	bool Initialized?; // 0xe8(0x01)
	bool IsOpen; // 0xe9(0x01)

	void GetWaypointActor(struct AWaypoint_C* WayPoint); // Function C_Manager-LocalMap.C_Manager-LocalMap_C.GetWaypointActor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void GetActiveLocation(struct AWorldLocation_C* Location); // Function C_Manager-LocalMap.C_Manager-LocalMap_C.GetActiveLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void SetLocation(struct AWorldLocation_C* ActiveLocation); // Function C_Manager-LocalMap.C_Manager-LocalMap_C.SetLocation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void GetMapScale(float Scale); // Function C_Manager-LocalMap.C_Manager-LocalMap_C.GetMapScale // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	void UpdatePlayerLocation(); // Function C_Manager-LocalMap.C_Manager-LocalMap_C.UpdatePlayerLocation // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void UpdatePlayerRotation(); // Function C_Manager-LocalMap.C_Manager-LocalMap_C.UpdatePlayerRotation // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void UpdateLocation(); // Function C_Manager-LocalMap.C_Manager-LocalMap_C.UpdateLocation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ToggleOff(); // Function C_Manager-LocalMap.C_Manager-LocalMap_C.ToggleOff // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ToggleOn(); // Function C_Manager-LocalMap.C_Manager-LocalMap_C.ToggleOn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void AddPlayerMarkerInfo(); // Function C_Manager-LocalMap.C_Manager-LocalMap_C.AddPlayerMarkerInfo // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void InitializeReferences(struct APlayerController* PlayerController); // Function C_Manager-LocalMap.C_Manager-LocalMap_C.InitializeReferences // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void LocationCheck(); // Function C_Manager-LocalMap.C_Manager-LocalMap_C.LocationCheck // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void DragLocationVector(struct FVector2D Location); // Function C_Manager-LocalMap.C_Manager-LocalMap_C.DragLocationVector // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void FastTravel(struct AWorldLocation_C* Location); // Function C_Manager-LocalMap.C_Manager-LocalMap_C.FastTravel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ReceiveTick(float DeltaSeconds); // Function C_Manager-LocalMap.C_Manager-LocalMap_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void Initialize(struct APlayerController* Controller); // Function C_Manager-LocalMap.C_Manager-LocalMap_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_C_Manager-LocalMap(int32_t EntryPoint); // Function C_Manager-LocalMap.C_Manager-LocalMap_C.ExecuteUbergraph_C_Manager-LocalMap // (Final|UbergraphFunction) // @ game+0x1395fe0
};

