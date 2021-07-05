// WidgetBlueprintGeneratedClass WBP_CrossHairRange.WBP_CrossHairRange_C
// Size: 0x2b8 (Inherited: 0x260)
struct UWBP_CrossHairRange_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* AnimChCharge; // 0x268(0x08)
	struct UWidgetAnimation* AnimChHit; // 0x270(0x08)
	struct UWidgetAnimation* AnimChTarget; // 0x278(0x08)
	struct UImage* Image_161; // 0x280(0x08)
	struct UImage* ImgChCenter; // 0x288(0x08)
	struct UImage* ImgChCenterBg; // 0x290(0x08)
	struct UImage* ImgChRangeL; // 0x298(0x08)
	struct UImage* ImgChRangeL_Bg; // 0x2a0(0x08)
	struct UImage* ImgChRangeR; // 0x2a8(0x08)
	struct UImage* ImgChRangeR_Bg; // 0x2b0(0x08)

	void AimTarget(); // Function WBP_CrossHairRange.WBP_CrossHairRange_C.AimTarget // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void AimHit(); // Function WBP_CrossHairRange.WBP_CrossHairRange_C.AimHit // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void AimCharge(); // Function WBP_CrossHairRange.WBP_CrossHairRange_C.AimCharge // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void AimTargetLost(); // Function WBP_CrossHairRange.WBP_CrossHairRange_C.AimTargetLost // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void AimHitLost(); // Function WBP_CrossHairRange.WBP_CrossHairRange_C.AimHitLost // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void AimChargeLost(); // Function WBP_CrossHairRange.WBP_CrossHairRange_C.AimChargeLost // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void AimDraw(float DrawAlpha); // Function WBP_CrossHairRange.WBP_CrossHairRange_C.AimDraw // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_WBP_CrossHairRange(int32_t EntryPoint); // Function WBP_CrossHairRange.WBP_CrossHairRange_C.ExecuteUbergraph_WBP_CrossHairRange // (Final|UbergraphFunction) // @ game+0x1395fe0
};

