// WidgetBlueprintGeneratedClass WaypointMarker.WaypointMarker_C
// Size: 0x278 (Inherited: 0x260)
struct UWaypointMarker_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* Marker; // 0x268(0x08)
	struct UC_Manager-WorldMap_C* WorldMapManager; // 0x270(0x08)

	struct FEventReply OnMouseWheel(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WaypointMarker.WaypointMarker_C.OnMouseWheel // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WaypointMarker.WaypointMarker_C.OnMouseButtonUp // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void GetWorldMapManager(); // Function WaypointMarker.WaypointMarker_C.GetWorldMapManager // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WaypointMarker.WaypointMarker_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Construct(); // Function WaypointMarker.WaypointMarker_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_WaypointMarker(int32_t EntryPoint); // Function WaypointMarker.WaypointMarker_C.ExecuteUbergraph_WaypointMarker // (Final|UbergraphFunction) // @ game+0x1395fe0
};

