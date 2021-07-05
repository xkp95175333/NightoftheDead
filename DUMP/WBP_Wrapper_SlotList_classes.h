// WidgetBlueprintGeneratedClass WBP_Wrapper_SlotList.WBP_Wrapper_SlotList_C
// Size: 0x3f8 (Inherited: 0x260)
struct UWBP_Wrapper_SlotList_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWBP_SlotList_C* WBP_SlotList; // 0x268(0x08)
	struct FInventoryItem CraftItem; // 0x270(0xf8)
	struct APlayerHUD* PlayerHUD; // 0x368(0x08)
	struct ULFCraftComponent* CraftComponent; // 0x370(0x08)
	struct UImage* Img_EntityThunbnail; // 0x378(0x08)
	struct UTextBlock* Text_EntityName; // 0x380(0x08)
	struct UTextBlock* Text_EntityAmount; // 0x388(0x08)
	struct UBorder* Bdr_EntityAmount; // 0x390(0x08)
	bool bIsSelected; // 0x398(0x01)
	char pad_399[0x7]; // 0x399(0x07)
	struct FSlateColor EnoughColor; // 0x3a0(0x28)
	struct FSlateColor NotEnoughColor; // 0x3c8(0x28)
	struct ULFInventoryComponent* InventoryComponent; // 0x3f0(0x08)

	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_Wrapper_SlotList.WBP_Wrapper_SlotList_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnLoaded_75EA318D437D95D00697BD87A74E850A(struct UObject* Loaded); // Function WBP_Wrapper_SlotList.WBP_Wrapper_SlotList_C.OnLoaded_75EA318D437D95D00697BD87A74E850A // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void PreConstruct(bool IsDesignTime); // Function WBP_Wrapper_SlotList.WBP_Wrapper_SlotList_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void Construct(); // Function WBP_Wrapper_SlotList.WBP_Wrapper_SlotList_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void AssignSlot(struct FInventoryItem AssignedItem); // Function WBP_Wrapper_SlotList.WBP_Wrapper_SlotList_C.AssignSlot // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void AssignThumbnail(struct UTexture2D* ThumbnailTexture); // Function WBP_Wrapper_SlotList.WBP_Wrapper_SlotList_C.AssignThumbnail // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void AssignName(struct FText EntityName); // Function WBP_Wrapper_SlotList.WBP_Wrapper_SlotList_C.AssignName // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void AssignAmount(int32_t EntityAmount); // Function WBP_Wrapper_SlotList.WBP_Wrapper_SlotList_C.AssignAmount // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_Wrapper_SlotList.WBP_Wrapper_SlotList_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1395fe0
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function WBP_Wrapper_SlotList.WBP_Wrapper_SlotList_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1395fe0
	void OnSelectThis(); // Function WBP_Wrapper_SlotList.WBP_Wrapper_SlotList_C.OnSelectThis // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnSelectOther(); // Function WBP_Wrapper_SlotList.WBP_Wrapper_SlotList_C.OnSelectOther // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnMaterialEnough(); // Function WBP_Wrapper_SlotList.WBP_Wrapper_SlotList_C.OnMaterialEnough // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnMaterialNotEnough(); // Function WBP_Wrapper_SlotList.WBP_Wrapper_SlotList_C.OnMaterialNotEnough // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_WBP_Wrapper_SlotList(int32_t EntryPoint); // Function WBP_Wrapper_SlotList.WBP_Wrapper_SlotList_C.ExecuteUbergraph_WBP_Wrapper_SlotList // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
};

