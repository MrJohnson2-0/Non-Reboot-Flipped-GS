#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x38 - 0x38)
// Class SpecialEventGameplayRuntime.FortCheatManager_FakeKillRelevancy
class UFortCheatManager_FakeKillRelevancy : public UFortCheatManager_Coupled
{
public:

	static class UClass* StaticClass();
	static class UFortCheatManager_FakeKillRelevancy* GetDefaultObj();

	void FakeKillRelevancyTestAlgorithm(int32 NumPlayers, const class FString& MaxPlayersRemainingAfterPhases, int32 MinSquadSize, int32 MaxSquadSize, int32 Iterations, int32 LogVerbosity);
	void FakeKillRelevancyStartNextWave();
	void FakeKillRelevancySetUpPhase(int32 MaxPlayersRemaining, const class FString& ReasonGameplayTagString, int32 NumWaves, float RelevancyDelay);
	void FakeKillRelevancyReset();
	void FakeKillRelevancyDebug(float TextScale);
};

// 0x188 (0x238 - 0xB0)
// Class SpecialEventGameplayRuntime.FortControllerComponent_FakeKillRelevancy
class UFortControllerComponent_FakeKillRelevancy : public UFortControllerComponent
{
public:
	struct FFakeKillRelevancyPlayerDataArray     PlayerDataArray;                                   // 0xB0(0x120)(Net, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TMap<class AFortPlayerStateAthena*, enum class EFakeKillRelevancyPlayerKillStep> ClientPlayerStateKillStepMap;                      // 0x1D0(0x50)(NativeAccessSpecifierPrivate)
	uint8                                        ResetCounter;                                      // 0x220(0x1)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1188[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AFortPlayerStateAthena*>        DebugSupergroupPlayerStates;                       // 0x228(0x10)(Net, ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortControllerComponent_FakeKillRelevancy* GetDefaultObj();

	void ResetRelevancy();
	void PlayKillEffects(struct FFakeKillRelevancyPlayerDataEntry& FakeKillData, float RelevancyDelay);
	void OnRep_ResetCounter();
	void OnKillEffectsPlayed(class AFortPlayerStateAthena* PlayerState);
	struct FVector GetDeathLocation(class AFortPlayerStateAthena* PlayerState);
	void CancelKillEffectsOnServer();
	void CancelKillEffectsOnClient(TArray<class AFortPlayerStateAthena*>& PlayerStates);
};

// 0x60 (0x410 - 0x3B0)
// Class SpecialEventGameplayRuntime.FortAthenaMutator_FakeKillRelevancy
class AFortAthenaMutator_FakeKillRelevancy : public AFortAthenaMutator_SpecialRelevancy
{
public:
	TSubclassOf<class UFortControllerComponent_FakeKillRelevancy> FakeKillControllerComponentClass;                  // 0x3B0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FFakeKillRelevancyPhaseData>   RelevancyPhaseDataArray;                           // 0x3B8(0x10)(Net, ZeroConstructor, NativeAccessSpecifierPrivate)
	int32                                        PhaseNum;                                          // 0x3C8(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1190[0x44];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AFortAthenaMutator_FakeKillRelevancy* GetDefaultObj();

	void StartNextKillWave();
	void SetUpKillPhase(int32 MaxPlayersRemaining, struct FGameplayTag& Reason, int32 NumWaves, float RelevancyDelay);
	void ResetRelevancy();
	void EndWave(int32 EndPhaseNum, int32 WaveNum);
};

// 0x10 (0x2D8 - 0x2C8)
// Class SpecialEventGameplayRuntime.FortAthenaMutator_LoadGameFeature
class AFortAthenaMutator_LoadGameFeature : public AFortAthenaMutator
{
public:
	class FString                                GameFeatureToLoad;                                 // 0x2C8(0x10)(Edit, ZeroConstructor, Config, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class AFortAthenaMutator_LoadGameFeature* GetDefaultObj();

	void OnPlaylistDataReady(class AFortGameStateAthena* GameState, class UFortPlaylist* Playlist, struct FGameplayTagContainer& PlaylistContextTags);
};

// 0x10 (0x2D8 - 0x2C8)
// Class SpecialEventGameplayRuntime.FortAthenaMutator_RemoveGameFeatures
class AFortAthenaMutator_RemoveGameFeatures : public AFortAthenaMutator
{
public:
	TArray<class FString>                        AllowedGameFeatures;                               // 0x2C8(0x10)(Edit, ZeroConstructor, Config, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class AFortAthenaMutator_RemoveGameFeatures* GetDefaultObj();

	void OnPlaylistDataReady(class AFortGameStateAthena* GameState, class UFortPlaylist* Playlist, struct FGameplayTagContainer& PlaylistContextTags);
};

// 0x0 (0x38 - 0x38)
// Class SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent
class UFortCheatManager_SpecialEvent : public UFortCheatManager_Coupled
{
public:

	static class UClass* StaticClass();
	static class UFortCheatManager_SpecialEvent* GetDefaultObj();

	void UnloadTerrainMaps(class FName MapTag);
	void ToggleDisableParachutes(bool bIsDisabled);
	void TeleportAllPlayers(int32 SafeZoneIndex);
	void StartEventScript(int32 InStartingIndex);
	void SpecialEventSetAdditionalViewpoint(float X, float Y, float Z);
	void SpecialEventClearAdditionalViewpoint();
	void ShrinkSafeZone();
	void SetReturnToMainMenuDelay(float MinDelayReturnToMainMenu, float MaxDelayReturnToMainMenu);
	void SetMatchTime(int32 NewMatchTime);
	void SetLockingOnFocalPoint(bool bInLockingOnFocalPoint);
	void SetIsSimulatingDamage(bool bIsSimulating);
	void SetDestroyVehiclesInStorm(bool bDestroyVehiclesInStorm);
	void SendToNightNight();
	void ResumeWinCondition();
	void ResetWinConditionProgressToZero();
	void ResetWinCondition();
	void ResetSpecialEventAircraft();
	void ResetMatchTimeToPrevious();
	void PlacePlayersInAircraft();
	void PauseWinCondition(bool bLockScores);
	void CloseParachutes();
	void ChangeWinCondition(float NewGoalScore);
	void AutobalanceTargetScore();
	void AddCSVEvent(const class FString& CSVEventName);
};

// 0x368 (0x630 - 0x2C8)
// Class SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent
class AFortAthenaMutator_SpecialEvent : public AFortAthenaMutator
{
public:
	FMulticastInlineDelegateProperty_            TeleportAllPlayersFinished;                        // 0x2C8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPawnLoaded;                                      // 0x2D8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnInitController;                                  // 0x2E8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnResumeGame;                                      // 0x2F8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnSpecialClientEvent;                              // 0x308(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnClientInitialLoadingFinished;                    // 0x318(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_11C6[0x58];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bPlayersAreInvincible;                             // 0x380(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_11C7[0x27];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MinimumScoreBumpForAutomadeGoal;                   // 0x3A8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_11C8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                ScoreBrackets;                                     // 0x3B0(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	bool                                         bEnforceInfiniteSafeZonePhase;                     // 0x3C0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_11C9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  WarmupIslandPlayerStartTag;                        // 0x3C4(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAllowInventoryOpen;                               // 0x3CC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_11CA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScalableFloat                        bAllowFullScreenMap;                               // 0x3D0(0x28)(Edit, Protected, NativeAccessSpecifierProtected)
	bool                                         bShouldClearFrontEndMapMarkers;                    // 0x3F8(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bBlockTeamIndicators;                              // 0x3F9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_11CB[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 UIToHideDuringSpecialEvent;                        // 0x400(0x20)(Edit, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 UIToHideWhenInInfiniteWarmup;                      // 0x420(0x20)(Edit, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 ClientEventsThatUnhideHiddenWhileLoadingHUDElements; // 0x440(0x20)(Edit, Protected, NativeAccessSpecifierProtected)
	bool                                         bForceGarbageCollectionAfterUnload;                // 0x460(0x1)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bFullPurgeGC;                                      // 0x461(0x1)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_11CC[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortAthenaAircraft*                   EventAircraft;                                     // 0x468(0x8)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FAircraftFlightInfo                   EventAircraftInfo;                                 // 0x470(0x28)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	TSubclassOf<class AFortAthenaAircraft>       EventAircraftClass;                                // 0x498(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ASpecialEventScript*                   ScriptActor;                                       // 0x4A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bDisableHUD;                                       // 0x4A8(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        GameResumed;                                       // 0x4A9(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_11CD[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               AdditionalViewpoint;                               // 0x4AC(0xC)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bParachutesDisabled;                               // 0x4B8(0x1)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_11CE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                LastCSVEventName;                                  // 0x4C0(0x10)(Net, ZeroConstructor, RepNotify, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bCanStreamBuildingFoundationsIn;                   // 0x4D0(0x1)(Edit, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_11CF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        AllPlayerTeleportedCount;                          // 0x4D4(0x4)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FFortDelayRTMMData                    DelayPlayersFromReturningToLobbyData;              // 0x4D8(0x10)(Net, Transient, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class FName                                  NamedWeightForContainerLootRoll;                   // 0x4E8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        WeightForContainerLootRoll;                        // 0x4F0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_11D0[0x24];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFortSpecialEventEmoteData>    SpecialEventEmoteData;                             // 0x518(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 BlockedNativeActions;                              // 0x528(0x20)(Edit, Net, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class UInputComponent*                       SpecialEventsInputComponent;                       // 0x548(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bLockingOnFocalPoint;                              // 0x550(0x1)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_11D1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFortSpecialEventOverrideParts> SpecialEventOverrideParts;                         // 0x558(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	struct FFortSpecialEventGEData               GameplayEffectToApplyOnSwapToDefault;              // 0x568(0x10)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	TMap<struct FUniqueNetIdRepl, int32>         OverridePartsArrayIndexMap;                        // 0x578(0x50)(Transient, Protected, NativeAccessSpecifierProtected)
	TArray<struct FFortSpecialEventGEData>       GameplayEffectsToApplyOnLogin;                     // 0x5C8(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FSpecialEventMapData>          TerrainMapsToUnload;                               // 0x5D8(0x10)(Edit, Net, ZeroConstructor, DisableEditOnInstance, RepNotify, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_11D5[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AFortPlayerControllerAthena*>   UnhandledPlayerControllers;                        // 0x5F8(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	bool                                         bCanToggleCursorModeInStasis;                      // 0x608(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11D6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSubclassOf<class AActor>>            ActorSpawnDelegateClasses;                         // 0x610(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_11D7[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AFortAthenaMutator_SpecialEvent* GetDefaultObj();

	void WarmUpIslandUpdated();
	void UnloadTerrainMaps(struct FGameplayTag& MapTag);
	void ToggleHUDs(bool bHide);
	void ToggleDisableWeapons(bool bDisableWeapons);
	void ToggleDisableParachutes(bool bDisable);
	void ToggleAllPlayersInvincibility(bool bInvincible);
	void TeleportAllPlayers(const struct FGameplayTagContainer& EventTags, int32 TeleportsPerFrame, int32 SafeZoneIndex);
	void SwapBodyParts(int32 ArrayIndex, class AFortPlayerController* FortPC);
	void StartSafeZoneOverrideForEvent(int32 SafeZoneIndexForEvent);
	void ShrinkSafeZone();
	void SetWeightForContainerLootRoll(float Weight);
	void SetReturnToMainMenuDelay(float MinDelayReturnToMainMenu, float MaxDelayReturnToMainMenu);
	void SetNamedWeightForContainerLootRoll(class FName WeightName);
	void SetMatchTime(int32 NewMatchTime);
	void SetLockingOnFocalPoint(bool bInLockingOnFocalPoint);
	void SetIsSimulatingDamage(bool bIsSimulating);
	void SetDestroyVehiclesInStorm(bool bDestroyVehiclesInStorm);
	void SetCanStreamBuildingFoundationsIn(bool bEnable);
	void SetAdditionalViewpoint(const struct FVector& WorldLocation);
	void SendToNightNight();
	void ResumeWinCondition();
	void ResetWinConditionProgressToZero();
	void ResetWinCondition();
	void ResetSpecialEventAircraft();
	void ResetSafeZoneOverrideAfterEvent(int32 MinResetSafeZoneIndex, float MinDelayReturnToMainMenu, float MaxDelayReturnToMainMenu);
	void ResetMatchTimeToPrevious();
	void RemoveFromBlockedNativeActions(struct FGameplayTagContainer& Actions);
	void PushSpecialEventEmoteInputComponent();
	void PopSpecialEventEmoteInputComponent();
	void PlacePlayersInAircraft();
	void PauseWinCondition(bool bLockScores);
	void PauseSupplyDrops(bool bPause);
	void PauseStormProgression(bool bPause);
	void PauseStormDamage(bool bPause);
	void OnWarmUpTeleportComplete(class AFortPlayerPawn* PlayerPawn);
	void OnRep_TerrainMapsToUnload();
	void OnRep_LastCSVEventName();
	void OnRep_GameResumed();
	void OnRep_DelayPlayersFromReturningToLobbyData();
	void OnRep_bPlayersAreInvincible();
	void OnRep_bLockingOnFocalPoint();
	void OnRep_bDisableHUD();
	void OnRep_bCanStreamBuildingFoundationsIn();
	void OnRep_AllPlayerTeleportedCount();
	void OnRep_Aircraft();
	void OnRep_AdditionalViewpoint();
	void OnGameViewportActivationChanged(bool bHasFocus);
	void OnGamePhaseStepChanged(TScriptInterface<class IFortSafeZoneInterface>& SafeZoneInterface, enum class EAthenaGamePhaseStep GamePhaseStep);
	void OnAircraftFlightEnded(class AFortAthenaAircraft* FortAthenaAircraft);
	void OnAircraftExitedDropZone(class AFortAthenaAircraft* FortAthenaAircraft);
	void OnAircraftEnteredDropZone(class AFortAthenaAircraft* FortAthenaAircraft);
	void OnActorSpawned(class AActor* Actor);
	void OnActorPreSpawnInitialization(class AActor* Actor);
	void NotifyClientsGameResumed();
	void JumpToSafeZonePhase(const struct FVector& PawnSpawnCenterLocation, float PawnSpawnMinDistance, float PawnSpawnMaxDistance);
	class ASpecialEventScript* GetScript();
	bool GetHasInfiniteSafeZonePhase();
	void ForceSafeZoneFinalLocation(const struct FVector& NewFinalLocation, float DefaultAircraftOffsetFromMidLine, float MinDefaultMidlineAngle, float MaxDefaultMidlineAngle);
	void FlushUnhandledPlayerControllers();
	void CloseParachutes();
	void ClearBlockedNativeActions();
	void ClearAdditionalViewpoint();
	void ChangeWinCondition(float NewGoalScore);
	void AutobalanceTargetScore();
	void AddToBlockedNativeActions(struct FGameplayTagContainer& Actions, bool bCancelAbilities);
	void AddCSVEvent(const class FString& CSVEventName, bool bShouldRepToClient);
	void AddClientCSVEvent(const class FString& CSVEventName);
};

// 0x620 (0x6D0 - 0xB0)
// Class SpecialEventGameplayRuntime.FortCharacterMovementMutatorComponent
class UFortCharacterMovementMutatorComponent : public UActorComponent
{
public:
	class ACharacter*                            CharacterOwner;                                    // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortMovementComp_CharacterAthena*     MovementComponent;                                 // 0xB8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortMovementComp_CharacterAthena*     CDOMovementComponent;                              // 0xC0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_11E4[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScalableFloat                        BuffetBubblesMoveToBoxSpeed;                       // 0xD8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        BuffetBubblesRelativeVelocityInterpSpeed;          // 0x100(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        BuffetBubblesLocationInterpSpeed;                  // 0x128(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        BuffetBubblesRotationInterpSpeed;                  // 0x150(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        BuffetBubblesMinRelativeX;                         // 0x178(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        BuffetBubblesMaxRelativeX;                         // 0x1A0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        BuffetBubblesMinRelativeY;                         // 0x1C8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        BuffetBubblesMaxRelativeY;                         // 0x1F0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        BuffetBubblesMinRelativeZ;                         // 0x218(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        BuffetBubblesMaxRelativeZ;                         // 0x240(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FRotator                              BuffetBubblesRotationRate;                         // 0x268(0xC)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_11E5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScalableFloat                        BuffetBubblesMaxAcceleration;                      // 0x278(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        BuffetBubblesMaxRelativeSpeed;                     // 0x2A0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        BuffetBubblesRelativeDeceleration;                 // 0x2C8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        BuffetBubblesSphereRadius;                         // 0x2F0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class AActor*                                BuffetBubblesFollowActor;                          // 0x318(0x8)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               BuffetBubblesInitialFollowBoxOffsetPercent;        // 0x320(0xC)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_11E6[0x74];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBuffetBubblesReplicatedData          BuffetBubblesReplicatedData;                       // 0x3A0(0x40)(Net, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_11E8[0x150];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScalableFloat                        BuffetBubblesIntroSpeed;                           // 0x530(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_11E9[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            BuffetBubblesIntroTargetTransform;                 // 0x560(0x30)(Net, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        BuffetFlyingMaxPitchDegrees;                       // 0x590(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        BuffetFlyingMaxSpeed;                              // 0x5B8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        BuffetFlyingVelocityDirectionInterpSpeed;          // 0x5E0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FRotator                              BuffetFlyingRotationRate;                          // 0x608(0xC)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	float                                        BuffetFlyingMaxSpeedOverride;                      // 0x614(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        BuffetFlyingMaxSpeedInterpSpeed;                   // 0x618(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_11EC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BuffetFlyingVelocityDirectionInterpSpeedOverride;  // 0x620(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_11ED[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScalableFloat                        BuffetFlyingRicochetSphereSize;                    // 0x628(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        BuffetFlyingRicochetRotationDuration;              // 0x650(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        BuffetFlyingRicochetControlRotationInterpSpeed;    // 0x678(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_11EE[0x20];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBuffetFlyingRicochetReplicatedData   BuffetFlyingRicochetReplicatedData;                // 0x6C0(0x10)(Net, RepNotify, NoDestructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortCharacterMovementMutatorComponent* GetDefaultObj();

	void SetBuffetBubblesIntroTargetTransform(struct FTransform& Transform);
	void SetBuffetBubblesInitialFollowBoxOffsetPercent(const struct FVector& BoxOffsetPercent);
	void SetBuffetBubblesFollowActor(class AActor* Actor);
	void OverrideBuffetFlyingVelocityDirectionInterpSpeed(float Value, bool bAsMultiplier);
	void OverrideBuffetFlyingMaxSpeed(float Value, bool bAsMultiplier, float InterpSpeed);
	void OnRep_BuffetFlyingRicochetReplicatedData();
	void OnRep_BuffetBubblesFollowActor();
	void OnMovementModeChanged(class ACharacter* Character, enum class EMovementMode PreviousMovementMode, uint8 PreviousCustomMode);
};

// 0x8 (0x2D0 - 0x2C8)
// Class SpecialEventGameplayRuntime.FortCharacterMovementMutator
class AFortCharacterMovementMutator : public AFortAthenaMutator
{
public:
	TSubclassOf<class UFortCharacterMovementMutatorComponent> MovementMutatorComponentClass;                     // 0x2C8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class AFortCharacterMovementMutator* GetDefaultObj();

	void OnFortPawnChanged(class AFortPawn* NewPawn);
};

// 0x58 (0x108 - 0xB0)
// Class SpecialEventGameplayRuntime.FortControllerComponent_GameplayCinematic
class UFortControllerComponent_GameplayCinematic : public UFortControllerComponent
{
public:
	uint8                                        Pad_11F4[0x30];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            BP_OnStartGameplayOutro;                           // 0xE0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            BP_OnGameplayIntroFinished;                        // 0xF0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                         bIsReadyForGameplay;                               // 0x100(0x1)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_11F5[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortControllerComponent_GameplayCinematic* GetDefaultObj();

	void ShowCinematicWidget(class FName WidgetName);
	void SetReadyForGameplay(bool bIsReady);
	void ServerOnGameplayIntroFinished();
	void OnRep_bIsReadyForGameplay();
	void HideHUDElementsForLoadingScreen(bool bHideElements);
};

// 0x8 (0xB8 - 0xB0)
// Class SpecialEventGameplayRuntime.FortControllerComponent_SpecialEvent
class UFortControllerComponent_SpecialEvent : public UFortControllerComponent
{
public:
	TWeakObjectPtr<class AFortAthenaMutator_SpecialEvent> SpecialEventMutator;                               // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortControllerComponent_SpecialEvent* GetDefaultObj();

	void ServerHandleSpecialClientEvent(struct FGameplayTag& EventTag, int32 Count);
	void SendSpecialClientEvent(const struct FGameplayTag& EventTag, int32 Count);
};

// 0x8 (0x258 - 0x250)
// Class SpecialEventGameplayRuntime.FortSpecialRelevancyActorSpawner
class AFortSpecialRelevancyActorSpawner : public AFortActorSpawner
{
public:
	uint8                                        Pad_11FA[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AFortSpecialRelevancyActorSpawner* GetDefaultObj();

	void BP_OnActorSpawnedPerRelevancyGroup(TArray<class AActor*>& InSpawnedActors);
};

// 0x20 (0xD0 - 0xB0)
// Class SpecialEventGameplayRuntime.SpecialEventAudioAnalysisBaseComponent
class USpecialEventAudioAnalysisBaseComponent : public UActorComponent
{
public:
	float                                        CurrentTime;                                       // 0xB0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_11FF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ULoudnessNRT*                          LoudnessNRT;                                       // 0xB8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UOnsetNRT*                             OnsetNRT;                                          // 0xC0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UConstantQNRT*                         ConstantQNRT;                                      // 0xC8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class USpecialEventAudioAnalysisBaseComponent* GetDefaultObj();

	void UpdateTime(float NewTime);
	void UpdateOnset(float Time);
	void UpdateLoudness(float Time);
	void UpdateConstantQ(float Time);
	class UOnsetNRT* GetOnsetNRT();
	class ULoudnessNRT* GetLoudnessNRT();
	float GetCurrentNormalizedLoudness();
	class UConstantQNRT* GetConstantQNRT();
};

// 0x28 (0xF8 - 0xD0)
// Class SpecialEventGameplayRuntime.SpecialEventAudioHapticsComponent
class USpecialEventAudioHapticsComponent : public USpecialEventAudioAnalysisBaseComponent
{
public:
	TArray<struct FSpecialEventAudioHapticsAction> HapticsActions;                                    // 0xD0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bStartHapticsOnBeginPlay;                          // 0xE0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1203[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        IntensityMultiplier;                               // 0xE4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1204[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USpecialEventAudioHapticsComponent* GetDefaultObj();

	void StopHaptics();
	void StartHaptics();
	bool AreHapticsActive();
};

// 0x0 (0x28 - 0x28)
// Class SpecialEventGameplayRuntime.SpecialEventGameplayGlobals
class USpecialEventGameplayGlobals : public UObject
{
public:

	static class UClass* StaticClass();
	static class USpecialEventGameplayGlobals* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class SpecialEventGameplayRuntime.SpecialEventGameplayLibrary
class USpecialEventGameplayLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class USpecialEventGameplayLibrary* GetDefaultObj();

	void StreamOutAllBuildingFoundations(class UObject* WorldContextObject);
	void SetNextLoadingScreen(class UObject* WorldContextObject, class UAthenaLoadingScreenItemDefinition* LoadingScreenDefinition, bool bCanShowLoadingBar);
	void HideSkydivingShadowProxy(class UObject* WorldContextObject);
	class ASpecialEventScript* GetSpecialEventScript(class UObject* WorldContextObject);
	class FString GetSpecialEventPlayerDisplayName(class AFortPlayerControllerAthena* LocalController, class AFortPlayerStateAthena* PlayerState);
	class AFortAthenaMutator_SpecialEvent* GetSpecialEventMutator(class UObject* WorldContextObject);
	struct FFortAthenaLoadout GetLocalPlayerLoadout(class UObject* WorldContextObject);
	bool GetHasInfiniteSafeZonePhase(class UObject* WorldContextObject);
	void ForceUpdateGrass(class UObject* WorldContextObject, const struct FVector& Location);
	void ForceDestroyComponents(TArray<class UActorComponent*>& Components, bool bPromoteChildren, const class FString& LogContext);
	class UFortControllerComponent_SpecialEvent* FindSpecialEventComponent(class AController* Controller);
	class UFortControllerComponent_GameplayCinematic* FindGameplayCinematicComponent(class AController* Controller);
	void CreateSpecialEventPlayerEliminationWorldMarker(class AFortPlayerControllerAthena* LocalController, class AFortPlayerStateAthena* VictimPlayerState, struct FVector& DeathLocation);
	void AddSpecialEventRecentElimination(struct FVector& Location, class AFortPlayerStateAthena* PlayerState);
	void AddSpecialEventKillFeedEntry(class UObject* WorldContextObject, class AFortPlayerStateAthena* VictimPlayerState, class AFortPlayerStateAthena* KillerPlayerState, class FText NonPlayerVictimName, class FText NonPlayerKillerName, struct FGameplayTag& DeathCauseTag, enum class EDeathCauseReason DeathCauseReason, float Distance);
};

// 0x18 (0x48 - 0x30)
// Class SpecialEventGameplayRuntime.FortAsyncAction_GameplayCinematicComponentReady
class UFortAsyncAction_GameplayCinematicComponentReady : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnReady;                                           // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_123B[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortAsyncAction_GameplayCinematicComponentReady* GetDefaultObj();

	class UFortAsyncAction_GameplayCinematicComponentReady* FindGameplayCinematicComponentAsync(class AController* Conroller);
};

// 0x68 (0x288 - 0x220)
// Class SpecialEventGameplayRuntime.SpecialEventPhase
class ASpecialEventPhase : public AInfo
{
public:
	uint8                                        Pad_1256[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          PhaseTag;                                          // 0x238(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bApplyGameplayEffects;                             // 0x240(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1258[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSubclassOf<class UGameplayEffect>>   GameplayEffectsToApply;                            // 0x248(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TSubclassOf<class UCameraModifier>           CameraModifierToApply;                             // 0x258(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bRemoveModifierOnPhaseDeactivation;                // 0x260(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bRemoveGameplayEffects;                            // 0x261(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_125C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSubclassOf<class UGameplayEffect>>   GameplayEffectsToRemove;                           // 0x268(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	class UCameraModifier*                       AppliedCameraModifier;                             // 0x278(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ESpecialEventPhaseState           PhaseState;                                        // 0x280(0x1)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_125D[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ASpecialEventPhase* GetDefaultObj();

	void SetHUDElementVisibility(struct FGameplayTagContainer& HUDElementTags, bool bHideElements);
	void PrePhaseActivation_Server();
	void OnRep_PhaseState();
	void OnPhaseFinished();
	void OnPhaseDeactivation_Server();
	void OnPhaseDeactivation_Client();
	void OnPhaseActivation_Server();
	void OnPhaseActivation_Client();
	struct FGameplayTag GetPhaseTag();
	void DebugActivatePhase();
};

// 0x60 (0x280 - 0x220)
// Class SpecialEventGameplayRuntime.SpecialEventScript
class ASpecialEventScript : public AInfo
{
public:
	TArray<struct FPhaseInfo>                    PhaseInfoArray;                                    // 0x220(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class ALevelSequenceActor*                   MasterSequence;                                    // 0x230(0x8)(Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        DropDeadWindowSizeInSeconds;                       // 0x238(0x4)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        DelayAfterConentLoad;                              // 0x23C(0x4)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        DelayAfterWarmup;                                  // 0x240(0x4)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ForceReturnToMainMenuTime;                         // 0x244(0x4)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ForceReturnToMainMenuTimeRandomness;               // 0x248(0x4)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MinDelayReturnToMainMenu;                          // 0x24C(0x4)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MaxDelayReturnToMainMenu;                          // 0x250(0x4)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bPreloadAllLevelsOnServer;                         // 0x254(0x1)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAllowGarbageCollectionAfterUnload;                // 0x255(0x1)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bFullPurgeGC;                                      // 0x256(0x1)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1272[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ReplicatedActivePhaseIndex;                        // 0x258(0x4)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1273[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMeshNetworkComponent*                 MeshNetworkComponent;                              // 0x268(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1274[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ASpecialEventScript* GetDefaultObj();

	void UpdateMasterSequence(float Time);
	void StartEventAtIndex(int32 InStartingIndex);
	void OnRep_ReplicatedActivePhaseIndex();
	void BP_OnScriptReady();
	void BP_OnScriptFinished();
	void AttemptStartNextPhase(const struct FGameplayTag& CurrentPhaseTag);
	void AttemptFinishPhase(const struct FGameplayTag& PhaseTag);
};

// 0x10 (0x230 - 0x220)
// Class SpecialEventGameplayRuntime.SpecialEventScriptMeshActor
class ASpecialEventScriptMeshActor : public AInfo
{
public:
	struct FDateTime                             RootStartTime;                                     // 0x220(0x8)(Net, ZeroConstructor, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMeshNetworkComponent*                 MeshNetworkComponent;                              // 0x228(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class ASpecialEventScriptMeshActor* GetDefaultObj();

	void OnRep_RootStartTime();
	void MeshRootStartEvent();
	void MeshRootResetEvent();
};

}


