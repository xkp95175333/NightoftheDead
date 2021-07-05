// BlueprintGeneratedClass BP_Zombie_Prototype.BP_Zombie_Prototype_C
// Size: 0x10e0 (Inherited: 0x10a1)
struct ABP_Zombie_Prototype_C : ABP_BloodMask_ExampleCharacter_Zombie_C {
	char pad_10A1[0x7]; // 0x10a1(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x10a8(0x08)
	float Timeline_0_NewTrack_0_470079C340EFEAF823B3F68F09A7DD51; // 0x10b0(0x04)
	enum class ETimelineDirection Timeline_0__Direction_470079C340EFEAF823B3F68F09A7DD51; // 0x10b4(0x01)
	char pad_10B5[0x3]; // 0x10b5(0x03)
	struct UTimelineComponent* Timeline_1; // 0x10b8(0x08)
	struct FName OriginalCollision; // 0x10c0(0x08)
	float PrevWalkSpeed; // 0x10c8(0x04)
	struct FName BoneName; // 0x10cc(0x08)
	bool IsHit; // 0x10d4(0x01)
	char pad_10D5[0x3]; // 0x10d5(0x03)
	float BlendWeight; // 0x10d8(0x04)
	float ImpulseMultiplier; // 0x10dc(0x04)

	void UserConstructionScript(); // Function BP_Zombie_Prototype.BP_Zombie_Prototype_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Timeline_0__FinishedFunc(); // Function BP_Zombie_Prototype.BP_Zombie_Prototype_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x1395fe0
	void Timeline_0__UpdateFunc(); // Function BP_Zombie_Prototype.BP_Zombie_Prototype_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x1395fe0
	void PhysicalHitReaction(struct FName Bone, struct FVector ImpulseDirection); // Function BP_Zombie_Prototype.BP_Zombie_Prototype_C.PhysicalHitReaction // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1395fe0
	void ReceiveBeginPlay(); // Function BP_Zombie_Prototype.BP_Zombie_Prototype_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1395fe0
	void ReactToHit(struct FName HitBone, struct FVector HitLocation, struct FVector Impulse, float Damage); // Function BP_Zombie_Prototype.BP_Zombie_Prototype_C.ReactToHit // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void ReceiveTick(float DeltaSeconds); // Function BP_Zombie_Prototype.BP_Zombie_Prototype_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_BP_Zombie_Prototype(int32_t EntryPoint); // Function BP_Zombie_Prototype.BP_Zombie_Prototype_C.ExecuteUbergraph_BP_Zombie_Prototype // (Final|UbergraphFunction) // @ game+0x1395fe0
};

