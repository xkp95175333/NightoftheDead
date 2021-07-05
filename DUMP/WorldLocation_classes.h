// BlueprintGeneratedClass WorldLocation.WorldLocation_C
// Size: 0x784 (Inherited: 0x6d8)
struct AWorldLocation_C : AMarkerBuildingEntity {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6d8(0x08)
	struct FText LocationName; // 0x6e0(0x18)
	bool UseCubeCollision; // 0x6f8(0x01)
	char pad_6F9[0x3]; // 0x6f9(0x03)
	float TriggerSize; // 0x6fc(0x04)
	bool IsDiscovered; // 0x700(0x01)
	char pad_701[0x7]; // 0x701(0x07)
	struct AQuestMapController_C* Controller; // 0x708(0x08)
	struct UTexture2D* Icon; // 0x710(0x08)
	struct FLinearColor UndiscoveredTint; // 0x718(0x10)
	struct FLinearColor DiscoveredTint; // 0x728(0x10)
	bool HasLocalMap; // 0x738(0x01)
	char pad_739[0x7]; // 0x739(0x07)
	struct UTexture2D* LocalMap; // 0x740(0x08)
	bool TravelAllowedFrom; // 0x748(0x01)
	bool TravelAllowedTo; // 0x749(0x01)
	bool Display; // 0x74a(0x01)
	char pad_74B[0x5]; // 0x74b(0x05)
	struct ATravelPoint_C* TravelPoint; // 0x750(0x08)
	struct APawn* Pawn; // 0x758(0x08)
	struct UC_Manager-LocalMap_C* LocalMapManager; // 0x760(0x08)
	struct UC_Manager-WorldMap_C* WorldMapManager; // 0x768(0x08)
	struct TArray<struct UTexture2D*> IconList; // 0x770(0x10)
	int32_t IconIndex; // 0x780(0x04)

	void RefreshIcon(); // Function WorldLocation.WorldLocation_C.RefreshIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OverlapEvent(); // Function WorldLocation.WorldLocation_C.OverlapEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void CollisionSwitch(bool Enable, float Size, bool UseSphere); // Function WorldLocation.WorldLocation_C.CollisionSwitch // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void PlayerIsOverlapping(); // Function WorldLocation.WorldLocation_C.PlayerIsOverlapping // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ReceiveBeginPlay(); // Function WorldLocation.WorldLocation_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1395fe0
	void OnChange(); // Function WorldLocation.WorldLocation_C.OnChange // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void OnBuild(); // Function WorldLocation.WorldLocation_C.OnBuild // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_WorldLocation(int32_t EntryPoint); // Function WorldLocation.WorldLocation_C.ExecuteUbergraph_WorldLocation // (Final|UbergraphFunction) // @ game+0x1395fe0
};

