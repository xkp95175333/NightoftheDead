// WidgetBlueprintGeneratedClass Widget_BuildingUpgrade.Widget_BuildingUpgrade_C
// Size: 0x2f8 (Inherited: 0x268)
struct UWidget_BuildingUpgrade_C : UBuildingUpgradeWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWBP_BtnPanel_Upgrade_C* BtnPanel_Cancel; // 0x270(0x08)
	struct UWBP_BtnPanel_Upgrade_C* BtnPanel_Upgrade; // 0x278(0x08)
	struct UImage* Image; // 0x280(0x08)
	struct UImage* Image_217; // 0x288(0x08)
	struct UTextBlock* TextBlock_BuildingName; // 0x290(0x08)
	struct UTextBlock* TextBlock_Desc; // 0x298(0x08)
	struct UTextBlock* TextBlock_Name_2; // 0x2a0(0x08)
	struct UUniformGridPanel* UniformGridPanel_MaterialList; // 0x2a8(0x08)
	struct UWBP_ElectricInfo_C* WBP_ElectricInfo; // 0x2b0(0x08)
	struct UWBP_Wrapper_SlotSmall_Material_C* WBP_Wrapper_SlotSmall_CraftMaterial; // 0x2b8(0x08)
	struct UWBP_Wrapper_SlotSmall_Material_C* WBP_Wrapper_SlotSmall_CraftMaterial_297; // 0x2c0(0x08)
	int32_t MaterialCount; // 0x2c8(0x04)
	char pad_2CC[0x4]; // 0x2cc(0x04)
	struct TArray<struct FEntityData> KeyItems; // 0x2d0(0x10)
	int32_t MaterialPerRow; // 0x2e0(0x04)
	char pad_2E4[0x4]; // 0x2e4(0x04)
	struct TArray<struct FInventoryItem> MaterialItems; // 0x2e8(0x10)

	void PreConstruct(bool IsDesignTime); // Function Widget_BuildingUpgrade.Widget_BuildingUpgrade_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void Construct(); // Function Widget_BuildingUpgrade.Widget_BuildingUpgrade_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void SetUpgradeData(struct FBuildingUpgradeDataParsed UpgradeData); // Function Widget_BuildingUpgrade.Widget_BuildingUpgrade_C.SetUpgradeData // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1395fe0
	void ClearMaterials(); // Function Widget_BuildingUpgrade.Widget_BuildingUpgrade_C.ClearMaterials // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void AssignKeyItems(struct TArray<struct FEntityData> KeyItems); // Function Widget_BuildingUpgrade.Widget_BuildingUpgrade_C.AssignKeyItems // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void AssignMaterials(struct TArray<struct FInventoryItem> Materials); // Function Widget_BuildingUpgrade.Widget_BuildingUpgrade_C.AssignMaterials // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnClickUpgrade(); // Function Widget_BuildingUpgrade.Widget_BuildingUpgrade_C.OnClickUpgrade // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnClickCancel(); // Function Widget_BuildingUpgrade.Widget_BuildingUpgrade_C.OnClickCancel // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_Widget_BuildingUpgrade(int32_t EntryPoint); // Function Widget_BuildingUpgrade.Widget_BuildingUpgrade_C.ExecuteUbergraph_Widget_BuildingUpgrade // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
};

