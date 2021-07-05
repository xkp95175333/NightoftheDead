// Enum NoisePlugin.ESelectInterpType
enum class ESelectInterpType : uint8 {
	None,
	CircularIn,
	CircularOut,
	CircularInOut,
	ExponentialIn,
	ExponentialOut,
	ExponentialInOut,
	SineIn,
	SineOut,
	SineInOut,
	Step,
	Linear,
	ESelectInterpType_MAX,
};

// Enum NoisePlugin.EFractalType
enum class EFractalType : uint8 {
	FBM,
	Billow,
	RidgedMulti,
	EFractalType_MAX,
};

// Enum NoisePlugin.EInterp
enum class EInterp : uint8 {
	Linear,
	Hermite,
	Quintic,
	EInterp_MAX,
};

