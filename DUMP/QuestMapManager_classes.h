// BlueprintGeneratedClass QuestMapManager.QuestMapManager_C
// Size: 0xd8 (Inherited: 0xb0)
struct UQuestMapManager_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	struct APlayerController* PlayerController; // 0xb8(0x08)
	struct UCompass_C* Compass; // 0xc0(0x08)
	struct ULocalMap_C* LocalMap; // 0xc8(0x08)
	struct UWorldMap_C* WorldMap; // 0xd0(0x08)

	void GetCompass(struct UImage* Compass); // Function QuestMapManager.QuestMapManager_C.GetCompass // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void GetWidgets(struct UCompass_C* Compass, struct ULocalMap_C* LocalMap, struct UWorldMap_C* WorldMap); // Function QuestMapManager.QuestMapManager_C.GetWidgets // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void CreateUI(); // Function QuestMapManager.QuestMapManager_C.CreateUI // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void SetMovementState(struct APlayerController* Controller, bool Disable?, bool GamepadEvent); // Function QuestMapManager.QuestMapManager_C.SetMovementState // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OnInitialized(); // Function QuestMapManager.QuestMapManager_C.OnInitialized // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_QuestMapManager(int32_t EntryPoint); // Function QuestMapManager.QuestMapManager_C.ExecuteUbergraph_QuestMapManager // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
};

