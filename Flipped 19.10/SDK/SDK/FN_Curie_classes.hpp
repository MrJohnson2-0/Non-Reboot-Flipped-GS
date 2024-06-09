#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0xC8 - 0xB0)
// Class Curie.CurieComponent
class UCurieComponent : public UActorComponent
{
public:
	uint8                                        Pad_74[0x18];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCurieComponent* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Curie.CurieElementGameplayEffectOwner
class UCurieElementGameplayEffectOwner : public UObject
{
public:

	static class UClass* StaticClass();
	static class UCurieElementGameplayEffectOwner* GetDefaultObj();

};

// 0x98 (0xC0 - 0x28)
// Class Curie.CurieEntityStateBehavior
class UCurieEntityStateBehavior : public UCurieElementGameplayEffectOwner
{
public:
	struct FGameplayTagContainer                 RequiredAttachedElements;                          // 0x28(0x20)(Edit, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 RequiredInteractingElements;                       // 0x48(0x20)(Edit, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 AllowedAttachmentEntityTypes;                      // 0x68(0x20)(Edit, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TArray<struct FCurieEffectContainer>         OnBeginEffects;                                    // 0x88(0x10)(Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TArray<struct FCurieEffectContainer>         OngoingEffects;                                    // 0x98(0x10)(Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TArray<struct FCurieEffectContainer>         OnEndEffects;                                      // 0xA8(0x10)(Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	uint8                                        bShouldDetach : 1;                                 // Mask: 0x1, PropSize: 0x10xB8(0x1)(Edit, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bSkipExecuteAttachDetach : 1;                      // Mask: 0x2, PropSize: 0x10xB8(0x1)(Edit, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_76[0x7];                                       // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCurieEntityStateBehavior* GetDefaultObj();

};

// 0x28 (0x50 - 0x28)
// Class Curie.CurieGlobals
class UCurieGlobals : public UObject
{
public:
	bool                                         bEnableCurie;                                      // 0x28(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_79[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSoftClassPath                        CurieGlobalsClassName;                             // 0x30(0x18)(ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCurieManager*                         RegisteredCurieManager;                            // 0x48(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UCurieGlobals* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class Curie.CurieElementInteractWithElementHandler
class UCurieElementInteractWithElementHandler : public UObject
{
public:
	enum class ECurieHandlerPriority             HandlerPriority;                                   // 0x28(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ECurieHandlerBehavior             HandlerBehavior;                                   // 0x29(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7A[0x2];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          ElementTag;                                        // 0x2C(0x8)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7B[0x4];                                       // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCurieElementInteractWithElementHandler* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class Curie.CurieElementInteractWithMaterialHandler
class UCurieElementInteractWithMaterialHandler : public UObject
{
public:
	enum class ECurieHandlerPriority             HandlerPriority;                                   // 0x28(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ECurieHandlerBehavior             HandlerBehavior;                                   // 0x29(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7F[0x2];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          ElementTag;                                        // 0x2C(0x8)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_80[0x4];                                       // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCurieElementInteractWithMaterialHandler* GetDefaultObj();

};

// 0x40 (0x68 - 0x28)
// Class Curie.CurieElementAttachHandler
class UCurieElementAttachHandler : public UCurieElementGameplayEffectOwner
{
public:
	enum class ECurieHandlerPriority             HandlerPriority;                                   // 0x28(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class ECurieHandlerBehavior             HandlerBehavior;                                   // 0x29(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_83[0x2];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          ElementTag;                                        // 0x2C(0x8)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_84[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCurieEffectContainer>         OnBeginAttachmentEffects;                          // 0x38(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	TArray<struct FCurieEffectContainer>         OngoingAttachmentEffects;                          // 0x48(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	TArray<struct FCurieEffectContainer>         OnEndAttachmentEffects;                            // 0x58(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UCurieElementAttachHandler* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class Curie.CurieElementAttachConditionHandler
class UCurieElementAttachConditionHandler : public UObject
{
public:
	enum class ECurieHandlerPriority             HandlerPriority;                                   // 0x28(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8B[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          ElementTag;                                        // 0x2C(0x8)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8C[0x4];                                       // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCurieElementAttachConditionHandler* GetDefaultObj();

};

// 0x50 (0x78 - 0x28)
// Class Curie.CurieElementInteractWithContainerHandler
class UCurieElementInteractWithContainerHandler : public UCurieElementGameplayEffectOwner
{
public:
	enum class ECurieHandlerPriority             HandlerPriority;                                   // 0x28(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class ECurieHandlerBehavior             HandlerBehavior;                                   // 0x29(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_90[0x2];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          ElementTag;                                        // 0x2C(0x8)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_92[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCurieEffectContainer>         OnInstantInteractionEffects;                       // 0x38(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	TArray<struct FCurieEffectContainer>         OnBeginInteractionEffects;                         // 0x48(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	TArray<struct FCurieEffectContainer>         OngoingInteractionEffects;                         // 0x58(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	TArray<struct FCurieEffectContainer>         OnEndInteractionEffects;                           // 0x68(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UCurieElementInteractWithContainerHandler* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Curie.CurieInterface
class ICurieInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ICurieInterface* GetDefaultObj();

	void OnCurieStateDetached_BP(const struct FCurieContainerHandle& CurieContainerHandle, const struct FGameplayTag& StateTag);
	void OnCurieStateAttached_BP(const struct FCurieContainerHandle& CurieContainerHandle, const struct FGameplayTag& StateTag);
	void OnCurieElementInteractEnded_BP(const struct FCurieContainerHandle& CurieContainerHandle, const struct FGameplayTag& ElementTag, struct FCurieInteractParamsHandle& InteractParamsHandle);
	void OnCurieElementInteractBegun_BP(const struct FCurieContainerHandle& CurieContainerHandle, const struct FGameplayTag& ElementTag, struct FCurieInteractParamsHandle& InteractParamsHandle);
	void OnCurieElementInteract_BP(const struct FCurieContainerHandle& CurieContainerHandle, const struct FGameplayTag& ElementTag, struct FCurieInteractParamsHandle& InteractParamsHandle);
	void OnCurieElementDetached_BP(const struct FCurieContainerHandle& CurieContainerHandle, const struct FGameplayTag& ElementTag);
	void OnCurieElementAttached_BP(const struct FCurieContainerHandle& CurieContainerHandle, const struct FGameplayTag& ElementTag);
	void OnCurieContainerReparented_BP(const struct FCurieContainerHandle& CurieContainerHandle);
	void OnCurieContainerReleased_BP(const struct FCurieContainerHandle& CurieContainerHandle);
	void OnCurieContainerAcquired_BP(const struct FCurieContainerHandle& CurieContainerHandle);
};

// 0x500 (0x5B0 - 0xB0)
// Class Curie.CurieManager
class UCurieManager : public UGameStateComponent
{
public:
	TSubclassOf<class UCurieComponent>           CurieComponentClass;                               // 0xB0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  MaterialDataRegistryName;                          // 0xB8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  ElementDataRegistryName;                           // 0xC0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  EntityStateDataRegistryName;                       // 0xC8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_E0[0x2F8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<struct FGameplayTag, struct FCurieElementAttachHandlersContainer> ElementAttachmentHandlers;                         // 0x3C8(0x50)(Transient, NativeAccessSpecifierPrivate)
	TMap<struct FGameplayTag, struct FCurieElementAttachConditionHandlersContainer> ElementAttachmentConditionHandlers;                // 0x418(0x50)(Transient, NativeAccessSpecifierPrivate)
	TMap<struct FCurieElementPairKey, struct FCurieElementInteractWithElementHandlersContainer> ElementInteractWithElementHandlers;                // 0x468(0x50)(Transient, NativeAccessSpecifierPrivate)
	TMap<struct FGameplayTag, struct FCurieElementInteractWithMaterialHandlersContainer> ElementInteractWithMaterialHandlers;               // 0x4B8(0x50)(Transient, NativeAccessSpecifierPrivate)
	TMap<struct FGameplayTag, struct FCurieElementInteractWithContainerHandlersContainer> ElementInteractWithContainerHandlers;              // 0x508(0x50)(Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_E2[0x58];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCurieManager* GetDefaultObj();

	void UnbindDelegateForCurieStateDetached(class UObject* CurieOwner, FDelegateProperty_& Delegate);
	void UnbindDelegateForCurieStateAttached(class UObject* CurieOwner, FDelegateProperty_& Delegate);
	void UnbindDelegateForCurieElementInteract(class UObject* CurieOwner, FDelegateProperty_& Delegate);
	void UnbindDelegateForCurieElementEndInteract(class UObject* CurieOwner, FDelegateProperty_& Delegate);
	void UnbindDelegateForCurieElementDetached(class UObject* CurieOwner, FDelegateProperty_& Delegate);
	void UnbindDelegateForCurieElementBeginInteract(class UObject* CurieOwner, FDelegateProperty_& Delegate);
	void UnbindDelegateForCurieElementAttached(class UObject* CurieOwner, FDelegateProperty_& Delegate);
	void HandleContainerOwnerDestroyed(class AActor* OwnerActor);
	void BindDelegateForCurieStateDetached(class UObject* CurieOwner, FDelegateProperty_& Delegate);
	void BindDelegateForCurieStateAttached(class UObject* CurieOwner, FDelegateProperty_& Delegate);
	void BindDelegateForCurieElementInteract(class UObject* CurieOwner, FDelegateProperty_& Delegate);
	void BindDelegateForCurieElementEndInteract(class UObject* CurieOwner, FDelegateProperty_& Delegate);
	void BindDelegateForCurieElementDetached(class UObject* CurieOwner, FDelegateProperty_& Delegate);
	void BindDelegateForCurieElementBeginInteract(class UObject* CurieOwner, FDelegateProperty_& Delegate);
	void BindDelegateForCurieElementAttached(class UObject* CurieOwner, FDelegateProperty_& Delegate);
};

}


