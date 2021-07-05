// WidgetBlueprintGeneratedClass WorldMap_Image.WorldMap_Image_C
// Size: 0x27a (Inherited: 0x260)
struct UWorldMap_Image_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* Map; // 0x268(0x08)
	struct UC_Manager-WorldMap_C* WorldMapManager; // 0x270(0x08)
	bool Dragged; // 0x278(0x01)
	bool LeftMouseDown; // 0x279(0x01)

	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WorldMap_Image.WorldMap_Image_C.OnMouseButtonUp // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnDragDetected(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function WorldMap_Image.WorldMap_Image_C.OnDragDetected // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WorldMap_Image.WorldMap_Image_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Construct(); // Function WorldMap_Image.WorldMap_Image_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WorldMap_Image.WorldMap_Image_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1395fe0
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function WorldMap_Image.WorldMap_Image_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1395fe0
	void OnDragCancelled(struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function WorldMap_Image.WorldMap_Image_C.OnDragCancelled // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_WorldMap_Image(int32_t EntryPoint); // Function WorldMap_Image.WorldMap_Image_C.ExecuteUbergraph_WorldMap_Image // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
};

