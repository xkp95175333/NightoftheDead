// Class WaySystem.WayFollower
// Size: 0x28 (Inherited: 0x28)
struct UWayFollower : UInterface {

	void StopSimpleMove(); // Function WaySystem.WayFollower.StopSimpleMove // (Native|Public|BlueprintCallable) // @ game+0x782e70
	void StartSimpleMove(); // Function WaySystem.WayFollower.StartSimpleMove // (Native|Public|BlueprintCallable) // @ game+0x782e50
	bool ShouldStopWayFollow(); // Function WaySystem.WayFollower.ShouldStopWayFollow // (Native|Public|BlueprintCallable) // @ game+0x782e20
	void OnStartWayMove(); // Function WaySystem.WayFollower.OnStartWayMove // (Native|Public|BlueprintCallable) // @ game+0x782d70
	bool MoveToNextWay(); // Function WaySystem.WayFollower.MoveToNextWay // (Native|Public|BlueprintCallable) // @ game+0x782d40
	float GetWayFollowingSpeed(); // Function WaySystem.WayFollower.GetWayFollowingSpeed // (Native|Public|BlueprintCallable) // @ game+0x782d10
	struct FVector GetWayDestination(); // Function WaySystem.WayFollower.GetWayDestination // (Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x782cd0
	struct AActor* GetFinalGoalActor(); // Function WaySystem.WayFollower.GetFinalGoalActor // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x782ca0
	struct AWayPoint* GetCurrentWayPoint(); // Function WaySystem.WayFollower.GetCurrentWayPoint // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x782c70
	bool FindWay(struct FVector Goal); // Function WaySystem.WayFollower.FindWay // (Native|Public|HasDefaults|BlueprintCallable) // @ game+0x782bd0
};

// Class WaySystem.WayPoint
// Size: 0x240 (Inherited: 0x220)
struct AWayPoint : AActor {
	struct USphereComponent* SphereComponent; // 0x220(0x08)
	float LinkRange; // 0x228(0x04)
	bool bDebugDraw; // 0x22c(0x01)
	char pad_22D[0x3]; // 0x22d(0x03)
	struct TArray<struct AWayPoint*> Links; // 0x230(0x10)

	void OnUpdateConnection(struct AWayPoint* UpdatedWayPoint); // Function WaySystem.WayPoint.OnUpdateConnection // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x782d90
	void ConnectToNeighbors(); // Function WaySystem.WayPoint.ConnectToNeighbors // (Final|Native|Public|BlueprintCallable) // @ game+0x782950
	void AddHeightOffset(); // Function WaySystem.WayPoint.AddHeightOffset // (Final|Native|Public|BlueprintCallable) // @ game+0x7828b0
};

// Class WaySystem.WaySystemFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UWaySystemFunctionLibrary : UBlueprintFunctionLibrary {

	void FindPathWithLocation(struct FVector Start, struct FVector End, struct TArray<struct AWayPoint*> OutPath); // Function WaySystem.WaySystemFunctionLibrary.FindPathWithLocation // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x782a90
	void FindPath(struct AWayPoint* Start, struct AWayPoint* End, struct TArray<struct AWayPoint*> OutPath); // Function WaySystem.WaySystemFunctionLibrary.FindPath // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x782970
	void CollectWayPoints(struct UObject* WorldContextObject); // Function WaySystem.WaySystemFunctionLibrary.CollectWayPoints // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7828d0
};

// Class WaySystem.WaySystemManager
// Size: 0xb0 (Inherited: 0x28)
struct UWaySystemManager : UObject {
	struct TArray<struct AWayPoint*> AllWayPoints; // 0x28(0x10)
	struct TMap<struct FWayPathLink, struct FWayPathCache> WayPathCache; // 0x38(0x50)
	char pad_88[0x28]; // 0x88(0x28)
};

