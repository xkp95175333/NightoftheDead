// Enum AugmentedReality.EARTrackingState
enum class EARTrackingState : uint8 {
	Unknown,
	Tracking,
	NotTracking,
	StoppedTracking,
	EARTrackingState_MAX,
};

// Enum AugmentedReality.EGeoAnchorComponentDebugMode
enum class EGeoAnchorComponentDebugMode : uint8 {
	None,
	ShowGeoData,
	EGeoAnchorComponentDebugMode_MAX,
};

// Enum AugmentedReality.EPoseComponentDebugMode
enum class EPoseComponentDebugMode : uint8 {
	None,
	ShowSkeleton,
	EPoseComponentDebugMode_MAX,
};

// Enum AugmentedReality.EQRCodeComponentDebugMode
enum class EQRCodeComponentDebugMode : uint8 {
	None,
	ShowQRCode,
	EQRCodeComponentDebugMode_MAX,
};

// Enum AugmentedReality.EImageComponentDebugMode
enum class EImageComponentDebugMode : uint8 {
	None,
	ShowDetectedImage,
	EImageComponentDebugMode_MAX,
};

// Enum AugmentedReality.EARFaceTransformMixing
enum class EARFaceTransformMixing : uint8 {
	ComponentOnly,
	ComponentLocationTrackedRotation,
	ComponentWithTracked,
	TrackingOnly,
	EARFaceTransformMixing_MAX,
};

// Enum AugmentedReality.EFaceComponentDebugMode
enum class EFaceComponentDebugMode : uint8 {
	None,
	ShowEyeVectors,
	ShowFaceMesh,
	EFaceComponentDebugMode_MAX,
};

// Enum AugmentedReality.EPlaneComponentDebugMode
enum class EPlaneComponentDebugMode : uint8 {
	None,
	ShowNetworkRole,
	ShowClassification,
	EPlaneComponentDebugMode_MAX,
};

// Enum AugmentedReality.EARSessionConfigFlags
enum class EARSessionConfigFlags : uint8 {
	None,
	GenerateMeshData,
	RenderMeshDataInWireframe,
	GenerateCollisionForMeshData,
	GenerateNavMeshForMeshData,
	UseMeshDataForOcclusion,
	EARSessionConfigFlags_MAX,
};

// Enum AugmentedReality.EARServicePermissionRequestResult
enum class EARServicePermissionRequestResult : uint8 {
	Granted,
	Denied,
	EARServicePermissionRequestResult_MAX,
};

// Enum AugmentedReality.EARServiceInstallRequestResult
enum class EARServiceInstallRequestResult : uint8 {
	Installed,
	DeviceNotCompatible,
	UserDeclinedInstallation,
	FatalError,
	EARServiceInstallRequestResult_MAX,
};

// Enum AugmentedReality.EARServiceAvailability
enum class EARServiceAvailability : uint8 {
	UnknownError,
	UnknownChecking,
	UnknownTimedOut,
	UnsupportedDeviceNotCapable,
	SupportedNotInstalled,
	SupportedVersionTooOld,
	SupportedInstalled,
	EARServiceAvailability_MAX,
};

// Enum AugmentedReality.EARGeoTrackingAccuracy
enum class EARGeoTrackingAccuracy : uint8 {
	Undetermined,
	Low,
	Medium,
	High,
	EARGeoTrackingAccuracy_MAX,
};

// Enum AugmentedReality.EARGeoTrackingStateReason
enum class EARGeoTrackingStateReason : uint8 {
	None,
	NotAvailableAtLocation,
	NeedLocationPermissions,
	DevicePointedTooLow,
	WorldTrackingUnstable,
	WaitingForLocation,
	GeoDataNotLoaded,
	VisualLocalizationFailed,
	WaitingForAvailabilityCheck,
	EARGeoTrackingStateReason_MAX,
};

// Enum AugmentedReality.EARGeoTrackingState
enum class EARGeoTrackingState : uint8 {
	Initializing,
	Localized,
	Localizing,
	NotAvailable,
	EARGeoTrackingState_MAX,
};

// Enum AugmentedReality.EARSceneReconstruction
enum class EARSceneReconstruction : uint8 {
	None,
	MeshOnly,
	MeshWithClassification,
	EARSceneReconstruction_MAX,
};

// Enum AugmentedReality.EARSessionTrackingFeature
enum class EARSessionTrackingFeature : uint8 {
	None,
	PoseDetection2D,
	PersonSegmentation,
	PersonSegmentationWithDepth,
	SceneDepth,
	SmoothedSceneDepth,
	EARSessionTrackingFeature_MAX,
};

// Enum AugmentedReality.EARFaceTrackingUpdate
enum class EARFaceTrackingUpdate : uint8 {
	CurvesAndGeo,
	CurvesOnly,
	EARFaceTrackingUpdate_MAX,
};

// Enum AugmentedReality.EAREnvironmentCaptureProbeType
enum class EAREnvironmentCaptureProbeType : uint8 {
	None,
	Manual,
	Automatic,
	EAREnvironmentCaptureProbeType_MAX,
};

// Enum AugmentedReality.EARFrameSyncMode
enum class EARFrameSyncMode : uint8 {
	SyncTickWithCameraImage,
	SyncTickWithoutCameraImage,
	EARFrameSyncMode_MAX,
};

// Enum AugmentedReality.EARLightEstimationMode
enum class EARLightEstimationMode : uint8 {
	None,
	AmbientLightEstimate,
	DirectionalLightEstimate,
	EARLightEstimationMode_MAX,
};

// Enum AugmentedReality.EARPlaneDetectionMode
enum class EARPlaneDetectionMode : uint8 {
	None,
	HorizontalPlaneDetection,
	VerticalPlaneDetection,
	EARPlaneDetectionMode_MAX,
};

// Enum AugmentedReality.EARSessionType
enum class EARSessionType : uint8 {
	None,
	Orientation,
	World,
	Face,
	Image,
	ObjectScanning,
	PoseTracking,
	GeoTracking,
	EARSessionType_MAX,
};

// Enum AugmentedReality.EARWorldAlignment
enum class EARWorldAlignment : uint8 {
	Gravity,
	GravityAndHeading,
	Camera,
	EARWorldAlignment_MAX,
};

// Enum AugmentedReality.EARDepthAccuracy
enum class EARDepthAccuracy : uint8 {
	Unkown,
	Approximate,
	Accurate,
	EARDepthAccuracy_MAX,
};

// Enum AugmentedReality.EARDepthQuality
enum class EARDepthQuality : uint8 {
	Unkown,
	Low,
	High,
	EARDepthQuality_MAX,
};

// Enum AugmentedReality.EARTextureType
enum class EARTextureType : uint8 {
	Unknown,
	CameraImage,
	CameraDepth,
	EnvironmentCapture,
	PersonSegmentationImage,
	PersonSegmentationDepth,
	SceneDepthMap,
	SceneDepthConfidenceMap,
	EARTextureType_MAX,
};

// Enum AugmentedReality.EAREye
enum class EAREye : uint8 {
	LeftEye,
	RightEye,
	EAREye_MAX,
};

// Enum AugmentedReality.EARFaceBlendShape
enum class EARFaceBlendShape : uint8 {
	EyeBlinkLeft,
	EyeLookDownLeft,
	EyeLookInLeft,
	EyeLookOutLeft,
	EyeLookUpLeft,
	EyeSquintLeft,
	EyeWideLeft,
	EyeBlinkRight,
	EyeLookDownRight,
	EyeLookInRight,
	EyeLookOutRight,
	EyeLookUpRight,
	EyeSquintRight,
	EyeWideRight,
	JawForward,
	JawLeft,
	JawRight,
	JawOpen,
	MouthClose,
	MouthFunnel,
	MouthPucker,
	MouthLeft,
	MouthRight,
	MouthSmileLeft,
	MouthSmileRight,
	MouthFrownLeft,
	MouthFrownRight,
	MouthDimpleLeft,
	MouthDimpleRight,
	MouthStretchLeft,
	MouthStretchRight,
	MouthRollLower,
	MouthRollUpper,
	MouthShrugLower,
	MouthShrugUpper,
	MouthPressLeft,
	MouthPressRight,
	MouthLowerDownLeft,
	MouthLowerDownRight,
	MouthUpperUpLeft,
	MouthUpperUpRight,
	BrowDownLeft,
	BrowDownRight,
	BrowInnerUp,
	BrowOuterUpLeft,
	BrowOuterUpRight,
	CheekPuff,
	CheekSquintLeft,
	CheekSquintRight,
	NoseSneerLeft,
	NoseSneerRight,
	TongueOut,
	HeadYaw,
	HeadPitch,
	HeadRoll,
	LeftEyeYaw,
	LeftEyePitch,
	LeftEyeRoll,
	RightEyeYaw,
	RightEyePitch,
	RightEyeRoll,
	MAX,
};

// Enum AugmentedReality.EARFaceTrackingDirection
enum class EARFaceTrackingDirection : uint8 {
	FaceRelative,
	FaceMirrored,
	EARFaceTrackingDirection_MAX,
};

// Enum AugmentedReality.EARCandidateImageOrientation
enum class EARCandidateImageOrientation : uint8 {
	Landscape,
	Portrait,
	EARCandidateImageOrientation_MAX,
};

// Enum AugmentedReality.EARAltitudeSource
enum class EARAltitudeSource : uint8 {
	Precise,
	Coarse,
	UserDefined,
	Unknown,
	EARAltitudeSource_MAX,
};

// Enum AugmentedReality.EARJointTransformSpace
enum class EARJointTransformSpace : uint8 {
	Model,
	ParentJoint,
	EARJointTransformSpace_MAX,
};

// Enum AugmentedReality.EARObjectClassification
enum class EARObjectClassification : uint8 {
	NotApplicable,
	Unknown,
	Wall,
	Ceiling,
	Floor,
	Table,
	Seat,
	Face,
	Image,
	World,
	SceneObject,
	HandMesh,
	Door,
	Window,
	EARObjectClassification_MAX,
};

// Enum AugmentedReality.EARPlaneOrientation
enum class EARPlaneOrientation : uint8 {
	Horizontal,
	Vertical,
	Diagonal,
	EARPlaneOrientation_MAX,
};

// Enum AugmentedReality.EARWorldMappingState
enum class EARWorldMappingState : uint8 {
	NotAvailable,
	StillMappingNotRelocalizable,
	StillMappingRelocalizable,
	Mapped,
	EARWorldMappingState_MAX,
};

// Enum AugmentedReality.EARSessionStatus
enum class EARSessionStatus : uint8 {
	NotStarted,
	Running,
	NotSupported,
	FatalError,
	PermissionNotGranted,
	UnsupportedConfiguration,
	Other,
	EARSessionStatus_MAX,
};

// Enum AugmentedReality.EARTrackingQualityReason
enum class EARTrackingQualityReason : uint8 {
	None,
	Initializing,
	Relocalizing,
	ExcessiveMotion,
	InsufficientFeatures,
	InsufficientLight,
	BadState,
	EARTrackingQualityReason_MAX,
};

// Enum AugmentedReality.EARTrackingQuality
enum class EARTrackingQuality : uint8 {
	NotTracking,
	OrientationOnly,
	OrientationAndPosition,
	EARTrackingQuality_MAX,
};

// Enum AugmentedReality.EARLineTraceChannels
enum class EARLineTraceChannels : uint8 {
	None,
	FeaturePoint,
	GroundPlane,
	PlaneUsingExtent,
	PlaneUsingBoundaryPolygon,
	EARLineTraceChannels_MAX,
};

// Enum AugmentedReality.EARCaptureType
enum class EARCaptureType : uint8 {
	Camera,
	QRCode,
	SpatialMapping,
	SceneUnderstanding,
	EARCaptureType_MAX,
};

// ScriptStruct AugmentedReality.TrackedGeometryGroup
// Size: 0x18 (Inherited: 0x00)
struct FTrackedGeometryGroup {
	struct AARActor* ARActor; // 0x00(0x08)
	struct UARComponent* ARComponent; // 0x08(0x08)
	struct UARTrackedGeometry* TrackedGeometry; // 0x10(0x08)
};

// ScriptStruct AugmentedReality.ARGeoAnchorUpdatePayload
// Size: 0x70 (Inherited: 0x00)
struct FARGeoAnchorUpdatePayload {
	struct FARSessionPayload SessionPayload; // 0x00(0x18)
	char pad_18[0x8]; // 0x18(0x08)
	struct FTransform WorldTransform; // 0x20(0x30)
	float Longitude; // 0x50(0x04)
	float Latitude; // 0x54(0x04)
	float AltitudeMeters; // 0x58(0x04)
	enum class EARAltitudeSource AltitudeSource; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
	struct FString AnchorName; // 0x60(0x10)
};

// ScriptStruct AugmentedReality.ARSessionPayload
// Size: 0x18 (Inherited: 0x00)
struct FARSessionPayload {
	int32_t ConfigFlags; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UMaterialInterface* DefaultMeshMaterial; // 0x08(0x08)
	struct UMaterialInterface* DefaultWireframeMeshMaterial; // 0x10(0x08)
};

// ScriptStruct AugmentedReality.ARMeshUpdatePayload
// Size: 0x60 (Inherited: 0x00)
struct FARMeshUpdatePayload {
	struct FARSessionPayload SessionPayload; // 0x00(0x18)
	char pad_18[0x8]; // 0x18(0x08)
	struct FTransform WorldTransform; // 0x20(0x30)
	enum class EARObjectClassification ObjectClassification; // 0x50(0x01)
	char pad_51[0xf]; // 0x51(0x0f)
};

// ScriptStruct AugmentedReality.ARObjectUpdatePayload
// Size: 0x30 (Inherited: 0x00)
struct FARObjectUpdatePayload {
	struct FTransform WorldTransform; // 0x00(0x30)
};

// ScriptStruct AugmentedReality.AREnvironmentProbeUpdatePayload
// Size: 0x30 (Inherited: 0x00)
struct FAREnvironmentProbeUpdatePayload {
	struct FTransform WorldTransform; // 0x00(0x30)
};

// ScriptStruct AugmentedReality.ARPoseUpdatePayload
// Size: 0x40 (Inherited: 0x00)
struct FARPoseUpdatePayload {
	struct FTransform WorldTransform; // 0x00(0x30)
	struct TArray<struct FTransform> JointTransforms; // 0x30(0x10)
};

// ScriptStruct AugmentedReality.ARQRCodeUpdatePayload
// Size: 0x70 (Inherited: 0x00)
struct FARQRCodeUpdatePayload {
	struct FARSessionPayload SessionPayload; // 0x00(0x18)
	char pad_18[0x8]; // 0x18(0x08)
	struct FTransform WorldTransform; // 0x20(0x30)
	struct FVector Extents; // 0x50(0x0c)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FString QRCode; // 0x60(0x10)
};

// ScriptStruct AugmentedReality.ARImageUpdatePayload
// Size: 0x60 (Inherited: 0x00)
struct FARImageUpdatePayload {
	struct FARSessionPayload SessionPayload; // 0x00(0x18)
	char pad_18[0x8]; // 0x18(0x08)
	struct FTransform WorldTransform; // 0x20(0x30)
	struct UARCandidateImage* DetectedImage; // 0x50(0x08)
	struct FVector2D EstimatedSize; // 0x58(0x08)
};

// ScriptStruct AugmentedReality.ARFaceUpdatePayload
// Size: 0x40 (Inherited: 0x00)
struct FARFaceUpdatePayload {
	struct FARSessionPayload SessionPayload; // 0x00(0x18)
	struct FVector LeftEyePosition; // 0x18(0x0c)
	struct FVector RightEyePosition; // 0x24(0x0c)
	struct FVector LookAtTarget; // 0x30(0x0c)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct AugmentedReality.ARPointUpdatePayload
// Size: 0x01 (Inherited: 0x00)
struct FARPointUpdatePayload {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct AugmentedReality.ARPlaneUpdatePayload
// Size: 0x80 (Inherited: 0x00)
struct FARPlaneUpdatePayload {
	struct FARSessionPayload SessionPayload; // 0x00(0x18)
	char pad_18[0x8]; // 0x18(0x08)
	struct FTransform WorldTransform; // 0x20(0x30)
	struct FVector Center; // 0x50(0x0c)
	struct FVector Extents; // 0x5c(0x0c)
	struct TArray<struct FVector> BoundaryVertices; // 0x68(0x10)
	enum class EARObjectClassification ObjectClassification; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
};

// ScriptStruct AugmentedReality.ARSharedWorldReplicationState
// Size: 0x08 (Inherited: 0x00)
struct FARSharedWorldReplicationState {
	int32_t PreviewImageOffset; // 0x00(0x04)
	int32_t ARWorldOffset; // 0x04(0x04)
};

// ScriptStruct AugmentedReality.ARTraceResult
// Size: 0x60 (Inherited: 0x00)
struct FARTraceResult {
	float DistanceFromCamera; // 0x00(0x04)
	enum class EARLineTraceChannels TraceChannel; // 0x04(0x01)
	char pad_5[0xb]; // 0x05(0x0b)
	struct FTransform LocalTransform; // 0x10(0x30)
	struct UARTrackedGeometry* TrackedGeometry; // 0x40(0x08)
	char pad_48[0x18]; // 0x48(0x18)
};

// ScriptStruct AugmentedReality.ARCameraIntrinsics
// Size: 0x18 (Inherited: 0x00)
struct FARCameraIntrinsics {
	struct FIntPoint ImageResolution; // 0x00(0x08)
	struct FVector2D FocalLength; // 0x08(0x08)
	struct FVector2D PrincipalPoint; // 0x10(0x08)
};

// ScriptStruct AugmentedReality.ARPose3D
// Size: 0x50 (Inherited: 0x00)
struct FARPose3D {
	struct FARSkeletonDefinition SkeletonDefinition; // 0x00(0x28)
	struct TArray<struct FTransform> JointTransforms; // 0x28(0x10)
	struct TArray<bool> IsJointTracked; // 0x38(0x10)
	enum class EARJointTransformSpace JointTransformSpace; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// ScriptStruct AugmentedReality.ARSkeletonDefinition
// Size: 0x28 (Inherited: 0x00)
struct FARSkeletonDefinition {
	int32_t NumJoints; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FName> JointNames; // 0x08(0x10)
	struct TArray<int32_t> ParentIndices; // 0x18(0x10)
};

// ScriptStruct AugmentedReality.ARPose2D
// Size: 0x48 (Inherited: 0x00)
struct FARPose2D {
	struct FARSkeletonDefinition SkeletonDefinition; // 0x00(0x28)
	struct TArray<struct FVector2D> JointLocations; // 0x28(0x10)
	struct TArray<bool> IsJointTracked; // 0x38(0x10)
};

// ScriptStruct AugmentedReality.ARVideoFormat
// Size: 0x0c (Inherited: 0x00)
struct FARVideoFormat {
	int32_t FPS; // 0x00(0x04)
	int32_t Width; // 0x04(0x04)
	int32_t Height; // 0x08(0x04)
};

// ScriptStruct AugmentedReality.ARSessionStatus
// Size: 0x18 (Inherited: 0x00)
struct FARSessionStatus {
	struct FString AdditionalInfo; // 0x00(0x10)
	enum class EARSessionStatus Status; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

