#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EFriendChestResult : uint8
{
	Ignored                        = 0,
	Partial                        = 1,
	Abandoned                      = 2,
	Opened                         = 3,
	SpawnFailure                   = 4,
	EFriendChestResult_MAX         = 5,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// ScriptStruct FreshCheeseRuntime.FriendChestRoundPacing
struct FFriendChestRoundPacing
{
public:
	TArray<int32>                                NumTargetsPerRound;                                // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FreshCheeseRuntime.FriendChestPlayerActivationPair
struct FFriendChestPlayerActivationPair
{
public:
	class AFortPlayerPawnAthena*                 Player;                                            // 0x0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTimerHandle                          ActivationTimer;                                   // 0x8(0x8)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct FreshCheeseRuntime.FriendChestAnalyticsLootRoll
struct FFriendChestAnalyticsLootRoll
{
public:
	uint8                                        Pad_26E2[0x48];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x68 - 0x0)
// ScriptStruct FreshCheeseRuntime.FriendChestAnalyticsParticipant
struct FFriendChestAnalyticsParticipant
{
public:
	class AFortPlayerStateAthena*                PlayerState;                                       // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                AccountId;                                         // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                               SpawnCoordinates;                                  // 0x18(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_26E3[0x24];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFriendChestAnalyticsLootRoll> InstancedLoot;                                     // 0x48(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FFriendChestAnalyticsLootRoll> FailedLoot;                                        // 0x58(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
};

}


