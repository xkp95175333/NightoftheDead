// WidgetBlueprintGeneratedClass WBP_CrossHairDefault.WBP_CrossHairDefault_C
// Size: 0x288 (Inherited: 0x260)
struct UWBP_CrossHairDefault_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* AnimChHit; // 0x268(0x08)
	struct UWidgetAnimation* AnimChTarget; // 0x270(0x08)
	struct UImage* ImgChCenter; // 0x278(0x08)
	struct UImage* ImgChCenterBg; // 0x280(0x08)

	void AimTarget(); // Function WBP_CrossHairDefault.WBP_CrossHairDefault_C.AimTarget // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void AimHit(); // Function WBP_CrossHairDefault.WBP_CrossHairDefault_C.AimHit // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void AimTargetLost(); // Function WBP_CrossHairDefault.WBP_CrossHairDefault_C.AimTargetLost // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void AimHitLost(); // Function WBP_CrossHairDefault.WBP_CrossHairDefault_C.AimHitLost // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_WBP_CrossHairDefault(int32_t EntryPoint); // Function WBP_CrossHairDefault.WBP_CrossHairDefault_C.ExecuteUbergraph_WBP_CrossHairDefault // (Final|UbergraphFunction) // @ game+0x1395fe0
};

