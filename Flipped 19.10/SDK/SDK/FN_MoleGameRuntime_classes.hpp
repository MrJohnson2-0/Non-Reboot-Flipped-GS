#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB0 (0x160 - 0xB0)
// Class MoleGameRuntime.FortCinematicComponent
class UFortCinematicComponent : public UControllerComponent
{
public:
	TMap<TWeakObjectPtr<class AFortPawn>, bool>  PawnVisibilityMap;                                 // 0xB0(0x50)(Transient, Protected, NativeAccessSpecifierProtected)
	TMap<TWeakObjectPtr<class AFortPawn>, bool>  LocalPawnVisibilityMap;                            // 0x100(0x50)(Transient, Protected, NativeAccessSpecifierProtected)
	TArray<struct FFortCinematicState>           StateStack;                                        // 0x150(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortCinematicComponent* GetDefaultObj();

	void RemoveCinematicState(struct FGameplayTag& StateId);
	void PushCinematicState(struct FFortCinematicState& InState);
	bool IsCinematicStateActive(struct FGameplayTag& StateTag);
	void FadeToBlackscreen(float InFadeTime, bool bInHold);
	void FadeFromBlackscreen(float InFadeTime);
	void CancelBlackscreen();
};

// 0x28 (0x128 - 0x100)
// Class MoleGameRuntime.MoleAFKComponent
class UMoleAFKComponent : public UFortAFKComponent
{
public:
	float                                        LongestAFKPeriod;                                  // 0x100(0x4)(Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3959[0x24];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoleAFKComponent* GetDefaultObj();

	void OnPlayerLeftPOI(class AActor* OverlapingVolume, class AActor* EnteringActor);
	void OnPlayerEnteredPOI(class AActor* OverlapingVolume, class AActor* EnteringActor);
	bool IsPlayerAFK(class APlayerState* Player);
	bool IsControllerAFK(class AFortPlayerController* FortPC);
	bool HasEverBeenAFKForTooLong(class AFortPlayerController* FortPC);
	bool HasEverBeenAFK(class AFortPlayerController* FortPC);
};

// 0x1E0 (0x290 - 0xB0)
// Class MoleGameRuntime.MoleAnalyticsComponent
class UMoleAnalyticsComponent : public UPlayspaceComponent
{
public:
	uint8                                        Pad_395E[0x1E0];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoleAnalyticsComponent* GetDefaultObj();

};

// 0x38 (0xE8 - 0xB0)
// Class MoleGameRuntime.MoleAssetManagerComponent
class UMoleAssetManagerComponent : public UGameFrameworkComponent
{
public:
	uint8                                        Pad_3962[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FMoleAssetLoadData>            AssetLoadInfo;                                     // 0xC8(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class FName>                          BundlesToLoad;                                     // 0xD8(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UMoleAssetManagerComponent* GetDefaultObj();

};

// 0x0 (0xB0 - 0xB0)
// Class MoleGameRuntime.MoleAudioManagerComponent
class UMoleAudioManagerComponent : public UPlayspaceComponent
{
public:

	static class UClass* StaticClass();
	static class UMoleAudioManagerComponent* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MoleGameRuntime.MoleCheatManager
class UMoleCheatManager : public UChildCheatManager
{
public:

	static class UClass* StaticClass();
	static class UMoleCheatManager* GetDefaultObj();

	void SpawnMoleBots(int32 NumBotsToSpawn);
	void SkipLobbyBackfillLogic();
	void MoleShowImpostorBias();
	void MoleRequestSaboteur();
	void MoleRecoverFromAFK();
	void MoleInterruptSelfTasks();
	void MoleInterruptAllTasks();
	void MoleEnableSelfTasks();
	void MoleEnableAllTasks();
	void MoleDisableSelfTasks();
	void MoleDisableAllTasks();
	void MoleClearRequestSaboteur();
	void MakeTargetMoleGhost();
	void MakeSelfMoleGhost();
	void GrantTask(const class FString& TaskAssetName);
	void GoToStateVoting();
	void GoToStateLobby();
	void GoToStateGameplay();
	void GoToStateGameover(struct FGameplayTag& InTag);
};

// 0x288 (0x3E8 - 0x160)
// Class MoleGameRuntime.MoleCinematicComponent
class UMoleCinematicComponent : public UFortCinematicComponent
{
public:
	uint8                                        Pad_3988[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bRoleAssignedTeleport;                             // 0x168(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3989[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayMessageReceiverHandle        RoleAssignTeleportHandle;                          // 0x170(0x20)(Transient, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FFortCinematicState                   RoleAssignedCineState;                             // 0x190(0x48)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FMoleEmergencyMeetingData             MeetingPayload;                                    // 0x1D8(0x20)(Transient, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FFortCinematicState                   MeetingCalledCineState;                            // 0x1F8(0x48)(Edit, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_398B[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bVoteDiscussionTeleport;                           // 0x248(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_398C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayMessageReceiverHandle        VoteDiscussTeleportHandle;                         // 0x250(0x20)(Transient, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FFortCinematicState                   VoteDiscussCineState;                              // 0x270(0x48)(Edit, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_398E[0x20];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortCinematicState                   VoteResolvedCineState;                             // 0x2D8(0x48)(Edit, Protected, NativeAccessSpecifierProtected)
	bool                                         bVotingTeleport;                                   // 0x320(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_398F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayMessageReceiverHandle        VotingTeleportHandle;                              // 0x328(0x20)(Transient, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_3990[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortCinematicState                   VoteSkippedCineState;                              // 0x350(0x48)(Edit, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_3991[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortCinematicState                   VoteEjectionCineState;                             // 0x3A0(0x48)(Edit, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UMoleCinematicComponent* GetDefaultObj();

};

// 0x40 (0xAE8 - 0xAA8)
// Class MoleGameRuntime.MoleEliminationAbility
class UMoleEliminationAbility : public UFortGameplayAbility
{
public:
	struct FGameplayTagContainer                 CooldownTagsToListenTo;                            // 0xAA8(0x20)(Edit, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 CombinedCooldownTags;                              // 0xAC8(0x20)(Edit, EditConst, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UMoleEliminationAbility* GetDefaultObj();

	bool ValidatePotentialEliminationTarget(class AFortPlayerPawn* PotentialTargetPawn);
};

// 0x8 (0x8C8 - 0x8C0)
// Class MoleGameRuntime.MoleEliminationMarker
class AMoleEliminationMarker : public ABuildingGameplayActor
{
public:
	class APlayerState*                          RepresentedPlayer;                                 // 0x8C0(0x8)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class AMoleEliminationMarker* GetDefaultObj();

	void OnRepresentedPlayerSet();
	void OnRep_RepresentedPlayer();
};

// 0xC8 (0x390 - 0x2C8)
// Class MoleGameRuntime.MoleGameBaseMutator
class AMoleGameBaseMutator : public AFortAthenaMutator
{
public:
	struct FGameplayTagContainer                 BlockedEmoteTags;                                  // 0x2C8(0x20)(Edit, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 BlockedEmoteTagsForGhosts;                         // 0x2E8(0x20)(Edit, Protected, NativeAccessSpecifierProtected)
	class FText                                  LeaveTextOverride;                                 // 0x308(0x18)(Edit, Protected, NativeAccessSpecifierProtected)
	class FText                                  LeavePartyTextOverride;                            // 0x320(0x18)(Edit, Protected, NativeAccessSpecifierProtected)
	class FText                                  GhostLeaveTextOverride;                            // 0x338(0x18)(Edit, Protected, NativeAccessSpecifierProtected)
	class FText                                  GhostLeavePartyTextOverride;                       // 0x350(0x18)(Edit, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        IsSlideEnabled;                                    // 0x368(0x28)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class AMoleGameBaseMutator* GetDefaultObj();

};

// 0x18 (0xAC0 - 0xAA8)
// Class MoleGameRuntime.MoleGameplayAbility_Voting
class UMoleGameplayAbility_Voting : public UFortGameplayAbility
{
public:
	class UTargetingPreset*                      VotingTargetingPreset;                             // 0xAA8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTargetingRequestHandle               AsyncTargetingHandle;                              // 0xAB0(0x4)(Transient, NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_39A1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                BestVotingTarget;                                  // 0xAB8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMoleGameplayAbility_Voting* GetDefaultObj();

	void OnVotingTargetChanged(class AActor* Target);
};

// 0x38 (0xF8 - 0xC0)
// Class MoleGameRuntime.MoleGamePlayerSpawningComponent
class UMoleGamePlayerSpawningComponent : public UPlayspaceComponent_PlayerSpawning
{
public:
	uint8                                        Pad_39A2[0x38];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoleGamePlayerSpawningComponent* GetDefaultObj();

};

// 0x28 (0x568 - 0x540)
// Class MoleGameRuntime.MoleGamePlayspace
class AMoleGamePlayspace : public AFortPlayspace
{
public:
	TSubclassOf<class UGameplayStateMachine>     MoleStateMachineClass;                             // 0x540(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_39A6[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortInventoryManager*                 InventoryManager;                                  // 0x558(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGameplayStateMachineManager*          StateMachineManager;                               // 0x560(0x8)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class AMoleGamePlayspace* GetDefaultObj();

};

// 0x10 (0x88 - 0x78)
// Class MoleGameRuntime.MoleGameplayState_Tasks
class UMoleGameplayState_Tasks : public UGameplayState
{
public:
	float                                        PrepareStateDelayTime;                             // 0x78(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_39A8[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoleGameplayState_Tasks* GetDefaultObj();

};

// 0x8 (0xB8 - 0xB0)
// Class MoleGameRuntime.MoleGhostControllerComponent
class UMoleGhostControllerComponent : public UFortControllerComponent
{
public:
	class UInputComponent*                       GhostInputComp;                                    // 0xB0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UMoleGhostControllerComponent* GetDefaultObj();

	void OnPlayerBecameGhost();
	void CLientSetupGhost();
	void ClientRevertGhost();
};

// 0x18 (0x578 - 0x560)
// Class MoleGameRuntime.MoleGhostMannequin
class AMoleGhostMannequin : public AFortPlayerMannequin
{
public:
	class UMaterialInterface*                    GhostMaterial;                                     // 0x560(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class APlayerState*                          RepresentedPlayerState;                            // 0x568(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_39B5[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AMoleGhostMannequin* GetDefaultObj();

	void OnRepresentedPlayerSet(class APlayerState* PlayerState);
	class APlayerState* GetRepresentedPlayer();
};

// 0x0 (0x28 - 0x28)
// Class MoleGameRuntime.MoleGlobals
class UMoleGlobals : public UObject
{
public:

	static class UClass* StaticClass();
	static class UMoleGlobals* GetDefaultObj();

};

// 0x20 (0xD0 - 0xB0)
// Class MoleGameRuntime.MoleImpostorBiasComponent
class UMoleImpostorBiasComponent : public UControllerComponent
{
public:
	enum class EMoleRole                         RolePreference;                                    // 0xB0(0x1)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_39C0[0x1F];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoleImpostorBiasComponent* GetDefaultObj();

	void SetRolePreference(class AFortPlayerController* FortPC, enum class EMoleRole InRolePreference);
	void OnRep_RolePreference();
	bool IsImpostorBiasEnabled();
};

// 0x0 (0x40 - 0x40)
// Class MoleGameRuntime.MoleInitialPlayerCountModMagnitudeCalculation
class UMoleInitialPlayerCountModMagnitudeCalculation : public UFortGameplayModMagnitudeCalculation
{
public:

	static class UClass* StaticClass();
	static class UMoleInitialPlayerCountModMagnitudeCalculation* GetDefaultObj();

};

// 0x40 (0x70 - 0x30)
// Class MoleGameRuntime.MoleLevelDataAsset
class UMoleLevelDataAsset : public UPrimaryDataAsset
{
public:
	TArray<TSoftObjectPtr<class UWorld>>         Levels;                                            // 0x30(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 LevelDescriptionTags;                              // 0x40(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FMoleLevelTaskRequest>         TaskRequests;                                      // 0x60(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMoleLevelDataAsset* GetDefaultObj();

};

// 0x20 (0x50 - 0x30)
// Class MoleGameRuntime.MoleLevelBalanceDataAsset
class UMoleLevelBalanceDataAsset : public UPrimaryDataAsset
{
public:
	TArray<TSoftObjectPtr<class UDataTable>>     DataTables;                                        // 0x30(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UCurveTable>>    CurveTables;                                       // 0x40(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMoleLevelBalanceDataAsset* GetDefaultObj();

};

// 0x48 (0xF8 - 0xB0)
// Class MoleGameRuntime.MoleLevelManagerComponent
class UMoleLevelManagerComponent : public UPlayspaceComponent
{
public:
	struct FGameplayTagContainer                 DesiredMapDescription;                             // 0xB0(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class UMoleLevelDataAsset*                   CurrentLevelData;                                  // 0xD0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_39C9[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoleLevelManagerComponent* GetDefaultObj();

};

// 0x40 (0xF0 - 0xB0)
// Class MoleGameRuntime.MoleLobbyStateMachine
class UMoleLobbyStateMachine : public UGameplayStateMachine
{
public:
	uint8                                        Pad_39CA[0x40];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoleLobbyStateMachine* GetDefaultObj();

};

// 0x10 (0x88 - 0x78)
// Class MoleGameRuntime.MoleLobbyState_Countdown
class UMoleLobbyState_Countdown : public UGameplayState
{
public:
	float                                        LobbyTransitionServerTime;                         // 0x78(0x4)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_39CB[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoleLobbyState_Countdown* GetDefaultObj();

	void OnRep_LobbyTransitionServerTime();
};

// 0x8 (0x80 - 0x78)
// Class MoleGameRuntime.MoleLobbyState_Loading
class UMoleLobbyState_Loading : public UGameplayState
{
public:
	uint8                                        Pad_39CE[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoleLobbyState_Loading* GetDefaultObj();

};

// 0x8 (0x80 - 0x78)
// Class MoleGameRuntime.MoleLobbyState_Login
class UMoleLobbyState_Login : public UGameplayState
{
public:
	uint8                                        Pad_39D3[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoleLobbyState_Login* GetDefaultObj();

};

// 0x8 (0x80 - 0x78)
// Class MoleGameRuntime.MoleLobbyState_Matchmake
class UMoleLobbyState_Matchmake : public UGameplayState
{
public:
	uint8                                        Pad_39D7[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoleLobbyState_Matchmake* GetDefaultObj();

	void OnAcquiringMorePlayersCompleted();
};

// 0x0 (0x78 - 0x78)
// Class MoleGameRuntime.MoleLobbyState_Waiting
class UMoleLobbyState_Waiting : public UGameplayState
{
public:

	static class UClass* StaticClass();
	static class UMoleLobbyState_Waiting* GetDefaultObj();

};

// 0x58 (0x108 - 0xB0)
// Class MoleGameRuntime.MolePawnComponent
class UMolePawnComponent : public UPawnComponent
{
public:
	class FName                                  MaterialOpacityParameter;                          // 0xB0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                    GhostMaterial;                                     // 0xB8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortFootstepAudioBank*                PlayerFootstepBankBase;                            // 0xC0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        PlayerFootstepBankPriority;                        // 0xC8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_39DE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortCharacterCustomizationData*       BaseCustomizationData;                             // 0xD0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortCharacterCustomizationData*       GhostCustomizationData;                            // 0xD8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_39E0[0x14];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bIsGhost;                                          // 0xF4(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_39E1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  GhostCollisionProfile;                             // 0xF8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_39E2[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMolePawnComponent* GetDefaultObj();

	void OnRep_bIsGhost();
	void OnBecameHuman();
	void OnBecameGhost();
	void HandlePawnCustomizationComplete(class AFortPlayerPawn* Pawn);
};

// 0x0 (0xB0 - 0xB0)
// Class MoleGameRuntime.MolePerformanceComponent
class UMolePerformanceComponent : public UPlayspaceComponent
{
public:

	static class UClass* StaticClass();
	static class UMolePerformanceComponent* GetDefaultObj();

};

// 0x50 (0x100 - 0xB0)
// Class MoleGameRuntime.MolePlayerControllerComponent
class UMolePlayerControllerComponent : public UControllerComponent
{
public:
	uint8                                        Pad_39E4[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInputComponent*                       MoleCoreInputComp;                                 // 0xB8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortPlayerInputSettings*              MoleKBMInputSettings;                              // 0xC0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortPlayerInputSettings*              MoleControllerInputSettings;                       // 0xC8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDataTable*                            BindingsDataTable;                                 // 0xD0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_39E5[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMolePlayerControllerComponent* GetDefaultObj();

};

// 0x8 (0x298 - 0x290)
// Class MoleGameRuntime.MolePlayerStart
class AMolePlayerStart : public AFortPlayerStart
{
public:
	int32                                        CorrespondingPlayerNumber;                         // 0x290(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_39E6[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AMolePlayerStart* GetDefaultObj();

};

// 0xD8 (0x188 - 0xB0)
// Class MoleGameRuntime.MolePlayerStateComponent
class UMolePlayerStateComponent : public UPlayerStateComponent
{
public:
	uint8                                        Pad_3A0C[0x30];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnPlayerBecameGhost;                               // 0xE0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	int32                                        PlayerNumber;                                      // 0xF0(0x4)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FMoleDeathInformation                 DeathInfo;                                         // 0xF4(0x2)(Net, Transient, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_3A0F[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UGameplayEffect>           GhostGameplayEffect;                               // 0xF8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class AMoleEliminationMarker>    EliminationMarkerClass;                            // 0x100(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3A10[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EMoleRole                         Role;                                              // 0x110(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3A11[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class APlayerState*>                  EnemyPlayerStates;                                 // 0x118(0x10)(Net, ZeroConstructor, Transient, RepNotify, Protected, NativeAccessSpecifierProtected)
	bool                                         bIsRevealedEnemy;                                  // 0x128(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bHasLeftGame;                                      // 0x129(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3A13[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerState*                          KillerPlayerState;                                 // 0x130(0x8)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 GhostBlockedAbilityTags;                           // 0x138(0x20)(Edit, Protected, NativeAccessSpecifierProtected)
	struct FMolePlayerTeleportedReplicatedData   PlayerTeleportedData;                              // 0x158(0xC)(Net, Transient, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_3A15[0x24];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMolePlayerStateComponent* GetDefaultObj();

	void SetMoleKiller(class APlayerState* Victim, class APlayerState* Killer);
	void OnRep_Role();
	void OnRep_PlayerTeleportedData();
	void OnRep_PlayerNumber();
	void OnRep_KillerPlayerState();
	void OnRep_EnemyPlayerStates();
	void OnRep_DeathInfo();
	void OnRep_bIsRevealedEnemy();
	void OnRep_bHasLeftGame();
	bool IsMolePlayerDisconnected(class APlayerState* PlayerState);
	bool IsMoleGhost(class APlayerState* PlayerState);
	bool IsMoleEnemyFor(class APlayerState* PlayerState, class APlayerState* TargetPlayerState);
	bool IsMoleEnemy(class AActor* InActor);
	bool IsMoleEliminated(class APlayerState* PlayerState);
	int32 GetPlayerNumber();
	enum class EMoleRole GetMoleRole(class AController* User);
	class UFortItemDefinition* GetMolePlayerItemDefinition(class APlayerState* PlayerState);
	void GetMolePlayerCosmeticData(class APlayerState* PlayerState, struct FMolePlayerCosmeticData* OutPlayerCosmeticData);
	void BlueprintSetIsPlayerGhost(class APlayerState* PlayerState, bool bIsPlayerGhost);
};

// 0x338 (0x3E8 - 0xB0)
// Class MoleGameRuntime.MolePlayerTaskManagementComponent
class UMolePlayerTaskManagementComponent : public UControllerComponent
{
public:
	struct FMoleActiveTaskStateArray             MoleActiveTaskStateArray;                          // 0xB0(0x148)(Net, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FMoleCompletedTaskArray               MoleCompletedTaskArray;                            // 0x1F8(0x130)(Net, Protected, NativeAccessSpecifierProtected)
	TArray<struct FMoleTaskLeashData>            MoleCollisionLeashes;                              // 0x328(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TArray<struct FMoleTaskLeashData>            MoleDistanceLeashes;                               // 0x338(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	struct FTimerHandle                          LeashTimerHandle;                                  // 0x348(0x8)(Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FMoleActiveTaskStateHandle            PrimaryActiveTaskHandle;                           // 0x350(0x4)(Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3A37[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInputComponent*                       ActiveTaskInputComponent;                          // 0x358(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FTimerHandle                          CancelPrimaryTaskTimerHandle;                      // 0x360(0x8)(Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3A39[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayCueTag                       TaskCompletionGameplayCue;                         // 0x370(0x8)(Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FGameplayCueTag                       TaskInterruptionGameplayCue;                       // 0x378(0x8)(Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        bTasksDisabledBySabotage : 1;                      // Mask: 0x1, PropSize: 0x10x380(0x1)(Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_28A : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3A3D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTargetingPreset*                      EnemyTrackingTargetingPreset;                      // 0x388(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTargetingRequestHandle               AsyncTargetingHandle;                              // 0x390(0x4)(Transient, NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3A3E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                BestEnemyTarget;                                   // 0x398(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3A3F[0x48];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMolePlayerTaskManagementComponent* GetDefaultObj();

	void ServerTaskObjectInteractEvent(const struct FEventMessageTag& EventMessageTag, struct FTaskGenericPayload& Payload);
	void ServerRequestCancelPrimaryActiveTask();
	void OnLeashActorEndOverlap(class AActor* OriginatingActor, class AActor* ActorEndingOverlap);
	void OnCompletedTaskAdded(struct FMoleCompletedTask& InAddedCompletedTask);
	int32 GetNumCompletedTasks();
	void CompleteTaskForGameplayState(class UGameplayState* State);
	void ClientTasksInterrupted(TArray<class UMoleTaskDataAsset*>& TasksInterrupted, enum class EMoleTaskInterruptionType InterruptionType);
	void ClientSetPrimaryActiveTask(const struct FMoleActiveTaskStateHandle& NewPrimaryHandle);
	void ClientAllTasksInterrupted(enum class EMoleTaskInterruptionType InterruptionType);
	void ClientAllTasksEnabled();
	void ClientAdvanceLogicThroughPhases(class UMoleTaskLogic* Logic, TArray<int32>& AdvancedPhases);
	bool BlueprintServerTaskObjectInteractEvent(class AController* User, const struct FEventMessageTag& EventMessageTag, struct FTaskGenericPayload& Payload);
};

// 0x18 (0xC8 - 0xB0)
// Class MoleGameRuntime.MolePlayerVisibilityManagerComponent
class UMolePlayerVisibilityManagerComponent : public UPlayspaceComponent
{
public:
	TArray<class APawn*>                         Ghosts;                                            // 0xB0(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_3A43[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMolePlayerVisibilityManagerComponent* GetDefaultObj();

};

// 0x8 (0xB8 - 0xB0)
// Class MoleGameRuntime.MoleQuestComponent
class UMoleQuestComponent : public UPlayspaceComponent
{
public:
	uint8                                        Pad_3A45[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoleQuestComponent* GetDefaultObj();

};

// 0x58 (0x108 - 0xB0)
// Class MoleGameRuntime.MoleQuickChatComponent
class UMoleQuickChatComponent : public UPlayerStateComponent
{
public:
	float                                        MinimumTimeBetweenSend;                            // 0xB0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3A4A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMoleQuickChatMessageInfo             MessageInfo;                                       // 0xB8(0x50)(Net, Transient, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UMoleQuickChatComponent* GetDefaultObj();

	void ServerSendMessage(struct FMoleQuickChatMessageInfo& Message);
	void OnRep_MessageInfo();
};

// 0x30 (0x80 - 0x50)
// Class MoleGameRuntime.MoleReplicationGraphNode
class UMoleReplicationGraphNode : public UFortReplicationGraphNode_Custom
{
public:
	uint8                                        Pad_3A4B[0x20];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class APawn*>                         AllPlayers;                                        // 0x70(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMoleReplicationGraphNode* GetDefaultObj();

};

// 0x58 (0xB00 - 0xAA8)
// Class MoleGameRuntime.MoleSabotageAbility
class UMoleSabotageAbility : public UFortGameplayAbility
{
public:
	struct FGameplayTag                          SabotageTag;                                       // 0xAA8(0x8)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 CooldownTagsToListenTo;                            // 0xAB0(0x20)(Edit, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 CombinedCooldownTags;                              // 0xAD0(0x20)(Edit, EditConst, Protected, NativeAccessSpecifierProtected)
	enum class EMoleSabotageInterruptionType     InterruptionType;                                  // 0xAF0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3A5F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEventMessageTag                      SabotageEventMessageTag;                           // 0xAF4(0x8)(Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3A60[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoleSabotageAbility* GetDefaultObj();

	void RevertSabotageForPlayer(class APlayerState* Player);
	void OnSabotageResumedEvent();
	void OnSabotageInterruptedEvent();
	enum class EMoleSabotageInterruptionType GetInterruptionType();
	void GetAllValidSabotageTargets(TArray<class APlayerState*>* OutValidTargets);
	void GetAllSaboteurs(TArray<class APlayerState*>* OutAllSaboteurs);
};

// 0x58 (0x88 - 0x30)
// Class MoleGameRuntime.MoleSabotageData
class UMoleSabotageData : public UPrimaryDataAsset
{
public:
	struct FGameplayTagContainer                 SabotageTags;                                      // 0x30(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<TSoftClassPtr<class UMoleSabotageAbility>> GrantedAbilities;                                  // 0x50(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UWorld>>         AdditionalLevels;                                  // 0x60(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	bool                                         bCanBeFixed;                                       // 0x70(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A65[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSoftObjectPtr<class UMoleTaskDataAsset>> FixTasks;                                          // 0x78(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMoleSabotageData* GetDefaultObj();

};

// 0x138 (0x1E8 - 0xB0)
// Class MoleGameRuntime.MoleSabotageManagerComponent
class UMoleSabotageManagerComponent : public UPlayspaceComponent
{
public:
	TSubclassOf<class UGameplayEffect>           RoundStartCooldownEffect;                          // 0xB0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UGameplayEffect>           RoundStartCooldownEffectForElimination;            // 0xB8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UGameplayEffect>           AfterUseCooldownEffect;                            // 0xC0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortAbilitySet*                       SaboteurAbilitySet;                                // 0xC8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<class APlayerState*, struct FFortAbilitySetHandle> SaboteurAbilitySetHandles;                         // 0xD0(0x50)(Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TMap<class APlayerState*, struct FGuid>      SaboteurAbilitySetInputGuids;                      // 0x120(0x50)(Transient, Protected, NativeAccessSpecifierProtected)
	TArray<struct FGameplayAbilitySpecHandle>    ActiveSabotageHandles;                             // 0x170(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TMap<struct FGameplayTag, struct FEventMessageTag> SabotageToEventTag;                                // 0x180(0x50)(Transient, Protected, NativeAccessSpecifierProtected)
	struct FMoleSabotageStatus                   CurrentSabotageStatus;                             // 0x1D0(0xC)(Net, Transient, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FMoleTimerInfo                        ActiveSabotageTimerInfo;                           // 0x1DC(0x4)(Net, Transient, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FMoleLightingMode                     CurrentLightingMode;                               // 0x1E0(0x1)(Net, Transient, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_3A68[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoleSabotageManagerComponent* GetDefaultObj();

	void SendMoleSabotageTimerStartedEvent(class UMoleSabotageAbility* SabotageAbility, struct FMoleTimerInfo& TimerInfo);
	void SendMoleLightingModeChangeEvent(class UMoleSabotageAbility* SabotageAbility, struct FMoleLightingMode& LightingMode);
	void OnRep_CurrentSabotageStatus();
	void OnRep_CurrentLightingMode();
	void OnRep_ActiveSabotageTimerInfo();
};

// 0x88 (0x138 - 0xB0)
// Class MoleGameRuntime.MoleStateMachine
class UMoleStateMachine : public UGameplayStateMachine
{
public:
	struct FScalableFloat                        PlayerCountToEnemyIncrement;                       // 0xB0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TSubclassOf<class UMolePlayerStateComponent> MolePlayerStateComponentClass;                     // 0xD8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class APlayerState*>                  EnemyPlayerStates;                                 // 0xE0(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	struct FMoleStateGameOverEventData           MoleStateGameOverEventData;                        // 0xF0(0x20)(Net, Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3A6C[0x20];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        RemainingSaboteurs;                                // 0x130(0x4)(Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        StartOfMatchPlayerCount;                           // 0x134(0x4)(Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMoleStateMachine* GetDefaultObj();

	int32 GetMoleStartOfMatchPlayerCountForPlayspace(class AMoleGamePlayspace* PlayspaceContext);
	int32 GetMoleStartOfMatchPlayerCount(class APlayerController* ContextPlayer);
	int32 GetMoleRemainingSaboteurCount(class APlayerController* ContextPlayer);
};

// 0x30 (0xA8 - 0x78)
// Class MoleGameRuntime.MoleState_Gameover
class UMoleState_Gameover : public UGameplayState
{
public:
	struct FMoleStateGameOverEventData           MoleStateGameOverEventData;                        // 0x78(0x20)(Net, Transient, RepNotify, NativeAccessSpecifierPrivate)
	TArray<class APlayerState*>                  ImposterPlayerStates;                              // 0x98(0x10)(Net, ZeroConstructor, Transient, RepNotify, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UMoleState_Gameover* GetDefaultObj();

	void OnRep_MoleStateGameOverEventData();
	void OnRep_ImposterPlayerStates();
};

// 0x88 (0x138 - 0xB0)
// Class MoleGameRuntime.MoleState_Gameplay
class UMoleState_Gameplay : public UGameplayStateMachine
{
public:
	struct FMoleEmergencyMeetingData             LastSummonedEmergencyMeetingData;                  // 0xB0(0x20)(Net, Transient, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected)
	TSubclassOf<class AMoleGhostMannequin>       GhostMannequinProxyClass;                          // 0xD0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               GhostMannequinLocationOffset;                      // 0xD8(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FRotator                              GhostMannequinRotationOffset;                      // 0xE4(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 AbilityTagsToBlockInMeeting;                       // 0xF0(0x20)(Edit, Protected, NativeAccessSpecifierProtected)
	TArray<class APlayerState*>                  FreshlyKilledGhosts;                               // 0x110(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TArray<class AMoleGhostMannequin*>           DeadGhostProxies;                                  // 0x120(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	bool                                         bEmergencyMeetingActive;                           // 0x130(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3A6F[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoleState_Gameplay* GetDefaultObj();

	bool RequestEmergencyMeeting(class AActor* ActorContext, const struct FMoleEmergencyMeetingData& MeetingData);
	void OnRep_LastSummonedEmergencyMeetingData();
	void HandleScoreChanged(const struct FEventMessageTag& EventChannel, struct FMoleTaskScoreEventData& ScoreEventData);
	void HandlePlayerStateDied(class APlayerState* GhostPlayerState);
	void GetAllMoleFreshlyKilledGhosts(class APlayerController* PlayerContext, TArray<class APlayerState*>* OutFreshlyKilledGhosts);
};

// 0x0 (0x78 - 0x78)
// Class MoleGameRuntime.MoleState_Setup
class UMoleState_Setup : public UGameplayState
{
public:

	static class UClass* StaticClass();
	static class UMoleState_Setup* GetDefaultObj();

};

// 0x58 (0xB58 - 0xB00)
// Class MoleGameRuntime.MoleSupplyDropSabotageAbility
class UMoleSupplyDropSabotageAbility : public UMoleSabotageAbility
{
public:
	uint8                                        Pad_3A71[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScalableFloat                        NumberOfPointsToFix;                               // 0xB08(0x28)(Edit, Protected, NativeAccessSpecifierProtected)
	TArray<struct FMoleActiveTaskStateHandle>    FixTaskHandles;                                    // 0xB30(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	class FName                                  InteractionInfoRowName;                            // 0xB40(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UMoleTaskLinkComponent*>        ChosenFixPoints;                                   // 0xB48(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UMoleSupplyDropSabotageAbility* GetDefaultObj();

	void HandleFixPointInteracted(class UMoleTaskLinkComponent* TaskLinkComponent, class AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionType);
};

// 0x8 (0xB0 - 0xA8)
// Class MoleGameRuntime.MoleTargetingSelectionTask_BaseMoleTrace
class UMoleTargetingSelectionTask_BaseMoleTrace : public UTargetingSelectionTask_Trace
{
public:
	enum class EFortAbilityTargetingSource       PawnTargetingSource;                               // 0xA8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bIgnoreKnownSaboteurs : 1;                         // Mask: 0x1, PropSize: 0x10xA9(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bIgnoreGhosts : 1;                                 // Mask: 0x2, PropSize: 0x10xA9(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3A72[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoleTargetingSelectionTask_BaseMoleTrace* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MoleGameRuntime.MoleTargetingSelectionTask_BestEnemyTarget
class UMoleTargetingSelectionTask_BestEnemyTarget : public UTargetingTask
{
public:

	static class UClass* StaticClass();
	static class UMoleTargetingSelectionTask_BestEnemyTarget* GetDefaultObj();

};

// 0x148 (0x178 - 0x30)
// Class MoleGameRuntime.MoleTaskDataAsset
class UMoleTaskDataAsset : public UPrimaryDataAsset
{
public:
	struct FScalableFloat                        Enabled;                                           // 0x30(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UWorld>>         TaskSubLevels;                                     // 0x58(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UMoleTaskStateMachine>   TaskStateMachine;                                  // 0x68(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          TaskStateMachineId;                                // 0x90(0x8)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFortAbilitySet>        TaskAbilitySet;                                    // 0x98(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UFortWorldItemDefinition>> GrantedTaskItemDefinitions;                        // 0xC0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 TaskAssetTags;                                     // 0xD0(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	bool                                         bSabotageMenuAllowed;                              // 0xF0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A74[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScalableFloat                        Score;                                             // 0xF8(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FMoleTaskLogicPhase>           LogicPhases;                                       // 0x120(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UMoleTaskDataAsset>     OnSuccessfulCompletionTaskGrant;                   // 0x130(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  TaskTitle;                                         // 0x158(0x18)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	uint8                                        MaximumNumberToDistributePerGame;                  // 0x170(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bCapDistribution : 1;                              // Mask: 0x1, PropSize: 0x10x171(0x1)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bCanOnlyBeDistributedAsFollowupTask : 1;           // Mask: 0x2, PropSize: 0x10x171(0x1)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3A75[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoleTaskDataAsset* GetDefaultObj();

};

// 0x1B0 (0x260 - 0xB0)
// Class MoleGameRuntime.MoleTaskLinkComponent
class UMoleTaskLinkComponent : public UActorComponent
{
public:
	FMulticastInlineDelegateProperty_            OnTaskPermissionChanged;                           // 0xB0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A98[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnTaskInteractionChanged;                          // 0xD8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnTaskGenericObjectiveStatChanged;                 // 0xE8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnTaskLinkOwnerActorInteract;                      // 0xF8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FGameplayTag                          TaskTag;                                           // 0x108(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftObjectPtr<class UDataTable>             TaskInteractionInfoTable;                          // 0x110(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FPlayerTaskStateDataArray             PlayerTaskStateDataArray;                          // 0x138(0x120)(Net, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        bTaskLinkDisabled : 1;                             // Mask: 0x1, PropSize: 0x10x258(0x1)(Net, Transient, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3A9D[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoleTaskLinkComponent* GetDefaultObj();

	void UpdatePlayerInteractionData(class AController* User, class FName InteractionInfoRowName);
	void SendGenericObjectiveStatUpdate(class AController* User, const struct FGameplayTag& ObjectiveStatTag, float ObjectiveStatDelta);
	void RemovePlayerPermission(class AController* User);
	void RemovePlayerInteractionData(class AController* User, bool bAlsoRemovePermission);
	void OnTaskPermissionChanged__DelegateSignature(class AController* User, bool bHasPermission);
	void OnTaskLinkOwnerActorInteract__DelegateSignature(class UMoleTaskLinkComponent* TaskLinkComponent, class AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionType);
	void OnTaskInteractionChanged__DelegateSignature(class AController* User);
	void OnTaskGenericObjectiveStatChanged__DelegateSignature(class UMoleTaskLinkComponent* TaskLinkComponent, class AController* User, const struct FGameplayTag& ObjectiveStatTag, float ObjectiveStatDelta);
	void OnRep_bTaskLinkDisabled();
	void OnOwnerActorInteract(class AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted Interaction);
	bool IsTaskLinkDisabled();
	bool HasPlayerPermission(class AController* User);
	void GivePlayerPermission(class AController* User);
	struct FGameplayTag GetTaskTag();
	class UMoleTaskLinkComponent* GetTaskComponent(class AActor* TaskActor);
	float GetInteractionTime(class AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted);
	class FText GetInteractionString(class AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted);
	void DisableTaskLink();
	bool CanInteract(class AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted, enum class ETInteractionType InteractionType);
	void AddPlayerInteractionData(class AController* User, class FName InteractionInfoRowName, bool bGivePermission);
};

// 0xA0 (0xC8 - 0x28)
// Class MoleGameRuntime.MoleTaskLogic
class UMoleTaskLogic : public UObject
{
public:
	uint8                                        Pad_3AA0[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UMoleTaskDataAsset*                    ParentTaskAsset;                                   // 0x40(0x8)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3AA1[0x50];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FMoleTaskLogicPhase>           TaskPhases;                                        // 0x98(0x10)(ZeroConstructor, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TArray<int32>                                ClientDelayedPendingPhases;                        // 0xA8(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	struct FMoleActiveTaskStateHandle            ParentTaskHandle;                                  // 0xB8(0x4)(Net, Transient, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        CurrentTaskPhase;                                  // 0xBC(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bPhaseChangeInProgress : 1;                        // Mask: 0x1, PropSize: 0x10xC0(0x1)(Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bHasBeenInitialized : 1;                           // Mask: 0x2, PropSize: 0x10xC0(0x1)(Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bIsPrimaryActiveTask : 1;                          // Mask: 0x4, PropSize: 0x10xC0(0x1)(Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3AA2[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoleTaskLogic* GetDefaultObj();

	void OnRep_ParentTaskHandle();
	void OnRep_ParentTaskAsset();
};

// 0x38 (0x60 - 0x28)
// Class MoleGameRuntime.MoleTaskLogicSubobject
class UMoleTaskLogicSubobject : public UObject
{
public:
	struct FGameplayTagContainer                 AssociatedTaskActorTags;                           // 0x28(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TArray<class AActor*>                        AssociatedTaskActors;                              // 0x48(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        AssociatedActorRemovalPolicyBitmask;               // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bUsesAssociatedTaskActors : 1;                     // Mask: 0x1, PropSize: 0x10x59(0x1)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bReplicates : 1;                                   // Mask: 0x2, PropSize: 0x10x59(0x1)(Net, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3AA7[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoleTaskLogicSubobject* GetDefaultObj();

	void OnTaskRemoved();
	void OnTaskExternalInterruption(enum class EMoleTaskInterruptionType InterruptionType);
	void OnOwningTaskNoLongerPrimaryActiveTask(bool bIsActivePhase);
	void OnOwningTaskBecomePrimaryActiveTask(bool bIsActivePhase);
	void OnExitOwningPhase();
	void OnEnterOwningPhase();
	void OnAssociatedTaskActorsPendingRemoval(TArray<class AActor*>& InPendingRemovalTaskActors);
	void OnAssociatedTaskActorsAdded(TArray<class AActor*>& InNewlyAddedTaskActors);
	class UMolePlayerTaskManagementComponent* GetOwningPlayerTaskComponent();
	class AController* GetOwningController();
	enum class ENetRole GetOwnerRole();
	TArray<class AActor*> GetAssociatedTaskActors();
};

// 0x8 (0x68 - 0x60)
// Class MoleGameRuntime.MoleTaskLogicAction
class UMoleTaskLogicAction : public UMoleTaskLogicSubobject
{
public:
	uint8                                        ActionRemovalPolicyBitmask;                        // 0x60(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bUsesActionRemovalPolicyBitmask : 1;               // Mask: 0x1, PropSize: 0x10x61(0x1)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3AA8[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoleTaskLogicAction* GetDefaultObj();

	void OnActionRemovalPolicyInvoked();
};

// 0x70 (0xD8 - 0x68)
// Class MoleGameRuntime.MoleTaskLogicAction_GrantAbilitySet
class UMoleTaskLogicAction_GrantAbilitySet : public UMoleTaskLogicAction
{
public:
	TSoftObjectPtr<class UFortAbilitySet>        AbilitySetToGrant;                                 // 0x68(0x28)(Edit, DisableEditOnInstance, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FFortAbilitySetHandle                 GrantedHandle;                                     // 0x90(0x38)(Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FGuid                                 GrantedInputGuid;                                  // 0xC8(0x10)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UMoleTaskLogicAction_GrantAbilitySet* GetDefaultObj();

};

// 0x40 (0xA8 - 0x68)
// Class MoleGameRuntime.MoleTaskLogicAction_GrantItem
class UMoleTaskLogicAction_GrantItem : public UMoleTaskLogicAction
{
public:
	TSoftObjectPtr<class UFortWorldItemDefinition> ItemToGrant;                                       // 0x68(0x28)(Edit, DisableEditOnInstance, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        Quantity;                                          // 0x90(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGuid                                 GrantedItemGuid;                                   // 0x94(0x10)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3AA9[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoleTaskLogicAction_GrantItem* GetDefaultObj();

};

// 0x20 (0x88 - 0x68)
// Class MoleGameRuntime.MoleTaskLogicAction_GrantTag
class UMoleTaskLogicAction_GrantTag : public UMoleTaskLogicAction
{
public:
	struct FGameplayTagContainer                 TagsToGrant;                                       // 0x68(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMoleTaskLogicAction_GrantTag* GetDefaultObj();

};

// 0x38 (0xA0 - 0x68)
// Class MoleGameRuntime.MoleTaskLogicAction_GrantWeapon
class UMoleTaskLogicAction_GrantWeapon : public UMoleTaskLogicAction
{
public:
	TSoftObjectPtr<class UFortWeaponItemDefinition> WeaponToGrant;                                     // 0x68(0x28)(Edit, DisableEditOnInstance, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGuid                                 GrantedWeaponGuid;                                 // 0x90(0x10)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UMoleTaskLogicAction_GrantWeapon* GetDefaultObj();

};

// 0x10 (0x78 - 0x68)
// Class MoleGameRuntime.MoleTaskLogicAction_HighlightActors
class UMoleTaskLogicAction_HighlightActors : public UMoleTaskLogicAction
{
public:
	uint8                                        bHighlight : 1;                                    // Mask: 0x1, PropSize: 0x10x68(0x1)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bShowIndicator : 1;                                // Mask: 0x2, PropSize: 0x10x68(0x1)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bRequirePermissionForEmphasisFX : 1;               // Mask: 0x4, PropSize: 0x10x68(0x1)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bShowIndicatorInGoalMode : 1;                      // Mask: 0x8, PropSize: 0x10x68(0x1)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_28B : 4;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3AAA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               IndicatorRelativeLocationOffset;                   // 0x6C(0xC)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UMoleTaskLogicAction_HighlightActors* GetDefaultObj();

};

// 0x10 (0x78 - 0x68)
// Class MoleGameRuntime.MoleTaskLogicAction_SetInteractionData
class UMoleTaskLogicAction_SetInteractionData : public UMoleTaskLogicAction
{
public:
	class FName                                  InteractionRow;                                    // 0x68(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bAlsoGrantPermission : 1;                          // Mask: 0x1, PropSize: 0x10x70(0x1)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3AAB[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoleTaskLogicAction_SetInteractionData* GetDefaultObj();

};

// 0x8 (0x70 - 0x68)
// Class MoleGameRuntime.MoleTaskLogicAction_SetPermission
class UMoleTaskLogicAction_SetPermission : public UMoleTaskLogicAction
{
public:
	uint8                                        bGrantPermission : 1;                              // Mask: 0x1, PropSize: 0x10x68(0x1)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3AAC[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoleTaskLogicAction_SetPermission* GetDefaultObj();

};

// 0x30 (0x98 - 0x68)
// Class MoleGameRuntime.MoleTaskLogicAction_SetPlayerLeash
class UMoleTaskLogicAction_SetPlayerLeash : public UMoleTaskLogicAction
{
public:
	enum class EMoleTaskLeashType                LeashType;                                         // 0x68(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3AAD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScalableFloat                        LeashDistance;                                     // 0x70(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UMoleTaskLogicAction_SetPlayerLeash* GetDefaultObj();

};

// 0x90 (0xF0 - 0x60)
// Class MoleGameRuntime.MoleTaskLogicObjective
class UMoleTaskLogicObjective : public UMoleTaskLogicSubobject
{
public:
	FMulticastInlineDelegateProperty_            OnObjectiveCurrentValueChanged;                    // 0x60(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnObjectiveTargetValueChanged;                     // 0x70(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FMoleObjectiveValue                   CurrentValue;                                      // 0x80(0x8)(Net, Transient, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected)
	float                                        CapturedInitialValue;                              // 0x88(0x4)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        CapturedTargetValue;                               // 0x8C(0x4)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EMoleTaskObjectiveStatus          CurrentStatus;                                     // 0x90(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3AB4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ObjectiveText;                                     // 0x98(0x18)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FVector                               IndicatorRelativeOffset;                           // 0xB0(0xC)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3AB5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScalableFloat                        MinimumCompletionTimeSecurityThreshold;            // 0xC0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	uint8                                        bAllowClientCompletion : 1;                        // Mask: 0x1, PropSize: 0x10xE8(0x1)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bValidateDistFromAssociatedActors : 1;             // Mask: 0x2, PropSize: 0x10xE8(0x1)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bValidateMinCompletionTime : 1;                    // Mask: 0x4, PropSize: 0x10xE8(0x1)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bInterruptTaskOnValidationFailure : 1;             // Mask: 0x8, PropSize: 0x10xE8(0x1)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bClearProgressOnTaskInterruption : 1;              // Mask: 0x10, PropSize: 0x10xE8(0x1)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bHasPerformedInitialCapture : 1;                   // Mask: 0x20, PropSize: 0x10xE8(0x1)(Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bAttemptSetPrimaryActiveTaskOnValueDelta : 1;      // Mask: 0x40, PropSize: 0x10xE8(0x1)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bAttemptHighlightAssociatedActorsIfPrimaryActiveTask : 1; // Mask: 0x80, PropSize: 0x10xE8(0x1)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bAttemptApplyIndicatorsToAssociatedActorsIfPrimaryActiveTask : 1; // Mask: 0x1, PropSize: 0x10xE9(0x1)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bRequirePermissionForEmphasisFX : 1;               // Mask: 0x2, PropSize: 0x10xE9(0x1)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3AB6[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoleTaskLogicObjective* GetDefaultObj();

	void SetObjectiveStatus(enum class EMoleTaskObjectiveStatus InNewStatus);
	void ServerSuggestObjectiveStatus(enum class EMoleTaskObjectiveStatus InNewSuggestedStatus);
	void ServerSetAsPrimaryActiveTask();
	void OnRep_CurrentValue();
	void OnRep_CurrentStatus();
	void OnRep_CapturedTargetValue();
	void OnRep_CapturedInitialValue();
	void OnObjectiveTargetValueChanged__DelegateSignature(float NewTargetValue);
	void OnObjectiveCurrentValueChanged__DelegateSignature(float NewCurrentValue);
	class FText GetObjectiveText();
	enum class EMoleTaskObjectiveStatus GetObjectiveStatus();
	float GetCurrentValue();
	float GetCapturedTargetValue();
	float GetCapturedInitialValue();
	void CheckObjectiveStatus();
	float CaptureTargetValue();
	float CaptureInitialValue();
	void ApplyCurrentValueDelta(float Delta);
};

// 0x30 (0x120 - 0xF0)
// Class MoleGameRuntime.MoleTaskLogicObjective_DamageActors
class UMoleTaskLogicObjective_DamageActors : public UMoleTaskLogicObjective
{
public:
	struct FScalableFloat                        DamageAmount;                                      // 0xF0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	uint8                                        bOnlyCountDamageFromTaskOwner : 1;                 // Mask: 0x1, PropSize: 0x10x118(0x1)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3AC1[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoleTaskLogicObjective_DamageActors* GetDefaultObj();

	void OnPawnDamaged(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void OnBuildingActorDamaged(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
};

// 0x40 (0x130 - 0xF0)
// Class MoleGameRuntime.MoleTaskLogicObjective_DestroyActors
class UMoleTaskLogicObjective_DestroyActors : public UMoleTaskLogicObjective
{
public:
	struct FMoleObjectiveCriteriaFloat           Quantity;                                          // 0xF0(0x40)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UMoleTaskLogicObjective_DestroyActors* GetDefaultObj();

	void OnPawnDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void OnGenericActorDestroyed(class AActor* DestroyedActor);
	void OnBuildingActorDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
};

// 0x40 (0x130 - 0xF0)
// Class MoleGameRuntime.MoleTaskLogicObjective_FixSabotage
class UMoleTaskLogicObjective_FixSabotage : public UMoleTaskLogicObjective
{
public:
	struct FMoleObjectiveCriteriaFloat           NumOfPointsToFix;                                  // 0xF0(0x40)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UMoleTaskLogicObjective_FixSabotage* GetDefaultObj();

};

// 0x88 (0x178 - 0xF0)
// Class MoleGameRuntime.MoleTaskLogicObjective_GenericStat
class UMoleTaskLogicObjective_GenericStat : public UMoleTaskLogicObjective
{
public:
	struct FGameplayTag                          StatTag;                                           // 0xF0(0x8)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FMoleObjectiveCriteriaFloat           InitialValue;                                      // 0xF8(0x40)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FMoleObjectiveCriteriaFloat           TargetValue;                                       // 0x138(0x40)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UMoleTaskLogicObjective_GenericStat* GetDefaultObj();

	void OnTaskLinkComponentGenericStatChanged(class UMoleTaskLinkComponent* InTaskLinkComponent, class AController* InUser, const struct FGameplayTag& InObjectiveStatTag, float InObjectiveStatDelta);
};

// 0x40 (0x130 - 0xF0)
// Class MoleGameRuntime.MoleTaskLogicObjective_Interact
class UMoleTaskLogicObjective_Interact : public UMoleTaskLogicObjective
{
public:
	struct FMoleObjectiveCriteriaFloat           Quantity;                                          // 0xF0(0x40)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UMoleTaskLogicObjective_Interact* GetDefaultObj();

	void OnTaskLinkComponentInteract(class UMoleTaskLinkComponent* TaskLinkComponent, class AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionType);
};

// 0x1D0 (0x280 - 0xB0)
// Class MoleGameRuntime.MoleTaskManagerComponent
class UMoleTaskManagerComponent : public UPlayspaceComponent
{
public:
	uint8                                        Pad_3AE5[0x28];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FMoleTaskMappingElement>       MoleTaskContentMappings;                           // 0xD8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	TArray<class UMoleTaskDataAsset*>            AvailableTaskList;                                 // 0xE8(0x10)(Net, ZeroConstructor, Transient, RepNotify, Protected, NativeAccessSpecifierProtected)
	TArray<struct FMoleTaskTrackingData>         TaskTrackingData;                                  // 0xF8(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TSet<struct FMoleActiveTaskStateHandle>      UnpooledTaskAssignments;                           // 0x108(0x50)(Transient, Protected, NativeAccessSpecifierProtected)
	TMap<struct FMoleActiveTaskStateHandle, class UMoleTaskDataAsset*> TaskPoolDependencyToTaskAssetMap;                  // 0x158(0x50)(Transient, Protected, NativeAccessSpecifierProtected)
	int32                                        StartOfInUseTasksIdx;                              // 0x1A8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3AE6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScalableFloat                        NumTasksPerPlayer;                                 // 0x1B0(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        NumScoreRequiredPerPlayer;                         // 0x1D8(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        ShouldEnemiesReceiveTasks;                         // 0x200(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FMoleTaskScoreEventData               ScoreData;                                         // 0x228(0x8)(Net, Transient, RepNotify, NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3AEA[0x50];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoleTaskManagerComponent* GetDefaultObj();

	void OnRep_ScoreData();
	void OnRep_AvailableTaskList();
	TArray<class AActor*> GetTaskActorsMatchingGameplayTagContainer(class UObject* WorldContextObject, const struct FGameplayTagContainer& TaskTagContainer);
	TArray<class AActor*> GetTaskActorsMatchingGameplayTag(class UObject* WorldContextObject, const struct FGameplayTag& TaskRootTag);
	class AActor* GetTaskActorForGameplayTag(class UObject* WorldContextObject, const struct FGameplayTag& TaskTag);
	TArray<class UMoleTaskLinkComponent*> GetTaskActorComponentsMatchingGameplayTagContainer(class UObject* WorldContextObject, const struct FGameplayTagContainer& TaskTagContainer);
	TArray<class UMoleTaskLinkComponent*> GetTaskActorComponentsMatchingGameplayTag(class UObject* WorldContextObject, const struct FGameplayTag& TaskRootTag);
	class UMoleTaskLinkComponent* GetTaskActorComponentForGameplayTag(class UObject* WorldContextObject, const struct FGameplayTag& TaskTag);
	float GetMoleScoreGoal(class UObject* WorldContextObject);
	float GetMoleCurrentScore(class UObject* WorldContextObject);
};

// 0x0 (0x220 - 0x220)
// Class MoleGameRuntime.MoleTaskPoint
class AMoleTaskPoint : public AActor
{
public:

	static class UClass* StaticClass();
	static class AMoleTaskPoint* GetDefaultObj();

	class UMoleTaskLinkComponent* GetMoleTaskLinkComponent();
};

// 0x0 (0xB0 - 0xB0)
// Class MoleGameRuntime.MoleTaskPointManagerComponent
class UMoleTaskPointManagerComponent : public UFortControllerComponent
{
public:

	static class UClass* StaticClass();
	static class UMoleTaskPointManagerComponent* GetDefaultObj();

	void ResetTaskPointManager();
};

// 0x10 (0xC0 - 0xB0)
// Class MoleGameRuntime.MoleTaskStateMachine
class UMoleTaskStateMachine : public UGameplayStateMachine
{
public:
	struct FMoleActiveTaskStateHandle            Handle;                                            // 0xB0(0x4)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3AF2[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoleTaskStateMachine* GetDefaultObj();

};

// 0x30 (0xB30 - 0xB00)
// Class MoleGameRuntime.MoleTeleportAllSabotageAbility
class UMoleTeleportAllSabotageAbility : public UMoleSabotageAbility
{
public:
	struct FScalableFloat                        TimeBeforeTeleport;                                // 0xB00(0x28)(Edit, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_3AF3[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoleTeleportAllSabotageAbility* GetDefaultObj();

	void OnPlayerTeleported(class APlayerState* TeleportedPlayer);
};

// 0x8 (0x228 - 0x220)
// Class MoleGameRuntime.MoleTeleportPoint
class AMoleTeleportPoint : public AActor
{
public:
	class USceneComponent*                       SpawnPoint;                                        // 0x220(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class AMoleTeleportPoint* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MoleGameRuntime.MoleUIIndicatorManagerComponentInterface
class IMoleUIIndicatorManagerComponentInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IMoleUIIndicatorManagerComponentInterface* GetDefaultObj();

};

// 0x38 (0xE8 - 0xB0)
// Class MoleGameRuntime.MoleVoiceComponent
class UMoleVoiceComponent : public UPlayspaceComponent_VoiceManager
{
public:
	bool                                         bIsControllingGameVoiceChannels;                   // 0xB0(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsInLobbyState;                                   // 0xB1(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EMoleVoiceChannelState            VoiceChannelState;                                 // 0xB2(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3AF4[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                MoleGameChannel;                                   // 0xB8(0x10)(ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                MoleGhostChannel;                                  // 0xC8(0x10)(ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3AF5[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoleVoiceComponent* GetDefaultObj();

};

// 0xA0 (0x150 - 0xB0)
// Class MoleGameRuntime.MoleVotingComponent
class UMoleVotingComponent : public UGameFrameworkComponent
{
public:
	uint8                                        Pad_3AF6[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UInputComponent*                       VotingInputComp;                                   // 0xC8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bVoteCasted;                                       // 0xD0(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3AF7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                BestVotingTarget;                                  // 0xD8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FMoleHoldBinding                      VoteBinding;                                       // 0xE0(0x20)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FMoleHoldBinding                      SkipBinding;                                       // 0x100(0x20)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class FName                                  CancelEmoteBinding;                                // 0x120(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3AF8[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoleVotingComponent* GetDefaultObj();

	void ServerVote();
	void ServerSkipVote();
};

// 0x48 (0xF8 - 0xB0)
// Class MoleGameRuntime.MoleVotingStateMachine
class UMoleVotingStateMachine : public UGameplayStateMachine
{
public:
	uint8                                        Pad_3AFA[0x1C];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PrepareStateDelayTime;                             // 0xCC(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FMoleVote>                     VoteList;                                          // 0xD0(0x10)(Net, ZeroConstructor, Transient, RepNotify, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3AFC[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoleVotingStateMachine* GetDefaultObj();

	void OnRep_VoteList();
};

// 0x18 (0x90 - 0x78)
// Class MoleGameRuntime.MoleVotingState_Discussion
class UMoleVotingState_Discussion : public UGameplayState
{
public:
	TSubclassOf<class UMoleQuickChatComponent>   QuickChatComponentClass;                           // 0x78(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3AFF[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DiscussionFinishServerTime;                        // 0x88(0x4)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3B00[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoleVotingState_Discussion* GetDefaultObj();

	void OnRep_DiscussionFinishServerTime();
};

// 0x78 (0xF0 - 0x78)
// Class MoleGameRuntime.MoleVotingState_ResultDisplay
class UMoleVotingState_ResultDisplay : public UGameplayState
{
public:
	uint8                                        Pad_3B01[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMoleVoteResolutionData               VotingResolutionData;                              // 0x80(0x20)(Net, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected)
	TMap<class APlayerState*, class AMolePlayerStart*> PlayerToPlayerStart;                               // 0xA0(0x50)(Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UMoleVotingState_ResultDisplay* GetDefaultObj();

	void OnRep_VotingResolutionData();
};

// 0x8 (0x80 - 0x78)
// Class MoleGameRuntime.MoleVotingState_SummaryDisplay
class UMoleVotingState_SummaryDisplay : public UGameplayState
{
public:
	uint8                                        Pad_3B02[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoleVotingState_SummaryDisplay* GetDefaultObj();

};

// 0x70 (0xE8 - 0x78)
// Class MoleGameRuntime.MoleVotingState_VoteCasting
class UMoleVotingState_VoteCasting : public UGameplayState
{
public:
	TSubclassOf<class UGameplayAbility>          VotingAbility;                                     // 0x78(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<class APlayerState*, struct FGameplayAbilitySpecHandle> PlayerStateToVoteAbilityHandle;                    // 0x80(0x50)(Transient, Protected, NativeAccessSpecifierProtected)
	TSubclassOf<class UMoleVotingComponent>      VotingComponentClass;                              // 0xD0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3B04[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ServerFinishTime;                                  // 0xE0(0x4)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3B05[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoleVotingState_VoteCasting* GetDefaultObj();

	void OnRep_ServerFinishTime();
};

}


