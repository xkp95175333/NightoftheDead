// WidgetBlueprintGeneratedClass WBP_PreviewChar.WBP_PreviewChar_C
// Size: 0x2fa (Inherited: 0x260)
struct UWBP_PreviewChar_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* BlendIn; // 0x268(0x08)
	struct UWidgetAnimation* BlendOut; // 0x270(0x08)
	struct UImage* Background; // 0x278(0x08)
	struct UImage* BorderBottom; // 0x280(0x08)
	struct UImage* BorderLeft; // 0x288(0x08)
	struct UImage* BorderRight; // 0x290(0x08)
	struct UImage* BorderTop; // 0x298(0x08)
	struct UImage* PreviewChar; // 0x2a0(0x08)
	struct ABP_PreviewCharacter_C* PreviewCharRef; // 0x2a8(0x08)
	bool Pressed; // 0x2b0(0x01)
	char pad_2B1[0x3]; // 0x2b1(0x03)
	struct FLinearColor BackgroundColor; // 0x2b4(0x10)
	char pad_2C4[0x4]; // 0x2c4(0x04)
	struct USkeletalMesh* PreviewMesh; // 0x2c8(0x08)
	struct UAnimSequence* BaseAnimation; // 0x2d0(0x08)
	bool Border_Top; // 0x2d8(0x01)
	bool Border_Bottom; // 0x2d9(0x01)
	bool Border_Left; // 0x2da(0x01)
	bool Border_Right; // 0x2db(0x01)
	struct FLinearColor Border_Color; // 0x2dc(0x10)
	char pad_2EC[0x4]; // 0x2ec(0x04)
	struct UAnimSequence* TemporaryAnimation; // 0x2f0(0x08)
	bool AllowToZoom; // 0x2f8(0x01)
	bool AllowToRotate; // 0x2f9(0x01)

	void BorderSettings(); // Function WBP_PreviewChar.WBP_PreviewChar_C.BorderSettings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void SetReferenceToPlayerCharacter(struct ABP_PreviewCharacter_C* PreviewCharReference); // Function WBP_PreviewChar.WBP_PreviewChar_C.SetReferenceToPlayerCharacter // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	struct FLinearColor GetBackgroundColor(); // Function WBP_PreviewChar.WBP_PreviewChar_C.GetBackgroundColor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	void Construct(); // Function WBP_PreviewChar.WBP_PreviewChar_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void BlendAnimOut(); // Function WBP_PreviewChar.WBP_PreviewChar_C.BlendAnimOut // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void BlendAnimIn(); // Function WBP_PreviewChar.WBP_PreviewChar_C.BlendAnimIn // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function WBP_PreviewChar.WBP_PreviewChar_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_WBP_PreviewChar(int32_t EntryPoint); // Function WBP_PreviewChar.WBP_PreviewChar_C.ExecuteUbergraph_WBP_PreviewChar // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
};

