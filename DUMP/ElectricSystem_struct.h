// Enum ElectricSystem.EElectricSocketType
enum class EElectricSocketType : uint8 {
	None,
	Generator,
	Battery,
	Switch,
	Extension,
	Endpoint,
	SOCKET_Dummy1,
	SOCKET_Dummy2,
	SOCKET_Dummy3,
	EElectricSocketType_MAX,
};

// Enum ElectricSystem.EElectricSocketDirection
enum class EElectricSocketDirection : uint8 {
	Input,
	Output,
	EElectricSocketDirection_MAX,
};

// ScriptStruct ElectricSystem.ElectricSocketConnection
// Size: 0x18 (Inherited: 0x00)
struct FElectricSocketConnection {
	struct UObject* ConnectedSocketObject; // 0x00(0x08)
	int32_t OtherIndex; // 0x08(0x04)
	int32_t ThisIndex; // 0x0c(0x04)
	struct FName ConnectedObjectName; // 0x10(0x08)
};

