// BlueprintGeneratedClass BP_BoxVan.BP_BoxVan_C
// Size: 0x63d (Inherited: 0x609)
struct ABP_BoxVan_C : ABP_PropVehicleBase_C {
	char pad_609[0x7]; // 0x609(0x07)
	struct UStaticMeshComponent* SM_BoxVan_Hood; // 0x610(0x08)
	struct UStaticMeshComponent* Container_Door_R; // 0x618(0x08)
	struct UStaticMeshComponent* Container_Door_L; // 0x620(0x08)
	struct UStaticMeshComponent* Container_Frame; // 0x628(0x08)
	bool HasCargo; // 0x630(0x01)
	char pad_631[0x3]; // 0x631(0x03)
	float CargoDoorOpenAmount_Left; // 0x634(0x04)
	float CargoDoorOpenAmount_Right; // 0x638(0x04)
	bool HasCargoHood; // 0x63c(0x01)

	void GetCargoDoorAngle(bool Flipped, float Amount, float Angle); // Function BP_BoxVan.BP_BoxVan_C.GetCargoDoorAngle // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	void UserConstructionScript(); // Function BP_BoxVan.BP_BoxVan_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
};

