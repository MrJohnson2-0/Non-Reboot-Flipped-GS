#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EMoleTaskInterruptionType : uint8
{
	RestartTask                    = 0,
	DisableTask                    = 1,
	EMoleTaskInterruptionType_MAX  = 2,
};

enum class EMoleTaskObjectiveStatus : uint8
{
	Unresolved                     = 0,
	SuccessfulCompletion           = 1,
	FailedCompletion               = 2,
	EMoleTaskObjectiveStatus_MAX   = 3,
};

enum class EMolePlayerLeftReason : uint8
{
	PlayerLeft                     = 0,
	PlayerKickedNoPawn             = 1,
	EMolePlayerLeftReason_MAX      = 2,
};

enum class EMoleSabotageInterruptionType : uint8
{
	Interrupt                      = 0,
	Pause                          = 1,
	EMoleSabotageInterruptionType_MAX = 2,
};

enum class EMoleLightsMode : uint8
{
	Standard                       = 0,
	Emergency                      = 1,
	Disabled                       = 2,
	EMoleLightsMode_MAX            = 3,
};

enum class EMoleTaskLeashType : uint8
{
	CollisionOverlap               = 0,
	DistanceFromActorLocation      = 1,
	EMoleTaskLeashType_MAX         = 2,
};

enum class EMoleObjectiveCriteriaFloatType : uint8
{
	FloatValue                     = 0,
	UseObjectiveTaskActorCount     = 1,
	ExplicitActorCount             = 2,
	EMoleObjectiveCriteriaFloatType_MAX = 3,
};

enum class EMoleTaskLogicSubobjectEventPolicy : uint8
{
	None                           = 0,
	OnPhaseEnd                     = 1,
	OnTaskInterruption             = 2,
	OnTaskRemoval                  = 4,
	OnTaskCompletion               = 8,
	EMoleTaskLogicSubobjectEventPolicy_MAX = 9,
};

enum class EMoleNewTaskNotificationType : uint8
{
	None                           = 0,
	NewTaskOnly                    = 1,
	TaskCompletionAndNewTask       = 2,
	EMoleNewTaskNotificationType_MAX = 3,
};

enum class EMoleRole : uint8
{
	Unknown                        = 0,
	Ally                           = 1,
	Enemy                          = 2,
	EMoleRole_MAX                  = 3,
};

enum class EEmergencyMeetingCause : uint8
{
	None                           = 0,
	BodyReported                   = 1,
	MeetingCalled                  = 2,
	EEmergencyMeetingCause_MAX     = 3,
};

enum class EVoteType : uint8
{
	None                           = 0,
	Skip                           = 1,
	Vote                           = 2,
	EVoteType_MAX                  = 3,
};

enum class EMoleVoiceChannelState : uint8
{
	None                           = 0,
	Lobby                          = 1,
	Gameplay                       = 2,
	Voting                         = 3,
	Gameover                       = 4,
	EMoleVoiceChannelState_MAX     = 5,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x1C (0x28 - 0xC)
// ScriptStruct MoleGameRuntime.PlayerTaskStateData
struct FPlayerTaskStateData : public FFastArraySerializerItem
{
public:
	uint8                                        ChangeFlags;                                       // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B06[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AController*                           UserController;                                    // 0x10(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  TaskInteractionInfoRowName;                        // 0x18(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bHasPermission : 1;                                // Mask: 0x1, PropSize: 0x10x20(0x1)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B07[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x120 - 0x108)
// ScriptStruct MoleGameRuntime.PlayerTaskStateDataArray
struct FPlayerTaskStateDataArray : public FFastArraySerializer
{
public:
	class UMoleTaskLinkComponent*                CachedTaskComponent;                               // 0x108(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPlayerTaskStateData>          TaskStateArray;                                    // 0x110(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct MoleGameRuntime.MoleObjectiveValue
struct FMoleObjectiveValue
{
public:
	float                                        Value;                                             // 0x0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ForceRepCount;                                     // 0x4(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B08[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MoleGameRuntime.MoleAFKData
struct FMoleAFKData
{
public:
	class APlayerState*                          Player;                                            // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeUntilConfirmedAFK;                             // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B0A[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct MoleGameRuntime.MoleQuickChatMessageSummary
struct FMoleQuickChatMessageSummary
{
public:
	class AFortPlayerController*                 SenderController;                                  // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B0C[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// ScriptStruct MoleGameRuntime.MoleAnalyticsIntegerStat
struct FMoleAnalyticsIntegerStat
{
public:
	uint8                                        Pad_3B0D[0x58];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// ScriptStruct MoleGameRuntime.MoleAnalyticsFloatStat
struct FMoleAnalyticsFloatStat
{
public:
	uint8                                        Pad_3B0E[0x58];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// ScriptStruct MoleGameRuntime.MoleQuickChatMessageDetails
struct FMoleQuickChatMessageDetails
{
public:
	uint8                                        Pad_3B0F[0x28];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerState*                          PlayerA;                                           // 0x28(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerState*                          PlayerB;                                           // 0x30(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerState*                          PlayerC;                                           // 0x38(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B10[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct MoleGameRuntime.MoleAssetLoadData
struct FMoleAssetLoadData
{
public:
	struct FPrimaryAssetType                     PrimaryAssetType;                                  // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x70 - 0x8)
// ScriptStruct MoleGameRuntime.MoleBindingData
struct FMoleBindingData : public FTableRowBase
{
public:
	class FName                                  KBMActionName;                                     // 0x8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  GamepadActionName;                                 // 0x10(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  BindingLabel;                                      // 0x18(0x18)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class FText                                  BindingDescription;                                // 0x30(0x18)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	bool                                         bIsSaboteurBinding;                                // 0x48(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bKBMOnly;                                          // 0x49(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGamepadOnly;                                      // 0x4A(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B11[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CategoryLabel;                                     // 0x50(0x18)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	bool                                         bIsAxisMapping;                                    // 0x68(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B12[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        InputScale;                                        // 0x6C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct MoleGameRuntime.MoleTaskDescription
struct FMoleTaskDescription
{
public:
	struct FGameplayTagContainer                 TaskDescription;                                   // 0x0(0x20)(Edit, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct MoleGameRuntime.MoleRolePreference
struct FMoleRolePreference
{
public:
	enum class EMoleRole                         RolePreference;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct MoleGameRuntime.MoleImpostorBias
struct FMoleImpostorBias
{
public:
	int32                                        ImpostorBias;                                      // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MoleGameRuntime.MoleLevelTaskRequest
struct FMoleLevelTaskRequest
{
public:
	TArray<struct FMoleTaskDescription>          SupportedTaskDescriptions;                         // 0x0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct MoleGameRuntime.MoleMessageLobbyCountdown
struct FMoleMessageLobbyCountdown
{
public:
	int32                                        SecondsRemaining;                                  // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct MoleGameRuntime.MoleGameplayInputEventData
struct FMoleGameplayInputEventData
{
public:
	struct FGameplayTag                          InputActionTag;                                    // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AFortPlayerControllerGameplay*         UserController;                                    // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPressEvent;                                       // 0x10(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B13[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MoleGameRuntime.MoleGhostInfo
struct FMoleGhostInfo
{
public:
	class APlayerState*                          GhostPlayerState;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWasVotedOut;                                      // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B14[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x2 (0x2 - 0x0)
// ScriptStruct MoleGameRuntime.MoleDeathInformation
struct FMoleDeathInformation
{
public:
	bool                                         bIsGhost;                                          // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWasVotedOut;                                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct MoleGameRuntime.MolePlayerTeleportedInfo
struct FMolePlayerTeleportedInfo
{
public:
	class APlayerState*                          TeleportedPlayerState;                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct MoleGameRuntime.MolePlayerTeleportedReplicatedData
struct FMolePlayerTeleportedReplicatedData
{
public:
	struct FEventMessageTag                      MessageTag;                                        // 0x0(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReplicationCount;                                  // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct MoleGameRuntime.MolePlayerCosmeticData
struct FMolePlayerCosmeticData
{
public:
	class UAthenaCharacterItemDefinition*        CharacterDefinition;                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FMcpVariantChannelInfo>        CharacterVariantChannels;                          // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	class UAthenaBackpackItemDefinition*         Backpack;                                          // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct MoleGameRuntime.MoleActiveTaskStateHandle
struct FMoleActiveTaskStateHandle
{
public:
	int32                                        Handle;                                            // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x7C (0x88 - 0xC)
// ScriptStruct MoleGameRuntime.MoleActiveTaskState
struct FMoleActiveTaskState : public FFastArraySerializerItem
{
public:
	struct FMoleActiveTaskStateHandle            Handle;                                            // 0xC(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMoleTaskDataAsset*                    TaskAsset;                                         // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMoleTaskLogic*                        TaskLogic;                                         // 0x18(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          TaskStateMachineId;                                // 0x20(0x8)(RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortAbilitySetHandle                 AbilitySetHandle;                                  // 0x28(0x38)(RepSkip, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGuid                                 AbilitySetInputGuid;                               // 0x60(0x10)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FGuid>                         GrantedItemGuids;                                  // 0x70(0x10)(ZeroConstructor, RepSkip, NativeAccessSpecifierPublic)
	enum class EMoleNewTaskNotificationType      NotificationType;                                  // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B15[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x148 - 0x108)
// ScriptStruct MoleGameRuntime.MoleActiveTaskStateArray
struct FMoleActiveTaskStateArray : public FFastArraySerializer
{
public:
	uint8                                        Pad_3B16[0x30];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FMoleActiveTaskState>          TaskStateArray;                                    // 0x138(0x10)(ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
};

// 0x14 (0x20 - 0xC)
// ScriptStruct MoleGameRuntime.MoleCompletedTask
struct FMoleCompletedTask : public FFastArraySerializerItem
{
public:
	uint8                                        Pad_3B17[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMoleTaskDataAsset*                    TaskAsset;                                         // 0x10(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMoleActiveTaskStateHandle            StateHandle;                                       // 0x18(0x4)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B18[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x130 - 0x108)
// ScriptStruct MoleGameRuntime.MoleCompletedTaskArray
struct FMoleCompletedTaskArray : public FFastArraySerializer
{
public:
	uint8                                        Pad_3B19[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FMoleCompletedTask>            CompletedTaskArray;                                // 0x120(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct MoleGameRuntime.MoleEnemyChangedEventData
struct FMoleEnemyChangedEventData
{
public:
	class AActor*                                EnemyTargetActor;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct MoleGameRuntime.MoleTaskLeashData
struct FMoleTaskLeashData
{
public:
	class UMoleTaskDataAsset*                    TaskDataAsset;                                     // 0x0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                LeashActor;                                        // 0x8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DistanceSquared;                                   // 0x10(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B1A[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MoleGameRuntime.MolePlayerVisibilityInfo
struct FMolePlayerVisibilityInfo
{
public:
	uint8                                        Pad_3B1B[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct MoleGameRuntime.MoleQuickChatMessageInfo
struct FMoleQuickChatMessageInfo
{
public:
	class APlayerState*                          Sender;                                            // 0x0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CategoryIndex;                                     // 0x8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ActionIndex;                                       // 0xC(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MessageIndex;                                      // 0x10(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          SectionALocationTag;                               // 0x14(0x8)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          SectionBLocationTag;                               // 0x1C(0x8)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          SectionCLocationTag;                               // 0x24(0x8)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B1C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerState*                          SectionASelectedPlayer;                            // 0x30(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerState*                          SectionBSelectedPlayer;                            // 0x38(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerState*                          SectionCSelectedPlayer;                            // 0x40(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsSelfSelected;                                   // 0x48(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        DummyCount;                                        // 0x49(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B1D[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct MoleGameRuntime.MoleSabotageStatus
struct FMoleSabotageStatus
{
public:
	struct FGameplayTag                          SabotageTag;                                       // 0x0(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsActive;                                         // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B1E[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct MoleGameRuntime.MoleLightingMode
struct FMoleLightingMode
{
public:
	enum class EMoleLightsMode                   LightingMode;                                      // 0x0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct MoleGameRuntime.MoleStateGameOverEventData
struct FMoleStateGameOverEventData
{
public:
	struct FGameplayTag                          GameOverReason;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMoleRole                         WinningRole;                                       // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B1F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class APlayerState*>                  WinningPlayerStates;                               // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MoleGameRuntime.MoleRevealedEnemies
struct FMoleRevealedEnemies
{
public:
	TArray<class APlayerState*>                  EnemyPlayerStates;                                 // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x40 (0x48 - 0x8)
// ScriptStruct MoleGameRuntime.TaskInteractionInfo
struct FTaskInteractionInfo : public FTableRowBase
{
public:
	class FText                                  PrimaryInteractionText;                            // 0x8(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  SecondaryInteractionText;                          // 0x20(0x18)(Edit, NativeAccessSpecifierPublic)
	uint8                                        bCanPrimaryInteract : 1;                           // Mask: 0x1, PropSize: 0x10x38(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCanSecondaryInteract : 1;                         // Mask: 0x2, PropSize: 0x10x38(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_28D : 6;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3B20[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PrimaryInteractionSpeed;                           // 0x3C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SecondaryInteractionSpeed;                         // 0x40(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B21[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct MoleGameRuntime.MoleObjectiveCriteriaFloat
struct FMoleObjectiveCriteriaFloat
{
public:
	enum class EMoleObjectiveCriteriaFloatType   ValueType;                                         // 0x0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3B22[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScalableFloat                        FlatValue;                                         // 0x8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTag                          ActorRootTag;                                      // 0x30(0x8)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bCapValueByObjectiveTaskActorCount : 1;            // Mask: 0x1, PropSize: 0x10x38(0x1)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bShowCapValueOption : 1;                           // Mask: 0x2, PropSize: 0x10x38(0x1)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3B23[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct MoleGameRuntime.MoleTaskLogicPhase
struct FMoleTaskLogicPhase
{
public:
	TArray<class UMoleTaskLogicAction*>          Actions;                                           // 0x0(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TArray<class UMoleTaskLogicObjective*>       Objectives;                                        // 0x10(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_3B24[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct MoleGameRuntime.MoleTaskMappingElement
struct FMoleTaskMappingElement
{
public:
	class FString                                TaskDataContentPackageGuid;                        // 0x0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FMoleTaskDescription>          SupportedTaskDescriptions;                         // 0x10(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct MoleGameRuntime.MoleTaskScoreEventData
struct FMoleTaskScoreEventData
{
public:
	float                                        CurrentScore;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ScoreGoal;                                         // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MoleGameRuntime.MoleTaskTrackingData
struct FMoleTaskTrackingData
{
public:
	class UMoleTaskDataAsset*                    TaskAsset;                                         // 0x0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        DistributionCountRemaining;                        // 0x8(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bInUse : 1;                                        // Mask: 0x1, PropSize: 0x10x9(0x1)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bHasBeenGrantedBefore : 1;                         // Mask: 0x2, PropSize: 0x10x9(0x1)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B25[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MoleGameRuntime.MoleTaskPointData
struct FMoleTaskPointData
{
public:
	class AMoleTaskPoint*                        TaskPoint;                                         // 0x0(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsVisible;                                        // 0x8(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B26[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct MoleGameRuntime.MoleNewTaskNotificationData
struct FMoleNewTaskNotificationData
{
public:
	class FText                                  TaskTitle;                                         // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	enum class EMoleNewTaskNotificationType      NotificationType;                                  // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B27[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct MoleGameRuntime.MoleTaskMessagePayload
struct FMoleTaskMessagePayload
{
public:
	class UMoleTaskDataAsset*                    TaskAsset;                                         // 0x0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AFortPlayerState*                      AssociatedPlayerState;                             // 0x8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AFortPlayerController*                 AssociatedPlayerController;                        // 0x10(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B28[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// ScriptStruct MoleGameRuntime.MoleTimerInfo
struct FMoleTimerInfo
{
public:
	float                                        ServerTimeFinish;                                  // 0x0(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct MoleGameRuntime.MolePlayerContext
struct FMolePlayerContext
{
public:
	class APlayerState*                          PlayerContext;                                     // 0x0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct MoleGameRuntime.MoleEmergencyMeetingData
struct FMoleEmergencyMeetingData
{
public:
	enum class EEmergencyMeetingCause            MeetingCause;                                      // 0x0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B29[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerState*                          MeetingCaller;                                     // 0x8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerState*                          BodyFound;                                         // 0x10(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          LocationTag;                                       // 0x18(0x8)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct MoleGameRuntime.MoleVote
struct FMoleVote
{
public:
	enum class EVoteType                         VoteType;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B2A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPlayerState*                      VotingPlayer;                                      // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AFortPlayerState*                      AccusedPlayer;                                     // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MoleGameRuntime.MoleVoterList
struct FMoleVoterList
{
public:
	TArray<class APlayerState*>                  Voters;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct MoleGameRuntime.MoleVotingSummary
struct FMoleVotingSummary
{
public:
	TMap<class APlayerState*, struct FMoleVoterList> VotingResults;                                     // 0x0(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FMoleVoterList                        SkippedVotes;                                      // 0x50(0x10)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct MoleGameRuntime.TaskGenericPayload
struct FTaskGenericPayload
{
public:
	struct FGameplayTag                          EventTag;                                          // 0x0(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          ContextTag;                                        // 0x8(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               ContextObject;                                     // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 UserTags;                                          // 0x18(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class UObject*                               UserObject;                                        // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct MoleGameRuntime.MoleBlockedInput
struct FMoleBlockedInput
{
public:
	class FName                                  InputActionName;                                   // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsAxis;                                           // 0x8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B2B[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct MoleGameRuntime.MoleHoldBinding
struct FMoleHoldBinding
{
public:
	class FName                                  ActionBindingName;                                 // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  InvertedActionBindingName;                         // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        HoldTime;                                          // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3B2C[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct MoleGameRuntime.MoleGenericMessagePayload
struct FMoleGenericMessagePayload
{
public:
	struct FGameplayTagContainer                 ContextTags;                                       // 0x0(0x20)(BlueprintVisible, Transient, NativeAccessSpecifierPublic)
	class AFortPlayerState*                      SourcePlayerState;                                 // 0x20(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AFortPlayerState*                      TargetPlayerState;                                 // 0x28(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct MoleGameRuntime.MoleVoteResolutionData
struct FMoleVoteResolutionData
{
public:
	enum class EVoteType                         VoteType;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B2D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerState*                          EjectedPlayer;                                     // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortItemDefinition*                   EjectedPlayerItemDefinition;                       // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Votes;                                             // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsEnemy;                                          // 0x1C(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSkippedDueToEqualVotesAndSkips;                   // 0x1D(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B2E[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct MoleGameRuntime.MoleRoleAssignedMessagePayload
struct FMoleRoleAssignedMessagePayload
{
public:
	bool                                         bIsImpostor;                                       // 0x0(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B2F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPlayerState*                      LocalPlayerState;                                  // 0x8(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AFortPlayerState*>              TeamPlayerStates;                                  // 0x10(0x10)(BlueprintVisible, ZeroConstructor, Transient, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct MoleGameRuntime.MoleUIVisibilityData
struct FMoleUIVisibilityData
{
public:
	bool                                         bVisible;                                          // 0x0(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B30[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PlayRate;                                          // 0x4(0x4)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct MoleGameRuntime.MoleTaskUIVisibilityData
struct FMoleTaskUIVisibilityData
{
public:
	bool                                         bVisible;                                          // 0x0(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B31[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 VisibleTaskExceptions;                             // 0x8(0x20)(BlueprintVisible, Transient, NativeAccessSpecifierPublic)
	float                                        PlayRate;                                          // 0x28(0x4)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B32[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct MoleGameRuntime.FortCinematicBlackscreenData
struct FFortCinematicBlackscreenData
{
public:
	bool                                         bFadeToBlack;                                      // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B33[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FadeTime;                                          // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHoldBlack;                                        // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B34[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MoleGameRuntime.FortCinematicElement
struct FFortCinematicElement
{
public:
	struct FGameplayTag                          ElementType;                                       // 0x0(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          ElementState;                                      // 0x8(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct MoleGameRuntime.FortCinematicState
struct FFortCinematicState
{
public:
	struct FGameplayTag                          StateId;                                           // 0x0(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FFortCinematicElement>         CinematicElements;                                 // 0x8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bSequenceStarted;                                  // 0x18(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B35[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SequenceDuration;                                  // 0x1C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        IntroFadeInBlackscreenTime;                        // 0x20(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        IntroFadeOutBlackscreenTime;                       // 0x24(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OutroFadeOutBlackscreenTime;                       // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B36[0x1C];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

}


