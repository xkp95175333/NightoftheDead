// BlueprintGeneratedClass BP_AquaticInteraction.BP_AquaticInteraction_C
// Size: 0x22d (Inherited: 0x200)
struct UBP_AquaticInteraction_C : USceneComponent {
	struct FBS_AquaticInteractionData data; // 0x200(0x28)
	float MaxSurfaceDistance; // 0x228(0x04)
	bool Enabled; // 0x22c(0x01)

	void GetTransform(struct ABP_AquaticSurface_C* Surface, struct FVector Location, struct FRotator Rotation, float Fade); // Function BP_AquaticInteraction.BP_AquaticInteraction_C.GetTransform // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
};

