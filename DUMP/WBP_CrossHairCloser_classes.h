// WidgetBlueprintGeneratedClass WBP_CrossHairCloser.WBP_CrossHairCloser_C
// Size: 0x298 (Inherited: 0x260)
struct UWBP_CrossHairCloser_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* AnimChHit; // 0x268(0x08)
	struct UWidgetAnimation* AnimChTarget; // 0x270(0x08)
	struct UImage* ImgChCenter; // 0x278(0x08)
	struct UImage* ImgChCenterBg; // 0x280(0x08)
	struct UImage* ImgChClose; // 0x288(0x08)
	struct UImage* ImgChCloseBg; // 0x290(0x08)

	void AimTarget(); // Function WBP_CrossHairCloser.WBP_CrossHairCloser_C.AimTarget // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void AimHit(); // Function WBP_CrossHairCloser.WBP_CrossHairCloser_C.AimHit // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void AimHitLost(); // Function WBP_CrossHairCloser.WBP_CrossHairCloser_C.AimHitLost // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void AimTargetLost(); // Function WBP_CrossHairCloser.WBP_CrossHairCloser_C.AimTargetLost // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_WBP_CrossHairCloser(int32_t EntryPoint); // Function WBP_CrossHairCloser.WBP_CrossHairCloser_C.ExecuteUbergraph_WBP_CrossHairCloser // (Final|UbergraphFunction) // @ game+0x1395fe0
};

