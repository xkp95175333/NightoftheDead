// Class SmartNavControl.NavGeneratorHelper
// Size: 0x28 (Inherited: 0x28)
struct UNavGeneratorHelper : UInterface {

	bool TestPolysForNavLink(struct FNavPolygonManualTest StartPolygon, struct FNavPolygonManualTest EndPolygon, struct UNavArea* OutNavAreaClass, bool bOutGenerateSimpleLink, enum class ENavLinkDirection OutLinkDirection); // Function SmartNavControl.NavGeneratorHelper.TestPolysForNavLink // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x887560
	bool TestPolyForNavModifier(struct FNavPolygonManualTest TestedPolygon, float PolygonHeight, struct UNavArea* OutNavAreaClass); // Function SmartNavControl.NavGeneratorHelper.TestPolyForNavModifier // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x887410
};

// Class SmartNavControl.NavGeneratorSettings
// Size: 0x268 (Inherited: 0x220)
struct ANavGeneratorSettings : AActor {
	struct ATriggerVolume* BoundsVolume; // 0x220(0x08)
	float TestAgentHalfHeight; // 0x228(0x04)
	float TestAgentRadius; // 0x22c(0x04)
	struct ANavLinkProxy* NavLinkProxyClass; // 0x230(0x08)
	bool bEnableManualNavLinkTest; // 0x238(0x01)
	char pad_239[0x7]; // 0x239(0x07)
	struct TArray<struct FNavLinkProxyRule> NavLinkRules; // 0x240(0x10)
	bool bEnableManualNavModifierTest; // 0x250(0x01)
	char pad_251[0x7]; // 0x251(0x07)
	struct TArray<struct FNavModifierRule> ModifierRules; // 0x258(0x10)
};

// Class SmartNavControl.SmartAIController
// Size: 0x330 (Inherited: 0x328)
struct ASmartAIController : AAIController {
	struct USmartPathFollowingComponent* SmartPathFollower; // 0x328(0x08)

	void FinishNavigationEvent(char NavigationAction); // Function SmartNavControl.SmartAIController.FinishNavigationEvent // (Native|Event|Public|BlueprintEvent) // @ game+0x887300
	void ExecuteNavigationEvent(char NavigationAction, struct FVector TargetPoint, struct AActor* NavLinkObject); // Function SmartNavControl.SmartAIController.ExecuteNavigationEvent // (Native|Event|Public|HasDefaults|BlueprintEvent) // @ game+0x8871d0
};

// Class SmartNavControl.SmartNavArea
// Size: 0x58 (Inherited: 0x48)
struct USmartNavArea : UNavArea {
	struct UEnum* NavActionsEnum; // 0x48(0x08)
	char NavAction; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// Class SmartNavControl.SmartNavArea_Crouch
// Size: 0x48 (Inherited: 0x48)
struct USmartNavArea_Crouch : UNavArea {
};

// Class SmartNavControl.SmartNavArea_Jump
// Size: 0x48 (Inherited: 0x48)
struct USmartNavArea_Jump : UNavArea {
};

// Class SmartNavControl.SmartPathFollowingComponent
// Size: 0x290 (Inherited: 0x250)
struct USmartPathFollowingComponent : UPathFollowingComponent {
	struct AActor* LastNavLinkActor; // 0x250(0x08)
	bool bApplyPhysicalAceleration; // 0x258(0x01)
	char pad_259[0x3]; // 0x259(0x03)
	float PhysicalAcceleration; // 0x25c(0x04)
	struct UEnum* CustomNavActionsEnum; // 0x260(0x08)
	struct FMulticastInlineDelegate OnExecutePathAction; // 0x268(0x10)
	struct FMulticastInlineDelegate OnFinishPathAction; // 0x278(0x10)
	bool bDrawDebugPath; // 0x288(0x01)
	bool bWriteToLog; // 0x289(0x01)
	char pad_28A[0x6]; // 0x28a(0x06)

	bool IsExecutingNavAction(); // Function SmartNavControl.SmartPathFollowingComponent.IsExecutingNavAction // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8873e0
	struct ANavLinkProxy* GetActiveNavLinkProxy(); // Function SmartNavControl.SmartPathFollowingComponent.GetActiveNavLinkProxy // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8873b0
	char GetActiveNavAction(); // Function SmartNavControl.SmartPathFollowingComponent.GetActiveNavAction // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x887380
};

