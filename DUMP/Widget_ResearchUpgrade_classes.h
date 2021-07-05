// WidgetBlueprintGeneratedClass Widget_ResearchUpgrade.Widget_ResearchUpgrade_C
// Size: 0x370 (Inherited: 0x2d8)
struct UWidget_ResearchUpgrade_C : UResearchUpgradeWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d8(0x08)
	struct UWBP_BtnPanel_Upgrade_C* Button_Cancel; // 0x2e0(0x08)
	struct UWBP_BtnPanel_Upgrade_C* Button_Upgrade; // 0x2e8(0x08)
	struct UImage* Image_217; // 0x2f0(0x08)
	struct UImage* Image_237; // 0x2f8(0x08)
	struct UTextBlock* TextBlock_Name; // 0x300(0x08)
	struct UTextBlock* TextBlock_Name_2; // 0x308(0x08)
	struct UUniformGridPanel* UniformGridPanel_MaterialList; // 0x310(0x08)
	struct UUniformGridPanel* UniformGridPanel_OutputList; // 0x318(0x08)
	struct UWBP_Wrapper_SlotSmall_C* WBP_Wrapper_SlotSmall; // 0x320(0x08)
	struct UWBP_Wrapper_SlotSmall_C* WBP_Wrapper_SlotSmall_2; // 0x328(0x08)
	struct UWBP_Wrapper_SlotSmall_Material_C* WBP_Wrapper_SlotSmall_Material; // 0x330(0x08)
	struct UWBP_Wrapper_SlotSmall_Material_C* WBP_Wrapper_SlotSmall_Material_2; // 0x338(0x08)
	int32_t MaterialCount; // 0x340(0x04)
	int32_t MaterialPerRow; // 0x344(0x04)
	struct TArray<struct FInventoryItem> MaterialItems; // 0x348(0x10)
	struct TArray<struct FInventoryItem> ResearchOutputs; // 0x358(0x10)
	int32_t OutputCount; // 0x368(0x04)
	int32_t OutputPerRow; // 0x36c(0x04)

	void PreConstruct(bool IsDesignTime); // Function Widget_ResearchUpgrade.Widget_ResearchUpgrade_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void Construct(); // Function Widget_ResearchUpgrade.Widget_ResearchUpgrade_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void ClearMaterials(); // Function Widget_ResearchUpgrade.Widget_ResearchUpgrade_C.ClearMaterials // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void AssignMaterials(struct TArray<struct FInventoryItem> Materials); // Function Widget_ResearchUpgrade.Widget_ResearchUpgrade_C.AssignMaterials // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnClickResearch(); // Function Widget_ResearchUpgrade.Widget_ResearchUpgrade_C.OnClickResearch // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnClickCancel(); // Function Widget_ResearchUpgrade.Widget_ResearchUpgrade_C.OnClickCancel // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void AssignResearchOutputs(struct TArray<struct FInventoryItem> Materials); // Function Widget_ResearchUpgrade.Widget_ResearchUpgrade_C.AssignResearchOutputs // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnSetResearchData(struct FResearchData ResearchData); // Function Widget_ResearchUpgrade.Widget_ResearchUpgrade_C.OnSetResearchData // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1395fe0
	void ClearResearchOutputs(); // Function Widget_ResearchUpgrade.Widget_ResearchUpgrade_C.ClearResearchOutputs // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_Widget_ResearchUpgrade(int32_t EntryPoint); // Function Widget_ResearchUpgrade.Widget_ResearchUpgrade_C.ExecuteUbergraph_Widget_ResearchUpgrade // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
};

