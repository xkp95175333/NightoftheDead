// BlueprintGeneratedClass BP_MainMenuGameMode.BP_MainMenuGameMode_C
// Size: 0x3bc (Inherited: 0x2c0)
struct ABP_MainMenuGameMode_C : AGameModeBase {
	struct USceneComponent* DefaultSceneRoot; // 0x2c0(0x08)
	struct FString connect; // 0x2c8(0x10)
	struct FString Password; // 0x2d8(0x10)
	struct FString P2PAddr; // 0x2e8(0x10)
	bool bServerFound; // 0x2f8(0x01)
	char pad_2F9[0x7]; // 0x2f9(0x07)
	struct FGameServerItem FoundServer; // 0x300(0xb0)
	struct UWBP_Main_Connect_C* ConnectionWidget; // 0x3b0(0x08)
	int32_t Port; // 0x3b8(0x04)
};

