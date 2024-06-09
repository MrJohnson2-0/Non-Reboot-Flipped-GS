#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0x1 - 0x0)
// ScriptStruct SOMRuntime.ScriptedObjectMovement_AStarGraphWrapper
struct FScriptedObjectMovement_AStarGraphWrapper
{
public:
	uint8                                        Pad_1309[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct SOMRuntime.ScriptedObjectMovement_DynamicPathContext
struct FScriptedObjectMovement_DynamicPathContext
{
public:
	class UFortScriptedObjectMovement_Slot*      SourceSlot;                                        // 0x0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortScriptedObjectMovement_Slot*      DestinationSlot;                                   // 0x8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TScriptInterface<class IFortScriptedObjectMovement_GridProviderInterface> GridProvider;                                      // 0x10(0x10)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_130B[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x90 (0x90 - 0x0)
// ScriptStruct SOMRuntime.ScriptedObjectMovement_Grid
struct FScriptedObjectMovement_Grid
{
public:
	uint8                                        Pad_130C[0x50];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CellSize;                                          // 0x50(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_130D[0x34];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct SOMRuntime.FortScriptedObjectMovementPhaseData
struct FFortScriptedObjectMovementPhaseData
{
public:
	TArray<class AFortScriptedObjectMovement_Structure*> Structures;                                        // 0x0(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct SOMRuntime.ScriptedObjectMovement_StaticPathStepData
struct FScriptedObjectMovement_StaticPathStepData
{
public:
	struct FTransform                            StartWorldTransform;                               // 0x0(0x30)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            EndWorldTransform;                                 // 0x30(0x30)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        MasterPathStartSplinePoint;                        // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SubSplineStartPoint;                               // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MoveAtServerTimeSecs;                              // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1311[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortScriptedObjectMovement_MovableObjectBase* PathTraveler;                                      // 0x70(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1312[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          MoveStyleTag;                                      // 0x80(0x8)(BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTeleport;                                         // 0x88(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsSkipStep;                                       // 0x89(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1314[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct SOMRuntime.StaticPathCalendarSplinePointGroup
struct FStaticPathCalendarSplinePointGroup
{
public:
	uint8                                        Pad_1315[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct SOMRuntime.ScriptedObjectMovement_StaticPathSplineInputKeyData
struct FScriptedObjectMovement_StaticPathSplineInputKeyData
{
public:
	bool                                         bLockGeneratedData;                                // 0x0(0x1)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1317[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CalendarEvent;                                     // 0x8(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PauseCalendarEvent;                                // 0x18(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct SOMRuntime.ScriptedObjectMovement_StepMetaData
struct FScriptedObjectMovement_StepMetaData
{
public:
	bool                                         bSkipStep;                                         // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct SOMRuntime.ScriptedObjectMovement_StaticPathTravelerData
struct FScriptedObjectMovement_StaticPathTravelerData
{
public:
	TArray<class USplineComponent*>              GeneratedSplinesArray;                             // 0x0(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<struct FScriptedObjectMovement_StepMetaData> StepMetaData;                                      // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	class USplineComponent*                      EnterSpline;                                       // 0x20(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USplineComponent*                      ExitSpline;                                        // 0x28(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AFortScriptedObjectMovement_MovableObjectBase* PathTraveler;                                      // 0x30(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TravelOrder;                                       // 0x38(0x4)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LateralOffset;                                     // 0x3C(0x4)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLocked;                                           // 0x40(0x1)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLockEnterSpline;                                  // 0x41(0x1)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLockExitSpline;                                   // 0x42(0x1)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_131D[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               TravelerBounds;                                    // 0x44(0xC)(Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_131E[0x60];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct SOMRuntime.ScriptedObjectMovementCalendarEventData
struct FScriptedObjectMovementCalendarEventData
{
public:
	uint8                                        Pad_131F[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct SOMRuntime.ScriptedObjectMovement_StaticPathCalendarCheatDefinitionData
struct FScriptedObjectMovement_StaticPathCalendarCheatDefinitionData
{
public:
	class FString                                EventName;                                         // 0x0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DurationTimeSeconds;                               // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DelayStartTimeSeconds;                             // 0x14(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


