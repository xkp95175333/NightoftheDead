// WidgetBlueprintGeneratedClass WBP_Building_ItemSlot.WBP_Building_ItemSlot_C
// Size: 0x3d8 (Inherited: 0x260)
struct UWBP_Building_ItemSlot_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWBP_BuildSlot_C* WBP_BuildSlot; // 0x268(0x08)
	struct FBuildingDataParsed CurrentItem; // 0x270(0x168)

	void IsEqual(struct FBuildingDataParsed rhs, bool bIsEqual); // Function WBP_Building_ItemSlot.WBP_Building_ItemSlot_C.IsEqual // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	void OnLoaded_4BA18F3C4C9E0DB3CC46B6800E991C15(struct UObject* Loaded); // Function WBP_Building_ItemSlot.WBP_Building_ItemSlot_C.OnLoaded_4BA18F3C4C9E0DB3CC46B6800E991C15 // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void AssignItem(struct FBuildingDataParsed data); // Function WBP_Building_ItemSlot.WBP_Building_ItemSlot_C.AssignItem // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Construct(); // Function WBP_Building_ItemSlot.WBP_Building_ItemSlot_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void CheckCurrentSelected(struct FBuildingDataParsed CurrentBuilding); // Function WBP_Building_ItemSlot.WBP_Building_ItemSlot_C.CheckCurrentSelected // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnClicked_Event_1(); // Function WBP_Building_ItemSlot.WBP_Building_ItemSlot_C.OnClicked_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_WBP_Building_ItemSlot(int32_t EntryPoint); // Function WBP_Building_ItemSlot.WBP_Building_ItemSlot_C.ExecuteUbergraph_WBP_Building_ItemSlot // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
};

