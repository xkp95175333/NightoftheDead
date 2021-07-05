// WidgetBlueprintGeneratedClass WBP_Wrapper_Equipment.WBP_Wrapper_Equipment_C
// Size: 0x2d8 (Inherited: 0x260)
struct UWBP_Wrapper_Equipment_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWBP_Equipment_C* WBP_Equipment; // 0x268(0x08)
	struct USlotWidget* EquipSlotWeapon; // 0x270(0x08)
	struct USlotWidget* EquipSlotSubWeapon; // 0x278(0x08)
	struct USlotWidget* EquipSlotOuter; // 0x280(0x08)
	struct USlotWidget* EquipSlotUpper; // 0x288(0x08)
	struct USlotWidget* EquipSlotLower; // 0x290(0x08)
	struct USlotWidget* EquipSlotFoot; // 0x298(0x08)
	struct USlotWidget* EquipSlotAmmo; // 0x2a0(0x08)
	struct USlotWidget* EquipSlotBagFood; // 0x2a8(0x08)
	struct USlotWidget* EquipSlotBagAmmo; // 0x2b0(0x08)
	struct USlotWidget* EquipSlotBagMisc; // 0x2b8(0x08)
	struct ULFInventoryComponent* InventoryComponent; // 0x2c0(0x08)
	struct ULFCharacterEquipmentComponent* EquipmentComponent; // 0x2c8(0x08)
	struct UWBP_Wrapper_Confirmation_Generic_C* Confirm_Suicide; // 0x2d0(0x08)

	void PreConstruct(bool IsDesignTime); // Function WBP_Wrapper_Equipment.WBP_Wrapper_Equipment_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void Construct(); // Function WBP_Wrapper_Equipment.WBP_Wrapper_Equipment_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void AssignEquipmentToSlot(enum class EEquipmentSlot Slot, struct FInventoryItem Item); // Function WBP_Wrapper_Equipment.WBP_Wrapper_Equipment_C.AssignEquipmentToSlot // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnClicked_Event_1(); // Function WBP_Wrapper_Equipment.WBP_Wrapper_Equipment_C.OnClicked_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnCancel_Event_1(); // Function WBP_Wrapper_Equipment.WBP_Wrapper_Equipment_C.OnCancel_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnSubmit_Event_1(); // Function WBP_Wrapper_Equipment.WBP_Wrapper_Equipment_C.OnSubmit_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_WBP_Wrapper_Equipment(int32_t EntryPoint); // Function WBP_Wrapper_Equipment.WBP_Wrapper_Equipment_C.ExecuteUbergraph_WBP_Wrapper_Equipment // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
};

