// WidgetBlueprintGeneratedClass WB_Crosshair7.WB_Crosshair7_C
// Size: 0x290 (Inherited: 0x260)
struct UWB_Crosshair7_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* SingleHit; // 0x268(0x08)
	struct UWidgetAnimation* Hit; // 0x270(0x08)
	struct UBorder* b_Crosshair; // 0x278(0x08)
	struct UImage* Image_1; // 0x280(0x08)
	struct UWB_CrosshairBase_C* WB_CrosshairBase; // 0x288(0x08)

	void DisplayRecoil(); // Function WB_Crosshair7.WB_Crosshair7_C.DisplayRecoil // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Construct(); // Function WB_Crosshair7.WB_Crosshair7_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void SingleRecoil_Event_1(); // Function WB_Crosshair7.WB_Crosshair7_C.SingleRecoil_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_WB_Crosshair7(int32_t EntryPoint); // Function WB_Crosshair7.WB_Crosshair7_C.ExecuteUbergraph_WB_Crosshair7 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
};

