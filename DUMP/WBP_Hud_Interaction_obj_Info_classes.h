// WidgetBlueprintGeneratedClass WBP_Hud_Interaction_obj_Info.WBP_Hud_Interaction_obj_Info_C
// Size: 0x298 (Inherited: 0x260)
struct UWBP_Hud_Interaction_obj_Info_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UProgressBar* ProgressBar_Percent; // 0x268(0x08)
	struct USizeBox* SzBx_ObjInfo_Count; // 0x270(0x08)
	struct USizeBox* SzBx_ObjInfo_Percent; // 0x278(0x08)
	struct UTextBlock* TextBlock_Count; // 0x280(0x08)
	struct UTextBlock* TextBlock_MaxCount; // 0x288(0x08)
	struct UTextBlock* TextBlock_Percent; // 0x290(0x08)

	void SetPercent(float Percent); // Function WBP_Hud_Interaction_obj_Info.WBP_Hud_Interaction_obj_Info_C.SetPercent // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void SetCount(int32_t Count, int32_t MaxCount); // Function WBP_Hud_Interaction_obj_Info.WBP_Hud_Interaction_obj_Info_C.SetCount // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_WBP_Hud_Interaction_obj_Info(int32_t EntryPoint); // Function WBP_Hud_Interaction_obj_Info.WBP_Hud_Interaction_obj_Info_C.ExecuteUbergraph_WBP_Hud_Interaction_obj_Info // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
};

