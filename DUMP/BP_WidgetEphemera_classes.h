// BlueprintGeneratedClass BP_WidgetEphemera.BP_WidgetEphemera_C
// Size: 0x284 (Inherited: 0x220)
struct ABP_WidgetEphemera_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UWidgetComponent* Widget; // 0x228(0x08)
	struct USceneComponent* Scene; // 0x230(0x08)
	struct ABP_AnimatedBook_C* Book To Control; // 0x238(0x08)
	struct FText ButtonLabelText; // 0x240(0x18)
	enum class E_ButtonFuncts Button Function; // 0x258(0x01)
	char pad_259[0x3]; // 0x259(0x03)
	int32_t Page number; // 0x25c(0x04)
	float Open Book Amount; // 0x260(0x04)
	char pad_264[0x4]; // 0x264(0x04)
	struct TArray<struct UW_WidgetButton_C*> My WidgetButton; // 0x268(0x10)
	bool Face Reverse Direction; // 0x278(0x01)
	char pad_279[0x3]; // 0x279(0x03)
	struct FVector2D Widget Draw Size; // 0x27c(0x08)

	void UserConstructionScript(); // Function BP_WidgetEphemera.BP_WidgetEphemera_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnOpened(); // Function BP_WidgetEphemera.BP_WidgetEphemera_C.OnOpened // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ReceiveBeginPlay(); // Function BP_WidgetEphemera.BP_WidgetEphemera_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1395fe0
	void SetBook(struct ABP_AnimatedBook_C* Book); // Function BP_WidgetEphemera.BP_WidgetEphemera_C.SetBook // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void SetFace(bool Front); // Function BP_WidgetEphemera.BP_WidgetEphemera_C.SetFace // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_BP_WidgetEphemera(int32_t EntryPoint); // Function BP_WidgetEphemera.BP_WidgetEphemera_C.ExecuteUbergraph_BP_WidgetEphemera // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
};

