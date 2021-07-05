// WidgetBlueprintGeneratedClass WBP_Core_Inventory.WBP_Core_Inventory_C
// Size: 0x2c8 (Inherited: 0x278)
struct UWBP_Core_Inventory_C : UInventoryWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x278(0x08)
	struct UWBP_Scene_Inventory_C* WBP_Scene_Inventory; // 0x280(0x08)
	struct UWBP_Wrapper_Belongings_C* BelongingsWidget; // 0x288(0x08)
	struct UWBP_Wrapper_Equipment_C* EquipmentWidget; // 0x290(0x08)
	struct UWBP_Wrapper_WorkBench_C* CraftingWidget; // 0x298(0x08)
	struct UWBP_Inventory_DropField_C* DropFieldWidget; // 0x2a0(0x08)
	struct UWBP_Wrapper_Belongings_Store_C* StoreWidget; // 0x2a8(0x08)
	struct TArray<struct UWBP_Wrapper_Quickslot_C*> Quickslots; // 0x2b0(0x10)
	int32_t BelongingSlotAmount; // 0x2c0(0x04)
	int32_t StoreSlotAmount; // 0x2c4(0x04)

	void PreConstruct(bool IsDesignTime); // Function WBP_Core_Inventory.WBP_Core_Inventory_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void Construct(); // Function WBP_Core_Inventory.WBP_Core_Inventory_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void SetSlotAmount(int32_t Amount); // Function WBP_Core_Inventory.WBP_Core_Inventory_C.SetSlotAmount // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void AssignItemToSlot(struct FInventoryItem OwningItems, int32_t SlotIndex); // Function WBP_Core_Inventory.WBP_Core_Inventory_C.AssignItemToSlot // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ClearCraftSlot(); // Function WBP_Core_Inventory.WBP_Core_Inventory_C.ClearCraftSlot // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void AssignCraftCategoryItem(struct TArray<struct FInventoryItem> CraftedItems); // Function WBP_Core_Inventory.WBP_Core_Inventory_C.AssignCraftCategoryItem // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnSelectCategoryItem(struct FInventoryItem SelectedItem); // Function WBP_Core_Inventory.WBP_Core_Inventory_C.OnSelectCategoryItem // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void AssignKeyItem(struct TArray<struct FEntityData> KeyItems); // Function WBP_Core_Inventory.WBP_Core_Inventory_C.AssignKeyItem // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void AssignMaterialItem(struct TArray<struct FInventoryItem> Material); // Function WBP_Core_Inventory.WBP_Core_Inventory_C.AssignMaterialItem // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ClearMaterialSlot(); // Function WBP_Core_Inventory.WBP_Core_Inventory_C.ClearMaterialSlot // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void AssignEquipmentItem(enum class EEquipmentSlot InEquipmentSlot, struct FInventoryItem Item); // Function WBP_Core_Inventory.WBP_Core_Inventory_C.AssignEquipmentItem // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnHideInventory(); // Function WBP_Core_Inventory.WBP_Core_Inventory_C.OnHideInventory // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnShowInventory(); // Function WBP_Core_Inventory.WBP_Core_Inventory_C.OnShowInventory // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ShowQuickSlots(); // Function WBP_Core_Inventory.WBP_Core_Inventory_C.ShowQuickSlots // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void RefreshQuickSlots(); // Function WBP_Core_Inventory.WBP_Core_Inventory_C.RefreshQuickSlots // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void HideQuickSlots(); // Function WBP_Core_Inventory.WBP_Core_Inventory_C.HideQuickSlots // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void DeactivateSceneCapture(); // Function WBP_Core_Inventory.WBP_Core_Inventory_C.DeactivateSceneCapture // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ActivateSceneCapture(); // Function WBP_Core_Inventory.WBP_Core_Inventory_C.ActivateSceneCapture // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ShowCraftMenu(); // Function WBP_Core_Inventory.WBP_Core_Inventory_C.ShowCraftMenu // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void HideCraftMenu(); // Function WBP_Core_Inventory.WBP_Core_Inventory_C.HideCraftMenu // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void SetCraftName(struct FText Text); // Function WBP_Core_Inventory.WBP_Core_Inventory_C.SetCraftName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnHideStoreInventory(); // Function WBP_Core_Inventory.WBP_Core_Inventory_C.OnHideStoreInventory // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnShowStoreInventory(int32_t SlotAmount); // Function WBP_Core_Inventory.WBP_Core_Inventory_C.OnShowStoreInventory // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void SetStoreSlotAmount(int32_t Amount); // Function WBP_Core_Inventory.WBP_Core_Inventory_C.SetStoreSlotAmount // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void AssignStoreItemToSlot(struct FInventoryItem OwningItems, int32_t SlotIndex); // Function WBP_Core_Inventory.WBP_Core_Inventory_C.AssignStoreItemToSlot // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnSetStoreProperty(struct FText Name); // Function WBP_Core_Inventory.WBP_Core_Inventory_C.OnSetStoreProperty // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ShowAmountBox(); // Function WBP_Core_Inventory.WBP_Core_Inventory_C.ShowAmountBox // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void HideAmountBox(); // Function WBP_Core_Inventory.WBP_Core_Inventory_C.HideAmountBox // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void SetCraftIterAmount(int32_t Amount); // Function WBP_Core_Inventory.WBP_Core_Inventory_C.SetCraftIterAmount // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void CreateSlots(); // Function WBP_Core_Inventory.WBP_Core_Inventory_C.CreateSlots // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnUseQuickSlot(int32_t Index); // Function WBP_Core_Inventory.WBP_Core_Inventory_C.OnUseQuickSlot // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_WBP_Core_Inventory(int32_t EntryPoint); // Function WBP_Core_Inventory.WBP_Core_Inventory_C.ExecuteUbergraph_WBP_Core_Inventory // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
};

