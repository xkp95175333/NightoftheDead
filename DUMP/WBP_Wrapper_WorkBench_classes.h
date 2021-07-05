// WidgetBlueprintGeneratedClass WBP_Wrapper_WorkBench.WBP_Wrapper_WorkBench_C
// Size: 0x2f8 (Inherited: 0x260)
struct UWBP_Wrapper_WorkBench_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWBP_WorkBench_C* WBP_WorkBench; // 0x268(0x08)
	struct ULFCraftComponent* CraftComponent; // 0x270(0x08)
	struct TArray<struct UWBP_Wrapper_SlotList_C*> CraftItems; // 0x278(0x10)
	struct UUniformGridPanel* CraftList; // 0x288(0x08)
	struct UUniformGridPanel* MaterialList; // 0x290(0x08)
	struct TArray<struct FEntityData> KeyItems; // 0x298(0x10)
	struct TArray<struct FInventoryItem> MaterialItems; // 0x2a8(0x10)
	int32_t ItemPerRow; // 0x2b8(0x04)
	int32_t ItemCount; // 0x2bc(0x04)
	int32_t MaterialCount; // 0x2c0(0x04)
	int32_t MaterialPerRow; // 0x2c4(0x04)
	struct UWBP_TabCategory_C* Category_2; // 0x2c8(0x08)
	struct UWBP_TabCategory_C* Category_3; // 0x2d0(0x08)
	struct UWBP_TabCategory_C* Category_4; // 0x2d8(0x08)
	struct UWBP_TabCategory_C* Category_5; // 0x2e0(0x08)
	struct FLinearColor DisassembleColor; // 0x2e8(0x10)

	void OnCategoryButtonClicked(enum class ECraftCategory Category); // Function WBP_Wrapper_WorkBench.WBP_Wrapper_WorkBench_C.OnCategoryButtonClicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnCraftButtonClicked(); // Function WBP_Wrapper_WorkBench.WBP_Wrapper_WorkBench_C.OnCraftButtonClicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void PreConstruct(bool IsDesignTime); // Function WBP_Wrapper_WorkBench.WBP_Wrapper_WorkBench_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void Construct(); // Function WBP_Wrapper_WorkBench.WBP_Wrapper_WorkBench_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void ClearCategorySlots(); // Function WBP_Wrapper_WorkBench.WBP_Wrapper_WorkBench_C.ClearCategorySlots // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnSelectCategoryItem(struct FInventoryItem SelectedItem); // Function WBP_Wrapper_WorkBench.WBP_Wrapper_WorkBench_C.OnSelectCategoryItem // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ClearMaterials(); // Function WBP_Wrapper_WorkBench.WBP_Wrapper_WorkBench_C.ClearMaterials // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void AssignKeyItems(struct TArray<struct FEntityData> KeyItems); // Function WBP_Wrapper_WorkBench.WBP_Wrapper_WorkBench_C.AssignKeyItems // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void AssignMaterials(struct TArray<struct FInventoryItem> Materials); // Function WBP_Wrapper_WorkBench.WBP_Wrapper_WorkBench_C.AssignMaterials // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnCraftClicked(); // Function WBP_Wrapper_WorkBench.WBP_Wrapper_WorkBench_C.OnCraftClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnClicked_Category_2(); // Function WBP_Wrapper_WorkBench.WBP_Wrapper_WorkBench_C.OnClicked_Category_2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnClicked_Category_3(); // Function WBP_Wrapper_WorkBench.WBP_Wrapper_WorkBench_C.OnClicked_Category_3 // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnClicked_Category_4(); // Function WBP_Wrapper_WorkBench.WBP_Wrapper_WorkBench_C.OnClicked_Category_4 // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnClicked_Category_5(); // Function WBP_Wrapper_WorkBench.WBP_Wrapper_WorkBench_C.OnClicked_Category_5 // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void AssignCategorySlots(struct TArray<struct FInventoryItem> CraftItems); // Function WBP_Wrapper_WorkBench.WBP_Wrapper_WorkBench_C.AssignCategorySlots // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void SetCraftName(struct FText Name); // Function WBP_Wrapper_WorkBench.WBP_Wrapper_WorkBench_C.SetCraftName // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnCraftCategoryChanged(); // Function WBP_Wrapper_WorkBench.WBP_Wrapper_WorkBench_C.OnCraftCategoryChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnCraftCategoryCleared(); // Function WBP_Wrapper_WorkBench.WBP_Wrapper_WorkBench_C.OnCraftCategoryCleared // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnShowAmountBox(); // Function WBP_Wrapper_WorkBench.WBP_Wrapper_WorkBench_C.OnShowAmountBox // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnHideAmountBox(); // Function WBP_Wrapper_WorkBench.WBP_Wrapper_WorkBench_C.OnHideAmountBox // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void SetCraftIter(int32_t Iter); // Function WBP_Wrapper_WorkBench.WBP_Wrapper_WorkBench_C.SetCraftIter // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnIncrement(); // Function WBP_Wrapper_WorkBench.WBP_Wrapper_WorkBench_C.OnIncrement // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnIncrement10(); // Function WBP_Wrapper_WorkBench.WBP_Wrapper_WorkBench_C.OnIncrement10 // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnDecrement(); // Function WBP_Wrapper_WorkBench.WBP_Wrapper_WorkBench_C.OnDecrement // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnDecrement10(); // Function WBP_Wrapper_WorkBench.WBP_Wrapper_WorkBench_C.OnDecrement10 // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_WBP_Wrapper_WorkBench(int32_t EntryPoint); // Function WBP_Wrapper_WorkBench.WBP_Wrapper_WorkBench_C.ExecuteUbergraph_WBP_Wrapper_WorkBench // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
};

