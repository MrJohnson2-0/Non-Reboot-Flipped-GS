#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0xC8 - 0xB0)
// Class ArgonRuntime.ArgonPlayerComponent
class UArgonPlayerComponent : public UFortControllerComponent
{
public:
	float                                        EntireSquadDiedServerTimeForRespawn;               // 0xB0(0x4)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRotatePawnToCamera;                               // 0xB4(0x1)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3712[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortMontageItemDefinitionBase*        CachedFinishedRaceEmote;                           // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AFortAthenaMutator_Argon*              ArgonMutator;                                      // 0xC0(0x8)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UArgonPlayerComponent* GetDefaultObj();

	void PlayFinishedRaceEmote();
	void OnRep_RotatePawnToCamera();
	void OnRep_EntireSquadDiedServerTimeForRespawn();
	void OnRep_ArgonMutator();
	void OnRacePhaseChanged(enum class EArgonRacePhase NewRacePhase);
};

// 0x28 (0x248 - 0x220)
// Class ArgonRuntime.ArgonStartingPlatform
class AArgonStartingPlatform : public AActor
{
public:
	struct FGameplayTagContainer                 GameplayTags;                                      // 0x220(0x20)(Edit, Protected, NativeAccessSpecifierProtected)
	bool                                         bIsEnabled;                                        // 0x240(0x1)(Edit, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3714[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AArgonStartingPlatform* GetDefaultObj();

	void OnRep_IsEnabled();
};

// 0x20 (0xD0 - 0xB0)
// Class ArgonRuntime.ArgonTicketComponent
class UArgonTicketComponent : public UActorComponent
{
public:
	class AFortAthenaMutator_Argon*              ArgonMutator;                                      // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnIsNearToPlayerChanged;                           // 0xB8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_3715[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UArgonTicketComponent* GetDefaultObj();

	bool IsNearToPlayer();
	class AFortAthenaMutator_Argon* GetArgonMutator();
};

// 0x10 (0xA80 - 0xA70)
// Class ArgonRuntime.ArgonTraversePoint
class AArgonTraversePoint : public AAthenaLTMTraversePoint
{
public:
	class AFortPlayerMarkerBase*                 MarkerActor;                                       // 0xA70(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class AFortPlayerMarkerBase>     MarkerClass;                                       // 0xA78(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class AArgonTraversePoint* GetDefaultObj();

	void OnNewState_Hidden_Server_BP();
	void OnNewState_Active_Server_BP();
	void ClientSpawnMarkerActor(struct FTransform& Transform);
};

// 0x18 (0x238 - 0x220)
// Class ArgonRuntime.ArgonVehicleSpawner
class AArgonVehicleSpawner : public AActor
{
public:
	TArray<struct FPrimaryAssetId>               OverrideVehicleAssetIds;                           // 0x220(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	enum class ESpawnActorCollisionHandlingMethod SpawnVehicleCollisionHandlingMethod;               // 0x230(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3718[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AArgonVehicleSpawner* GetDefaultObj();

};

// 0x1170 (0x1550 - 0x3E0)
// Class ArgonRuntime.FortAthenaMutator_Argon
class AFortAthenaMutator_Argon : public AFortAthenaMutator_GameModeBase
{
public:
	uint8                                        Pad_3742[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScalableFloat                        MinInitialVehicleFuelPercent;                      // 0x3E8(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        MaxInitialVehicleFuelPercent;                      // 0x410(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnArgonPlayerFinished;                             // 0x438(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnArgonPlayerReachedEndWithoutEnoughTickets;       // 0x448(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnArgonRacePhaseChanged;                           // 0x458(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnArgonEndTraversePointSet;                        // 0x468(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnTeamTicketCountChanged;                          // 0x478(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_3745[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnSupplyDropClusterSpawned;                        // 0x4A0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_3746[0x20];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FArgonRoute>                   Routes;                                            // 0x4D0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FFortSquadStartSearchParamData        StartPOISquadStartSearchParam;                     // 0x4E0(0xC0)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        bUseOverridingSpawnTransforms;                     // 0x5A0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TArray<struct FTransform>                    OverridingSpawnTransforms;                         // 0x5C8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class FText                                  TeleportingPlayersText;                            // 0x5D8(0x18)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        PreCountdownTextDuration;                          // 0x5F0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TArray<struct FArgonVehicleOption>           VehicleOptionsList;                                // 0x618(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        EndRaceAfterNumFinishers;                          // 0x628(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FSlateBrush                           EndLocationCompassBrush;                           // 0x650(0xB0)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FSlateBrush                           EndLocationLockedCompassBrush;                     // 0x700(0xB0)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	float                                        EndLocationCompassBrush_YOffset;                   // 0x7B0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        EndLocationCompassBrush_MinScale;                  // 0x7B4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        EndLocationCompassBrush_MaxScale;                  // 0x7B8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        EndLocationCompassBrush_DistanceForMinScale;       // 0x7BC(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        EndLocationCompassBrush_DistanceForMaxScale;       // 0x7C0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3747[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           EndLocationMapBrush;                               // 0x7D0(0xB0)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FSlateBrush                           EndLocationLockedMapBrush;                         // 0x880(0xB0)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FVector2D                             EndLocationMapBrushScale;                          // 0x930(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTag                          RacePositionStatGameplayTag;                       // 0x938(0x8)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortWorldItemDefinition*              TicketItemDefinition;                              // 0x940(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScalableFloat                        NumTicketsNeededToCompleteRace;                    // 0x948(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	int32                                        NumEnemiesTrackedOnProgressBarUI;                  // 0x970(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        NumSquadmatesTrackedOnProgressBarUI;               // 0x974(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScalableFloat                        EntireSquadDeadRespawnViewPitch;                   // 0x978(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        EntireSquadDeadRespawnTime;                        // 0x9A0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TSubclassOf<class AActor>                    EntireSquadDeadRespawnActorClass;                  // 0x9C8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScalableFloat                        RespawnOffsetDistance;                             // 0x9D0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MinRespawnHeightAboveGround;                       // 0x9F8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        bShouldRespawnInSafeZone;                          // 0xA20(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        PercentDistanceInsideOfSafeZone;                   // 0xA48(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FArgonSupplyDropPointData             SupplyDropPointData;                               // 0xA70(0x298)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        bAreDropsAlwaysTriggeredByFirstPlacePlayer;        // 0xD08(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class UCurveFloat*                           SupplyDropPercentCurve;                            // 0xD30(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MaxConsecutiveDropsOnSameSideOfPath;               // 0xD38(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MinPathDropOffset;                                 // 0xD60(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MaxPathDropOffset;                                 // 0xD88(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MinDropTriggerSpacing;                             // 0xDB0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MaxDropTriggerSpacing;                             // 0xDD8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MinDropDistFromRaceEnd;                            // 0xE00(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        FirstDropTriggerDist;                              // 0xE28(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        NumRepopulationsPerRacePathDrop;                   // 0xE50(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        DelayBeforeRepopulatingRacePathDrops;              // 0xE78(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        NumDropsAroundEnd;                                 // 0xEA0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        DelayBetweenEndPointDrops;                         // 0xEC8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MinEndDropRadius;                                  // 0xEF0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MaxEndDropRadius;                                  // 0xF18(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        NumRepopulationsPerEndPointDrop;                   // 0xF40(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        DelayBeforeRepopulatingEndPointDrops;              // 0xF68(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FVector                               StartingPoint;                                     // 0xF90(0xC)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_374E[0x2C];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortMontageItemDefinitionBase*        StartingLineEmote;                                 // 0xFC8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MaxStartingLineEmoteDelay;                         // 0xFD0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MinStartingLineEmotePlayRate;                      // 0xFF8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MaxStartingLineEmotePlayRate;                      // 0x1020(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        bPlayStartingLineEmoteBeforeCountdown;             // 0x1048(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class UFortMontageItemDefinitionBase*        FinishedRaceEmote;                                 // 0x1070(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScalableFloat                        FinishedRaceEmoteTime;                             // 0x1078(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class UNiagaraSystem*                        SquadmateVictoryVFXTemplate;                       // 0x10A0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UParticleSystem*                       FinishedPlayerDespawnVFXTemplate;                  // 0x10A8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MaxFloorCheckDist;                                 // 0x10B0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        NumNearbyTicketsToShowOnCompass;                   // 0x10D8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        NumNearbyTicketsToShowInWorld;                     // 0x1100(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_374F[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           TicketCompassBrush;                                // 0x1130(0xB0)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	float                                        TicketCompassBrush_YOffset;                        // 0x11E0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        TicketCompassBrush_Scale;                          // 0x11E4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScalableFloat                        SortClientTicketComponentsTime;                    // 0x11E8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FSlateBrush                           AcquiredAllTicketsMapBrush;                        // 0x1210(0xB0)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 TicketSpecialActorCategories;                      // 0x12C0(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TMap<class FName, class FName>               AnalyticsAttributeNameToStatNameMap;               // 0x12E0(0x50)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TSubclassOf<class UFortGameplayAbility_JumpBoostPack> JumpBoostPackAbilityClass;                         // 0x1330(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FArgonRaceStateInfo                   CurrentRaceState;                                  // 0x1338(0x18)(Net, RepNotify, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3751[0x28];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AFortSquadStart*>               SquadStarts;                                       // 0x1378(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FArgonPlayerInfo>              RacingPlayersByPlace;                              // 0x1388(0x10)(Net, ZeroConstructor, RepNotify, NativeAccessSpecifierPrivate)
	TArray<struct FArgonTeamProgressBarInfo>     LeaderProgressInfos;                               // 0x1398(0x10)(Net, ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FArgonTeamTicketCount>         TeamTicketCounts;                                  // 0x13A8(0x10)(Net, ZeroConstructor, RepNotify, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3752[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class AAthenaHoldingArea*                    SquadStartHoldingArea;                             // 0x13C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AArgonTraversePoint*                   EndTraversePoint;                                  // 0x13D0(0x8)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AFortAthenaMutator_SynchronizedTeleport* TeleportMutator;                                   // 0x13D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AFortAthenaMutator_GameStartCountdown* GameStartCountdownMutator;                         // 0x13E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AFortAthenaMutator_RespawnAndSpectateSelect* RespawnAndSpectateSelectMutator;                   // 0x13E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<uint8, class AActor*>                   EntireSquadDeadRespawnActors;                      // 0x13F0(0x50)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_3753[0x11];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        NumSupplyDropClustersSpawned;                      // 0x1451(0x1)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3754[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RaceStartTime;                                     // 0x1454(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<TWeakObjectPtr<class AFortPlayerPawn>> FinishedPlayerPawns;                               // 0x1458(0x10)(Net, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3755[0xE8];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AFortAthenaMutator_Argon* GetDefaultObj();

	void SortClientTicketComponents();
	bool ShouldShowNearbyTicketIndicators();
	void OnRep_TeamTicketCounts();
	void OnRep_RacingPlayersByPlace();
	void OnRep_NumSupplyDropClustersSpawned();
	void OnRep_EndTraversePoint();
	void OnRep_CurrentRaceState();
	void OnEndTraversePointTouched(class AAthenaTraversePoint* PointActor, class AFortPlayerStateAthena* TouchingPlayer);
	bool IsUsingRespawnAndSpectateSelectMutator();
	bool IsInSafeZone(const struct FVector& TestLocation);
	bool HasTeamFinishedRace(uint8 Team);
	bool HasPlayerFinishedRace(class AFortPlayerStateAthena* PlayerState);
	void HandlePlayerTeleportComplete(class AFortPlayerStateAthena* PlayerState);
	void HandleGroupTeleportComplete();
	void HandleGameStartCountdownEnd();
	class UFortWorldItemDefinition* GetTicketItemDefinition();
	float GetRandomStartingLineEmotePlayRate();
	float GetRaceTimeElapsed();
	void GetProgressBarUIInfo(float* OutMyPercent, TArray<float>* OutSquadmatePcts, uint8* OutNumSquadTickets, TArray<struct FArgonTeamProgressBarInfo>* OutEnemyProgressInfos);
	int32 GetPlayerTeamPlacement(class AFortPlayerStateAthena* Player);
	int32 GetNumberOfTicketsTeamHasAcquired(uint8 Team);
	int32 GetNumberOfTicketsNeededToFinishRace();
	class AArgonTraversePoint* GetEndTraversePoint();
	void FindSpawnLocationInSafeZone(struct FVector* InOutSpawnLocation);
	bool DidPlayerCrossFinishLine(class AFortPlayerStateAthena* PlayerState);
};

// 0x0 (0x38 - 0x38)
// Class ArgonRuntime.FortCheatManager_Argon
class UFortCheatManager_Argon : public UFortCheatManager_Coupled
{
public:

	static class UClass* StaticClass();
	static class UFortCheatManager_Argon* GetDefaultObj();

	void ArgonTeleportToEndPoint();
};

}


