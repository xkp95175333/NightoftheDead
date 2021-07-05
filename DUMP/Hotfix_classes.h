// Class Hotfix.OnlineHotfixManager
// Size: 0x220 (Inherited: 0x28)
struct UOnlineHotfixManager : UObject {
	char pad_28[0x1b8]; // 0x28(0x1b8)
	struct FString OssName; // 0x1e0(0x10)
	struct FString HotfixManagerClassName; // 0x1f0(0x10)
	struct FString DebugPrefix; // 0x200(0x10)
	struct TArray<struct UObject*> AssetsHotfixedFromIniFiles; // 0x210(0x10)

	void StartHotfixProcess(); // Function Hotfix.OnlineHotfixManager.StartHotfixProcess // (Native|Public|BlueprintCallable) // @ game+0xcb46c0
};

// Class Hotfix.UpdateManager
// Size: 0x118 (Inherited: 0x28)
struct UUpdateManager : UObject {
	char pad_28[0x60]; // 0x28(0x60)
	float HotfixCheckCompleteDelay; // 0x88(0x04)
	float UpdateCheckCompleteDelay; // 0x8c(0x04)
	float HotfixAvailabilityCheckCompleteDelay; // 0x90(0x04)
	float UpdateCheckAvailabilityCompleteDelay; // 0x94(0x04)
	char pad_98[0x4]; // 0x98(0x04)
	int32_t AppSuspendedUpdateCheckTimeSeconds; // 0x9c(0x04)
	char pad_A0[0x8]; // 0xa0(0x08)
	bool bPlatformEnvironmentDetected; // 0xa8(0x01)
	bool bInitialUpdateFinished; // 0xa9(0x01)
	bool bCheckHotfixAvailabilityOnly; // 0xaa(0x01)
	enum class EUpdateState CurrentUpdateState; // 0xab(0x01)
	int32_t WorstNumFilesPendingLoadViewed; // 0xac(0x04)
	char pad_B0[0x4]; // 0xb0(0x04)
	enum class EHotfixResult LastHotfixResult; // 0xb4(0x01)
	char pad_B5[0x2b]; // 0xb5(0x2b)
	struct FDateTime LastUpdateCheck[0x2]; // 0xe0(0x10)
	enum class EUpdateCompletionStatus LastCompletionResult[0x2]; // 0xf0(0x02)
	char pad_F2[0x16]; // 0xf2(0x16)
	struct UEnum* UpdateStateEnum; // 0x108(0x08)
	struct UEnum* UpdateCompletionEnum; // 0x110(0x08)
};

