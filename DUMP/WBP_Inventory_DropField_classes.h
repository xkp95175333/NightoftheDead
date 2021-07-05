// WidgetBlueprintGeneratedClass WBP_Inventory_DropField.WBP_Inventory_DropField_C
// Size: 0x284 (Inherited: 0x260)
struct UWBP_Inventory_DropField_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UBackgroundBlur* BackgroundBlur_326; // 0x268(0x08)
	struct ULFInventoryComponent* InventoryComponent; // 0x270(0x08)
	struct ALFCharacterPlayer* PlayerCharacter; // 0x278(0x08)
	float BlurStrength; // 0x280(0x04)

	bool OnDrop(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function WBP_Inventory_DropField.WBP_Inventory_DropField_C.OnDrop // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void PreConstruct(bool IsDesignTime); // Function WBP_Inventory_DropField.WBP_Inventory_DropField_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void Construct(); // Function WBP_Inventory_DropField.WBP_Inventory_DropField_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_WBP_Inventory_DropField(int32_t EntryPoint); // Function WBP_Inventory_DropField.WBP_Inventory_DropField_C.ExecuteUbergraph_WBP_Inventory_DropField // (Final|UbergraphFunction) // @ game+0x1395fe0
};

