#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0xB0 - 0x70)
// Class SmartObjectsModule.AITask_UseSmartObject
class UAITask_UseSmartObject : public UAITask
{
public:
	FMulticastInlineDelegateProperty_            OnFinished;                                        // 0x70(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	class UAITask_MoveTo*                        MoveToTask;                                        // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGameplayBehavior*                     GameplayBehavior;                                  // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_449E[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAITask_UseSmartObject* GetDefaultObj();

	class UAITask_UseSmartObject* UseSmartObject(class AAIController* Controller, class AActor* SmartObjectActor, class USmartObjectComponent* SmartObjectComponent, bool bLockAILogic);
	class UAITask_UseSmartObject* UseClaimedSmartObject(class AAIController* Controller, const struct FSmartObjectClaimHandle& ClaimHandle, bool bLockAILogic);
};

// 0x10 (0x40 - 0x30)
// Class SmartObjectsModule.BlackboardKeyType_SOClaimHandle
class UBlackboardKeyType_SOClaimHandle : public UBlackboardKeyType
{
public:
	struct FSmartObjectClaimHandle               Handle;                                            // 0x30(0xC)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_44A0[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBlackboardKeyType_SOClaimHandle* GetDefaultObj();

};

// 0x50 (0xC0 - 0x70)
// Class SmartObjectsModule.BTTask_FindAndUseSmartObject
class UBTTask_FindAndUseSmartObject : public UBTTaskNode
{
public:
	struct FGameplayTagQuery                     ActivityRequirements;                              // 0x70(0x48)(Edit, Protected, NativeAccessSpecifierProtected)
	float                                        Radius;                                            // 0xB8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_44A3[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBTTask_FindAndUseSmartObject* GetDefaultObj();

};

// 0x8 (0x228 - 0x220)
// Class SmartObjectsModule.GenericSmartObject
class AGenericSmartObject : public AActor
{
public:
	class USmartObjectComponent*                 SOComponent;                                       // 0x220(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoClear, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class AGenericSmartObject* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class SmartObjectsModule.SmartObjectBlueprintFunctionLibrary
class USmartObjectBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class USmartObjectBlueprintFunctionLibrary* GetDefaultObj();

	void SetValueAsSOClaimHandle(class UBlackboardComponent* BlackboardComponent, class FName& KeyName, const struct FSmartObjectClaimHandle& Value);
	bool K2_UseSmartObject(class AActor* Avatar, class AActor* SmartObject);
	bool K2_SetSmartObjectEnabled(class AActor* SmartObject, bool bEnabled);
	bool K2_RemoveLooseGameplayTags(class AActor* Actor, struct FGameplayTagContainer& GameplayTags);
	bool K2_AddLooseGameplayTags(class AActor* Actor, struct FGameplayTagContainer& GameplayTags);
	bool IsValidSmartObjectClaimHandle(const struct FSmartObjectClaimHandle& Handle);
	struct FSmartObjectClaimHandle GetValueAsSOClaimHandle(class UBlackboardComponent* BlackboardComponent, class FName& KeyName);
};

// 0x98 (0x2B8 - 0x220)
// Class SmartObjectsModule.SmartObjectCollection
class ASmartObjectCollection : public AActor
{
public:
	struct FBox                                  Bounds;                                            // 0x220(0x1C)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_44B0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSmartObjectCollectionEntry>   CollectionEntries;                                 // 0x240(0x10)(Edit, ZeroConstructor, EditConst, Protected, NativeAccessSpecifierProtected)
	TMap<struct FSmartObjectID, struct FSoftObjectPath> RegisteredIdToObjectMap;                           // 0x250(0x50)(Protected, NativeAccessSpecifierProtected)
	TArray<class USmartObjectDefinition*>        Definitions;                                       // 0x2A0(0x10)(Edit, ZeroConstructor, EditConst, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_44B1[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ASmartObjectCollection* GetDefaultObj();

};

// 0x10 (0x200 - 0x1F0)
// Class SmartObjectsModule.SmartObjectComponent
class USmartObjectComponent : public USceneComponent
{
public:
	class USmartObjectDefinition*                DefinitionAsset;                                   // 0x1F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FSmartObjectID                        RegisteredID;                                      // 0x1F8(0x4)(Edit, Transient, EditConst, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_44B2[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USmartObjectComponent* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class SmartObjectsModule.SmartObjectBehaviorDefinition
class USmartObjectBehaviorDefinition : public UObject
{
public:

	static class UClass* StaticClass();
	static class USmartObjectBehaviorDefinition* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class SmartObjectsModule.SmartObjectGameplayBehaviorDefinition
class USmartObjectGameplayBehaviorDefinition : public USmartObjectBehaviorDefinition
{
public:
	class UGameplayBehaviorConfig*               GameplayBehaviorConfig;                            // 0x28(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USmartObjectGameplayBehaviorDefinition* GetDefaultObj();

};

// 0xD8 (0x108 - 0x30)
// Class SmartObjectsModule.SmartObjectDefinition
class USmartObjectDefinition : public UDataAsset
{
public:
	TArray<struct FSmartObjectSlot>              Slots;                                             // 0x30(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<class USmartObjectBehaviorDefinition*> DefaultBehaviorDefinitions;                        // 0x40(0x10)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FGameplayTagQuery                     UserTagFilter;                                     // 0x50(0x48)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FGameplayTagQuery                     ObjectTagFilter;                                   // 0x98(0x48)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FGameplayTagContainer                 ActivityTags;                                      // 0xE0(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	uint8                                        Pad_44B3[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USmartObjectDefinition* GetDefaultObj();

};

// 0x0 (0x450 - 0x450)
// Class SmartObjectsModule.SmartObjectRenderingComponent
class USmartObjectRenderingComponent : public UPrimitiveComponent
{
public:

	static class UClass* StaticClass();
	static class USmartObjectRenderingComponent* GetDefaultObj();

};

// 0x110 (0x140 - 0x30)
// Class SmartObjectsModule.SmartObjectSubsystem
class USmartObjectSubsystem : public UWorldSubsystem
{
public:
	class ASmartObjectCollection*                MainCollection;                                    // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_44C1[0x108];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USmartObjectSubsystem* GetDefaultObj();

	class USmartObjectBehaviorDefinition* Use(struct FSmartObjectClaimHandle& ClaimHandle, TSubclassOf<class USmartObjectBehaviorDefinition>& DefinitionClass);
	bool Release(struct FSmartObjectClaimHandle& ClaimHandle);
	class USmartObjectComponent* GetSmartObjectComponent(struct FSmartObjectClaimHandle& ClaimHandle);
	bool GetSlotTransform(struct FSmartObjectClaimHandle& ClaimHandle, struct FTransform* OutSlotTransform);
	bool GetSlotLocation(struct FSmartObjectClaimHandle& ClaimHandle, struct FVector* OutSlotLocation);
	bool FindSmartObjects(struct FSmartObjectRequest& Request, TArray<struct FSmartObjectRequestResult>* OutResults);
	struct FSmartObjectRequestResult FindSmartObject(struct FSmartObjectRequest& Request);
	struct FSmartObjectClaimHandle Claim(struct FSmartObjectRequestResult& RequestResult);
};

}


