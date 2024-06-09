#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EFakeKillRelevancyPlayerKillStep : uint8
{
	Initiated                      = 0,
	BlueprintNotified              = 1,
	VisualsPerformed               = 2,
	EFakeKillRelevancyPlayerKillStep_MAX = 3,
};

enum class EMutatorMovementMode : uint8
{
	None                           = 0,
	BuffetBubbles                  = 19,
	BuffetBubblesIntro             = 20,
	BuffetFlying                   = 21,
	BuffetFlyingRicochet           = 22,
	EMutatorMovementMode_MAX       = 23,
};

enum class ESpecialEventPhaseState : uint8
{
	Unregistered                   = 0,
	Inactive                       = 1,
	Active                         = 2,
	Deactivated                    = 3,
	ESpecialEventPhaseState_MAX    = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x18 - 0x0)
// ScriptStruct SpecialEventGameplayRuntime.SpecialClientEvent
struct FSpecialClientEvent
{
public:
	class AFortPlayerControllerAthena*           PlayerController;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeSeconds;                                       // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          EventTag;                                          // 0xC(0x8)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct SpecialEventGameplayRuntime.FakeKillRelevancyVictim
struct FFakeKillRelevancyVictim
{
public:
	class AFortPlayerStateAthena*                PlayerState;                                       // 0x0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               DeathLocation;                                     // 0x8(0xC)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1297[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x2C (0x38 - 0xC)
// ScriptStruct SpecialEventGameplayRuntime.FakeKillRelevancyPlayerDataEntry
struct FFakeKillRelevancyPlayerDataEntry : public FFastArraySerializerItem
{
public:
	uint8                                        Pad_129D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFakeKillRelevancyVictim>      Victims;                                           // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FGameplayTag                          Reason;                                            // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PhaseNum;                                          // 0x28(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        WaveNum;                                           // 0x2C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RelevancyDelay;                                    // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RelevancyChangeServerWorldTime;                    // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x120 - 0x108)
// ScriptStruct SpecialEventGameplayRuntime.FakeKillRelevancyPlayerDataArray
struct FFakeKillRelevancyPlayerDataArray : public FFastArraySerializer
{
public:
	TArray<struct FFakeKillRelevancyPlayerDataEntry> Entries;                                           // 0x108(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	class UFortControllerComponent_FakeKillRelevancy* ControllerComponent;                               // 0x118(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct SpecialEventGameplayRuntime.FakeKillRelevancyPhaseData
struct FFakeKillRelevancyPhaseData
{
public:
	uint8                                        Pad_12A2[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          Reason;                                            // 0x10(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumWavesExpected;                                  // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        WaveNum;                                           // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RelevancyDelay;                                    // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12A4[0x14];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct SpecialEventGameplayRuntime.FakeKillRelevancyBucket
struct FFakeKillRelevancyBucket
{
public:
	uint8                                        Pad_12A5[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct SpecialEventGameplayRuntime.FakeKillRelevancySupergroup
struct FFakeKillRelevancySupergroup
{
public:
	uint8                                        Pad_12A7[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct SpecialEventGameplayRuntime.FakeKillRelevancyTestParameters
struct FFakeKillRelevancyTestParameters
{
public:
	uint8                                        Pad_12A9[0x38];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct SpecialEventGameplayRuntime.SpecialEventMapData
struct FSpecialEventMapData
{
public:
	struct FGameplayTag                          MapTag;                                            // 0x0(0x8)(Edit, DisableEditOnInstance, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          MapNames;                                          // 0x8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, RepSkip, NativeAccessSpecifierPublic)
	bool                                         bReplicatedHasBeenUnloaded;                        // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasBeenUnloaded;                                  // 0x19(0x1)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12AB[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct SpecialEventGameplayRuntime.FortDelayRTMMData
struct FFortDelayRTMMData
{
public:
	bool                                         bDelayRTTM;                                        // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12AE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinRTTMDelay;                                      // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxRTTMDelay;                                      // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Timestamp;                                         // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct SpecialEventGameplayRuntime.FortSpecialEventGEData
struct FFortSpecialEventGEData
{
public:
	TSubclassOf<class UGameplayEffect>           GameplayEffect;                                    // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Level;                                             // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12B2[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct SpecialEventGameplayRuntime.FortSpecialEventOverrideParts
struct FFortSpecialEventOverrideParts
{
public:
	TArray<class UCustomCharacterPart*>          OverrideParts;                                     // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FFortSpecialEventGEData               GameplayEffectToApplyOnSwap;                       // 0x10(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct SpecialEventGameplayRuntime.BuffetBubblesReplicatedData
struct FBuffetBubblesReplicatedData
{
public:
	struct FTransform                            RelativeTransform;                                 // 0x0(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               RelativeVelocity;                                  // 0x30(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12B4[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x80 - 0x0)
// ScriptStruct SpecialEventGameplayRuntime.BuffetBubblesDebugData
struct FBuffetBubblesDebugData
{
public:
	uint8                                        Pad_12B5[0x80];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct SpecialEventGameplayRuntime.BuffetFlyingRicochetReplicatedData
struct FBuffetFlyingRicochetReplicatedData
{
public:
	float                                        StartTime;                                         // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Velocity;                                          // 0x4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct SpecialEventGameplayRuntime.SpecialEventAudioHapticsAction
struct FSpecialEventAudioHapticsAction
{
public:
	float                                        LoudnessFloor;                                     // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LoudnessCeiling;                                   // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HapticsIntensity;                                  // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ChannelIndex;                                      // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAffectsLeftLarge : 1;                             // Mask: 0x1, PropSize: 0x10x10(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAffectsLeftSmall : 1;                             // Mask: 0x2, PropSize: 0x10x10(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAffectsRightLarge : 1;                            // Mask: 0x4, PropSize: 0x10x10(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAffectsRightSmall : 1;                            // Mask: 0x8, PropSize: 0x10x10(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12BA[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct SpecialEventGameplayRuntime.PhaseLevelEntry
struct FPhaseLevelEntry
{
public:
	TSoftObjectPtr<class UWorld>                 LevelToLoad;                                       // 0x0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                LevelName;                                         // 0x28(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLoadLevelOnScriptStart;                           // 0x38(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLevelStartsVisible;                               // 0x39(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUnloadLevelOnPhaseEnd;                            // 0x3A(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bExcludeFromServerPreload;                         // 0x3B(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12BE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 MakeVisibleAtPhaseTags;                            // 0x40(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 UnloadLevelAtPhaseTags;                            // 0x60(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FVector                               Location;                                          // 0x80(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Rotation;                                          // 0x8C(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class ULevelStreamingDynamic*                LevelInstance;                                     // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct SpecialEventGameplayRuntime.PhaseInfo
struct FPhaseInfo
{
public:
	TSubclassOf<class ASpecialEventPhase>        PhaseActorClass;                                   // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          PhaseTag;                                          // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SequenceTime;                                      // 0x10(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSetRelevancyMode;                                 // 0x14(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESpecialRelevancyMode             RelevancyMode;                                     // 0x15(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12C1[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NumOfSquadsInRelevancyGroup;                       // 0x18(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12C2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 RequireLevelsFromPhaseTags;                        // 0x20(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	bool                                         bStartNextPhaseOnPhaseFinished;                    // 0x40(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGarbageCollectAtPhaseStart;                       // 0x41(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12C3[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FPhaseLevelEntry>              Levels;                                            // 0x48(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class ASpecialEventPhase*                    PhaseActor;                                        // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


