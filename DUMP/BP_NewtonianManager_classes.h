// BlueprintGeneratedClass BP_NewtonianManager.BP_NewtonianManager_C
// Size: 0x128 (Inherited: 0xb0)
struct UBP_NewtonianManager_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	bool InitializeOnBeginPlay; // 0xb8(0x01)
	char pad_B9[0x3]; // 0xb9(0x03)
	float InitializationDelay; // 0xbc(0x04)
	bool UseNewtonianHealth; // 0xc0(0x01)
	char pad_C1[0x3]; // 0xc1(0x03)
	float StartingHealth; // 0xc4(0x04)
	bool UseNewtonianHealthUI; // 0xc8(0x01)
	char pad_C9[0x3]; // 0xc9(0x03)
	float TestFrequency; // 0xcc(0x04)
	bool UseSimpleFallingDamage; // 0xd0(0x01)
	char pad_D1[0x3]; // 0xd1(0x03)
	float SafeFallDistance; // 0xd4(0x04)
	float FallHeightOffsetBuffer; // 0xd8(0x04)
	float DamageRate; // 0xdc(0x04)
	bool ForceDamageToPawn; // 0xe0(0x01)
	bool ForceDamageToController; // 0xe1(0x01)
	char pad_E2[0x6]; // 0xe2(0x06)
	struct UDamageType* DamageClass; // 0xe8(0x08)
	float FallStartHeight; // 0xf0(0x04)
	bool ResetAfterAlteration; // 0xf4(0x01)
	char pad_F5[0x3]; // 0xf5(0x03)
	float CurrentHealth; // 0xf8(0x04)
	char pad_FC[0x4]; // 0xfc(0x04)
	struct UUserWidget* HealthUI; // 0x100(0x08)
	struct AController* OwnerAsController; // 0x108(0x08)
	struct APawn* OwnerAsCharacter; // 0x110(0x08)
	enum class E_Newtonian_OwnerType OwnerType; // 0x118(0x01)
	bool IsFalling; // 0x119(0x01)
	char pad_11A[0x2]; // 0x11a(0x02)
	float MaximumG-Force; // 0x11c(0x04)
	float PriorV; // 0x120(0x04)
	float CurrentG; // 0x124(0x04)

	void DamageOwner(float DamageAmount); // Function BP_NewtonianManager.BP_NewtonianManager_C.DamageOwner // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void CalcComplexDamage(float Damage); // Function BP_NewtonianManager.BP_NewtonianManager_C.CalcComplexDamage // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	void CalcSimpleDamage(bool Damaging, float Damage); // Function BP_NewtonianManager.BP_NewtonianManager_C.CalcSimpleDamage // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	void GetPawnZLoc(float ZLoc); // Function BP_NewtonianManager.BP_NewtonianManager_C.GetPawnZLoc // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	void GetPawnMC(struct UPawnMovementComponent* MovementComponent); // Function BP_NewtonianManager.BP_NewtonianManager_C.GetPawnMC // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	void TestForce(bool ExceedsGs); // Function BP_NewtonianManager.BP_NewtonianManager_C.TestForce // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void TestFall(bool CompletedFall); // Function BP_NewtonianManager.BP_NewtonianManager_C.TestFall // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void Initialize(); // Function BP_NewtonianManager.BP_NewtonianManager_C.Initialize // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void SetOwnerType(bool ValidOwner); // Function BP_NewtonianManager.BP_NewtonianManager_C.SetOwnerType // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void InitializeNewtonian(); // Function BP_NewtonianManager.BP_NewtonianManager_C.InitializeNewtonian // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ReceiveBeginPlay(); // Function BP_NewtonianManager.BP_NewtonianManager_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void TestState(); // Function BP_NewtonianManager.BP_NewtonianManager_C.TestState // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void UpdateHealth(float AlterationAmount); // Function BP_NewtonianManager.BP_NewtonianManager_C.UpdateHealth // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void UpdateHUD(float HealthValue); // Function BP_NewtonianManager.BP_NewtonianManager_C.UpdateHUD // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_BP_NewtonianManager(int32_t EntryPoint); // Function BP_NewtonianManager.BP_NewtonianManager_C.ExecuteUbergraph_BP_NewtonianManager // (Final|UbergraphFunction) // @ game+0x1395fe0
};

