#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class NevadaRuntime.FortCameraMode_Nevada
// (None)

class UClass* UFortCameraMode_Nevada::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortCameraMode_Nevada");

	return Clss;
}


// FortCameraMode_Nevada NevadaRuntime.Default__FortCameraMode_Nevada
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortCameraMode_Nevada* UFortCameraMode_Nevada::GetDefaultObj()
{
	static class UFortCameraMode_Nevada* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortCameraMode_Nevada*>(UFortCameraMode_Nevada::StaticClass()->DefaultObject);

	return Default;
}


// Class NevadaRuntime.FortNevadaAudioController
// (Actor)

class UClass* AFortNevadaAudioController::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortNevadaAudioController");

	return Clss;
}


// FortNevadaAudioController NevadaRuntime.Default__FortNevadaAudioController
// (Public, ClassDefaultObject, ArchetypeObject)

class AFortNevadaAudioController* AFortNevadaAudioController::GetDefaultObj()
{
	static class AFortNevadaAudioController* Default = nullptr;

	if (!Default)
		Default = static_cast<AFortNevadaAudioController*>(AFortNevadaAudioController::StaticClass()->DefaultObject);

	return Default;
}


// Function NevadaRuntime.FortNevadaAudioController.Update
// (Final, Native, Public)
// Parameters:

void AFortNevadaAudioController::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNevadaAudioController", "Update");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function NevadaRuntime.FortNevadaAudioController.Init
// (Final, Native, Public)
// Parameters:
// class AFortNevadaVehicle*          InVehicle                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortNevadaAudioController::Init(class AFortNevadaVehicle* InVehicle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNevadaAudioController", "Init");

	Params::AFortNevadaAudioController_Init_Params Parms{};

	Parms.InVehicle = InVehicle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NevadaRuntime.FortNevadaAudioController.GetVehicleActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AFortNevadaVehicle*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AFortNevadaVehicle* AFortNevadaAudioController::GetVehicleActor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNevadaAudioController", "GetVehicleActor");

	Params::AFortNevadaAudioController_GetVehicleActor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NevadaRuntime.FortNevadaAudioController.CacheReferences
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFortLayeredAudioComponent*  InLayeredAudioComponent                                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortNevadaAudioController::CacheReferences(class UFortLayeredAudioComponent* InLayeredAudioComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNevadaAudioController", "CacheReferences");

	Params::AFortNevadaAudioController_CacheReferences_Params Parms{};

	Parms.InLayeredAudioComponent = InLayeredAudioComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NevadaRuntime.FortNevadaAudioController.BP_Update
// (Event, Public, BlueprintEvent)
// Parameters:

void AFortNevadaAudioController::BP_Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNevadaAudioController", "BP_Update");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NevadaRuntime.FortNevadaAudioController.BP_Init
// (Event, Public, BlueprintEvent)
// Parameters:

void AFortNevadaAudioController::BP_Init()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNevadaAudioController", "BP_Init");



	UObject::ProcessEvent(Func, nullptr);

}


// Class NevadaRuntime.FortNevadaVehicle
// (Actor, Pawn)

class UClass* AFortNevadaVehicle::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortNevadaVehicle");

	return Clss;
}


// FortNevadaVehicle NevadaRuntime.Default__FortNevadaVehicle
// (Public, ClassDefaultObject, ArchetypeObject)

class AFortNevadaVehicle* AFortNevadaVehicle::GetDefaultObj()
{
	static class AFortNevadaVehicle* Default = nullptr;

	if (!Default)
		Default = static_cast<AFortNevadaVehicle*>(AFortNevadaVehicle::StaticClass()->DefaultObject);

	return Default;
}


// Function NevadaRuntime.FortNevadaVehicle.SetTractorBeamInactive
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void AFortNevadaVehicle::SetTractorBeamInactive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNevadaVehicle", "SetTractorBeamInactive");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function NevadaRuntime.FortNevadaVehicle.SetTractorBeamEnabled
// (Final, RequiredAPI, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bEnabled                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortNevadaVehicle::SetTractorBeamEnabled(bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNevadaVehicle", "SetTractorBeamEnabled");

	Params::AFortNevadaVehicle_SetTractorBeamEnabled_Params Parms{};

	Parms.bEnabled = bEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NevadaRuntime.FortNevadaVehicle.SetCannonEnabled
// (Final, RequiredAPI, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bEnabled                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortNevadaVehicle::SetCannonEnabled(bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNevadaVehicle", "SetCannonEnabled");

	Params::AFortNevadaVehicle_SetCannonEnabled_Params Parms{};

	Parms.bEnabled = bEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NevadaRuntime.FortNevadaVehicle.SetAttachedPawnAddedVelocity
// (Final, Native, Protected, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     AddedVelocity                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortNevadaVehicle::SetAttachedPawnAddedVelocity(struct FVector& AddedVelocity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNevadaVehicle", "SetAttachedPawnAddedVelocity");

	Params::AFortNevadaVehicle_SetAttachedPawnAddedVelocity_Params Parms{};

	Parms.AddedVelocity = AddedVelocity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NevadaRuntime.FortNevadaVehicle.OnTractorBeamDetached
// (Event, Protected, HasOutParams, HasDefaults, BlueprintEvent)
// Parameters:
// class AActor*                      DetachedActor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     LastBeamPosition                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortNevadaVehicle::OnTractorBeamDetached(class AActor* DetachedActor, struct FVector& LastBeamPosition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNevadaVehicle", "OnTractorBeamDetached");

	Params::AFortNevadaVehicle_OnTractorBeamDetached_Params Parms{};

	Parms.DetachedActor = DetachedActor;
	Parms.LastBeamPosition = LastBeamPosition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NevadaRuntime.FortNevadaVehicle.OnTractorBeamDeactivated
// (Event, Protected, HasOutParams, HasDefaults, BlueprintEvent)
// Parameters:
// struct FVector                     LastBeamPosition                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortNevadaVehicle::OnTractorBeamDeactivated(struct FVector& LastBeamPosition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNevadaVehicle", "OnTractorBeamDeactivated");

	Params::AFortNevadaVehicle_OnTractorBeamDeactivated_Params Parms{};

	Parms.LastBeamPosition = LastBeamPosition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NevadaRuntime.FortNevadaVehicle.OnTractorBeamChargeStarted
// (Event, Protected, BlueprintEvent)
// Parameters:

void AFortNevadaVehicle::OnTractorBeamChargeStarted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNevadaVehicle", "OnTractorBeamChargeStarted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NevadaRuntime.FortNevadaVehicle.OnTractorBeamAttached
// (Event, Protected, BlueprintEvent)
// Parameters:

void AFortNevadaVehicle::OnTractorBeamAttached()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNevadaVehicle", "OnTractorBeamAttached");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NevadaRuntime.FortNevadaVehicle.OnTractorBeamActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void AFortNevadaVehicle::OnTractorBeamActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNevadaVehicle", "OnTractorBeamActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NevadaRuntime.FortNevadaVehicle.OnTargetedActorChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      NewTargetedActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortNevadaVehicle::OnTargetedActorChanged(class AActor* NewTargetedActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNevadaVehicle", "OnTargetedActorChanged");

	Params::AFortNevadaVehicle_OnTargetedActorChanged_Params Parms{};

	Parms.NewTargetedActor = NewTargetedActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NevadaRuntime.FortNevadaVehicle.OnStartDescend
// (Event, Protected, BlueprintEvent)
// Parameters:

void AFortNevadaVehicle::OnStartDescend()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNevadaVehicle", "OnStartDescend");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NevadaRuntime.FortNevadaVehicle.OnStartAscend
// (Event, Protected, BlueprintEvent)
// Parameters:

void AFortNevadaVehicle::OnStartAscend()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNevadaVehicle", "OnStartAscend");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NevadaRuntime.FortNevadaVehicle.OnRep_TractorBeamState
// (Final, Native, Protected)
// Parameters:
// enum class ETractorBeamState       PreviousState                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortNevadaVehicle::OnRep_TractorBeamState(enum class ETractorBeamState PreviousState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNevadaVehicle", "OnRep_TractorBeamState");

	Params::AFortNevadaVehicle_OnRep_TractorBeamState_Params Parms{};

	Parms.PreviousState = PreviousState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NevadaRuntime.FortNevadaVehicle.OnRep_TractorBeamChargeStarted
// (Final, Native, Public)
// Parameters:

void AFortNevadaVehicle::OnRep_TractorBeamChargeStarted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNevadaVehicle", "OnRep_TractorBeamChargeStarted");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function NevadaRuntime.FortNevadaVehicle.OnRep_TractorBeamAttached
// (Final, Native, Protected)
// Parameters:

void AFortNevadaVehicle::OnRep_TractorBeamAttached()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNevadaVehicle", "OnRep_TractorBeamAttached");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function NevadaRuntime.FortNevadaVehicle.OnRep_TargetedActorChanged
// (Final, Native, Public)
// Parameters:

void AFortNevadaVehicle::OnRep_TargetedActorChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNevadaVehicle", "OnRep_TargetedActorChanged");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function NevadaRuntime.FortNevadaVehicle.OnRep_ReplicatedTargetedActors
// (Final, Native, Public)
// Parameters:

void AFortNevadaVehicle::OnRep_ReplicatedTargetedActors()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNevadaVehicle", "OnRep_ReplicatedTargetedActors");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function NevadaRuntime.FortNevadaVehicle.OnRep_NevadaState
// (Final, Native, Protected, HasOutParams)
// Parameters:
// struct FNevadaState                PrevState                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void AFortNevadaVehicle::OnRep_NevadaState(struct FNevadaState& PrevState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNevadaVehicle", "OnRep_NevadaState");

	Params::AFortNevadaVehicle_OnRep_NevadaState_Params Parms{};

	Parms.PrevState = PrevState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NevadaRuntime.FortNevadaVehicle.OnRebootStarted
// (Event, Public, BlueprintEvent)
// Parameters:

void AFortNevadaVehicle::OnRebootStarted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNevadaVehicle", "OnRebootStarted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NevadaRuntime.FortNevadaVehicle.OnRebootFinished
// (Event, Public, BlueprintEvent)
// Parameters:

void AFortNevadaVehicle::OnRebootFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNevadaVehicle", "OnRebootFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NevadaRuntime.FortNevadaVehicle.OnOutOfBattery
// (Event, Public, BlueprintEvent)
// Parameters:

void AFortNevadaVehicle::OnOutOfBattery()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNevadaVehicle", "OnOutOfBattery");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NevadaRuntime.FortNevadaVehicle.OnNewVehicleState
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class ENevadaFlightStates     NewVehicleState                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortNevadaVehicle::OnNewVehicleState(enum class ENevadaFlightStates NewVehicleState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNevadaVehicle", "OnNewVehicleState");

	Params::AFortNevadaVehicle_OnNewVehicleState_Params Parms{};

	Parms.NewVehicleState = NewVehicleState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NevadaRuntime.FortNevadaVehicle.OnCrashingStarted
// (Event, Public, BlueprintEvent)
// Parameters:

void AFortNevadaVehicle::OnCrashingStarted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNevadaVehicle", "OnCrashingStarted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NevadaRuntime.FortNevadaVehicle.OnCrashedImpact
// (Event, Public, BlueprintEvent)
// Parameters:

void AFortNevadaVehicle::OnCrashedImpact()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNevadaVehicle", "OnCrashedImpact");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NevadaRuntime.FortNevadaVehicle.OnBoostStarted
// (Event, Public, BlueprintEvent)
// Parameters:

void AFortNevadaVehicle::OnBoostStarted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNevadaVehicle", "OnBoostStarted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NevadaRuntime.FortNevadaVehicle.OnBoostFinished
// (Event, Public, BlueprintEvent)
// Parameters:

void AFortNevadaVehicle::OnBoostFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNevadaVehicle", "OnBoostFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NevadaRuntime.FortNevadaVehicle.OnBoostChargeRefilled
// (Event, Public, BlueprintEvent)
// Parameters:

void AFortNevadaVehicle::OnBoostChargeRefilled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNevadaVehicle", "OnBoostChargeRefilled");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NevadaRuntime.FortNevadaVehicle.OnBatteryRegen
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              Newcharge                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortNevadaVehicle::OnBatteryRegen(float Newcharge)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNevadaVehicle", "OnBatteryRegen");

	Params::AFortNevadaVehicle_OnBatteryRegen_Params Parms{};

	Parms.Newcharge = Newcharge;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NevadaRuntime.FortNevadaVehicle.OnAttachedActorDied
// (Final, Native, Public, HasDefaults)
// Parameters:
// class AActor*                      DamagedActor                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Damage                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AController*                 InstigatedBy                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      DamageCauser                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     HitLocation                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         FHitComponent                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        BoneName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Momentum                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortNevadaVehicle::OnAttachedActorDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNevadaVehicle", "OnAttachedActorDied");

	Params::AFortNevadaVehicle_OnAttachedActorDied_Params Parms{};

	Parms.DamagedActor = DamagedActor;
	Parms.Damage = Damage;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.HitLocation = HitLocation;
	Parms.FHitComponent = FHitComponent;
	Parms.BoneName = BoneName;
	Parms.Momentum = Momentum;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NevadaRuntime.FortNevadaVehicle.OnAttachedActorDestroyed
// (Final, Native, Public)
// Parameters:
// class AActor*                      DestroyedActor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortNevadaVehicle::OnAttachedActorDestroyed(class AActor* DestroyedActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNevadaVehicle", "OnAttachedActorDestroyed");

	Params::AFortNevadaVehicle_OnAttachedActorDestroyed_Params Parms{};

	Parms.DestroyedActor = DestroyedActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NevadaRuntime.FortNevadaVehicle.NativeToggleCockpit
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bEnable                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortNevadaVehicle::NativeToggleCockpit(bool bEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNevadaVehicle", "NativeToggleCockpit");

	Params::AFortNevadaVehicle_NativeToggleCockpit_Params Parms{};

	Parms.bEnable = bEnable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NevadaRuntime.FortNevadaVehicle.IsTractorBeamDisrupted
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AFortNevadaVehicle::IsTractorBeamDisrupted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNevadaVehicle", "IsTractorBeamDisrupted");

	Params::AFortNevadaVehicle_IsTractorBeamDisrupted_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NevadaRuntime.FortNevadaVehicle.IsTractorBeamAttached
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AFortNevadaVehicle::IsTractorBeamAttached()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNevadaVehicle", "IsTractorBeamAttached");

	Params::AFortNevadaVehicle_IsTractorBeamAttached_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NevadaRuntime.FortNevadaVehicle.IsTractorBeamActive
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AFortNevadaVehicle::IsTractorBeamActive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNevadaVehicle", "IsTractorBeamActive");

	Params::AFortNevadaVehicle_IsTractorBeamActive_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NevadaRuntime.FortNevadaVehicle.GetTractorBeamAttachLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector AFortNevadaVehicle::GetTractorBeamAttachLocation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNevadaVehicle", "GetTractorBeamAttachLocation");

	Params::AFortNevadaVehicle_GetTractorBeamAttachLocation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NevadaRuntime.FortNevadaVehicle.GetNumRebootsAvailable
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 AFortNevadaVehicle::GetNumRebootsAvailable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNevadaVehicle", "GetNumRebootsAvailable");

	Params::AFortNevadaVehicle_GetNumRebootsAvailable_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NevadaRuntime.FortNevadaVehicle.GetEnergyCanonChargePercent
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float AFortNevadaVehicle::GetEnergyCanonChargePercent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNevadaVehicle", "GetEnergyCanonChargePercent");

	Params::AFortNevadaVehicle_GetEnergyCanonChargePercent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NevadaRuntime.FortNevadaVehicle.GetDriverSeatRotationAnimParams
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// float                              OutLeftRight                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OutForwardBack                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortNevadaVehicle::GetDriverSeatRotationAnimParams(float* OutLeftRight, float* OutForwardBack)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNevadaVehicle", "GetDriverSeatRotationAnimParams");

	Params::AFortNevadaVehicle_GetDriverSeatRotationAnimParams_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutLeftRight != nullptr)
		*OutLeftRight = Parms.OutLeftRight;

	if (OutForwardBack != nullptr)
		*OutForwardBack = Parms.OutForwardBack;

}


// Function NevadaRuntime.FortNevadaVehicle.GetCurrentVehicleState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ENevadaFlightStates     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ENevadaFlightStates AFortNevadaVehicle::GetCurrentVehicleState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNevadaVehicle", "GetCurrentVehicleState");

	Params::AFortNevadaVehicle_GetCurrentVehicleState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NevadaRuntime.FortNevadaVehicle.GetBoostChargeTimeRemaining
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float AFortNevadaVehicle::GetBoostChargeTimeRemaining()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNevadaVehicle", "GetBoostChargeTimeRemaining");

	Params::AFortNevadaVehicle_GetBoostChargeTimeRemaining_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NevadaRuntime.FortNevadaVehicle.GetBoostChargesAvailable
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 AFortNevadaVehicle::GetBoostChargesAvailable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNevadaVehicle", "GetBoostChargesAvailable");

	Params::AFortNevadaVehicle_GetBoostChargesAvailable_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NevadaRuntime.FortNevadaVehicle.GetBoostChargeProgress
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float AFortNevadaVehicle::GetBoostChargeProgress()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNevadaVehicle", "GetBoostChargeProgress");

	Params::AFortNevadaVehicle_GetBoostChargeProgress_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NevadaRuntime.FortNevadaVehicle.GetBatteryCharge
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float AFortNevadaVehicle::GetBatteryCharge()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNevadaVehicle", "GetBatteryCharge");

	Params::AFortNevadaVehicle_GetBatteryCharge_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NevadaRuntime.FortNevadaVehicle.GetAudioController
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AFortNevadaAudioController*  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AFortNevadaAudioController* AFortNevadaVehicle::GetAudioController()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNevadaVehicle", "GetAudioController");

	Params::AFortNevadaVehicle_GetAudioController_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NevadaRuntime.FortNevadaVehicle.EnablePilotBubbleCollisionOnServer
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                               bNewCollisionEnabled                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortNevadaVehicle::EnablePilotBubbleCollisionOnServer(bool bNewCollisionEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNevadaVehicle", "EnablePilotBubbleCollisionOnServer");

	Params::AFortNevadaVehicle_EnablePilotBubbleCollisionOnServer_Params Parms{};

	Parms.bNewCollisionEnabled = bNewCollisionEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NevadaRuntime.FortNevadaVehicle.DisruptTractorBeam
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void AFortNevadaVehicle::DisruptTractorBeam()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNevadaVehicle", "DisruptTractorBeam");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function NevadaRuntime.FortNevadaVehicle.AddPhysicsImpulseToTractorBeamAttachedActor
// (Final, Native, Protected, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     Impulse                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        BoneName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bVelChange                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortNevadaVehicle::AddPhysicsImpulseToTractorBeamAttachedActor(struct FVector& Impulse, class FName BoneName, bool bVelChange)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNevadaVehicle", "AddPhysicsImpulseToTractorBeamAttachedActor");

	Params::AFortNevadaVehicle_AddPhysicsImpulseToTractorBeamAttachedActor_Params Parms{};

	Parms.Impulse = Impulse;
	Parms.BoneName = BoneName;
	Parms.bVelChange = bVelChange;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class NevadaRuntime.FortNevadaVehicleAnimInstance
// (None)

class UClass* UFortNevadaVehicleAnimInstance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortNevadaVehicleAnimInstance");

	return Clss;
}


// FortNevadaVehicleAnimInstance NevadaRuntime.Default__FortNevadaVehicleAnimInstance
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortNevadaVehicleAnimInstance* UFortNevadaVehicleAnimInstance::GetDefaultObj()
{
	static class UFortNevadaVehicleAnimInstance* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortNevadaVehicleAnimInstance*>(UFortNevadaVehicleAnimInstance::StaticClass()->DefaultObject);

	return Default;
}


// Class NevadaRuntime.FortNevadaVehicleConfigs
// (None)

class UClass* UFortNevadaVehicleConfigs::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortNevadaVehicleConfigs");

	return Clss;
}


// FortNevadaVehicleConfigs NevadaRuntime.Default__FortNevadaVehicleConfigs
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortNevadaVehicleConfigs* UFortNevadaVehicleConfigs::GetDefaultObj()
{
	static class UFortNevadaVehicleConfigs* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortNevadaVehicleConfigs*>(UFortNevadaVehicleConfigs::StaticClass()->DefaultObject);

	return Default;
}


// Class NevadaRuntime.FortPlayerAnimInstance_NevadaDriver
// (None)

class UClass* UFortPlayerAnimInstance_NevadaDriver::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortPlayerAnimInstance_NevadaDriver");

	return Clss;
}


// FortPlayerAnimInstance_NevadaDriver NevadaRuntime.Default__FortPlayerAnimInstance_NevadaDriver
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortPlayerAnimInstance_NevadaDriver* UFortPlayerAnimInstance_NevadaDriver::GetDefaultObj()
{
	static class UFortPlayerAnimInstance_NevadaDriver* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortPlayerAnimInstance_NevadaDriver*>(UFortPlayerAnimInstance_NevadaDriver::StaticClass()->DefaultObject);

	return Default;
}


// Class NevadaRuntime.NevadaGlobals
// (None)

class UClass* UNevadaGlobals::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NevadaGlobals");

	return Clss;
}


// NevadaGlobals NevadaRuntime.Default__NevadaGlobals
// (Public, ClassDefaultObject, ArchetypeObject)

class UNevadaGlobals* UNevadaGlobals::GetDefaultObj()
{
	static class UNevadaGlobals* Default = nullptr;

	if (!Default)
		Default = static_cast<UNevadaGlobals*>(UNevadaGlobals::StaticClass()->DefaultObject);

	return Default;
}

}


