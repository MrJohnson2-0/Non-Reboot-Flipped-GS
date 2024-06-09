#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x8 - 0x0)
// Function MoleGameRuntime.FortCinematicComponent.RemoveCinematicState
struct UFortCinematicComponent_RemoveCinematicState_Params
{
public:
	struct FGameplayTag                          StateId;                                           // 0x0(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function MoleGameRuntime.FortCinematicComponent.PushCinematicState
struct UFortCinematicComponent_PushCinematicState_Params
{
public:
	struct FFortCinematicState                   InState;                                           // 0x0(0x48)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function MoleGameRuntime.FortCinematicComponent.IsCinematicStateActive
struct UFortCinematicComponent_IsCinematicStateActive_Params
{
public:
	struct FGameplayTag                          StateTag;                                          // 0x0(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_393A[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function MoleGameRuntime.FortCinematicComponent.FadeToBlackscreen
struct UFortCinematicComponent_FadeToBlackscreen_Params
{
public:
	float                                        InFadeTime;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInHold;                                           // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_393B[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function MoleGameRuntime.FortCinematicComponent.FadeFromBlackscreen
struct UFortCinematicComponent_FadeFromBlackscreen_Params
{
public:
	float                                        InFadeTime;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MoleGameRuntime.MoleAFKComponent.OnPlayerLeftPOI
struct UMoleAFKComponent_OnPlayerLeftPOI_Params
{
public:
	class AActor*                                OverlapingVolume;                                  // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                EnteringActor;                                     // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MoleGameRuntime.MoleAFKComponent.OnPlayerEnteredPOI
struct UMoleAFKComponent_OnPlayerEnteredPOI_Params
{
public:
	class AActor*                                OverlapingVolume;                                  // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                EnteringActor;                                     // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MoleGameRuntime.MoleAFKComponent.IsPlayerAFK
struct UMoleAFKComponent_IsPlayerAFK_Params
{
public:
	class APlayerState*                          Player;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3945[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function MoleGameRuntime.MoleAFKComponent.IsControllerAFK
struct UMoleAFKComponent_IsControllerAFK_Params
{
public:
	class AFortPlayerController*                 FortPC;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3947[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function MoleGameRuntime.MoleAFKComponent.HasEverBeenAFKForTooLong
struct UMoleAFKComponent_HasEverBeenAFKForTooLong_Params
{
public:
	class AFortPlayerController*                 FortPC;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_394A[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function MoleGameRuntime.MoleAFKComponent.HasEverBeenAFK
struct UMoleAFKComponent_HasEverBeenAFK_Params
{
public:
	class AFortPlayerController*                 FortPC;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3955[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function MoleGameRuntime.MoleCheatManager.SpawnMoleBots
struct UMoleCheatManager_SpawnMoleBots_Params
{
public:
	int32                                        NumBotsToSpawn;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MoleGameRuntime.MoleCheatManager.GrantTask
struct UMoleCheatManager_GrantTask_Params
{
public:
	class FString                                TaskAssetName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MoleGameRuntime.MoleCheatManager.GoToStateGameover
struct UMoleCheatManager_GoToStateGameover_Params
{
public:
	struct FGameplayTag                          InTag;                                             // 0x0(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MoleGameRuntime.MoleEliminationAbility.ValidatePotentialEliminationTarget
struct UMoleEliminationAbility_ValidatePotentialEliminationTarget_Params
{
public:
	class AFortPlayerPawn*                       PotentialTargetPawn;                               // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3998[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function MoleGameRuntime.MoleGameplayAbility_Voting.OnVotingTargetChanged
struct UMoleGameplayAbility_Voting_OnVotingTargetChanged_Params
{
public:
	class AActor*                                Target;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MoleGameRuntime.MoleGhostMannequin.OnRepresentedPlayerSet
struct AMoleGhostMannequin_OnRepresentedPlayerSet_Params
{
public:
	class APlayerState*                          PlayerState;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MoleGameRuntime.MoleGhostMannequin.GetRepresentedPlayer
struct AMoleGhostMannequin_GetRepresentedPlayer_Params
{
public:
	class APlayerState*                          ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MoleGameRuntime.MoleImpostorBiasComponent.SetRolePreference
struct UMoleImpostorBiasComponent_SetRolePreference_Params
{
public:
	class AFortPlayerController*                 FortPC;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMoleRole                         InRolePreference;                                  // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_39BC[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function MoleGameRuntime.MoleImpostorBiasComponent.IsImpostorBiasEnabled
struct UMoleImpostorBiasComponent_IsImpostorBiasEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MoleGameRuntime.MolePawnComponent.HandlePawnCustomizationComplete
struct UMolePawnComponent_HandlePawnCustomizationComplete_Params
{
public:
	class AFortPlayerPawn*                       Pawn;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MoleGameRuntime.MolePlayerStateComponent.SetMoleKiller
struct UMolePlayerStateComponent_SetMoleKiller_Params
{
public:
	class APlayerState*                          Victim;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerState*                          Killer;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MoleGameRuntime.MolePlayerStateComponent.IsMolePlayerDisconnected
struct UMolePlayerStateComponent_IsMolePlayerDisconnected_Params
{
public:
	class APlayerState*                          PlayerState;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_39F7[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function MoleGameRuntime.MolePlayerStateComponent.IsMoleGhost
struct UMolePlayerStateComponent_IsMoleGhost_Params
{
public:
	class APlayerState*                          PlayerState;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_39FA[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function MoleGameRuntime.MolePlayerStateComponent.IsMoleEnemyFor
struct UMolePlayerStateComponent_IsMoleEnemyFor_Params
{
public:
	class APlayerState*                          PlayerState;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerState*                          TargetPlayerState;                                 // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_39FD[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function MoleGameRuntime.MolePlayerStateComponent.IsMoleEnemy
struct UMolePlayerStateComponent_IsMoleEnemy_Params
{
public:
	class AActor*                                InActor;                                           // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_39FF[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function MoleGameRuntime.MolePlayerStateComponent.IsMoleEliminated
struct UMolePlayerStateComponent_IsMoleEliminated_Params
{
public:
	class APlayerState*                          PlayerState;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A02[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function MoleGameRuntime.MolePlayerStateComponent.GetPlayerNumber
struct UMolePlayerStateComponent_GetPlayerNumber_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MoleGameRuntime.MolePlayerStateComponent.GetMoleRole
struct UMolePlayerStateComponent_GetMoleRole_Params
{
public:
	class AController*                           User;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMoleRole                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A08[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function MoleGameRuntime.MolePlayerStateComponent.GetMolePlayerItemDefinition
struct UMolePlayerStateComponent_GetMolePlayerItemDefinition_Params
{
public:
	class APlayerState*                          PlayerState;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortItemDefinition*                   ReturnValue;                                       // 0x8(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function MoleGameRuntime.MolePlayerStateComponent.GetMolePlayerCosmeticData
struct UMolePlayerStateComponent_GetMolePlayerCosmeticData_Params
{
public:
	class APlayerState*                          PlayerState;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMolePlayerCosmeticData               OutPlayerCosmeticData;                             // 0x8(0x20)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MoleGameRuntime.MolePlayerStateComponent.BlueprintSetIsPlayerGhost
struct UMolePlayerStateComponent_BlueprintSetIsPlayerGhost_Params
{
public:
	class APlayerState*                          PlayerState;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsPlayerGhost;                                    // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A0B[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// Function MoleGameRuntime.MolePlayerTaskManagementComponent.ServerTaskObjectInteractEvent
struct UMolePlayerTaskManagementComponent_ServerTaskObjectInteractEvent_Params
{
public:
	struct FEventMessageTag                      EventMessageTag;                                   // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTaskGenericPayload                   Payload;                                           // 0x8(0x40)(ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MoleGameRuntime.MolePlayerTaskManagementComponent.OnLeashActorEndOverlap
struct UMolePlayerTaskManagementComponent_OnLeashActorEndOverlap_Params
{
public:
	class AActor*                                OriginatingActor;                                  // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                ActorEndingOverlap;                                // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function MoleGameRuntime.MolePlayerTaskManagementComponent.OnCompletedTaskAdded
struct UMolePlayerTaskManagementComponent_OnCompletedTaskAdded_Params
{
public:
	struct FMoleCompletedTask                    InAddedCompletedTask;                              // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function MoleGameRuntime.MolePlayerTaskManagementComponent.GetNumCompletedTasks
struct UMolePlayerTaskManagementComponent_GetNumCompletedTasks_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MoleGameRuntime.MolePlayerTaskManagementComponent.CompleteTaskForGameplayState
struct UMolePlayerTaskManagementComponent_CompleteTaskForGameplayState_Params
{
public:
	class UGameplayState*                        State;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function MoleGameRuntime.MolePlayerTaskManagementComponent.ClientTasksInterrupted
struct UMolePlayerTaskManagementComponent_ClientTasksInterrupted_Params
{
public:
	TArray<class UMoleTaskDataAsset*>            TasksInterrupted;                                  // 0x0(0x10)(ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	enum class EMoleTaskInterruptionType         InterruptionType;                                  // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A2D[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function MoleGameRuntime.MolePlayerTaskManagementComponent.ClientSetPrimaryActiveTask
struct UMolePlayerTaskManagementComponent_ClientSetPrimaryActiveTask_Params
{
public:
	struct FMoleActiveTaskStateHandle            NewPrimaryHandle;                                  // 0x0(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MoleGameRuntime.MolePlayerTaskManagementComponent.ClientAllTasksInterrupted
struct UMolePlayerTaskManagementComponent_ClientAllTasksInterrupted_Params
{
public:
	enum class EMoleTaskInterruptionType         InterruptionType;                                  // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function MoleGameRuntime.MolePlayerTaskManagementComponent.ClientAdvanceLogicThroughPhases
struct UMolePlayerTaskManagementComponent_ClientAdvanceLogicThroughPhases_Params
{
public:
	class UMoleTaskLogic*                        Logic;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                AdvancedPhases;                                    // 0x8(0x10)(ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function MoleGameRuntime.MolePlayerTaskManagementComponent.BlueprintServerTaskObjectInteractEvent
struct UMolePlayerTaskManagementComponent_BlueprintServerTaskObjectInteractEvent_Params
{
public:
	class AController*                           User;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEventMessageTag                      EventMessageTag;                                   // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTaskGenericPayload                   Payload;                                           // 0x10(0x40)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x50(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A35[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// Function MoleGameRuntime.MoleQuickChatComponent.ServerSendMessage
struct UMoleQuickChatComponent_ServerSendMessage_Params
{
public:
	struct FMoleQuickChatMessageInfo             Message;                                           // 0x0(0x50)(ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MoleGameRuntime.MoleSabotageAbility.RevertSabotageForPlayer
struct UMoleSabotageAbility_RevertSabotageForPlayer_Params
{
public:
	class APlayerState*                          Player;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MoleGameRuntime.MoleSabotageAbility.GetInterruptionType
struct UMoleSabotageAbility_GetInterruptionType_Params
{
public:
	enum class EMoleSabotageInterruptionType     ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MoleGameRuntime.MoleSabotageAbility.GetAllValidSabotageTargets
struct UMoleSabotageAbility_GetAllValidSabotageTargets_Params
{
public:
	TArray<class APlayerState*>                  OutValidTargets;                                   // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MoleGameRuntime.MoleSabotageAbility.GetAllSaboteurs
struct UMoleSabotageAbility_GetAllSaboteurs_Params
{
public:
	TArray<class APlayerState*>                  OutAllSaboteurs;                                   // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MoleGameRuntime.MoleSabotageManagerComponent.SendMoleSabotageTimerStartedEvent
struct UMoleSabotageManagerComponent_SendMoleSabotageTimerStartedEvent_Params
{
public:
	class UMoleSabotageAbility*                  SabotageAbility;                                   // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMoleTimerInfo                        TimerInfo;                                         // 0x8(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A66[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function MoleGameRuntime.MoleSabotageManagerComponent.SendMoleLightingModeChangeEvent
struct UMoleSabotageManagerComponent_SendMoleLightingModeChangeEvent_Params
{
public:
	class UMoleSabotageAbility*                  SabotageAbility;                                   // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMoleLightingMode                     LightingMode;                                      // 0x8(0x1)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A67[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function MoleGameRuntime.MoleStateMachine.GetMoleStartOfMatchPlayerCountForPlayspace
struct UMoleStateMachine_GetMoleStartOfMatchPlayerCountForPlayspace_Params
{
public:
	class AMoleGamePlayspace*                    PlayspaceContext;                                  // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A69[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function MoleGameRuntime.MoleStateMachine.GetMoleStartOfMatchPlayerCount
struct UMoleStateMachine_GetMoleStartOfMatchPlayerCount_Params
{
public:
	class APlayerController*                     ContextPlayer;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A6A[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function MoleGameRuntime.MoleStateMachine.GetMoleRemainingSaboteurCount
struct UMoleStateMachine_GetMoleRemainingSaboteurCount_Params
{
public:
	class APlayerController*                     ContextPlayer;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A6B[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function MoleGameRuntime.MoleState_Gameplay.RequestEmergencyMeeting
struct UMoleState_Gameplay_RequestEmergencyMeeting_Params
{
public:
	class AActor*                                ActorContext;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMoleEmergencyMeetingData             MeetingData;                                       // 0x8(0x20)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x28(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A6E[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function MoleGameRuntime.MoleState_Gameplay.HandleScoreChanged
struct UMoleState_Gameplay_HandleScoreChanged_Params
{
public:
	struct FEventMessageTag                      EventChannel;                                      // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMoleTaskScoreEventData               ScoreEventData;                                    // 0x8(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MoleGameRuntime.MoleState_Gameplay.HandlePlayerStateDied
struct UMoleState_Gameplay_HandlePlayerStateDied_Params
{
public:
	class APlayerState*                          GhostPlayerState;                                  // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function MoleGameRuntime.MoleState_Gameplay.GetAllMoleFreshlyKilledGhosts
struct UMoleState_Gameplay_GetAllMoleFreshlyKilledGhosts_Params
{
public:
	class APlayerController*                     PlayerContext;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class APlayerState*>                  OutFreshlyKilledGhosts;                            // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function MoleGameRuntime.MoleSupplyDropSabotageAbility.HandleFixPointInteracted
struct UMoleSupplyDropSabotageAbility_HandleFixPointInteracted_Params
{
public:
	class UMoleTaskLinkComponent*                TaskLinkComponent;                                 // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AFortPawn*                             InteractingPawn;                                   // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInteractionBeingAttempted        InteractionType;                                   // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A70[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function MoleGameRuntime.MoleTaskLinkComponent.UpdatePlayerInteractionData
struct UMoleTaskLinkComponent_UpdatePlayerInteractionData_Params
{
public:
	class AController*                           User;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  InteractionInfoRowName;                            // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function MoleGameRuntime.MoleTaskLinkComponent.SendGenericObjectiveStatUpdate
struct UMoleTaskLinkComponent_SendGenericObjectiveStatUpdate_Params
{
public:
	class AController*                           User;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          ObjectiveStatTag;                                  // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ObjectiveStatDelta;                                // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A78[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function MoleGameRuntime.MoleTaskLinkComponent.RemovePlayerPermission
struct UMoleTaskLinkComponent_RemovePlayerPermission_Params
{
public:
	class AController*                           User;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MoleGameRuntime.MoleTaskLinkComponent.RemovePlayerInteractionData
struct UMoleTaskLinkComponent_RemovePlayerInteractionData_Params
{
public:
	class AController*                           User;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAlsoRemovePermission;                             // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A7A[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// DelegateFunction MoleGameRuntime.MoleTaskLinkComponent.OnTaskPermissionChanged__DelegateSignature
struct UMoleTaskLinkComponent_OnTaskPermissionChanged__DelegateSignature_Params
{
public:
	class AController*                           User;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasPermission;                                    // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A7C[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// DelegateFunction MoleGameRuntime.MoleTaskLinkComponent.OnTaskLinkOwnerActorInteract__DelegateSignature
struct UMoleTaskLinkComponent_OnTaskLinkOwnerActorInteract__DelegateSignature_Params
{
public:
	class UMoleTaskLinkComponent*                TaskLinkComponent;                                 // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AFortPawn*                             InteractingPawn;                                   // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInteractionBeingAttempted        InteractionType;                                   // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A7E[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// DelegateFunction MoleGameRuntime.MoleTaskLinkComponent.OnTaskInteractionChanged__DelegateSignature
struct UMoleTaskLinkComponent_OnTaskInteractionChanged__DelegateSignature_Params
{
public:
	class AController*                           User;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// DelegateFunction MoleGameRuntime.MoleTaskLinkComponent.OnTaskGenericObjectiveStatChanged__DelegateSignature
struct UMoleTaskLinkComponent_OnTaskGenericObjectiveStatChanged__DelegateSignature_Params
{
public:
	class UMoleTaskLinkComponent*                TaskLinkComponent;                                 // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AController*                           User;                                              // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          ObjectiveStatTag;                                  // 0x10(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ObjectiveStatDelta;                                // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A85[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function MoleGameRuntime.MoleTaskLinkComponent.OnOwnerActorInteract
struct UMoleTaskLinkComponent_OnOwnerActorInteract_Params
{
public:
	class AFortPawn*                             InteractingPawn;                                   // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInteractionBeingAttempted        Interaction;                                       // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A88[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function MoleGameRuntime.MoleTaskLinkComponent.IsTaskLinkDisabled
struct UMoleTaskLinkComponent_IsTaskLinkDisabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MoleGameRuntime.MoleTaskLinkComponent.HasPlayerPermission
struct UMoleTaskLinkComponent_HasPlayerPermission_Params
{
public:
	class AController*                           User;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A8A[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function MoleGameRuntime.MoleTaskLinkComponent.GivePlayerPermission
struct UMoleTaskLinkComponent_GivePlayerPermission_Params
{
public:
	class AController*                           User;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MoleGameRuntime.MoleTaskLinkComponent.GetTaskTag
struct UMoleTaskLinkComponent_GetTaskTag_Params
{
public:
	struct FGameplayTag                          ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MoleGameRuntime.MoleTaskLinkComponent.GetTaskComponent
struct UMoleTaskLinkComponent_GetTaskComponent_Params
{
public:
	class AActor*                                TaskActor;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMoleTaskLinkComponent*                ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MoleGameRuntime.MoleTaskLinkComponent.GetInteractionTime
struct UMoleTaskLinkComponent_GetInteractionTime_Params
{
public:
	class AFortPawn*                             InteractingPawn;                                   // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInteractionBeingAttempted        InteractionBeingAttempted;                         // 0x8(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A90[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ReturnValue;                                       // 0xC(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function MoleGameRuntime.MoleTaskLinkComponent.GetInteractionString
struct UMoleTaskLinkComponent_GetInteractionString_Params
{
public:
	class AFortPawn*                             InteractingPawn;                                   // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInteractionBeingAttempted        InteractionBeingAttempted;                         // 0x8(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A92[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ReturnValue;                                       // 0x10(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MoleGameRuntime.MoleTaskLinkComponent.CanInteract
struct UMoleTaskLinkComponent_CanInteract_Params
{
public:
	class AFortPawn*                             InteractingPawn;                                   // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInteractionBeingAttempted        InteractionBeingAttempted;                         // 0x8(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETInteractionType                 InteractionType;                                   // 0x9(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xA(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A93[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function MoleGameRuntime.MoleTaskLinkComponent.AddPlayerInteractionData
struct UMoleTaskLinkComponent_AddPlayerInteractionData_Params
{
public:
	class AController*                           User;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  InteractionInfoRowName;                            // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGivePermission;                                   // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A97[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function MoleGameRuntime.MoleTaskLogicSubobject.OnTaskExternalInterruption
struct UMoleTaskLogicSubobject_OnTaskExternalInterruption_Params
{
public:
	enum class EMoleTaskInterruptionType         InterruptionType;                                  // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MoleGameRuntime.MoleTaskLogicSubobject.OnOwningTaskNoLongerPrimaryActiveTask
struct UMoleTaskLogicSubobject_OnOwningTaskNoLongerPrimaryActiveTask_Params
{
public:
	bool                                         bIsActivePhase;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MoleGameRuntime.MoleTaskLogicSubobject.OnOwningTaskBecomePrimaryActiveTask
struct UMoleTaskLogicSubobject_OnOwningTaskBecomePrimaryActiveTask_Params
{
public:
	bool                                         bIsActivePhase;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MoleGameRuntime.MoleTaskLogicSubobject.OnAssociatedTaskActorsPendingRemoval
struct UMoleTaskLogicSubobject_OnAssociatedTaskActorsPendingRemoval_Params
{
public:
	TArray<class AActor*>                        InPendingRemovalTaskActors;                        // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MoleGameRuntime.MoleTaskLogicSubobject.OnAssociatedTaskActorsAdded
struct UMoleTaskLogicSubobject_OnAssociatedTaskActorsAdded_Params
{
public:
	TArray<class AActor*>                        InNewlyAddedTaskActors;                            // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MoleGameRuntime.MoleTaskLogicSubobject.GetOwningPlayerTaskComponent
struct UMoleTaskLogicSubobject_GetOwningPlayerTaskComponent_Params
{
public:
	class UMolePlayerTaskManagementComponent*    ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MoleGameRuntime.MoleTaskLogicSubobject.GetOwningController
struct UMoleTaskLogicSubobject_GetOwningController_Params
{
public:
	class AController*                           ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MoleGameRuntime.MoleTaskLogicSubobject.GetOwnerRole
struct UMoleTaskLogicSubobject_GetOwnerRole_Params
{
public:
	enum class ENetRole                          ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MoleGameRuntime.MoleTaskLogicSubobject.GetAssociatedTaskActors
struct UMoleTaskLogicSubobject_GetAssociatedTaskActors_Params
{
public:
	TArray<class AActor*>                        ReturnValue;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MoleGameRuntime.MoleTaskLogicObjective.SetObjectiveStatus
struct UMoleTaskLogicObjective_SetObjectiveStatus_Params
{
public:
	enum class EMoleTaskObjectiveStatus          InNewStatus;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MoleGameRuntime.MoleTaskLogicObjective.ServerSuggestObjectiveStatus
struct UMoleTaskLogicObjective_ServerSuggestObjectiveStatus_Params
{
public:
	enum class EMoleTaskObjectiveStatus          InNewSuggestedStatus;                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// DelegateFunction MoleGameRuntime.MoleTaskLogicObjective.OnObjectiveTargetValueChanged__DelegateSignature
struct UMoleTaskLogicObjective_OnObjectiveTargetValueChanged__DelegateSignature_Params
{
public:
	float                                        NewTargetValue;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// DelegateFunction MoleGameRuntime.MoleTaskLogicObjective.OnObjectiveCurrentValueChanged__DelegateSignature
struct UMoleTaskLogicObjective_OnObjectiveCurrentValueChanged__DelegateSignature_Params
{
public:
	float                                        NewCurrentValue;                                   // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function MoleGameRuntime.MoleTaskLogicObjective.GetObjectiveText
struct UMoleTaskLogicObjective_GetObjectiveText_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MoleGameRuntime.MoleTaskLogicObjective.GetObjectiveStatus
struct UMoleTaskLogicObjective_GetObjectiveStatus_Params
{
public:
	enum class EMoleTaskObjectiveStatus          ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function MoleGameRuntime.MoleTaskLogicObjective.GetCurrentValue
struct UMoleTaskLogicObjective_GetCurrentValue_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function MoleGameRuntime.MoleTaskLogicObjective.GetCapturedTargetValue
struct UMoleTaskLogicObjective_GetCapturedTargetValue_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function MoleGameRuntime.MoleTaskLogicObjective.GetCapturedInitialValue
struct UMoleTaskLogicObjective_GetCapturedInitialValue_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function MoleGameRuntime.MoleTaskLogicObjective.CaptureTargetValue
struct UMoleTaskLogicObjective_CaptureTargetValue_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function MoleGameRuntime.MoleTaskLogicObjective.CaptureInitialValue
struct UMoleTaskLogicObjective_CaptureInitialValue_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function MoleGameRuntime.MoleTaskLogicObjective.ApplyCurrentValueDelta
struct UMoleTaskLogicObjective_ApplyCurrentValueDelta_Params
{
public:
	float                                        Delta;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function MoleGameRuntime.MoleTaskLogicObjective_DamageActors.OnPawnDamaged
struct UMoleTaskLogicObjective_DamageActors_OnPawnDamaged_Params
{
public:
	class AActor*                                DamagedActor;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Damage;                                            // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3ABA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AController*                           InstigatedBy;                                      // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                DamageCauser;                                      // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HitLocation;                                       // 0x20(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3ABB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimitiveComponent*                   FHitComponent;                                     // 0x30(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneName;                                          // 0x38(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Momentum;                                          // 0x40(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3ABC[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// Function MoleGameRuntime.MoleTaskLogicObjective_DamageActors.OnBuildingActorDamaged
struct UMoleTaskLogicObjective_DamageActors_OnBuildingActorDamaged_Params
{
public:
	class AActor*                                DamagedActor;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Damage;                                            // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3ABE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AController*                           InstigatedBy;                                      // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                DamageCauser;                                      // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HitLocation;                                       // 0x20(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3ABF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimitiveComponent*                   FHitComponent;                                     // 0x30(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneName;                                          // 0x38(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Momentum;                                          // 0x40(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AC0[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// Function MoleGameRuntime.MoleTaskLogicObjective_DestroyActors.OnPawnDied
struct UMoleTaskLogicObjective_DestroyActors_OnPawnDied_Params
{
public:
	class AActor*                                DamagedActor;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Damage;                                            // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AC2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AController*                           InstigatedBy;                                      // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                DamageCauser;                                      // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HitLocation;                                       // 0x20(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AC3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimitiveComponent*                   FHitComponent;                                     // 0x30(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneName;                                          // 0x38(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Momentum;                                          // 0x40(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AC4[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function MoleGameRuntime.MoleTaskLogicObjective_DestroyActors.OnGenericActorDestroyed
struct UMoleTaskLogicObjective_DestroyActors_OnGenericActorDestroyed_Params
{
public:
	class AActor*                                DestroyedActor;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function MoleGameRuntime.MoleTaskLogicObjective_DestroyActors.OnBuildingActorDied
struct UMoleTaskLogicObjective_DestroyActors_OnBuildingActorDied_Params
{
public:
	class AActor*                                DamagedActor;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Damage;                                            // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AC6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AController*                           InstigatedBy;                                      // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                DamageCauser;                                      // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HitLocation;                                       // 0x20(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AC7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimitiveComponent*                   FHitComponent;                                     // 0x30(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneName;                                          // 0x38(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Momentum;                                          // 0x40(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AC8[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function MoleGameRuntime.MoleTaskLogicObjective_GenericStat.OnTaskLinkComponentGenericStatChanged
struct UMoleTaskLogicObjective_GenericStat_OnTaskLinkComponentGenericStatChanged_Params
{
public:
	class UMoleTaskLinkComponent*                InTaskLinkComponent;                               // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AController*                           InUser;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          InObjectiveStatTag;                                // 0x10(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InObjectiveStatDelta;                              // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3ACA[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function MoleGameRuntime.MoleTaskLogicObjective_Interact.OnTaskLinkComponentInteract
struct UMoleTaskLogicObjective_Interact_OnTaskLinkComponentInteract_Params
{
public:
	class UMoleTaskLinkComponent*                TaskLinkComponent;                                 // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AFortPawn*                             InteractingPawn;                                   // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInteractionBeingAttempted        InteractionType;                                   // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3ACC[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// Function MoleGameRuntime.MoleTaskManagerComponent.GetTaskActorsMatchingGameplayTagContainer
struct UMoleTaskManagerComponent_GetTaskActorsMatchingGameplayTagContainer_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 TaskTagContainer;                                  // 0x8(0x20)(Parm, NativeAccessSpecifierPublic)
	TArray<class AActor*>                        ReturnValue;                                       // 0x28(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function MoleGameRuntime.MoleTaskManagerComponent.GetTaskActorsMatchingGameplayTag
struct UMoleTaskManagerComponent_GetTaskActorsMatchingGameplayTag_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          TaskRootTag;                                       // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AActor*>                        ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function MoleGameRuntime.MoleTaskManagerComponent.GetTaskActorForGameplayTag
struct UMoleTaskManagerComponent_GetTaskActorForGameplayTag_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          TaskTag;                                           // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function MoleGameRuntime.MoleTaskManagerComponent.GetTaskActorComponentsMatchingGameplayTagContainer
struct UMoleTaskManagerComponent_GetTaskActorComponentsMatchingGameplayTagContainer_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 TaskTagContainer;                                  // 0x8(0x20)(Parm, NativeAccessSpecifierPublic)
	TArray<class UMoleTaskLinkComponent*>        ReturnValue;                                       // 0x28(0x10)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function MoleGameRuntime.MoleTaskManagerComponent.GetTaskActorComponentsMatchingGameplayTag
struct UMoleTaskManagerComponent_GetTaskActorComponentsMatchingGameplayTag_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          TaskRootTag;                                       // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UMoleTaskLinkComponent*>        ReturnValue;                                       // 0x10(0x10)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function MoleGameRuntime.MoleTaskManagerComponent.GetTaskActorComponentForGameplayTag
struct UMoleTaskManagerComponent_GetTaskActorComponentForGameplayTag_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          TaskTag;                                           // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMoleTaskLinkComponent*                ReturnValue;                                       // 0x10(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MoleGameRuntime.MoleTaskManagerComponent.GetMoleScoreGoal
struct UMoleTaskManagerComponent_GetMoleScoreGoal_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AE0[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function MoleGameRuntime.MoleTaskManagerComponent.GetMoleCurrentScore
struct UMoleTaskManagerComponent_GetMoleCurrentScore_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AE4[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function MoleGameRuntime.MoleTaskPoint.GetMoleTaskLinkComponent
struct AMoleTaskPoint_GetMoleTaskLinkComponent_Params
{
public:
	class UMoleTaskLinkComponent*                ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MoleGameRuntime.MoleTeleportAllSabotageAbility.OnPlayerTeleported
struct UMoleTeleportAllSabotageAbility_OnPlayerTeleported_Params
{
public:
	class APlayerState*                          TeleportedPlayer;                                  // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


