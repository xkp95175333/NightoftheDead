// BlueprintGeneratedClass BP_MySaveGame.BP_MySaveGame_C
// Size: 0xa4 (Inherited: 0x28)
struct UBP_MySaveGame_C : USaveGame {
	struct FText GameName; // 0x28(0x18)
	struct FDateTime DateSaved; // 0x40(0x08)
	enum class E_Difficulty Difficulty; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	int32_t TimePlayedSecond; // 0x4c(0x04)
	struct FName LevelName; // 0x50(0x08)
	struct FString SlotName; // 0x58(0x10)
	char pad_68[0x8]; // 0x68(0x08)
	struct FTransform PlayerPosition; // 0x70(0x30)
	int32_t NumberSave; // 0xa0(0x04)
};

