// BlueprintGeneratedClass BP_Zombie_Summoner_Prototype.BP_Zombie_Summoner_Prototype_C
// Size: 0x114c (Inherited: 0x10e0)
struct ABP_Zombie_Summoner_Prototype_C : ABP_Zombie_Prototype_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x10e0(0x08)
	struct TArray<struct FLFZombieClassArray> ZombiePool; // 0x10e8(0x10)
	bool bIsSummonRandomly; // 0x10f8(0x01)
	char pad_10F9[0x3]; // 0x10f9(0x03)
	float SummonLocationMinDistance; // 0x10fc(0x04)
	float SummonLocationMaxDistance; // 0x1100(0x04)
	float SummonDuration; // 0x1104(0x04)
	float SummonDurationRandomDeviation; // 0x1108(0x04)
	float SummonDelay; // 0x110c(0x04)
	float SummonDelayRandomDeviation; // 0x1110(0x04)
	int32_t CurrentSummonPoolIndex; // 0x1114(0x04)
	bool bIsSummoning; // 0x1118(0x01)
	char pad_1119[0x3]; // 0x1119(0x03)
	int32_t MaxSummonCount; // 0x111c(0x04)
	struct TArray<struct ALFZombie*> SummonedZombies; // 0x1120(0x10)
	struct TArray<struct UAnimMontage*> SummoningAnimations; // 0x1130(0x10)
	struct FVector HiddenScale; // 0x1140(0x0c)

	float GetSummonDelayRandomDeviation(); // Function BP_Zombie_Summoner_Prototype.BP_Zombie_Summoner_Prototype_C.GetSummonDelayRandomDeviation // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	struct UAnimMontage* GetSummoningAnimation(); // Function BP_Zombie_Summoner_Prototype.BP_Zombie_Summoner_Prototype_C.GetSummoningAnimation // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	int32_t GetMaxSummonCount(); // Function BP_Zombie_Summoner_Prototype.BP_Zombie_Summoner_Prototype_C.GetMaxSummonCount // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	struct TArray<struct AActor*> GetSummonedActors(); // Function BP_Zombie_Summoner_Prototype.BP_Zombie_Summoner_Prototype_C.GetSummonedActors // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	struct TArray<struct ALFZombie*> GetSummonedZombies(); // Function BP_Zombie_Summoner_Prototype.BP_Zombie_Summoner_Prototype_C.GetSummonedZombies // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	struct FVector GetSummonLocation(); // Function BP_Zombie_Summoner_Prototype.BP_Zombie_Summoner_Prototype_C.GetSummonLocation // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	struct ALFZombie* GetZombieClassFromZombiePool(int32_t ZombiePoolIndex); // Function BP_Zombie_Summoner_Prototype.BP_Zombie_Summoner_Prototype_C.GetZombieClassFromZombiePool // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	int32_t GetCurrentSummonPoolIndex(); // Function BP_Zombie_Summoner_Prototype.BP_Zombie_Summoner_Prototype_C.GetCurrentSummonPoolIndex // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	bool IsSummoning(); // Function BP_Zombie_Summoner_Prototype.BP_Zombie_Summoner_Prototype_C.IsSummoning // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	struct AActor* Summon(); // Function BP_Zombie_Summoner_Prototype.BP_Zombie_Summoner_Prototype_C.Summon // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	float GetSummonDelay(); // Function BP_Zombie_Summoner_Prototype.BP_Zombie_Summoner_Prototype_C.GetSummonDelay // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	float GetSummonDuration(); // Function BP_Zombie_Summoner_Prototype.BP_Zombie_Summoner_Prototype_C.GetSummonDuration // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	float GetSummonDurationRandomDeviation(); // Function BP_Zombie_Summoner_Prototype.BP_Zombie_Summoner_Prototype_C.GetSummonDurationRandomDeviation // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	float GetSummonLocationMaxDistance(); // Function BP_Zombie_Summoner_Prototype.BP_Zombie_Summoner_Prototype_C.GetSummonLocationMaxDistance // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	float GetSummonLocationMinDistance(); // Function BP_Zombie_Summoner_Prototype.BP_Zombie_Summoner_Prototype_C.GetSummonLocationMinDistance // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	bool IsSummonRandomly(); // Function BP_Zombie_Summoner_Prototype.BP_Zombie_Summoner_Prototype_C.IsSummonRandomly // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	bool IsSummonSequentially(); // Function BP_Zombie_Summoner_Prototype.BP_Zombie_Summoner_Prototype_C.IsSummonSequentially // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	struct TArray<struct FLFZombieClassArray> GetSummonZombiePool(); // Function BP_Zombie_Summoner_Prototype.BP_Zombie_Summoner_Prototype_C.GetSummonZombiePool // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ValidateSummonedZombies(); // Function BP_Zombie_Summoner_Prototype.BP_Zombie_Summoner_Prototype_C.ValidateSummonedZombies // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ReceiveTick(float DeltaSeconds); // Function BP_Zombie_Summoner_Prototype.BP_Zombie_Summoner_Prototype_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void BeginSummon(); // Function BP_Zombie_Summoner_Prototype.BP_Zombie_Summoner_Prototype_C.BeginSummon // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void EndSummon(); // Function BP_Zombie_Summoner_Prototype.BP_Zombie_Summoner_Prototype_C.EndSummon // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_BP_Zombie_Summoner_Prototype(int32_t EntryPoint); // Function BP_Zombie_Summoner_Prototype.BP_Zombie_Summoner_Prototype_C.ExecuteUbergraph_BP_Zombie_Summoner_Prototype // (Final|UbergraphFunction) // @ game+0x1395fe0
};

