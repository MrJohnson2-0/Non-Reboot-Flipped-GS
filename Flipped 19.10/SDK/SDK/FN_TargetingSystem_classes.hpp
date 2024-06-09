#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class TargetingSystem.TargetingTask
class UTargetingTask : public UObject
{
public:

	static class UClass* StaticClass();
	static class UTargetingTask* GetDefaultObj();

};

// 0x80 (0xA8 - 0x28)
// Class TargetingSystem.TargetingSelectionTask_Trace
class UTargetingSelectionTask_Trace : public UTargetingTask
{
public:
	enum class ETargetingTraceType               TraceType;                                         // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ETraceTypeQuery                   TraceChannel;                                      // 0x29(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_393D[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCollisionProfileName                 CollisionProfileName;                              // 0x2C(0x8)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_393E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScalableFloat                        DefaultSweptTraceRadius;                           // 0x38(0x28)(Edit, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        DefaultTraceLength;                                // 0x60(0x28)(Edit, Protected, NativeAccessSpecifierProtected)
	struct FVector                               DefaultSourceOffset;                               // 0x88(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               ExplicitTraceDirection;                            // 0x94(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bComplexTrace : 1;                                 // Mask: 0x1, PropSize: 0x10xA0(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bIgnoreSourceActor : 1;                            // Mask: 0x2, PropSize: 0x10xA0(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bIgnoreInstigatorActor : 1;                        // Mask: 0x4, PropSize: 0x10xA0(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3944[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTargetingSelectionTask_Trace* GetDefaultObj();

	float GetTraceLength(struct FTargetingRequestHandle& TargetingHandle);
	struct FVector GetTraceDirection(struct FTargetingRequestHandle& TargetingHandle);
	float GetSweptTraceRadius(struct FTargetingRequestHandle& TargetingHandle);
	struct FVector GetSourceOffset(struct FTargetingRequestHandle& TargetingHandle);
	struct FVector GetSourceLocation(struct FTargetingRequestHandle& TargetingHandle);
	void GetAdditionalActorsToIgnore(struct FTargetingRequestHandle& TargetingHandle, TArray<class AActor*>* OutAdditionalActorsToIgnore);
};

// 0x38 (0x68 - 0x30)
// Class TargetingSystem.AsyncAction_PerformTargeting
class UAsyncAction_PerformTargeting : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            Targeted;                                          // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UTargetingPreset*                      TargetingPreset;                                   // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AActor*                                SourceActor;                                       // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class AActor*>                        InitialTargets;                                    // 0x50(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        bUseAsyncTargeting : 1;                            // Mask: 0x1, PropSize: 0x10x60(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3963[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAsyncAction_PerformTargeting* GetDefaultObj();

	class UAsyncAction_PerformTargeting* PerformTargetingRequest(class AActor* SourceActor, class UTargetingPreset* TargetingPreset, bool bUseAsyncTargeting);
	class UAsyncAction_PerformTargeting* PerformFilteringRequest(class AActor* SourceActor, class UTargetingPreset* TargetingPreset, bool bUseAsyncTargeting, const TArray<class AActor*>& InTargets);
};

// 0x0 (0x28 - 0x28)
// Class TargetingSystem.TargetingFilterTask_BasicFilterTemplate
class UTargetingFilterTask_BasicFilterTemplate : public UTargetingTask
{
public:

	static class UClass* StaticClass();
	static class UTargetingFilterTask_BasicFilterTemplate* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class TargetingSystem.TargetingFilterTask_ActorClass
class UTargetingFilterTask_ActorClass : public UTargetingFilterTask_BasicFilterTemplate
{
public:
	TArray<class UClass*>                        RequiredActorClassFilters;                         // 0x28(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class UClass*>                        IgnoredActorClassFilters;                          // 0x38(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UTargetingFilterTask_ActorClass* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class TargetingSystem.TargetingFilterTask_SortByDistance
class UTargetingFilterTask_SortByDistance : public UTargetingTask
{
public:
	uint8                                        bAscending : 1;                                    // Mask: 0x1, PropSize: 0x10x28(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_396E[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTargetingFilterTask_SortByDistance* GetDefaultObj();

};

// 0x10 (0x40 - 0x30)
// Class TargetingSystem.TargetingPreset
class UTargetingPreset : public UDataAsset
{
public:
	struct FTargetingTaskSet                     TargetingTaskSet;                                  // 0x30(0x10)(Edit, ContainsInstancedReference, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UTargetingPreset* GetDefaultObj();

};

// 0x98 (0xC0 - 0x28)
// Class TargetingSystem.TargetingSelectionTask_AOE
class UTargetingSelectionTask_AOE : public UTargetingTask
{
public:
	enum class ETargetingAOEShape                ShapeType;                                         // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ECollisionChannel                 CollisionChannel;                                  // 0x29(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_397D[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCollisionProfileName                 CollisionProfileName;                              // 0x2C(0x8)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_397F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EObjectTypeQuery>          CollisionObjectTypes;                              // 0x38(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	struct FVector                               DefaultSourceOffset;                               // 0x48(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bIgnoreSourceActor : 1;                            // Mask: 0x1, PropSize: 0x10x54(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bIgnoreInstigatorActor : 1;                        // Mask: 0x2, PropSize: 0x10x54(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_284 : 6;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3981[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               HalfExtent;                                        // 0x58(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3982[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScalableFloat                        Radius;                                            // 0x68(0x28)(Edit, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        HalfHeight;                                        // 0x90(0x28)(Edit, Protected, NativeAccessSpecifierProtected)
	class FName                                  ComponentTag;                                      // 0xB8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UTargetingSelectionTask_AOE* GetDefaultObj();

	struct FVector GetSourceOffset(struct FTargetingRequestHandle& TargetingHandle);
	struct FVector GetSourceLocation(struct FTargetingRequestHandle& TargetingHandle);
};

// 0x0 (0x28 - 0x28)
// Class TargetingSystem.TargetingSelectionTask_SourceActor
class UTargetingSelectionTask_SourceActor : public UTargetingTask
{
public:

	static class UClass* StaticClass();
	static class UTargetingSelectionTask_SourceActor* GetDefaultObj();

};

// 0x20 (0x50 - 0x30)
// Class TargetingSystem.TargetingSubsystem
class UTargetingSubsystem : public UGameInstanceSubsystem
{
public:
	uint8                                        Pad_39A5[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FTargetingRequestHandle>       AsyncTargetingRequests;                            // 0x40(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UTargetingSubsystem* GetDefaultObj();

	void StartAsyncTargetingRequest(class UTargetingPreset* TargetingPreset, struct FTargetingSourceContext& InSourceContext, FDelegateProperty_ CompletionDynamicDelegate);
	struct FTargetingSourceContext GetTargetingSourceContext(const struct FTargetingRequestHandle& TargetingHandle);
	void GetTargetingResultsActors(const struct FTargetingRequestHandle& TargetingHandle, TArray<class AActor*>* Targets);
	void GetTargetingResults(const struct FTargetingRequestHandle& TargetingHandle, TArray<struct FHitResult>* OutTargets);
	void ExecuteTargetingRequest(class UTargetingPreset* TargetingPreset, struct FTargetingSourceContext& InSourceContext, FDelegateProperty_ CompletionDynamicDelegate);
};

}


