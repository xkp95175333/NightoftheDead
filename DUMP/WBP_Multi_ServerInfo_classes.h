// WidgetBlueprintGeneratedClass WBP_Multi_ServerInfo.WBP_Multi_ServerInfo_C
// Size: 0x458 (Inherited: 0x260)
struct UWBP_Multi_ServerInfo_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UTextBlock* TextBlock_Day; // 0x268(0x08)
	struct UTextBlock* TextBlock_Difficulty; // 0x270(0x08)
	struct UTextBlock* TextBlock_Hardcore; // 0x278(0x08)
	struct UTextBlock* TextBlock_Mode; // 0x280(0x08)
	struct UTextBlock* TextBlock_NoWave; // 0x288(0x08)
	struct UTextBlock* TextBlock_Password; // 0x290(0x08)
	struct UTextBlock* TextBlock_Ping; // 0x298(0x08)
	struct UTextBlock* TextBlock_Player; // 0x2a0(0x08)
	struct UTextBlock* TextBlock_ServerName; // 0x2a8(0x08)
	struct UTextBlock* TextBlock_TeamKill; // 0x2b0(0x08)
	bool MakeAnim?; // 0x2b8(0x01)
	char pad_2B9[0x3]; // 0x2b9(0x03)
	float ActualLeft; // 0x2bc(0x04)
	struct UHorizontalBoxSlot* MyLeft; // 0x2c0(0x08)
	bool IsHovered?; // 0x2c8(0x01)
	char pad_2C9[0x3]; // 0x2c9(0x03)
	struct FLinearColor MouseEnterColor; // 0x2cc(0x10)
	struct FLinearColor MouseLeaveColor; // 0x2dc(0x10)
	char pad_2EC[0x4]; // 0x2ec(0x04)
	struct UWBP_Core_MainMenu_C* MainMenuRef; // 0x2f0(0x08)
	struct FBlueprintSessionResult SessionRef; // 0x2f8(0x108)
	bool SessinInfo; // 0x400(0x01)
	char pad_401[0x3]; // 0x401(0x03)
	int32_t Click; // 0x404(0x04)
	int32_t FontSize; // 0x408(0x04)
	char pad_40C[0x4]; // 0x40c(0x04)
	struct FSlateColor FontColor; // 0x410(0x28)
	struct FString ServerName; // 0x438(0x10)
	struct FString Password; // 0x448(0x10)

	void PreConstruct(bool IsDesignTime); // Function WBP_Multi_ServerInfo.WBP_Multi_ServerInfo_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_WBP_Multi_ServerInfo(int32_t EntryPoint); // Function WBP_Multi_ServerInfo.WBP_Multi_ServerInfo_C.ExecuteUbergraph_WBP_Multi_ServerInfo // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
};

