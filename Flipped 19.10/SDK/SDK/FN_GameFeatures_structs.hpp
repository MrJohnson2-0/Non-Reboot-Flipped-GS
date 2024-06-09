#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EGameFeatureTargetState : uint8
{
	Installed                      = 0,
	Registered                     = 1,
	Loaded                         = 2,
	Active                         = 3,
	EGameFeatureTargetState_MAX    = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x58 - 0x0)
// ScriptStruct GameFeatures.GameFeatureComponentEntry
struct FGameFeatureComponentEntry
{
public:
	TSoftClassPtr<class AActor>                  ActorClass;                                        // 0x0(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UActorComponent>         ComponentClass;                                    // 0x28(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bClientComponent : 1;                              // Mask: 0x1, PropSize: 0x10x50(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bServerComponent : 1;                              // Mask: 0x2, PropSize: 0x10x50(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10E3[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// ScriptStruct GameFeatures.DataRegistrySourceToAdd
struct FDataRegistrySourceToAdd
{
public:
	class FName                                  RegistryToAddTo;                                   // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AssetPriority;                                     // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bClientSource : 1;                                 // Mask: 0x1, PropSize: 0x10xC(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bServerSource : 1;                                 // Mask: 0x2, PropSize: 0x10xC(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_86 : 6;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_10E4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UDataTable>             DataTableToAdd;                                    // 0x10(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UCurveTable>            CurveTableToAdd;                                   // 0x38(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct GameFeatures.GameFeaturePluginStateMachineProperties
struct FGameFeaturePluginStateMachineProperties
{
public:
	uint8                                        Pad_10E5[0x50];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameFeatureData*                      GameFeatureData;                                   // 0x50(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10E6[0x48];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

}


