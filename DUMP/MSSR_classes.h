// Class MSSR.MSSRBPLibrary
// Size: 0x28 (Inherited: 0x28)
struct UMSSRBPLibrary : UBlueprintFunctionLibrary {

	bool UpdateResult(struct FSnapResult Result, struct TArray<struct FObjectAndTransform> Updated); // Function MSSR.MSSRBPLibrary.UpdateResult // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xae60b0
	void SnapComponentsAsync(struct UObject* WorldContextObject, struct TArray<struct USceneComponent*> Components, struct FSnapSettings SnapSettings, struct FSnapResult Result, bool Return, struct FLatentActionInfo LatentInfo); // Function MSSR.MSSRBPLibrary.SnapComponentsAsync // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xae5d60
	bool SnapComponents(struct TArray<struct USceneComponent*> Components, struct FSnapSettings SnapSettings, bool TestOnly, struct FSnapResult Result); // Function MSSR.MSSRBPLibrary.SnapComponents // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xae5ad0
	void SnapActorsAsync(struct UObject* WorldContextObject, struct TArray<struct AActor*> Actors, struct FSnapSettings SnapSettings, struct FSnapResult Result, bool Return, struct FLatentActionInfo LatentInfo); // Function MSSR.MSSRBPLibrary.SnapActorsAsync // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xae57d0
	bool SnapActors(struct TArray<struct AActor*> Actors, struct FSnapSettings SnapSettings, bool SearchOnly, struct FSnapResult Result); // Function MSSR.MSSRBPLibrary.SnapActors // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xae5580
	bool SnapActor(struct AActor* Actor, struct FSnapSettings SnapSettings, bool SearchOnly, struct FTransform NewTransform, struct FSnapResult Result); // Function MSSR.MSSRBPLibrary.SnapActor // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xae52e0
	void SmoothMove(struct UObject* WorldContextObject, float Duration, struct FSnapResult SnapResult, struct FLatentActionInfo LatentInfo); // Function MSSR.MSSRBPLibrary.SmoothMove // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xae50d0
	bool MSSR_IsConnected(struct AActor* Actor1, struct AActor* Actor2, struct TArray<struct FSnapLink> Path, struct FSnapSettings SnapSettings); // Function MSSR.MSSRBPLibrary.MSSR_IsConnected // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xae4ec0
	bool MSSR_GetConnectedComponents(struct USceneComponent* Component, struct TArray<struct FSnapLink> Connected, struct FSnapSettings SnapSettings); // Function MSSR.MSSRBPLibrary.MSSR_GetConnectedComponents // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xae4ce0
	bool MSSR_GetConnected(struct AActor* Actor, struct TArray<struct FSnapLink> Connected, struct FSnapSettings SnapSettings); // Function MSSR.MSSRBPLibrary.MSSR_GetConnected // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xae4b00
};

