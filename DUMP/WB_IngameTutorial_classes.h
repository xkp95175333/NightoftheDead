// WidgetBlueprintGeneratedClass WB_IngameTutorial.WB_IngameTutorial_C
// Size: 0x31a (Inherited: 0x260)
struct UWB_IngameTutorial_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* Fade; // 0x268(0x08)
	struct UBorder* b_Shine; // 0x270(0x08)
	struct UImage* BackgroundImg; // 0x278(0x08)
	struct UBorder* Border_1; // 0x280(0x08)
	struct UBorder* Border_2; // 0x288(0x08)
	struct UImage* Image_1; // 0x290(0x08)
	struct UImage* Img_Row1_Icon1; // 0x298(0x08)
	struct UImage* Img_Row1_Icon2; // 0x2a0(0x08)
	struct UImage* Img_Row2_Icon1; // 0x2a8(0x08)
	struct UImage* Img_Row2_Icon2; // 0x2b0(0x08)
	struct USizeBox* SB_Row1_Icon1; // 0x2b8(0x08)
	struct USizeBox* SB_Row1_Icon2; // 0x2c0(0x08)
	struct USizeBox* SB_Row2_Icon1; // 0x2c8(0x08)
	struct USizeBox* SB_Row2_Icon2; // 0x2d0(0x08)
	struct UTextBlock* Text1_Row1; // 0x2d8(0x08)
	struct UTextBlock* Text1_Row2; // 0x2e0(0x08)
	struct UTextBlock* Text2_Row1; // 0x2e8(0x08)
	struct UTextBlock* Text2_Row2; // 0x2f0(0x08)
	struct UTextBlock* Text3_Row1; // 0x2f8(0x08)
	struct UTextBlock* Text3_Row2; // 0x300(0x08)
	struct UVerticalBox* VB_Content; // 0x308(0x08)
	struct FVector2D WidthHeight; // 0x310(0x08)
	enum class E_IngameTutorial E_IngameTutorial; // 0x318(0x01)
	bool TutorialFinished; // 0x319(0x01)

	void CheckRows(struct FS_IngameTutorial In Row 1, struct FS_IngameTutorial In Row 2); // Function WB_IngameTutorial.WB_IngameTutorial_C.CheckRows // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ValidateData(struct FS_IngameTutorial Row1, struct FS_IngameTutorial Row2, struct FS_IngameTutorial Row1out, struct FS_IngameTutorial Row2out); // Function WB_IngameTutorial.WB_IngameTutorial_C.ValidateData // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void GetData(struct FS_IngameTutorial Row1, struct FS_IngameTutorial Row2, struct FS_IngameTutorial Row1out, struct FS_IngameTutorial Row2out); // Function WB_IngameTutorial.WB_IngameTutorial_C.GetData // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void DisplayIngameTutorial(float DisplayTime, struct FS_IngameTutorial Row1, struct FS_IngameTutorial Row2, struct FLinearColor InColorAndOpacity); // Function WB_IngameTutorial.WB_IngameTutorial_C.DisplayIngameTutorial // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Construct(); // Function WB_IngameTutorial.WB_IngameTutorial_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void RemoveTutorial(); // Function WB_IngameTutorial.WB_IngameTutorial_C.RemoveTutorial // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_WB_IngameTutorial(int32_t EntryPoint); // Function WB_IngameTutorial.WB_IngameTutorial_C.ExecuteUbergraph_WB_IngameTutorial // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
};

