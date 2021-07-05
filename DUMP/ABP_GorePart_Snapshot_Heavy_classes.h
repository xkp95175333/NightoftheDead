// AnimBlueprintGeneratedClass ABP_GorePart_Snapshot_Heavy.ABP_GorePart_Snapshot_Heavy_C
// Size: 0x488 (Inherited: 0x2c0)
struct UABP_GorePart_Snapshot_Heavy_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x2f8(0xa0)
	struct FAnimNode_PoseSnapshot AnimGraphNode_PoseSnapshot; // 0x398(0x90)
	struct FAnimNode_RefPose AnimGraphNode_LocalRefPose; // 0x428(0x18)
	struct FPoseSnapshot Snapshot; // 0x440(0x38)
	bool SimulatePhysics; // 0x478(0x01)
	char pad_479[0x7]; // 0x479(0x07)
	struct ACPP_Tool_Master* Parent; // 0x480(0x08)

	void AnimGraph(struct FPoseLink AnimGraph); // Function ABP_GorePart_Snapshot_Heavy.ABP_GorePart_Snapshot_Heavy_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function ABP_GorePart_Snapshot_Heavy.ABP_GorePart_Snapshot_Heavy_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_ABP_GorePart_Snapshot_Heavy(int32_t EntryPoint); // Function ABP_GorePart_Snapshot_Heavy.ABP_GorePart_Snapshot_Heavy_C.ExecuteUbergraph_ABP_GorePart_Snapshot_Heavy // (Final|UbergraphFunction) // @ game+0x1395fe0
};

