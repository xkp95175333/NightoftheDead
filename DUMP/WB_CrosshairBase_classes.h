// WidgetBlueprintGeneratedClass WB_CrosshairBase.WB_CrosshairBase_C
// Size: 0x2e8 (Inherited: 0x260)
struct UWB_CrosshairBase_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UBorder* b_CrosshairBase; // 0x268(0x08)
	struct UBorder* b_HitIndicator; // 0x270(0x08)
	struct UOverlay* OV_Crosshair; // 0x278(0x08)
	struct UOverlay* OV_HitIndicator; // 0x280(0x08)
	enum class E_CrosshairTypes E_CrosshairTypes; // 0x288(0x01)
	enum class E_HitIndicatorTypes E_HitIndicatorTypes; // 0x289(0x01)
	char pad_28A[0x6]; // 0x28a(0x06)
	struct UOverlaySlot* CurrentHitIndicator; // 0x290(0x08)
	struct UOverlaySlot* CurrentCrosshair; // 0x298(0x08)
	struct FMulticastInlineDelegate HitIndication; // 0x2a0(0x10)
	struct FMulticastInlineDelegate RemoveHitIndication; // 0x2b0(0x10)
	struct FMulticastInlineDelegate DisplayingRecoil; // 0x2c0(0x10)
	bool CrosshairSingleRecoil; // 0x2d0(0x01)
	bool CrosshairRecoil; // 0x2d1(0x01)
	char pad_2D2[0x6]; // 0x2d2(0x06)
	struct FMulticastInlineDelegate SingleRecoil; // 0x2d8(0x10)

	void AddCrosshair(enum class E_CrosshairTypes CrosshairType, enum class E_HitIndicatorTypes HitIndicatorType); // Function WB_CrosshairBase.WB_CrosshairBase_C.AddCrosshair // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void CrosshairHit(float IndicationTime, struct FLinearColor Color); // Function WB_CrosshairBase.WB_CrosshairBase_C.CrosshairHit // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void UpdateCrosshair(bool bCrosshairVisible, bool bHitIndicatorVisible, struct FLinearColor Crosshair Color); // Function WB_CrosshairBase.WB_CrosshairBase_C.UpdateCrosshair // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void DisplayCrosshair(enum class E_CrosshairTypes CrosshairType, bool bCrosshairVisible, struct FLinearColor Crosshair Color, enum class E_HitIndicatorTypes HitIndicatorType, bool bHitIndicatorVisible); // Function WB_CrosshairBase.WB_CrosshairBase_C.DisplayCrosshair // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void DisplayHitIndicator(float IndicationTime, struct FLinearColor Color); // Function WB_CrosshairBase.WB_CrosshairBase_C.DisplayHitIndicator // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void DisplayRecoil(bool bRecoil); // Function WB_CrosshairBase.WB_CrosshairBase_C.DisplayRecoil // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void DisplaySingleRecoil(); // Function WB_CrosshairBase.WB_CrosshairBase_C.DisplaySingleRecoil // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void CrosshairVisibility(bool bVisible); // Function WB_CrosshairBase.WB_CrosshairBase_C.CrosshairVisibility // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_WB_CrosshairBase(int32_t EntryPoint); // Function WB_CrosshairBase.WB_CrosshairBase_C.ExecuteUbergraph_WB_CrosshairBase // (Final|UbergraphFunction) // @ game+0x1395fe0
	void SingleRecoil__DelegateSignature(); // Function WB_CrosshairBase.WB_CrosshairBase_C.SingleRecoil__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void DisplayingRecoil__DelegateSignature(); // Function WB_CrosshairBase.WB_CrosshairBase_C.DisplayingRecoil__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void RemoveHitIndication__DelegateSignature(); // Function WB_CrosshairBase.WB_CrosshairBase_C.RemoveHitIndication__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void HitIndication__DelegateSignature(); // Function WB_CrosshairBase.WB_CrosshairBase_C.HitIndication__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
};

