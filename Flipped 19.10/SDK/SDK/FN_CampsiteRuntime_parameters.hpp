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

// 0x18 (0x18 - 0x0)
// Function CampsiteRuntime.AbandonedCampsiteManager.OnGamePhaseStepChanged
struct AAbandonedCampsiteManager_OnGamePhaseStepChanged_Params
{
public:
	TScriptInterface<class IFortSafeZoneInterface> SafeZoneInterface;                                 // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAthenaGamePhaseStep              GamePhaseStep;                                     // 0x10(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1748[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function CampsiteRuntime.CampsiteConversationComponent.StartConversation
struct UCampsiteConversationComponent_StartConversation_Params
{
public:
	class AFortPlayerController*                 InstigatingController;                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1B0 (0x1B0 - 0x0)
// Function CampsiteRuntime.CampsiteFunctionLibraryNative.IsItemEntryAvailable
struct UCampsiteFunctionLibraryNative_IsItemEntryAvailable_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortItemEntry                        FortItem;                                          // 0x8(0x1A0)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1A8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1789[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function CampsiteRuntime.CampsiteFunctionLibraryNative.IsItemDefinitionAvailable
struct UCampsiteFunctionLibraryNative_IsItemDefinitionAvailable_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortItemDefinition*                   FortItem;                                          // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_178C[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function CampsiteRuntime.CampsiteFunctionLibraryNative.IsItemAvailable
struct UCampsiteFunctionLibraryNative_IsItemAvailable_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortItem*                             FortItem;                                          // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_178E[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function CampsiteRuntime.CampsiteImprovementComponent.SetImprovementOwnerSquadId
struct UCampsiteImprovementComponent_SetImprovementOwnerSquadId_Params
{
public:
	int32                                        SquadId;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1A8 (0x1A8 - 0x0)
// Function CampsiteRuntime.FortControllerComponent_CampsiteAccountItem.WriteStashedItemFromEntry
struct UFortControllerComponent_CampsiteAccountItem_WriteStashedItemFromEntry_Params
{
public:
	struct FFortItemEntry                        ItemEntry;                                         // 0x0(0x1A0)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        StashedItemIndex;                                  // 0x1A0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_179E[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function CampsiteRuntime.FortControllerComponent_CampsiteAccountItem.WriteStashedItem
struct UFortControllerComponent_CampsiteAccountItem_WriteStashedItem_Params
{
public:
	class UFortWorldItem*                        Item;                                              // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StashedItemIndex;                                  // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17A2[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function CampsiteRuntime.FortControllerComponent_CampsiteAccountItem.SwapStashedItem
struct UFortControllerComponent_CampsiteAccountItem_SwapStashedItem_Params
{
public:
	class AActor*                                SourceActor;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StashedItemIndex;                                  // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17A6[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function CampsiteRuntime.FortControllerComponent_CampsiteAccountItem.StashCurrentlyHeldItemAndRemoveFromInventory
struct UFortControllerComponent_CampsiteAccountItem_StashCurrentlyHeldItemAndRemoveFromInventory_Params
{
public:
	int32                                        StashedItemIndex;                                  // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17B4[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function CampsiteRuntime.FortControllerComponent_CampsiteAccountItem.HasCurrentlyStashedItem
struct UFortControllerComponent_CampsiteAccountItem_HasCurrentlyStashedItem_Params
{
public:
	int32                                        StashedItemIndex;                                  // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17C1[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1A8 (0x1A8 - 0x0)
// Function CampsiteRuntime.FortControllerComponent_CampsiteAccountItem.GetCurrentlyStashedItemAsItemEntry
struct UFortControllerComponent_CampsiteAccountItem_GetCurrentlyStashedItemAsItemEntry_Params
{
public:
	int32                                        StashedItemIndex;                                  // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17C7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortItemEntry                        ReturnValue;                                       // 0x8(0x1A0)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CampsiteRuntime.FortControllerComponent_CampsiteAccountItem.ClearStashedItemAndGiveToPlayer
struct UFortControllerComponent_CampsiteAccountItem_ClearStashedItemAndGiveToPlayer_Params
{
public:
	class AActor*                                SourceActor;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StashedItemIndex;                                  // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17CC[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function CampsiteRuntime.FortControllerComponent_CampsiteAccountItem.ClearStashedItem
struct UFortControllerComponent_CampsiteAccountItem_ClearStashedItem_Params
{
public:
	int32                                        StashedItemIndex;                                  // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CampsiteRuntime.FortGameStateComponent_Campsite.RegisterPreplacedCampsite
struct UFortGameStateComponent_Campsite_RegisterPreplacedCampsite_Params
{
public:
	class AAbandonedCampsitePlacedSpawner*       PreplacedCampsiteSpawnPoint;                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function CampsiteRuntime.FortGameStateComponent_Campsite.RegisterCampsiteLocation
struct UFortGameStateComponent_Campsite_RegisterCampsiteLocation_Params
{
public:
	struct FVector                               NewCampsiteLocation;                               // 0x0(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CampsiteRuntime.FortGameStateComponent_Campsite.ClaimUnusedBotName
struct UFortGameStateComponent_Campsite_ClaimUnusedBotName_Params
{
public:
	class FString                                OutBotName;                                        // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


