// WidgetBlueprintGeneratedClass WBP_HUD_HeadMessage.WBP_HUD_HeadMessage_C
// Size: 0x288 (Inherited: 0x260)
struct UWBP_HUD_HeadMessage_C : ULFMessageWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* Anim_FadeIn; // 0x268(0x08)
	struct UBorder* Border_Background; // 0x270(0x08)
	struct UWBP_HudHeadMsg_C* WBP_HudHeadMsg; // 0x278(0x08)
	struct UWBP_HudHeadMsg_C* WBP_HudHeadMsg_Top; // 0x280(0x08)

	struct FEventReply OnMouseButtonDown_1(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_HUD_HeadMessage.WBP_HUD_HeadMessage_C.OnMouseButtonDown_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Construct(); // Function WBP_HUD_HeadMessage.WBP_HUD_HeadMessage_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void OnShowMessage(struct FText Text, bool Background, bool bCenter, float Time); // Function WBP_HUD_HeadMessage.WBP_HUD_HeadMessage_C.OnShowMessage // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1395fe0
	void FadeOut(); // Function WBP_HUD_HeadMessage.WBP_HUD_HeadMessage_C.FadeOut // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_WBP_HUD_HeadMessage(int32_t EntryPoint); // Function WBP_HUD_HeadMessage.WBP_HUD_HeadMessage_C.ExecuteUbergraph_WBP_HUD_HeadMessage // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
};

