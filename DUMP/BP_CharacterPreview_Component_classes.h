// BlueprintGeneratedClass BP_CharacterPreview_Component.BP_CharacterPreview_Component_C
// Size: 0xc1 (Inherited: 0xb0)
struct UBP_CharacterPreview_Component_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	struct ABP_PreviewCharacter_C* PreviewChar_Ref; // 0xb8(0x08)
	bool bInitialized; // 0xc0(0x01)

	void ReceiveBeginPlay(); // Function BP_CharacterPreview_Component.BP_CharacterPreview_Component_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void Refresh(); // Function BP_CharacterPreview_Component.BP_CharacterPreview_Component_C.Refresh // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void InitialSpawn(); // Function BP_CharacterPreview_Component.BP_CharacterPreview_Component_C.InitialSpawn // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_BP_CharacterPreview_Component(int32_t EntryPoint); // Function BP_CharacterPreview_Component.BP_CharacterPreview_Component_C.ExecuteUbergraph_BP_CharacterPreview_Component // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
};

