// WidgetBlueprintGeneratedClass WB_Marker.WB_Marker_C
// Size: 0x2c0 (Inherited: 0x260)
struct UWB_Marker_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UBorder* b_Content; // 0x268(0x08)
	struct UTextBlock* MarkerDistanceText; // 0x270(0x08)
	struct USlider* S_Marker; // 0x278(0x08)
	struct USlider* S_MarkerParticle; // 0x280(0x08)
	struct USizeBox* SB_MarkerText; // 0x288(0x08)
	float DeltaTime; // 0x290(0x04)
	char pad_294[0x4]; // 0x294(0x04)
	struct AActor* ActorToMark; // 0x298(0x08)
	struct UObject* MarkerIcon; // 0x2a0(0x08)
	struct ACharacter* PlayerCharacter; // 0x2a8(0x08)
	struct UCameraComponent* PlayerCamera; // 0x2b0(0x08)
	float MarkerPrecision; // 0x2b8(0x04)
	float MarkerFacingValue; // 0x2bc(0x04)

	void Construct(); // Function WB_Marker.WB_Marker_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WB_Marker.WB_Marker_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void UpdateMarker(float MarkerPrecision, bool ParticleVisible, struct FLinearColor ParticleColor); // Function WB_Marker.WB_Marker_C.UpdateMarker // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_WB_Marker(int32_t EntryPoint); // Function WB_Marker.WB_Marker_C.ExecuteUbergraph_WB_Marker // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
};

