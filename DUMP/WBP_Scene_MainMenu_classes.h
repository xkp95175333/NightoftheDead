// WidgetBlueprintGeneratedClass WBP_Scene_MainMenu.WBP_Scene_MainMenu_C
// Size: 0x318 (Inherited: 0x260)
struct UWBP_Scene_MainMenu_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* AnimStop; // 0x268(0x08)
	struct UWidgetAnimation* AnimMenuAppear; // 0x270(0x08)
	struct UWidgetAnimation* AnimStart; // 0x278(0x08)
	struct UWidgetAnimation* AnimFade; // 0x280(0x08)
	struct UBorder* Bdr_FilmFade; // 0x288(0x08)
	struct UImage* Image_342; // 0x290(0x08)
	struct UImage* Img_DummyBG; // 0x298(0x08)
	struct UImage* Img_MenuBg; // 0x2a0(0x08)
	struct USizeBox* SZX_Menu; // 0x2a8(0x08)
	struct UTextBlock* TextBlock_228; // 0x2b0(0x08)
	struct UVerticalBox* VBX_Buttons; // 0x2b8(0x08)
	struct UVerticalBox* VBX_Start; // 0x2c0(0x08)
	struct UWBP_BtnLarge_C* WBP_BtnLarge; // 0x2c8(0x08)
	struct UWBP_BtnLarge_C* WBP_BtnLarge_2; // 0x2d0(0x08)
	struct UWBP_BtnLarge_C* WBP_BtnLarge_3; // 0x2d8(0x08)
	struct UWBP_BtnLarge_C* WBP_BtnLarge_4; // 0x2e0(0x08)
	struct UWBP_BtnLarge_C* WBP_BtnLarge_5; // 0x2e8(0x08)
	struct UWBP_BtnLarge_C* WBP_BtnLarge_6; // 0x2f0(0x08)
	struct UWBP_BtnLarge_C* WBP_BtnLarge_7; // 0x2f8(0x08)
	struct UWBP_BtnLarge_C* WBP_BtnLarge_Single; // 0x300(0x08)
	struct UWBP_Line3px_C* WBP_Line3px; // 0x308(0x08)
	struct UWBP_Line3px_C* WBP_Line3px_148; // 0x310(0x08)

	struct FText GetText_Version(); // Function WBP_Scene_MainMenu.WBP_Scene_MainMenu_C.GetText_Version // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	struct FEventReply On_Bdr_FilmFade_MouseButtonDown_1(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_Scene_MainMenu.WBP_Scene_MainMenu_C.On_Bdr_FilmFade_MouseButtonDown_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Construct(); // Function WBP_Scene_MainMenu.WBP_Scene_MainMenu_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void DisableButton(); // Function WBP_Scene_MainMenu.WBP_Scene_MainMenu_C.DisableButton // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void EnableButton(); // Function WBP_Scene_MainMenu.WBP_Scene_MainMenu_C.EnableButton // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_WBP_Scene_MainMenu(int32_t EntryPoint); // Function WBP_Scene_MainMenu.WBP_Scene_MainMenu_C.ExecuteUbergraph_WBP_Scene_MainMenu // (Final|UbergraphFunction) // @ game+0x1395fe0
};

