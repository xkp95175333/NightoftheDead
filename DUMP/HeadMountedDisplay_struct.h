// Enum HeadMountedDisplay.EXRVisualType
enum class EXRVisualType : uint8 {
	Controller,
	Hand,
	EXRVisualType_MAX,
};

// Enum HeadMountedDisplay.EHandKeypoint
enum class EHandKeypoint : uint8 {
	Palm,
	Wrist,
	ThumbMetacarpal,
	ThumbProximal,
	ThumbDistal,
	ThumbTip,
	IndexMetacarpal,
	IndexProximal,
	IndexIntermediate,
	IndexDistal,
	IndexTip,
	MiddleMetacarpal,
	MiddleProximal,
	MiddleIntermediate,
	MiddleDistal,
	MiddleTip,
	RingMetacarpal,
	RingProximal,
	RingIntermediate,
	RingDistal,
	RingTip,
	LittleMetacarpal,
	LittleProximal,
	LittleIntermediate,
	LittleDistal,
	LittleTip,
	EHandKeypoint_MAX,
};

// Enum HeadMountedDisplay.EXRTrackedDeviceType
enum class EXRTrackedDeviceType : uint8 {
	HeadMountedDisplay,
	Controller,
	TrackingReference,
	Other,
	Invalid,
	Any,
	EXRTrackedDeviceType_MAX,
};

// Enum HeadMountedDisplay.ESpectatorScreenMode
enum class ESpectatorScreenMode : uint8 {
	Disabled,
	SingleEyeLetterboxed,
	Undistorted,
	Distorted,
	SingleEye,
	SingleEyeCroppedToFill,
	Texture,
	TexturePlusEye,
	ESpectatorScreenMode_MAX,
};

// Enum HeadMountedDisplay.EXRSystemFlags
enum class EXRSystemFlags : uint8 {
	NoFlags,
	IsAR,
	IsTablet,
	IsHeadMounted,
	SupportsHandTracking,
	EXRSystemFlags_MAX,
};

// Enum HeadMountedDisplay.EXRDeviceConnectionResult
enum class EXRDeviceConnectionResult : uint8 {
	NoTrackingSystem,
	FeatureNotSupported,
	NoValidViewport,
	MiscFailure,
	Success,
	EXRDeviceConnectionResult_MAX,
};

// Enum HeadMountedDisplay.EHMDWornState
enum class EHMDWornState : uint8 {
	Unknown,
	Worn,
	NotWorn,
	EHMDWornState_MAX,
};

// Enum HeadMountedDisplay.EHMDTrackingOrigin
enum class EHMDTrackingOrigin : uint8 {
	Floor,
	Eye,
	Stage,
	Unbounded,
	EHMDTrackingOrigin_MAX,
};

// Enum HeadMountedDisplay.EOrientPositionSelector
enum class EOrientPositionSelector : uint8 {
	Orientation,
	Position,
	OrientationAndPosition,
	EOrientPositionSelector_MAX,
};

// Enum HeadMountedDisplay.ETrackingStatus
enum class ETrackingStatus : uint8 {
	NotTracked,
	InertialOnly,
	Tracked,
	ETrackingStatus_MAX,
};

// Enum HeadMountedDisplay.ESpatialInputGestureAxis
enum class ESpatialInputGestureAxis : uint8 {
	None,
	Manipulation,
	Navigation,
	NavigationRails,
	ESpatialInputGestureAxis_MAX,
};

// ScriptStruct HeadMountedDisplay.XRMotionControllerData
// Size: 0xa0 (Inherited: 0x00)
struct FXRMotionControllerData {
	bool bValid; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName DeviceName; // 0x04(0x08)
	struct FGuid ApplicationInstanceID; // 0x0c(0x10)
	enum class EXRVisualType DeviceVisualType; // 0x1c(0x01)
	enum class EControllerHand HandIndex; // 0x1d(0x01)
	enum class ETrackingStatus TrackingStatus; // 0x1e(0x01)
	char pad_1F[0x1]; // 0x1f(0x01)
	struct FVector GripPosition; // 0x20(0x0c)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FQuat GripRotation; // 0x30(0x10)
	struct FVector AimPosition; // 0x40(0x0c)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct FQuat AimRotation; // 0x50(0x10)
	struct TArray<struct FVector> HandKeyPositions; // 0x60(0x10)
	struct TArray<struct FQuat> HandKeyRotations; // 0x70(0x10)
	struct TArray<float> HandKeyRadii; // 0x80(0x10)
	bool bIsGrasped; // 0x90(0x01)
	char pad_91[0xf]; // 0x91(0x0f)
};

// ScriptStruct HeadMountedDisplay.XRHMDData
// Size: 0x40 (Inherited: 0x00)
struct FXRHMDData {
	bool bValid; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName DeviceName; // 0x04(0x08)
	struct FGuid ApplicationInstanceID; // 0x0c(0x10)
	enum class ETrackingStatus TrackingStatus; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	struct FVector Position; // 0x20(0x0c)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FQuat Rotation; // 0x30(0x10)
};

// ScriptStruct HeadMountedDisplay.XRDeviceId
// Size: 0x0c (Inherited: 0x00)
struct FXRDeviceId {
	struct FName SystemName; // 0x00(0x08)
	int32_t DeviceID; // 0x08(0x04)
};

// ScriptStruct HeadMountedDisplay.XRGestureConfig
// Size: 0x06 (Inherited: 0x00)
struct FXRGestureConfig {
	bool bTap; // 0x00(0x01)
	bool bHold; // 0x01(0x01)
	enum class ESpatialInputGestureAxis AxisGesture; // 0x02(0x01)
	bool bNavigationAxisX; // 0x03(0x01)
	bool bNavigationAxisY; // 0x04(0x01)
	bool bNavigationAxisZ; // 0x05(0x01)
};

