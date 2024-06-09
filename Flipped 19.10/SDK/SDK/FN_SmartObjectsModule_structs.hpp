#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ESmartObjectSlotState : uint8
{
	Free                           = 0,
	Claimed                        = 1,
	Occupied                       = 2,
	MAX                            = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x4 (0x4 - 0x0)
// ScriptStruct SmartObjectsModule.SmartObjectID
struct FSmartObjectID
{
public:
	uint32                                       ID;                                                // 0x0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct SmartObjectsModule.SmartObjectCollectionEntry
struct FSmartObjectCollectionEntry
{
public:
	struct FSmartObjectID                        ID;                                                // 0x0(0x4)(Edit, EditConst, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_44C3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSoftObjectPath                       Path;                                              // 0x8(0x18)(ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FTransform                            Transform;                                         // 0x20(0x30)(IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FBox                                  Bounds;                                            // 0x50(0x1C)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint32                                       DefinitionIdx;                                     // 0x6C(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct SmartObjectsModule.SmartObjectSlot
struct FSmartObjectSlot
{
public:
	struct FGameplayTagQuery                     UserTagFilter;                                     // 0x0(0x48)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FVector                               Offset;                                            // 0x48(0xC)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Direction;                                         // 0x54(0xC)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class USmartObjectBehaviorDefinition*> BehaviorDefinitions;                               // 0x60(0x10)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct SmartObjectsModule.SmartObjectSlotIndex
struct FSmartObjectSlotIndex
{
public:
	int32                                        Index;                                             // 0x0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0xC (0xC - 0x0)
// ScriptStruct SmartObjectsModule.SmartObjectClaimHandle
struct FSmartObjectClaimHandle
{
public:
	struct FSmartObjectID                        SmartObjectID;                                     // 0x0(0x4)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSmartObjectSlotIndex                 SlotIndex;                                         // 0x4(0x4)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_44C5[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct SmartObjectsModule.SmartObjectSlotRuntimeData
struct FSmartObjectSlotRuntimeData
{
public:
	uint8                                        Pad_44C7[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct SmartObjectsModule.SmartObjectRuntime
struct FSmartObjectRuntime
{
public:
	TArray<struct FSmartObjectSlotRuntimeData>   SlotsRuntimeData;                                  // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	class USmartObjectDefinition*                Definition;                                        // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_44C8[0x98];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct SmartObjectsModule.SmartObjectRequestFilter
struct FSmartObjectRequestFilter
{
public:
	struct FGameplayTagContainer                 UserTags;                                          // 0x0(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGameplayTagQuery                     ActivityRequirements;                              // 0x20(0x48)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TSubclassOf<class USmartObjectBehaviorDefinition> BehaviorDefinitionClass;                           // 0x68(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_44C9[0x40];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xD0 (0xD0 - 0x0)
// ScriptStruct SmartObjectsModule.SmartObjectRequest
struct FSmartObjectRequest
{
public:
	struct FBox                                  QueryBox;                                          // 0x0(0x1C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_44CA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSmartObjectRequestFilter             Filter;                                            // 0x20(0xB0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct SmartObjectsModule.SmartObjectRequestResult
struct FSmartObjectRequestResult
{
public:
	struct FSmartObjectID                        SmartObjectID;                                     // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSmartObjectSlotIndex                 SlotIndex;                                         // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


