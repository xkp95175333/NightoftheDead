// BlueprintGeneratedClass BP_Item_DropLootBox_Player.BP_Item_DropLootBox_Player_C
// Size: 0x530 (Inherited: 0x510)
struct ABP_Item_DropLootBox_Player_C : AMarkerStaticItemEntity {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x510(0x08)
	struct UBP_AquaticBuoyancy_C* BP_AquaticBuoyancy; // 0x518(0x08)
	struct UC_Manager-WorldMap_C* WorldMapManager; // 0x520(0x08)
	struct APawn* Pawn; // 0x528(0x08)

	void ReceiveBeginPlay(); // Function BP_Item_DropLootBox_Player.BP_Item_DropLootBox_Player_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_BP_Item_DropLootBox_Player(int32_t EntryPoint); // Function BP_Item_DropLootBox_Player.BP_Item_DropLootBox_Player_C.ExecuteUbergraph_BP_Item_DropLootBox_Player // (Final|UbergraphFunction) // @ game+0x1395fe0
};

