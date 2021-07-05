// BlueprintGeneratedClass BTS_CheckRecentlyHit.BTS_CheckRecentlyHit_C
// Size: 0xc9 (Inherited: 0x98)
struct UBTS_CheckRecentlyHit_C : UBTService_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x98(0x08)
	struct FBlackboardKeySelector HitKey; // 0xa0(0x28)
	bool bPending; // 0xc8(0x01)

	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function BTS_CheckRecentlyHit.BTS_CheckRecentlyHit_C.ReceiveTickAI // (Event|Protected|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_BTS_CheckRecentlyHit(int32_t EntryPoint); // Function BTS_CheckRecentlyHit.BTS_CheckRecentlyHit_C.ExecuteUbergraph_BTS_CheckRecentlyHit // (Final|UbergraphFunction) // @ game+0x1395fe0
};

