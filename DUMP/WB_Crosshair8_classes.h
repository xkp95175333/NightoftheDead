// WidgetBlueprintGeneratedClass WB_Crosshair8.WB_Crosshair8_C
// Size: 0x2a0 (Inherited: 0x260)
struct UWB_Crosshair8_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* SingleHit; // 0x268(0x08)
	struct UWidgetAnimation* Hit; // 0x270(0x08)
	struct UBorder* b_Crosshair; // 0x278(0x08)
	struct UImage* Image_3; // 0x280(0x08)
	struct UImage* Image_84; // 0x288(0x08)
	struct UImage* Image_85; // 0x290(0x08)
	struct UWB_CrosshairBase_C* WB_CrosshairBase; // 0x298(0x08)

	void DisplayRecoil(); // Function WB_Crosshair8.WB_Crosshair8_C.DisplayRecoil // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Construct(); // Function WB_Crosshair8.WB_Crosshair8_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void SingleRecoil_Event_1(); // Function WB_Crosshair8.WB_Crosshair8_C.SingleRecoil_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_WB_Crosshair8(int32_t EntryPoint); // Function WB_Crosshair8.WB_Crosshair8_C.ExecuteUbergraph_WB_Crosshair8 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
};

