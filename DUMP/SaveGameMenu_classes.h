// WidgetBlueprintGeneratedClass SaveGameMenu.SaveGameMenu_C
// Size: 0x310 (Inherited: 0x260)
struct USaveGameMenu_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UBaseButton_C* BTN_Back; // 0x268(0x08)
	struct UBaseButton_C* BTN_Load; // 0x270(0x08)
	struct UBaseButton_C* BTN_Remove; // 0x278(0x08)
	struct UBaseButton_C* BTN_Save; // 0x280(0x08)
	struct UTextBlock* CraftName; // 0x288(0x08)
	struct UTextBlock* DateText; // 0x290(0x08)
	struct UTextBlock* DifficultyText; // 0x298(0x08)
	struct UEditableTextBox* EditableTextBox_136; // 0x2a0(0x08)
	struct UTextBlock* GameDateText; // 0x2a8(0x08)
	struct UImage* Image_117; // 0x2b0(0x08)
	struct UImage* Image_268; // 0x2b8(0x08)
	struct UVerticalBox* PlayerList; // 0x2c0(0x08)
	struct UScrollBox* SaveGameList; // 0x2c8(0x08)
	struct USaveGameThumbnail_C* SaveGameThumbnail; // 0x2d0(0x08)
	struct USaveGameSlot_C* CurrentSelectedSlot; // 0x2d8(0x08)
	struct FMulticastInlineDelegate Clicked Back Button; // 0x2e0(0x10)
	struct FMulticastInlineDelegate Clicked Load Button; // 0x2f0(0x10)
	struct FMulticastInlineDelegate Clicked Save Button; // 0x300(0x10)

	void Clear Preview(); // Function SaveGameMenu.SaveGameMenu_C.Clear Preview // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	bool Get_BTN_Remove_bIsEnabled_1(); // Function SaveGameMenu.SaveGameMenu_C.Get_BTN_Remove_bIsEnabled_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	bool Get_BTN_Save_bIsEnabled_1(); // Function SaveGameMenu.SaveGameMenu_C.Get_BTN_Save_bIsEnabled_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	bool Get_BTN_Load_bIsEnabled_1(); // Function SaveGameMenu.SaveGameMenu_C.Get_BTN_Load_bIsEnabled_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function SaveGameMenu.SaveGameMenu_C.OnKeyDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Select Current Slot(); // Function SaveGameMenu.SaveGameMenu_C.Select Current Slot // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Clear Save Game List(); // Function SaveGameMenu.SaveGameMenu_C.Clear Save Game List // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Delete Slot(); // Function SaveGameMenu.SaveGameMenu_C.Delete Slot // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Update Player List(struct TArray<struct FString> Players); // Function SaveGameMenu.SaveGameMenu_C.Update Player List // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Select Current Slot by Name(struct FString Slot Name); // Function SaveGameMenu.SaveGameMenu_C.Select Current Slot by Name // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Add And Update Slot Widgets(); // Function SaveGameMenu.SaveGameMenu_C.Add And Update Slot Widgets // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Create New Slot And Check Name(struct FString Slot Name); // Function SaveGameMenu.SaveGameMenu_C.Create New Slot And Check Name // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Set Current Slot(struct USaveGameSlot_C* CurrentSelectedSlot); // Function SaveGameMenu.SaveGameMenu_C.Set Current Slot // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__BaseButton_83_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(); // Function SaveGameMenu.SaveGameMenu_C.BndEvt__BaseButton_83_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__BaseButton_C_0_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature(); // Function SaveGameMenu.SaveGameMenu_C.BndEvt__BaseButton_C_0_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void Save Game(); // Function SaveGameMenu.SaveGameMenu_C.Save Game // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__EditableTextBox_135_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText Text, enum class ETextCommit CommitMethod); // Function SaveGameMenu.SaveGameMenu_C.BndEvt__EditableTextBox_135_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1395fe0
	void Construct(); // Function SaveGameMenu.SaveGameMenu_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void Make And Save New Slot (); // Function SaveGameMenu.SaveGameMenu_C.Make And Save New Slot  // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__BTN_Save_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(); // Function SaveGameMenu.SaveGameMenu_C.BndEvt__BTN_Save_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void Add Widget Slot(struct FString Name); // Function SaveGameMenu.SaveGameMenu_C.Add Widget Slot // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void BndEvt__BaseButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(); // Function SaveGameMenu.SaveGameMenu_C.BndEvt__BaseButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1395fe0
	void Select Save Slot(struct USaveGameSlot_C* Slot); // Function SaveGameMenu.SaveGameMenu_C.Select Save Slot // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_SaveGameMenu(int32_t EntryPoint); // Function SaveGameMenu.SaveGameMenu_C.ExecuteUbergraph_SaveGameMenu // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
	void Clicked Save Button__DelegateSignature(); // Function SaveGameMenu.SaveGameMenu_C.Clicked Save Button__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Clicked Load Button__DelegateSignature(); // Function SaveGameMenu.SaveGameMenu_C.Clicked Load Button__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Clicked Back Button__DelegateSignature(); // Function SaveGameMenu.SaveGameMenu_C.Clicked Back Button__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
};

