// WidgetBlueprintGeneratedClass WBP_Equipment.WBP_Equipment_C
// Size: 0x2f0 (Inherited: 0x260)
struct UWBP_Equipment_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* Image_117; // 0x268(0x08)
	struct UImage* Image_237; // 0x270(0x08)
	struct UScaleBox* ScaleBox_144; // 0x278(0x08)
	struct UTextBlock* TextBlock_193; // 0x280(0x08)
	struct UTextBlock* TextBlock_Cloth; // 0x288(0x08)
	struct UWBP_ImageButton_C* WBP_ImageButton_Suicide; // 0x290(0x08)
	struct UWBP_PreviewChar_C* WBP_PreviewChar; // 0x298(0x08)
	struct UWBP_Wrapper_SlotLarge_C* WBP_Wrapper_SlotLarge_Ammo; // 0x2a0(0x08)
	struct UWBP_Wrapper_SlotLarge_C* WBP_Wrapper_SlotLarge_BagAmmo; // 0x2a8(0x08)
	struct UWBP_Wrapper_SlotLarge_C* WBP_Wrapper_SlotLarge_BagFood; // 0x2b0(0x08)
	struct UWBP_Wrapper_SlotLarge_C* WBP_Wrapper_SlotLarge_BagMisc; // 0x2b8(0x08)
	struct UWBP_Wrapper_SlotLarge_C* WBP_Wrapper_SlotLarge_Foot; // 0x2c0(0x08)
	struct UWBP_Wrapper_SlotLarge_C* WBP_Wrapper_SlotLarge_Lower; // 0x2c8(0x08)
	struct UWBP_Wrapper_SlotLarge_C* WBP_Wrapper_SlotLarge_Outer; // 0x2d0(0x08)
	struct UWBP_Wrapper_SlotLarge_C* WBP_Wrapper_SlotLarge_Subweapon; // 0x2d8(0x08)
	struct UWBP_Wrapper_SlotLarge_C* WBP_Wrapper_SlotLarge_Upper; // 0x2e0(0x08)
	struct UWBP_Wrapper_SlotLarge_C* WBP_Wrapper_SlotLarge_Weapon; // 0x2e8(0x08)

	enum class ESlateVisibility GetVisibility_1(); // Function WBP_Equipment.WBP_Equipment_C.GetVisibility_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	struct FText GetText_1(); // Function WBP_Equipment.WBP_Equipment_C.GetText_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	bool Get_WBP_ImageButton_Suicide_bIsEnabled_1(); // Function WBP_Equipment.WBP_Equipment_C.Get_WBP_ImageButton_Suicide_bIsEnabled_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_Equipment.WBP_Equipment_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_WBP_Equipment(int32_t EntryPoint); // Function WBP_Equipment.WBP_Equipment_C.ExecuteUbergraph_WBP_Equipment // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
};

