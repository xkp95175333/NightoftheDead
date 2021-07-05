// WidgetBlueprintGeneratedClass WBP_InteractionHUD.WBP_InteractionHUD_C
// Size: 0x290 (Inherited: 0x260)
struct UWBP_InteractionHUD_C : UInteractionHudWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWBP_Hud_Interaction_obj_C* PREVIEW_WBP_Hud_Interaction_obj; // 0x268(0x08)
	struct UVerticalBox* VerticalBox_Interactions; // 0x270(0x08)
	struct UWBP_Hud_Interaction_obj_Info_C* WBP_Hud_Interaction_obj_Info; // 0x278(0x08)
	struct TArray<struct UWBP_Hud_Interaction_obj_C*> InteractionObjects; // 0x280(0x10)

	void HideInteractionInfo(); // Function WBP_InteractionHUD.WBP_InteractionHUD_C.HideInteractionInfo // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void SetInteraction(struct TArray<struct FInteractionParameter> Interactions); // Function WBP_InteractionHUD.WBP_InteractionHUD_C.SetInteraction // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1395fe0
	void SetInteractionInfo(struct FInteractionInfo Info); // Function WBP_InteractionHUD.WBP_InteractionHUD_C.SetInteractionInfo // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_WBP_InteractionHUD(int32_t EntryPoint); // Function WBP_InteractionHUD.WBP_InteractionHUD_C.ExecuteUbergraph_WBP_InteractionHUD // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
};

