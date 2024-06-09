#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x258 (0x478 - 0x220)
// Class SOMRuntime.ScriptedObjectMovement_StaticPath
class AScriptedObjectMovement_StaticPath : public AActor
{
public:
	uint8                                        Pad_12B8[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class USplineComponent*                      MasterSplinePath;                                  // 0x238(0x8)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FScriptedObjectMovement_StaticPathTravelerData> PathTravelers;                                     // 0x240(0x10)(Edit, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TArray<struct FScriptedObjectMovement_StaticPathSplineInputKeyData> SplineData;                                        // 0x250(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, Protected, NativeAccessSpecifierProtected)
	float                                        StepSpacingDistance;                               // 0x260(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_12B9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UScriptedObjectMovement_CalendarCheatDefinition> CheatCalendarEventDefinition;                      // 0x268(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          MovementStyleTag;                                  // 0x290(0x8)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_12BB[0x80];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                EnterSplineCalendarEvent;                          // 0x318(0x10)(Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                ExitSplineCalendarEvent;                           // 0x328(0x10)(Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FStaticPathCalendarSplinePointGroup> OrderedCalendarEventPointGroups;                   // 0x338(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_12BC[0x128];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortAsyncAction_CalendarMultiEventWatcher* CalendarWatcherAction;                             // 0x470(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class AScriptedObjectMovement_StaticPath* GetDefaultObj();

	void UnlockAllPathsFromBeingRegenerated();
	void LockAllPathNodesFromBeingRegenerated();
	void HandleCalendarEventUpdated(const class FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin, float TimespanRatio);
	void HandleCalendarEventEnded(const class FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin, float TimespanRatio);
	void HandleCalendarEventActive(const class FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin, float TimespanRatio);
	void GeneratePathData();
};

// 0x0 (0x28 - 0x28)
// Class SOMRuntime.FortScriptedObjectMovement_GridProviderInterface
class IFortScriptedObjectMovement_GridProviderInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IFortScriptedObjectMovement_GridProviderInterface* GetDefaultObj();

};

// 0x120 (0x1D0 - 0xB0)
// Class SOMRuntime.FortGameStateComponent_ScriptedObjectMovementManager
class UFortGameStateComponent_ScriptedObjectMovementManager : public UFortGameStateComponent
{
public:
	uint8                                        Pad_12CA[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AFortScriptedObjectMovement_WorldPhaseSite*> WorldPhaseSites;                                   // 0xB8(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_12CC[0x98];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AScriptedObjectMovement_StaticPath*> RegisteredStaticPaths;                             // 0x160(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	class AScriptedObjectMovement_StaticPath*    CurrentlyMovingStaticPath;                         // 0x170(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_12CD[0x28];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScalableFloat                        StaticPathCooldownBetweenMoves;                    // 0x1A0(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	uint8                                        Pad_12CE[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortGameStateComponent_ScriptedObjectMovementManager* GetDefaultObj();

	void HandleCurrentPlaylistReady(class AFortGameStateAthena* GameState, class UFortPlaylist* Playlist, struct FGameplayTagContainer& PlaylistContextTags);
};

// 0x180 (0xA40 - 0x8C0)
// Class SOMRuntime.FortScriptedObjectMovement_MovableObjectBase
class AFortScriptedObjectMovement_MovableObjectBase : public ABuildingGameplayActor
{
public:
	uint8                                        Pad_12F1[0x40];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Editor_SkipMasterPathIndex;                        // 0x900(0x4)(Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Editor_SkipSubPathIndex;                           // 0x904(0x4)(Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Editor_NumStepsPerClick;                           // 0x908(0x4)(Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12F2[0x24];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortScriptedObjectMovement_SlotDefinition* AssignedSlotDefinition;                            // 0x930(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FScriptedObjectMovement_DynamicPathContext MovementPath;                                      // 0x938(0x38)(Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_12F4[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMesh*                           ScriptedObjectMesh;                                // 0x978(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_12F5[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bDebugStaticMovement;                              // 0x998(0x1)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWaitingForBeginPlaySkip;                          // 0x999(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_12F7[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AScriptedObjectMovement_StaticPath*    StaticFollowPath;                                  // 0x9A0(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_12F8[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScriptedObjectMovement_StaticPathStepData CurrentStepData;                                   // 0x9B0(0x90)(BlueprintVisible, BlueprintReadOnly, Net, Transient, RepNotify, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class AFortScriptedObjectMovement_MovableObjectBase* GetDefaultObj();

	void SetCanEverAffectNavigation(bool bCanEverAffectNavigation, class UActorComponent* TargetActorComponent);
	void OnRep_CurrentStepData();
	void NotifyStaticPathStepComplete(bool bReachedBeginPlaySkipStep);
	void HandleSlotDefinitionSlotted(class UFortScriptedObjectMovement_SlotDefinition* SlotDefinition);
	float GetStaticPathZOffsetHeight();
	void GetStaticPathTravelingBounds(struct FVector* OutBoxExtent);
	class UStaticMeshComponent* GetScriptedObjectStaticMeshComponent();
	void Editor_TryJumpToStartStep();
	void Editor_ResetObject();
	void Editor_PreviousStep();
	void Editor_NextStep();
	void Editor_DebugLogStaticPathTravelIndex();
	void Editor_ClearResetObjectLocation();
	void ConfigureStaticMeshToSlotDefinition(class UFortScriptedObjectMovement_SlotDefinition* SlotDefinition, class UStaticMeshComponent* StaticMeshComponent);
	void CheatDrawKeyframes();
	void Cheat_NetMulticast_SendDebugTimerInfo(float ServerTimeWhenQueryInvoked, float RemainingTime);
	bool BlockOverlappingStaticPathSteps();
	void BeginMovingToStaticPathNode(struct FScriptedObjectMovement_StaticPathStepData& StepData);
};

// 0x190 (0x3B0 - 0x220)
// Class SOMRuntime.FortScriptedObjectMovement_WorldPhaseSite
class AFortScriptedObjectMovement_WorldPhaseSite : public AActor
{
public:
	uint8                                        Pad_12FC[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFortScriptedObjectMovementPhaseData> Phases;                                            // 0x228(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        NumSimulatenousMovingObjects;                      // 0x238(0x28)(Edit, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        PhaseIntervalSeconds;                              // 0x260(0x28)(Edit, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_12FD[0x20];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScriptedObjectMovement_Grid          BaseGrid;                                          // 0x2A8(0x90)(Transient, NativeAccessSpecifierPrivate)
	struct FScriptedObjectMovement_DynamicPathContext InProgressPath;                                    // 0x338(0x38)(Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<class UFortScriptedObjectMovement_Slot*> LeavingSlotStack;                                  // 0x370(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<class UFortScriptedObjectMovement_Slot*> DestinationSlotStack;                              // 0x380(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<class UFortScriptedObjectMovement_Slot*> OverflowSlotStack;                                 // 0x390(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<class AFortScriptedObjectMovement_MovableObjectBase*> CurrentlyMovingObjects;                            // 0x3A0(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class AFortScriptedObjectMovement_WorldPhaseSite* GetDefaultObj();

};

// 0x10 (0x40 - 0x30)
// Class SOMRuntime.FortScriptedObjectMovement_SlotDefinition
class UFortScriptedObjectMovement_SlotDefinition : public UPrimaryDataAsset
{
public:
	TSubclassOf<class AFortScriptedObjectMovement_MovableObjectBase> ScriptedObjectClass;                               // 0x30(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ObjectScale;                                       // 0x38(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1300[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortScriptedObjectMovement_SlotDefinition* GetDefaultObj();

};

// 0x20 (0x500 - 0x4E0)
// Class SOMRuntime.FortScriptedObjectMovement_Slot
class UFortScriptedObjectMovement_Slot : public UStaticMeshComponent
{
public:
	class UFortScriptedObjectMovement_SlotDefinition* SlotDefinition;                                    // 0x4E0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        ObjectRemoveOrder;                                 // 0x4E8(0x4)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1304[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortScriptedObjectMovement_MovableObjectBase* SlottedObject;                                     // 0x4F0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1305[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortScriptedObjectMovement_Slot* GetDefaultObj();

};

// 0x20 (0x240 - 0x220)
// Class SOMRuntime.FortScriptedObjectMovement_Structure
class AFortScriptedObjectMovement_Structure : public AActor
{
public:
	TArray<class UFortScriptedObjectMovement_Slot*> CachedObjectSlots;                                 // 0x220(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TArray<class UFortScriptedObjectMovement_SlotDefinition*> CachedSlotDefinitions;                             // 0x230(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class AFortScriptedObjectMovement_Structure* GetDefaultObj();

};

// 0x10 (0x40 - 0x30)
// Class SOMRuntime.ScriptedObjectMovement_CalendarCheatDefinition
class UScriptedObjectMovement_CalendarCheatDefinition : public UPrimaryDataAsset
{
public:
	TArray<struct FScriptedObjectMovement_StaticPathCalendarCheatDefinitionData> CheatCalendarEvents;                               // 0x30(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UScriptedObjectMovement_CalendarCheatDefinition* GetDefaultObj();

};

}


