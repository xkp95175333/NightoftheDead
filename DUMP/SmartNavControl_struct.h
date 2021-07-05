// Enum SmartNavControl.ENavLinkGeneratedDirection
enum class ENavLinkGeneratedDirection : uint8 {
	LGD_BothWays,
	LGD_WayUp,
	LGD_WayDown,
	LGD_MAX,
};

// Enum SmartNavControl.ENavLinkLayersRelations
enum class ENavLinkLayersRelations : uint8 {
	LR_Any,
	LR_Diagonal,
	LR_Vertical,
	LR_MAX,
};

// Enum SmartNavControl.ENavLinkLayersFilter
enum class ENavLinkLayersFilter : uint8 {
	LF_Any,
	LF_TheSameLayer,
	LF_DifferentLayers,
	LF_MAX,
};

// ScriptStruct SmartNavControl.NavPolygonManualTest
// Size: 0x30 (Inherited: 0x00)
struct FNavPolygonManualTest {
	struct FVector PolyCenter; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FVector> Veritces; // 0x10(0x10)
	int32_t TileId; // 0x20(0x04)
	int32_t TileX; // 0x24(0x04)
	int32_t TileY; // 0x28(0x04)
	int32_t TileLayer; // 0x2c(0x04)
};

// ScriptStruct SmartNavControl.NavModifierRule
// Size: 0x20 (Inherited: 0x00)
struct FNavModifierRule {
	struct UNavArea* LinkClass; // 0x00(0x08)
	float MinAvailableHeight; // 0x08(0x04)
	float MaxAvailableHeight; // 0x0c(0x04)
	bool bCheckSurfaceType; // 0x10(0x01)
	enum class ECollisionChannel SurfaceObjectType; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)
	struct FTraceCheckSetup TraceUp; // 0x14(0x08)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct SmartNavControl.TraceCheckSetup
// Size: 0x08 (Inherited: 0x00)
struct FTraceCheckSetup {
	bool bCheckEnabled; // 0x00(0x01)
	enum class ECollisionChannel ObjectType; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float TraceDistance; // 0x04(0x04)
};

// ScriptStruct SmartNavControl.NavLinkProxyRule
// Size: 0x30 (Inherited: 0x00)
struct FNavLinkProxyRule {
	struct UNavArea* LinkClass; // 0x00(0x08)
	enum class ENavLinkGeneratedDirection LinkDirection; // 0x08(0x01)
	bool bCreateSimpleLink; // 0x09(0x01)
	bool bTraceCheck; // 0x0a(0x01)
	enum class ECollisionChannel TraceCollisionChannel; // 0x0b(0x01)
	bool bTraceForObjectType; // 0x0c(0x01)
	enum class ENavLinkLayersFilter LayersToLink; // 0x0d(0x01)
	enum class ENavLinkLayersRelations DifferentLayersRelations; // 0x0e(0x01)
	char pad_F[0x1]; // 0x0f(0x01)
	float MinLinkDistance; // 0x10(0x04)
	float MaxLinkDistance; // 0x14(0x04)
	struct FTraceCheckSetup TraceLeftRight; // 0x18(0x08)
	struct FTraceCheckSetup TraceUp; // 0x20(0x08)
	struct FTraceCheckSetup TraceDown; // 0x28(0x08)
};

