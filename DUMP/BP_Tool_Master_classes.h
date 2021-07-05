// BlueprintGeneratedClass BP_Tool_Master.BP_Tool_Master_C
// Size: 0x344 (Inherited: 0x330)
struct ABP_Tool_Master_C : ACPP_Tool_Master {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x330(0x08)
	struct UGoreSystem* GoreSystem; // 0x338(0x08)
	float CurrentHealth; // 0x340(0x04)

	void UserConstructionScript(); // Function BP_Tool_Master.BP_Tool_Master_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ReceiveBeginPlay(); // Function BP_Tool_Master.BP_Tool_Master_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1395fe0
	void ReceivePointDamage(float Damage, struct UDamageType* DamageType, struct FVector HitLocation, struct FVector HitNormal, struct UPrimitiveComponent* HitComponent, struct FName BoneName, struct FVector ShotFromDirection, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FHitResult HitInfo); // Function BP_Tool_Master.BP_Tool_Master_C.ReceivePointDamage // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1395fe0
	void Multi_GoreDamage(float Damage, struct FVector Location, struct FName BoneName, struct FVector HitDirection, struct AActor* DamageCauser); // Function BP_Tool_Master.BP_Tool_Master_C.Multi_GoreDamage // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_BP_Tool_Master(int32_t EntryPoint); // Function BP_Tool_Master.BP_Tool_Master_C.ExecuteUbergraph_BP_Tool_Master // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
};

