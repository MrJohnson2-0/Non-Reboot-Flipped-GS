#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class TypedElementRuntime.TypedElementAssetDataInterface
class ITypedElementAssetDataInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ITypedElementAssetDataInterface* GetDefaultObj();

	struct FAssetData GetAssetData(struct FTypedElementHandle& InElementHandle);
	TArray<struct FAssetData> GetAllReferencedAssetDatas(struct FTypedElementHandle& InElementHandle);
};

// 0x0 (0x28 - 0x28)
// Class TypedElementRuntime.TypedElementHierarchyInterface
class ITypedElementHierarchyInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ITypedElementHierarchyInterface* GetDefaultObj();

	struct FTypedElementHandle GetParentElement(struct FTypedElementHandle& InElementHandle, bool bAllowCreate);
	void GetChildElements(struct FTypedElementHandle& InElementHandle, TArray<struct FTypedElementHandle>* OutElementHandles, bool bAllowCreate);
};

// 0x0 (0x28 - 0x28)
// Class TypedElementRuntime.TypedElementObjectInterface
class ITypedElementObjectInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ITypedElementObjectInterface* GetDefaultObj();

	class UClass* GetObjectClass(struct FTypedElementHandle& InElementHandle);
	class UObject* GetObject(struct FTypedElementHandle& InElementHandle);
};

// 0x0 (0x28 - 0x28)
// Class TypedElementRuntime.TypedElementSelectionInterface
class ITypedElementSelectionInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ITypedElementSelectionInterface* GetDefaultObj();

	bool SelectElement(struct FTypedElementHandle& InElementHandle, const struct FTypedElementListProxy& InSelectionSet, struct FTypedElementSelectionOptions& InSelectionOptions);
	bool IsElementSelected(struct FTypedElementHandle& InElementHandle, const struct FTypedElementListProxy& InSelectionSet, struct FTypedElementIsSelectedOptions& InSelectionOptions);
	struct FTypedElementHandle GetSelectionElement(struct FTypedElementHandle& InElementHandle, const struct FTypedElementListProxy& InCurrentSelection, enum class ETypedElementSelectionMethod InSelectionMethod);
	bool DeselectElement(struct FTypedElementHandle& InElementHandle, const struct FTypedElementListProxy& InSelectionSet, struct FTypedElementSelectionOptions& InSelectionOptions);
	bool CanSelectElement(struct FTypedElementHandle& InElementHandle, struct FTypedElementSelectionOptions& InSelectionOptions);
	bool CanDeselectElement(struct FTypedElementHandle& InElementHandle, struct FTypedElementSelectionOptions& InSelectionOptions);
	bool AllowSelectionModifiers(struct FTypedElementHandle& InElementHandle, const struct FTypedElementListProxy& InSelectionSet);
};

// 0x870 (0x898 - 0x28)
// Class TypedElementRuntime.TypedElementSelectionSet
class UTypedElementSelectionSet : public UObject
{
public:
	uint8                                        Pad_4B23[0x800];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnPreSelectionChange;                              // 0x828(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnSelectionChange;                                 // 0x838(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_4B25[0x50];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTypedElementSelectionSet* GetDefaultObj();

	bool SetSelection(TArray<struct FTypedElementHandle>& InElementHandles, const struct FTypedElementSelectionOptions& InSelectionOptions);
	bool SelectElements(TArray<struct FTypedElementHandle>& InElementHandles, const struct FTypedElementSelectionOptions& InSelectionOptions);
	bool SelectElement(struct FTypedElementHandle& InElementHandle, const struct FTypedElementSelectionOptions& InSelectionOptions);
	void RestoreSelectionState(struct FTypedElementSelectionSetState& InSelectionState);
	void OnPreChangeDynamic__DelegateSignature(class UTypedElementSelectionSet* SelectionSet);
	void OnChangeDynamic__DelegateSignature(class UTypedElementSelectionSet* SelectionSet);
	bool IsElementSelected(struct FTypedElementHandle& InElementHandle, const struct FTypedElementIsSelectedOptions& InSelectionOptions);
	bool HasSelectedObjects(class UClass* InRequiredClass);
	bool HasSelectedElements(TSubclassOf<class IInterface> InBaseInterfaceType);
	class UObject* GetTopSelectedObject(class UClass* InRequiredClass);
	struct FTypedElementHandle GetSelectionElement(struct FTypedElementHandle& InElementHandle, enum class ETypedElementSelectionMethod InSelectionMethod);
	TArray<class UObject*> GetSelectedObjects(class UClass* InRequiredClass);
	TArray<struct FTypedElementHandle> GetSelectedElementHandles(TSubclassOf<class IInterface> InBaseInterfaceType);
	int32 GetNumSelectedElements();
	struct FTypedElementSelectionSetState GetCurrentSelectionState();
	class UObject* GetBottomSelectedObject(class UClass* InRequiredClass);
	bool DeselectElements(TArray<struct FTypedElementHandle>& InElementHandles, const struct FTypedElementSelectionOptions& InSelectionOptions);
	bool DeselectElement(struct FTypedElementHandle& InElementHandle, const struct FTypedElementSelectionOptions& InSelectionOptions);
	int32 CountSelectedObjects(class UClass* InRequiredClass);
	int32 CountSelectedElements(TSubclassOf<class IInterface> InBaseInterfaceType);
	bool ClearSelection(const struct FTypedElementSelectionOptions& InSelectionOptions);
	bool CanSelectElement(struct FTypedElementHandle& InElementHandle, const struct FTypedElementSelectionOptions& InSelectionOptions);
	bool CanDeselectElement(struct FTypedElementHandle& InElementHandle, const struct FTypedElementSelectionOptions& InSelectionOptions);
	bool AllowSelectionModifiers(struct FTypedElementHandle& InElementHandle);
};

// 0x0 (0x28 - 0x28)
// Class TypedElementRuntime.TypedElementSelectionSetLibrary
class UTypedElementSelectionSetLibrary : public UObject
{
public:

	static class UClass* StaticClass();
	static class UTypedElementSelectionSetLibrary* GetDefaultObj();

	bool SetSelectionFromList(class UTypedElementSelectionSet* SelectionSet, const struct FTypedElementListProxy& ElementList, const struct FTypedElementSelectionOptions& SelectionOptions);
	bool SelectElementsFromList(class UTypedElementSelectionSet* SelectionSet, const struct FTypedElementListProxy& ElementList, const struct FTypedElementSelectionOptions& SelectionOptions);
	struct FTypedElementListProxy GetNormalizedSelection(class UTypedElementSelectionSet* SelectionSet, const struct FTypedElementSelectionNormalizationOptions& NormalizationOptions);
	struct FTypedElementListProxy GetNormalizedElementList(class UTypedElementSelectionSet* SelectionSet, const struct FTypedElementListProxy& ElementList, const struct FTypedElementSelectionNormalizationOptions& NormalizationOptions);
	bool DeselectElementsFromList(class UTypedElementSelectionSet* SelectionSet, const struct FTypedElementListProxy& ElementList, const struct FTypedElementSelectionOptions& SelectionOptions);
};

}


