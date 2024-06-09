#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0xD0 - 0xB0)
// Class EntityActor.ActorToEntityAdapterComponent
class UActorToEntityAdapterComponent : public UActorComponent
{
public:
	uint8                                        Pad_4446[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UEntityComponent*>              SerializedComponents;                              // 0xB8(0x10)(Edit, ExportObject, ZeroConstructor, EditConst, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_4447[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UActorToEntityAdapterComponent* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class EntityActor.EntityAbilityInterface
class IEntityAbilityInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IEntityAbilityInterface* GetDefaultObj();

};

// 0x80 (0x100 - 0x80)
// Class EntityActor.EntityActorCollisionComponent
class UEntityActorCollisionComponent : public UEntityEnableableComponent
{
public:
	uint8                                        Pad_445F[0x48];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ShadowVar_CollisionProfileName;                    // 0xC8(0x8)(Edit, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftObjectPtr<class UPrimitiveComponent>    PrimitiveComponentCache;                           // 0xD0(0x28)(ExportObject, Net, Transient, InstancedReference, RepNotify, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_4460[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEntityActorCollisionComponent* GetDefaultObj();

	void OnRep_PrimitiveComponent();
	void OnRep_CollisionProfileName();
	void OnNativeComponentHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, struct FHitResult& Hit);
	void OnNativeComponentEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void OnNativeComponentBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void OnEnabledChanged(bool bIsEnabled);
};

// 0x30 (0x90 - 0x60)
// Class EntityActor.EntityActorComponent
class UEntityActorComponent : public UEntityComponent
{
public:
	uint8                                        Pad_4465[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UActorComponent*                       ActorComponent;                                    // 0x68(0x8)(Edit, ExportObject, Net, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bCreatedActorComponent;                            // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_4466[0x1F];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEntityActorComponent* GetDefaultObj();

	void OnRep_ActorComponent();
};

// 0x8 (0x68 - 0x60)
// Class EntityActor.EntityActorCustomReplicationComponent
class UEntityActorCustomReplicationComponent : public UEntityComponent
{
public:
	enum class EEntityActorReplicationOverrideType ReplicationOverride;                               // 0x60(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EEntityActorReplicationRelevancyBucketType ReplicationRelevancyBucketType;                    // 0x61(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_4468[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CustomReplicationRelevancyRange;                   // 0x64(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UEntityActorCustomReplicationComponent* GetDefaultObj();

};

// 0x8 (0x68 - 0x60)
// Class EntityActor.EntityActorLocalInputComponent
class UEntityActorLocalInputComponent : public UEntityComponent
{
public:
	enum class EAutoReceiveInput                 AutoReceiveControllerInput;                        // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4469[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEntityActorLocalInputComponent* GetDefaultObj();

};

// 0x78 (0xE0 - 0x68)
// Class EntityActor.EntityActorPlayerComponent
class UEntityActorPlayerComponent : public UEntityDataBackedComponent
{
public:
	TSoftObjectPtr<class APlayerController>      PlayerControllerCache;                             // 0x68(0x28)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftObjectPtr<class APlayerState>           PlayerStateCache;                                  // 0x90(0x28)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FUniqueNetIdRepl                      PlayerId;                                          // 0xB8(0x28)(Net, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UEntityActorPlayerComponent* GetDefaultObj();

};

// 0x18 (0x80 - 0x68)
// Class EntityActor.EntityActorPositionComponent
class UEntityActorPositionComponent : public UEntityPositionComponent
{
public:
	struct FVector                               ShadowVar_Location;                                // 0x68(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_4475[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEntityActorPositionComponent* GetDefaultObj();

	void OnRootComponentChanged(class USceneComponent* InRootComponent, bool bIsRootComponent);
};

// 0x18 (0x80 - 0x68)
// Class EntityActor.EntityActorRotationComponent
class UEntityActorRotationComponent : public UEntityRotationComponent
{
public:
	struct FRotator                              ShadowVar_Rotation;                                // 0x68(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_447C[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEntityActorRotationComponent* GetDefaultObj();

	void OnRootComponentChanged(class USceneComponent* InRootComponent, bool bIsRootComponent);
};

// 0x18 (0x80 - 0x68)
// Class EntityActor.EntityActorScaleComponent
class UEntityActorScaleComponent : public UEntityScaleComponent
{
public:
	struct FVector                               ShadowVar_Scale;                                   // 0x68(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_4482[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEntityActorScaleComponent* GetDefaultObj();

	void OnRootComponentChanged(class USceneComponent* InRootComponent, bool bIsRootComponent);
};

// 0x20 (0x80 - 0x60)
// Class EntityActor.EntityActorSkeletalMeshRenderComponent
class UEntityActorSkeletalMeshRenderComponent : public UEntityComponent
{
public:
	uint8                                        Pad_4488[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bAddedMeshRenderComponent;                         // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_4489[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USkeletalMesh*                         ShadowVar_SkeletalMesh;                            // 0x70(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class ECollisionEnabled                 ShadowVar_EnableCollision;                         // 0x78(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_448A[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEntityActorSkeletalMeshRenderComponent* GetDefaultObj();

};

// 0x20 (0xB0 - 0x90)
// Class EntityActor.EntityActorStaticMeshRenderComponent
class UEntityActorStaticMeshRenderComponent : public UEntityActorComponent
{
public:
	TWeakObjectPtr<class UStaticMeshComponent>   StaticMeshComponentCache;                          // 0x90(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UMaterialInterface*>            ShadowVar_MeshMaterials;                           // 0x98(0x10)(Net, ZeroConstructor, RepNotify, NativeAccessSpecifierPrivate)
	enum class ECollisionEnabled                 ShadowVar_EnableCollision;                         // 0xA8(0x1)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_448B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ShadowVar_MaxDrawDistance;                         // 0xAC(0x4)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UEntityActorStaticMeshRenderComponent* GetDefaultObj();

	void OnRep_MeshMaterials();
	void OnRep_MaxDrawDistance();
	void OnRep_EnableCollision();
};

// 0x38 (0x68 - 0x30)
// Class EntityActor.EntityActorSubsystem
class UEntityActorSubsystem : public UWorldSubsystem
{
public:
	uint8                                        Pad_448C[0x38];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEntityActorSubsystem* GetDefaultObj();

};

// 0x28 (0x88 - 0x60)
// Class EntityActor.EntityActorTextDisplayComponent
class UEntityActorTextDisplayComponent : public UEntityComponent
{
public:
	class FText                                  DisplayText;                                       // 0x60(0x18)(Edit, NativeAccessSpecifierPrivate)
	uint8                                        Pad_448F[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bAddedTextRenderComponent;                         // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_4490[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEntityActorTextDisplayComponent* GetDefaultObj();

	void SetWorldSize(float Value);
	void SetVerticalAlignment(enum class EVerticalTextAligment Value);
	void SetTextRenderColor(const struct FColor& Value);
	void SetText(class FText Text);
	void SetRelativeScale(const struct FVector& RelativeScale);
	void SetRelativeRotation(const struct FRotator& RelativeRotation);
	void SetRelativeLocation(const struct FVector& RelativeLocation);
	void SetHorizontalAlignment(enum class EHorizTextAligment Value);
	float GetWorldSize();
	enum class EVerticalTextAligment GetVerticalAlignment();
	struct FColor GetTextRenderColor();
	class FText GetText();
	struct FVector GetRelativeLocation();
	enum class EHorizTextAligment GetHorizontalAlignment();
};

// 0x38 (0xB8 - 0x80)
// Class EntityActor.EntityDynamicActivationComponent
class UEntityDynamicActivationComponent : public UEntityEnableableComponent
{
public:
	uint8                                        Pad_4491[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TransitionTargetTime;                              // 0x88(0x4)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bTargetState;                                      // 0x8C(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_4492[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UEntityComponent*>              LinkedComponents;                                  // 0x90(0x10)(Net, ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_4493[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEntityDynamicActivationComponent* GetDefaultObj();

	void OnRep_TransitionTarget();
	void OnEnabledChanged(bool bIsEnabled);
};

// 0x8 (0x68 - 0x60)
// Class EntityActor.EntityToActorAdapterComponent
class UEntityToActorAdapterComponent : public UEntityComponent
{
public:
	uint8                                        Pad_4494[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEntityToActorAdapterComponent* GetDefaultObj();

};

// 0x8 (0x228 - 0x220)
// Class EntityActor.SimObject
class ASimObject : public AActor
{
public:
	uint8                                        Pad_4495[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ASimObject* GetDefaultObj();

};

}


