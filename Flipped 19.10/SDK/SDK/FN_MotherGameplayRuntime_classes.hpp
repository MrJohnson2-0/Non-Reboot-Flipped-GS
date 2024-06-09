#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x100 (0x4B0 - 0x3B0)
// Class MotherGameplayRuntime.FortBaseAnimInstance_CageSaddle
class UFortBaseAnimInstance_CageSaddle : public UFortBaseAnimInstance
{
public:
	class AFortSphericalVehicle*                 AsFortSphericalVehicle;                            // 0x3B0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsOnGround;                                       // 0x3B8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A33[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RemappedPitch;                                     // 0x3BC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurrentRoll;                                       // 0x3C0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LockedRoll;                                        // 0x3C4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHeadShouldBend;                                   // 0x3C8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFootShouldBend;                                   // 0x3C9(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A38[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               BodyGroundOffset;                                  // 0x3CC(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             MinClampPitchInRange;                              // 0x3D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             MinClampPitchOutRange;                             // 0x3E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             MaxClampPitchInRange;                              // 0x3E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             MaxClampPitchOutRange;                             // 0x3F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HeadAlphaInterpSpeed;                              // 0x3F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A53[0xB4];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortBaseAnimInstance_CageSaddle* GetDefaultObj();

};

// 0x0 (0x1EE0 - 0x1EE0)
// Class MotherGameplayRuntime.FortCabbageIglooVehicle
class AFortCabbageIglooVehicle : public AFortOctopusVehicle
{
public:

	static class UClass* StaticClass();
	static class AFortCabbageIglooVehicle* GetDefaultObj();

};

// 0x38 (0x840 - 0x808)
// Class MotherGameplayRuntime.FortGameplayCueNotifyLoop_Goop
class AFortGameplayCueNotifyLoop_Goop : public AFortGameplayCueNotify_Loop
{
public:
	class FName                                  SpeedParamName;                                    // 0x808(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  IsFallingParamName;                                // 0x810(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGoopAudioMapRangeClamped             SpeedMapRangeClamped;                              // 0x818(0x10)(Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	float                                        InterpSpeed;                                       // 0x828(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1A5E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAudioComponent*                       LoopingAudioComponent;                             // 0x830(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1A5F[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AFortGameplayCueNotifyLoop_Goop* GetDefaultObj();

};

// 0x1C8 (0x278 - 0xB0)
// Class MotherGameplayRuntime.GravityGunTargetTrackingComponent
class UGravityGunTargetTrackingComponent : public UActorComponent
{
public:
	struct FScalableFloat                        AllowLargeObjects;                                 // 0xB0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        AllowMultipleGrabbers;                             // 0xD8(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        AllowVehicles;                                     // 0x100(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        AllowPickups;                                      // 0x128(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        AllowProjectiles;                                  // 0x150(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        AllowForay;                                        // 0x178(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        AllowWhileInVehicle;                               // 0x1A0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class FName                                  GrabbedByGravityGunTagName;                        // 0x1C8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 InvalidTargetTags;                                 // 0x1D0(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 TargetIsPlayerTag;                                 // 0x1F0(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 TargetIsAlreadyGrabbedTag;                         // 0x210(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 TargetIsOwnVehicleTag;                             // 0x230(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            FoundTargetDelegate;                               // 0x250(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            DeactivateReticleDelegate;                         // 0x260(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1A69[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGravityGunTargetTrackingComponent* GetDefaultObj();

	bool IsValidTarget(class AActor* OwningPlayer, class AActor* PotentialTarget, struct FGameplayTagContainer* ReasonForFailure);
	bool FindTargetProjectile(class AActor* OwningPlayer, struct FVector& TraceStart, struct FVector& TraceEnd, float TargetingRadius);
	void FindTargetActor(class AActor* OwningPlayer, struct FVector& TraceStart, struct FVector& TraceEnd);
};

// 0x0 (0x28 - 0x28)
// Class MotherGameplayRuntime.PropGunFunctionLibrary
class UPropGunFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UPropGunFunctionLibrary* GetDefaultObj();

	void UpdatePropPreviewPosition(class USceneComponent* PropPreviewComponent, float DeltaTime, class AFortPawn* AttachPawn, class FName AttachSocket, class USkeletalMeshComponent* WeaponMesh, struct FVector& DesiredRelativeTransform, float MinimumZOffset, struct FRotator& RelativeRotation, struct FVector& CachedScale, float InterpSpeed);
};

// 0x78 (0x880 - 0x808)
// Class MotherGameplayRuntime.ReactorGradeGameplayCue_ChargeUp
class AReactorGradeGameplayCue_ChargeUp : public AFortGameplayCueNotify_Loop
{
public:
	class AFortPawn*                             Pawn;                                              // 0x808(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               FoundEndPoint;                                     // 0x810(0xC)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1A6E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScalableFloat                        MinHitDistance;                                    // 0x820(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        HitObjectsLimit;                                   // 0x848(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1A6F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ECollisionChannel                 TraceChannel;                                      // 0x874(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1A70[0xB];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AReactorGradeGameplayCue_ChargeUp* GetDefaultObj();

	void UpdateAimEndPoint();
	void OnEndPointFound(struct FVector& FoundPoint);
	struct FVector GetFoundEndPoint();
};

}


