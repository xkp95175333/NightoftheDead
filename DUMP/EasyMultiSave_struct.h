// Enum EasyMultiSave.ELoadTypeFlags
enum class ELoadTypeFlags : uint8 {
	LF_Player,
	LF_Level,
	LF_MAX,
};

// Enum EasyMultiSave.ESaveTypeFlags
enum class ESaveTypeFlags : uint8 {
	SF_Player,
	SF_Level,
	SF_MAX,
};

// Enum EasyMultiSave.ELoadMethod
enum class ELoadMethod : uint8 {
	LM_Default,
	LM_Deferred,
	LM_Thread,
	LM_MAX,
};

// Enum EasyMultiSave.EActorType
enum class EActorType : uint8 {
	AT_Runtime,
	AT_Placed,
	AT_LevelScript,
	AT_Player,
	AT_GameObject,
	AT_Persistent,
	AT_MAX,
};

// Enum EasyMultiSave.EDataLoadType
enum class EDataLoadType : uint8 {
	DATA_Level,
	DATA_Player,
	DATA_Object,
	DATA_MAX,
};

// Enum EasyMultiSave.EUpdateActorResult
enum class EUpdateActorResult : uint8 {
	RES_Success,
	RES_Skip,
	RES_ShouldSpawnNewActor,
	RES_MAX,
};

// ScriptStruct EasyMultiSave.PlayerArchive
// Size: 0x90 (Inherited: 0x00)
struct FPlayerArchive {
	char pad_0[0x90]; // 0x00(0x90)
};

// ScriptStruct EasyMultiSave.LevelArchive
// Size: 0x68 (Inherited: 0x00)
struct FLevelArchive {
	char pad_0[0x68]; // 0x00(0x68)
};

// ScriptStruct EasyMultiSave.ControllerSaveData
// Size: 0x30 (Inherited: 0x00)
struct FControllerSaveData {
	char pad_0[0x30]; // 0x00(0x30)
};

// ScriptStruct EasyMultiSave.PawnSaveData
// Size: 0x38 (Inherited: 0x00)
struct FPawnSaveData {
	char pad_0[0x38]; // 0x00(0x38)
};

// ScriptStruct EasyMultiSave.LevelScriptSaveData
// Size: 0x28 (Inherited: 0x00)
struct FLevelScriptSaveData {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct EasyMultiSave.ActorSaveData
// Size: 0x80 (Inherited: 0x00)
struct FActorSaveData {
	char pad_0[0x80]; // 0x00(0x80)
};

// ScriptStruct EasyMultiSave.GameObjectSaveData
// Size: 0x20 (Inherited: 0x00)
struct FGameObjectSaveData {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct EasyMultiSave.ComponentSaveData
// Size: 0x50 (Inherited: 0x00)
struct FComponentSaveData {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct EasyMultiSave.SaveSlotInfo
// Size: 0x30 (Inherited: 0x00)
struct FSaveSlotInfo {
	struct FString Name; // 0x00(0x10)
	struct FDateTime Timestamp; // 0x10(0x08)
	struct FName Level; // 0x18(0x08)
	struct TArray<struct FString> Players; // 0x20(0x10)
};

