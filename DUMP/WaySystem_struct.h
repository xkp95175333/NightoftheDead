// ScriptStruct WaySystem.WayPathCache
// Size: 0x10 (Inherited: 0x00)
struct FWayPathCache {
	struct TArray<struct AWayPoint*> Path; // 0x00(0x10)
};

// ScriptStruct WaySystem.WayPathLink
// Size: 0x10 (Inherited: 0x00)
struct FWayPathLink {
	struct AWayPoint* Start; // 0x00(0x08)
	struct AWayPoint* End; // 0x08(0x08)
};

