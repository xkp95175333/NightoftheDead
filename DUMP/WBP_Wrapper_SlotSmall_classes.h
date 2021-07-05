// WidgetBlueprintGeneratedClass WBP_Wrapper_SlotSmall.WBP_Wrapper_SlotSmall_C
// Size: 0x3c8 (Inherited: 0x368)
struct UWBP_Wrapper_SlotSmall_C : USlotWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x368(0x08)
	struct UWBP_SlotSmall_C* WBP_SlotSmall; // 0x370(0x08)
	struct UImage* ItemIcon; // 0x378(0x08)
	struct UTextBlock* ItemCount; // 0x380(0x08)
	struct ULFInventoryComponent* InventoryComponent; // 0x388(0x08)
	struct APlayerHUD* PlayerHUD; // 0x390(0x08)
	struct ALFCharacterPlayer* PlayerCharacter; // 0x398(0x08)
	bool bCosmetic; // 0x3a0(0x01)
	char pad_3A1[0x7]; // 0x3a1(0x07)
	struct FMulticastInlineDelegate CosmeticOnClick; // 0x3a8(0x10)
	struct UImage* ImgHighlight; // 0x3b8(0x08)
	struct ULFCharacterEquipmentComponent* EquipmentComponent; // 0x3c0(0x08)

	struct FEventReply OnMouseButtonDoubleClick(struct FGeometry InMyGeometry, struct FPointerEvent InMouseEvent); // Function WBP_Wrapper_SlotSmall.WBP_Wrapper_SlotSmall_C.OnMouseButtonDoubleClick // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	int32_t GetSlotIndex(bool bIsRealIndex); // Function WBP_Wrapper_SlotSmall.WBP_Wrapper_SlotSmall_C.GetSlotIndex // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	bool OnDrop(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function WBP_Wrapper_SlotSmall.WBP_Wrapper_SlotSmall_C.OnDrop // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnDragDetected(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function WBP_Wrapper_SlotSmall.WBP_Wrapper_SlotSmall_C.OnDragDetected // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_Wrapper_SlotSmall.WBP_Wrapper_SlotSmall_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnLoaded_2EB9F11549F6BEB804DFA18083A3432E(struct UObject* Loaded); // Function WBP_Wrapper_SlotSmall.WBP_Wrapper_SlotSmall_C.OnLoaded_2EB9F11549F6BEB804DFA18083A3432E // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void PreConstruct(bool IsDesignTime); // Function WBP_Wrapper_SlotSmall.WBP_Wrapper_SlotSmall_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_Wrapper_SlotSmall.WBP_Wrapper_SlotSmall_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1395fe0
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function WBP_Wrapper_SlotSmall.WBP_Wrapper_SlotSmall_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1395fe0
	void Construct(); // Function WBP_Wrapper_SlotSmall.WBP_Wrapper_SlotSmall_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void OnClicked(); // Function WBP_Wrapper_SlotSmall.WBP_Wrapper_SlotSmall_C.OnClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnDragLeave(struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function WBP_Wrapper_SlotSmall.WBP_Wrapper_SlotSmall_C.OnDragLeave // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void OnDragEnter(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function WBP_Wrapper_SlotSmall.WBP_Wrapper_SlotSmall_C.OnDragEnter // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void SetSlotItem(struct FInventoryItem Item); // Function WBP_Wrapper_SlotSmall.WBP_Wrapper_SlotSmall_C.SetSlotItem // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void SetSlotImage(struct TSoftObjectPtr<struct UTexture2D> Thumbnail); // Function WBP_Wrapper_SlotSmall.WBP_Wrapper_SlotSmall_C.SetSlotImage // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ClearSlotItem(); // Function WBP_Wrapper_SlotSmall.WBP_Wrapper_SlotSmall_C.ClearSlotItem // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnLeave(); // Function WBP_Wrapper_SlotSmall.WBP_Wrapper_SlotSmall_C.OnLeave // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnEnter(); // Function WBP_Wrapper_SlotSmall.WBP_Wrapper_SlotSmall_C.OnEnter // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_WBP_Wrapper_SlotSmall(int32_t EntryPoint); // Function WBP_Wrapper_SlotSmall.WBP_Wrapper_SlotSmall_C.ExecuteUbergraph_WBP_Wrapper_SlotSmall // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
	void CosmeticOnClick__DelegateSignature(); // Function WBP_Wrapper_SlotSmall.WBP_Wrapper_SlotSmall_C.CosmeticOnClick__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
};

