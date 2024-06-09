#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x1C (0x28 - 0xC)
// ScriptStruct ThrowingToyRuntime.ThrowingToyData
struct FThrowingToyData : public FFastArraySerializerItem
{
public:
	uint8                                        Pad_1AC8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                ThrowingToy;                                       // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 WorldItemGuid;                                     // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x118 - 0x108)
// ScriptStruct ThrowingToyRuntime.ThrowingToyDataArray
struct FThrowingToyDataArray : public FFastArraySerializer
{
public:
	TArray<struct FThrowingToyData>              Entries;                                           // 0x108(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

}


