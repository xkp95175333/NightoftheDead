// BlueprintGeneratedClass CH_BloodMaskCharacter_Zombie.CH_BloodMaskCharacter_Zombie_C
// Size: 0x1079 (Inherited: 0x1030)
struct ACH_BloodMaskCharacter_Zombie_C : ALFZombie {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1030(0x08)
	struct USceneCaptureComponent2D* SceneCaptureComponent2D; // 0x1038(0x08)
	struct TArray<struct FTransform> RefPoseLocalBoneTransforms; // 0x1040(0x10)
	int32_t BloodMaskSize; // 0x1050(0x04)
	char pad_1054[0x4]; // 0x1054(0x04)
	struct UTextureRenderTarget2D* BloodMask_NotDilated; // 0x1058(0x08)
	struct UTextureRenderTarget2D* BloodMask; // 0x1060(0x08)
	struct UMaterialInstanceDynamic* BloodRenderMaterial; // 0x1068(0x08)
	struct UMaterialInstanceDynamic* DilateMaterial; // 0x1070(0x08)
	bool DilateBloodMask; // 0x1078(0x01)

	void Save Ref Pose(); // Function CH_BloodMaskCharacter_Zombie.CH_BloodMaskCharacter_Zombie_C.Save Ref Pose // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void TransformLocationByRefBoneTransform(struct FName BoneName, struct FVector WorldLocation, struct FVector MeshLocalSpaceLocation); // Function CH_BloodMaskCharacter_Zombie.CH_BloodMaskCharacter_Zombie_C.TransformLocationByRefBoneTransform // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	void GetRefPoseBoneTransform(struct USkeletalMeshComponent* SkeletalMesh, struct FName BoneName, struct FTransform MeshLocalSpaceTransform); // Function CH_BloodMaskCharacter_Zombie.CH_BloodMaskCharacter_Zombie_C.GetRefPoseBoneTransform // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ReactToHit(struct FName HitBone, struct FVector HitLocation, struct FVector Impulse, float Damage); // Function CH_BloodMaskCharacter_Zombie.CH_BloodMaskCharacter_Zombie_C.ReactToHit // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void ReceiveBeginPlay(); // Function CH_BloodMaskCharacter_Zombie.CH_BloodMaskCharacter_Zombie_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1395fe0
	void TakeHit(struct FName BoneName, struct FVector WorldSpaceLocation); // Function CH_BloodMaskCharacter_Zombie.CH_BloodMaskCharacter_Zombie_C.TakeHit // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_CH_BloodMaskCharacter_Zombie(int32_t EntryPoint); // Function CH_BloodMaskCharacter_Zombie.CH_BloodMaskCharacter_Zombie_C.ExecuteUbergraph_CH_BloodMaskCharacter_Zombie // (Final|UbergraphFunction) // @ game+0x1395fe0
};

