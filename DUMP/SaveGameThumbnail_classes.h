// WidgetBlueprintGeneratedClass SaveGameThumbnail.SaveGameThumbnail_C
// Size: 0x270 (Inherited: 0x260)
struct USaveGameThumbnail_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* Thumb; // 0x268(0x08)

	void Set Thumbnail(struct UTexture2D* Texture2D); // Function SaveGameThumbnail.SaveGameThumbnail_C.Set Thumbnail // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ClearThumbnail(); // Function SaveGameThumbnail.SaveGameThumbnail_C.ClearThumbnail // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_SaveGameThumbnail(int32_t EntryPoint); // Function SaveGameThumbnail.SaveGameThumbnail_C.ExecuteUbergraph_SaveGameThumbnail // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
};

