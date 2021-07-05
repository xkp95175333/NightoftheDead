// WidgetBlueprintGeneratedClass W_LoadingScreen_Client.W_LoadingScreen_Client_C
// Size: 0x2d8 (Inherited: 0x260)
struct UW_LoadingScreen_Client_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* Fade; // 0x268(0x08)
	struct UImage* Image_873; // 0x270(0x08)
	struct UImage* Image_940; // 0x278(0x08)
	struct UImage* Image_Fond; // 0x280(0x08)
	struct UImage* Logo; // 0x288(0x08)
	struct UProgressBar* ProgressBar_Load; // 0x290(0x08)
	struct UTextBlock* TextBlock_Message; // 0x298(0x08)
	struct FText Message; // 0x2a0(0x18)
	bool AutoClose?; // 0x2b8(0x01)
	char pad_2B9[0x3]; // 0x2b9(0x03)
	float TimeWaitOnAutoClose; // 0x2bc(0x04)
	float FadePlaybackSpeed; // 0x2c0(0x04)
	char pad_2C4[0x4]; // 0x2c4(0x04)
	struct TArray<struct TSoftObjectPtr<struct UTexture2D>> LoadingTextures; // 0x2c8(0x10)

	void CloseLoading(); // Function W_LoadingScreen_Client.W_LoadingScreen_Client_C.CloseLoading // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void PreConstruct(bool IsDesignTime); // Function W_LoadingScreen_Client.W_LoadingScreen_Client_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void Construct(); // Function W_LoadingScreen_Client.W_LoadingScreen_Client_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void Event_OnAnimationFinished(); // Function W_LoadingScreen_Client.W_LoadingScreen_Client_C.Event_OnAnimationFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_W_LoadingScreen_Client(int32_t EntryPoint); // Function W_LoadingScreen_Client.W_LoadingScreen_Client_C.ExecuteUbergraph_W_LoadingScreen_Client // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
};

