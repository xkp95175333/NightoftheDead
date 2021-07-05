// WidgetBlueprintGeneratedClass WBP_Scene_BuildMenu.WBP_Scene_BuildMenu_C
// Size: 0x428 (Inherited: 0x268)
struct UWBP_Scene_BuildMenu_C : UBuildingWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UScrollBox* CategoryItemScroll; // 0x270(0x08)
	struct UHorizontalBox* HorizontalBox_BuildItems; // 0x278(0x08)
	struct UImage* Image_Bg; // 0x280(0x08)
	struct USizeBox* SizeBox_Third; // 0x288(0x08)
	struct UTextBlock* TextBlock_Category; // 0x290(0x08)
	struct UVerticalBox* VerticalBox_Category; // 0x298(0x08)
	struct UWBP_BuildSlot_C* WBP_BuildSlot; // 0x2a0(0x08)
	struct UWBP_BuildSlot_C* WBP_BuildSlot_2; // 0x2a8(0x08)
	struct UWBP_BuildSlot_C* WBP_BuildSlot_3; // 0x2b0(0x08)
	struct UWBP_BuildSlot_C* WBP_BuildSlot_4; // 0x2b8(0x08)
	struct UWBP_BuildSlot_C* WBP_BuildSlot_5; // 0x2c0(0x08)
	struct UWBP_BuildSlot_C* WBP_BuildSlot_6; // 0x2c8(0x08)
	struct UWBP_BuildSlot_C* WBP_BuildSlot_7; // 0x2d0(0x08)
	struct UWBP_BuildTab_First_C* WBP_BuildTab_Electricity; // 0x2d8(0x08)
	struct UWBP_BuildTab_Second_C* WBP_BuildTab_Electricity_Battery; // 0x2e0(0x08)
	struct UWBP_BuildTab_Second_C* WBP_BuildTab_Electricity_Control; // 0x2e8(0x08)
	struct UWBP_BuildTab_Second_C* WBP_BuildTab_Electricity_Generator; // 0x2f0(0x08)
	struct UWBP_BuildTab_Second_C* WBP_BuildTab_Electricity_Switch; // 0x2f8(0x08)
	struct UWBP_BuildTab_First_C* WBP_BuildTab_Furniture; // 0x300(0x08)
	struct UWBP_BuildTab_Second_C* WBP_BuildTab_Furniture_Decoration; // 0x308(0x08)
	struct UWBP_BuildTab_Second_C* WBP_BuildTab_Furniture_Fire; // 0x310(0x08)
	struct UWBP_BuildTab_Second_C* WBP_BuildTab_Furniture_Interior; // 0x318(0x08)
	struct UWBP_BuildTab_Second_C* WBP_BuildTab_Furniture_Utility; // 0x320(0x08)
	struct UWBP_BuildTab_First_C* WBP_BuildTab_Module; // 0x328(0x08)
	struct UWBP_BuildTab_Second_C* WBP_BuildTab_Module_Fence; // 0x330(0x08)
	struct UWBP_BuildTab_Second_C* WBP_BuildTab_Module_Floor; // 0x338(0x08)
	struct UWBP_BuildTab_Second_C* WBP_BuildTab_Module_Stair; // 0x340(0x08)
	struct UWBP_BuildTab_Second_C* WBP_BuildTab_Module_Wall; // 0x348(0x08)
	struct UWBP_BuildTab_Second_C* WBP_BuildTab_None; // 0x350(0x08)
	struct UWBP_BuildTab_First_C* WBP_BuildTab_Trap; // 0x358(0x08)
	struct UWBP_BuildTab_Second_C* WBP_BuildTab_Trap_Animal; // 0x360(0x08)
	struct UWBP_BuildTab_Second_C* WBP_BuildTab_Trap_Melee; // 0x368(0x08)
	struct UWBP_BuildTab_Second_C* WBP_BuildTab_Trap_Range; // 0x370(0x08)
	struct UWBP_BuildTab_Second_C* WBP_BuildTab_Trap_Special; // 0x378(0x08)
	struct UWBP_BuildTab_First_C* WBP_BuildTab_Workbench; // 0x380(0x08)
	struct UWBP_BuildTab_Second_C* WBP_BuildTab_Workbench_Craft; // 0x388(0x08)
	struct UWBP_BuildTab_Second_C* WBP_BuildTab_Workbench_Equipment; // 0x390(0x08)
	struct UWBP_BuildTab_Second_C* WBP_BuildTab_Workbench_Food; // 0x398(0x08)
	struct UWBP_BuildTab_Second_C* WBP_BuildTab_Workbench_Material; // 0x3a0(0x08)
	struct UWBP_BuildWindow_C* WBP_BuildWindow; // 0x3a8(0x08)
	struct UWBP_Building_Crosshair_C* Widget_Building_Crosshair; // 0x3b0(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_Category; // 0x3b8(0x08)
	struct TArray<struct UWBP_Building_ItemSlot_C*> Widget_Building_ItemSlots; // 0x3c0(0x10)
	int32_t MaterialSlotCount; // 0x3d0(0x04)
	int32_t MaterialSlotPerRow; // 0x3d4(0x04)
	struct TMap<enum class EBuildingCategory, int32_t> CategoryIndices; // 0x3d8(0x50)

	void SetSmallCategoryWithFallback(int32_t Index, enum class EBuildingCategory FallbackCategory); // Function WBP_Scene_BuildMenu.WBP_Scene_BuildMenu_C.SetSmallCategoryWithFallback // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void GetSmallCategoryWidgets(struct TArray<struct UWBP_BuildTab_Second_C*> Widgets); // Function WBP_Scene_BuildMenu.WBP_Scene_BuildMenu_C.GetSmallCategoryWidgets // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void SelectLargeCategory(int32_t Index); // Function WBP_Scene_BuildMenu.WBP_Scene_BuildMenu_C.SelectLargeCategory // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void GetBuildingComponent(struct ULFBuildingComponent* BuildingComponent); // Function WBP_Scene_BuildMenu.WBP_Scene_BuildMenu_C.GetBuildingComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	void Construct(); // Function WBP_Scene_BuildMenu.WBP_Scene_BuildMenu_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void OnCategorySelected_Module(); // Function WBP_Scene_BuildMenu.WBP_Scene_BuildMenu_C.OnCategorySelected_Module // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnCategorySelected_Workbench(); // Function WBP_Scene_BuildMenu.WBP_Scene_BuildMenu_C.OnCategorySelected_Workbench // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnCategorySelected_Furniture(); // Function WBP_Scene_BuildMenu.WBP_Scene_BuildMenu_C.OnCategorySelected_Furniture // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnCategorySelected_Trap(); // Function WBP_Scene_BuildMenu.WBP_Scene_BuildMenu_C.OnCategorySelected_Trap // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ClearCategorySlots(); // Function WBP_Scene_BuildMenu.WBP_Scene_BuildMenu_C.ClearCategorySlots // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void AssignCategoryItem(struct TArray<struct FBuildingDataParsed> CategoryItems); // Function WBP_Scene_BuildMenu.WBP_Scene_BuildMenu_C.AssignCategoryItem // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1395fe0
	void AssignBuildingItem(struct FBuildingDataParsed Building); // Function WBP_Scene_BuildMenu.WBP_Scene_BuildMenu_C.AssignBuildingItem // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1395fe0
	void OnClicked_Event_1(); // Function WBP_Scene_BuildMenu.WBP_Scene_BuildMenu_C.OnClicked_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnCanceled(); // Function WBP_Scene_BuildMenu.WBP_Scene_BuildMenu_C.OnCanceled // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void OnCategoryInitialized(); // Function WBP_Scene_BuildMenu.WBP_Scene_BuildMenu_C.OnCategoryInitialized // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnCategorySet(enum class EBuildingCategory Category); // Function WBP_Scene_BuildMenu.WBP_Scene_BuildMenu_C.OnCategorySet // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnCategorySelected_Electricity(); // Function WBP_Scene_BuildMenu.WBP_Scene_BuildMenu_C.OnCategorySelected_Electricity // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_WBP_Scene_BuildMenu(int32_t EntryPoint); // Function WBP_Scene_BuildMenu.WBP_Scene_BuildMenu_C.ExecuteUbergraph_WBP_Scene_BuildMenu // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
};

