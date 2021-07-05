// BlueprintGeneratedClass C_Manager-Compass.C_Manager-Compass_C
// Size: 0xe1 (Inherited: 0xb0)
struct UC_Manager-Compass_C : UQuestMapComponent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	struct UCompass_C* CompassWidget; // 0xb8(0x08)
	struct UMaterialInstanceDynamic* CompassMaterial; // 0xc0(0x08)
	float DirectionOffset; // 0xc8(0x04)
	char pad_CC[0x4]; // 0xcc(0x04)
	struct UWorldMap_C* WorldMapWidget; // 0xd0(0x08)
	struct UQuestMapComponent_C* Manager-WorldMap; // 0xd8(0x08)
	bool Initialized?; // 0xe0(0x01)

	void GetWaypointMarker(); // Function C_Manager-Compass.C_Manager-Compass_C.GetWaypointMarker // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void InitializeReferences(struct APlayerController* PlayerController); // Function C_Manager-Compass.C_Manager-Compass_C.InitializeReferences // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Update(); // Function C_Manager-Compass.C_Manager-Compass_C.Update // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ReceiveTick(float DeltaSeconds); // Function C_Manager-Compass.C_Manager-Compass_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void Initialize(struct APlayerController* Controller); // Function C_Manager-Compass.C_Manager-Compass_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_C_Manager-Compass(int32_t EntryPoint); // Function C_Manager-Compass.C_Manager-Compass_C.ExecuteUbergraph_C_Manager-Compass // (Final|UbergraphFunction) // @ game+0x1395fe0
};

