#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class FreshCheeseRuntime.FortCheatManager_FreshCheese
class UFortCheatManager_FreshCheese : public UChildCheatManager
{
public:

	static class UClass* StaticClass();
	static class UFortCheatManager_FreshCheese* GetDefaultObj();

	void SpawnFriendChests();
	void FreshCheeseInstancedLoot(class FName TierGroup, int32 NumFriends);
};

// 0x188 (0x1040 - 0xEB8)
// Class FreshCheeseRuntime.FriendChestNative
class AFriendChestNative : public ABuildingContainer
{
public:
	uint8                                        AssociatedSquadID;                                 // 0xEB8(0x1)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_26CF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScalableFloat                        TrigerActivationDelayCurve;                        // 0xEC0(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_26D0[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           MiniMapIconBrush;                                  // 0xEF0(0xB0)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	class UFortSimpleMiniMapIndicator*           MinimapIndicator;                                  // 0xFA0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  InstancedLootTierGroup;                            // 0xFA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class FName>                          LootTierGroups;                                    // 0xFB0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FFriendChestRoundPacing>       RoundPacingForSquadSize;                           // 0xFC0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_26D1[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<int32, struct FFriendChestPlayerActivationPair> ActivationTimers;                                  // 0xFE0(0x50)(Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_26D2[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFriendChestAnalytics*                 Analytics;                                         // 0x1038(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class AFriendChestNative* GetDefaultObj();

	void SimulateDisconnect(TArray<class FString>& SquadUserIds);
	void RollInstancedLootForSquadMembers(class AGameModeBase* GameMode, uint8 SquadId);
	void ResetLootTierForAssociatedSquad(bool bOnlyAlive);
	void RefreshChestState();
	void PlayerRemoved(class AFortPlayerPawnAthena* Player);
	void PlayerAdded(class AFortPlayerPawnAthena* Player);
	void OnXpEvent(struct FXPEventInfo& XPEvent);
	void OnTriggerComponentEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void OnTriggerComponentBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void OnPlayerTimeout(class AFortPlayerStateAthena* Player);
	void OnPlayerPawnDied(class AFortPlayerPawn* DeadPawn);
	void OnPlayerLeave(class AFortPlayerStateAthena* Player);
	void OnPlayerHit(class AFortPlayerStateAthena* Player, bool bWasSuccessful);
	void OnPlayerEnter(class AFortPlayerStateAthena* Player);
	void HandlePlayerDeadStateChanged(class AFortPlayerStateAthena* PlayerState, bool bIsDead);
	struct FTransform GetWeakpointTransformForButtonID(class UInstancedStaticMeshComponent* InstancedStaticMesh, int32 InstanceIndex, struct FVector& WeakpointOffset);
	int32 GetNumTargetsForNextRound(int32 SquadSize, int32 RemainingTargets);
	void GetAssociatedSquadMembers(bool bIncludeDead, bool bIncludeResurectable, bool bIncludeDisconnected, TArray<class AFortPlayerStateAthena*>* OutSquadMembers);
	uint8 GetAssociatedSquadID();
	void CreateIndicators();
	void ClearSimulatedDisconnects();
	float CalculatePlayerChangedAlpha(int32 NumberInPosition, int32 Delta, float Alpha);
};

// 0x40 (0x68 - 0x28)
// Class FreshCheeseRuntime.FriendChestAnalytics
class UFriendChestAnalytics : public UObject
{
public:
	uint8                                        Pad_26D6[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               SpawnCoordinates;                                  // 0x40(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_26D7[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFriendChestAnalyticsParticipant> Participants;                                      // 0x58(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFriendChestAnalytics* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class FreshCheeseRuntime.FriendChestLibrary
class UFriendChestLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UFriendChestLibrary* GetDefaultObj();

	void GetFilteredSquadMembers(class UObject* WorldContextObject, uint8 SquadId, bool bIncludeDead, bool bIncludeResurectable, bool bIncludeDisconnected, TArray<class AFortPlayerStateAthena*>* OutSquadMembers);
};

// 0x10 (0x230 - 0x220)
// Class FreshCheeseRuntime.FriendChestSpawner
class AFriendChestSpawner : public AActor
{
public:
	TArray<class UFriendChestAnalytics*>         SpawnFailureAnalytics;                             // 0x220(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class AFriendChestSpawner* GetDefaultObj();

	void TriggerFriendChestSpawn();
	void SendEndSpawnAnalytics();
	void NotifySpawnFailure(const class FString& Reason, int32 SquadId);
	void LogSpawnerMessage(const class FString& Message);
};

}


