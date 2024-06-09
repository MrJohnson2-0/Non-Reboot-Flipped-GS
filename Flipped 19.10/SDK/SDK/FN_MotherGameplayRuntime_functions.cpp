#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class MotherGameplayRuntime.FortBaseAnimInstance_CageSaddle
// (None)

class UClass* UFortBaseAnimInstance_CageSaddle::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortBaseAnimInstance_CageSaddle");

	return Clss;
}


// FortBaseAnimInstance_CageSaddle MotherGameplayRuntime.Default__FortBaseAnimInstance_CageSaddle
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortBaseAnimInstance_CageSaddle* UFortBaseAnimInstance_CageSaddle::GetDefaultObj()
{
	static class UFortBaseAnimInstance_CageSaddle* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortBaseAnimInstance_CageSaddle*>(UFortBaseAnimInstance_CageSaddle::StaticClass()->DefaultObject);

	return Default;
}


// Class MotherGameplayRuntime.FortCabbageIglooVehicle
// (Actor, Pawn)

class UClass* AFortCabbageIglooVehicle::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortCabbageIglooVehicle");

	return Clss;
}


// FortCabbageIglooVehicle MotherGameplayRuntime.Default__FortCabbageIglooVehicle
// (Public, ClassDefaultObject, ArchetypeObject)

class AFortCabbageIglooVehicle* AFortCabbageIglooVehicle::GetDefaultObj()
{
	static class AFortCabbageIglooVehicle* Default = nullptr;

	if (!Default)
		Default = static_cast<AFortCabbageIglooVehicle*>(AFortCabbageIglooVehicle::StaticClass()->DefaultObject);

	return Default;
}


// Class MotherGameplayRuntime.FortGameplayCueNotifyLoop_Goop
// (Actor)

class UClass* AFortGameplayCueNotifyLoop_Goop::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortGameplayCueNotifyLoop_Goop");

	return Clss;
}


// FortGameplayCueNotifyLoop_Goop MotherGameplayRuntime.Default__FortGameplayCueNotifyLoop_Goop
// (Public, ClassDefaultObject, ArchetypeObject)

class AFortGameplayCueNotifyLoop_Goop* AFortGameplayCueNotifyLoop_Goop::GetDefaultObj()
{
	static class AFortGameplayCueNotifyLoop_Goop* Default = nullptr;

	if (!Default)
		Default = static_cast<AFortGameplayCueNotifyLoop_Goop*>(AFortGameplayCueNotifyLoop_Goop::StaticClass()->DefaultObject);

	return Default;
}


// Class MotherGameplayRuntime.GravityGunTargetTrackingComponent
// (None)

class UClass* UGravityGunTargetTrackingComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GravityGunTargetTrackingComponent");

	return Clss;
}


// GravityGunTargetTrackingComponent MotherGameplayRuntime.Default__GravityGunTargetTrackingComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UGravityGunTargetTrackingComponent* UGravityGunTargetTrackingComponent::GetDefaultObj()
{
	static class UGravityGunTargetTrackingComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UGravityGunTargetTrackingComponent*>(UGravityGunTargetTrackingComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function MotherGameplayRuntime.GravityGunTargetTrackingComponent.IsValidTarget
// (Final, Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// class AActor*                      OwningPlayer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      PotentialTarget                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       ReasonForFailure                                                 (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGravityGunTargetTrackingComponent::IsValidTarget(class AActor* OwningPlayer, class AActor* PotentialTarget, struct FGameplayTagContainer* ReasonForFailure)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GravityGunTargetTrackingComponent", "IsValidTarget");

	Params::UGravityGunTargetTrackingComponent_IsValidTarget_Params Parms{};

	Parms.OwningPlayer = OwningPlayer;
	Parms.PotentialTarget = PotentialTarget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReasonForFailure != nullptr)
		*ReasonForFailure = std::move(Parms.ReasonForFailure);

	return Parms.ReturnValue;

}


// Function MotherGameplayRuntime.GravityGunTargetTrackingComponent.FindTargetProjectile
// (Final, Native, Protected, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                      OwningPlayer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     TraceStart                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     TraceEnd                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TargetingRadius                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGravityGunTargetTrackingComponent::FindTargetProjectile(class AActor* OwningPlayer, struct FVector& TraceStart, struct FVector& TraceEnd, float TargetingRadius)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GravityGunTargetTrackingComponent", "FindTargetProjectile");

	Params::UGravityGunTargetTrackingComponent_FindTargetProjectile_Params Parms{};

	Parms.OwningPlayer = OwningPlayer;
	Parms.TraceStart = TraceStart;
	Parms.TraceEnd = TraceEnd;
	Parms.TargetingRadius = TargetingRadius;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MotherGameplayRuntime.GravityGunTargetTrackingComponent.FindTargetActor
// (Final, Native, Protected, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                      OwningPlayer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     TraceStart                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     TraceEnd                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGravityGunTargetTrackingComponent::FindTargetActor(class AActor* OwningPlayer, struct FVector& TraceStart, struct FVector& TraceEnd)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GravityGunTargetTrackingComponent", "FindTargetActor");

	Params::UGravityGunTargetTrackingComponent_FindTargetActor_Params Parms{};

	Parms.OwningPlayer = OwningPlayer;
	Parms.TraceStart = TraceStart;
	Parms.TraceEnd = TraceEnd;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class MotherGameplayRuntime.PropGunFunctionLibrary
// (None)

class UClass* UPropGunFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PropGunFunctionLibrary");

	return Clss;
}


// PropGunFunctionLibrary MotherGameplayRuntime.Default__PropGunFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UPropGunFunctionLibrary* UPropGunFunctionLibrary::GetDefaultObj()
{
	static class UPropGunFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UPropGunFunctionLibrary*>(UPropGunFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function MotherGameplayRuntime.PropGunFunctionLibrary.UpdatePropPreviewPosition
// (Final, Native, Static, Private, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class USceneComponent*             PropPreviewComponent                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DeltaTime                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AFortPawn*                   AttachPawn                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        AttachSocket                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USkeletalMeshComponent*      WeaponMesh                                                       (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     DesiredRelativeTransform                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MinimumZOffset                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    RelativeRotation                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector                     CachedScale                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InterpSpeed                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPropGunFunctionLibrary::UpdatePropPreviewPosition(class USceneComponent* PropPreviewComponent, float DeltaTime, class AFortPawn* AttachPawn, class FName AttachSocket, class USkeletalMeshComponent* WeaponMesh, struct FVector& DesiredRelativeTransform, float MinimumZOffset, struct FRotator& RelativeRotation, struct FVector& CachedScale, float InterpSpeed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PropGunFunctionLibrary", "UpdatePropPreviewPosition");

	Params::UPropGunFunctionLibrary_UpdatePropPreviewPosition_Params Parms{};

	Parms.PropPreviewComponent = PropPreviewComponent;
	Parms.DeltaTime = DeltaTime;
	Parms.AttachPawn = AttachPawn;
	Parms.AttachSocket = AttachSocket;
	Parms.WeaponMesh = WeaponMesh;
	Parms.DesiredRelativeTransform = DesiredRelativeTransform;
	Parms.MinimumZOffset = MinimumZOffset;
	Parms.RelativeRotation = RelativeRotation;
	Parms.CachedScale = CachedScale;
	Parms.InterpSpeed = InterpSpeed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class MotherGameplayRuntime.ReactorGradeGameplayCue_ChargeUp
// (Actor)

class UClass* AReactorGradeGameplayCue_ChargeUp::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ReactorGradeGameplayCue_ChargeUp");

	return Clss;
}


// ReactorGradeGameplayCue_ChargeUp MotherGameplayRuntime.Default__ReactorGradeGameplayCue_ChargeUp
// (Public, ClassDefaultObject, ArchetypeObject)

class AReactorGradeGameplayCue_ChargeUp* AReactorGradeGameplayCue_ChargeUp::GetDefaultObj()
{
	static class AReactorGradeGameplayCue_ChargeUp* Default = nullptr;

	if (!Default)
		Default = static_cast<AReactorGradeGameplayCue_ChargeUp*>(AReactorGradeGameplayCue_ChargeUp::StaticClass()->DefaultObject);

	return Default;
}


// Function MotherGameplayRuntime.ReactorGradeGameplayCue_ChargeUp.UpdateAimEndPoint
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void AReactorGradeGameplayCue_ChargeUp::UpdateAimEndPoint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReactorGradeGameplayCue_ChargeUp", "UpdateAimEndPoint");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MotherGameplayRuntime.ReactorGradeGameplayCue_ChargeUp.OnEndPointFound
// (Event, Public, HasOutParams, HasDefaults, BlueprintEvent)
// Parameters:
// struct FVector                     FoundPoint                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AReactorGradeGameplayCue_ChargeUp::OnEndPointFound(struct FVector& FoundPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReactorGradeGameplayCue_ChargeUp", "OnEndPointFound");

	Params::AReactorGradeGameplayCue_ChargeUp_OnEndPointFound_Params Parms{};

	Parms.FoundPoint = FoundPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MotherGameplayRuntime.ReactorGradeGameplayCue_ChargeUp.GetFoundEndPoint
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                     ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector AReactorGradeGameplayCue_ChargeUp::GetFoundEndPoint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReactorGradeGameplayCue_ChargeUp", "GetFoundEndPoint");

	Params::AReactorGradeGameplayCue_ChargeUp_GetFoundEndPoint_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


