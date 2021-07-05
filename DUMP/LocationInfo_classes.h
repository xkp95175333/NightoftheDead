// WidgetBlueprintGeneratedClass LocationInfo.LocationInfo_C
// Size: 0x2c0 (Inherited: 0x260)
struct ULocationInfo_C : UUserWidget {
	struct UTextBlock* DiscoveredText; // 0x260(0x08)
	struct UTextBlock* FastTravelText; // 0x268(0x08)
	struct UTextBlock* HoverName; // 0x270(0x08)
	struct FText NameText; // 0x278(0x18)
	struct FText Discovered; // 0x290(0x18)
	struct FText FastTravel; // 0x2a8(0x18)

	struct FText GetFastTravel(); // Function LocationInfo.LocationInfo_C.GetFastTravel // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	struct FText GetDiscovered(); // Function LocationInfo.LocationInfo_C.GetDiscovered // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	struct FText GetHoverName(); // Function LocationInfo.LocationInfo_C.GetHoverName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
};

