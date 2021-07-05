// WidgetBlueprintGeneratedClass LocationMarker.LocationMarker_C
// Size: 0x278 (Inherited: 0x260)
struct ULocationMarker_C : UUserWidget {
	struct UImage* Marker; // 0x260(0x08)
	struct AWorldLocation_C* LocationActor; // 0x268(0x08)
	struct UC_Manager-WorldMap_C* WorldMapManager; // 0x270(0x08)

	struct FEventReply OnMouseWheel(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function LocationMarker.LocationMarker_C.OnMouseWheel // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function LocationMarker.LocationMarker_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
};

