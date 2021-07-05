// BlueprintGeneratedClass BP_AnimatedBook_LF.BP_AnimatedBook_LF_C
// Size: 0xb90 (Inherited: 0xb5c)
struct ABP_AnimatedBook_LF_C : ABP_AnimatedBook_C {
	char pad_B5C[0x4]; // 0xb5c(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb60(0x08)
	struct UPointLightComponent* PointLight2; // 0xb68(0x08)
	struct UPointLightComponent* PointLight1; // 0xb70(0x08)
	struct UPointLightComponent* PointLight; // 0xb78(0x08)
	struct UDataTable* PageTable; // 0xb80(0x08)
	struct UDataTable* EphemeraTable; // 0xb88(0x08)

	void UserConstructionScript(); // Function BP_AnimatedBook_LF.BP_AnimatedBook_LF_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ReceiveTick(float DeltaSeconds); // Function BP_AnimatedBook_LF.BP_AnimatedBook_LF_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void ReceiveBeginPlay(); // Function BP_AnimatedBook_LF.BP_AnimatedBook_LF_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_BP_AnimatedBook_LF(int32_t EntryPoint); // Function BP_AnimatedBook_LF.BP_AnimatedBook_LF_C.ExecuteUbergraph_BP_AnimatedBook_LF // (Final|UbergraphFunction) // @ game+0x1395fe0
};

