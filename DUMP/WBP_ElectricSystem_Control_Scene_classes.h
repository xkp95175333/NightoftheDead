// WidgetBlueprintGeneratedClass WBP_ElectricSystem_Control_Scene.WBP_ElectricSystem_Control_Scene_C
// Size: 0x2c8 (Inherited: 0x268)
struct UWBP_ElectricSystem_Control_Scene_C : UElectricControlWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UElectricSystem_C* ElectricSystem; // 0x270(0x08)
	struct UButton* Button_On; // 0x278(0x08)
	struct UButton* Button_Off; // 0x280(0x08)
	struct UWidgetSwitcher* Switcher_OnOff; // 0x288(0x08)
	struct UWBP_ElectricSystem_Control_Checkbox_C* Check_Animal; // 0x290(0x08)
	struct UWBP_ElectricSystem_Control_Checkbox_C* Check_Building; // 0x298(0x08)
	struct UWBP_ElectricSystem_Control_Checkbox_C* Check_Player; // 0x2a0(0x08)
	struct UWBP_ElectricSystem_Control_Checkbox_C* Check_LZombie; // 0x2a8(0x08)
	struct UWBP_ElectricSystem_Control_Checkbox_C* Check_HZombie; // 0x2b0(0x08)
	struct UWBP_ElectricSystem_Control_Checkbox_C* Check_GZombie; // 0x2b8(0x08)
	struct UWBP_ElectricSystem_Control_Checkbox_C* Check_FPlayer; // 0x2c0(0x08)

	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_ElectricSystem_Control_Scene.WBP_ElectricSystem_Control_Scene_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void PreConstruct(bool IsDesignTime); // Function WBP_ElectricSystem_Control_Scene.WBP_ElectricSystem_Control_Scene_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void Construct(); // Function WBP_ElectricSystem_Control_Scene.WBP_ElectricSystem_Control_Scene_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_ElectricSystem_Control_Scene.WBP_ElectricSystem_Control_Scene_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void BindButtonEvents(); // Function WBP_ElectricSystem_Control_Scene.WBP_ElectricSystem_Control_Scene_C.BindButtonEvents // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void TurnOn(); // Function WBP_ElectricSystem_Control_Scene.WBP_ElectricSystem_Control_Scene_C.TurnOn // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void TurnOff(); // Function WBP_ElectricSystem_Control_Scene.WBP_ElectricSystem_Control_Scene_C.TurnOff // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void InitializeVisibility(); // Function WBP_ElectricSystem_Control_Scene.WBP_ElectricSystem_Control_Scene_C.InitializeVisibility // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void BindSwitchFlagEvents(); // Function WBP_ElectricSystem_Control_Scene.WBP_ElectricSystem_Control_Scene_C.BindSwitchFlagEvents // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnClicked_Event_Animal(); // Function WBP_ElectricSystem_Control_Scene.WBP_ElectricSystem_Control_Scene_C.OnClicked_Event_Animal // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnClicked_Event_Building(); // Function WBP_ElectricSystem_Control_Scene.WBP_ElectricSystem_Control_Scene_C.OnClicked_Event_Building // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnClicked_Event_Player(); // Function WBP_ElectricSystem_Control_Scene.WBP_ElectricSystem_Control_Scene_C.OnClicked_Event_Player // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnClicked_Event_Heavy(); // Function WBP_ElectricSystem_Control_Scene.WBP_ElectricSystem_Control_Scene_C.OnClicked_Event_Heavy // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnClicked_Event_Giant(); // Function WBP_ElectricSystem_Control_Scene.WBP_ElectricSystem_Control_Scene_C.OnClicked_Event_Giant // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnClicked_Event_Light(); // Function WBP_ElectricSystem_Control_Scene.WBP_ElectricSystem_Control_Scene_C.OnClicked_Event_Light // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnClicked_Event_FPlayer(); // Function WBP_ElectricSystem_Control_Scene.WBP_ElectricSystem_Control_Scene_C.OnClicked_Event_FPlayer // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void UpdatePower(); // Function WBP_ElectricSystem_Control_Scene.WBP_ElectricSystem_Control_Scene_C.UpdatePower // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_WBP_ElectricSystem_Control_Scene(int32_t EntryPoint); // Function WBP_ElectricSystem_Control_Scene.WBP_ElectricSystem_Control_Scene_C.ExecuteUbergraph_WBP_ElectricSystem_Control_Scene // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
};

