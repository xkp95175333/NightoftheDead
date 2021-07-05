// Class TimeManagement.FixedFrameRateCustomTimeStep
// Size: 0x30 (Inherited: 0x28)
struct UFixedFrameRateCustomTimeStep : UEngineCustomTimeStep {
	struct FFrameRate FixedFrameRate; // 0x28(0x08)
};

// Class TimeManagement.GenlockedCustomTimeStep
// Size: 0x30 (Inherited: 0x30)
struct UGenlockedCustomTimeStep : UFixedFrameRateCustomTimeStep {
};

// Class TimeManagement.GenlockedTimecodeProvider
// Size: 0x58 (Inherited: 0x30)
struct UGenlockedTimecodeProvider : UTimecodeProvider {
	bool bUseGenlockToCount; // 0x30(0x01)
	char pad_31[0x27]; // 0x31(0x27)
};

// Class TimeManagement.TimeManagementBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UTimeManagementBlueprintLibrary : UBlueprintFunctionLibrary {

	struct FFrameTime TransformTime(struct FFrameTime SourceTime, struct FFrameRate SourceRate, struct FFrameRate DestinationRate); // Function TimeManagement.TimeManagementBlueprintLibrary.TransformTime // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x21b0e00
	struct FFrameNumber Subtract_FrameNumberInteger(struct FFrameNumber A, int32_t B); // Function TimeManagement.TimeManagementBlueprintLibrary.Subtract_FrameNumberInteger // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x21b0d40
	struct FFrameNumber Subtract_FrameNumberFrameNumber(struct FFrameNumber A, struct FFrameNumber B); // Function TimeManagement.TimeManagementBlueprintLibrary.Subtract_FrameNumberFrameNumber // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x21b0c80
	struct FFrameTime SnapFrameTimeToRate(struct FFrameTime SourceTime, struct FFrameRate SourceRate, struct FFrameRate SnapToRate); // Function TimeManagement.TimeManagementBlueprintLibrary.SnapFrameTimeToRate // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x21b0b30
	struct FFrameTime Multiply_SecondsFrameRate(float TimeInSeconds, struct FFrameRate FrameRate); // Function TimeManagement.TimeManagementBlueprintLibrary.Multiply_SecondsFrameRate // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x21b0a50
	struct FFrameNumber Multiply_FrameNumberInteger(struct FFrameNumber A, int32_t B); // Function TimeManagement.TimeManagementBlueprintLibrary.Multiply_FrameNumberInteger // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x21b0990
	bool IsValid_MultipleOf(struct FFrameRate InFrameRate, struct FFrameRate OtherFramerate); // Function TimeManagement.TimeManagementBlueprintLibrary.IsValid_MultipleOf // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x21b0890
	bool IsValid_Framerate(struct FFrameRate InFrameRate); // Function TimeManagement.TimeManagementBlueprintLibrary.IsValid_Framerate // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x21b07f0
	struct FFrameRate GetTimecodeFrameRate(); // Function TimeManagement.TimeManagementBlueprintLibrary.GetTimecodeFrameRate // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x21b07b0
	struct FTimecode GetTimecode(); // Function TimeManagement.TimeManagementBlueprintLibrary.GetTimecode // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x21b0770
	struct FFrameNumber Divide_FrameNumberInteger(struct FFrameNumber A, int32_t B); // Function TimeManagement.TimeManagementBlueprintLibrary.Divide_FrameNumberInteger // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x21b06b0
	struct FString Conv_TimecodeToString(struct FTimecode InTimecode, bool bForceSignDisplay); // Function TimeManagement.TimeManagementBlueprintLibrary.Conv_TimecodeToString // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x21b0580
	float Conv_QualifiedFrameTimeToSeconds(struct FQualifiedFrameTime InFrameTime); // Function TimeManagement.TimeManagementBlueprintLibrary.Conv_QualifiedFrameTimeToSeconds // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x21b04d0
	float Conv_FrameRateToSeconds(struct FFrameRate InFrameRate); // Function TimeManagement.TimeManagementBlueprintLibrary.Conv_FrameRateToSeconds // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x21b0430
	int32_t Conv_FrameNumberToInteger(struct FFrameNumber InFrameNumber); // Function TimeManagement.TimeManagementBlueprintLibrary.Conv_FrameNumberToInteger // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x21b03a0
	struct FFrameNumber Add_FrameNumberInteger(struct FFrameNumber A, int32_t B); // Function TimeManagement.TimeManagementBlueprintLibrary.Add_FrameNumberInteger // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x21b02e0
	struct FFrameNumber Add_FrameNumberFrameNumber(struct FFrameNumber A, struct FFrameNumber B); // Function TimeManagement.TimeManagementBlueprintLibrary.Add_FrameNumberFrameNumber // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x21b0220
};

// Class TimeManagement.TimeSynchronizationSource
// Size: 0x30 (Inherited: 0x28)
struct UTimeSynchronizationSource : UObject {
	bool bUseForSynchronization; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	int32_t FrameOffset; // 0x2c(0x04)
};

