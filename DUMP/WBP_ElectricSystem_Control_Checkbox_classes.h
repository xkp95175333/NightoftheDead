// WidgetBlueprintGeneratedClass WBP_ElectricSystem_Control_Checkbox.WBP_ElectricSystem_Control_Checkbox_C
// Size: 0x2f0 (Inherited: 0x260)
struct UWBP_ElectricSystem_Control_Checkbox_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UButton* Button_1; // 0x268(0x08)
	struct UImage* Image_Check; // 0x270(0x08)
	struct UImage* Image_Check_Bg; // 0x278(0x08)
	struct UCollapsibleTextBlock* Text_Title; // 0x280(0x08)
	struct FText Text; // 0x288(0x18)
	struct FSlateColor ActiveFontColor; // 0x2a0(0x28)
	struct FSlateColor InactiveFontColor; // 0x2c8(0x28)

	void PreConstruct(bool IsDesignTime); // Function WBP_ElectricSystem_Control_Checkbox.WBP_ElectricSystem_Control_Checkbox_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void SetActive(bool bIsActive); // Function WBP_ElectricSystem_Control_Checkbox.WBP_ElectricSystem_Control_Checkbox_C.SetActive // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_WBP_ElectricSystem_Control_Checkbox(int32_t EntryPoint); // Function WBP_ElectricSystem_Control_Checkbox.WBP_ElectricSystem_Control_Checkbox_C.ExecuteUbergraph_WBP_ElectricSystem_Control_Checkbox // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
};

