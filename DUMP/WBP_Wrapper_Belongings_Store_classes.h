// WidgetBlueprintGeneratedClass WBP_Wrapper_Belongings_Store.WBP_Wrapper_Belongings_Store_C
// Size: 0x2a8 (Inherited: 0x260)
struct UWBP_Wrapper_Belongings_Store_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct USpacer* Spacer_209; // 0x268(0x08)
	struct UWBP_Inventory_Store_C* WBP_Inventory_Store; // 0x270(0x08)
	struct TArray<struct USlotWidget*> SlotWidgets; // 0x278(0x10)
	struct UUniformGridPanel* InventoryGrid; // 0x288(0x08)
	struct ULFInventoryComponent* InventoryComponent; // 0x290(0x08)
	int32_t ItemPerRow; // 0x298(0x04)
	char pad_29C[0x4]; // 0x29c(0x04)
	struct USlotWidget* SlotWidget; // 0x2a0(0x08)

	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_Wrapper_Belongings_Store.WBP_Wrapper_Belongings_Store_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void PreConstruct(bool IsDesignTime); // Function WBP_Wrapper_Belongings_Store.WBP_Wrapper_Belongings_Store_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void CreateSlots(int32_t SlotAmount, enum class EInventorySlotType SlotType); // Function WBP_Wrapper_Belongings_Store.WBP_Wrapper_Belongings_Store_C.CreateSlots // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void AssignItem(struct FInventoryItem Item, int32_t SlotIndex); // Function WBP_Wrapper_Belongings_Store.WBP_Wrapper_Belongings_Store_C.AssignItem // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Construct(); // Function WBP_Wrapper_Belongings_Store.WBP_Wrapper_Belongings_Store_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void OnAllClicked(); // Function WBP_Wrapper_Belongings_Store.WBP_Wrapper_Belongings_Store_C.OnAllClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void SetSlotAmount(int32_t SlotAmount); // Function WBP_Wrapper_Belongings_Store.WBP_Wrapper_Belongings_Store_C.SetSlotAmount // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void CollapseSpacer(); // Function WBP_Wrapper_Belongings_Store.WBP_Wrapper_Belongings_Store_C.CollapseSpacer // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Rename(struct FText Text); // Function WBP_Wrapper_Belongings_Store.WBP_Wrapper_Belongings_Store_C.Rename // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void BindCategories(); // Function WBP_Wrapper_Belongings_Store.WBP_Wrapper_Belongings_Store_C.BindCategories // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void CollapseCategories(); // Function WBP_Wrapper_Belongings_Store.WBP_Wrapper_Belongings_Store_C.CollapseCategories // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void BindTakeAll(); // Function WBP_Wrapper_Belongings_Store.WBP_Wrapper_Belongings_Store_C.BindTakeAll // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void TakeAll(); // Function WBP_Wrapper_Belongings_Store.WBP_Wrapper_Belongings_Store_C.TakeAll // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void SetSlotCategory(); // Function WBP_Wrapper_Belongings_Store.WBP_Wrapper_Belongings_Store_C.SetSlotCategory // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnClick_CloseStore(); // Function WBP_Wrapper_Belongings_Store.WBP_Wrapper_Belongings_Store_C.OnClick_CloseStore // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_WBP_Wrapper_Belongings_Store(int32_t EntryPoint); // Function WBP_Wrapper_Belongings_Store.WBP_Wrapper_Belongings_Store_C.ExecuteUbergraph_WBP_Wrapper_Belongings_Store // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
};

