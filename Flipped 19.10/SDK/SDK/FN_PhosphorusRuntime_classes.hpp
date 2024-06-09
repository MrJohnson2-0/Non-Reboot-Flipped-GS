#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x540 (0x808 - 0x2C8)
// Class PhosphorusRuntime.FortAthenaMutator_PlayerSpawnPod
class AFortAthenaMutator_PlayerSpawnPod : public AFortAthenaMutator
{
public:
	FMulticastInlineDelegateProperty_            OnPawnEjectedFromPod;                              // 0x2C8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPodLanded;                                       // 0x2D8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_376B[0x30];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class AActor>                    PodClass;                                          // 0x318(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 AllowNativeActionsInPod;                           // 0x320(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TSubclassOf<class UGameplayEffect>           DuringStasisEffectClass;                           // 0x340(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UGameplayEffect>           EjectedFromSpawnPodEffectClass;                    // 0x348(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 BlockAbilityTagsInStasis;                          // 0x350(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 HUDElementsToHideWhileInPod;                       // 0x370(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        PreLaunchDelay;                                    // 0x390(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        FallDuration;                                      // 0x3B8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        RouteYawCenter;                                    // 0x3E0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        RouteYawDeviation;                                 // 0x408(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        RouteMinXYDistancePercent;                         // 0x430(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        RouteMaxXYDistancePercent;                         // 0x458(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        StartAltitude;                                     // 0x480(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        StartAltitudeDeviation;                            // 0x4A8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        EndLocationUpperTraceOffset;                       // 0x4D0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        EndLocationLowerTraceOffset;                       // 0x4F8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        EjectPawnYawSpread;                                // 0x520(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        EjectPawnPitch;                                    // 0x548(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        EjectPawnImpulseMagnitude;                         // 0x570(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        CanToggleCursorModeInStasis;                       // 0x598(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        UseDropPodsForRespawn;                             // 0x5C0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        bHidePlayerIndicatorsOfPlayersInPods;              // 0x5E8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        bReloadWeaponsOnLaunch;                            // 0x610(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TArray<class FName>                          ActionsToAllowToggleCursorModeInStasis;            // 0x638(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTag                          PodLandedGameplayEventTag;                         // 0x648(0x8)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScalableFloat                        bForceBlackScreenOnPodTeleport;                    // 0x650(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TArray<struct FPlayerSpawnPodData>           PodDataArray;                                      // 0x678(0x10)(Net, ZeroConstructor, RepNotify, NativeAccessSpecifierPrivate)
	TArray<class UFortAbilitySystemComponent*>   BlockedAbilitySystemComponents;                    // 0x688(0x10)(ExportObject, Net, ZeroConstructor, RepNotify, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<class UFortAbilitySystemComponent*>   PreviousBlockedAbilitySystemComponents;            // 0x698(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_376C[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bShouldLaunchIndividualPods;                       // 0x6A9(0x1)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_376E[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortRespawnLogicData                 TeamTeleportLogicData;                             // 0x6B0(0x140)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class AFortAthenaMutator_SynchronizedTeleport* TeleportMutator;                                   // 0x7F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class AActor>                    ViewTargetClass;                                   // 0x7F8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UFortCameraMode>           PawnFallingCameraMode;                             // 0x800(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class AFortAthenaMutator_PlayerSpawnPod* GetDefaultObj();

	void SetViewTarget(class AFortPlayerControllerAthena* Controller, class AActor* ViewTarget, struct FViewTargetTransitionParams& ViewTargetTransitionParams, bool bDestroyOldViewTarget);
	void OnSingleTeleportComplete(class AFortPlayerStateAthena* PlayerState);
	void OnRep_PodDataArray(TArray<struct FPlayerSpawnPodData>* OldPodDataArray);
	void OnRep_BlockedAbilitySystemComponents();
	void OnPodDestroyed(class AActor* DestroyedActor);
	void OnAllTeleportComplete();
	void HandlePodLanded(class UActorComponent* InComponent);
	bool GetPodDataForID(int32 ID, struct FPlayerSpawnPodData* OutPodData, const class FString& ContextString);
	bool GetPodDataForActor(class AActor* Actor, struct FPlayerSpawnPodData* OutPodData, const class FString& ContextString);
	float GetFallDuration();
};

// 0x0 (0x5B0 - 0x5B0)
// Class PhosphorusRuntime.FortAthenaMutator_InventoryOverride_Phosphorus
class AFortAthenaMutator_InventoryOverride_Phosphorus : public AFortAthenaMutator_InventoryOverride
{
public:

	static class UClass* StaticClass();
	static class AFortAthenaMutator_InventoryOverride_Phosphorus* GetDefaultObj();

};

// 0x0 (0x38 - 0x38)
// Class PhosphorusRuntime.FortCheatManager_Phosphorus
class UFortCheatManager_Phosphorus : public UFortCheatManager_Coupled
{
public:

	static class UClass* StaticClass();
	static class UFortCheatManager_Phosphorus* GetDefaultObj();

	void PhosphorusSetNumRoundsToWin(int32 NumRounds);
	void PhosphorusForceStartMatch();
	void PhosphorusEndRound();
	void PhosphorusEndMatch();
	void PhosphorusDebug(float TextScale);
};

// 0x388 (0x768 - 0x3E0)
// Class PhosphorusRuntime.FortAthenaMutator_Phosphorus
class AFortAthenaMutator_Phosphorus : public AFortAthenaMutator_GameModeBase
{
public:
	FMulticastInlineDelegateProperty_            OnPhosphorusPhaseChanged;                          // 0x3E0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UFortAbilitySet*                       EjectAbilitySet;                                   // 0x3F0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortAbilitySet*                       LeaderAbilitySet;                                  // 0x3F8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScalableFloat                        bKeepWarmupLoadoutsInFirstRound;                   // 0x400(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        bPutInStasisAtRoundEnd;                            // 0x428(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	enum class EPhosphorusPhase                  PhosphorusPhase;                                   // 0x450(0x1)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3781[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            PlayerEnteredStormSound;                           // 0x458(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AFortAthenaMutator_CustomStormMovement* StormMutator;                                      // 0x460(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AFortAthenaMutator_SafeZoneOrderOptimize* SafeZoneOrderOptimizeMutator;                      // 0x468(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3782[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FPhosphorusTeamData>           TeamDataArray;                                     // 0x478(0x10)(Net, ZeroConstructor, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        InnerLandRadiusPercent;                            // 0x488(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        OuterLandRadiusPercent;                            // 0x4B0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        TeamLandWedgeAngleRandPercent;                     // 0x4D8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class AFortAthenaMutator_PlayerSpawnPod*     PlayerSpawnPodMutator;                             // 0x500(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            OnRoundAdvanced;                                   // 0x508(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_3783[0x30];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnPhosphorusNewSquadMVP;                           // 0x548(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScalableFloat                        MaxExpectedRoundsOverride;                         // 0x558(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        AdvanceRoundDelay;                                 // 0x580(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        EndRoundUIDuration;                                // 0x5A8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        PreFirstRoundFadeOutDuration;                      // 0x5D0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	int32                                        CurrentRound;                                      // 0x5F8(0x4)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3784[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScalableFloat                        EndRoundTimeDilationDuration;                      // 0x600(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        EndRoundDuration;                                  // 0x628(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        EmoteAudioFadeOutDuration;                         // 0x650(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        NumRoundsToWin;                                    // 0x678(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	uint8                                        RoundWinningTeamNum;                               // 0x6A0(0x1)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3785[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScalableFloat                        DesiredSupplyDrops;                                // 0x6A8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        SupplyDropPercentSafeZoneRadiusToUse;              // 0x6D0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        SupplyDropMinTimeUntilSpawn;                       // 0x6F8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        SupplyDropMaxTimeUntilSpawn;                       // 0x720(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_3786[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AFortAthenaSupplyDrop*>         SupplyDrops;                                       // 0x750(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	bool                                         bCheatForcedStart;                                 // 0x760(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3787[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AFortAthenaMutator_Phosphorus* GetDefaultObj();

	void OnRep_PhosphorusPhase();
	void OnRep_CurrentRound();
	void OnPrePodLaunch();
	void OnPawnEjectedFromPod(class AFortPlayerPawnAthena* Pawn);
	void OnAllPodsLaunched();
	void OnAllPodsLanded();
	bool IsTeamValid(uint8 TeamNum);
	bool IsTeamAlive(uint8 TeamNum);
	bool IsOnWinningTeam(class AFortPlayerPawnAthena* Pawn);
	void HandlePawnStormStatusChanged(class AFortPlayerPawn* PlayerPawn, bool bIsInSafeZone);
	int32 GetTeamSize(uint8 TeamNum);
	class AFortPlayerStateAthena* GetTeamMVP(uint8 TeamNum);
	struct FPhosphorusTeamData GetTeamDataCopy(uint8 TeamNum);
	void GetTeamDataArray(TArray<struct FPhosphorusTeamData>* OutTeamDataArray, bool bMustBeValid, bool bMustBeAlive, bool bSortByScore);
	uint8 GetRoundWinningTeamNum();
	int32 GetNumValidTeams();
	int32 GetNumAliveTeams();
	void GetLeadingTeamNums(TArray<uint8>* LeadingTeamNums);
	class AFortAthenaMutator_CustomStormMovement* GetCachedStormMutator();
	void FadeToFirstRound();
	void AudioFadeChangeEvent(bool bFadeOut, float FadeTime);
	void AdvanceRound();
};

// 0x0 (0x38 - 0x38)
// Class PhosphorusRuntime.FortCheatManager_PlayerSpawnPod
class UFortCheatManager_PlayerSpawnPod : public UFortCheatManager_Coupled
{
public:

	static class UClass* StaticClass();
	static class UFortCheatManager_PlayerSpawnPod* GetDefaultObj();

	void PlayerSpawnPodTestAllPlayers(bool bIndividualPods);
	void PlayerSpawnPodTest();
	void PlayerSpawnPodDebug(float TextScale);
};

// 0x0 (0x800 - 0x800)
// Class PhosphorusRuntime.PlayerSpawnPodCameraActor
class APlayerSpawnPodCameraActor : public ACameraActor
{
public:

	static class UClass* StaticClass();
	static class APlayerSpawnPodCameraActor* GetDefaultObj();

};

}


