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

// 0x28 (0x28 - 0x0)
// Function PhosphorusRuntime.FortAthenaMutator_PlayerSpawnPod.SetViewTarget
struct AFortAthenaMutator_PlayerSpawnPod_SetViewTarget_Params
{
public:
	class AFortPlayerControllerAthena*           Controller;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                ViewTarget;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FViewTargetTransitionParams           ViewTargetTransitionParams;                        // 0x10(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bDestroyOldViewTarget;                             // 0x20(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3759[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function PhosphorusRuntime.FortAthenaMutator_PlayerSpawnPod.OnSingleTeleportComplete
struct AFortAthenaMutator_PlayerSpawnPod_OnSingleTeleportComplete_Params
{
public:
	class AFortPlayerStateAthena*                PlayerState;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function PhosphorusRuntime.FortAthenaMutator_PlayerSpawnPod.OnRep_PodDataArray
struct AFortAthenaMutator_PlayerSpawnPod_OnRep_PodDataArray_Params
{
public:
	TArray<struct FPlayerSpawnPodData>           OldPodDataArray;                                   // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function PhosphorusRuntime.FortAthenaMutator_PlayerSpawnPod.OnPodDestroyed
struct AFortAthenaMutator_PlayerSpawnPod_OnPodDestroyed_Params
{
public:
	class AActor*                                DestroyedActor;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function PhosphorusRuntime.FortAthenaMutator_PlayerSpawnPod.HandlePodLanded
struct AFortAthenaMutator_PlayerSpawnPod_HandlePodLanded_Params
{
public:
	class UActorComponent*                       InComponent;                                       // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xD8 (0xD8 - 0x0)
// Function PhosphorusRuntime.FortAthenaMutator_PlayerSpawnPod.GetPodDataForID
struct AFortAthenaMutator_PlayerSpawnPod_GetPodDataForID_Params
{
public:
	int32                                        ID;                                                // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3765[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPlayerSpawnPodData                   OutPodData;                                        // 0x8(0xB8)(Parm, OutParm, NativeAccessSpecifierPublic)
	class FString                                ContextString;                                     // 0xC0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xD0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3766[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xD8 (0xD8 - 0x0)
// Function PhosphorusRuntime.FortAthenaMutator_PlayerSpawnPod.GetPodDataForActor
struct AFortAthenaMutator_PlayerSpawnPod_GetPodDataForActor_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPlayerSpawnPodData                   OutPodData;                                        // 0x8(0xB8)(Parm, OutParm, NativeAccessSpecifierPublic)
	class FString                                ContextString;                                     // 0xC0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xD0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_376A[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function PhosphorusRuntime.FortAthenaMutator_PlayerSpawnPod.GetFallDuration
struct AFortAthenaMutator_PlayerSpawnPod_GetFallDuration_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function PhosphorusRuntime.FortCheatManager_Phosphorus.PhosphorusSetNumRoundsToWin
struct UFortCheatManager_Phosphorus_PhosphorusSetNumRoundsToWin_Params
{
public:
	int32                                        NumRounds;                                         // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function PhosphorusRuntime.FortCheatManager_Phosphorus.PhosphorusDebug
struct UFortCheatManager_Phosphorus_PhosphorusDebug_Params
{
public:
	float                                        TextScale;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function PhosphorusRuntime.FortAthenaMutator_Phosphorus.OnPawnEjectedFromPod
struct AFortAthenaMutator_Phosphorus_OnPawnEjectedFromPod_Params
{
public:
	class AFortPlayerPawnAthena*                 Pawn;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function PhosphorusRuntime.FortAthenaMutator_Phosphorus.IsTeamValid
struct AFortAthenaMutator_Phosphorus_IsTeamValid_Params
{
public:
	uint8                                        TeamNum;                                           // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function PhosphorusRuntime.FortAthenaMutator_Phosphorus.IsTeamAlive
struct AFortAthenaMutator_Phosphorus_IsTeamAlive_Params
{
public:
	uint8                                        TeamNum;                                           // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function PhosphorusRuntime.FortAthenaMutator_Phosphorus.IsOnWinningTeam
struct AFortAthenaMutator_Phosphorus_IsOnWinningTeam_Params
{
public:
	class AFortPlayerPawnAthena*                 Pawn;                                              // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3775[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function PhosphorusRuntime.FortAthenaMutator_Phosphorus.HandlePawnStormStatusChanged
struct AFortAthenaMutator_Phosphorus_HandlePawnStormStatusChanged_Params
{
public:
	class AFortPlayerPawn*                       PlayerPawn;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsInSafeZone;                                     // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3777[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function PhosphorusRuntime.FortAthenaMutator_Phosphorus.GetTeamSize
struct AFortAthenaMutator_Phosphorus_GetTeamSize_Params
{
public:
	uint8                                        TeamNum;                                           // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3779[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function PhosphorusRuntime.FortAthenaMutator_Phosphorus.GetTeamMVP
struct AFortAthenaMutator_Phosphorus_GetTeamMVP_Params
{
public:
	uint8                                        TeamNum;                                           // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_377B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPlayerStateAthena*                ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function PhosphorusRuntime.FortAthenaMutator_Phosphorus.GetTeamDataCopy
struct AFortAthenaMutator_Phosphorus_GetTeamDataCopy_Params
{
public:
	uint8                                        TeamNum;                                           // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_377C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPhosphorusTeamData                   ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function PhosphorusRuntime.FortAthenaMutator_Phosphorus.GetTeamDataArray
struct AFortAthenaMutator_Phosphorus_GetTeamDataArray_Params
{
public:
	TArray<struct FPhosphorusTeamData>           OutTeamDataArray;                                  // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bMustBeValid;                                      // 0x10(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMustBeAlive;                                      // 0x11(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSortByScore;                                      // 0x12(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_377E[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function PhosphorusRuntime.FortAthenaMutator_Phosphorus.GetRoundWinningTeamNum
struct AFortAthenaMutator_Phosphorus_GetRoundWinningTeamNum_Params
{
public:
	uint8                                        ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function PhosphorusRuntime.FortAthenaMutator_Phosphorus.GetNumValidTeams
struct AFortAthenaMutator_Phosphorus_GetNumValidTeams_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function PhosphorusRuntime.FortAthenaMutator_Phosphorus.GetNumAliveTeams
struct AFortAthenaMutator_Phosphorus_GetNumAliveTeams_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function PhosphorusRuntime.FortAthenaMutator_Phosphorus.GetLeadingTeamNums
struct AFortAthenaMutator_Phosphorus_GetLeadingTeamNums_Params
{
public:
	TArray<uint8>                                LeadingTeamNums;                                   // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function PhosphorusRuntime.FortAthenaMutator_Phosphorus.GetCachedStormMutator
struct AFortAthenaMutator_Phosphorus_GetCachedStormMutator_Params
{
public:
	class AFortAthenaMutator_CustomStormMovement* ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function PhosphorusRuntime.FortAthenaMutator_Phosphorus.AudioFadeChangeEvent
struct AFortAthenaMutator_Phosphorus_AudioFadeChangeEvent_Params
{
public:
	bool                                         bFadeOut;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_377F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FadeTime;                                          // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function PhosphorusRuntime.FortCheatManager_PlayerSpawnPod.PlayerSpawnPodTestAllPlayers
struct UFortCheatManager_PlayerSpawnPod_PlayerSpawnPodTestAllPlayers_Params
{
public:
	bool                                         bIndividualPods;                                   // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function PhosphorusRuntime.FortCheatManager_PlayerSpawnPod.PlayerSpawnPodDebug
struct UFortCheatManager_PlayerSpawnPod_PlayerSpawnPodDebug_Params
{
public:
	float                                        TextScale;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


