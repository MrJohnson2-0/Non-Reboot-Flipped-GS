#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x298 (0x2C0 - 0x28)
// Class RigVM.RigVM
class URigVM : public UObject
{
public:
	class URigVMMemoryStorage*                   WorkMemoryStorageObject;                           // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URigVMMemoryStorage*                   LiteralMemoryStorageObject;                        // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URigVMMemoryStorage*                   DebugMemoryStorageObject;                          // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4E58[0x20];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigVMByteCode                        ByteCodeStorage;                                   // 0x60(0x30)(NativeAccessSpecifierPublic)
	uint8                                        Pad_4E59[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigVMInstructionArray                Instructions;                                      // 0x98(0x10)(Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_4E5A[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigVMExecuteContext                  Context;                                           // 0xB0(0xC0)(Transient, NativeAccessSpecifierPrivate)
	uint32                                       NumExecutions;                                     // 0x170(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_4E5B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          FunctionNamesStorage;                              // 0x178(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_4E5C[0x20];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigVMParameter>               Parameters;                                        // 0x1A8(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TMap<class FName, int32>                     ParametersNameMap;                                 // 0x1B8(0x50)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_4E5D[0x98];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class URigVM*                                DeferredVMToCopy;                                  // 0x2A0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_4E5E[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class URigVM* GetDefaultObj();

	void SetParameterValueVector2D(class FName& InParameterName, struct FVector2D& InValue, int32 InArrayIndex);
	void SetParameterValueVector(class FName& InParameterName, struct FVector& InValue, int32 InArrayIndex);
	void SetParameterValueTransform(class FName& InParameterName, struct FTransform& InValue, int32 InArrayIndex);
	void SetParameterValueString(class FName& InParameterName, const class FString& InValue, int32 InArrayIndex);
	void SetParameterValueQuat(class FName& InParameterName, struct FQuat& InValue, int32 InArrayIndex);
	void SetParameterValueName(class FName& InParameterName, class FName& InValue, int32 InArrayIndex);
	void SetParameterValueInt(class FName& InParameterName, int32 InValue, int32 InArrayIndex);
	void SetParameterValueFloat(class FName& InParameterName, float InValue, int32 InArrayIndex);
	void SetParameterValueDouble(class FName& InParameterName, double InValue, int32 InArrayIndex);
	void SetParameterValueBool(class FName& InParameterName, bool InValue, int32 InArrayIndex);
	struct FRigVMStatistics GetStatistics();
	class FString GetRigVMFunctionName(int32 InFunctionIndex);
	struct FVector2D GetParameterValueVector2D(class FName& InParameterName, int32 InArrayIndex);
	struct FVector GetParameterValueVector(class FName& InParameterName, int32 InArrayIndex);
	struct FTransform GetParameterValueTransform(class FName& InParameterName, int32 InArrayIndex);
	class FString GetParameterValueString(class FName& InParameterName, int32 InArrayIndex);
	struct FQuat GetParameterValueQuat(class FName& InParameterName, int32 InArrayIndex);
	class FName GetParameterValueName(class FName& InParameterName, int32 InArrayIndex);
	int32 GetParameterValueInt(class FName& InParameterName, int32 InArrayIndex);
	float GetParameterValueFloat(class FName& InParameterName, int32 InArrayIndex);
	double GetParameterValueDouble(class FName& InParameterName, int32 InArrayIndex);
	bool GetParameterValueBool(class FName& InParameterName, int32 InArrayIndex);
	bool Execute(class FName& InEntryName);
	int32 AddRigVMFunction(class UScriptStruct* InRigVMStruct, class FName& InMethodName);
};

// 0x38 (0x270 - 0x238)
// Class RigVM.RigVMMemoryStorageGeneratorClass
class URigVMMemoryStorageGeneratorClass : public UClass
{
public:
	uint8                                        Pad_4E5F[0x38];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class URigVMMemoryStorageGeneratorClass* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class RigVM.RigVMMemoryStorage
class URigVMMemoryStorage : public UObject
{
public:

	static class UClass* StaticClass();
	static class URigVMMemoryStorage* GetDefaultObj();

};

}


