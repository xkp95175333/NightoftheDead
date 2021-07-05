// BlueprintGeneratedClass BP_Zombie_Boss_Crawl.BP_Zombie_Boss_Crawl_C
// Size: 0x1134 (Inherited: 0x10e0)
struct ABP_Zombie_Boss_Crawl_C : ABP_Zombie_Prototype_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x10e0(0x08)
	struct FName ExplosionName; // 0x10e8(0x08)
	float ExplosionAreaRadius; // 0x10f0(0x04)
	float ExplosionDamage; // 0x10f4(0x04)
	struct TArray<struct UObject*> Effects; // 0x10f8(0x10)
	float ExplosionDelayTime; // 0x1108(0x04)
	struct FName ExplosionStartName; // 0x110c(0x08)
	char pad_1114[0x4]; // 0x1114(0x04)
	struct TArray<struct AActor*> AlreadyHitActors; // 0x1118(0x10)
	struct FVector DieLocation; // 0x1128(0x0c)

	void OnLoaded_5A2A06C1453FBAD8E0F357AB7251919B(struct UObject* Loaded); // Function BP_Zombie_Boss_Crawl.BP_Zombie_Boss_Crawl_C.OnLoaded_5A2A06C1453FBAD8E0F357AB7251919B // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ReceiveBeginPlay(); // Function BP_Zombie_Boss_Crawl.BP_Zombie_Boss_Crawl_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1395fe0
	void OnDie(); // Function BP_Zombie_Boss_Crawl.BP_Zombie_Boss_Crawl_C.OnDie // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void EmitExplosionEffect(); // Function BP_Zombie_Boss_Crawl.BP_Zombie_Boss_Crawl_C.EmitExplosionEffect // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void EmitExplosion(); // Function BP_Zombie_Boss_Crawl.BP_Zombie_Boss_Crawl_C.EmitExplosion // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_BP_Zombie_Boss_Crawl(int32_t EntryPoint); // Function BP_Zombie_Boss_Crawl.BP_Zombie_Boss_Crawl_C.ExecuteUbergraph_BP_Zombie_Boss_Crawl // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
};

