// WidgetBlueprintGeneratedClass Widget_PlayerHUD.Widget_PlayerHUD_C
// Size: 0x3e0 (Inherited: 0x260)
struct UWidget_PlayerHUD_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UTextBlock* AttackLength; // 0x268(0x08)
	struct UTextBlock* AttackState_2; // 0x270(0x08)
	struct UCanvasPanel* CanvasPanel_1; // 0x278(0x08)
	struct UTextBlock* Hardcore; // 0x280(0x08)
	struct UTextBlock* NoTeamKill; // 0x288(0x08)
	struct UTextBlock* NoWave; // 0x290(0x08)
	struct UProgressBar* ProgressBar_Wave; // 0x298(0x08)
	struct UTextBlock* TextBlock_2; // 0x2a0(0x08)
	struct UTextBlock* TextBlock_3; // 0x2a8(0x08)
	struct UTextBlock* TextBlock_5; // 0x2b0(0x08)
	struct UTextBlock* TextBlock_7; // 0x2b8(0x08)
	struct UTextBlock* TextBlock_8; // 0x2c0(0x08)
	struct UTextBlock* TextBlock_11; // 0x2c8(0x08)
	struct UTextBlock* TextBlock_13; // 0x2d0(0x08)
	struct UTextBlock* TextBlock_14; // 0x2d8(0x08)
	struct UTextBlock* TextBlock_16; // 0x2e0(0x08)
	struct UTextBlock* TextBlock_18; // 0x2e8(0x08)
	struct UTextBlock* TextBlock_20; // 0x2f0(0x08)
	struct UTextBlock* TextBlock_22; // 0x2f8(0x08)
	struct UTextBlock* TextBlock_24; // 0x300(0x08)
	struct UTextBlock* TextBlock_26; // 0x308(0x08)
	struct UTextBlock* TextBlock_62; // 0x310(0x08)
	struct UTextBlock* TextBlock_124; // 0x318(0x08)
	struct UTextBlock* TextBlock_169; // 0x320(0x08)
	struct UTextBlock* TextBlock_257; // 0x328(0x08)
	struct UTextBlock* TextBlock_263; // 0x330(0x08)
	struct UTextBlock* TextBlock_269; // 0x338(0x08)
	struct UTextBlock* TextBlock_284; // 0x340(0x08)
	struct UTextBlock* TextBlock_330; // 0x348(0x08)
	struct UTextBlock* TextBlock_331; // 0x350(0x08)
	struct UTextBlock* TextBlock_333; // 0x358(0x08)
	struct UTextBlock* TextBlock_336; // 0x360(0x08)
	struct UTextBlock* TextBlock_340; // 0x368(0x08)
	struct UTextBlock* TextBlock_342; // 0x370(0x08)
	struct UTextBlock* TextBlock_344; // 0x378(0x08)
	struct UTextBlock* TextBlock_416; // 0x380(0x08)
	struct UTextBlock* TextBlock_520; // 0x388(0x08)
	struct UTextBlock* TextBlock_555; // 0x390(0x08)
	struct UTextBlock* TextBlock_654; // 0x398(0x08)
	struct UTextBlock* TextBlock_728; // 0x3a0(0x08)
	struct UTextBlock* TextBlock_837; // 0x3a8(0x08)
	struct UTextBlock* TextBlock_PlayerNum; // 0x3b0(0x08)
	struct UTextBlock* TextBlock_Players; // 0x3b8(0x08)
	struct UGameTimeManager* GameTime; // 0x3c0(0x08)
	struct AWaveSpawner* Wave; // 0x3c8(0x08)
	struct FString Players; // 0x3d0(0x10)

	struct FText GetText_27(); // Function Widget_PlayerHUD.Widget_PlayerHUD_C.GetText_27 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	struct FText GetText_26(); // Function Widget_PlayerHUD.Widget_PlayerHUD_C.GetText_26 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	struct FText GetText_25(); // Function Widget_PlayerHUD.Widget_PlayerHUD_C.GetText_25 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	struct FText Get Camera Offset Text(); // Function Widget_PlayerHUD.Widget_PlayerHUD_C.Get Camera Offset Text // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	struct FText Get_AttackLength_Text_1(); // Function Widget_PlayerHUD.Widget_PlayerHUD_C.Get_AttackLength_Text_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	struct FText Get_AttackState_1_Text_1(); // Function Widget_PlayerHUD.Widget_PlayerHUD_C.Get_AttackState_1_Text_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	struct FText GetText_24(); // Function Widget_PlayerHUD.Widget_PlayerHUD_C.GetText_24 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	struct FText GetText_Durability(); // Function Widget_PlayerHUD.Widget_PlayerHUD_C.GetText_Durability // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	struct FText GetText_23(); // Function Widget_PlayerHUD.Widget_PlayerHUD_C.GetText_23 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	struct FText GetText_22(); // Function Widget_PlayerHUD.Widget_PlayerHUD_C.GetText_22 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	struct FText Get_NoWave_Text_1(); // Function Widget_PlayerHUD.Widget_PlayerHUD_C.Get_NoWave_Text_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	struct FText Get_NoTeamKill_Text_1(); // Function Widget_PlayerHUD.Widget_PlayerHUD_C.Get_NoTeamKill_Text_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	struct FText Get_Hardcore_Text_1(); // Function Widget_PlayerHUD.Widget_PlayerHUD_C.Get_Hardcore_Text_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	struct FText GetText_Difficulty(); // Function Widget_PlayerHUD.Widget_PlayerHUD_C.GetText_Difficulty // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	struct FText GetText_Team(); // Function Widget_PlayerHUD.Widget_PlayerHUD_C.GetText_Team // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	struct FText GetText_MaxCond(); // Function Widget_PlayerHUD.Widget_PlayerHUD_C.GetText_MaxCond // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	struct FText GetText_21(); // Function Widget_PlayerHUD.Widget_PlayerHUD_C.GetText_21 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	struct FText GetText_20(); // Function Widget_PlayerHUD.Widget_PlayerHUD_C.GetText_20 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	struct FText GetText_19(); // Function Widget_PlayerHUD.Widget_PlayerHUD_C.GetText_19 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	struct FText GetText_18(); // Function Widget_PlayerHUD.Widget_PlayerHUD_C.GetText_18 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	struct FText GetText_17(); // Function Widget_PlayerHUD.Widget_PlayerHUD_C.GetText_17 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	struct FText GetText_16(); // Function Widget_PlayerHUD.Widget_PlayerHUD_C.GetText_16 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	struct FText GetText_15(); // Function Widget_PlayerHUD.Widget_PlayerHUD_C.GetText_15 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	struct FText GetText_14(); // Function Widget_PlayerHUD.Widget_PlayerHUD_C.GetText_14 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	struct FText GetText_13(); // Function Widget_PlayerHUD.Widget_PlayerHUD_C.GetText_13 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	struct FText GetText_12(); // Function Widget_PlayerHUD.Widget_PlayerHUD_C.GetText_12 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	struct FText GetText_11(); // Function Widget_PlayerHUD.Widget_PlayerHUD_C.GetText_11 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	struct FText GetText_IsFalling(); // Function Widget_PlayerHUD.Widget_PlayerHUD_C.GetText_IsFalling // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	struct FText GetText_10(); // Function Widget_PlayerHUD.Widget_PlayerHUD_C.GetText_10 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	struct FText GetText_9(); // Function Widget_PlayerHUD.Widget_PlayerHUD_C.GetText_9 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	struct FText GetText_8(); // Function Widget_PlayerHUD.Widget_PlayerHUD_C.GetText_8 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	struct FText GetText_7(); // Function Widget_PlayerHUD.Widget_PlayerHUD_C.GetText_7 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	struct FText GetText_6(); // Function Widget_PlayerHUD.Widget_PlayerHUD_C.GetText_6 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	struct FText GetText_5(); // Function Widget_PlayerHUD.Widget_PlayerHUD_C.GetText_5 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	struct FText GetText_4(); // Function Widget_PlayerHUD.Widget_PlayerHUD_C.GetText_4 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	struct FText GetText_3(); // Function Widget_PlayerHUD.Widget_PlayerHUD_C.GetText_3 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	void GetPlayerStatus(struct ULFPlayerStatusComponent* PlayerStatus); // Function Widget_PlayerHUD.Widget_PlayerHUD_C.GetPlayerStatus // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	struct FText GetText_2(); // Function Widget_PlayerHUD.Widget_PlayerHUD_C.GetText_2 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	struct FText GetText_DEV_Camera(); // Function Widget_PlayerHUD.Widget_PlayerHUD_C.GetText_DEV_Camera // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	struct FText GetText_DEV_TimeScale(); // Function Widget_PlayerHUD.Widget_PlayerHUD_C.GetText_DEV_TimeScale // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	struct FText GetText_1(); // Function Widget_PlayerHUD.Widget_PlayerHUD_C.GetText_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	float Get_ProgressBar_Wave_Percent_1(); // Function Widget_PlayerHUD.Widget_PlayerHUD_C.Get_ProgressBar_Wave_Percent_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	void Construct(); // Function Widget_PlayerHUD.Widget_PlayerHUD_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function Widget_PlayerHUD.Widget_PlayerHUD_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_Widget_PlayerHUD(int32_t EntryPoint); // Function Widget_PlayerHUD.Widget_PlayerHUD_C.ExecuteUbergraph_Widget_PlayerHUD // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
};

