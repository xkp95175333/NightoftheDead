// WidgetBlueprintGeneratedClass WBP_CrossHairWrapper.WBP_CrossHairWrapper_C
// Size: 0x292 (Inherited: 0x260)
struct UWBP_CrossHairWrapper_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWBP_CrossHairCloser_C* WBP_CrossHairCloser; // 0x268(0x08)
	struct UWBP_CrossHairDefault_C* WBP_CrossHairDefault; // 0x270(0x08)
	struct UWBP_CrossHairRange_C* WBP_CrossHairRange; // 0x278(0x08)
	struct ALFCharacterPlayer* PlayerCharacter; // 0x280(0x08)
	struct ULFCharacterEquipmentComponent* Equipment; // 0x288(0x08)
	enum class EFocusState FocusState; // 0x290(0x01)
	enum class EFocusState PrevFocusState; // 0x291(0x01)

	void OnFocusChanged(enum class EFocusState NewFocusState); // Function WBP_CrossHairWrapper.WBP_CrossHairWrapper_C.OnFocusChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	enum class ESlateVisibility GetVisibility_Range(); // Function WBP_CrossHairWrapper.WBP_CrossHairWrapper_C.GetVisibility_Range // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	enum class ESlateVisibility GetVisibility_Melee(); // Function WBP_CrossHairWrapper.WBP_CrossHairWrapper_C.GetVisibility_Melee // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	enum class ESlateVisibility GetVisibility_Unarmed(); // Function WBP_CrossHairWrapper.WBP_CrossHairWrapper_C.GetVisibility_Unarmed // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	void Construct(); // Function WBP_CrossHairWrapper.WBP_CrossHairWrapper_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_CrossHairWrapper.WBP_CrossHairWrapper_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void OnDrawChanged(float DrawAlpha); // Function WBP_CrossHairWrapper.WBP_CrossHairWrapper_C.OnDrawChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnAttack(); // Function WBP_CrossHairWrapper.WBP_CrossHairWrapper_C.OnAttack // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_WBP_CrossHairWrapper(int32_t EntryPoint); // Function WBP_CrossHairWrapper.WBP_CrossHairWrapper_C.ExecuteUbergraph_WBP_CrossHairWrapper // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
};

