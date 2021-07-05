// WidgetBlueprintGeneratedClass WBP_Wrapper_SlotSmall_Store.WBP_Wrapper_SlotSmall_Store_C
// Size: 0x3a0 (Inherited: 0x368)
struct UWBP_Wrapper_SlotSmall_Store_C : USlotWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x368(0x08)
	struct UWBP_SlotSmall_C* WBP_SlotSmall; // 0x370(0x08)
	struct UImage* ItemIcon; // 0x378(0x08)
	struct UTextBlock* ItemCount; // 0x380(0x08)
	struct ULFInventoryComponent* InventoryComponent; // 0x388(0x08)
	struct APlayerHUD* PlayerHUD; // 0x390(0x08)
	struct ALFCharacterPlayer* PlayerCharacter; // 0x398(0x08)

	struct FEventReply OnMouseButtonDoubleClick(struct FGeometry InMyGeometry, struct FPointerEvent InMouseEvent); // Function WBP_Wrapper_SlotSmall_Store.WBP_Wrapper_SlotSmall_Store_C.OnMouseButtonDoubleClick // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	int32_t GetSlotIndex(bool bIsRealIndex); // Function WBP_Wrapper_SlotSmall_Store.WBP_Wrapper_SlotSmall_Store_C.GetSlotIndex // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	bool OnDrop(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function WBP_Wrapper_SlotSmall_Store.WBP_Wrapper_SlotSmall_Store_C.OnDrop // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnDragDetected(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function WBP_Wrapper_SlotSmall_Store.WBP_Wrapper_SlotSmall_Store_C.OnDragDetected // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_Wrapper_SlotSmall_Store.WBP_Wrapper_SlotSmall_Store_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnLoaded_6AD572E242FD212601814C8AF61A3290(struct UObject* Loaded); // Function WBP_Wrapper_SlotSmall_Store.WBP_Wrapper_SlotSmall_Store_C.OnLoaded_6AD572E242FD212601814C8AF61A3290 // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void PreConstruct(bool IsDesignTime); // Function WBP_Wrapper_SlotSmall_Store.WBP_Wrapper_SlotSmall_Store_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_Wrapper_SlotSmall_Store.WBP_Wrapper_SlotSmall_Store_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1395fe0
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function WBP_Wrapper_SlotSmall_Store.WBP_Wrapper_SlotSmall_Store_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1395fe0
	void Construct(); // Function WBP_Wrapper_SlotSmall_Store.WBP_Wrapper_SlotSmall_Store_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void OnClicked(); // Function WBP_Wrapper_SlotSmall_Store.WBP_Wrapper_SlotSmall_Store_C.OnClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnDragLeave(struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function WBP_Wrapper_SlotSmall_Store.WBP_Wrapper_SlotSmall_Store_C.OnDragLeave // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void OnDragEnter(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function WBP_Wrapper_SlotSmall_Store.WBP_Wrapper_SlotSmall_Store_C.OnDragEnter // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void SetSlotItem(struct FInventoryItem Item); // Function WBP_Wrapper_SlotSmall_Store.WBP_Wrapper_SlotSmall_Store_C.SetSlotItem // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void SetSlotImage(struct TSoftObjectPtr<struct UTexture2D> Thumbnail); // Function WBP_Wrapper_SlotSmall_Store.WBP_Wrapper_SlotSmall_Store_C.SetSlotImage // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ClearSlotItem(); // Function WBP_Wrapper_SlotSmall_Store.WBP_Wrapper_SlotSmall_Store_C.ClearSlotItem // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnLeave(); // Function WBP_Wrapper_SlotSmall_Store.WBP_Wrapper_SlotSmall_Store_C.OnLeave // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnEnter(); // Function WBP_Wrapper_SlotSmall_Store.WBP_Wrapper_SlotSmall_Store_C.OnEnter // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_WBP_Wrapper_SlotSmall_Store(int32_t EntryPoint); // Function WBP_Wrapper_SlotSmall_Store.WBP_Wrapper_SlotSmall_Store_C.ExecuteUbergraph_WBP_Wrapper_SlotSmall_Store // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
};

