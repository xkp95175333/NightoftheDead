// WidgetBlueprintGeneratedClass WBP_HudHealth.WBP_HudHealth_C
// Size: 0x2f8 (Inherited: 0x260)
struct UWBP_HudHealth_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UHorizontalBox* HorizontalBox_Cond; // 0x268(0x08)
	struct UImage* Image_165; // 0x270(0x08)
	struct UImage* Image_175; // 0x278(0x08)
	struct UImage* Image_379; // 0x280(0x08)
	struct UImage* Image_460; // 0x288(0x08)
	struct USizeBox* SizeBox_Condition; // 0x290(0x08)
	struct USizeBox* SizeBox_ConditionHealth; // 0x298(0x08)
	struct USizeBox* SizeBox_ConditionStamina; // 0x2a0(0x08)
	struct USizeBox* SizeBox_CondLimit; // 0x2a8(0x08)
	struct USizeBox* SizeBox_CurrentHealth; // 0x2b0(0x08)
	struct USizeBox* SizeBox_CurrentStamina; // 0x2b8(0x08)
	struct USizeBox* SizeBox_MaxHealth; // 0x2c0(0x08)
	struct USizeBox* SizeBox_MaxStamina; // 0x2c8(0x08)
	float StatUnit; // 0x2d0(0x04)
	char pad_2D4[0x4]; // 0x2d4(0x04)
	struct TArray<struct USizeBox*> Cond_SizeBoxes; // 0x2d8(0x10)
	float MaxCondition; // 0x2e8(0x04)
	float Condition; // 0x2ec(0x04)
	float OverStatMulti; // 0x2f0(0x04)
	float UnderStatMulti; // 0x2f4(0x04)

	void GetUnderStatWidth(float Percent, float Width); // Function WBP_HudHealth.WBP_HudHealth_C.GetUnderStatWidth // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	void GetTotalStatWidth(float Percent, float Width); // Function WBP_HudHealth.WBP_HudHealth_C.GetTotalStatWidth // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	void GetOverStatWidth(float Percent, float Width); // Function WBP_HudHealth.WBP_HudHealth_C.GetOverStatWidth // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	void ConstructConditionBoxes(); // Function WBP_HudHealth.WBP_HudHealth_C.ConstructConditionBoxes // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void SetMaxCondition(float MaxCondition); // Function WBP_HudHealth.WBP_HudHealth_C.SetMaxCondition // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void SetCurrentCondition(float Condition); // Function WBP_HudHealth.WBP_HudHealth_C.SetCurrentCondition // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void SetMaxStamina(float MaxStamina); // Function WBP_HudHealth.WBP_HudHealth_C.SetMaxStamina // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void SetCurrentStamina(float Stamina); // Function WBP_HudHealth.WBP_HudHealth_C.SetCurrentStamina // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void GetStatWidth(float Percent, float Width); // Function WBP_HudHealth.WBP_HudHealth_C.GetStatWidth // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	void GetPercentValue(float Percent, float Clamped); // Function WBP_HudHealth.WBP_HudHealth_C.GetPercentValue // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	void SetMaxHealth(float MaxHealth); // Function WBP_HudHealth.WBP_HudHealth_C.SetMaxHealth // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void SetCurrentHealth(float Health); // Function WBP_HudHealth.WBP_HudHealth_C.SetCurrentHealth // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void PreConstruct(bool IsDesignTime); // Function WBP_HudHealth.WBP_HudHealth_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void Construct(); // Function WBP_HudHealth.WBP_HudHealth_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_WBP_HudHealth(int32_t EntryPoint); // Function WBP_HudHealth.WBP_HudHealth_C.ExecuteUbergraph_WBP_HudHealth // (Final|UbergraphFunction) // @ game+0x1395fe0
};

