// WidgetBlueprintGeneratedClass WBP_Wrapper_Quickslot.WBP_Wrapper_Quickslot_C
// Size: 0x3ac (Inherited: 0x368)
struct UWBP_Wrapper_Quickslot_C : USlotWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x368(0x08)
	struct UWBP_QuickSlot_C* WBP_QuickSlot; // 0x370(0x08)
	struct UImage* ItemIcon; // 0x378(0x08)
	struct UTextBlock* ItemCount; // 0x380(0x08)
	struct APlayerHUD* PlayerHUD; // 0x388(0x08)
	struct ULFInventoryComponent* InventoryComponent; // 0x390(0x08)
	struct ALFCharacterPlayer* PlayerCharacter; // 0x398(0x08)
	struct UImage* ImgHighlight; // 0x3a0(0x08)
	int32_t AssignedItem; // 0x3a8(0x04)

	void IsValidQuickSlot(bool NewParam); // Function WBP_Wrapper_Quickslot.WBP_Wrapper_Quickslot_C.IsValidQuickSlot // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	void Play Use Animation(); // Function WBP_Wrapper_Quickslot.WBP_Wrapper_Quickslot_C.Play Use Animation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	int32_t GetSlotIndex(bool bIsRealIndex); // Function WBP_Wrapper_Quickslot.WBP_Wrapper_Quickslot_C.GetSlotIndex // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	void Get Real Slot Index(struct USlotWidget* SlotWidget, int32_t RealSlotIndex); // Function WBP_Wrapper_Quickslot.WBP_Wrapper_Quickslot_C.Get Real Slot Index // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Assign Quick Slot(int32_t ItemOwningIndex); // Function WBP_Wrapper_Quickslot.WBP_Wrapper_Quickslot_C.Assign Quick Slot // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	struct FEventReply UnassignQuickSlot(); // Function WBP_Wrapper_Quickslot.WBP_Wrapper_Quickslot_C.UnassignQuickSlot // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnDragDetected(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function WBP_Wrapper_Quickslot.WBP_Wrapper_Quickslot_C.OnDragDetected // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_Wrapper_Quickslot.WBP_Wrapper_Quickslot_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	bool OnDrop(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function WBP_Wrapper_Quickslot.WBP_Wrapper_Quickslot_C.OnDrop // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnLoaded_60346EEF41E30D26DC3BD7995325B342(struct UObject* Loaded); // Function WBP_Wrapper_Quickslot.WBP_Wrapper_Quickslot_C.OnLoaded_60346EEF41E30D26DC3BD7995325B342 // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void PreConstruct(bool IsDesignTime); // Function WBP_Wrapper_Quickslot.WBP_Wrapper_Quickslot_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_Wrapper_Quickslot.WBP_Wrapper_Quickslot_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1395fe0
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function WBP_Wrapper_Quickslot.WBP_Wrapper_Quickslot_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1395fe0
	void Construct(); // Function WBP_Wrapper_Quickslot.WBP_Wrapper_Quickslot_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void OnClicked(); // Function WBP_Wrapper_Quickslot.WBP_Wrapper_Quickslot_C.OnClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnDragLeave(struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function WBP_Wrapper_Quickslot.WBP_Wrapper_Quickslot_C.OnDragLeave // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void OnDragEnter(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function WBP_Wrapper_Quickslot.WBP_Wrapper_Quickslot_C.OnDragEnter // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void OnLeave(); // Function WBP_Wrapper_Quickslot.WBP_Wrapper_Quickslot_C.OnLeave // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnEnter(); // Function WBP_Wrapper_Quickslot.WBP_Wrapper_Quickslot_C.OnEnter // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ClearSlotItem(); // Function WBP_Wrapper_Quickslot.WBP_Wrapper_Quickslot_C.ClearSlotItem // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void SetSlotImage(struct TSoftObjectPtr<struct UTexture2D> Thumbnail); // Function WBP_Wrapper_Quickslot.WBP_Wrapper_Quickslot_C.SetSlotImage // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void SetSlotItem(struct FInventoryItem Item); // Function WBP_Wrapper_Quickslot.WBP_Wrapper_Quickslot_C.SetSlotItem // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnDragCancelled(struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function WBP_Wrapper_Quickslot.WBP_Wrapper_Quickslot_C.OnDragCancelled // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1395fe0
	void On Used(); // Function WBP_Wrapper_Quickslot.WBP_Wrapper_Quickslot_C.On Used // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_Wrapper_Quickslot.WBP_Wrapper_Quickslot_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void Update Highlight Image(); // Function WBP_Wrapper_Quickslot.WBP_Wrapper_Quickslot_C.Update Highlight Image // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_WBP_Wrapper_Quickslot(int32_t EntryPoint); // Function WBP_Wrapper_Quickslot.WBP_Wrapper_Quickslot_C.ExecuteUbergraph_WBP_Wrapper_Quickslot // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
};

