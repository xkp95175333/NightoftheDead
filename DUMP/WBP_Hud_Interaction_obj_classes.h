// WidgetBlueprintGeneratedClass WBP_Hud_Interaction_obj.WBP_Hud_Interaction_obj_C
// Size: 0x300 (Inherited: 0x260)
struct UWBP_Hud_Interaction_obj_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UBorder* Border_Key_Bg; // 0x268(0x08)
	struct USizeBox* SizeBox_Key; // 0x270(0x08)
	struct USizeBox* SizeBox_RMB; // 0x278(0x08)
	struct USizeBox* SzBx_MainCommand; // 0x280(0x08)
	struct UTextBlock* TextBlock_Key; // 0x288(0x08)
	struct UTextBlock* TextBlock_Type; // 0x290(0x08)
	struct UVerticalBox* VerticalBox_Material; // 0x298(0x08)
	struct TArray<struct UWBP_Hud_Interaction_obj_Material_C*> Materials; // 0x2a0(0x10)
	struct FSlateColor RedColor; // 0x2b0(0x28)
	struct FSlateColor NormalColor; // 0x2d8(0x28)

	void SetInteraction_RMB(struct FText Type); // Function WBP_Hud_Interaction_obj.WBP_Hud_Interaction_obj_C.SetInteraction_RMB // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ResetColors(); // Function WBP_Hud_Interaction_obj.WBP_Hud_Interaction_obj_C.ResetColors // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void SetInteraction_T(struct FText Type); // Function WBP_Hud_Interaction_obj.WBP_Hud_Interaction_obj_C.SetInteraction_T // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void SetInteraction_R(struct FText Type); // Function WBP_Hud_Interaction_obj.WBP_Hud_Interaction_obj_C.SetInteraction_R // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void SetInteraction_F(struct FText Type); // Function WBP_Hud_Interaction_obj.WBP_Hud_Interaction_obj_C.SetInteraction_F // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Construct(); // Function WBP_Hud_Interaction_obj.WBP_Hud_Interaction_obj_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void SetInteractionType(enum class EInteractionType Type); // Function WBP_Hud_Interaction_obj.WBP_Hud_Interaction_obj_C.SetInteractionType // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void SetInteractionParameter(struct FInteractionParameter Param); // Function WBP_Hud_Interaction_obj.WBP_Hud_Interaction_obj_C.SetInteractionParameter // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_WBP_Hud_Interaction_obj(int32_t EntryPoint); // Function WBP_Hud_Interaction_obj.WBP_Hud_Interaction_obj_C.ExecuteUbergraph_WBP_Hud_Interaction_obj // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
};

