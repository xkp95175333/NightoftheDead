// WidgetBlueprintGeneratedClass WBP_Title_LoadMenu.WBP_Title_LoadMenu_C
// Size: 0x318 (Inherited: 0x260)
struct UWBP_Title_LoadMenu_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UTextBlock* DateText; // 0x268(0x08)
	struct UTextBlock* DifficultyText; // 0x270(0x08)
	struct UTextBlock* GameDateText; // 0x278(0x08)
	struct UImage* Image_1; // 0x280(0x08)
	struct UOverlay* Overlay_HostMenu; // 0x288(0x08)
	struct UVerticalBox* PlayerList; // 0x290(0x08)
	struct UScrollBox* SaveGameList; // 0x298(0x08)
	struct USaveGameThumbnail_C* SaveGameThumbnail; // 0x2a0(0x08)
	struct UWBP_BtnLarge_C* WBP_BtnLarge_Delete; // 0x2a8(0x08)
	struct UWBP_BtnLarge_C* WBP_BtnLarge_Load; // 0x2b0(0x08)
	struct UWBP_Main_Multi_HostGame_C* WBP_MainMenu_Multiplayer_HostGame_188; // 0x2b8(0x08)
	struct USaveGameSlot_C* CurrentSelectedSlot; // 0x2c0(0x08)
	struct FMulticastInlineDelegate Clicked Back Button; // 0x2c8(0x10)
	struct FMulticastInlineDelegate Clicked Load Button; // 0x2d8(0x10)
	struct FMulticastInlineDelegate Clicked Save Button; // 0x2e8(0x10)
	struct FMulticastInlineDelegate OnSaveDeleted; // 0x2f8(0x10)
	bool bIsStandalone; // 0x308(0x01)
	char pad_309[0x7]; // 0x309(0x07)
	struct UWBP_Wrapper_Confirmation_C* ConfirmWidgetRef; // 0x310(0x08)

	void ClearPreview(); // Function WBP_Title_LoadMenu.WBP_Title_LoadMenu_C.ClearPreview // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void GetSave(struct FName Level, bool IsValid); // Function WBP_Title_LoadMenu.WBP_Title_LoadMenu_C.GetSave // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	void Select Current Slot(); // Function WBP_Title_LoadMenu.WBP_Title_LoadMenu_C.Select Current Slot // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Clear Save Game List(); // Function WBP_Title_LoadMenu.WBP_Title_LoadMenu_C.Clear Save Game List // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Delete Slot(); // Function WBP_Title_LoadMenu.WBP_Title_LoadMenu_C.Delete Slot // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Update Player List(struct TArray<struct FString> Players); // Function WBP_Title_LoadMenu.WBP_Title_LoadMenu_C.Update Player List // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Select Current Slot by Name(struct FString Slot Name); // Function WBP_Title_LoadMenu.WBP_Title_LoadMenu_C.Select Current Slot by Name // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Add And Update Slot Widgets(); // Function WBP_Title_LoadMenu.WBP_Title_LoadMenu_C.Add And Update Slot Widgets // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Set Current Slot(struct USaveGameSlot_C* CurrentSelectedSlot); // Function WBP_Title_LoadMenu.WBP_Title_LoadMenu_C.Set Current Slot // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void CloseSaveMenu(); // Function WBP_Title_LoadMenu.WBP_Title_LoadMenu_C.CloseSaveMenu // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OpenSaveMenu(); // Function WBP_Title_LoadMenu.WBP_Title_LoadMenu_C.OpenSaveMenu // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void SaveGameToSlot(); // Function WBP_Title_LoadMenu.WBP_Title_LoadMenu_C.SaveGameToSlot // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Construct(); // Function WBP_Title_LoadMenu.WBP_Title_LoadMenu_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void Select Save Slot(struct USaveGameSlot_C* Slot); // Function WBP_Title_LoadMenu.WBP_Title_LoadMenu_C.Select Save Slot // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Add Widget Slot(struct FString Name); // Function WBP_Title_LoadMenu.WBP_Title_LoadMenu_C.Add Widget Slot // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnLoadClick(); // Function WBP_Title_LoadMenu.WBP_Title_LoadMenu_C.OnLoadClick // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnDeleteClick(); // Function WBP_Title_LoadMenu.WBP_Title_LoadMenu_C.OnDeleteClick // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void LoadGameFromSlot(); // Function WBP_Title_LoadMenu.WBP_Title_LoadMenu_C.LoadGameFromSlot // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void SetMultiplayer(); // Function WBP_Title_LoadMenu.WBP_Title_LoadMenu_C.SetMultiplayer // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void SetSingleplayer(); // Function WBP_Title_LoadMenu.WBP_Title_LoadMenu_C.SetSingleplayer // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__WBP_BtnLarge_Load_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature(); // Function WBP_Title_LoadMenu.WBP_Title_LoadMenu_C.BndEvt__WBP_BtnLarge_Load_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__WBP_BtnLarge_Delete_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature(); // Function WBP_Title_LoadMenu.WBP_Title_LoadMenu_C.BndEvt__WBP_BtnLarge_Delete_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void OnClicked_Event_1(); // Function WBP_Title_LoadMenu.WBP_Title_LoadMenu_C.OnClicked_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnMultiGameLoad(); // Function WBP_Title_LoadMenu.WBP_Title_LoadMenu_C.OnMultiGameLoad // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void PreConstruct(bool IsDesignTime); // Function WBP_Title_LoadMenu.WBP_Title_LoadMenu_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void OnMultiGameLoad_Event_1(); // Function WBP_Title_LoadMenu.WBP_Title_LoadMenu_C.OnMultiGameLoad_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_WBP_Title_LoadMenu(int32_t EntryPoint); // Function WBP_Title_LoadMenu.WBP_Title_LoadMenu_C.ExecuteUbergraph_WBP_Title_LoadMenu // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
	void OnSaveDeleted__DelegateSignature(); // Function WBP_Title_LoadMenu.WBP_Title_LoadMenu_C.OnSaveDeleted__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Clicked Save Button__DelegateSignature(); // Function WBP_Title_LoadMenu.WBP_Title_LoadMenu_C.Clicked Save Button__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Clicked Load Button__DelegateSignature(); // Function WBP_Title_LoadMenu.WBP_Title_LoadMenu_C.Clicked Load Button__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Clicked Back Button__DelegateSignature(); // Function WBP_Title_LoadMenu.WBP_Title_LoadMenu_C.Clicked Back Button__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
};

