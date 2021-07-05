// WidgetBlueprintGeneratedClass Electricsystem.ElectricSystem_C
// Size: 0x360 (Inherited: 0x260)
struct UElectricSystem_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* Back; // 0x268(0x08)
	struct UTextBlock* Count_2; // 0x270(0x08)
	struct UTextBlock* Count_3; // 0x278(0x08)
	struct UTextBlock* Count_4; // 0x280(0x08)
	struct UTextBlock* Count_5; // 0x288(0x08)
	struct UTextBlock* Count_6; // 0x290(0x08)
	struct UTextBlock* Count_7; // 0x298(0x08)
	struct UTextBlock* Count_8; // 0x2a0(0x08)
	struct UTextBlock* Count_9; // 0x2a8(0x08)
	struct UCanvasPanel* ElectricMeter; // 0x2b0(0x08)
	struct UTextBlock* Meter_Text_1; // 0x2b8(0x08)
	struct UTextBlock* Meter_Text_26; // 0x2c0(0x08)
	struct UTextBlock* Meter_Text_51; // 0x2c8(0x08)
	struct UTextBlock* Meter_Text_76; // 0x2d0(0x08)
	struct UTextBlock* Meter_Text_101; // 0x2d8(0x08)
	struct UImage* MeterBack; // 0x2e0(0x08)
	struct UImage* MeterHand; // 0x2e8(0x08)
	struct UButton* SwitchOff; // 0x2f0(0x08)
	struct UButton* SwitchOn; // 0x2f8(0x08)
	struct UCanvasPanel* TrapList; // 0x300(0x08)
	struct UImage* TrapListBack; // 0x308(0x08)
	struct UWBP_ElectricSystem_Control_Checkbox_C* WBP_ElectricSystem_Control_Checkbox_Animal; // 0x310(0x08)
	struct UWBP_ElectricSystem_Control_Checkbox_C* WBP_ElectricSystem_Control_Checkbox_EnemyBuilding; // 0x318(0x08)
	struct UWBP_ElectricSystem_Control_Checkbox_C* WBP_ElectricSystem_Control_Checkbox_EnemyPlayer; // 0x320(0x08)
	struct UWBP_ElectricSystem_Control_Checkbox_C* WBP_ElectricSystem_Control_Checkbox_FriendPlayer; // 0x328(0x08)
	struct UWBP_ElectricSystem_Control_Checkbox_C* WBP_ElectricSystem_Control_Checkbox_GiantZombie; // 0x330(0x08)
	struct UWBP_ElectricSystem_Control_Checkbox_C* WBP_ElectricSystem_Control_Checkbox_HeavyZombie; // 0x338(0x08)
	struct UWBP_ElectricSystem_Control_Checkbox_C* WBP_ElectricSystem_Control_Checkbox_LightZombie; // 0x340(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_OnOff; // 0x348(0x08)
	float MinAngle; // 0x350(0x04)
	float MaxAngle; // 0x354(0x04)
	int32_t CurrentPower; // 0x358(0x04)
	int32_t MaxPower; // 0x35c(0x04)

	void PreConstruct(bool IsDesignTime); // Function Electricsystem.ElectricSystem_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void SetCurrentPower(int32_t Power); // Function Electricsystem.ElectricSystem_C.SetCurrentPower // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void SetMaxPower(int32_t Power); // Function Electricsystem.ElectricSystem_C.SetMaxPower // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void SetMeter(int32_t Current, int32_t Max); // Function Electricsystem.ElectricSystem_C.SetMeter // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_ElectricSystem(int32_t EntryPoint); // Function Electricsystem.ElectricSystem_C.ExecuteUbergraph_ElectricSystem // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
};

