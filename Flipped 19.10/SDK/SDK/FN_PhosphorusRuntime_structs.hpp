#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EPhosphorusPhase : uint8
{
	PreMatch                       = 0,
	RoundSetup                     = 1,
	PrePodLaunch                   = 2,
	PodsLaunched                   = 3,
	RoundInProgress                = 4,
	RoundEnd                       = 5,
	RoundEndUI                     = 6,
	MatchEnd                       = 7,
	MatchEndUI                     = 8,
	EPhosphorusPhase_MAX           = 9,
};

enum class EPlayerSpawnPodState : uint8
{
	Setup                          = 0,
	PreLaunch                      = 1,
	Moving                         = 2,
	Landed                         = 3,
	Ejected                        = 4,
	EPlayerSpawnPodState_MAX       = 5,
};

enum class EPhosphorusClientEventId : uint8
{
	ShowLocalPlayerSquadWipedUI    = 0,
	ShowEnemySquadWipedUI          = 1,
	MAX                            = 2,
};

enum class EPlayerSpawnPodSpawnState : uint8
{
	FirstSpawn                     = 0,
	Respawn                        = 1,
	EPlayerSpawnPodSpawnState_MAX  = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0xB8 (0xB8 - 0x0)
// ScriptStruct PhosphorusRuntime.PlayerSpawnPodData
struct FPlayerSpawnPodData
{
public:
	int32                                        ID;                                                // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               EndLocation;                                       // 0x4(0xC)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AFortPlayerStateAthena*>        PlayerStates;                                      // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class AFortPlayerPawnAthena*>         EnteredPawns;                                      // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class AFortPlayerPawnAthena*>         EjectedPawns;                                      // 0x30(0x10)(ZeroConstructor, RepSkip, NativeAccessSpecifierPublic)
	enum class EPlayerSpawnPodState              State;                                             // 0x40(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_378A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               StartLocation;                                     // 0x44(0xC)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                PodActor;                                          // 0x50(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class AFortPlayerControllerAthena*, class AActor*> ViewTargetsByPlayerController;                     // 0x58(0x50)(BlueprintVisible, BlueprintReadOnly, RepSkip, NativeAccessSpecifierPublic)
	float                                        LandTime;                                          // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NextEjectYaw;                                      // 0xAC(0x4)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EjectYawIncrement;                                 // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_378B[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct PhosphorusRuntime.PhosphorusTeamData
struct FPhosphorusTeamData
{
public:
	uint8                                        TeamNum;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        NumRoundsWon;                                      // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_378D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPlayerStateAthena*                CurrentMVP;                                        // 0x8(0x8)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


