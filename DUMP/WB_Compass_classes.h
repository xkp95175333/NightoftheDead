// WidgetBlueprintGeneratedClass WB_Compass.WB_Compass_C
// Size: 0x2f0 (Inherited: 0x260)
struct UWB_Compass_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* CompassImage; // 0x268(0x08)
	struct UImage* Image_1; // 0x270(0x08)
	struct UImage* Image_2; // 0x278(0x08)
	struct UImage* Image_3; // 0x280(0x08)
	struct UImage* Img_Lightning; // 0x288(0x08)
	struct UOverlay* OV_Markers; // 0x290(0x08)
	float DeltaTime; // 0x298(0x04)
	char pad_29C[0x4]; // 0x29c(0x04)
	struct TMap<struct AActor*, struct UWB_Marker_C*> ActorChildWidgetMap; // 0x2a0(0x50)

	void RemoveMarker(struct AActor* Actor To Mark); // Function WB_Compass.WB_Compass_C.RemoveMarker // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void CreateMarker(struct AActor* ActorToMark, struct UObject* MarkerIcon, struct ACharacter* PlayerCharacter, struct UCameraComponent* PlayerCamera); // Function WB_Compass.WB_Compass_C.CreateMarker // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void UpdateMarker(struct AActor* ActorToMark, float MarkerPrecision, bool ParticleVisible, struct FLinearColor ParticleColor); // Function WB_Compass.WB_Compass_C.UpdateMarker // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WB_Compass.WB_Compass_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_WB_Compass(int32_t EntryPoint); // Function WB_Compass.WB_Compass_C.ExecuteUbergraph_WB_Compass // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
};

