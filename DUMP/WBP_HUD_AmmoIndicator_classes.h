// WidgetBlueprintGeneratedClass WBP_HUD_AmmoIndicator.WBP_HUD_AmmoIndicator_C
// Size: 0x2f8 (Inherited: 0x288)
struct UWBP_HUD_AmmoIndicator_C : UIndicatorWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UImage* Img_Example; // 0x290(0x08)
	struct UImage* IMG_MainWeapon_Icon; // 0x298(0x08)
	struct UImage* IMG_RangeWeapon_Icon; // 0x2a0(0x08)
	struct UImage* IMG_Shiled_Icon; // 0x2a8(0x08)
	struct UImage* IMG_SubWeapon_Icon; // 0x2b0(0x08)
	struct UProgressBar* ProgressBar_297; // 0x2b8(0x08)
	struct USizeBox* SB_MainWeapon; // 0x2c0(0x08)
	struct USizeBox* SB_RangeWeapon; // 0x2c8(0x08)
	struct USizeBox* SB_Shiled; // 0x2d0(0x08)
	struct USizeBox* SB_SubWeapon; // 0x2d8(0x08)
	struct UTextBlock* Text_Equipped; // 0x2e0(0x08)
	struct UTextBlock* Text_Total; // 0x2e8(0x08)
	struct UTextBlock* TextBlock_187; // 0x2f0(0x08)

	struct FText GetEquippedAmmoAmountText(); // Function WBP_HUD_AmmoIndicator.WBP_HUD_AmmoIndicator_C.GetEquippedAmmoAmountText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	float GetGuardStamina(); // Function WBP_HUD_AmmoIndicator.WBP_HUD_AmmoIndicator_C.GetGuardStamina // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	void Get Equipment Item Data(enum class EEquipmentSlot EquipmentSlot, struct FItemData ItemData); // Function WBP_HUD_AmmoIndicator.WBP_HUD_AmmoIndicator_C.Get Equipment Item Data // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	struct FText GetTotalAmmoAmountText(); // Function WBP_HUD_AmmoIndicator.WBP_HUD_AmmoIndicator_C.GetTotalAmmoAmountText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	enum class ESlateVisibility GetVisibility_BoltActionRange(); // Function WBP_HUD_AmmoIndicator.WBP_HUD_AmmoIndicator_C.GetVisibility_BoltActionRange // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	void OnLoaded_43EA13B944B6D7A2A89A5A8E9E0C1284(struct UObject* Loaded); // Function WBP_HUD_AmmoIndicator.WBP_HUD_AmmoIndicator_C.OnLoaded_43EA13B944B6D7A2A89A5A8E9E0C1284 // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnLoaded_040B45AE4E54E09E49CA2EB2EB5A382C(struct UObject* Loaded); // Function WBP_HUD_AmmoIndicator.WBP_HUD_AmmoIndicator_C.OnLoaded_040B45AE4E54E09E49CA2EB2EB5A382C // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnLoaded_3DE4AAC3472D2E0E01BC8C8EE365F388(struct UObject* Loaded); // Function WBP_HUD_AmmoIndicator.WBP_HUD_AmmoIndicator_C.OnLoaded_3DE4AAC3472D2E0E01BC8C8EE365F388 // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnLoaded_D92A2CA144ED0A0CCF44368171CBE3A2(struct UObject* Loaded); // Function WBP_HUD_AmmoIndicator.WBP_HUD_AmmoIndicator_C.OnLoaded_D92A2CA144ED0A0CCF44368171CBE3A2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnLoaded_406E8E0543BB8F8186EB1BB7D76B3A9B(struct UObject* Loaded); // Function WBP_HUD_AmmoIndicator.WBP_HUD_AmmoIndicator_C.OnLoaded_406E8E0543BB8F8186EB1BB7D76B3A9B // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Construct(); // Function WBP_HUD_AmmoIndicator.WBP_HUD_AmmoIndicator_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void ShowMainWeaponSlot(); // Function WBP_HUD_AmmoIndicator.WBP_HUD_AmmoIndicator_C.ShowMainWeaponSlot // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void HideMainWeaponSlot(); // Function WBP_HUD_AmmoIndicator.WBP_HUD_AmmoIndicator_C.HideMainWeaponSlot // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ShowRangeWeaponSlot(); // Function WBP_HUD_AmmoIndicator.WBP_HUD_AmmoIndicator_C.ShowRangeWeaponSlot // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void HideRangeWeaponSlot(); // Function WBP_HUD_AmmoIndicator.WBP_HUD_AmmoIndicator_C.HideRangeWeaponSlot // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ShowSubWeaponSlot(); // Function WBP_HUD_AmmoIndicator.WBP_HUD_AmmoIndicator_C.ShowSubWeaponSlot // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void HideSubWeaponSlot(); // Function WBP_HUD_AmmoIndicator.WBP_HUD_AmmoIndicator_C.HideSubWeaponSlot // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ShowShieldSlot(); // Function WBP_HUD_AmmoIndicator.WBP_HUD_AmmoIndicator_C.ShowShieldSlot // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void HideShieldSlot(); // Function WBP_HUD_AmmoIndicator.WBP_HUD_AmmoIndicator_C.HideShieldSlot // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_WBP_HUD_AmmoIndicator(int32_t EntryPoint); // Function WBP_HUD_AmmoIndicator.WBP_HUD_AmmoIndicator_C.ExecuteUbergraph_WBP_HUD_AmmoIndicator // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
};

