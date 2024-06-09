#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EArgonRacePhase : uint8
{
	None                           = 0,
	TeleportingPlayers             = 1,
	PreRaceSequence                = 2,
	RaceActive                     = 3,
	PostRaceSequence               = 4,
	RaceEnded                      = 5,
	MAX                            = 6,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x60 - 0x0)
// ScriptStruct ArgonRuntime.ArgonFinishedPlayerInfo
struct FArgonFinishedPlayerInfo
{
public:
	class FString                                PlayerName;                                        // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      PlayerId;                                          // 0x10(0x28)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Team;                                              // 0x38(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3756[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FinishedTime;                                      // 0x3C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Place;                                             // 0x40(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3757[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortHeroType*                         HeroType;                                          // 0x48(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AFortPlayerStateAthena*                PlayerState;                                       // 0x50(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFinishedAsLastTeamLeft;                           // 0x58(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3758[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct ArgonRuntime.ArgonVehicleOption
struct FArgonVehicleOption
{
public:
	struct FPrimaryAssetId                       VehicleAssetId;                                    // 0x0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScalableFloat                        Enabled;                                           // 0x10(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct ArgonRuntime.ArgonRoute
struct FArgonRoute
{
public:
	struct FGameplayTagContainer                 Tag;                                               // 0x0(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        Enabled;                                           // 0x20(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ArgonRuntime.ArgonSupplyDropInfo
struct FArgonSupplyDropInfo
{
public:
	uint8                                        Pad_375A[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x298 (0x298 - 0x0)
// ScriptStruct ArgonRuntime.ArgonSupplyDropPointData
struct FArgonSupplyDropPointData
{
public:
	struct FScalableFloat                        NumDropPoints;                                     // 0x0(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        NumDropsPerSide;                                   // 0x28(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        SpaceBetweenDrops;                                 // 0x50(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        MaxDistanceFromSpawnPointPerpendicularToRace;      // 0x78(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        MaxDistanceFromSpawnPointParallelToRace;           // 0xA0(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        DistanceFromCenter;                                // 0xC8(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        MinDropDistanceFromCenter;                         // 0xF0(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        MinPercentDistanceFromEnd;                         // 0x118(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        MaxPercentDistanceFromEnd;                         // 0x140(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        MinTimeUntilSpawn;                                 // 0x168(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        MaxTimeUntilSpawn;                                 // 0x190(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        MaxRepopulations;                                  // 0x1B8(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        MinRepopulationTime;                               // 0x1E0(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        MaxRepopulationTime;                               // 0x208(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	uint8                                        Pad_375D[0x68];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ArgonRuntime.ArgonPlayerInfo
struct FArgonPlayerInfo
{
public:
	class AFortPlayerStateAthena*                PlayerState;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_375E[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ArgonRuntime.ArgonRaceStateInfo
struct FArgonRaceStateInfo
{
public:
	enum class EArgonRacePhase                   CurrentRacePhase;                                  // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_375F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FArgonFinishedPlayerInfo>      FinishedTeamLeaderInfos;                           // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ArgonRuntime.ArgonTeamTicketCount
struct FArgonTeamTicketCount
{
public:
	uint8                                        Team;                                              // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        NumTickets;                                        // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3760[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPlayerStateAthena*                RecentTicketPickedUpByPlayer;                      // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct ArgonRuntime.ArgonTeamProgressBarInfo
struct FArgonTeamProgressBarInfo
{
public:
	uint8                                        Team;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3762[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PercentProgress;                                   // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumTicketsAcquired;                                // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


