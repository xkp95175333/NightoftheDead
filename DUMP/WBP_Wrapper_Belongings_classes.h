// WidgetBlueprintGeneratedClass WBP_Wrapper_Belongings.WBP_Wrapper_Belongings_C
// Size: 0x2a8 (Inherited: 0x260)
struct UWBP_Wrapper_Belongings_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct USpacer* Spacer_209; // 0x268(0x08)
	struct UWBP_Invetory_C* WBP_Invetory; // 0x270(0x08)
	struct TArray<struct USlotWidget*> SlotWidgets; // 0x278(0x10)
	struct UUniformGridPanel* InventoryGrid; // 0x288(0x08)
	struct ULFInventoryComponent* InventoryComponent; // 0x290(0x08)
	int32_t ItemPerRow; // 0x298(0x04)
	char pad_29C[0x4]; // 0x29c(0x04)
	struct USlotWidget* SlotWidget; // 0x2a0(0x08)

	void GetBelongingWidget(struct UWBP_Invetory_C* NewParam); // Function WBP_Wrapper_Belongings.WBP_Wrapper_Belongings_C.GetBelongingWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_Wrapper_Belongings.WBP_Wrapper_Belongings_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void PreConstruct(bool IsDesignTime); // Function WBP_Wrapper_Belongings.WBP_Wrapper_Belongings_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void CreateSlots(int32_t SlotAmount, enum class EInventorySlotType SlotType); // Function WBP_Wrapper_Belongings.WBP_Wrapper_Belongings_C.CreateSlots // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void AssignItem(struct FInventoryItem Item, int32_t SlotIndex); // Function WBP_Wrapper_Belongings.WBP_Wrapper_Belongings_C.AssignItem // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Construct(); // Function WBP_Wrapper_Belongings.WBP_Wrapper_Belongings_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void OnAllClicked(); // Function WBP_Wrapper_Belongings.WBP_Wrapper_Belongings_C.OnAllClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnEquipClicked(); // Function WBP_Wrapper_Belongings.WBP_Wrapper_Belongings_C.OnEquipClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnConsumableClicked(); // Function WBP_Wrapper_Belongings.WBP_Wrapper_Belongings_C.OnConsumableClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnMiscClicked(); // Function WBP_Wrapper_Belongings.WBP_Wrapper_Belongings_C.OnMiscClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void SetSlotAmount(int32_t SlotAmount); // Function WBP_Wrapper_Belongings.WBP_Wrapper_Belongings_C.SetSlotAmount // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void CollapseSpacer(); // Function WBP_Wrapper_Belongings.WBP_Wrapper_Belongings_C.CollapseSpacer // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Rename(struct FText Text); // Function WBP_Wrapper_Belongings.WBP_Wrapper_Belongings_C.Rename // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void BindCategories(); // Function WBP_Wrapper_Belongings.WBP_Wrapper_Belongings_C.BindCategories // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void CollapseCategories(); // Function WBP_Wrapper_Belongings.WBP_Wrapper_Belongings_C.CollapseCategories // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_WBP_Wrapper_Belongings(int32_t EntryPoint); // Function WBP_Wrapper_Belongings.WBP_Wrapper_Belongings_C.ExecuteUbergraph_WBP_Wrapper_Belongings // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
};

