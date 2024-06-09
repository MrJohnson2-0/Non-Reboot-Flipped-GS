#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x450 (0x478 - 0x28)
// Class ControlRig.ControlRig
class UControlRig : public UObject
{
public:
	uint8                                        Pad_227[0x1E];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ERigExecutionType                 ExecutionType;                                     // 0x46(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_228[0x9];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigVMRuntimeSettings                 VMRuntimeSettings;                                 // 0x50(0x50)(Edit, NativeAccessSpecifierPublic)
	TMap<struct FRigElementKey, struct FRigControlElementCustomization> ControlCustomizations;                             // 0xA0(0x50)(NativeAccessSpecifierPrivate)
	class URigVM*                                VM;                                                // 0xF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class URigHierarchy*                         DynamicHierarchy;                                  // 0xF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftObjectPtr<class UControlRigGizmoLibrary> GizmoLibrary;                                      // 0x100(0x28)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_22A[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FName, struct FCachedPropertyPath> InputProperties;                                   // 0x138(0x50)(Deprecated, NativeAccessSpecifierPrivate)
	TMap<class FName, struct FCachedPropertyPath> OutputProperties;                                  // 0x188(0x50)(Deprecated, NativeAccessSpecifierPrivate)
	uint8                                        Pad_22C[0xA0];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FControlRigDrawContainer              DrawContainer;                                     // 0x278(0x18)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_22E[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimationDataSourceRegistry*          DataSourceRegistry;                                // 0x2A8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class FName>                          EventQueue;                                        // 0x2B0(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_22F[0xA8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigInfluenceMapPerEvent              Influences;                                        // 0x368(0x60)(NativeAccessSpecifierPrivate)
	class UControlRig*                           InteractionRig;                                    // 0x3C8(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UControlRig>               InteractionRigClass;                               // 0x3D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UAssetUserData*>                AssetUserData;                                     // 0x3D8(0x10)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, AdvancedDisplay, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_230[0x90];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UControlRig* GetDefaultObj();

	bool SupportsEvent(class FName& InEventName);
	bool SetVariableFromString(class FName& InVariableName, const class FString& InValue);
	void SetInteractionRigClass(TSubclassOf<class UControlRig> InInteractionRigClass);
	void SetInteractionRig(class UControlRig* InInteractionRig);
	void SetFramesPerSecond(float InFramesPerSecond);
	void SetDeltaTime(float InDeltaTime);
	void SetAbsoluteTime(float InAbsoluteTime, bool InSetDeltaTimeZero);
	void SetAbsoluteAndDeltaTime(float InAbsoluteTime, float InDeltaTime);
	void SelectControl(class FName& InControlName, bool bSelect);
	void RequestSetup();
	void RequestInit();
	bool IsControlSelected(class FName& InControlName);
	class URigVM* GetVM();
	class FName GetVariableType(class FName& InVariableName);
	class FString GetVariableAsString(class FName& InVariableName);
	TArray<class FName> GetSupportedEvents();
	TArray<class FName> GetScriptAccessibleVariables();
	TSubclassOf<class UControlRig> GetInteractionRigClass();
	class UControlRig* GetInteractionRig();
	class URigHierarchy* GetHierarchy();
	float GetCurrentFramesPerSecond();
	float GetAbsoluteTime();
	TArray<class UControlRig*> FindControlRigs(class UObject* Outer, TSubclassOf<class UControlRig> OptionalClass);
	void Execute(enum class EControlRigState State, class FName& InEventName);
	TArray<class FName> CurrentControlSelection();
	bool ClearControlSelection();
	bool CanExecute();
};

// 0x18 (0x490 - 0x478)
// Class ControlRig.AdditiveControlRig
class UAdditiveControlRig : public UControlRig
{
public:
	uint8                                        Pad_232[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAdditiveControlRig* GetDefaultObj();

};

// 0x8 (0x320 - 0x318)
// Class ControlRig.ControlRigAnimInstance
class UControlRigAnimInstance : public UAnimInstance
{
public:
	uint8                                        Pad_234[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UControlRigAnimInstance* GetDefaultObj();

};

// 0x0 (0x330 - 0x330)
// Class ControlRig.ControlRigBlueprintGeneratedClass
class UControlRigBlueprintGeneratedClass : public UBlueprintGeneratedClass
{
public:

	static class UClass* StaticClass();
	static class UControlRigBlueprintGeneratedClass* GetDefaultObj();

};

// 0x140 (0x590 - 0x450)
// Class ControlRig.ControlRigComponent
class UControlRigComponent : public UPrimitiveComponent
{
public:
	TSubclassOf<class UControlRig>               ControlRigClass;                                   // 0x450(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPreInitializeDelegate;                           // 0x458(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPostInitializeDelegate;                          // 0x468(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPreSetupDelegate;                                // 0x478(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPostSetupDelegate;                               // 0x488(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPreForwardsSolveDelegate;                        // 0x498(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPostForwardsSolveDelegate;                       // 0x4A8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<struct FControlRigComponentMappedElement> MappedElements;                                    // 0x4B8(0x10)(Edit, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bEnableLazyEvaluation;                             // 0x4C8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_274[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LazyEvaluationPositionThreshold;                   // 0x4CC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LazyEvaluationRotationThreshold;                   // 0x4D0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LazyEvaluationScaleThreshold;                      // 0x4D4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bResetTransformBeforeTick;                         // 0x4D8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bResetInitialsBeforeSetup;                         // 0x4D9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUpdateRigOnTick;                                  // 0x4DA(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUpdateInEditor;                                   // 0x4DB(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDrawBones;                                        // 0x4DC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowDebugDrawing;                                 // 0x4DD(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_275[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UControlRig*                           ControlRig;                                        // 0x4E0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_276[0xA8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UControlRigComponent* GetDefaultObj();

	void Update(float DeltaTime);
	void SetMappedElements(const TArray<struct FControlRigComponentMappedElement>& NewMappedElements);
	void SetInitialSpaceTransform(class FName SpaceName, const struct FTransform& InitialTransform, enum class EControlRigComponentSpace Space);
	void SetInitialBoneTransform(class FName BoneName, const struct FTransform& InitialTransform, enum class EControlRigComponentSpace Space, bool bPropagateToChildren);
	void SetControlVector2D(class FName ControlName, const struct FVector2D& Value);
	void SetControlTransform(class FName ControlName, const struct FTransform& Value, enum class EControlRigComponentSpace Space);
	void SetControlScale(class FName ControlName, const struct FVector& Value, enum class EControlRigComponentSpace Space);
	void SetControlRotator(class FName ControlName, const struct FRotator& Value, enum class EControlRigComponentSpace Space);
	void SetControlPosition(class FName ControlName, const struct FVector& Value, enum class EControlRigComponentSpace Space);
	void SetControlOffset(class FName ControlName, const struct FTransform& OffsetTransform, enum class EControlRigComponentSpace Space);
	void SetControlInt(class FName ControlName, int32 Value);
	void SetControlFloat(class FName ControlName, float Value);
	void SetControlBool(class FName ControlName, bool Value);
	void SetBoneTransform(class FName BoneName, const struct FTransform& Transform, enum class EControlRigComponentSpace Space, float Weight, bool bPropagateToChildren);
	void SetBoneInitialTransformsFromSkeletalMesh(class USkeletalMesh* InSkeletalMesh);
	void OnPreSetup(class UControlRigComponent* Component);
	void OnPreInitialize(class UControlRigComponent* Component);
	void OnPreForwardsSolve(class UControlRigComponent* Component);
	void OnPostSetup(class UControlRigComponent* Component);
	void OnPostInitialize(class UControlRigComponent* Component);
	void OnPostForwardsSolve(class UControlRigComponent* Component);
	void Initialize();
	struct FTransform GetSpaceTransform(class FName SpaceName, enum class EControlRigComponentSpace Space);
	struct FTransform GetInitialSpaceTransform(class FName SpaceName, enum class EControlRigComponentSpace Space);
	struct FTransform GetInitialBoneTransform(class FName BoneName, enum class EControlRigComponentSpace Space);
	TArray<class FName> GetElementNames(enum class ERigElementType ElementType);
	struct FVector2D GetControlVector2D(class FName ControlName);
	struct FTransform GetControlTransform(class FName ControlName, enum class EControlRigComponentSpace Space);
	struct FVector GetControlScale(class FName ControlName, enum class EControlRigComponentSpace Space);
	struct FRotator GetControlRotator(class FName ControlName, enum class EControlRigComponentSpace Space);
	class UControlRig* GetControlRig();
	struct FVector GetControlPosition(class FName ControlName, enum class EControlRigComponentSpace Space);
	struct FTransform GetControlOffset(class FName ControlName, enum class EControlRigComponentSpace Space);
	int32 GetControlInt(class FName ControlName);
	float GetControlFloat(class FName ControlName);
	bool GetControlBool(class FName ControlName);
	struct FTransform GetBoneTransform(class FName BoneName, enum class EControlRigComponentSpace Space);
	float GetAbsoluteTime();
	bool DoesElementExist(class FName Name, enum class ERigElementType ElementType);
	void ClearMappedElements();
	bool CanExecute();
	void AddMappedSkeletalMesh(class USkeletalMeshComponent* SkeletalMeshComponent, const TArray<struct FControlRigComponentMappedBone>& Bones, const TArray<struct FControlRigComponentMappedCurve>& Curves);
	void AddMappedElements(const TArray<struct FControlRigComponentMappedElement>& NewMappedElements);
	void AddMappedComponents(const TArray<struct FControlRigComponentMappedComponent>& Components);
	void AddMappedCompleteSkeletalMesh(class USkeletalMeshComponent* SkeletalMeshComponent);
};

// 0x98 (0x2B8 - 0x220)
// Class ControlRig.ControlRigControlActor
class AControlRigControlActor : public AActor
{
public:
	class AActor*                                ActorToTrack;                                      // 0x220(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UControlRig>               ControlRigClass;                                   // 0x228(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRefreshOnTick;                                    // 0x230(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsSelectable;                                     // 0x231(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_278[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    MaterialOverride;                                  // 0x238(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ColorParameter;                                    // 0x240(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCastShadows;                                      // 0x250(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_279[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class USceneComponent*                       ActorRootComponent;                                // 0x258(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UControlRig*                           ControlRig;                                        // 0x260(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class FName>                          ControlNames;                                      // 0x268(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TArray<struct FTransform>                    GizmoTransforms;                                   // 0x278(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TArray<class UStaticMeshComponent*>          Components;                                        // 0x288(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<class UMaterialInstanceDynamic*>      Materials;                                         // 0x298(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	class FName                                  ColorParameterName;                                // 0x2A8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_27A[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AControlRigControlActor* GetDefaultObj();

	void Refresh();
	void Clear();
};

// 0x28 (0x248 - 0x220)
// Class ControlRig.ControlRigGizmoActor
class AControlRigGizmoActor : public AActor
{
public:
	class USceneComponent*                       ActorRootComponent;                                // 0x220(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMeshComponent*                  StaticMeshComponent;                               // 0x228(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       ControlRigIndex;                                   // 0x230(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ControlName;                                       // 0x234(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ColorParameterName;                                // 0x23C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEnabled : 1;                                      // Mask: 0x1, PropSize: 0x10x244(0x1)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bSelected : 1;                                     // Mask: 0x2, PropSize: 0x10x244(0x1)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bSelectable : 1;                                   // Mask: 0x4, PropSize: 0x10x244(0x1)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bHovered : 1;                                      // Mask: 0x8, PropSize: 0x10x244(0x1)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_284[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AControlRigGizmoActor* GetDefaultObj();

	void SetSelected(bool bInSelected);
	void SetSelectable(bool bInSelectable);
	void SetHovered(bool bInHovered);
	void SetGlobalTransform(struct FTransform& InTransform);
	void SetEnabled(bool bInEnabled);
	void OnTransformChanged(struct FTransform& NewTransform);
	void OnSelectionChanged(bool bIsSelected);
	void OnManipulatingChanged(bool bIsManipulating);
	void OnHoveredChanged(bool bIsSelected);
	void OnEnabledChanged(bool bIsEnabled);
	bool IsSelectedInEditor();
	bool IsHovered();
	bool IsEnabled();
	struct FTransform GetGlobalTransform();
};

// 0xB8 (0xE0 - 0x28)
// Class ControlRig.ControlRigGizmoLibrary
class UControlRigGizmoLibrary : public UObject
{
public:
	uint8                                        Pad_288[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FControlRigGizmoDefinition            DefaultGizmo;                                      // 0x30(0x60)(Edit, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UMaterial>              DefaultMaterial;                                   // 0x90(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  MaterialColorParameter;                            // 0xB8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FControlRigGizmoDefinition>    Gizmos;                                            // 0xC0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_289[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UControlRigGizmoLibrary* GetDefaultObj();

};

// 0x8 (0x320 - 0x318)
// Class ControlRig.ControlRigLayerInstance
class UControlRigLayerInstance : public UAnimInstance
{
public:
	uint8                                        Pad_28A[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UControlRigLayerInstance* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ControlRig.ControlRigValidationPass
class UControlRigValidationPass : public UObject
{
public:

	static class UClass* StaticClass();
	static class UControlRigValidationPass* GetDefaultObj();

};

// 0x98 (0xC0 - 0x28)
// Class ControlRig.ControlRigNumericalValidationPass
class UControlRigNumericalValidationPass : public UControlRigValidationPass
{
public:
	bool                                         bCheckControls;                                    // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCheckBones;                                       // 0x29(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCheckCurves;                                      // 0x2A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28B[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TranslationPrecision;                              // 0x2C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RotationPrecision;                                 // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ScalePrecision;                                    // 0x34(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurvePrecision;                                    // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  EventNameA;                                        // 0x3C(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  EventNameB;                                        // 0x44(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_28E[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigPose                              Pose;                                              // 0x50(0x70)(Transient, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UControlRigNumericalValidationPass* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class ControlRig.ControlRigObjectHolder
class UControlRigObjectHolder : public UObject
{
public:
	TArray<class UObject*>                       Objects;                                           // 0x28(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UControlRigObjectHolder* GetDefaultObj();

};

// 0x60 (0x88 - 0x28)
// Class ControlRig.ControlRigPoseAsset
class UControlRigPoseAsset : public UObject
{
public:
	struct FControlRigControlPose                Pose;                                              // 0x28(0x60)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UControlRigPoseAsset* GetDefaultObj();

	void SelectControls(class UControlRig* InControlRig, bool bDoMirror);
	void SavePose(class UControlRig* InControlRig, bool bUseAll);
	void ReplaceControlName(class FName& CurrentName, class FName& NewName);
	void PastePose(class UControlRig* InControlRig, bool bDoKey, bool bDoMirror);
	void GetCurrentPose(class UControlRig* InControlRig, struct FControlRigControlPose* OutPose);
	TArray<class FName> GetControlNames();
	bool DoesMirrorMatch(class UControlRig* ControlRig, class FName& ControlName);
};

// 0x28 (0x50 - 0x28)
// Class ControlRig.ControlRigPoseMirrorSettings
class UControlRigPoseMirrorSettings : public UObject
{
public:
	class FString                                RightSide;                                         // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                LeftSide;                                          // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAxis                             MirrorAxis;                                        // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAxis                             AxisToFlip;                                        // 0x49(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_295[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UControlRigPoseMirrorSettings* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class ControlRig.ControlRigPoseProjectSettings
class UControlRigPoseProjectSettings : public UObject
{
public:
	TArray<struct FDirectoryPath>                RootSaveDirs;                                      // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, Config, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UControlRigPoseProjectSettings* GetDefaultObj();

};

// 0x58 (0x220 - 0x1C8)
// Class ControlRig.ControlRigSequence
class UControlRigSequence : public ULevelSequence
{
public:
	TSoftObjectPtr<class UAnimSequence>          LastExportedToAnimationSequence;                   // 0x1C8(0x28)(AssetRegistrySearchable, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class USkeletalMesh>          LastExportedUsingSkeletalMesh;                     // 0x1F0(0x28)(AssetRegistrySearchable, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LastExportedFrameRate;                             // 0x218(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_296[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UControlRigSequence* GetDefaultObj();

};

// 0x0 (0x38 - 0x38)
// Class ControlRig.ControlRigSettings
class UControlRigSettings : public UDeveloperSettings
{
public:

	static class UClass* StaticClass();
	static class UControlRigSettings* GetDefaultObj();

};

// 0x0 (0x38 - 0x38)
// Class ControlRig.ControlRigEditorSettings
class UControlRigEditorSettings : public UDeveloperSettings
{
public:

	static class UClass* StaticClass();
	static class UControlRigEditorSettings* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class ControlRig.ControlRigSnapSettings
class UControlRigSnapSettings : public UObject
{
public:
	bool                                         bKeepOffset;                                       // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSnapPosition;                                     // 0x29(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSnapRotation;                                     // 0x2A(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSnapScale;                                        // 0x2B(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_297[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UControlRigSnapSettings* GetDefaultObj();

};

// 0x40 (0x68 - 0x28)
// Class ControlRig.ControlRigValidator
class UControlRigValidator : public UObject
{
public:
	TArray<class UControlRigValidationPass*>     Passes;                                            // 0x28(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_298[0x30];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UControlRigValidator* GetDefaultObj();

};

// 0x18 (0x490 - 0x478)
// Class ControlRig.FKControlRig
class UFKControlRig : public UControlRig
{
public:
	TArray<bool>                                 IsControlActive;                                   // 0x478(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	enum class EControlRigFKRigExecuteMode       ApplyMode;                                         // 0x488(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_29A[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFKControlRig* GetDefaultObj();

};

// 0x190 (0x2D8 - 0x148)
// Class ControlRig.MovieSceneControlRigParameterSection
class UMovieSceneControlRigParameterSection : public UMovieSceneParameterSection
{
public:
	class UControlRig*                           ControlRig;                                        // 0x148(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UControlRig>               ControlRigClass;                                   // 0x150(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<bool>                                 ControlsMask;                                      // 0x158(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FMovieSceneTransformMask              TransformMask;                                     // 0x168(0x4)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_29C[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMovieSceneFloatChannel               Weight;                                            // 0x170(0xA0)(NativeAccessSpecifierPublic)
	TMap<class FName, struct FChannelMapInfo>    ControlChannelMap;                                 // 0x210(0x50)(NativeAccessSpecifierPublic)
	TArray<struct FEnumParameterNameAndCurve>    EnumParameterNamesAndCurves;                       // 0x260(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FIntegerParameterNameAndCurve> IntegerParameterNamesAndCurves;                    // 0x270(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_29E[0x58];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneControlRigParameterSection* GetDefaultObj();

};

// 0x38 (0xC8 - 0x90)
// Class ControlRig.MovieSceneControlRigParameterTrack
class UMovieSceneControlRigParameterTrack : public UMovieSceneNameableTrack
{
public:
	uint8                                        Pad_29F[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UControlRig*                           ControlRig;                                        // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMovieSceneSection*                    SectionToKey;                                      // 0xA8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UMovieSceneSection*>            Sections;                                          // 0xB0(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	class FName                                  TrackName;                                         // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMovieSceneControlRigParameterTrack* GetDefaultObj();

};

// 0x1C8 (0x1F0 - 0x28)
// Class ControlRig.RigHierarchy
class URigHierarchy : public UObject
{
public:
	uint8                                        Pad_3AD[0x30];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint16                                       TopologyVersion;                                   // 0x58(0x2)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bEnableDirtyPropagation;                           // 0x5A(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3AE[0x75];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TransformStackIndex;                               // 0xD0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3AF[0x5C];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class URigHierarchyController*               HierarchyController;                               // 0x130(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3B0[0xB8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class URigHierarchy* GetDefaultObj();

	bool SwitchToWorldSpace(const struct FRigElementKey& InChild, bool bInitial, bool bAffectChildren);
	bool SwitchToParent(const struct FRigElementKey& InChild, const struct FRigElementKey& InParent, bool bInitial, bool bAffectChildren);
	bool SwitchToDefaultParent(const struct FRigElementKey& InChild, bool bInitial, bool bAffectChildren);
	TArray<struct FRigElementKey> SortKeys(TArray<struct FRigElementKey>& InKeys);
	void SetPose_ForBlueprint(const struct FRigPose& InPose);
	bool SetParentWeightArray(const struct FRigElementKey& InChild, const TArray<struct FRigElementWeight>& InWeights, bool bInitial, bool bAffectChildren);
	bool SetParentWeight(const struct FRigElementKey& InChild, const struct FRigElementKey& InParent, const struct FRigElementWeight& InWeight, bool bInitial, bool bAffectChildren);
	void SetLocalTransformByIndex(int32 InElementIndex, const struct FTransform& InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands);
	void SetLocalTransform(const struct FRigElementKey& InKey, const struct FTransform& InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands);
	void SetGlobalTransformByIndex(int32 InElementIndex, const struct FTransform& InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo);
	void SetGlobalTransform(const struct FRigElementKey& InKey, const struct FTransform& InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo);
	void SetCurveValueByIndex(int32 InElementIndex, float InValue, bool bSetupUndo);
	void SetCurveValue(const struct FRigElementKey& InKey, float InValue, bool bSetupUndo);
	void SetControlVisibilityByIndex(int32 InElementIndex, bool bVisibility);
	void SetControlVisibility(const struct FRigElementKey& InKey, bool bVisibility);
	void SetControlValueByIndex(int32 InElementIndex, const struct FRigControlValue& InValue, enum class ERigControlValueType InValueType, bool bSetupUndo);
	void SetControlValue(const struct FRigElementKey& InKey, const struct FRigControlValue& InValue, enum class ERigControlValueType InValueType, bool bSetupUndo);
	void SetControlSettingsByIndex(int32 InElementIndex, const struct FRigControlSettings& InSettings, bool bSetupUndo, bool bForce);
	void SetControlSettings(const struct FRigElementKey& InKey, const struct FRigControlSettings& InSettings, bool bSetupUndo, bool bForce);
	void SetControlOffsetTransformByIndex(int32 InElementIndex, const struct FTransform& InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands);
	void SetControlOffsetTransform(const struct FRigElementKey& InKey, const struct FTransform& InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands);
	void SetControlGizmoTransformByIndex(int32 InElementIndex, const struct FTransform& InTransform, bool bInitial, bool bSetupUndo);
	void SetControlGizmoTransform(const struct FRigElementKey& InKey, const struct FTransform& InTransform, bool bInitial, bool bSetupUndo);
	void SendAutoKeyEvent(const struct FRigElementKey& InElement, float InOffsetInSeconds, bool bAsynchronous);
	void ResetPoseToInitial(enum class ERigElementType InTypeFilter);
	void ResetCurveValues();
	void Reset();
	int32 Num();
	struct FRigControlValue MakeControlValueFromVector2D(const struct FVector2D& InValue);
	struct FRigControlValue MakeControlValueFromVector(const struct FVector& InValue);
	struct FRigControlValue MakeControlValueFromTransformNoScale(const struct FTransformNoScale& InValue);
	struct FRigControlValue MakeControlValueFromTransform(const struct FTransform& InValue);
	struct FRigControlValue MakeControlValueFromRotator(const struct FRotator& InValue);
	struct FRigControlValue MakeControlValueFromInt(int32 InValue);
	struct FRigControlValue MakeControlValueFromFloat(float InValue);
	struct FRigControlValue MakeControlValueFromEulerTransform(const struct FEulerTransform& InValue);
	struct FRigControlValue MakeControlValueFromBool(bool InValue);
	bool IsValidIndex(int32 InElementIndex);
	bool IsSelectedByIndex(int32 InIndex);
	bool IsSelected(const struct FRigElementKey& InKey);
	bool IsParentedTo(const struct FRigElementKey& InChild, const struct FRigElementKey& InParent);
	struct FVector GetVectorFromControlValue(const struct FRigControlValue& InValue);
	struct FVector2D GetVector2DFromControlValue(const struct FRigControlValue& InValue);
	struct FTransformNoScale GetTransformNoScaleFromControlValue(const struct FRigControlValue& InValue);
	struct FTransform GetTransformFromControlValue(const struct FRigControlValue& InValue);
	TArray<struct FRigElementKey> GetSocketKeys(bool bTraverse);
	TArray<struct FRigElementKey> GetSelectedKeys(enum class ERigElementType InTypeFilter);
	struct FRotator GetRotatorFromControlValue(const struct FRigControlValue& InValue);
	TArray<struct FRigElementKey> GetRigidBodyKeys(bool bTraverse);
	struct FRigElementKey GetPreviousParent(struct FRigElementKey& InKey);
	class FName GetPreviousName(struct FRigElementKey& InKey);
	struct FRigPose GetPose(bool bInitial);
	TArray<struct FRigElementWeight> GetParentWeightArray(const struct FRigElementKey& InChild, bool bInitial);
	struct FRigElementWeight GetParentWeight(const struct FRigElementKey& InChild, const struct FRigElementKey& InParent, bool bInitial);
	struct FTransform GetParentTransformByIndex(int32 InElementIndex, bool bInitial);
	struct FTransform GetParentTransform(const struct FRigElementKey& InKey, bool bInitial);
	TArray<struct FRigElementKey> GetParents(const struct FRigElementKey& InKey, bool bRecursive);
	int32 GetNumberOfParents(const struct FRigElementKey& InKey);
	TArray<struct FRigElementKey> GetNullKeys(bool bTraverse);
	struct FTransform GetLocalTransformByIndex(int32 InElementIndex, bool bInitial);
	struct FTransform GetLocalTransform(const struct FRigElementKey& InKey, bool bInitial);
	struct FRigElementKey GetKey(int32 InElementIndex);
	int32 GetIntFromControlValue(const struct FRigControlValue& InValue);
	int32 GetIndex_ForBlueprint(const struct FRigElementKey& InKey);
	struct FTransform GetGlobalTransformByIndex(int32 InElementIndex, bool bInitial);
	struct FTransform GetGlobalTransform(const struct FRigElementKey& InKey, bool bInitial);
	struct FTransform GetGlobalControlOffsetTransformByIndex(int32 InElementIndex, bool bInitial);
	struct FTransform GetGlobalControlOffsetTransform(const struct FRigElementKey& InKey, bool bInitial);
	struct FTransform GetGlobalControlGizmoTransformByIndex(int32 InElementIndex, bool bInitial);
	struct FTransform GetGlobalControlGizmoTransform(const struct FRigElementKey& InKey, bool bInitial);
	float GetFloatFromControlValue(const struct FRigControlValue& InValue);
	struct FRigElementKey GetFirstParent(const struct FRigElementKey& InKey);
	struct FEulerTransform GetEulerTransformFromControlValue(const struct FRigControlValue& InValue);
	float GetCurveValueByIndex(int32 InElementIndex);
	float GetCurveValue(const struct FRigElementKey& InKey);
	TArray<struct FRigElementKey> GetCurveKeys();
	struct FRigControlValue GetControlValueByIndex(int32 InElementIndex, enum class ERigControlValueType InValueType);
	struct FRigControlValue GetControlValue(const struct FRigElementKey& InKey, enum class ERigControlValueType InValueType);
	class URigHierarchyController* GetController(bool bCreateIfNeeded);
	TArray<struct FRigElementKey> GetControlKeys(bool bTraverse);
	TArray<struct FRigElementKey> GetChildren(const struct FRigElementKey& InKey, bool bRecursive);
	TArray<struct FRigElementKey> GetBoneKeys(bool bTraverse);
	TArray<struct FRigElementKey> GetAllKeys_ForBlueprint(bool bTraverse);
	struct FRigNullElement FindNull_ForBlueprintOnly(struct FRigElementKey& InKey);
	struct FRigControlElement FindControl_ForBlueprintOnly(struct FRigElementKey& InKey);
	struct FRigBoneElement FindBone_ForBlueprintOnly(struct FRigElementKey& InKey);
	void CopyPose(class URigHierarchy* InHierarchy, bool bCurrent, bool bInitial);
	void CopyHierarchy(class URigHierarchy* InHierarchy);
	bool Contains_ForBlueprint(const struct FRigElementKey& InKey);
};

// 0x30 (0x58 - 0x28)
// Class ControlRig.RigHierarchyController
class URigHierarchyController : public UObject
{
public:
	bool                                         bReportWarningsAndErrors;                          // 0x28(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_42C[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TWeakObjectPtr<class URigHierarchy>          Hierarchy;                                         // 0x2C(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_42D[0x24];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class URigHierarchyController* GetDefaultObj();

	bool SetSelection(const TArray<struct FRigElementKey>& InKeys);
	bool SetParent(const struct FRigElementKey& InChild, const struct FRigElementKey& InParent, bool bMaintainGlobalTransform, bool bSetupUndo, bool bPrintPythonCommand);
	void SetHierarchy(class URigHierarchy* InHierarchy);
	bool SetControlSettings(const struct FRigElementKey& InKey, const struct FRigControlSettings& InSettings, bool bSetupUndo);
	bool SelectElement(const struct FRigElementKey& InKey, bool bSelect, bool bClearSelection);
	struct FRigElementKey RenameElement(const struct FRigElementKey& InElement, class FName InName, bool bSetupUndo, bool bPrintPythonCommand);
	bool RemoveParent(const struct FRigElementKey& InChild, const struct FRigElementKey& InParent, bool bMaintainGlobalTransform, bool bSetupUndo, bool bPrintPythonCommand);
	bool RemoveElement(const struct FRigElementKey& InElement, bool bSetupUndo, bool bPrintPythonCommand);
	bool RemoveAllParents(const struct FRigElementKey& InChild, bool bMaintainGlobalTransform, bool bSetupUndo, bool bPrintPythonCommand);
	TArray<struct FRigElementKey> MirrorElements(const TArray<struct FRigElementKey>& InKeys, const struct FRigMirrorSettings& InSettings, bool bSelectNewElements, bool bSetupUndo, bool bPrintPythonCommands);
	TArray<struct FRigElementKey> ImportFromText(const class FString& InContent, bool bReplaceExistingElements, bool bSelectNewElements, bool bSetupUndo, bool bPrintPythonCommands);
	TArray<struct FRigElementKey> ImportCurves(class USkeleton* InSkeleton, class FName InNameSpace, bool bSelectCurves, bool bSetupUndo, bool bPrintPythonCommand);
	TArray<struct FRigElementKey> ImportBones(class USkeleton* InSkeleton, class FName InNameSpace, bool bReplaceExistingBones, bool bRemoveObsoleteBones, bool bSelectBones, bool bSetupUndo, bool bPrintPythonCommand);
	class URigHierarchy* GetHierarchy();
	struct FRigControlSettings GetControlSettings(const struct FRigElementKey& InKey);
	class FString ExportToText(const TArray<struct FRigElementKey>& InKeys);
	class FString ExportSelectionToText();
	TArray<struct FRigElementKey> DuplicateElements(const TArray<struct FRigElementKey>& InKeys, bool bSelectNewElements, bool bSetupUndo, bool bPrintPythonCommands);
	bool DeselectElement(const struct FRigElementKey& InKey);
	bool ClearSelection();
	struct FRigElementKey AddRigidBody(class FName InName, const struct FRigElementKey& InParent, const struct FRigRigidBodySettings& InSettings, const struct FTransform& InLocalTransform, bool bSetupUndo, bool bPrintPythonCommand);
	bool AddParent(const struct FRigElementKey& InChild, const struct FRigElementKey& InParent, float InWeight, bool bMaintainGlobalTransform, bool bSetupUndo);
	struct FRigElementKey AddNull(class FName InName, const struct FRigElementKey& InParent, const struct FTransform& InTransform, bool bTransformInGlobal, bool bSetupUndo, bool bPrintPythonCommand);
	struct FRigElementKey AddCurve(class FName InName, float InValue, bool bSetupUndo, bool bPrintPythonCommand);
	struct FRigElementKey AddControl_ForBlueprint(class FName InName, const struct FRigElementKey& InParent, const struct FRigControlSettings& InSettings, const struct FRigControlValue& InValue, bool bSetupUndo);
	struct FRigElementKey AddBone(class FName InName, const struct FRigElementKey& InParent, const struct FTransform& InTransform, bool bTransformInGlobal, enum class ERigBoneType InBoneType, bool bSetupUndo, bool bPrintPythonCommand);
};

}


