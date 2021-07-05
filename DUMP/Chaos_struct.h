// Enum Chaos.EClusterUnionMethod
enum class EClusterUnionMethod : uint8 {
	PointImplicit,
	DelaunayTriangulation,
	MinimalSpanningSubsetDelaunayTriangulation,
	PointImplicitAugmentedWithMinimalDelaunay,
	None,
	EClusterUnionMethod_MAX,
};

// Enum Chaos.EFieldPhysicsDefaultFields
enum class EFieldPhysicsDefaultFields : uint8 {
	Field_RadialIntMask,
	Field_RadialFalloff,
	Field_UniformVector,
	Field_RadialVector,
	Field_RadialVectorFalloff,
	Field_EFieldPhysicsDefaultFields_Max,
	Field_MAX,
};

// Enum Chaos.EFieldPhysicsType
enum class EFieldPhysicsType : uint8 {
	Field_None,
	Field_DynamicState,
	Field_LinearForce,
	Field_ExternalClusterStrain,
	Field_Kill,
	Field_LinearVelocity,
	Field_AngularVelociy,
	Field_AngularTorque,
	Field_InternalClusterStrain,
	Field_DisableThreshold,
	Field_SleepingThreshold,
	Field_PositionStatic,
	Field_PositionAnimated,
	Field_PositionTarget,
	Field_DynamicConstraint,
	Field_CollisionGroup,
	Field_ActivateDisabled,
	Field_PhysicsType_Max,
};

// Enum Chaos.EFieldFalloffType
enum class EFieldFalloffType : uint8 {
	Field_FallOff_None,
	Field_Falloff_Linear,
	Field_Falloff_Inverse,
	Field_Falloff_Squared,
	Field_Falloff_Logarithmic,
	Field_Falloff_Max,
};

// Enum Chaos.EFieldResolutionType
enum class EFieldResolutionType : uint8 {
	Field_Resolution_Minimal,
	Field_Resolution_DisabledParents,
	Field_Resolution_Maximum,
	Field_Resolution_Max,
};

// Enum Chaos.EFieldCullingOperationType
enum class EFieldCullingOperationType : uint8 {
	Field_Culling_Inside,
	Field_Culling_Outside,
	Field_Culling_Operation_Max,
	Field_Culling_MAX,
};

// Enum Chaos.EFieldOperationType
enum class EFieldOperationType : uint8 {
	Field_Multiply,
	Field_Divide,
	Field_Add,
	Field_Substract,
	Field_Operation_Max,
};

// Enum Chaos.ESetMaskConditionType
enum class ESetMaskConditionType : uint8 {
	Field_Set_Always,
	Field_Set_IFF_NOT_Interior,
	Field_Set_IFF_NOT_Exterior,
	Field_MaskCondition_Max,
};

// Enum Chaos.EEmissionPatternTypeEnum
enum class EEmissionPatternTypeEnum : uint8 {
	Chaos_Emission_Pattern_First_Frame,
	Chaos_Emission_Pattern_On_Demand,
	Chaos_Max,
};

// Enum Chaos.EInitialVelocityTypeEnum
enum class EInitialVelocityTypeEnum : uint8 {
	Chaos_Initial_Velocity_User_Defined,
	Chaos_Initial_Velocity_None,
	Chaos_Max,
};

// Enum Chaos.EGeometryCollectionPhysicsTypeEnum
enum class EGeometryCollectionPhysicsTypeEnum : uint8 {
	Chaos_AngularVelocity,
	Chaos_DynamicState,
	Chaos_LinearVelocity,
	Chaos_InitialAngularVelocity,
	Chaos_InitialLinearVelocity,
	Chaos_CollisionGroup,
	Chaos_LinearForce,
	Chaos_AngularTorque,
	Chaos_Max,
};

// Enum Chaos.EObjectStateTypeEnum
enum class EObjectStateTypeEnum : uint8 {
	Chaos_NONE,
	Chaos_Object_Sleeping,
	Chaos_Object_Kinematic,
	Chaos_Object_Static,
	Chaos_Object_Dynamic,
	Chaos_Object_UserDefined,
	Chaos_Max,
};

// Enum Chaos.EImplicitTypeEnum
enum class EImplicitTypeEnum : uint8 {
	Chaos_Implicit_Box,
	Chaos_Implicit_Sphere,
	Chaos_Implicit_Capsule,
	Chaos_Implicit_LevelSet,
	Chaos_Implicit_None,
	Chaos_Max,
};

// Enum Chaos.ECollisionTypeEnum
enum class ECollisionTypeEnum : uint8 {
	Chaos_Volumetric,
	Chaos_Surface_Volumetric,
	Chaos_Max,
};

// Enum Chaos.EChaosBufferMode
enum class EChaosBufferMode : uint8 {
	Double,
	Triple,
	Num,
	Invalid,
	EChaosBufferMode_MAX,
};

// Enum Chaos.EChaosThreadingMode
enum class EChaosThreadingMode : uint8 {
	DedicatedThread,
	TaskGraph,
	SingleThread,
	Num,
	Invalid,
	EChaosThreadingMode_MAX,
};

// Enum Chaos.EChaosSolverTickMode
enum class EChaosSolverTickMode : uint8 {
	Fixed,
	Variable,
	VariableCapped,
	VariableCappedWithTarget,
	EChaosSolverTickMode_MAX,
};

// Enum Chaos.EGeometryCollectionCacheType
enum class EGeometryCollectionCacheType : uint8 {
	None,
	Record,
	Play,
	RecordAndPlay,
	EGeometryCollectionCacheType_MAX,
};

// ScriptStruct Chaos.ChaosSolverConfiguration
// Size: 0x68 (Inherited: 0x00)
struct FChaosSolverConfiguration {
	int32_t Iterations; // 0x00(0x04)
	int32_t CollisionPairIterations; // 0x04(0x04)
	int32_t PushOutIterations; // 0x08(0x04)
	int32_t CollisionPushOutPairIterations; // 0x0c(0x04)
	float CollisionMarginFraction; // 0x10(0x04)
	float CollisionMarginMax; // 0x14(0x04)
	float CollisionCullDistance; // 0x18(0x04)
	int32_t JointPairIterations; // 0x1c(0x04)
	int32_t JointPushOutPairIterations; // 0x20(0x04)
	float ClusterConnectionFactor; // 0x24(0x04)
	enum class EClusterUnionMethod ClusterUnionConnectionType; // 0x28(0x01)
	bool bGenerateCollisionData; // 0x29(0x01)
	char pad_2A[0x2]; // 0x2a(0x02)
	struct FSolverCollisionFilterSettings CollisionFilterSettings; // 0x2c(0x10)
	bool bGenerateBreakData; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	struct FSolverBreakingFilterSettings BreakingFilterSettings; // 0x40(0x10)
	bool bGenerateTrailingData; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	struct FSolverTrailingFilterSettings TrailingFilterSettings; // 0x54(0x10)
	bool bGenerateContactGraph; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
};

// ScriptStruct Chaos.SolverTrailingFilterSettings
// Size: 0x10 (Inherited: 0x00)
struct FSolverTrailingFilterSettings {
	bool FilterEnabled; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float MinMass; // 0x04(0x04)
	float MinSpeed; // 0x08(0x04)
	float MinVolume; // 0x0c(0x04)
};

// ScriptStruct Chaos.SolverBreakingFilterSettings
// Size: 0x10 (Inherited: 0x00)
struct FSolverBreakingFilterSettings {
	bool FilterEnabled; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float MinMass; // 0x04(0x04)
	float MinSpeed; // 0x08(0x04)
	float MinVolume; // 0x0c(0x04)
};

// ScriptStruct Chaos.SolverCollisionFilterSettings
// Size: 0x10 (Inherited: 0x00)
struct FSolverCollisionFilterSettings {
	bool FilterEnabled; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float MinMass; // 0x04(0x04)
	float MinSpeed; // 0x08(0x04)
	float MinImpulse; // 0x0c(0x04)
};

// ScriptStruct Chaos.RecordedTransformTrack
// Size: 0x10 (Inherited: 0x00)
struct FRecordedTransformTrack {
	struct TArray<struct FRecordedFrame> Records; // 0x00(0x10)
};

// ScriptStruct Chaos.RecordedFrame
// Size: 0xb8 (Inherited: 0x00)
struct FRecordedFrame {
	struct TArray<struct FTransform> Transforms; // 0x00(0x10)
	struct TArray<int32_t> TransformIndices; // 0x10(0x10)
	struct TArray<int32_t> PreviousTransformIndices; // 0x20(0x10)
	struct TArray<bool> DisabledFlags; // 0x30(0x10)
	struct TArray<struct FSolverCollisionData> Collisions; // 0x40(0x10)
	struct TArray<struct FSolverBreakingData> Breakings; // 0x50(0x10)
	struct TSet<struct FSolverTrailingData> Trailings; // 0x60(0x50)
	float Timestamp; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
};

// ScriptStruct Chaos.SolverTrailingData
// Size: 0x30 (Inherited: 0x00)
struct FSolverTrailingData {
	struct FVector Location; // 0x00(0x0c)
	struct FVector Velocity; // 0x0c(0x0c)
	struct FVector AngularVelocity; // 0x18(0x0c)
	float Mass; // 0x24(0x04)
	int32_t ParticleIndex; // 0x28(0x04)
	int32_t ParticleIndexMesh; // 0x2c(0x04)
};

// ScriptStruct Chaos.SolverBreakingData
// Size: 0x30 (Inherited: 0x00)
struct FSolverBreakingData {
	struct FVector Location; // 0x00(0x0c)
	struct FVector Velocity; // 0x0c(0x0c)
	struct FVector AngularVelocity; // 0x18(0x0c)
	float Mass; // 0x24(0x04)
	int32_t ParticleIndex; // 0x28(0x04)
	int32_t ParticleIndexMesh; // 0x2c(0x04)
};

// ScriptStruct Chaos.SolverCollisionData
// Size: 0x6c (Inherited: 0x00)
struct FSolverCollisionData {
	struct FVector Location; // 0x00(0x0c)
	struct FVector AccumulatedImpulse; // 0x0c(0x0c)
	struct FVector Normal; // 0x18(0x0c)
	struct FVector Velocity1; // 0x24(0x0c)
	struct FVector Velocity2; // 0x30(0x0c)
	struct FVector AngularVelocity1; // 0x3c(0x0c)
	struct FVector AngularVelocity2; // 0x48(0x0c)
	float Mass1; // 0x54(0x04)
	float Mass2; // 0x58(0x04)
	int32_t ParticleIndex; // 0x5c(0x04)
	int32_t LevelsetIndex; // 0x60(0x04)
	int32_t ParticleIndexMesh; // 0x64(0x04)
	int32_t LevelsetIndexMesh; // 0x68(0x04)
};

