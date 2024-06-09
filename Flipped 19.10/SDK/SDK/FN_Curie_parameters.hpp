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

// 0xC (0xC - 0x0)
// Function Curie.CurieInterface.OnCurieStateDetached_BP
struct ICurieInterface_OnCurieStateDetached_BP_Params
{
public:
	struct FCurieContainerHandle                 CurieContainerHandle;                              // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          StateTag;                                          // 0x4(0x8)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function Curie.CurieInterface.OnCurieStateAttached_BP
struct ICurieInterface_OnCurieStateAttached_BP_Params
{
public:
	struct FCurieContainerHandle                 CurieContainerHandle;                              // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          StateTag;                                          // 0x4(0x8)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function Curie.CurieInterface.OnCurieElementInteractEnded_BP
struct ICurieInterface_OnCurieElementInteractEnded_BP_Params
{
public:
	struct FCurieContainerHandle                 CurieContainerHandle;                              // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          ElementTag;                                        // 0x4(0x8)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A7[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCurieInteractParamsHandle            InteractParamsHandle;                              // 0x10(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function Curie.CurieInterface.OnCurieElementInteractBegun_BP
struct ICurieInterface_OnCurieElementInteractBegun_BP_Params
{
public:
	struct FCurieContainerHandle                 CurieContainerHandle;                              // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          ElementTag;                                        // 0x4(0x8)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AE[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCurieInteractParamsHandle            InteractParamsHandle;                              // 0x10(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function Curie.CurieInterface.OnCurieElementInteract_BP
struct ICurieInterface_OnCurieElementInteract_BP_Params
{
public:
	struct FCurieContainerHandle                 CurieContainerHandle;                              // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          ElementTag;                                        // 0x4(0x8)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B3[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCurieInteractParamsHandle            InteractParamsHandle;                              // 0x10(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function Curie.CurieInterface.OnCurieElementDetached_BP
struct ICurieInterface_OnCurieElementDetached_BP_Params
{
public:
	struct FCurieContainerHandle                 CurieContainerHandle;                              // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          ElementTag;                                        // 0x4(0x8)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function Curie.CurieInterface.OnCurieElementAttached_BP
struct ICurieInterface_OnCurieElementAttached_BP_Params
{
public:
	struct FCurieContainerHandle                 CurieContainerHandle;                              // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          ElementTag;                                        // 0x4(0x8)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Curie.CurieInterface.OnCurieContainerReparented_BP
struct ICurieInterface_OnCurieContainerReparented_BP_Params
{
public:
	struct FCurieContainerHandle                 CurieContainerHandle;                              // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Curie.CurieInterface.OnCurieContainerReleased_BP
struct ICurieInterface_OnCurieContainerReleased_BP_Params
{
public:
	struct FCurieContainerHandle                 CurieContainerHandle;                              // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Curie.CurieInterface.OnCurieContainerAcquired_BP
struct ICurieInterface_OnCurieContainerAcquired_BP_Params
{
public:
	struct FCurieContainerHandle                 CurieContainerHandle;                              // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Curie.CurieManager.UnbindDelegateForCurieStateDetached
struct UCurieManager_UnbindDelegateForCurieStateDetached_Params
{
public:
	class UObject*                               CurieOwner;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Curie.CurieManager.UnbindDelegateForCurieStateAttached
struct UCurieManager_UnbindDelegateForCurieStateAttached_Params
{
public:
	class UObject*                               CurieOwner;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Curie.CurieManager.UnbindDelegateForCurieElementInteract
struct UCurieManager_UnbindDelegateForCurieElementInteract_Params
{
public:
	class UObject*                               CurieOwner;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Curie.CurieManager.UnbindDelegateForCurieElementEndInteract
struct UCurieManager_UnbindDelegateForCurieElementEndInteract_Params
{
public:
	class UObject*                               CurieOwner;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Curie.CurieManager.UnbindDelegateForCurieElementDetached
struct UCurieManager_UnbindDelegateForCurieElementDetached_Params
{
public:
	class UObject*                               CurieOwner;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Curie.CurieManager.UnbindDelegateForCurieElementBeginInteract
struct UCurieManager_UnbindDelegateForCurieElementBeginInteract_Params
{
public:
	class UObject*                               CurieOwner;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Curie.CurieManager.UnbindDelegateForCurieElementAttached
struct UCurieManager_UnbindDelegateForCurieElementAttached_Params
{
public:
	class UObject*                               CurieOwner;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Curie.CurieManager.HandleContainerOwnerDestroyed
struct UCurieManager_HandleContainerOwnerDestroyed_Params
{
public:
	class AActor*                                OwnerActor;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Curie.CurieManager.BindDelegateForCurieStateDetached
struct UCurieManager_BindDelegateForCurieStateDetached_Params
{
public:
	class UObject*                               CurieOwner;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Curie.CurieManager.BindDelegateForCurieStateAttached
struct UCurieManager_BindDelegateForCurieStateAttached_Params
{
public:
	class UObject*                               CurieOwner;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Curie.CurieManager.BindDelegateForCurieElementInteract
struct UCurieManager_BindDelegateForCurieElementInteract_Params
{
public:
	class UObject*                               CurieOwner;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Curie.CurieManager.BindDelegateForCurieElementEndInteract
struct UCurieManager_BindDelegateForCurieElementEndInteract_Params
{
public:
	class UObject*                               CurieOwner;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Curie.CurieManager.BindDelegateForCurieElementDetached
struct UCurieManager_BindDelegateForCurieElementDetached_Params
{
public:
	class UObject*                               CurieOwner;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Curie.CurieManager.BindDelegateForCurieElementBeginInteract
struct UCurieManager_BindDelegateForCurieElementBeginInteract_Params
{
public:
	class UObject*                               CurieOwner;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Curie.CurieManager.BindDelegateForCurieElementAttached
struct UCurieManager_BindDelegateForCurieElementAttached_Params
{
public:
	class UObject*                               CurieOwner;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

}
}


