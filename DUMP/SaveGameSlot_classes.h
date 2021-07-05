// WidgetBlueprintGeneratedClass SaveGameSlot.SaveGameSlot_C
// Size: 0x2b0 (Inherited: 0x260)
struct USaveGameSlot_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* BG; // 0x268(0x08)
	struct UTextBlock* TextBlock_1; // 0x270(0x08)
	struct FString Name; // 0x278(0x10)
	struct FLinearColor SelectColor; // 0x288(0x10)
	bool IsSelected; // 0x298(0x01)
	char pad_299[0x7]; // 0x299(0x07)
	struct FMulticastInlineDelegate SetSelected; // 0x2a0(0x10)

	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function SaveGameSlot.SaveGameSlot_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function SaveGameSlot.SaveGameSlot_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1395fe0
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function SaveGameSlot.SaveGameSlot_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1395fe0
	void Deselect(); // Function SaveGameSlot.SaveGameSlot_C.Deselect // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Select(bool AutoSelect); // Function SaveGameSlot.SaveGameSlot_C.Select // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function SaveGameSlot.SaveGameSlot_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_SaveGameSlot(int32_t EntryPoint); // Function SaveGameSlot.SaveGameSlot_C.ExecuteUbergraph_SaveGameSlot // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
	void SetSelected__DelegateSignature(struct USaveGameSlot_C* Slot); // Function SaveGameSlot.SaveGameSlot_C.SetSelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
};

