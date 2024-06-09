#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class ValetRuntime.DagwoodNetworkPhysicsComponent
// (None)

class UClass* UDagwoodNetworkPhysicsComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DagwoodNetworkPhysicsComponent");

	return Clss;
}


// DagwoodNetworkPhysicsComponent ValetRuntime.Default__DagwoodNetworkPhysicsComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UDagwoodNetworkPhysicsComponent* UDagwoodNetworkPhysicsComponent::GetDefaultObj()
{
	static class UDagwoodNetworkPhysicsComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UDagwoodNetworkPhysicsComponent*>(UDagwoodNetworkPhysicsComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function ValetRuntime.DagwoodNetworkPhysicsComponent.SetState_GT
// (Final, Native, Public, HasOutParams)
// Parameters:
// struct FDagwoodInPersistent        In                                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UDagwoodNetworkPhysicsComponent::SetState_GT(struct FDagwoodInPersistent& In)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DagwoodNetworkPhysicsComponent", "SetState_GT");

	Params::UDagwoodNetworkPhysicsComponent_SetState_GT_Params Parms{};

	Parms.In = In;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ValetRuntime.DagwoodNetworkPhysicsComponent.SetPendingInputCmd
// (Final, Native, Public, HasOutParams)
// Parameters:
// struct FFortDagwoodCmd             In                                                               (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UDagwoodNetworkPhysicsComponent::SetPendingInputCmd(struct FFortDagwoodCmd& In)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DagwoodNetworkPhysicsComponent", "SetPendingInputCmd");

	Params::UDagwoodNetworkPhysicsComponent_SetPendingInputCmd_Params Parms{};

	Parms.In = In;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction ValetRuntime.DagwoodNetworkPhysicsComponent.OnGeneratedLocalInputCmd__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UDagwoodNetworkPhysicsComponent::OnGeneratedLocalInputCmd__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DagwoodNetworkPhysicsComponent", "OnGeneratedLocalInputCmd__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ValetRuntime.DagwoodNetworkPhysicsComponent.GetState_PT
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FDagwoodState_PT            ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FDagwoodState_PT UDagwoodNetworkPhysicsComponent::GetState_PT()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DagwoodNetworkPhysicsComponent", "GetState_PT");

	Params::UDagwoodNetworkPhysicsComponent_GetState_PT_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ValetRuntime.DagwoodNetworkPhysicsComponent.GetState_GT
// (Final, Native, Public, Const)
// Parameters:
// struct FDagwoodInPersistent        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FDagwoodInPersistent UDagwoodNetworkPhysicsComponent::GetState_GT()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DagwoodNetworkPhysicsComponent", "GetState_GT");

	Params::UDagwoodNetworkPhysicsComponent_GetState_GT_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ValetRuntime.DagwoodNetworkPhysicsComponent.GetPendingInputCmd
// (Final, Native, Public, Const)
// Parameters:
// struct FFortDagwoodCmd             ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FFortDagwoodCmd UDagwoodNetworkPhysicsComponent::GetPendingInputCmd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DagwoodNetworkPhysicsComponent", "GetPendingInputCmd");

	Params::UDagwoodNetworkPhysicsComponent_GetPendingInputCmd_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ValetRuntime.FortAthenaMutator_OverrideValetVehicleParameters
// (Actor)

class UClass* AFortAthenaMutator_OverrideValetVehicleParameters::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaMutator_OverrideValetVehicleParameters");

	return Clss;
}


// FortAthenaMutator_OverrideValetVehicleParameters ValetRuntime.Default__FortAthenaMutator_OverrideValetVehicleParameters
// (Public, ClassDefaultObject, ArchetypeObject)

class AFortAthenaMutator_OverrideValetVehicleParameters* AFortAthenaMutator_OverrideValetVehicleParameters::GetDefaultObj()
{
	static class AFortAthenaMutator_OverrideValetVehicleParameters* Default = nullptr;

	if (!Default)
		Default = static_cast<AFortAthenaMutator_OverrideValetVehicleParameters*>(AFortAthenaMutator_OverrideValetVehicleParameters::StaticClass()->DefaultObject);

	return Default;
}


// Function ValetRuntime.FortAthenaMutator_OverrideValetVehicleParameters.OnPlaylistLoaded
// (Final, Native, Public, HasOutParams)
// Parameters:
// class FName                        PlaylistName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       PlaylistContainerTags                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void AFortAthenaMutator_OverrideValetVehicleParameters::OnPlaylistLoaded(class FName PlaylistName, struct FGameplayTagContainer& PlaylistContainerTags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_OverrideValetVehicleParameters", "OnPlaylistLoaded");

	Params::AFortAthenaMutator_OverrideValetVehicleParameters_OnPlaylistLoaded_Params Parms{};

	Parms.PlaylistName = PlaylistName;
	Parms.PlaylistContainerTags = PlaylistContainerTags;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ValetRuntime.FortCameraMode_Dagwood
// (None)

class UClass* UFortCameraMode_Dagwood::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortCameraMode_Dagwood");

	return Clss;
}


// FortCameraMode_Dagwood ValetRuntime.Default__FortCameraMode_Dagwood
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortCameraMode_Dagwood* UFortCameraMode_Dagwood::GetDefaultObj()
{
	static class UFortCameraMode_Dagwood* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortCameraMode_Dagwood*>(UFortCameraMode_Dagwood::StaticClass()->DefaultObject);

	return Default;
}


// Class ValetRuntime.FortContextualTutorial_VehicleValetLowFuel
// (None)

class UClass* UFortContextualTutorial_VehicleValetLowFuel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortContextualTutorial_VehicleValetLowFuel");

	return Clss;
}


// FortContextualTutorial_VehicleValetLowFuel ValetRuntime.Default__FortContextualTutorial_VehicleValetLowFuel
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortContextualTutorial_VehicleValetLowFuel* UFortContextualTutorial_VehicleValetLowFuel::GetDefaultObj()
{
	static class UFortContextualTutorial_VehicleValetLowFuel* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortContextualTutorial_VehicleValetLowFuel*>(UFortContextualTutorial_VehicleValetLowFuel::StaticClass()->DefaultObject);

	return Default;
}


// Function ValetRuntime.FortContextualTutorial_VehicleValetLowFuel.HandleVehicleStateChanged
// (Final, Native, Private)
// Parameters:
// class AFortPlayerPawn*             PlayerPawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      NewVehicle                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      OldVehicle                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortContextualTutorial_VehicleValetLowFuel::HandleVehicleStateChanged(class AFortPlayerPawn* PlayerPawn, class AActor* NewVehicle, class AActor* OldVehicle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortContextualTutorial_VehicleValetLowFuel", "HandleVehicleStateChanged");

	Params::UFortContextualTutorial_VehicleValetLowFuel_HandleVehicleStateChanged_Params Parms{};

	Parms.PlayerPawn = PlayerPawn;
	Parms.NewVehicle = NewVehicle;
	Parms.OldVehicle = OldVehicle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ValetRuntime.FortContextualTutorial_VehicleValetLowFuel.HandleStartSkydivingForActivation
// (Final, Native, Private)
// Parameters:

void UFortContextualTutorial_VehicleValetLowFuel::HandleStartSkydivingForActivation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortContextualTutorial_VehicleValetLowFuel", "HandleStartSkydivingForActivation");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class ValetRuntime.FortDagwoodModsConfigs
// (None)

class UClass* UFortDagwoodModsConfigs::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortDagwoodModsConfigs");

	return Clss;
}


// FortDagwoodModsConfigs ValetRuntime.Default__FortDagwoodModsConfigs
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortDagwoodModsConfigs* UFortDagwoodModsConfigs::GetDefaultObj()
{
	static class UFortDagwoodModsConfigs* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortDagwoodModsConfigs*>(UFortDagwoodModsConfigs::StaticClass()->DefaultObject);

	return Default;
}


// Class ValetRuntime.FortDagwoodVehicle
// (Actor, Pawn)

class UClass* AFortDagwoodVehicle::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortDagwoodVehicle");

	return Clss;
}


// FortDagwoodVehicle ValetRuntime.Default__FortDagwoodVehicle
// (Public, ClassDefaultObject, ArchetypeObject)

class AFortDagwoodVehicle* AFortDagwoodVehicle::GetDefaultObj()
{
	static class AFortDagwoodVehicle* Default = nullptr;

	if (!Default)
		Default = static_cast<AFortDagwoodVehicle*>(AFortDagwoodVehicle::StaticClass()->DefaultObject);

	return Default;
}


// Function ValetRuntime.FortDagwoodVehicle.StartFade
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void AFortDagwoodVehicle::StartFade()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "StartFade");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ValetRuntime.FortDagwoodVehicle.SetValetAudioController
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class AFortValetAudioController*   ValetAudio                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortDagwoodVehicle::SetValetAudioController(class AFortValetAudioController* ValetAudio)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "SetValetAudioController");

	Params::AFortDagwoodVehicle_SetValetAudioController_Params Parms{};

	Parms.ValetAudio = ValetAudio;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ValetRuntime.FortDagwoodVehicle.SetOnFire
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bNewFire                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortDagwoodVehicle::SetOnFire(bool bNewFire)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "SetOnFire");

	Params::AFortDagwoodVehicle_SetOnFire_Params Parms{};

	Parms.bNewFire = bNewFire;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ValetRuntime.FortDagwoodVehicle.SetFuel
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewFuel                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortDagwoodVehicle::SetFuel(float NewFuel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "SetFuel");

	Params::AFortDagwoodVehicle_SetFuel_Params Parms{};

	Parms.NewFuel = NewFuel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ValetRuntime.FortDagwoodVehicle.SetDamageInfoOnServer
// (Final, BlueprintAuthorityOnly, Native, Protected, BlueprintCallable)
// Parameters:
// bool                               bInDamageFriendlyVehicles                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInDamageOtherVehicles                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInDamageOwnVehicle                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInDamageAllowedFromOtherVehicle                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortDagwoodVehicle::SetDamageInfoOnServer(bool bInDamageFriendlyVehicles, bool bInDamageOtherVehicles, bool bInDamageOwnVehicle, bool bInDamageAllowedFromOtherVehicle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "SetDamageInfoOnServer");

	Params::AFortDagwoodVehicle_SetDamageInfoOnServer_Params Parms{};

	Parms.bInDamageFriendlyVehicles = bInDamageFriendlyVehicles;
	Parms.bInDamageOtherVehicles = bInDamageOtherVehicles;
	Parms.bInDamageOwnVehicle = bInDamageOwnVehicle;
	Parms.bInDamageAllowedFromOtherVehicle = bInDamageAllowedFromOtherVehicle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ValetRuntime.FortDagwoodVehicle.ServerSetRuntimeSpringsInfo
// (Final, Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// struct FRuntimeSpringsInfo         SpringsInfo                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void AFortDagwoodVehicle::ServerSetRuntimeSpringsInfo(struct FRuntimeSpringsInfo& SpringsInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "ServerSetRuntimeSpringsInfo");

	Params::AFortDagwoodVehicle_ServerSetRuntimeSpringsInfo_Params Parms{};

	Parms.SpringsInfo = SpringsInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ValetRuntime.FortDagwoodVehicle.ServerSetRuntimeGravity
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// float                              GravMult                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortDagwoodVehicle::ServerSetRuntimeGravity(float GravMult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "ServerSetRuntimeGravity");

	Params::AFortDagwoodVehicle_ServerSetRuntimeGravity_Params Parms{};

	Parms.GravMult = GravMult;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ValetRuntime.FortDagwoodVehicle.ServerSetRuntimeFuelInfo
// (Final, Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// struct FRuntimeFuelInfo            FuelInfo                                                         (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void AFortDagwoodVehicle::ServerSetRuntimeFuelInfo(struct FRuntimeFuelInfo& FuelInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "ServerSetRuntimeFuelInfo");

	Params::AFortDagwoodVehicle_ServerSetRuntimeFuelInfo_Params Parms{};

	Parms.FuelInfo = FuelInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ValetRuntime.FortDagwoodVehicle.ServerSetRuntimeDriveInfo
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// float                              MaxIncline                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MaxTilt                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortDagwoodVehicle::ServerSetRuntimeDriveInfo(float MaxIncline, float MaxTilt)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "ServerSetRuntimeDriveInfo");

	Params::AFortDagwoodVehicle_ServerSetRuntimeDriveInfo_Params Parms{};

	Parms.MaxIncline = MaxIncline;
	Parms.MaxTilt = MaxTilt;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ValetRuntime.FortDagwoodVehicle.ServerSetRuntimeBoostInfo
// (Final, Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// struct FRuntimeBoostInfo           BoostInfo                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void AFortDagwoodVehicle::ServerSetRuntimeBoostInfo(struct FRuntimeBoostInfo& BoostInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "ServerSetRuntimeBoostInfo");

	Params::AFortDagwoodVehicle_ServerSetRuntimeBoostInfo_Params Parms{};

	Parms.BoostInfo = BoostInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ValetRuntime.FortDagwoodVehicle.ServerSetFadeDuration
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewFadeDuration                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortDagwoodVehicle::ServerSetFadeDuration(float NewFadeDuration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "ServerSetFadeDuration");

	Params::AFortDagwoodVehicle_ServerSetFadeDuration_Params Parms{};

	Parms.NewFadeDuration = NewFadeDuration;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ValetRuntime.FortDagwoodVehicle.ServerSetDestructionInfo
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// float                              SelfDestructTime                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MaxTimeZeroHealth                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MaxTimeSelfDestructCleanup                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MaxTimeExplosion                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortDagwoodVehicle::ServerSetDestructionInfo(float SelfDestructTime, float MaxTimeZeroHealth, float MaxTimeSelfDestructCleanup, float MaxTimeExplosion)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "ServerSetDestructionInfo");

	Params::AFortDagwoodVehicle_ServerSetDestructionInfo_Params Parms{};

	Parms.SelfDestructTime = SelfDestructTime;
	Parms.MaxTimeZeroHealth = MaxTimeZeroHealth;
	Parms.MaxTimeSelfDestructCleanup = MaxTimeSelfDestructCleanup;
	Parms.MaxTimeExplosion = MaxTimeExplosion;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ValetRuntime.FortDagwoodVehicle.ServerSelfDestructActivated
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:

void AFortDagwoodVehicle::ServerSelfDestructActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "ServerSelfDestructActivated");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ValetRuntime.FortDagwoodVehicle.ServerAddRuntimeGearsInfo
// (Final, Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// struct FRuntimeGearInfo            GearInfo                                                         (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void AFortDagwoodVehicle::ServerAddRuntimeGearsInfo(struct FRuntimeGearInfo& GearInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "ServerAddRuntimeGearsInfo");

	Params::AFortDagwoodVehicle_ServerAddRuntimeGearsInfo_Params Parms{};

	Parms.GearInfo = GearInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ValetRuntime.FortDagwoodVehicle.SelfDestructCleanup
// (Final, Native, Public)
// Parameters:

void AFortDagwoodVehicle::SelfDestructCleanup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "SelfDestructCleanup");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ValetRuntime.FortDagwoodVehicle.OnTickAudioFade
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              FadeParam                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortDagwoodVehicle::OnTickAudioFade(float FadeParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "OnTickAudioFade");

	Params::AFortDagwoodVehicle_OnTickAudioFade_Params Parms{};

	Parms.FadeParam = FadeParam;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValetRuntime.FortDagwoodVehicle.OnTickAudioController
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortDagwoodVehicle::OnTickAudioController(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "OnTickAudioController");

	Params::AFortDagwoodVehicle_OnTickAudioController_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValetRuntime.FortDagwoodVehicle.OnStopHandbrake
// (Event, Public, BlueprintEvent)
// Parameters:

void AFortDagwoodVehicle::OnStopHandbrake()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "OnStopHandbrake");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ValetRuntime.FortDagwoodVehicle.OnStartHandbrake
// (Event, Public, BlueprintEvent)
// Parameters:

void AFortDagwoodVehicle::OnStartHandbrake()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "OnStartHandbrake");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ValetRuntime.FortDagwoodVehicle.OnServerAltInteract
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortPawn*                   Pawn                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortDagwoodVehicle::OnServerAltInteract(class AFortPawn* Pawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "OnServerAltInteract");

	Params::AFortDagwoodVehicle_OnServerAltInteract_Params Parms{};

	Parms.Pawn = Pawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValetRuntime.FortDagwoodVehicle.OnRimScrapeDamage
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                              TireIndex                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortDagwoodVehicle::OnRimScrapeDamage(int32 TireIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "OnRimScrapeDamage");

	Params::AFortDagwoodVehicle_OnRimScrapeDamage_Params Parms{};

	Parms.TireIndex = TireIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValetRuntime.FortDagwoodVehicle.OnRep_Tires
// (Final, Native, Private, HasOutParams)
// Parameters:
// TArray<enum class ETireStates>     PrevTireStates                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void AFortDagwoodVehicle::OnRep_Tires(TArray<enum class ETireStates>& PrevTireStates)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "OnRep_Tires");

	Params::AFortDagwoodVehicle_OnRep_Tires_Params Parms{};

	Parms.PrevTireStates = PrevTireStates;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ValetRuntime.FortDagwoodVehicle.OnRep_ServerRepWheelData
// (Final, Native, Private)
// Parameters:

void AFortDagwoodVehicle::OnRep_ServerRepWheelData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "OnRep_ServerRepWheelData");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ValetRuntime.FortDagwoodVehicle.OnRep_RandSeed
// (Final, Native, Private)
// Parameters:

void AFortDagwoodVehicle::OnRep_RandSeed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "OnRep_RandSeed");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ValetRuntime.FortDagwoodVehicle.OnRep_PoppedTireReaction
// (Final, Native, Private)
// Parameters:

void AFortDagwoodVehicle::OnRep_PoppedTireReaction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "OnRep_PoppedTireReaction");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ValetRuntime.FortDagwoodVehicle.OnRep_IsInoperable
// (Final, Native, Private)
// Parameters:

void AFortDagwoodVehicle::OnRep_IsInoperable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "OnRep_IsInoperable");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ValetRuntime.FortDagwoodVehicle.OnRep_FakeTires
// (Final, Native, Private, HasOutParams)
// Parameters:
// TArray<enum class ETireStates>     PrevTireStates                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void AFortDagwoodVehicle::OnRep_FakeTires(TArray<enum class ETireStates>& PrevTireStates)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "OnRep_FakeTires");

	Params::AFortDagwoodVehicle_OnRep_FakeTires_Params Parms{};

	Parms.PrevTireStates = PrevTireStates;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ValetRuntime.FortDagwoodVehicle.OnRep_Exploded
// (Final, Native, Private)
// Parameters:

void AFortDagwoodVehicle::OnRep_Exploded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "OnRep_Exploded");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ValetRuntime.FortDagwoodVehicle.OnRep_DagwoodRuntimeModifiers
// (Final, Native, Private, HasOutParams)
// Parameters:
// struct FDagwoodRuntimeModifiers    PrevMods                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void AFortDagwoodVehicle::OnRep_DagwoodRuntimeModifiers(struct FDagwoodRuntimeModifiers& PrevMods)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "OnRep_DagwoodRuntimeModifiers");

	Params::AFortDagwoodVehicle_OnRep_DagwoodRuntimeModifiers_Params Parms{};

	Parms.PrevMods = PrevMods;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ValetRuntime.FortDagwoodVehicle.OnPoppedTire
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              TireIndex                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bFakeTire                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortDagwoodVehicle::OnPoppedTire(int32 TireIndex, bool bFakeTire)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "OnPoppedTire");

	Params::AFortDagwoodVehicle_OnPoppedTire_Params Parms{};

	Parms.TireIndex = TireIndex;
	Parms.bFakeTire = bFakeTire;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ValetRuntime.FortDagwoodVehicle.OnLowFuel
// (Event, Public, BlueprintEvent)
// Parameters:

void AFortDagwoodVehicle::OnLowFuel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "OnLowFuel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ValetRuntime.FortDagwoodVehicle.OnInoperableChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bInoperable                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortDagwoodVehicle::OnInoperableChanged(bool bInoperable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "OnInoperableChanged");

	Params::AFortDagwoodVehicle_OnInoperableChanged_Params Parms{};

	Parms.bInoperable = bInoperable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValetRuntime.FortDagwoodVehicle.OnHoldSelfDestructStopped
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AFortPawn*                   DriverPawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortDagwoodVehicle::OnHoldSelfDestructStopped(class AFortPawn* DriverPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "OnHoldSelfDestructStopped");

	Params::AFortDagwoodVehicle_OnHoldSelfDestructStopped_Params Parms{};

	Parms.DriverPawn = DriverPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValetRuntime.FortDagwoodVehicle.OnHoldSelfDestructStarted
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AFortPawn*                   DriverPawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ExitDuration                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortDagwoodVehicle::OnHoldSelfDestructStarted(class AFortPawn* DriverPawn, float ExitDuration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "OnHoldSelfDestructStarted");

	Params::AFortDagwoodVehicle_OnHoldSelfDestructStarted_Params Parms{};

	Parms.DriverPawn = DriverPawn;
	Parms.ExitDuration = ExitDuration;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValetRuntime.FortDagwoodVehicle.OnGainedFuel
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              NewPercent                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortDagwoodVehicle::OnGainedFuel(float NewPercent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "OnGainedFuel");

	Params::AFortDagwoodVehicle_OnGainedFuel_Params Parms{};

	Parms.NewPercent = NewPercent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValetRuntime.FortDagwoodVehicle.OnFlipImpactDamage
// (Event, Public, BlueprintEvent)
// Parameters:

void AFortDagwoodVehicle::OnFlipImpactDamage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "OnFlipImpactDamage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ValetRuntime.FortDagwoodVehicle.OnFireStop
// (Event, Protected, BlueprintEvent)
// Parameters:

void AFortDagwoodVehicle::OnFireStop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "OnFireStop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ValetRuntime.FortDagwoodVehicle.OnFireStart
// (Event, Protected, BlueprintEvent)
// Parameters:

void AFortDagwoodVehicle::OnFireStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "OnFireStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ValetRuntime.FortDagwoodVehicle.OnExitRoad
// (Event, Protected, BlueprintEvent)
// Parameters:

void AFortDagwoodVehicle::OnExitRoad()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "OnExitRoad");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ValetRuntime.FortDagwoodVehicle.OnExitLandscape
// (Event, Protected, BlueprintEvent)
// Parameters:

void AFortDagwoodVehicle::OnExitLandscape()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "OnExitLandscape");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ValetRuntime.FortDagwoodVehicle.OnEnterLandscape
// (Event, Protected, BlueprintEvent)
// Parameters:

void AFortDagwoodVehicle::OnEnterLandscape()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "OnEnterLandscape");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ValetRuntime.FortDagwoodVehicle.OnEnteredRoad
// (Event, Protected, BlueprintEvent)
// Parameters:

void AFortDagwoodVehicle::OnEnteredRoad()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "OnEnteredRoad");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ValetRuntime.FortDagwoodVehicle.OnEmptyFuel
// (Event, Public, BlueprintEvent)
// Parameters:

void AFortDagwoodVehicle::OnEmptyFuel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "OnEmptyFuel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ValetRuntime.FortDagwoodVehicle.OnDestroyedPropFromCollision
// (Event, Protected, BlueprintEvent)
// Parameters:
// class ABuildingActor*              BuildingHitActor                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortDagwoodVehicle::OnDestroyedPropFromCollision(class ABuildingActor* BuildingHitActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "OnDestroyedPropFromCollision");

	Params::AFortDagwoodVehicle_OnDestroyedPropFromCollision_Params Parms{};

	Parms.BuildingHitActor = BuildingHitActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValetRuntime.FortDagwoodVehicle.OnClientBeginAltInteract
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortPawn*                   Pawn                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortDagwoodVehicle::OnClientBeginAltInteract(class AFortPawn* Pawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "OnClientBeginAltInteract");

	Params::AFortDagwoodVehicle_OnClientBeginAltInteract_Params Parms{};

	Parms.Pawn = Pawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValetRuntime.FortDagwoodVehicle.OnBoostReady
// (Event, Protected, BlueprintEvent)
// Parameters:

void AFortDagwoodVehicle::OnBoostReady()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "OnBoostReady");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ValetRuntime.FortDagwoodVehicle.OnBoostFailed
// (Event, Protected, BlueprintEvent)
// Parameters:

void AFortDagwoodVehicle::OnBoostFailed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "OnBoostFailed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ValetRuntime.FortDagwoodVehicle.NativeOnOutOfFuel
// (Final, Native, Public)
// Parameters:

void AFortDagwoodVehicle::NativeOnOutOfFuel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "NativeOnOutOfFuel");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ValetRuntime.FortDagwoodVehicle.NativeOnLowFuel
// (Final, Native, Public)
// Parameters:

void AFortDagwoodVehicle::NativeOnLowFuel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "NativeOnLowFuel");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ValetRuntime.FortDagwoodVehicle.NativeOnFuelChanged
// (Final, Native, Public)
// Parameters:
// float                              NewFuelPercent                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OldFuelPercent                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortDagwoodVehicle::NativeOnFuelChanged(float NewFuelPercent, float OldFuelPercent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "NativeOnFuelChanged");

	Params::AFortDagwoodVehicle_NativeOnFuelChanged_Params Parms{};

	Parms.NewFuelPercent = NewFuelPercent;
	Parms.OldFuelPercent = OldFuelPercent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ValetRuntime.FortDagwoodVehicle.NativeCalculateAccelRumbleIntensity
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              MaxIntensity                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float AFortDagwoodVehicle::NativeCalculateAccelRumbleIntensity(float MaxIntensity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "NativeCalculateAccelRumbleIntensity");

	Params::AFortDagwoodVehicle_NativeCalculateAccelRumbleIntensity_Params Parms{};

	Parms.MaxIntensity = MaxIntensity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ValetRuntime.FortDagwoodVehicle.MakeOperable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bAddGas                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortDagwoodVehicle::MakeOperable(bool bAddGas)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "MakeOperable");

	Params::AFortDagwoodVehicle_MakeOperable_Params Parms{};

	Parms.bAddGas = bAddGas;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ValetRuntime.FortDagwoodVehicle.MakeInoperable
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void AFortDagwoodVehicle::MakeInoperable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "MakeInoperable");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ValetRuntime.FortDagwoodVehicle.IsVehicleAcceleratingWithSpeedThreshold
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              SpeedThreshold                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AFortDagwoodVehicle::IsVehicleAcceleratingWithSpeedThreshold(float SpeedThreshold)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "IsVehicleAcceleratingWithSpeedThreshold");

	Params::AFortDagwoodVehicle_IsVehicleAcceleratingWithSpeedThreshold_Params Parms{};

	Parms.SpeedThreshold = SpeedThreshold;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ValetRuntime.FortDagwoodVehicle.IsTireSkidding
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              MinSpeedForSkid                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              AngleForSkid                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              SpeedForPeelout                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              SpeedForBraking                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AFortDagwoodVehicle::IsTireSkidding(float MinSpeedForSkid, float AngleForSkid, float SpeedForPeelout, float SpeedForBraking)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "IsTireSkidding");

	Params::AFortDagwoodVehicle_IsTireSkidding_Params Parms{};

	Parms.MinSpeedForSkid = MinSpeedForSkid;
	Parms.AngleForSkid = AngleForSkid;
	Parms.SpeedForPeelout = SpeedForPeelout;
	Parms.SpeedForBraking = SpeedForBraking;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ValetRuntime.FortDagwoodVehicle.IsOnRoad
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AFortDagwoodVehicle::IsOnRoad()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "IsOnRoad");

	Params::AFortDagwoodVehicle_IsOnRoad_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ValetRuntime.FortDagwoodVehicle.IsOnLandscape
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AFortDagwoodVehicle::IsOnLandscape()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "IsOnLandscape");

	Params::AFortDagwoodVehicle_IsOnLandscape_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ValetRuntime.FortDagwoodVehicle.IsOnDirt
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AFortDagwoodVehicle::IsOnDirt()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "IsOnDirt");

	Params::AFortDagwoodVehicle_IsOnDirt_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ValetRuntime.FortDagwoodVehicle.IsOffroad
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AFortDagwoodVehicle::IsOffroad()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "IsOffroad");

	Params::AFortDagwoodVehicle_IsOffroad_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ValetRuntime.FortDagwoodVehicle.IsNativeBPTickEnabled
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AFortDagwoodVehicle::IsNativeBPTickEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "IsNativeBPTickEnabled");

	Params::AFortDagwoodVehicle_IsNativeBPTickEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ValetRuntime.FortDagwoodVehicle.HandleCurrentPlaylistLoaded
// (Final, Native, Protected, HasOutParams)
// Parameters:
// class FName                        PlaylistName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       PlaylistContextTags                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void AFortDagwoodVehicle::HandleCurrentPlaylistLoaded(class FName PlaylistName, struct FGameplayTagContainer& PlaylistContextTags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "HandleCurrentPlaylistLoaded");

	Params::AFortDagwoodVehicle_HandleCurrentPlaylistLoaded_Params Parms{};

	Parms.PlaylistName = PlaylistName;
	Parms.PlaylistContextTags = PlaylistContextTags;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ValetRuntime.FortDagwoodVehicle.GetTireSurface
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ETireLocations          TireIndex                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ETireSurfaces           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ETireSurfaces AFortDagwoodVehicle::GetTireSurface(enum class ETireLocations TireIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "GetTireSurface");

	Params::AFortDagwoodVehicle_GetTireSurface_Params Parms{};

	Parms.TireIndex = TireIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ValetRuntime.FortDagwoodVehicle.GetTireState
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              TireIndex                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AFortDagwoodVehicle::GetTireState(int32 TireIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "GetTireState");

	Params::AFortDagwoodVehicle_GetTireState_Params Parms{};

	Parms.TireIndex = TireIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ValetRuntime.FortDagwoodVehicle.GetTireHealthPercent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ETireLocations          TireIndex                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float AFortDagwoodVehicle::GetTireHealthPercent(enum class ETireLocations TireIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "GetTireHealthPercent");

	Params::AFortDagwoodVehicle_GetTireHealthPercent_Params Parms{};

	Parms.TireIndex = TireIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ValetRuntime.FortDagwoodVehicle.GetSelfDestructDelay
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float AFortDagwoodVehicle::GetSelfDestructDelay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "GetSelfDestructDelay");

	Params::AFortDagwoodVehicle_GetSelfDestructDelay_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ValetRuntime.FortDagwoodVehicle.GetSelfDestructCleanupDelay
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float AFortDagwoodVehicle::GetSelfDestructCleanupDelay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "GetSelfDestructCleanupDelay");

	Params::AFortDagwoodVehicle_GetSelfDestructCleanupDelay_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ValetRuntime.FortDagwoodVehicle.GetOnFire
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AFortDagwoodVehicle::GetOnFire()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "GetOnFire");

	Params::AFortDagwoodVehicle_GetOnFire_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ValetRuntime.FortDagwoodVehicle.GetMiddleAxleForwardAdjust
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float AFortDagwoodVehicle::GetMiddleAxleForwardAdjust()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "GetMiddleAxleForwardAdjust");

	Params::AFortDagwoodVehicle_GetMiddleAxleForwardAdjust_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ValetRuntime.FortDagwoodVehicle.GetMaxZeroHealthTime
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float AFortDagwoodVehicle::GetMaxZeroHealthTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "GetMaxZeroHealthTime");

	Params::AFortDagwoodVehicle_GetMaxZeroHealthTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ValetRuntime.FortDagwoodVehicle.GetFuelCapacity
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float AFortDagwoodVehicle::GetFuelCapacity()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "GetFuelCapacity");

	Params::AFortDagwoodVehicle_GetFuelCapacity_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ValetRuntime.FortDagwoodVehicle.GetFuel
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float AFortDagwoodVehicle::GetFuel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "GetFuel");

	Params::AFortDagwoodVehicle_GetFuel_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ValetRuntime.FortDagwoodVehicle.GetExplosionDelay
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float AFortDagwoodVehicle::GetExplosionDelay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "GetExplosionDelay");

	Params::AFortDagwoodVehicle_GetExplosionDelay_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ValetRuntime.FortDagwoodVehicle.GetCurrentDagwoodRuntimeProperties
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FDagwoodRuntimeModifiers    ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

struct FDagwoodRuntimeModifiers AFortDagwoodVehicle::GetCurrentDagwoodRuntimeProperties()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "GetCurrentDagwoodRuntimeProperties");

	Params::AFortDagwoodVehicle_GetCurrentDagwoodRuntimeProperties_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ValetRuntime.FortDagwoodVehicle.GetBumpiness
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float AFortDagwoodVehicle::GetBumpiness()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "GetBumpiness");

	Params::AFortDagwoodVehicle_GetBumpiness_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ValetRuntime.FortDagwoodVehicle.ForwardOrReverseInputPressed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AFortDagwoodVehicle::ForwardOrReverseInputPressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "ForwardOrReverseInputPressed");

	Params::AFortDagwoodVehicle_ForwardOrReverseInputPressed_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ValetRuntime.FortDagwoodVehicle.CleanupLoopingPooledFX
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AFortDagwoodVehicle::CleanupLoopingPooledFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "CleanupLoopingPooledFX");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ValetRuntime.FortDagwoodVehicle.BP_OnBoostStarted
// (Event, Protected, BlueprintEvent)
// Parameters:

void AFortDagwoodVehicle::BP_OnBoostStarted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "BP_OnBoostStarted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ValetRuntime.FortDagwoodVehicle.BP_OnBoostFinished
// (Event, Protected, BlueprintEvent)
// Parameters:

void AFortDagwoodVehicle::BP_OnBoostFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "BP_OnBoostFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ValetRuntime.FortDagwoodVehicle.ApplyRuntimeModifiers
// (Final, Native, Private)
// Parameters:

void AFortDagwoodVehicle::ApplyRuntimeModifiers()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicle", "ApplyRuntimeModifiers");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class ValetRuntime.FortDagwoodVehicleAnimInstance
// (None)

class UClass* UFortDagwoodVehicleAnimInstance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortDagwoodVehicleAnimInstance");

	return Clss;
}


// FortDagwoodVehicleAnimInstance ValetRuntime.Default__FortDagwoodVehicleAnimInstance
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortDagwoodVehicleAnimInstance* UFortDagwoodVehicleAnimInstance::GetDefaultObj()
{
	static class UFortDagwoodVehicleAnimInstance* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortDagwoodVehicleAnimInstance*>(UFortDagwoodVehicleAnimInstance::StaticClass()->DefaultObject);

	return Default;
}


// Class ValetRuntime.FortDagwoodVehicleConfigs
// (None)

class UClass* UFortDagwoodVehicleConfigs::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortDagwoodVehicleConfigs");

	return Clss;
}


// FortDagwoodVehicleConfigs ValetRuntime.Default__FortDagwoodVehicleConfigs
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortDagwoodVehicleConfigs* UFortDagwoodVehicleConfigs::GetDefaultObj()
{
	static class UFortDagwoodVehicleConfigs* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortDagwoodVehicleConfigs*>(UFortDagwoodVehicleConfigs::StaticClass()->DefaultObject);

	return Default;
}


// Class ValetRuntime.FortDagwoodVehicleManager
// (None)

class UClass* UFortDagwoodVehicleManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortDagwoodVehicleManager");

	return Clss;
}


// FortDagwoodVehicleManager ValetRuntime.Default__FortDagwoodVehicleManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortDagwoodVehicleManager* UFortDagwoodVehicleManager::GetDefaultObj()
{
	static class UFortDagwoodVehicleManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortDagwoodVehicleManager*>(UFortDagwoodVehicleManager::StaticClass()->DefaultObject);

	return Default;
}


// Function ValetRuntime.FortDagwoodVehicleManager.UpdatePropReplacement
// (Final, Native, Public)
// Parameters:

void UFortDagwoodVehicleManager::UpdatePropReplacement()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicleManager", "UpdatePropReplacement");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ValetRuntime.FortDagwoodVehicleManager.OnVehicleSpawnsUpdated
// (Final, Native, Public, HasOutParams)
// Parameters:
// class UFortVehicleItemDefinition*  VehicleItemDef                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>              SpawnedVehicles                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// int32                              NewVehicleCount                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortDagwoodVehicleManager::OnVehicleSpawnsUpdated(class UFortVehicleItemDefinition* VehicleItemDef, TArray<class AActor*>* SpawnedVehicles, int32 NewVehicleCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicleManager", "OnVehicleSpawnsUpdated");

	Params::UFortDagwoodVehicleManager_OnVehicleSpawnsUpdated_Params Parms{};

	Parms.VehicleItemDef = VehicleItemDef;
	Parms.NewVehicleCount = NewVehicleCount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SpawnedVehicles != nullptr)
		*SpawnedVehicles = std::move(Parms.SpawnedVehicles);

}


// Function ValetRuntime.FortDagwoodVehicleManager.OnVehicleSpawned
// (Final, Native, Public)
// Parameters:
// class AFortAthenaVehicle*          Vehicle                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortDagwoodVehicleManager::OnVehicleSpawned(class AFortAthenaVehicle* Vehicle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicleManager", "OnVehicleSpawned");

	Params::UFortDagwoodVehicleManager_OnVehicleSpawned_Params Parms{};

	Parms.Vehicle = Vehicle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ValetRuntime.FortDagwoodVehicleManager.CustomHandleActorStreamedInEditor
// (Final, Native, Public)
// Parameters:
// class AActor*                      SourceActor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortDagwoodVehicleManager::CustomHandleActorStreamedInEditor(class AActor* SourceActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDagwoodVehicleManager", "CustomHandleActorStreamedInEditor");

	Params::UFortDagwoodVehicleManager_CustomHandleActorStreamedInEditor_Params Parms{};

	Parms.SourceActor = SourceActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ValetRuntime.FortValetAudioController
// (Actor)

class UClass* AFortValetAudioController::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortValetAudioController");

	return Clss;
}


// FortValetAudioController ValetRuntime.Default__FortValetAudioController
// (Public, ClassDefaultObject, ArchetypeObject)

class AFortValetAudioController* AFortValetAudioController::GetDefaultObj()
{
	static class AFortValetAudioController* Default = nullptr;

	if (!Default)
		Default = static_cast<AFortValetAudioController*>(AFortValetAudioController::StaticClass()->DefaultObject);

	return Default;
}


// Function ValetRuntime.FortValetAudioController.Update_Native
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void AFortValetAudioController::Update_Native()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortValetAudioController", "Update_Native");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ValetRuntime.FortValetAudioController.OnTireModApplied
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FTireInfo                   AppliedTireMod                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void AFortValetAudioController::OnTireModApplied(struct FTireInfo& AppliedTireMod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortValetAudioController", "OnTireModApplied");

	Params::AFortValetAudioController_OnTireModApplied_Params Parms{};

	Parms.AppliedTireMod = AppliedTireMod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValetRuntime.FortValetAudioController.OnSuspensionCollision_Native
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// bool                               OutResult                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OutMagnitude                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortValetAudioController::OnSuspensionCollision_Native(bool* OutResult, float* OutMagnitude)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortValetAudioController", "OnSuspensionCollision_Native");

	Params::AFortValetAudioController_OnSuspensionCollision_Native_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutResult != nullptr)
		*OutResult = Parms.OutResult;

	if (OutMagnitude != nullptr)
		*OutMagnitude = Parms.OutMagnitude;

}


// Function ValetRuntime.FortValetAudioController.CacheValetVehicle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AFortDagwoodVehicle*         InVehicle                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortValetAudioController::CacheValetVehicle(class AFortDagwoodVehicle* InVehicle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortValetAudioController", "CacheValetVehicle");

	Params::AFortValetAudioController_CacheValetVehicle_Params Parms{};

	Parms.InVehicle = InVehicle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ValetRuntime.FortValetGameFeatureData
// (None)

class UClass* UFortValetGameFeatureData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortValetGameFeatureData");

	return Clss;
}


// FortValetGameFeatureData ValetRuntime.Default__FortValetGameFeatureData
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortValetGameFeatureData* UFortValetGameFeatureData::GetDefaultObj()
{
	static class UFortValetGameFeatureData* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortValetGameFeatureData*>(UFortValetGameFeatureData::StaticClass()->DefaultObject);

	return Default;
}


// Class ValetRuntime.FortValetMountedGunAnimInstance
// (None)

class UClass* UFortValetMountedGunAnimInstance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortValetMountedGunAnimInstance");

	return Clss;
}


// FortValetMountedGunAnimInstance ValetRuntime.Default__FortValetMountedGunAnimInstance
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortValetMountedGunAnimInstance* UFortValetMountedGunAnimInstance::GetDefaultObj()
{
	static class UFortValetMountedGunAnimInstance* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortValetMountedGunAnimInstance*>(UFortValetMountedGunAnimInstance::StaticClass()->DefaultObject);

	return Default;
}


// Class ValetRuntime.FortValetPassengerAnimInstance
// (None)

class UClass* UFortValetPassengerAnimInstance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortValetPassengerAnimInstance");

	return Clss;
}


// FortValetPassengerAnimInstance ValetRuntime.Default__FortValetPassengerAnimInstance
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortValetPassengerAnimInstance* UFortValetPassengerAnimInstance::GetDefaultObj()
{
	static class UFortValetPassengerAnimInstance* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortValetPassengerAnimInstance*>(UFortValetPassengerAnimInstance::StaticClass()->DefaultObject);

	return Default;
}

}


