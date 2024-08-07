#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x180 (0x1A8 - 0x28)
// Class DataAssetDirectory.DataAssetDirectoryManager
class UDataAssetDirectoryManager : public UObject
{
public:
	uint8                                        Pad_309[0x168];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDateTime                             LastUpdateCheck;                                   // 0x190(0x8)(ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bUpdateCheckPending;                               // 0x198(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_30A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	uint32                                       UpdateCheckLimitSeconds;                           // 0x19C(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bEnabled;                                          // 0x1A0(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bFailOnError;                                      // 0x1A1(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAnalyticsEnabled;                                 // 0x1A2(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_30B[0x5];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDataAssetDirectoryManager* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class DataAssetDirectory.DataAssetDirectoryPatcher
class UDataAssetDirectoryPatcher : public UObject
{
public:

	static class UClass* StaticClass();
	static class UDataAssetDirectoryPatcher* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class DataAssetDirectory.DataAssetDirectorySimpleObject
class UDataAssetDirectorySimpleObject : public UObject
{
public:
	int32                                        IntProperty;                                       // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_30E[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDataAssetDirectorySimpleObject* GetDefaultObj();

};

// 0x50 (0x78 - 0x28)
// Class DataAssetDirectory.DataAssetDirectoryTestPODAsset
class UDataAssetDirectoryTestPODAsset : public UObject
{
public:
	class FString                                AssetName;                                         // 0x28(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDataAssetDirectoryTestEnum       EnumProperty;                                      // 0x38(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_310[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        IntProperty;                                       // 0x3C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FloatProperty;                                     // 0x40(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         BoolProperty;                                      // 0x44(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_311[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                StringProperty;                                    // 0x48(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  NameProperty;                                      // 0x58(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  TextProperty;                                      // 0x60(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UDataAssetDirectoryTestPODAsset* GetDefaultObj();

};

// 0x40 (0x68 - 0x28)
// Class DataAssetDirectory.DataAssetDirectoryTestStructAsset
class UDataAssetDirectoryTestStructAsset : public UObject
{
public:
	struct FDataAssetDirectoryTestPODStruct      TestStruct;                                        // 0x28(0x40)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UDataAssetDirectoryTestStructAsset* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class DataAssetDirectory.DataAssetDirectoryTestArrayAsset
class UDataAssetDirectoryTestArrayAsset : public UObject
{
public:
	TArray<int32>                                IntArray;                                          // 0x28(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FDataAssetDirectoryTestSimpleStruct> SimpleStructArray;                                 // 0x38(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UDataAssetDirectoryTestArrayAsset* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class DataAssetDirectory.DataAssetDirectoryTestObjectAsset
class UDataAssetDirectoryTestObjectAsset : public UObject
{
public:
	class UDataAssetDirectorySimpleObject*       SimpleObject;                                      // 0x28(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UDataAssetDirectoryTestObjectAsset* GetDefaultObj();

};

// 0xF0 (0x118 - 0x28)
// Class DataAssetDirectory.DataAssetDirectoryTestMapAsset
class UDataAssetDirectoryTestMapAsset : public UObject
{
public:
	TMap<class FString, int32>                   StringIntMap;                                      // 0x28(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<class FString, int32>                   ShrinkStringIntMap;                                // 0x78(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<class FString, int32>                   GrowStringIntMap;                                  // 0xC8(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UDataAssetDirectoryTestMapAsset* GetDefaultObj();

};

}


