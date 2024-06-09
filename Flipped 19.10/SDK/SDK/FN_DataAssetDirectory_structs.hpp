#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EDataAssetDirectoryUpdateStatus : uint8
{
	Failed                         = 0,
	Success                        = 1,
	SuccessNoChange                = 2,
	EDataAssetDirectoryUpdateStatus_MAX = 3,
};

enum class EDataAssetDirectoryTestEnum : uint8
{
	A                              = 0,
	B                              = 1,
	C                              = 2,
	D                              = 3,
	EDataAssetDirectoryTestEnum_MAX = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x40 - 0x0)
// ScriptStruct DataAssetDirectory.DataAssetDirectoryTestPODStruct
struct FDataAssetDirectoryTestPODStruct
{
public:
	enum class EDataAssetDirectoryTestEnum       EnumProperty;                                      // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_31C[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        IntProperty;                                       // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FloatProperty;                                     // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         BoolProperty;                                      // 0xC(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_31D[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                StringProperty;                                    // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  NameProperty;                                      // 0x20(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  TextProperty;                                      // 0x28(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct DataAssetDirectory.DataAssetDirectoryTestSimpleStruct
struct FDataAssetDirectoryTestSimpleStruct
{
public:
	int32                                        IntProperty;                                       // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


