// ScriptStruct MSSR.SnapSettings
// Size: 0x70 (Inherited: 0x00)
struct FSnapSettings {
	float SearchDist; // 0x00(0x04)
	float MaxAngle; // 0x04(0x04)
	bool bIgnoreSocketName; // 0x08(0x01)
	bool bSnapAttachedToo; // 0x09(0x01)
	bool bSnapOpenOnly; // 0x0a(0x01)
	char pad_B[0x1]; // 0x0b(0x01)
	float OpenCheckRadius; // 0x0c(0x04)
	struct FVector DefaultRotSnap; // 0x10(0x0c)
	struct FVector DefaultScaleSnap; // 0x1c(0x0c)
	bool bIgnoreSocketParams; // 0x28(0x01)
	bool bAttachToParent; // 0x29(0x01)
	bool bAttachToSocket; // 0x2a(0x01)
	bool bIgnoreSplineSocketScale; // 0x2b(0x01)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct TArray<struct FSoftClassPath> SourceComponentClasses; // 0x30(0x10)
	struct TArray<struct FSoftClassPath> TargetComponentClasses; // 0x40(0x10)
	struct TArray<struct FSoftClassPath> SourceActorClasses; // 0x50(0x10)
	struct TArray<struct FSoftClassPath> TargetActorClasses; // 0x60(0x10)
};

// ScriptStruct MSSR.SnapResult
// Size: 0x120 (Inherited: 0x00)
struct FSnapResult {
	struct FSnapSocket SourceSocket; // 0x00(0x70)
	struct FSnapSocket TargetSocket; // 0x70(0x70)
	struct TArray<struct FObjectAndTransform> NewTransforms; // 0xe0(0x10)
	struct FSnapParameters SnapParams; // 0xf0(0x28)
	char pad_118[0x8]; // 0x118(0x08)
};

// ScriptStruct MSSR.SnapParameters
// Size: 0x28 (Inherited: 0x00)
struct FSnapParameters {
	char pad_0[0x8]; // 0x00(0x08)
	struct FVector SnapAngles; // 0x08(0x0c)
	bool bScale; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FVector SnapScale; // 0x18(0x0c)
	bool bAttach; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
};

// ScriptStruct MSSR.ObjectAndTransform
// Size: 0x40 (Inherited: 0x00)
struct FObjectAndTransform {
	struct TWeakObjectPtr<struct UObject> Object; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform T; // 0x10(0x30)
};

// ScriptStruct MSSR.SnapSocket
// Size: 0x70 (Inherited: 0x00)
struct FSnapSocket {
	struct FString Name; // 0x00(0x10)
	struct FString Rest; // 0x10(0x10)
	struct FTransform T; // 0x20(0x30)
	struct TWeakObjectPtr<struct UPrimitiveComponent> Comp; // 0x50(0x08)
	struct FName FullName; // 0x58(0x08)
	bool bOpen; // 0x60(0x01)
	char pad_61[0xf]; // 0x61(0x0f)
};

// ScriptStruct MSSR.SnapLink
// Size: 0xe0 (Inherited: 0x00)
struct FSnapLink {
	struct FSnapSocket SourceSocket; // 0x00(0x70)
	struct FSnapSocket TargetSocket; // 0x70(0x70)
};

