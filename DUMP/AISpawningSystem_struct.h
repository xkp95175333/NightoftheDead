// ScriptStruct AISpawningSystem.AIClassData
// Size: 0x10 (Inherited: 0x00)
struct FAIClassData {
	struct TArray<struct ACharacter*> Classes; // 0x00(0x10)
};

// ScriptStruct AISpawningSystem.AISpawnData
// Size: 0x40 (Inherited: 0x00)
struct FAISpawnData {
	struct FTransform Transform; // 0x00(0x30)
	struct UObject* SpawnClass; // 0x30(0x08)
	char pad_38[0x8]; // 0x38(0x08)
};

// ScriptStruct AISpawningSystem.AIActorData
// Size: 0x40 (Inherited: 0x00)
struct FAIActorData {
	struct FTransform Transform; // 0x00(0x30)
	struct ACharacter* AIClass; // 0x30(0x08)
	bool bLoaded; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float HP; // 0x3c(0x04)
};

