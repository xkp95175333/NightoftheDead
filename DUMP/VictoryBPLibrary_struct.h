// Enum VictoryBPLibrary.ESpeedUnit
enum class ESpeedUnit : uint8 {
	CentimeterPerSecond,
	FootPerSecond,
	MeterPerSecond,
	MeterPerMinute,
	KilometerPerSecond,
	KilometerPerMinute,
	KilometerPerHour,
	MilePerHour,
	Knot,
	Mach,
	SpeedOfLight,
	YardPerSecond,
	ESpeedUnit_MAX,
};

// ScriptStruct VictoryBPLibrary.VictorySubtitleCue
// Size: 0x20 (Inherited: 0x00)
struct FVictorySubtitleCue {
	struct FText SubtitleText; // 0x00(0x18)
	float Time; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

