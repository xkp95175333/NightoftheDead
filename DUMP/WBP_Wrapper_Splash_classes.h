// WidgetBlueprintGeneratedClass WBP_Wrapper_Splash.WBP_Wrapper_Splash_C
// Size: 0x418 (Inherited: 0x260)
struct UWBP_Wrapper_Splash_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWBP_Splash_C* WBP_Splash; // 0x268(0x08)
	float TimeIntro; // 0x270(0x04)
	char pad_274[0x4]; // 0x274(0x04)
	struct UTexture2D* BackgroundImage; // 0x278(0x08)
	struct FLinearColor BackgroundImageColor; // 0x280(0x10)
	struct FMargin LogoPosition; // 0x290(0x10)
	float LogoSizeHeight; // 0x2a0(0x04)
	float LogoSizeWidth; // 0x2a4(0x04)
	struct UTexture2D* Logo; // 0x2a8(0x08)
	struct FText GameNameText; // 0x2b0(0x18)
	struct FSlateFontInfo GameNameFont; // 0x2c8(0x58)
	struct FSlateColor GameNameColor; // 0x320(0x28)
	struct FMargin GameNamePosition; // 0x348(0x10)
	bool AutoClose?; // 0x358(0x01)
	char pad_359[0x7]; // 0x359(0x07)
	struct FText MadeByText; // 0x360(0x18)
	struct FSlateFontInfo MadeByFont; // 0x378(0x58)
	struct FSlateColor MadeByColor; // 0x3d0(0x28)
	struct FMargin MadeByPosition; // 0x3f8(0x10)
	float BackgroundBlur; // 0x408(0x04)
	char pad_40C[0x4]; // 0x40c(0x04)
	struct UWidgetAnimation* IntroAnim; // 0x410(0x08)

	void PlayIntroAnimation(float Time); // Function WBP_Wrapper_Splash.WBP_Wrapper_Splash_C.PlayIntroAnimation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Construct(); // Function WBP_Wrapper_Splash.WBP_Wrapper_Splash_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void PreConstruct(bool IsDesignTime); // Function WBP_Wrapper_Splash.WBP_Wrapper_Splash_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void OnIntroFinished(); // Function WBP_Wrapper_Splash.WBP_Wrapper_Splash_C.OnIntroFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_WBP_Wrapper_Splash(int32_t EntryPoint); // Function WBP_Wrapper_Splash.WBP_Wrapper_Splash_C.ExecuteUbergraph_WBP_Wrapper_Splash // (Final|UbergraphFunction) // @ game+0x1395fe0
};

