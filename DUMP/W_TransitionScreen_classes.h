// WidgetBlueprintGeneratedClass W_TransitionScreen.W_TransitionScreen_C
// Size: 0x29c (Inherited: 0x260)
struct UW_TransitionScreen_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* Fade; // 0x268(0x08)
	struct UImage* Image_Fond; // 0x270(0x08)
	struct FText Message; // 0x278(0x18)
	bool AutoClose?; // 0x290(0x01)
	char pad_291[0x3]; // 0x291(0x03)
	float TimeWaitOnAutoClose; // 0x294(0x04)
	float FadePlaybackSpeed; // 0x298(0x04)

	void CloseLoading(); // Function W_TransitionScreen.W_TransitionScreen_C.CloseLoading // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void PreConstruct(bool IsDesignTime); // Function W_TransitionScreen.W_TransitionScreen_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void Construct(); // Function W_TransitionScreen.W_TransitionScreen_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void Event_OnAnimationFinished(); // Function W_TransitionScreen.W_TransitionScreen_C.Event_OnAnimationFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_W_TransitionScreen(int32_t EntryPoint); // Function W_TransitionScreen.W_TransitionScreen_C.ExecuteUbergraph_W_TransitionScreen // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
};

