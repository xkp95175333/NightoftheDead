// BlueprintGeneratedClass BP_BloodMask_ExampleCharacter_Zombie.BP_BloodMask_ExampleCharacter_Zombie_C
// Size: 0x10a1 (Inherited: 0x1079)
struct ABP_BloodMask_ExampleCharacter_Zombie_C : ACH_BloodMaskCharacter_Zombie_C {
	char pad_1079[0x7]; // 0x1079(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1080(0x08)
	float _____0_Dry_619F1B99447BDCABF21C01A0BFA93197; // 0x1088(0x04)
	enum class ETimelineDirection _____0__Direction_619F1B99447BDCABF21C01A0BFA93197; // 0x108c(0x01)
	char pad_108D[0x3]; // 0x108d(0x03)
	struct UTimelineComponent*   _1; // 0x1090(0x08)
	bool UseRagdoll; // 0x1098(0x01)
	char pad_1099[0x3]; // 0x1099(0x03)
	int32_t Health; // 0x109c(0x04)
	bool bNavigation; // 0x10a0(0x01)

	void  μλΌμΈ_0__Fini(); // Function BP_BloodMask_ExampleCharacter_Zombie.BP_BloodMask_ExampleCharacter_Zombie_C. μλΌμΈ_0__Fini // (BlueprintEvent) // @ game+0x1395fe0
	void  μλΌμΈ_0__Up(); // Function BP_BloodMask_ExampleCharacter_Zombie.BP_BloodMask_ExampleCharacter_Zombie_C. μλΌμΈ_0__Up // (BlueprintEvent) // @ game+0x1395fe0
	void ReceivePointDamage(float Damage, struct UDamageType* DamageType, struct FVector HitLocation, struct FVector HitNormal, struct UPrimitiveComponent* HitComponent, struct FName BoneName, struct FVector ShotFromDirection, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FHitResult HitInfo); // Function BP_BloodMask_ExampleCharacter_Zombie.BP_BloodMask_ExampleCharacter_Zombie_C.ReceivePointDamage // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1395fe0
	void HitEffects(struct FHitResult HitInfo, struct FVector Location); // Function BP_BloodMask_ExampleCharacter_Zombie.BP_BloodMask_ExampleCharacter_Zombie_C.HitEffects // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ReceiveBeginPlay(); // Function BP_BloodMask_ExampleCharacter_Zombie.BP_BloodMask_ExampleCharacter_Zombie_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_BP_BloodMask_ExampleCharacter_Zombie(int32_t EntryPoint); // Function BP_BloodMask_ExampleCharacter_Zombie.BP_BloodMask_ExampleCharacter_Zombie_C.ExecuteUbergraph_BP_BloodMask_ExampleCharacter_Zombie // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
};

