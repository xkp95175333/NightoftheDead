// WidgetBlueprintGeneratedClass W_Credits.W_Credits_C
// Size: 0x2fc (Inherited: 0x260)
struct UW_Credits_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* FadeIn; // 0x268(0x08)
	struct UImage* Image_Fond; // 0x270(0x08)
	struct UImage* Image_MyLogo; // 0x278(0x08)
	struct UBackgroundBlur* MyBlur; // 0x280(0x08)
	struct UVerticalBox* VerticalBox_Credits; // 0x288(0x08)
	struct UW_CreditsTitleName_C* W_CreditsTitle_Additionals; // 0x290(0x08)
	struct UW_CreditsTitleName_C* W_CreditsTitle_Director; // 0x298(0x08)
	struct UW_CreditsTitleName_C* W_CreditsTitle_GameBy; // 0x2a0(0x08)
	struct UW_CreditsTitleName_C* W_CreditsTitle_GameName; // 0x2a8(0x08)
	struct UW_CreditsTitleName_C* W_CreditsTitle_LevelDesigner; // 0x2b0(0x08)
	struct UW_CreditsTitleName_C* W_CreditsTitle_Programmer; // 0x2b8(0x08)
	struct UW_CreditsTitleName_C* W_CreditsTitle_SpecialTanksTo; // 0x2c0(0x08)
	float TestTop; // 0x2c8(0x04)
	bool Invers?; // 0x2cc(0x01)
	char pad_2CD[0x3]; // 0x2cd(0x03)
	float StartAt; // 0x2d0(0x04)
	float EndAt; // 0x2d4(0x04)
	float FadeInSpeed; // 0x2d8(0x04)
	float TimerSpeed; // 0x2dc(0x04)
	float AnimSpeed; // 0x2e0(0x04)
	float ActualTop; // 0x2e4(0x04)
	struct UWidget* ParentWidget; // 0x2e8(0x08)
	bool Stopped?; // 0x2f0(0x01)
	char pad_2F1[0x3]; // 0x2f1(0x03)
	struct FName MainMenuLevel; // 0x2f4(0x08)

	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function W_Credits.W_Credits_C.OnKeyUp // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function W_Credits.W_Credits_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void CloseCredits(); // Function W_Credits.W_Credits_C.CloseCredits // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void PreConstruct(bool IsDesignTime); // Function W_Credits.W_Credits_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void Construct(); // Function W_Credits.W_Credits_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_W_Credits(int32_t EntryPoint); // Function W_Credits.W_Credits_C.ExecuteUbergraph_W_Credits // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
};

