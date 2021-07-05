// WidgetBlueprintGeneratedClass WBP_HudBuff.WBP_HudBuff_C
// Size: 0x2a9 (Inherited: 0x260)
struct UWBP_HudBuff_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UBorder* Border_1; // 0x268(0x08)
	struct UHorizontalBox* HorizontalBox_Buffs; // 0x270(0x08)
	struct UWBP_BuffIcon_C* PREVIEW_WBP_BuffIcon; // 0x278(0x08)
	struct UWBP_BuffIcon_C* PREVIEW_WBP_BuffIcon_237; // 0x280(0x08)
	struct TArray<struct FName> DrawingBuffs; // 0x288(0x10)
	struct TArray<struct UWBP_BuffIcon_C*> BuffIcons; // 0x298(0x10)
	bool bIconExist; // 0x2a8(0x01)

	void Construct(); // Function WBP_HudBuff.WBP_HudBuff_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_HudBuff.WBP_HudBuff_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_WBP_HudBuff(int32_t EntryPoint); // Function WBP_HudBuff.WBP_HudBuff_C.ExecuteUbergraph_WBP_HudBuff // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
};

