// WidgetBlueprintGeneratedClass WBP_Wrapper_SlotSmall_Material.WBP_Wrapper_SlotSmall_Material_C
// Size: 0x390 (Inherited: 0x260)
struct UWBP_Wrapper_SlotSmall_Material_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UBorder* Border_Enough; // 0x268(0x08)
	struct UWBP_SlotSmall_C* WBP_SlotSmall; // 0x270(0x08)
	struct APlayerHUD* PlayerHUD; // 0x278(0x08)
	struct ULFCraftComponent* CraftComponent; // 0x280(0x08)
	bool bIsKey; // 0x288(0x01)
	char pad_289[0x7]; // 0x289(0x07)
	struct FEntityData SlotItem; // 0x290(0xe0)
	struct UImage* Img_EntityThunbnail; // 0x370(0x08)
	struct UTextBlock* Text_EntityAmount; // 0x378(0x08)
	struct UBorder* Bdr_EntityAmount; // 0x380(0x08)
	struct ULFInventoryComponent* InventoryComponent; // 0x388(0x08)

	void GetCraftComponent(struct ULFCraftComponent* CraftComponent); // Function WBP_Wrapper_SlotSmall_Material.WBP_Wrapper_SlotSmall_Material_C.GetCraftComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	void OnLoaded_99AA4DDA4F3D44238EA5178AAE7FF620(struct UObject* Loaded); // Function WBP_Wrapper_SlotSmall_Material.WBP_Wrapper_SlotSmall_Material_C.OnLoaded_99AA4DDA4F3D44238EA5178AAE7FF620 // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnLoaded_C5F8FC1C440E110FE9238E980C361194(struct UObject* Loaded); // Function WBP_Wrapper_SlotSmall_Material.WBP_Wrapper_SlotSmall_Material_C.OnLoaded_C5F8FC1C440E110FE9238E980C361194 // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void PreConstruct(bool IsDesignTime); // Function WBP_Wrapper_SlotSmall_Material.WBP_Wrapper_SlotSmall_Material_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void Construct(); // Function WBP_Wrapper_SlotSmall_Material.WBP_Wrapper_SlotSmall_Material_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void AssignMaterialToSlot(struct FInventoryItem AssignedItem); // Function WBP_Wrapper_SlotSmall_Material.WBP_Wrapper_SlotSmall_Material_C.AssignMaterialToSlot // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void AssignThumbnail(struct UTexture2D* ThumbnailTexture); // Function WBP_Wrapper_SlotSmall_Material.WBP_Wrapper_SlotSmall_Material_C.AssignThumbnail // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void AssignAmount(int32_t EntityAmount); // Function WBP_Wrapper_SlotSmall_Material.WBP_Wrapper_SlotSmall_Material_C.AssignAmount // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_Wrapper_SlotSmall_Material.WBP_Wrapper_SlotSmall_Material_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1395fe0
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function WBP_Wrapper_SlotSmall_Material.WBP_Wrapper_SlotSmall_Material_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1395fe0
	void AssignKeyToSlot(struct FEntityData Key); // Function WBP_Wrapper_SlotSmall_Material.WBP_Wrapper_SlotSmall_Material_C.AssignKeyToSlot // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnEnoughMaterial(); // Function WBP_Wrapper_SlotSmall_Material.WBP_Wrapper_SlotSmall_Material_C.OnEnoughMaterial // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnNotEnoughMaterial(); // Function WBP_Wrapper_SlotSmall_Material.WBP_Wrapper_SlotSmall_Material_C.OnNotEnoughMaterial // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void AssignGetAmount(int32_t EntityAmount); // Function WBP_Wrapper_SlotSmall_Material.WBP_Wrapper_SlotSmall_Material_C.AssignGetAmount // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_WBP_Wrapper_SlotSmall_Material(int32_t EntryPoint); // Function WBP_Wrapper_SlotSmall_Material.WBP_Wrapper_SlotSmall_Material_C.ExecuteUbergraph_WBP_Wrapper_SlotSmall_Material // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
};

