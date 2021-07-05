// BlueprintGeneratedClass BTS_SetRandomAroundSpawnedLocation.BTS_SetRandomAroundSpawnedLocation_C
// Size: 0xa4 (Inherited: 0x98)
struct UBTS_SetRandomAroundSpawnedLocation_C : UBTService_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x98(0x08)
	float WanderRadius; // 0xa0(0x04)

	void ReceiveActivationAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTS_SetRandomAroundSpawnedLocation.BTS_SetRandomAroundSpawnedLocation_C.ReceiveActivationAI // (Event|Protected|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_BTS_SetRandomAroundSpawnedLocation(int32_t EntryPoint); // Function BTS_SetRandomAroundSpawnedLocation.BTS_SetRandomAroundSpawnedLocation_C.ExecuteUbergraph_BTS_SetRandomAroundSpawnedLocation // (Final|UbergraphFunction) // @ game+0x1395fe0
};

