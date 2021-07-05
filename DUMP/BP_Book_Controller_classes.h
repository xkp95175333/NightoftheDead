// BlueprintGeneratedClass BP_Book_Controller.BP_Book_Controller_C
// Size: 0x432 (Inherited: 0x220)
struct ABP_Book_Controller_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UWidgetInteractionComponent* WidgetInteraction; // 0x228(0x08)
	struct USceneComponent* OffsetLocation; // 0x230(0x08)
	struct USceneComponent* OffsetStartLocation; // 0x238(0x08)
	struct USceneComponent* ScrollAndZoomOffset; // 0x240(0x08)
	struct USceneComponent* CloseUpCamMount; // 0x248(0x08)
	struct UBillboardComponent* Billboard; // 0x250(0x08)
	struct USceneComponent* OriginLocation; // 0x258(0x08)
	struct USceneComponent* DestinationLocation; // 0x260(0x08)
	float MoveToCamera_sine0_1_0407FA334DC0B6BAEF014BAEAD41C636; // 0x268(0x04)
	enum class ETimelineDirection MoveToCamera__Direction_0407FA334DC0B6BAEF014BAEAD41C636; // 0x26c(0x01)
	char pad_26D[0x3]; // 0x26d(0x03)
	struct UTimelineComponent* MoveToCamera; // 0x270(0x08)
	float OffsetPerPage_0_1_7E7F6E8D46DB53323DDDDB920DF0A18B; // 0x278(0x04)
	enum class ETimelineDirection OffsetPerPage__Direction_7E7F6E8D46DB53323DDDDB920DF0A18B; // 0x27c(0x01)
	char pad_27D[0x3]; // 0x27d(0x03)
	struct UTimelineComponent* OffsetPerPage; // 0x280(0x08)
	struct FVector Trigger Volume Dimensions; // 0x288(0x0c)
	char pad_294[0x4]; // 0x294(0x04)
	struct ABP_AnimatedBook_C* BookToControl; // 0x298(0x08)
	struct TArray<struct ABP_AnimatedBook_C*> BooksToControl; // 0x2a0(0x10)
	bool RequirePlayerInsideTriggerVolume; // 0x2b0(0x01)
	bool BringBookToPlayer; // 0x2b1(0x01)
	char pad_2B2[0x6]; // 0x2b2(0x06)
	struct UCameraComponent* PlayerCamera; // 0x2b8(0x08)
	struct ACameraActor* CloseUpCamera; // 0x2c0(0x08)
	float TransitionTime; // 0x2c8(0x04)
	int32_t PageToOpenTo; // 0x2cc(0x04)
	float BookOriginalOpenAmount; // 0x2d0(0x04)
	float OpenBookHowWide; // 0x2d4(0x04)
	bool waiting; // 0x2d8(0x01)
	char pad_2D9[0x3]; // 0x2d9(0x03)
	struct FVector DistanceFromCamera; // 0x2dc(0x0c)
	struct FVector DistanceFromCameraVR; // 0x2e8(0x0c)
	struct FRotator Book Viewing Angle; // 0x2f4(0x0c)
	struct UW_TutorialHints_C* TutorialWidget; // 0x300(0x08)
	bool ResetAnimsOnBookReturn; // 0x308(0x01)
	char pad_309[0x7]; // 0x309(0x07)
	struct FTransform LocationStart; // 0x310(0x30)
	float CloseUpCamMovementMultiplier; // 0x340(0x04)
	struct FVector OffsetTotalPos; // 0x344(0x0c)
	bool MoveEnded; // 0x350(0x01)
	bool DoNothing; // 0x351(0x01)
	char pad_352[0x2]; // 0x352(0x02)
	float PageTurnDuration; // 0x354(0x04)
	bool Show Controls UI; // 0x358(0x01)
	char pad_359[0x7]; // 0x359(0x07)
	struct TMap<int32_t, struct FTransform> CameraOffsetsByPageSpread; // 0x360(0x50)
	float TransitionTimeForOffsets; // 0x3b0(0x04)
	int32_t CurrentBook; // 0x3b4(0x04)
	struct FVector OffsetZoomPos; // 0x3b8(0x0c)
	float ZoomCurrent; // 0x3c4(0x04)
	bool EnableZoomAndScroll; // 0x3c8(0x01)
	bool LimitScrollToZoom; // 0x3c9(0x01)
	bool InvertScrolling; // 0x3ca(0x01)
	char pad_3CB[0x1]; // 0x3cb(0x01)
	float ZoomMax; // 0x3cc(0x04)
	struct FMargin ScrollMax; // 0x3d0(0x10)
	struct FTransform ScrollOffset; // 0x3e0(0x30)
	bool MoveBookActive; // 0x410(0x01)
	bool MoveViewActive; // 0x411(0x01)
	bool EnableMouseCursor; // 0x412(0x01)
	char pad_413[0x1]; // 0x413(0x01)
	float ZoomAmount; // 0x414(0x04)
	bool TriggerActivated; // 0x418(0x01)
	char pad_419[0x7]; // 0x419(0x07)
	struct TArray<struct FS_Ephemera> DebugTestEphemera; // 0x420(0x10)
	bool IsOpened; // 0x430(0x01)
	bool IsProgress; // 0x431(0x01)

	void HideBook(); // Function BP_Book_Controller.BP_Book_Controller_C.HideBook // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ShowBook(); // Function BP_Book_Controller.BP_Book_Controller_C.ShowBook // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void UserConstructionScript(); // Function BP_Book_Controller.BP_Book_Controller_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OffsetPerPage__FinishedFunc(); // Function BP_Book_Controller.BP_Book_Controller_C.OffsetPerPage__FinishedFunc // (BlueprintEvent) // @ game+0x1395fe0
	void OffsetPerPage__UpdateFunc(); // Function BP_Book_Controller.BP_Book_Controller_C.OffsetPerPage__UpdateFunc // (BlueprintEvent) // @ game+0x1395fe0
	void MoveToCamera__FinishedFunc(); // Function BP_Book_Controller.BP_Book_Controller_C.MoveToCamera__FinishedFunc // (BlueprintEvent) // @ game+0x1395fe0
	void MoveToCamera__UpdateFunc(); // Function BP_Book_Controller.BP_Book_Controller_C.MoveToCamera__UpdateFunc // (BlueprintEvent) // @ game+0x1395fe0
	void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2(struct FKey Key); // Function BP_Book_Controller.BP_Book_Controller_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2 // (BlueprintEvent) // @ game+0x1395fe0
	void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_1(struct FKey Key); // Function BP_Book_Controller.BP_Book_Controller_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_1 // (BlueprintEvent) // @ game+0x1395fe0
	void MoveBookToPlayer(bool ReturnBook); // Function BP_Book_Controller.BP_Book_Controller_C.MoveBookToPlayer // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ReceiveTick(float DeltaSeconds); // Function BP_Book_Controller.BP_Book_Controller_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1395fe0
	void ReceiveBeginPlay(); // Function BP_Book_Controller.BP_Book_Controller_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1395fe0
	void CameraOffsetPerPage(bool halt); // Function BP_Book_Controller.BP_Book_Controller_C.CameraOffsetPerPage // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void MoveViewToTarget(bool Return); // Function BP_Book_Controller.BP_Book_Controller_C.MoveViewToTarget // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ManuallyTriggerController(int32_t PageToOpen); // Function BP_Book_Controller.BP_Book_Controller_C.ManuallyTriggerController // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void OpenBook(); // Function BP_Book_Controller.BP_Book_Controller_C.OpenBook // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void CloseBook(); // Function BP_Book_Controller.BP_Book_Controller_C.CloseBook // (BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_BP_Book_Controller(int32_t EntryPoint); // Function BP_Book_Controller.BP_Book_Controller_C.ExecuteUbergraph_BP_Book_Controller // (Final|UbergraphFunction|HasDefaults) // @ game+0x1395fe0
};

