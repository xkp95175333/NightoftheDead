// WidgetBlueprintGeneratedClass WBP_Hud_Interaction_obj_Material.WBP_Hud_Interaction_obj_Material_C
// Size: 0x290 (Inherited: 0x260)
struct UWBP_Hud_Interaction_obj_Material_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UHorizontalBox* HorizontalBox_1; // 0x268(0x08)
	struct UImage* Image_Material; // 0x270(0x08)
	struct UTextBlock* TextBlock_MaterialCurrent; // 0x278(0x08)
	struct UTextBlock* TextBlock_MaterialName; // 0x280(0x08)
	struct UTextBlock* TextBlock_MaterialRequire_2; // 0x288(0x08)

	void SetInteraction_F(struct FText Type); // Function WBP_Hud_Interaction_obj_Material.WBP_Hud_Interaction_obj_Material_C.SetInteraction_F // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void SetItem(struct FInteractionParameterItem Item); // Function WBP_Hud_Interaction_obj_Material.WBP_Hud_Interaction_obj_Material_C.SetItem // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_WBP_Hud_Interaction_obj_Material(int32_t EntryPoint); // Function WBP_Hud_Interaction_obj_Material.WBP_Hud_Interaction_obj_Material_C.ExecuteUbergraph_WBP_Hud_Interaction_obj_Material // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
};

