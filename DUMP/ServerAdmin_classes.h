// WidgetBlueprintGeneratedClass ServerAdmin.ServerAdmin_C
// Size: 0x458 (Inherited: 0x260)
struct UServerAdmin_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* OnRefreshed_MOTD; // 0x268(0x08)
	struct UWidgetAnimation* RefrashTxt; // 0x270(0x08)
	struct UWidgetAnimation* OnRefreshed; // 0x278(0x08)
	struct UWidgetAnimation* OnMotdChanged; // 0x280(0x08)
	struct UButton* Acceptance_Btn; // 0x288(0x08)
	struct UCanvasPanel* Admin; // 0x290(0x08)
	struct UButton* BackBtn; // 0x298(0x08)
	struct UImage* BanListBack; // 0x2a0(0x08)
	struct UScrollBox* BanListBox; // 0x2a8(0x08)
	struct UImage* BanListTitleBack; // 0x2b0(0x08)
	struct UImage* BtmBack; // 0x2b8(0x08)
	struct UButton* Edit_Btn; // 0x2c0(0x08)
	struct UMultiLineEditableText* EditableTextBox_MOTD; // 0x2c8(0x08)
	struct UImage* Icon_Back; // 0x2d0(0x08)
	struct UImage* Icon_Save; // 0x2d8(0x08)
	struct UImage* Icon_SaveAs; // 0x2e0(0x08)
	struct UImage* Icon_SteamInvite; // 0x2e8(0x08)
	struct UImage* InputBox_Back; // 0x2f0(0x08)
	struct UCanvasPanel* Inputpassword; // 0x2f8(0x08)
	struct UImage* InputPasswordBack; // 0x300(0x08)
	struct UEditableTextBox* InputPW; // 0x308(0x08)
	struct UTextBlock* LimitCount; // 0x310(0x08)
	struct UImage* LimitCountBack; // 0x318(0x08)
	struct UImage* MsgBack; // 0x320(0x08)
	struct UImage* MsgBack_Admin; // 0x328(0x08)
	struct UCanvasPanel* NormalPlayer; // 0x330(0x08)
	struct UImage* PlayerBack; // 0x338(0x08)
	struct UImage* PlayerBack_Admin; // 0x340(0x08)
	struct UScrollBox* PlayerListBox; // 0x348(0x08)
	struct UScrollBox* PlayerListBox_Admin; // 0x350(0x08)
	struct UImage* PlayerTileBack; // 0x358(0x08)
	struct UImage* PlayerTileBack_2; // 0x360(0x08)
	struct UButton* RefreshBtn; // 0x368(0x08)
	struct UButton* RefreshBtn_2; // 0x370(0x08)
	struct UButton* RefreshBtn_3; // 0x378(0x08)
	struct UImage* RefreshIcon; // 0x380(0x08)
	struct UImage* RefreshIcon_2; // 0x388(0x08)
	struct UImage* RefreshIcon_3; // 0x390(0x08)
	struct UButton* SaveAsBtn; // 0x398(0x08)
	struct UButton* SaveBtn; // 0x3a0(0x08)
	struct UScrollBox* ScrollBox_TextBox_MOTD; // 0x3a8(0x08)
	struct UImage* SPACE; // 0x3b0(0x08)
	struct UImage* SPACE_2; // 0x3b8(0x08)
	struct UImage* SPACE_3; // 0x3c0(0x08)
	struct UImage* SPACE_4; // 0x3c8(0x08)
	struct UImage* Space1_2; // 0x3d0(0x08)
	struct UImage* Space1_3; // 0x3d8(0x08)
	struct UImage* Space1_4; // 0x3e0(0x08)
	struct UImage* Space1_5; // 0x3e8(0x08)
	struct UImage* Space1_6; // 0x3f0(0x08)
	struct UImage* Space2_2; // 0x3f8(0x08)
	struct UImage* Space2_3; // 0x400(0x08)
	struct UImage* Space2_4; // 0x408(0x08)
	struct UImage* Space2_5; // 0x410(0x08)
	struct UImage* Space3_2; // 0x418(0x08)
	struct UImage* Space3_3; // 0x420(0x08)
	struct UImage* Space3_4; // 0x428(0x08)
	struct UImage* Space3_5; // 0x430(0x08)
	struct UButton* SteamInviteBtn; // 0x438(0x08)
	struct UButton* TeamManager_Icon_KickBtn; // 0x440(0x08)
	struct UTextBlock* TextBox_MOTD; // 0x448(0x08)
	struct UButton* UnVan_Btn; // 0x450(0x08)

	void OnRefresh(); // Function ServerAdmin.ServerAdmin_C.OnRefresh // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnMotdEdit(); // Function ServerAdmin.ServerAdmin_C.OnMotdEdit // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_ServerAdmin(int32_t EntryPoint); // Function ServerAdmin.ServerAdmin_C.ExecuteUbergraph_ServerAdmin // (Final|UbergraphFunction) // @ game+0x1395fe0
};

