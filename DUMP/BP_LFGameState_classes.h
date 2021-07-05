// BlueprintGeneratedClass BP_LFGameState.BP_LFGameState_C
// Size: 0x3dc (Inherited: 0x3b0)
struct ABP_LFGameState_C : ALFGameStateBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3b0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x3b8(0x08)
	struct AUltra_Dynamic_Sky_BP_C* DynamicSky; // 0x3c0(0x08)
	float EvalTime; // 0x3c8(0x04)
	char pad_3CC[0x4]; // 0x3cc(0x04)
	struct UCurveFloat* DateEval; // 0x3d0(0x08)
	float DateTime; // 0x3d8(0x04)

	void ReceiveBeginPlay(); // Function BP_LFGameState.BP_LFGameState_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1395fe0
	void ReceiveTick(float DeltaSeconds); // Function BP_LFGameState.BP_LFGameState_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void CacheSky(); // Function BP_LFGameState.BP_LFGameState_C.CacheSky // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_BP_LFGameState(int32_t EntryPoint); // Function BP_LFGameState.BP_LFGameState_C.ExecuteUbergraph_BP_LFGameState // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
};

