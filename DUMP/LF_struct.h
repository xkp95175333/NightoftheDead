// Enum LF.ECharacterStatus
enum class ECharacterStatus : uint8 {
	Undefined,
	Health,
	Stamina,
	Condition,
	GuardStamina,
	Count,
	ECharacterStatus_MAX,
};

// Enum LF.EEquipmentStatus
enum class EEquipmentStatus : uint8 {
	Undefined,
	Damage,
	AttackSpeed,
	Defense,
	MaxHP,
	MaxStamina,
	StaminaRestore,
	MoveSpeed,
	MaxCondition,
	MaxFoodAmount,
	MaxAmmoAmount,
	MaxMiscAmount,
	StaminaDamage,
	ParryRate,
	MaxGuardStamina,
	GuardStaminaRestore,
	ParryDamage,
	Count,
	EEquipmentStatus_MAX,
};

// Enum LF.ECharacterHitType
enum class ECharacterHitType : uint8 {
	NoDamage,
	Soft,
	Normal,
	Hard,
	Land,
	Burn,
	Knockdown,
	Bite,
	Parry,
	Chainsaw,
	ECharacterHitType_MAX,
};

// Enum LF.EFootstepTraceDirection
enum class EFootstepTraceDirection : uint8 {
	Down,
	Up,
	Forward,
	Backward,
	Right,
	Left,
	EFootstepTraceDirection_MAX,
};

// Enum LF.EAttackResult
enum class EAttackResult : uint8 {
	None,
	Block,
	Parry,
	EAttackResult_MAX,
};

// Enum LF.EBirdCharacterFlag
enum class EBirdCharacterFlag : uint8 {
	IsAttacked,
	CanFly,
	IsSpawned,
	IsStuck,
	IsPerched,
	IsRecentlyPerched,
	EBirdCharacterFlag_MAX,
};

// Enum LF.EBirdProperty
enum class EBirdProperty : uint8 {
	Health,
	Stamina,
	JumpGravity,
	JumpVelocityZ,
	FlyingSpeedMin,
	FlyingSpeedMax,
	JumpSpeedForward,
	JumpSpeedUp,
	JumpAwayDistance,
	JumpToFlyVelocityZ,
	JumpToFlySpeedForward,
	JumpToFlySpeedUp,
	FlyAwayDistance,
	TurnSpeedPerch,
	TurnSpeedFly,
	TurnSpeedLanding,
	RunAwayAccelerationDistance,
	RunAwaySpeedFar,
	RunAwaySpeedNear,
	HearingRange,
	SightRange,
	SightAngle,
	RandomPointDistance,
	FlyAwaySeconds,
	EBirdProperty_MAX,
};

// Enum LF.EBirdAnimation
enum class EBirdAnimation : uint8 {
	Jump,
	Perching,
	Landing,
	EBirdAnimation_MAX,
};

// Enum LF.EBirdBehaviorType
enum class EBirdBehaviorType : uint8 {
	Fly,
	Perch,
	Perching,
	Walk,
	EBirdBehaviorType_MAX,
};

// Enum LF.EBirdTargetType
enum class EBirdTargetType : uint8 {
	Sky,
	Perch,
	Ground,
	EBirdTargetType_MAX,
};

// Enum LF.EBirdBlackboardKeyType
enum class EBirdBlackboardKeyType : uint8 {
	IsFlying,
	IsPerched,
	IsWalking,
	DistanceToGround,
	FlyToPerch,
	FlyingSpeed,
	Enemy,
	EBirdBlackboardKeyType_MAX,
};

// Enum LF.ECorpseType
enum class ECorpseType : uint8 {
	None,
	Zombie,
	Animal,
	Count,
	ECorpseType_MAX,
};

// Enum LF.ETrapDebugType
enum class ETrapDebugType : uint8 {
	None,
	ShowAggroTrapBounds,
	ETrapDebugType_MAX,
};

// Enum LF.ESwitchGateType
enum class ESwitchGateType : uint8 {
	And,
	Or,
	Xor,
	ESwitchGateType_MAX,
};

// Enum LF.EVictimType
enum class EVictimType : uint8 {
	None,
	Player,
	Zombie,
	Animal,
	Building,
	Destructible,
	EVictimType_MAX,
};

// Enum LF.EOwnedResult
enum class EOwnedResult : uint8 {
	Owned,
	PartiallyOwned,
	NotOwned,
	NoItem,
	EOwnedResult_MAX,
};

// Enum LF.EAnimalBehaviorType
enum class EAnimalBehaviorType : uint8 {
	Flee,
	Defend,
	Attack,
	EAnimalBehaviorType_MAX,
};

// Enum LF.EPoseType
enum class EPoseType : uint8 {
	None,
	Right,
	Left,
	Both,
	TwoHanded,
	EPoseType_MAX,
};

// Enum LF.EBuildMenuOpenType
enum class EBuildMenuOpenType : uint8 {
	Closed,
	Normal,
	EBuildMenuOpenType_MAX,
};

// Enum LF.ECharacterState
enum class ECharacterState : uint8 {
	Locomotion,
	Attack,
	Interaction,
	UI,
	Build,
	Range,
	Throw,
	Swim,
	ToLocomotion,
	Dead,
	ECharacterState_MAX,
};

// Enum LF.EDodgeDirection
enum class EDodgeDirection : uint8 {
	None,
	Left,
	Right,
	Forward,
	ForwardLeft,
	ForwardRight,
	Backward,
	BackwardLeft,
	BackwardRight,
	EDodgeDirection_MAX,
};

// Enum LF.ECharacterWeightClass
enum class ECharacterWeightClass : uint8 {
	None,
	Light,
	Heavy,
	Giant,
	Count,
	ECharacterWeightClass_MAX,
};

// Enum LF.EBuffCategory
enum class EBuffCategory : uint8 {
	Normal,
	Fire,
	Debuff,
	Break,
	EBuffCategory_MAX,
};

// Enum LF.EBuffType
enum class EBuffType : uint8 {
	Health,
	Stamina,
	Condition,
	MaxHealth,
	MaxStamina,
	MaxCondition,
	Damage,
	AttackSpeed,
	StaminaRestore,
	MoveSpeed,
	MaxFoodAmount,
	MaxAmmoAmount,
	MaxMiscAmount,
	EBuffType_MAX,
};

// Enum LF.ECharacterInteractionState
enum class ECharacterInteractionState : uint8 {
	Start,
	Execute,
	End,
	ECharacterInteractionState_MAX,
};

// Enum LF.ECharacterAttackState
enum class ECharacterAttackState : uint8 {
	NotAttacking,
	BeforeAttack,
	ReadyToAttack,
	WhileAttack,
	FinishAttack,
	ECharacterAttackState_MAX,
};

// Enum LF.EActionType
enum class EActionType : uint8 {
	Jump,
	Run,
	Walk,
	Crouch,
	MoveForward,
	MoveRight,
	Turn,
	LookUp,
	Aim,
	Interaction,
	InteractionR,
	InteractionT,
	Inventory,
	Fire,
	Cancel,
	Build,
	ViewMode,
	RotateUp,
	RotateDown,
	Snap,
	Close,
	FocusNear,
	FocusFar,
	Light,
	Map,
	Journal,
	Num1,
	Num2,
	Num3,
	Num4,
	Num5,
	Num6,
	Num7,
	Num8,
	Dodge,
	ChangeInteractionTargetUp,
	ChangeInteractionTargetDown,
	Team,
	EActionType_MAX,
};

// Enum LF.EPlayerCameraActionState
enum class EPlayerCameraActionState : uint8 {
	None,
	Mantle,
	EPlayerCameraActionState_MAX,
};

// Enum LF.EPlayerCameraMode
enum class EPlayerCameraMode : uint8 {
	TPP_Far,
	TPP_Close,
	TPP_Range,
	TPP_Map,
	TPP_Build,
	FPP,
	EPlayerCameraMode_MAX,
};

// Enum LF.EUIType
enum class EUIType : uint8 {
	Inventory,
	Building,
	BuildingUpgrade,
	Research,
	Journal,
	Other,
	EUIType_MAX,
};

// Enum LF.ENotifyType
enum class ENotifyType : uint8 {
	Text,
	Indent,
	ENotifyType_MAX,
};

// Enum LF.EMessageType
enum class EMessageType : uint8 {
	Info,
	Success,
	Warning,
	Error,
	EMessageType_MAX,
};

// Enum LF.EFocusState
enum class EFocusState : uint8 {
	None,
	Interaction,
	Enemy,
	EFocusState_MAX,
};

// Enum LF.ETutorialAction
enum class ETutorialAction : uint8 {
	Own,
	Craft,
	Build,
	Light,
	Map,
	Dodge,
	Repair,
	Demolish,
	Research,
	ETutorialAction_MAX,
};

// Enum LF.ETrapModificationType
enum class ETrapModificationType : uint8 {
	DamageFixed,
	DamageRate,
	DamageReductionFixed,
	DamageReductionRate,
	ETrapModificationType_MAX,
};

// Enum LF.EResearchCategory
enum class EResearchCategory : uint8 {
	Survival,
	Tech,
	Combat,
	Utility,
	EResearchCategory_MAX,
};

// Enum LF.EBuildingCategory
enum class EBuildingCategory : uint8 {
	Undefined,
	WoodFloor,
	WoodWall,
	WoodStair,
	WoodFence,
	StoneFloor,
	StoneWall,
	StoneStair,
	StoneFence,
	IronFloor,
	IronWall,
	IronStair,
	IronFence,
	CraftEquipment,
	CraftMaterial,
	CraftCooking,
	CraftCrafting,
	FurnitureStore,
	FurnitureLight,
	FurnitureInterior,
	FurnitureDeco,
	TrapMelee,
	TrapRange,
	TrapManual,
	TrapAnimal,
	TrapHuman,
	ElectricGenerator,
	ElectricBattery,
	ElectricSwitch,
	ElectricControl,
	Hidden,
	EBuildingCategory_MAX,
};

// Enum LF.ECraftCategory
enum class ECraftCategory : uint8 {
	Undefined,
	Disassemble,
	HandmadeConsumable,
	HandmadeMisc,
	HandmadeFood,
	EquipmentMain,
	EquipmentSub,
	EquipmentUpgrade,
	MechanicalEquipmentMain,
	MechanicalEquipmentSub,
	MechanicalEquipmentUpgrade,
	MaterialWood,
	MaterialStone,
	MaterialIron,
	CraftMisc,
	CraftMachine,
	CraftCommunication,
	CookingFire,
	CookingGrill,
	CookingOven,
	MechanicalCraftTier1,
	MechanicalCraftTier2,
	MechanicalCraftTier3,
	MaterialStoneDisabled,
	MaterialIronDisabled,
	CraftMachineDisabled,
	CraftCommunicationDisabled,
	CookingGrillDisabled,
	CookingOvenDisabled,
	MechanicalCraftTier2Disabled,
	MechanicalCraftTier3Disabled,
	ECraftCategory_MAX,
};

// Enum LF.EItemType
enum class EItemType : uint8 {
	Undefined,
	Consumable,
	Equipment,
	Miscellaneous,
	All,
	EItemType_MAX,
};

// Enum LF.EEnemyType
enum class EEnemyType : uint8 {
	None,
	NormalZombie,
	HeavyZombie,
	GiantZombie,
	EnemyPlayer,
	EnemyBuilding,
	Animal,
	FriendPlayer,
	EEnemyType_MAX,
};

// Enum LF.ETeamAction
enum class ETeamAction : uint8 {
	CreateTeam,
	JoinTeam,
	InviteAgent,
	KickAgent,
	GiveRoleToAgent,
	RenameTeam,
	ETeamAction_MAX,
};

// Enum LF.ETeamRole
enum class ETeamRole : uint8 {
	Member,
	Manager,
	Leader,
	Property,
	Count,
	ETeamRole_MAX,
};

// Enum LF.EServerResetReason
enum class EServerResetReason : uint8 {
	GameClear,
	NoOneForLongTime,
	AbandonedForRecentDays,
	WaveZombieIsTooMany,
	WaveZombieAndAbandoned_2,
	WaveZombieAndAbandoned_3,
	EServerResetReason_MAX,
};

// Enum LF.EGameRule
enum class EGameRule : uint8 {
	PvP,
	PvE,
	EGameRule_MAX,
};

// Enum LF.EGameDifficultyItem
enum class EGameDifficultyItem : uint8 {
	ZombieHealth,
	ZombieDamage,
	ZombieMovementSpeed,
	WorldZombieSpawn,
	WaveSpecialZombieAmount,
	WaveNormalZombieAmount,
	WaveGiantZombieAmount,
	WaveZombieHealth,
	AnimalHealth,
	AnimalDamage,
	ResourcesReturnedAfterBuildingDestroyed,
	InitialFoodAmount,
	ResourceRespawnTime,
	EGameDifficultyItem_MAX,
};

// Enum LF.EGameDifficulty
enum class EGameDifficulty : uint8 {
	Diff_1,
	Diff_2,
	Diff_3,
	Diff_4,
	Diff_5,
	Diff_6,
	Diff_7,
	Diff_Custom,
	Diff_MAX,
};

// Enum LF.EEquipmentSwapState
enum class EEquipmentSwapState : uint8 {
	None,
	Equip,
	Unequip,
	EEquipmentSwapState_MAX,
};

// Enum LF.EInteractionResult
enum class EInteractionResult : uint8 {
	Remain,
	Destroy,
	Restore,
	EInteractionResult_MAX,
};

// Enum LF.EInteractionType
enum class EInteractionType : uint8 {
	Undefined,
	Take,
	TakeLow,
	TakeHigh,
	Find,
	FindLow,
	FindHigh,
	Store,
	Repair,
	Reload,
	Activate,
	Deactivate,
	Attack,
	Open,
	Close,
	Eat,
	Harvest,
	Gather,
	Craft,
	Upgrade,
	UpgradeAnimation,
	Break,
	BreakLow,
	Research,
	Skin,
	Sow,
	Feed,
	Change,
	Rest,
	Interact,
	TakeJournal,
	Load,
	Communicate,
	TakeAll,
	Demolish,
	Get,
	Unlock,
	Reset,
	Sign,
	Connect,
	Control,
	Pedal,
	Cancel,
	Modify,
	Count,
	EInteractionType_MAX,
};

// Enum LF.EInventoryOpenType
enum class EInventoryOpenType : uint8 {
	Closed,
	Normal,
	EInventoryOpenType_MAX,
};

// Enum LF.EDietType
enum class EDietType : uint8 {
	None,
	Meat,
	Bird,
	Fish,
	Egg,
	Dairy,
	Vegetable,
	EDietType_MAX,
};

// Enum LF.EWeaponPoseType
enum class EWeaponPoseType : uint8 {
	Default,
	RightDefault,
	RightThrow,
	LeftDefault,
	LeftTorch,
	LeftShield,
	TwoHandDefault,
	TwoHandHeavy,
	TwoHandKatana,
	TwoHandBow,
	TwoHandSpear,
	TwoHandGun,
	TwoHandGunHip,
	TwoHandRifle,
	TwoHandMachine,
	TwoHandPolearm,
	DualHandKnuckle,
	RightThrowSpear,
	TwoHandLauncher,
	TwoHandElectricCord,
	EWeaponPoseType_MAX,
};

// Enum LF.EWeaponType
enum class EWeaponType : uint8 {
	None,
	Melee,
	Range,
	Throw,
	Tool,
	EWeaponType_MAX,
};

// Enum LF.EEquipmentSlot
enum class EEquipmentSlot : uint8 {
	Undefined,
	RightHand,
	LeftHand,
	Outer,
	UpperBody,
	LowerBody,
	Foot,
	Ammo,
	FoodBag,
	AmmoBag,
	MiscBag,
	Count,
	EEquipmentSlot_MAX,
};

// Enum LF.EDefenseResult
enum class EDefenseResult : uint8 {
	Block,
	Parry,
	Break,
	BreakWithBigDamage,
	Count,
	EDefenseResult_MAX,
};

// Enum LF.ERangeState
enum class ERangeState : uint8 {
	Aim,
	Shoot,
	Reload,
	ERangeState_MAX,
};

// Enum LF.EGameUiSound
enum class EGameUiSound : uint8 {
	ButtonHover,
	ButtonClick,
	OpenInventory,
	CloseInventory,
	OpenBuildMenu,
	CloseBuildMenu,
	Build,
	BuildControl,
	OpenMenu,
	CloseMenu,
	Equip,
	UseQuickslot,
	CraftSuccess,
	EGameUiSound_MAX,
};

// Enum LF.EGameSoundType
enum class EGameSoundType : uint8 {
	Effect,
	UI,
	Weapon,
	Character,
	Other,
	EGameSoundType_MAX,
};

// Enum LF.ENoiseAction
enum class ENoiseAction : uint8 {
	Jump,
	Run,
	Jog,
	Walk,
	Attack,
	QuietAttack,
	Build,
	QuietTrap,
	Trap,
	LoudTrap,
	ENoiseAction_MAX,
};

// Enum LF.ELFTeamAttitude
enum class ELFTeamAttitude : uint8 {
	Friendly,
	Neutral,
	Hostile,
	ELFTeamAttitude_MAX,
};

// Enum LF.EZombieType
enum class EZombieType : uint8 {
	Walker1,
	Walker2,
	Walker3,
	Walker4,
	Walker5,
	Runner1,
	Runner2,
	Runner3,
	Jumper1,
	Jumper2,
	Crawler1,
	BossNormal1,
	BossNormal2,
	BossRange,
	BossCrawl,
	Acid1,
	Screamer1,
	Screamer2,
	Siege1,
	Harpoon1,
	ThreeHeads1,
	ThreeHeads2,
	EZombieType_MAX,
};

// Enum LF.ESecurityType
enum class ESecurityType : uint8 {
	None,
	Password,
	ESecurityType_MAX,
};

// Enum LF.ENavigationType
enum class ENavigationType : uint8 {
	Default,
	Giant,
	ENavigationType_MAX,
};

// Enum LF.EPassiveSkillType
enum class EPassiveSkillType : uint8 {
	CombatJumpStaminaPercent,
	CombatDefaultDefense,
	CombatDefaultDamage,
	CombatLandDamagePercent,
	CombatHealthRestorePercent,
	CombatMoveSpeedPercent,
	CombatNoisePercent,
	MinerWoodDamagePercent,
	MinerStoneDamagePercent,
	MinerIronDamagePercent,
	MinerAllDamagePercent,
	BuilderWoodMaterialPercent,
	BuilderStoneMaterialPercent,
	BuilderIronMaterialPercent,
	BuilderAllMaterialPercent,
	BuilderDemolishReturnPercent,
	CraftTierOne,
	CraftTierTwo,
	CraftTierThree,
	CraftTierFour,
	HunterAnimal,
	HunterZombie,
	HunterHuman,
	InventoryAddSlot,
	CollectInteractionSpeed,
	AxeAttackSpeed,
	PickAxeAttackSpeed,
	GlobalAttackSpeed,
	EvasionPercent,
	StaminaRestorePercent,
	AttackStaminaPercent,
	GuardStaminaPercent,
	DodgeStaminaPercent,
	ReceivedDamagePercent,
	RangeWeaponLoadSpeedPercent,
	RangeWeaponAimSpeedPercent,
	RangeWeaponDamage,
	MeleeWeaponAttackSpeedPercent,
	MeleeWeaponDamage,
	BuilderDemolishSpeedPercent,
	JumpZVelocityPercent,
	GuardStaminaRestorePercent,
	GuardStaminaReceivedDamagePercent,
	DefenseRatePercent,
	ParryRatePercent,
	ParryAreaPercent,
	EPassiveSkillType_MAX,
};

// Enum LF.EPullableType
enum class EPullableType : uint8 {
	None,
	Player,
	Zombie,
	Animal,
	Count,
	EPullableType_MAX,
};

// Enum LF.EPullAnimationState
enum class EPullAnimationState : uint8 {
	Initial,
	Ready,
	While,
	End,
	EPullAnimationState_MAX,
};

// Enum LF.ESkillType
enum class ESkillType : uint8 {
	Stomp,
	Jump,
	Bite,
	ESkillType_MAX,
};

// Enum LF.EInventorySlotType
enum class EInventorySlotType : uint8 {
	Belongings,
	Equipments,
	QuickSlot,
	Store,
	Other,
	EInventorySlotType_MAX,
};

// Enum LF.EStreamingGameObjectState
enum class EStreamingGameObjectState : uint8 {
	Visible,
	Invisible,
	Partial,
	EStreamingGameObjectState_MAX,
};

// ScriptStruct LF.LFSessionPlayerInfo
// Size: 0x18 (Inherited: 0x00)
struct FLFSessionPlayerInfo {
	struct FString PlayerName; // 0x00(0x10)
	char TeamId; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct LF.Magazine
// Size: 0x14 (Inherited: 0x00)
struct FMagazine {
	struct FItemId WeaponId; // 0x00(0x10)
	int32_t AmmoAmount; // 0x10(0x04)
};

// ScriptStruct LF.ItemId
// Size: 0x10 (Inherited: 0x00)
struct FItemId {
	struct FGuid ID; // 0x00(0x10)
};

// ScriptStruct LF.StaticMeshMaterials
// Size: 0x10 (Inherited: 0x00)
struct FStaticMeshMaterials {
	struct TArray<struct UMaterialInterface*> StaticMaterials; // 0x00(0x10)
};

// ScriptStruct LF.GameActionFlag
// Size: 0x04 (Inherited: 0x00)
struct FGameActionFlag {
	bool bIsAiming; // 0x00(0x01)
	bool bIsDepending; // 0x01(0x01)
	bool bIsFalling; // 0x02(0x01)
	bool bIsDodging; // 0x03(0x01)
};

// ScriptStruct LF.InstanceIndices
// Size: 0x10 (Inherited: 0x00)
struct FInstanceIndices {
	struct TArray<int32_t> Indices; // 0x00(0x10)
};

// ScriptStruct LF.ItemOwningResult
// Size: 0x10 (Inherited: 0x08)
struct FItemOwningResult : FTableRowBase {
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct LF.BirdData
// Size: 0x70 (Inherited: 0x08)
struct FBirdData : FTableRowBase {
	int32_t Health; // 0x08(0x04)
	int32_t Stamina; // 0x0c(0x04)
	int32_t MinStaminaToFly; // 0x10(0x04)
	float JumpGravity; // 0x14(0x04)
	int32_t FlyingSpeedMin; // 0x18(0x04)
	int32_t FlyingSpeedMax; // 0x1c(0x04)
	int32_t JumpVelocityZ; // 0x20(0x04)
	int32_t JumpSpeedForward; // 0x24(0x04)
	int32_t JumpSpeedUp; // 0x28(0x04)
	int32_t JumpAwayDistance; // 0x2c(0x04)
	int32_t JumpToFlyVelocityZ; // 0x30(0x04)
	int32_t JumpToFlySpeedForward; // 0x34(0x04)
	int32_t JumpToFlySpeedUp; // 0x38(0x04)
	int32_t FlyAwayDistance; // 0x3c(0x04)
	int32_t TurnSpeedPerch; // 0x40(0x04)
	int32_t TurnSpeedLanding; // 0x44(0x04)
	int32_t TurnSpeedFly; // 0x48(0x04)
	int32_t RunAwayAccelerationDistance; // 0x4c(0x04)
	int32_t RunAwaySpeedFar; // 0x50(0x04)
	int32_t RunAwaySpeedNear; // 0x54(0x04)
	int32_t HearingRange; // 0x58(0x04)
	int32_t SightRange; // 0x5c(0x04)
	int32_t SightAngle; // 0x60(0x04)
	int32_t RandomPointDistance; // 0x64(0x04)
	int32_t FlyAwaySeconds; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// ScriptStruct LF.AnimalData
// Size: 0x68 (Inherited: 0x08)
struct FAnimalData : FTableRowBase {
	enum class EAnimalBehaviorType Behavior; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t HP; // 0x0c(0x04)
	int32_t MoveSpeed; // 0x10(0x04)
	int32_t EngageMinSpeed; // 0x14(0x04)
	int32_t EngageMoveSpeed; // 0x18(0x04)
	int32_t AttackDamage; // 0x1c(0x04)
	float AttackSpeed; // 0x20(0x04)
	int32_t FleeHP; // 0x24(0x04)
	float CombatAvoidProbability; // 0x28(0x04)
	float HitAvoidProbability; // 0x2c(0x04)
	int32_t Stamina; // 0x30(0x04)
	int32_t MinimumStaminaToRun; // 0x34(0x04)
	int32_t ExaustSpeedBlendTime; // 0x38(0x04)
	int32_t HearingRange; // 0x3c(0x04)
	int32_t HearingExpireSecond; // 0x40(0x04)
	int32_t SightRange; // 0x44(0x04)
	int32_t SightAngle; // 0x48(0x04)
	int32_t SightExpireSecond; // 0x4c(0x04)
	int32_t AggroCheckTime; // 0x50(0x04)
	int32_t AggroLostDistance; // 0x54(0x04)
	float HearingRangeUnit; // 0x58(0x04)
	float SightRangeUnit; // 0x5c(0x04)
	float AggroLostDistanceUnit; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
};

// ScriptStruct LF.ZombieData
// Size: 0xb8 (Inherited: 0x08)
struct FZombieData : FTableRowBase {
	float HP; // 0x08(0x04)
	float MovementSpeed; // 0x0c(0x04)
	float AttackSpeed; // 0x10(0x04)
	float DefaultDamage; // 0x14(0x04)
	float HearingRange; // 0x18(0x04)
	float HearingRangeInside; // 0x1c(0x04)
	float HearingExpireSecond; // 0x20(0x04)
	float SightRange; // 0x24(0x04)
	float SightRangeInside; // 0x28(0x04)
	float SightAngle; // 0x2c(0x04)
	float SightAngleInside; // 0x30(0x04)
	float SightExpireSecond; // 0x34(0x04)
	float AttackRange; // 0x38(0x04)
	float AlternativeAttackRange; // 0x3c(0x04)
	float ChaseAttackRange; // 0x40(0x04)
	float SpecialAttackMinRange; // 0x44(0x04)
	float SpecialAttackMaxRange; // 0x48(0x04)
	float SpecialAttackCoolTime; // 0x4c(0x04)
	float StompDamage; // 0x50(0x04)
	float StompRadius; // 0x54(0x04)
	float JumpDamage; // 0x58(0x04)
	float JumpRadius; // 0x5c(0x04)
	float BiteDamage; // 0x60(0x04)
	float AvoidProbability; // 0x64(0x04)
	float AvoidAcceleration; // 0x68(0x04)
	float DropRate; // 0x6c(0x04)
	struct FName DropId; // 0x70(0x08)
	float WaveDropRate; // 0x78(0x04)
	struct FName WaveDropId; // 0x7c(0x08)
	float EarlyWaveDropRateAddition; // 0x84(0x04)
	float EarlyWaveLastIndex; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
	struct TArray<struct UAnimInstance*> LocomotionClasses; // 0x90(0x10)
	float HearingRangeUnit; // 0xa0(0x04)
	float HearingRangeInsideUnit; // 0xa4(0x04)
	float SightRangeUnit; // 0xa8(0x04)
	float SightRangeInsideUnit; // 0xac(0x04)
	enum class ECharacterWeightClass WeightClass; // 0xb0(0x01)
	char pad_B1[0x3]; // 0xb1(0x03)
	float ReleaseTargetProbability; // 0xb4(0x04)
};

// ScriptStruct LF.FirstPersonEquipmentLocomotionData
// Size: 0x170 (Inherited: 0x08)
struct FFirstPersonEquipmentLocomotionData : FTableRowBase {
	struct TSoftObjectPtr<struct UBlendSpace> StandLocomotion; // 0x08(0x28)
	struct TSoftObjectPtr<struct UBlendSpace> CrouchLocomotion; // 0x30(0x28)
	struct TSoftObjectPtr<struct UAimOffsetBlendSpace> Sway; // 0x58(0x28)
	struct TSoftObjectPtr<struct UAnimSequenceBase> LocomotionAdditive; // 0x80(0x28)
	struct TSoftObjectPtr<struct UAnimSequenceBase> FinalAdditive; // 0xa8(0x28)
	struct TSoftObjectPtr<struct UAnimSequenceBase> JumpStart; // 0xd0(0x28)
	struct TSoftObjectPtr<struct UAnimSequenceBase> JumpLoop; // 0xf8(0x28)
	struct TSoftObjectPtr<struct UAnimSequenceBase> JumpEnd; // 0x120(0x28)
	struct TSoftObjectPtr<struct UAnimSequenceBase> Aim; // 0x148(0x28)
};

// ScriptStruct LF.InteractionAnimationData
// Size: 0x68 (Inherited: 0x08)
struct FInteractionAnimationData : FTableRowBase {
	enum class EInteractionType InteractionType; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct TSoftObjectPtr<struct UAnimMontage> AnimMontage; // 0x10(0x28)
	bool bUseIndicator; // 0x38(0x01)
	bool bCanOpenUI; // 0x39(0x01)
	bool bCanCancel; // 0x3a(0x01)
	bool bOnlyThirdPerson; // 0x3b(0x01)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct TSoftObjectPtr<struct UAnimMontage> FirstPersonAnimMontage; // 0x40(0x28)
};

// ScriptStruct LF.WeaponAnimationPool
// Size: 0x180 (Inherited: 0x08)
struct FWeaponAnimationPool : FTableRowBase {
	struct TArray<struct FWeaponAnimationData> WeaponAnimations; // 0x08(0x10)
	struct FWeaponAnimationData SpecialAnimation; // 0x18(0xb0)
	struct FWeaponAnimationData ReloadAnimation; // 0xc8(0xb0)
	bool bShouldBlockWeaponIfCollided; // 0x178(0x01)
	bool bCanAttackWhileCrouched; // 0x179(0x01)
	char pad_17A[0x6]; // 0x17a(0x06)
};

// ScriptStruct LF.WeaponAnimationData
// Size: 0xb0 (Inherited: 0x08)
struct FWeaponAnimationData : FTableRowBase {
	struct TSoftObjectPtr<struct UAnimMontage> AnimMontage; // 0x08(0x28)
	float AnimSpeed; // 0x30(0x04)
	float AnimDamage; // 0x34(0x04)
	enum class EPoseType UsingHand; // 0x38(0x01)
	bool bUseCooltime; // 0x39(0x01)
	char pad_3A[0x6]; // 0x3a(0x06)
	struct UDamageType* DamageType; // 0x40(0x08)
	bool bUseSpineAim; // 0x48(0x01)
	bool bShouldBlockAttack; // 0x49(0x01)
	char pad_4A[0x2]; // 0x4a(0x02)
	float AttackBlockInSecond; // 0x4c(0x04)
	float AttackBlockOutSecond; // 0x50(0x04)
	float AttackBlockOffsetSecond; // 0x54(0x04)
	float AttackBlockStartDelay; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct TSoftObjectPtr<struct UAnimMontage> FirstPersonAnimMontage; // 0x60(0x28)
	struct TSoftObjectPtr<struct UAnimMontage> FirstPersonBlockedAnimMontage; // 0x88(0x28)
};

// ScriptStruct LF.HitTraitData
// Size: 0x60 (Inherited: 0x08)
struct FHitTraitData : FTableRowBase {
	struct FName EntityName; // 0x08(0x08)
	struct TMap<struct FName, float> HitTraits; // 0x10(0x50)
};

// ScriptStruct LF.WeaponTraitData
// Size: 0x30 (Inherited: 0x08)
struct FWeaponTraitData : FTableRowBase {
	struct FName EntityName; // 0x08(0x08)
	struct TArray<struct FName> WeaponTraits; // 0x10(0x10)
	struct TArray<struct FName> WeaponBuffs; // 0x20(0x10)
};

// ScriptStruct LF.WeaponNames
// Size: 0x10 (Inherited: 0x00)
struct FWeaponNames {
	struct TArray<struct FName> WeaponNames; // 0x00(0x10)
};

// ScriptStruct LF.CameraShakeModePreset
// Size: 0x18 (Inherited: 0x00)
struct FCameraShakeModePreset {
	struct UMatineeCameraShake* DefaultShakeClass; // 0x00(0x08)
	struct UMatineeCameraShake* BigShakeClass; // 0x08(0x08)
	float ScaleCriteria; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct LF.AppliedBuffData
// Size: 0x80 (Inherited: 0x00)
struct FAppliedBuffData {
	int32_t StartSeconds; // 0x00(0x04)
	int32_t EndSeconds; // 0x04(0x04)
	struct FBuffData Buff; // 0x08(0x70)
	int32_t LastTick; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
};

// ScriptStruct LF.BuffData
// Size: 0x70 (Inherited: 0x08)
struct FBuffData : FTableRowBase {
	struct FName ID; // 0x08(0x08)
	enum class EBuffType BuffType; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	struct FGameDate BuffDuration; // 0x14(0x10)
	bool bHasTick; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	struct FGameDate TickPeriod; // 0x28(0x10)
	bool bRestoreAtEnd; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float Value; // 0x3c(0x04)
	enum class EBuffCategory Category; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct TSoftObjectPtr<struct UTexture2D> BuffIcon; // 0x48(0x28)
};

// ScriptStruct LF.GameDate
// Size: 0x10 (Inherited: 0x00)
struct FGameDate {
	int32_t Day; // 0x00(0x04)
	int32_t Hour; // 0x04(0x04)
	int32_t Minute; // 0x08(0x04)
	int32_t Second; // 0x0c(0x04)
};

// ScriptStruct LF.ParticleArray
// Size: 0x10 (Inherited: 0x00)
struct FParticleArray {
	struct TArray<struct UFXSystemComponent*> ParticleComponents; // 0x00(0x10)
};

// ScriptStruct LF.PlayerCameraParameters
// Size: 0x14 (Inherited: 0x00)
struct FPlayerCameraParameters {
	float Length; // 0x00(0x04)
	float Height; // 0x04(0x04)
	float Center; // 0x08(0x04)
	float FOV; // 0x0c(0x04)
	float Smoothness; // 0x10(0x04)
};

// ScriptStruct LF.TutorialData
// Size: 0xd8 (Inherited: 0x08)
struct FTutorialData : FTableRowBase {
	struct TSoftObjectPtr<struct UTexture2D> KeyIcon; // 0x08(0x28)
	struct TSoftObjectPtr<struct UTexture2D> Icon; // 0x30(0x28)
	struct TSoftObjectPtr<struct UTexture2D> SubCategoryIcon; // 0x58(0x28)
	struct FText TextItem_2; // 0x80(0x18)
	struct FText TextItem_3; // 0x98(0x18)
	enum class ETutorialAction Action; // 0xb0(0x01)
	char pad_B1[0x3]; // 0xb1(0x03)
	struct FName TargetEntity; // 0xb4(0x08)
	char pad_BC[0x4]; // 0xbc(0x04)
	struct TArray<struct FEntityAmountData> RewardItems; // 0xc0(0x10)
	bool bIsDone; // 0xd0(0x01)
	char pad_D1[0x7]; // 0xd1(0x07)
};

// ScriptStruct LF.EntityAmountData
// Size: 0x0c (Inherited: 0x00)
struct FEntityAmountData {
	struct FName EntityId; // 0x00(0x08)
	int32_t Amount; // 0x08(0x04)
};

// ScriptStruct LF.PlayerCharacterClassData
// Size: 0x80 (Inherited: 0x08)
struct FPlayerCharacterClassData : FTableRowBase {
	SoftClassProperty CharacterClass; // 0x08(0x28)
	SoftClassProperty CharacterPreviewClass; // 0x30(0x28)
	SoftClassProperty InventoryPreviewClass; // 0x58(0x28)
};

// ScriptStruct LF.BuffHitData
// Size: 0x60 (Inherited: 0x08)
struct FBuffHitData : FTableRowBase {
	struct FName HitTraitName; // 0x08(0x08)
	struct TMap<enum class EBuffCategory, float> Effects; // 0x10(0x50)
};

// ScriptStruct LF.BuffEffectData
// Size: 0x68 (Inherited: 0x08)
struct FBuffEffectData : FTableRowBase {
	struct FName BuffName; // 0x08(0x08)
	struct TMap<struct FName, struct FName> EffectPerHitTrait; // 0x10(0x50)
	struct FName FallbackEffect; // 0x60(0x08)
};

// ScriptStruct LF.ResearchData
// Size: 0x70 (Inherited: 0x08)
struct FResearchData : FTableRowBase {
	struct FName ResearchId; // 0x08(0x08)
	struct FText ResearchName; // 0x10(0x18)
	enum class EResearchCategory Category; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct TArray<struct FMaterialItem> Materials; // 0x30(0x10)
	struct FName NeedResearchId; // 0x40(0x08)
	struct TArray<struct FName> ResearchRecipes; // 0x48(0x10)
	struct TArray<struct FPassiveSkillData> ResearchSkills; // 0x58(0x10)
	int32_t Tier; // 0x68(0x04)
	bool bCanLost; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
};

// ScriptStruct LF.PassiveSkillData
// Size: 0x10 (Inherited: 0x00)
struct FPassiveSkillData {
	struct FName SkillEntityId; // 0x00(0x08)
	enum class EPassiveSkillType SkillType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float Value; // 0x0c(0x04)
};

// ScriptStruct LF.MaterialItem
// Size: 0x18 (Inherited: 0x08)
struct FMaterialItem : FTableRowBase {
	struct FName Entity; // 0x08(0x08)
	int32_t Amount; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct LF.FarmData
// Size: 0x30 (Inherited: 0x08)
struct FFarmData : FTableRowBase {
	struct FEntityDropData DropData; // 0x08(0x18)
	struct FGameDate Period; // 0x20(0x10)
};

// ScriptStruct LF.EntityDropData
// Size: 0x18 (Inherited: 0x08)
struct FEntityDropData : FTableRowBase {
	struct TArray<struct FDropData> EntityDrops; // 0x08(0x10)
};

// ScriptStruct LF.DropData
// Size: 0x20 (Inherited: 0x08)
struct FDropData : FTableRowBase {
	struct FName EntityName; // 0x08(0x08)
	float DropRate; // 0x10(0x04)
	int32_t DropAmount; // 0x14(0x04)
	bool bShouldShuffle; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct LF.TrapModificationData
// Size: 0x18 (Inherited: 0x08)
struct FTrapModificationData : FTableRowBase {
	enum class ETrapModificationType Type; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float Value; // 0x0c(0x04)
	float Rate; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct LF.TrapAttackData
// Size: 0x18 (Inherited: 0x08)
struct FTrapAttackData : FTableRowBase {
	float TrapDamage; // 0x08(0x04)
	int32_t MaxAttackCount; // 0x0c(0x04)
	int32_t MaxAmmoAmount; // 0x10(0x04)
	bool bNeedPowerToAttack; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct LF.BuildingHitData
// Size: 0x20 (Inherited: 0x08)
struct FBuildingHitData : FTableRowBase {
	struct FName DestructEffectName; // 0x08(0x08)
	struct FName HitTraitName; // 0x10(0x08)
	float HP; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct LF.BuildingUpgradeDataParsed
// Size: 0x1f8 (Inherited: 0x00)
struct FBuildingUpgradeDataParsed {
	struct FEntityData BuildingEntity; // 0x00(0xe0)
	struct FEntityData UpgradeBuildingEntity; // 0xe0(0xe0)
	struct TArray<struct FInventoryItem> MaterialItems; // 0x1c0(0x10)
	struct TArray<struct FEntityData> KeyEntities; // 0x1d0(0x10)
	struct FText UpgradeDescription; // 0x1e0(0x18)
};

// ScriptStruct LF.EntityData
// Size: 0xe0 (Inherited: 0x08)
struct FEntityData : FTableRowBase {
	struct FName EntityName; // 0x08(0x08)
	struct FText DisplayName; // 0x10(0x18)
	struct FText EntityDesc; // 0x28(0x18)
	struct TSoftObjectPtr<struct UStaticMesh> EntityMesh; // 0x40(0x28)
	struct TSoftObjectPtr<struct USkeletalMesh> EntitySkeletalMesh; // 0x68(0x28)
	struct TSoftObjectPtr<struct UTexture2D> EntityThumbnail; // 0x90(0x28)
	SoftClassProperty EntityClass; // 0xb8(0x28)
};

// ScriptStruct LF.InventoryItem
// Size: 0xf8 (Inherited: 0x00)
struct FInventoryItem {
	struct FEntityData EntityData; // 0x00(0xe0)
	int32_t EntityAmount; // 0xe0(0x04)
	struct FItemId ItemId; // 0xe4(0x10)
	char pad_F4[0x4]; // 0xf4(0x04)
};

// ScriptStruct LF.BuildingUpgradeData
// Size: 0x50 (Inherited: 0x08)
struct FBuildingUpgradeData : FTableRowBase {
	struct FName BuildingEntity; // 0x08(0x08)
	struct FName UpgradeBuildingEntity; // 0x10(0x08)
	struct TArray<struct FMaterialItem> MaterialItems; // 0x18(0x10)
	struct TArray<struct FName> KeyEntities; // 0x28(0x10)
	struct FText UpgradeDescription; // 0x38(0x18)
};

// ScriptStruct LF.BuildingDataArray
// Size: 0x10 (Inherited: 0x00)
struct FBuildingDataArray {
	struct TArray<struct FBuildingDataParsed> BuildingData; // 0x00(0x10)
};

// ScriptStruct LF.BuildingDataParsed
// Size: 0x168 (Inherited: 0x00)
struct FBuildingDataParsed {
	struct FEntityData Entity; // 0x00(0xe0)
	SoftClassProperty Building; // 0xe0(0x28)
	SoftClassProperty BuildingBlueprint; // 0x108(0x28)
	enum class EBuildingCategory Category; // 0x130(0x01)
	char pad_131[0x7]; // 0x131(0x07)
	struct TArray<struct FInventoryItem> MaterialItems; // 0x138(0x10)
	struct TArray<struct FEntityData> KeyEntities; // 0x148(0x10)
	struct TArray<struct FInventoryItem> RepairMaterials; // 0x158(0x10)
};

// ScriptStruct LF.BuildingData
// Size: 0x98 (Inherited: 0x08)
struct FBuildingData : FTableRowBase {
	struct FName Entity; // 0x08(0x08)
	SoftClassProperty Building; // 0x10(0x28)
	SoftClassProperty BuildingBlueprint; // 0x38(0x28)
	enum class EBuildingCategory Category; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
	struct TArray<struct FMaterialItem> MaterialItems; // 0x68(0x10)
	struct TArray<struct FName> KeyEntities; // 0x78(0x10)
	struct TArray<struct FMaterialItem> RepairMaterials; // 0x88(0x10)
};

// ScriptStruct LF.CraftDataParsed
// Size: 0x128 (Inherited: 0x00)
struct FCraftDataParsed {
	struct FInventoryItem CraftedEntity; // 0x00(0xf8)
	enum class ECraftCategory Category; // 0xf8(0x01)
	char pad_F9[0x7]; // 0xf9(0x07)
	struct TArray<struct FInventoryItem> MaterialItems; // 0x100(0x10)
	struct TArray<struct FEntityData> KeyEntities; // 0x110(0x10)
	bool bUseKeyItem; // 0x120(0x01)
	bool bHideIfNoKey; // 0x121(0x01)
	bool bHideKeyItem; // 0x122(0x01)
	char pad_123[0x1]; // 0x123(0x01)
	int32_t Tier; // 0x124(0x04)
};

// ScriptStruct LF.CraftData
// Size: 0x50 (Inherited: 0x08)
struct FCraftData : FTableRowBase {
	struct FName CraftedEntity; // 0x08(0x08)
	int32_t CraftedAmount; // 0x10(0x04)
	enum class ECraftCategory Category; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct TArray<struct FMaterialItem> MaterialItems; // 0x18(0x10)
	struct TArray<struct FName> KeyEntities; // 0x28(0x10)
	struct TArray<struct TSoftObjectPtr<struct UDataTable>> MaterialTables; // 0x38(0x10)
	bool bUseKeyItem; // 0x48(0x01)
	bool bHideIfNoKey; // 0x49(0x01)
	bool bHideKeyItem; // 0x4a(0x01)
	char pad_4B[0x1]; // 0x4b(0x01)
	int32_t Tier; // 0x4c(0x04)
};

// ScriptStruct LF.EntityMaterialItems
// Size: 0x20 (Inherited: 0x08)
struct FEntityMaterialItems : FTableRowBase {
	struct FName Entity; // 0x08(0x08)
	struct TArray<struct FMaterialItem> Materials; // 0x10(0x10)
};

// ScriptStruct LF.EffectData
// Size: 0x40 (Inherited: 0x08)
struct FEffectData : FTableRowBase {
	struct TArray<struct TSoftObjectPtr<struct UFXSystemAsset>> FxAssets; // 0x08(0x10)
	bool bUseImpactNormal; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	struct FVector EffectScale; // 0x1c(0x0c)
	struct FVector EffectOffset; // 0x28(0x0c)
	struct FRotator EffectRotation; // 0x34(0x0c)
};

// ScriptStruct LF.EntityEffectData
// Size: 0x78 (Inherited: 0x08)
struct FEntityEffectData : FTableRowBase {
	int32_t Priority; // 0x08(0x04)
	struct FName DefaultEffect; // 0x0c(0x08)
	char pad_14[0x4]; // 0x14(0x04)
	struct TMap<struct UPhysicalMaterial*, struct FName> MaterialEffects; // 0x18(0x50)
	struct TArray<struct FName> AdditionalEffects; // 0x68(0x10)
};

// ScriptStruct LF.AttachedEffectParameters
// Size: 0x30 (Inherited: 0x00)
struct FAttachedEffectParameters {
	char pad_0[0x30]; // 0x00(0x30)
};

// ScriptStruct LF.EffectParameters
// Size: 0x40 (Inherited: 0x00)
struct FEffectParameters {
	char pad_0[0x40]; // 0x00(0x40)
};

// ScriptStruct LF.SocketConnectionAction
// Size: 0x20 (Inherited: 0x00)
struct FSocketConnectionAction {
	struct UObject* FromSocketObject; // 0x00(0x08)
	int32_t FromIndex; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UObject* ToSocketObject; // 0x10(0x08)
	int32_t ToIndex; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct LF.ElectricData
// Size: 0x38 (Inherited: 0x08)
struct FElectricData : FTableRowBase {
	int32_t StandbyPower; // 0x08(0x04)
	int32_t PowerConsumption; // 0x0c(0x04)
	int32_t PowerGeneration; // 0x10(0x04)
	int32_t OvercurrentLimit; // 0x14(0x04)
	int32_t MaxChargedPower; // 0x18(0x04)
	int32_t MaxPowerCharge; // 0x1c(0x04)
	int32_t DefaultDischarge; // 0x20(0x04)
	bool bCanForwardPower; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	struct FElectricSocketData ElectricSocketData; // 0x28(0x0c)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct LF.ElectricSocketData
// Size: 0x0c (Inherited: 0x00)
struct FElectricSocketData {
	int32_t MaxInputSocket; // 0x00(0x04)
	int32_t MaxOutputSocket; // 0x04(0x04)
	enum class EElectricSocketType OutputSocketType; // 0x08(0x01)
	char InputSocketFilter; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
};

// ScriptStruct LF.EntityAdditionalDescription
// Size: 0x38 (Inherited: 0x08)
struct FEntityAdditionalDescription : FTableRowBase {
	struct FText Description; // 0x08(0x18)
	struct FText Description_Value; // 0x20(0x18)
};

// ScriptStruct LF.ItemData
// Size: 0x20 (Inherited: 0x08)
struct FItemData : FTableRowBase {
	struct FName EntityName; // 0x08(0x08)
	enum class EItemType ItemType; // 0x10(0x01)
	bool bIsStackable; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)
	int32_t MaxAmount; // 0x14(0x04)
	bool bCanDrop; // 0x18(0x01)
	bool bAutoEquip; // 0x19(0x01)
	bool bIsAmmo; // 0x1a(0x01)
	char pad_1B[0x5]; // 0x1b(0x05)
};

// ScriptStruct LF.QuickSlotItem_Net
// Size: 0x18 (Inherited: 0x00)
struct FQuickSlotItem_Net {
	struct FName EntityName; // 0x00(0x08)
	struct FItemId ItemId; // 0x08(0x10)
};

// ScriptStruct LF.QuickSlotItem
// Size: 0xf8 (Inherited: 0x00)
struct FQuickSlotItem {
	struct FInventoryItem InventoryItem; // 0x00(0xf8)
};

// ScriptStruct LF.InventoryItemArray
// Size: 0x10 (Inherited: 0x00)
struct FInventoryItemArray {
	struct TArray<struct FInventoryItem> InventoryItems; // 0x00(0x10)
};

// ScriptStruct LF.InventoryItem_Net
// Size: 0x1c (Inherited: 0x00)
struct FInventoryItem_Net {
	struct FName EntityData; // 0x00(0x08)
	int32_t EntityAmount; // 0x08(0x04)
	struct FItemId ItemId; // 0x0c(0x10)
};

// ScriptStruct LF.EquipmentSwapAnimItem
// Size: 0x0c (Inherited: 0x00)
struct FEquipmentSwapAnimItem {
	struct FName EquipmentName; // 0x00(0x08)
	bool bIsEquipping; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct LF.GameActionGuideData
// Size: 0x28 (Inherited: 0x08)
struct FGameActionGuideData : FTableRowBase {
	struct FName GuideName; // 0x08(0x08)
	int32_t Priority; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<struct FGameAction> GameActions; // 0x18(0x10)
};

// ScriptStruct LF.GameAction
// Size: 0x30 (Inherited: 0x00)
struct FGameAction {
	struct FName ActionId; // 0x00(0x08)
	struct FName ActionKeyId; // 0x08(0x08)
	struct FText ActionDisplayName; // 0x10(0x18)
	char AllowedStates; // 0x28(0x01)
	struct FGameActionFlag AllowedFlags; // 0x29(0x04)
	char pad_2D[0x3]; // 0x2d(0x03)
};

// ScriptStruct LF.LFSaveSlotInfo
// Size: 0x50 (Inherited: 0x00)
struct FLFSaveSlotInfo {
	struct FString Name; // 0x00(0x10)
	bool bIsStandalone; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	struct FGameDate GameDate; // 0x14(0x10)
	enum class EGameDifficulty GameDifficulty; // 0x24(0x01)
	enum class EGameRule GameRule; // 0x25(0x01)
	bool bGameHardcore; // 0x26(0x01)
	bool bNoTeamkill; // 0x27(0x01)
	bool bNoWave; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct TArray<struct FLFPlayerInfo> Players; // 0x30(0x10)
	struct FString GameVersion; // 0x40(0x10)
};

// ScriptStruct LF.LFPlayerInfo
// Size: 0x18 (Inherited: 0x00)
struct FLFPlayerInfo {
	struct FString PlayerName; // 0x00(0x10)
	struct FName CharacterId; // 0x10(0x08)
};

// ScriptStruct LF.LFSessionInfo
// Size: 0x28 (Inherited: 0x00)
struct FLFSessionInfo {
	struct FString SessionName; // 0x00(0x10)
	struct FString SessionPassword; // 0x10(0x10)
	int32_t MaxPlayers; // 0x20(0x04)
	bool bIsPublic; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
};

// ScriptStruct LF.InteractionInfo
// Size: 0x0c (Inherited: 0x00)
struct FInteractionInfo {
	float Percent; // 0x00(0x04)
	int32_t Count; // 0x04(0x04)
	int32_t MaxCount; // 0x08(0x04)
};

// ScriptStruct LF.InteractionParameter
// Size: 0x18 (Inherited: 0x00)
struct FInteractionParameter {
	enum class EInteractionType InteractionType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FInteractionParameterItem> Items; // 0x08(0x10)
};

// ScriptStruct LF.InteractionParameterItem
// Size: 0x50 (Inherited: 0x00)
struct FInteractionParameterItem {
	bool bValid; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FText Name; // 0x08(0x18)
	struct TSoftObjectPtr<struct UTexture2D> Icon; // 0x20(0x28)
	int32_t Count; // 0x48(0x04)
	int32_t MaxCount; // 0x4c(0x04)
};

// ScriptStruct LF.OwningItemData
// Size: 0x24 (Inherited: 0x00)
struct FOwningItemData {
	struct FInventoryItem_Net Item; // 0x00(0x1c)
	int32_t FromIndex; // 0x1c(0x04)
	int32_t DesiredIndex; // 0x20(0x04)
};

// ScriptStruct LF.OwningNotificationItem
// Size: 0x20 (Inherited: 0x00)
struct FOwningNotificationItem {
	struct FInventoryItem_Net Item; // 0x00(0x1c)
	bool bPositive; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct LF.EquipmentToolData
// Size: 0x18 (Inherited: 0x08)
struct FEquipmentToolData : FTableRowBase {
	struct ULFToolBehavior* ToolBehaviorClass; // 0x08(0x08)
	struct FName BehaviorName; // 0x10(0x08)
};

// ScriptStruct LF.EquipmentIndicatorData
// Size: 0x38 (Inherited: 0x08)
struct FEquipmentIndicatorData : FTableRowBase {
	struct FName EntityName; // 0x08(0x08)
	struct TSoftObjectPtr<struct UTexture2D> IndicatorIcon; // 0x10(0x28)
};

// ScriptStruct LF.EquipmentAmmoData
// Size: 0x40 (Inherited: 0x08)
struct FEquipmentAmmoData : FTableRowBase {
	struct FName EquipmentEntity; // 0x08(0x08)
	struct FName Ammo; // 0x10(0x08)
	float DrawSpeed; // 0x18(0x04)
	bool bStopIfNoAmmo; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	float MinimumDraw; // 0x20(0x04)
	float DrawRecoil; // 0x24(0x04)
	float ShootDefaultRecoil; // 0x28(0x04)
	struct FVector2D ShootRecoil; // 0x2c(0x08)
	bool bReloadOnEquip; // 0x34(0x01)
	bool bBoltAction; // 0x35(0x01)
	bool bSpawnOnlyServer; // 0x36(0x01)
	char pad_37[0x1]; // 0x37(0x01)
	int32_t MagazineCapacity; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct LF.EquipmentData
// Size: 0x150 (Inherited: 0x08)
struct FEquipmentData : FTableRowBase {
	struct FName EntityName; // 0x08(0x08)
	struct TMap<enum class EEquipmentStatus, float> EquipmentStatus; // 0x10(0x50)
	struct FName WeaponTraitName; // 0x60(0x08)
	int32_t Tier; // 0x68(0x04)
	struct FName OriginalEquipmentName; // 0x6c(0x08)
	char pad_74[0x4]; // 0x74(0x04)
	struct TSoftObjectPtr<struct USkeletalMesh> SkeletalMesh; // 0x78(0x28)
	SoftClassProperty EquipmentEntity; // 0xa0(0x28)
	SoftClassProperty FirstPersonEquipmentEntity; // 0xc8(0x28)
	SoftClassProperty ThrowableEntity; // 0xf0(0x28)
	enum class EEquipmentSlot EquipmentSlot; // 0x118(0x01)
	char pad_119[0x7]; // 0x119(0x07)
	struct TArray<enum class EEquipmentSlot> OccupyingSlots; // 0x120(0x10)
	enum class EWeaponType WeaponType; // 0x130(0x01)
	enum class EWeaponPoseType WeaponPoseType; // 0x131(0x01)
	char pad_132[0x2]; // 0x132(0x02)
	struct FName WeaponAttackType; // 0x134(0x08)
	bool bWeaponUseBlendSpace; // 0x13c(0x01)
	char pad_13D[0x3]; // 0x13d(0x03)
	float WeaponPoseBlendWeight; // 0x140(0x04)
	float OtherHandWeight; // 0x144(0x04)
	float StaminaUsage; // 0x148(0x04)
	char pad_14C[0x4]; // 0x14c(0x04)
};

// ScriptStruct LF.ConsumableDietTypeData
// Size: 0x18 (Inherited: 0x08)
struct FConsumableDietTypeData : FTableRowBase {
	struct FName EntityName; // 0x08(0x08)
	enum class EDietType DietType; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct LF.ConsumableData
// Size: 0x78 (Inherited: 0x08)
struct FConsumableData : FTableRowBase {
	struct FName EntityName; // 0x08(0x08)
	struct TMap<enum class ECharacterStatus, float> ConsumableValue; // 0x10(0x50)
	enum class EInteractionType AnimationType; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
	struct TArray<struct FName> ConsumableBuffs; // 0x68(0x10)
};

// ScriptStruct LF.KeyDisplayData
// Size: 0x28 (Inherited: 0x08)
struct FKeyDisplayData : FTableRowBase {
	struct FText DisplayName; // 0x08(0x18)
	struct UTexture2D* GuideIcon; // 0x20(0x08)
};

// ScriptStruct LF.LFPlayerArchive
// Size: 0xb0 (Inherited: 0x00)
struct FLFPlayerArchive {
	struct FString PlayerName; // 0x00(0x10)
	struct FName CharacterId; // 0x10(0x08)
	struct FLFControllerSaveData SavedController; // 0x18(0x30)
	struct FLFPawnSaveData SavedPawn; // 0x48(0x38)
	struct FLFGameObjectSaveData SavedPlayerState; // 0x80(0x20)
	struct FString PlayerUniqueNetId; // 0xa0(0x10)
};

// ScriptStruct LF.LFGameObjectSaveData
// Size: 0x20 (Inherited: 0x00)
struct FLFGameObjectSaveData {
	struct TArray<char> data; // 0x00(0x10)
	struct TArray<struct FLFComponentSaveData> Components; // 0x10(0x10)
};

// ScriptStruct LF.LFComponentSaveData
// Size: 0x50 (Inherited: 0x00)
struct FLFComponentSaveData {
	struct TArray<char> Name; // 0x00(0x10)
	struct FTransform RelativeTransform; // 0x10(0x30)
	struct TArray<char> data; // 0x40(0x10)
};

// ScriptStruct LF.LFPawnSaveData
// Size: 0x38 (Inherited: 0x00)
struct FLFPawnSaveData {
	struct FVector Position; // 0x00(0x0c)
	struct FRotator Rotation; // 0x0c(0x0c)
	struct FLFGameObjectSaveData SaveData; // 0x18(0x20)
};

// ScriptStruct LF.LFControllerSaveData
// Size: 0x30 (Inherited: 0x00)
struct FLFControllerSaveData {
	struct FRotator Rotation; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FLFGameObjectSaveData SaveData; // 0x10(0x20)
};

// ScriptStruct LF.CharacterSoundData
// Size: 0x60 (Inherited: 0x08)
struct FCharacterSoundData : FTableRowBase {
	struct FName DefaultSound; // 0x08(0x08)
	struct TMap<struct FName, struct FName> CharacterSound; // 0x10(0x50)
};

// ScriptStruct LF.SoundPlayData
// Size: 0x88 (Inherited: 0x08)
struct FSoundPlayData : FTableRowBase {
	struct TSoftObjectPtr<struct USoundBase> Sound; // 0x08(0x28)
	struct TSoftObjectPtr<struct USoundAttenuation> AttenuationSettings; // 0x30(0x28)
	struct TSoftObjectPtr<struct USoundConcurrency> ConcurrencySettings; // 0x58(0x28)
	float VolumeMultiflier; // 0x80(0x04)
	float FadeInTime; // 0x84(0x04)
};

// ScriptStruct LF.NoiseActionData
// Size: 0x18 (Inherited: 0x08)
struct FNoiseActionData : FTableRowBase {
	enum class ENoiseAction ActionType; // 0x08(0x04)
	float Range; // 0x0c(0x04)
	float RangeUnit; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct LF.LFZombieClassArray
// Size: 0x10 (Inherited: 0x00)
struct FLFZombieClassArray {
	struct TArray<struct ALFZombie*> ZombieClasses; // 0x00(0x10)
};

// ScriptStruct LF.LFCharacterClassArray
// Size: 0x10 (Inherited: 0x00)
struct FLFCharacterClassArray {
	struct TArray<struct ALFCharacter*> CharacterClasses; // 0x00(0x10)
};

// ScriptStruct LF.LFGamePlayerId
// Size: 0x20 (Inherited: 0x00)
struct FLFGamePlayerId {
	struct FString PlayerName; // 0x00(0x10)
	struct FString PlayerId; // 0x10(0x10)
};

// ScriptStruct LF.MultiplayerStatusModifier
// Size: 0x60 (Inherited: 0x08)
struct FMultiplayerStatusModifier : FTableRowBase {
	float MultiplayerStatusModifier; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TMap<enum class ECharacterWeightClass, float> MultiplayerWaveHealthModifiers; // 0x10(0x50)
};

// ScriptStruct LF.WaveStatusModifier
// Size: 0x100 (Inherited: 0x08)
struct FWaveStatusModifier : FTableRowBase {
	struct TMap<int32_t, float> WaveLightStatusModifier; // 0x08(0x50)
	struct TMap<int32_t, float> WaveHeavyStatusModifier; // 0x58(0x50)
	struct TMap<int32_t, float> WaveGiantStatusModifier; // 0xa8(0x50)
	float FixWaveDuplicateModifier; // 0xf8(0x04)
	char pad_FC[0x4]; // 0xfc(0x04)
};

// ScriptStruct LF.CustomDifficultyRange
// Size: 0x10 (Inherited: 0x08)
struct FCustomDifficultyRange : FTableRowBase {
	float LowerBound; // 0x08(0x04)
	float UpperBound; // 0x0c(0x04)
};

// ScriptStruct LF.GameDifficultyItemValue
// Size: 0x58 (Inherited: 0x08)
struct FGameDifficultyItemValue : FTableRowBase {
	struct TMap<enum class EGameDifficulty, float> DifficultyValue; // 0x08(0x50)
};

// ScriptStruct LF.LFTeam
// Size: 0x90 (Inherited: 0x00)
struct FLFTeam {
	struct FLFTeamId TeamId; // 0x00(0x10)
	struct FString TeamName; // 0x10(0x10)
	struct TArray<struct FLFTeamAgents> TeamAgents; // 0x20(0x10)
	struct FLFTeamAgents EmptyTeamAgents; // 0x30(0x10)
	char pad_40[0x50]; // 0x40(0x50)
};

// ScriptStruct LF.LFTeamAgents
// Size: 0x10 (Inherited: 0x00)
struct FLFTeamAgents {
	struct TArray<struct FLFTeamAgentId> Agents; // 0x00(0x10)
};

// ScriptStruct LF.LFTeamAgentId
// Size: 0x20 (Inherited: 0x00)
struct FLFTeamAgentId {
	struct FString AgentId; // 0x00(0x10)
	struct FString AgentName; // 0x10(0x10)
};

// ScriptStruct LF.LFTeamId
// Size: 0x10 (Inherited: 0x00)
struct FLFTeamId {
	struct FGuid TeamId; // 0x00(0x10)
};

// ScriptStruct LF.LFPointDamageEvent
// Size: 0xc0 (Inherited: 0xb0)
struct FLFPointDamageEvent : FPointDamageEvent {
	struct TArray<struct FName> AttackTraits; // 0xb0(0x10)
};

// ScriptStruct LF.RandomWaveData
// Size: 0x80 (Inherited: 0x08)
struct FRandomWaveData : FTableRowBase {
	struct FGameDate DayAfter; // 0x08(0x10)
	struct TMap<struct ALFZombie*, float> SpawnProbabilities; // 0x18(0x50)
	int32_t RandomMax; // 0x68(0x04)
	int32_t RandomIteration; // 0x6c(0x04)
	struct FGameDate CheckPeriod; // 0x70(0x10)
};

// ScriptStruct LF.TimeWaveData
// Size: 0x90 (Inherited: 0x08)
struct FTimeWaveData : FTableRowBase {
	int32_t WaveIndex; // 0x08(0x04)
	struct FGameDate StartDate; // 0x0c(0x10)
	struct FGameDate EndDate; // 0x1c(0x10)
	struct FGameDate Interval; // 0x2c(0x10)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct TMap<struct ALFZombie*, float> SpawnProbabilities; // 0x40(0x50)
};

// ScriptStruct LF.WaveData
// Size: 0x188 (Inherited: 0x08)
struct FWaveData : FTableRowBase {
	int32_t WaveIndex; // 0x08(0x04)
	struct FGameDate WaveDate; // 0x0c(0x10)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TMap<struct ALFZombie*, int32_t> WaveFixAmount; // 0x20(0x50)
	struct TMap<struct ALFZombie*, float> SpawnProbabilities; // 0x70(0x50)
	int32_t WaveMax; // 0xc0(0x04)
	char SpawnFrom; // 0xc4(0x01)
	char pad_C5[0x3]; // 0xc5(0x03)
	struct TMap<struct ALFZombie*, int32_t> WaveAmount; // 0xc8(0x50)
	struct TArray<char> SpawnLocation; // 0x118(0x10)
	struct TMap<struct ALFZombie*, int32_t> SpawnedAmount; // 0x128(0x50)
	bool bIsDone; // 0x178(0x01)
	bool bIsInProgress; // 0x179(0x01)
	char pad_17A[0x2]; // 0x17a(0x02)
	int32_t TotalWaveAmount; // 0x17c(0x04)
	int32_t SpawnedWaveAmount; // 0x180(0x04)
	char pad_184[0x4]; // 0x184(0x04)
};

// ScriptStruct LF.OwningNotifyData
// Size: 0x50 (Inherited: 0x00)
struct FOwningNotifyData {
	struct FText Name; // 0x00(0x18)
	int32_t Amount; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TSoftObjectPtr<struct UTexture2D> Icon; // 0x20(0x28)
	bool bPositive; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	float ElapsedSeconds; // 0x4c(0x04)
};

// ScriptStruct LF.StreamingGameObjectData
// Size: 0x30 (Inherited: 0x00)
struct FStreamingGameObjectData {
	enum class EStreamingGameObjectState ObjectState; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FInventoryItem> Items; // 0x08(0x10)
	bool bObjectFlag; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	struct FGameDate StateChangedDate; // 0x1c(0x10)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct LF.ThrowableAttachment
// Size: 0x50 (Inherited: 0x00)
struct FThrowableAttachment {
	struct USceneComponent* AttachedComponent; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform RelativeTransform; // 0x10(0x30)
	struct FName BoneName; // 0x40(0x08)
	char pad_48[0x8]; // 0x48(0x08)
};

// ScriptStruct LF.ZombieClass
// Size: 0x10 (Inherited: 0x00)
struct FZombieClass {
	struct TArray<struct ALFZombie*> ZombieClasses; // 0x00(0x10)
};

