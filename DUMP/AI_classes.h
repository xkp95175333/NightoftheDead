// Class AI.AttackableAI
// Size: 0x28 (Inherited: 0x28)
struct UAttackableAI : UInterface {

	bool IsRangeAttackType(enum class EAttackType AttackType); // Function AI.AttackableAI.IsRangeAttackType // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1064850
	bool IsInCombat(); // Function AI.AttackableAI.IsInCombat // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x105c0a0
	bool IsAttacking(); // Function AI.AttackableAI.IsAttacking // (Native|Public|BlueprintCallable) // @ game+0xff2d10
	bool IsAttackCoolTime(); // Function AI.AttackableAI.IsAttackCoolTime // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1064820
	bool HasAttackTypeWeapon(enum class EAttackType AttackType); // Function AI.AttackableAI.HasAttackTypeWeapon // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1064790
	float GetSpecialAttackMinRange(); // Function AI.AttackableAI.GetSpecialAttackMinRange // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1064760
	float GetSpecialAttackMaxRange(); // Function AI.AttackableAI.GetSpecialAttackMaxRange // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1064720
	float GetSpecialAttackCoolTime(); // Function AI.AttackableAI.GetSpecialAttackCoolTime // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10646e0
	float GetChaseAttackRange(); // Function AI.AttackableAI.GetChaseAttackRange // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x105bea0
	enum class EAttackType GetAttackType(); // Function AI.AttackableAI.GetAttackType // (Native|Public|BlueprintCallable) // @ game+0x1055a80
	struct AActor* GetAttackTarget(); // Function AI.AttackableAI.GetAttackTarget // (Native|Public|BlueprintCallable) // @ game+0x10646b0
	float GetAttackRange(); // Function AI.AttackableAI.GetAttackRange // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x105be40
	float GetAttackCoolTime(); // Function AI.AttackableAI.GetAttackCoolTime // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1064670
	float GetAlternativeAttackRange(); // Function AI.AttackableAI.GetAlternativeAttackRange // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x105bed0
	void ChangeAttackType(enum class EAttackType AttackType); // Function AI.AttackableAI.ChangeAttackType // (Native|Public|BlueprintCallable) // @ game+0x10645f0
	bool CanMovingAttack(); // Function AI.AttackableAI.CanMovingAttack // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10645c0
	bool CanDashAttack(); // Function AI.AttackableAI.CanDashAttack // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1064590
	bool CanAttackTo(struct AActor* AttackTarget); // Function AI.AttackableAI.CanAttackTo // (Native|Public|BlueprintCallable) // @ game+0x10644f0
	bool CanAiAttack(); // Function AI.AttackableAI.CanAiAttack // (Native|Public|BlueprintCallable) // @ game+0xff2d40
	float Attack(); // Function AI.AttackableAI.Attack // (Native|Public|BlueprintCallable) // @ game+0x10644c0
};

// Class AI.CharacteristicAI
// Size: 0x28 (Inherited: 0x28)
struct UCharacteristicAI : UInterface {

	float ThreatAfterAvoid(); // Function AI.CharacteristicAI.ThreatAfterAvoid // (Native|Public|BlueprintCallable) // @ game+0x1064c80
	float Threat(); // Function AI.CharacteristicAI.Threat // (Native|Public|BlueprintCallable) // @ game+0x1064c50
	float Roar(); // Function AI.CharacteristicAI.Roar // (Native|Public|BlueprintCallable) // @ game+0x1064c20
	float PlayRandomIdle(); // Function AI.CharacteristicAI.PlayRandomIdle // (Native|Public|BlueprintCallable) // @ game+0x782d10
	float Inspect(); // Function AI.CharacteristicAI.Inspect // (Native|Public|BlueprintCallable) // @ game+0x105be70
	bool HasThreatBehavior(); // Function AI.CharacteristicAI.HasThreatBehavior // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xff2d40
	bool HasRoarBehavior(); // Function AI.CharacteristicAI.HasRoarBehavior // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x105c0a0
	bool HasRandomIdleMotion(); // Function AI.CharacteristicAI.HasRandomIdleMotion // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x782e20
	bool HasInspectBehavior(); // Function AI.CharacteristicAI.HasInspectBehavior // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10645c0
	bool HasAroundBehavior(); // Function AI.CharacteristicAI.HasAroundBehavior // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1062100
	float GetThreatProbability(); // Function AI.CharacteristicAI.GetThreatProbability // (Native|Public|BlueprintCallable) // @ game+0x105be40
};

// Class AI.EnemyController
// Size: 0x370 (Inherited: 0x330)
struct AEnemyController : ASmartAIController {
	char pad_330[0x8]; // 0x330(0x08)
	struct UBehaviorTreeComponent* BehaviorTreeComponent; // 0x338(0x08)
	struct UBlackboardComponent* BlackboardComponent; // 0x340(0x08)
	bool bIsWave; // 0x348(0x01)
	char pad_349[0x3]; // 0x349(0x03)
	float NavUnit; // 0x34c(0x04)
	float WayDistance; // 0x350(0x04)
	float NearDistance; // 0x354(0x04)
	float FarDistance; // 0x358(0x04)
	float BlockDetectionDistance; // 0x35c(0x04)
	float BlockDetectionInterval; // 0x360(0x04)
	int32_t BlockDetectionSampleCount; // 0x364(0x04)
	struct AActor* Suspect; // 0x368(0x08)

	void SetSuspect(struct AActor* Actor); // Function AI.EnemyController.SetSuspect // (Final|Native|Public|BlueprintCallable) // @ game+0x1064e40
};

// Class AI.EnemyTargetable
// Size: 0x28 (Inherited: 0x28)
struct UEnemyTargetable : UInterface {
};

// Class AI.HittableAI
// Size: 0x28 (Inherited: 0x28)
struct UHittableAI : UInterface {
};

// Class AI.PerceptiveController
// Size: 0x28 (Inherited: 0x28)
struct UPerceptiveController : UInterface {
};

// Class AI.PerceptivePawn
// Size: 0x28 (Inherited: 0x28)
struct UPerceptivePawn : UInterface {
};

// Class AI.RunnableAI
// Size: 0x28 (Inherited: 0x28)
struct URunnableAI : UInterface {

	void SetDesiredSpeed(float Speed); // Function AI.RunnableAI.SetDesiredSpeed // (Native|Public|BlueprintCallable) // @ game+0x1065620
	void OnStartRun(); // Function AI.RunnableAI.OnStartRun // (Native|Public|BlueprintCallable) // @ game+0x85a1d0
	float GetWalkSpeed(); // Function AI.RunnableAI.GetWalkSpeed // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10655f0
	float GetRunSpeed(); // Function AI.RunnableAI.GetRunSpeed // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10655c0
	float GetRotateAngle(); // Function AI.RunnableAI.GetRotateAngle // (Native|Public|BlueprintCallable) // @ game+0x1062230
	float GetJogSpeed(); // Function AI.RunnableAI.GetJogSpeed // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1064c20
	float GetCurrentSpeed(); // Function AI.RunnableAI.GetCurrentSpeed // (Native|Public|BlueprintCallable) // @ game+0x1064c80
};

// Class AI.TerritorialAI
// Size: 0x28 (Inherited: 0x28)
struct UTerritorialAI : UInterface {
};

