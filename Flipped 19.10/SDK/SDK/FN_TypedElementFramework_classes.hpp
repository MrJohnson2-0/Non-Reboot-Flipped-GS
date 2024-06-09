#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class TypedElementFramework.TypedElementCounterInterface
class ITypedElementCounterInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ITypedElementCounterInterface* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class TypedElementFramework.TestTypedElementInterfaceA
class ITestTypedElementInterfaceA : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ITestTypedElementInterfaceA* GetDefaultObj();

	bool SetDisplayName(struct FTypedElementHandle& InElementHandle, class FText InNewName, bool bNotify);
	class FText GetDisplayName(struct FTypedElementHandle& InElementHandle);
};

// 0x0 (0x28 - 0x28)
// Class TypedElementFramework.TestTypedElementInterfaceB
class ITestTypedElementInterfaceB : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ITestTypedElementInterfaceB* GetDefaultObj();

	bool MarkAsTested(struct FTypedElementHandle& InElementHandle);
};

// 0x0 (0x28 - 0x28)
// Class TypedElementFramework.TestTypedElementInterfaceC
class ITestTypedElementInterfaceC : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ITestTypedElementInterfaceC* GetDefaultObj();

	bool GetIsTested(struct FTypedElementHandle& InElementHandle);
};

// 0x8 (0x30 - 0x28)
// Class TypedElementFramework.TestTypedElementInterfaceA_ImplTyped
class UTestTypedElementInterfaceA_ImplTyped : public UObject
{
public:
	uint8                                        Pad_3C08[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTestTypedElementInterfaceA_ImplTyped* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class TypedElementFramework.TestTypedElementInterfaceA_ImplUntyped
class UTestTypedElementInterfaceA_ImplUntyped : public UObject
{
public:
	uint8                                        Pad_3C09[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTestTypedElementInterfaceA_ImplUntyped* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class TypedElementFramework.TestTypedElementInterfaceBAndC_Typed
class UTestTypedElementInterfaceBAndC_Typed : public UObject
{
public:
	uint8                                        Pad_3C0A[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTestTypedElementInterfaceBAndC_Typed* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class TypedElementFramework.TypedElementHandleLibrary
class UTypedElementHandleLibrary : public UObject
{
public:

	static class UClass* StaticClass();
	static class UTypedElementHandleLibrary* GetDefaultObj();

	void Release(struct FTypedElementHandle& ElementHandle);
	bool NotEqual(struct FTypedElementHandle& LHS, struct FTypedElementHandle& RHS);
	bool IsSet(struct FTypedElementHandle& ElementHandle);
	bool Equal(struct FTypedElementHandle& LHS, struct FTypedElementHandle& RHS);
};

// 0x0 (0x28 - 0x28)
// Class TypedElementFramework.TypedElementListLibrary
class UTypedElementListLibrary : public UObject
{
public:

	static class UClass* StaticClass();
	static class UTypedElementListLibrary* GetDefaultObj();

	void Shrink(const struct FTypedElementListProxy& ElementList);
	void Reset(const struct FTypedElementListProxy& ElementList);
	void Reserve(const struct FTypedElementListProxy& ElementList, int32 Size);
	bool Remove(const struct FTypedElementListProxy& ElementList, struct FTypedElementHandle& ElementHandle);
	int32 Num(const struct FTypedElementListProxy& ElementList);
	bool IsValidIndex(const struct FTypedElementListProxy& ElementList, int32 Index);
	bool HasElementsOfType(const struct FTypedElementListProxy& ElementList, class FName ElementTypeName);
	bool HasElements(const struct FTypedElementListProxy& ElementList, TSubclassOf<class IInterface> BaseInterfaceType);
	class UObject* GetElementInterface(const struct FTypedElementListProxy& ElementList, struct FTypedElementHandle& ElementHandle, TSubclassOf<class IInterface> BaseInterfaceType);
	TArray<struct FTypedElementHandle> GetElementHandles(const struct FTypedElementListProxy& ElementList, TSubclassOf<class IInterface> BaseInterfaceType);
	struct FTypedElementHandle GetElementHandleAt(const struct FTypedElementListProxy& ElementList, int32 Index);
	void Empty(const struct FTypedElementListProxy& ElementList, int32 Slack);
	struct FTypedElementListProxy CreateElementList(class UTypedElementRegistry* Registry);
	int32 CountElementsOfType(const struct FTypedElementListProxy& ElementList, class FName ElementTypeName);
	int32 CountElements(const struct FTypedElementListProxy& ElementList, TSubclassOf<class IInterface> BaseInterfaceType);
	bool Contains(const struct FTypedElementListProxy& ElementList, struct FTypedElementHandle& ElementHandle);
	struct FTypedElementListProxy Clone(const struct FTypedElementListProxy& ElementList);
	void AppendList(const struct FTypedElementListProxy& ElementList, const struct FTypedElementListProxy& OtherElementList);
	void Append(const struct FTypedElementListProxy& ElementList, TArray<struct FTypedElementHandle>& ElementHandles);
	bool Add(const struct FTypedElementListProxy& ElementList, struct FTypedElementHandle& ElementHandle);
};

// 0x8D0 (0x8F8 - 0x28)
// Class TypedElementFramework.TypedElementRegistry
class UTypedElementRegistry : public UObject
{
public:
	uint8                                        Pad_3C3B[0x8D0];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTypedElementRegistry* GetDefaultObj();

	class UTypedElementRegistry* GetInstance();
	class UObject* GetElementInterface(struct FTypedElementHandle& InElementHandle, TSubclassOf<class IInterface> InBaseInterfaceType);
};

}


