// Class ProjectVersionFromGit.ProjectVersionFromGitBPLibrary
// Size: 0x28 (Inherited: 0x28)
struct UProjectVersionFromGitBPLibrary : UBlueprintFunctionLibrary {

	int32_t GetProjectVersionPatch(); // Function ProjectVersionFromGit.ProjectVersionFromGitBPLibrary.GetProjectVersionPatch // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xd0c6a0
	int32_t GetProjectVersionMinor(); // Function ProjectVersionFromGit.ProjectVersionFromGitBPLibrary.GetProjectVersionMinor // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xd0c670
	int32_t GetProjectVersionMajor(); // Function ProjectVersionFromGit.ProjectVersionFromGitBPLibrary.GetProjectVersionMajor // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xd0c640
	void GetProjectVersionInfo(struct FDelegate OnCompleted); // Function ProjectVersionFromGit.ProjectVersionFromGitBPLibrary.GetProjectVersionInfo // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xd0c5b0
	struct FText GetProjectVersionFormatAll(); // Function ProjectVersionFromGit.ProjectVersionFromGitBPLibrary.GetProjectVersionFormatAll // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xd0c520
	struct FText GetProjectVersionDateTimeBuild(); // Function ProjectVersionFromGit.ProjectVersionFromGitBPLibrary.GetProjectVersionDateTimeBuild // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xd0c490
	struct FText GetProjectVersionCommitHash(); // Function ProjectVersionFromGit.ProjectVersionFromGitBPLibrary.GetProjectVersionCommitHash // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xd0c400
	struct FText GetProjectVersionBranchName(); // Function ProjectVersionFromGit.ProjectVersionFromGitBPLibrary.GetProjectVersionBranchName // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xd0c370
	struct FText GetProjectVersion(); // Function ProjectVersionFromGit.ProjectVersionFromGitBPLibrary.GetProjectVersion // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xd0c2e0
};

