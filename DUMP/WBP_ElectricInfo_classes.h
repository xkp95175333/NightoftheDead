// WidgetBlueprintGeneratedClass WBP_ElectricInfo.WBP_ElectricInfo_C
// Size: 0x311 (Inherited: 0x260)
struct UWBP_ElectricInfo_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UHorizontalBox* HorizontalBox_Additional; // 0x268(0x08)
	struct UHorizontalBox* HorizontalBox_Default; // 0x270(0x08)
	struct UWBP_ElectricInfo_Item_C* WBP_BuildWindow_ElectricInfo_Item_Consumption; // 0x278(0x08)
	struct UWBP_ElectricInfo_Item_C* WBP_BuildWindow_ElectricInfo_Item_Generation; // 0x280(0x08)
	struct UWBP_ElectricInfo_Item_C* WBP_BuildWindow_ElectricInfo_Item_Limit; // 0x288(0x08)
	struct UWBP_ElectricInfo_Item_C* WBP_BuildWindow_ElectricInfo_Item_MaxCharge; // 0x290(0x08)
	struct UWBP_ElectricInfo_Item_C* WBP_BuildWindow_ElectricInfo_Item_MaxChargeRate; // 0x298(0x08)
	struct UWBP_ElectricInfo_Item_C* WBP_BuildWindow_ElectricInfo_Item_Standby; // 0x2a0(0x08)
	struct FLinearColor Color; // 0x2a8(0x10)
	struct FSlateFontInfo Font; // 0x2b8(0x58)
	enum class EHorizontalAlignment Align; // 0x310(0x01)

	void SetElectricData(struct FElectricData ElectricData); // Function WBP_ElectricInfo.WBP_ElectricInfo_C.SetElectricData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void PreConstruct(bool IsDesignTime); // Function WBP_ElectricInfo.WBP_ElectricInfo_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void Construct(); // Function WBP_ElectricInfo.WBP_ElectricInfo_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_WBP_ElectricInfo(int32_t EntryPoint); // Function WBP_ElectricInfo.WBP_ElectricInfo_C.ExecuteUbergraph_WBP_ElectricInfo // (Final|UbergraphFunction) // @ game+0x1395fe0
};

