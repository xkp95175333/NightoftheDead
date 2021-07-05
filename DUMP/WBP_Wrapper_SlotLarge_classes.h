// WidgetBlueprintGeneratedClass WBP_Wrapper_SlotLarge.WBP_Wrapper_SlotLarge_C
// Size: 0x3b8 (Inherited: 0x368)
struct UWBP_Wrapper_SlotLarge_C : USlotWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x368(0x08)
	struct UWBP_SlotLarge_C* WBP_SlotLarge; // 0x370(0x08)
	struct UImage* ItemIcon; // 0x378(0x08)
	struct UTextBlock* ItemCount; // 0x380(0x08)
	struct ULFInventoryComponent* InventoryComponent; // 0x388(0x08)
	struct APlayerHUD* PlayerHUD; // 0x390(0x08)
	struct ALFCharacterPlayer* PlayerCharacter; // 0x398(0x08)
	struct UBorder* ItemCountBorder; // 0x3a0(0x08)
	enum class EEquipmentSlot EquipmentSlot; // 0x3a8(0x01)
	char pad_3A9[0x7]; // 0x3a9(0x07)
	struct ULFCharacterEquipmentComponent* EquipmentComponent; // 0x3b0(0x08)

	void UseItem(); // Function WBP_Wrapper_SlotLarge.WBP_Wrapper_SlotLarge_C.UseItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	bool IsAmmoSlot(); // Function WBP_Wrapper_SlotLarge.WBP_Wrapper_SlotLarge_C.IsAmmoSlot // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	void SetCountText(); // Function WBP_Wrapper_SlotLarge.WBP_Wrapper_SlotLarge_C.SetCountText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	struct FEventReply OnMouseButtonDoubleClick(struct FGeometry InMyGeometry, struct FPointerEvent InMouseEvent); // Function WBP_Wrapper_SlotLarge.WBP_Wrapper_SlotLarge_C.OnMouseButtonDoubleClick // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	int32_t GetSlotIndex(bool bIsRealIndex); // Function WBP_Wrapper_SlotLarge.WBP_Wrapper_SlotLarge_C.GetSlotIndex // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	bool OnDrop(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function WBP_Wrapper_SlotLarge.WBP_Wrapper_SlotLarge_C.OnDrop // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnDragDetected(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function WBP_Wrapper_SlotLarge.WBP_Wrapper_SlotLarge_C.OnDragDetected // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_Wrapper_SlotLarge.WBP_Wrapper_SlotLarge_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnLoaded_0919636345F197C035CAF3984C5C9EF3(struct UObject* Loaded); // Function WBP_Wrapper_SlotLarge.WBP_Wrapper_SlotLarge_C.OnLoaded_0919636345F197C035CAF3984C5C9EF3 // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void PreConstruct(bool IsDesignTime); // Function WBP_Wrapper_SlotLarge.WBP_Wrapper_SlotLarge_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_Wrapper_SlotLarge.WBP_Wrapper_SlotLarge_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1395fe0
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function WBP_Wrapper_SlotLarge.WBP_Wrapper_SlotLarge_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1395fe0
	void Construct(); // Function WBP_Wrapper_SlotLarge.WBP_Wrapper_SlotLarge_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void OnDragLeave(struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function WBP_Wrapper_SlotLarge.WBP_Wrapper_SlotLarge_C.OnDragLeave // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void OnDragEnter(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function WBP_Wrapper_SlotLarge.WBP_Wrapper_SlotLarge_C.OnDragEnter // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void SetSlotItem(struct FInventoryItem Item); // Function WBP_Wrapper_SlotLarge.WBP_Wrapper_SlotLarge_C.SetSlotItem // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void SetSlotImage(struct TSoftObjectPtr<struct UTexture2D> Thumbnail); // Function WBP_Wrapper_SlotLarge.WBP_Wrapper_SlotLarge_C.SetSlotImage // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ClearSlotItem(); // Function WBP_Wrapper_SlotLarge.WBP_Wrapper_SlotLarge_C.ClearSlotItem // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnEnter(); // Function WBP_Wrapper_SlotLarge.WBP_Wrapper_SlotLarge_C.OnEnter // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnLeave(); // Function WBP_Wrapper_SlotLarge.WBP_Wrapper_SlotLarge_C.OnLeave // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_WBP_Wrapper_SlotLarge(int32_t EntryPoint); // Function WBP_Wrapper_SlotLarge.WBP_Wrapper_SlotLarge_C.ExecuteUbergraph_WBP_Wrapper_SlotLarge // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
};

