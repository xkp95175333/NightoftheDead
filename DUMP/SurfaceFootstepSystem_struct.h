// ScriptStruct SurfaceFootstepSystem.FootstepData
// Size: 0x38 (Inherited: 0x00)
struct FFootstepData {
	struct FName EmitterId; // 0x00(0x08)
	struct TArray<struct USoundBase*> Sounds; // 0x08(0x10)
	struct TArray<struct UParticleSystem*> Particles; // 0x18(0x10)
	struct TArray<struct UNiagaraSystem*> NiagaraParticles; // 0x28(0x10)
};

