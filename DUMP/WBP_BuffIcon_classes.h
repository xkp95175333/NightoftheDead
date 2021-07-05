// WidgetBlueprintGeneratedClass WBP_BuffIcon.WBP_BuffIcon_C
// Size: 0x289 (Inherited: 0x260)
struct UWBP_BuffIcon_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* Blink; // 0x268(0x08)
	struct UImage* Image_72; // 0x270(0x08)
	struct FName BuffId; // 0x278(0x08)
	int32_t EndSeconds; // 0x280(0x04)
	int32_t BlinkTime; // 0x284(0x04)
	bool bIsBlinking; // 0x288(0x01)

	void PreConstruct(bool IsDesignTime); // Function WBP_BuffIcon.WBP_BuffIcon_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_BuffIcon.WBP_BuffIcon_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_WBP_BuffIcon(int32_t EntryPoint); // Function WBP_BuffIcon.WBP_BuffIcon_C.ExecuteUbergraph_WBP_BuffIcon // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
};

