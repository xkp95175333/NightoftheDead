// WidgetBlueprintGeneratedClass W_Newtonian_NewtonianUI.W_Newtonian_NewtonianUI_C
// Size: 0x274 (Inherited: 0x260)
struct UW_Newtonian_NewtonianUI_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UProgressBar* HealthBar; // 0x268(0x08)
	float Health; // 0x270(0x04)

	float GetHealthValue(); // Function W_Newtonian_NewtonianUI.W_Newtonian_NewtonianUI_C.GetHealthValue // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1395fe0
	void SetHealth(float HealthValue); // Function W_Newtonian_NewtonianUI.W_Newtonian_NewtonianUI_C.SetHealth // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1395fe0
	void ExecuteUbergraph_W_Newtonian_NewtonianUI(int32_t EntryPoint); // Function W_Newtonian_NewtonianUI.W_Newtonian_NewtonianUI_C.ExecuteUbergraph_W_Newtonian_NewtonianUI // (Final|UbergraphFunction) // @ game+0x1395fe0
};

