#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class AudioGameplayVolume.AudioGameplayVolumeComponentBase
// (None)

class UClass* UAudioGameplayVolumeComponentBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioGameplayVolumeComponentBase");

	return Clss;
}


// AudioGameplayVolumeComponentBase AudioGameplayVolume.Default__AudioGameplayVolumeComponentBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioGameplayVolumeComponentBase* UAudioGameplayVolumeComponentBase::GetDefaultObj()
{
	static class UAudioGameplayVolumeComponentBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioGameplayVolumeComponentBase*>(UAudioGameplayVolumeComponentBase::StaticClass()->DefaultObject);

	return Default;
}


// Function AudioGameplayVolume.AudioGameplayVolumeComponentBase.SetPriority
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InPriority                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioGameplayVolumeComponentBase::SetPriority(int32 InPriority)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioGameplayVolumeComponentBase", "SetPriority");

	Params::UAudioGameplayVolumeComponentBase_SetPriority_Params Parms{};

	Parms.InPriority = InPriority;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AudioGameplayVolume.AttenuationVolumeComponent
// (None)

class UClass* UAttenuationVolumeComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AttenuationVolumeComponent");

	return Clss;
}


// AttenuationVolumeComponent AudioGameplayVolume.Default__AttenuationVolumeComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UAttenuationVolumeComponent* UAttenuationVolumeComponent::GetDefaultObj()
{
	static class UAttenuationVolumeComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UAttenuationVolumeComponent*>(UAttenuationVolumeComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function AudioGameplayVolume.AttenuationVolumeComponent.SetInteriorVolume
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Volume                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InterpolateTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAttenuationVolumeComponent::SetInteriorVolume(float Volume, float InterpolateTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AttenuationVolumeComponent", "SetInteriorVolume");

	Params::UAttenuationVolumeComponent_SetInteriorVolume_Params Parms{};

	Parms.Volume = Volume;
	Parms.InterpolateTime = InterpolateTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioGameplayVolume.AttenuationVolumeComponent.SetExteriorVolume
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Volume                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InterpolateTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAttenuationVolumeComponent::SetExteriorVolume(float Volume, float InterpolateTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AttenuationVolumeComponent", "SetExteriorVolume");

	Params::UAttenuationVolumeComponent_SetExteriorVolume_Params Parms{};

	Parms.Volume = Volume;
	Parms.InterpolateTime = InterpolateTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AudioGameplayVolume.AudioGameplayVolume
// (Actor)

class UClass* AAudioGameplayVolume::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioGameplayVolume");

	return Clss;
}


// AudioGameplayVolume AudioGameplayVolume.Default__AudioGameplayVolume
// (Public, ClassDefaultObject, ArchetypeObject)

class AAudioGameplayVolume* AAudioGameplayVolume::GetDefaultObj()
{
	static class AAudioGameplayVolume* Default = nullptr;

	if (!Default)
		Default = static_cast<AAudioGameplayVolume*>(AAudioGameplayVolume::StaticClass()->DefaultObject);

	return Default;
}


// Function AudioGameplayVolume.AudioGameplayVolume.SetEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bNewEnabled                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AAudioGameplayVolume::SetEnabled(bool bNewEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioGameplayVolume", "SetEnabled");

	Params::AAudioGameplayVolume_SetEnabled_Params Parms{};

	Parms.bNewEnabled = bNewEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioGameplayVolume.AudioGameplayVolume.OnRep_bEnabled
// (Native, Protected)
// Parameters:

void AAudioGameplayVolume::OnRep_bEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioGameplayVolume", "OnRep_bEnabled");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class AudioGameplayVolume.AudioGameplayVolumeProxyComponent
// (None)

class UClass* UAudioGameplayVolumeProxyComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioGameplayVolumeProxyComponent");

	return Clss;
}


// AudioGameplayVolumeProxyComponent AudioGameplayVolume.Default__AudioGameplayVolumeProxyComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioGameplayVolumeProxyComponent* UAudioGameplayVolumeProxyComponent::GetDefaultObj()
{
	static class UAudioGameplayVolumeProxyComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioGameplayVolumeProxyComponent*>(UAudioGameplayVolumeProxyComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class AudioGameplayVolume.AudioGameplayVolumeProxy
// (None)

class UClass* UAudioGameplayVolumeProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioGameplayVolumeProxy");

	return Clss;
}


// AudioGameplayVolumeProxy AudioGameplayVolume.Default__AudioGameplayVolumeProxy
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioGameplayVolumeProxy* UAudioGameplayVolumeProxy::GetDefaultObj()
{
	static class UAudioGameplayVolumeProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioGameplayVolumeProxy*>(UAudioGameplayVolumeProxy::StaticClass()->DefaultObject);

	return Default;
}


// Class AudioGameplayVolume.AGVPrimitiveComponentProxy
// (None)

class UClass* UAGVPrimitiveComponentProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AGVPrimitiveComponentProxy");

	return Clss;
}


// AGVPrimitiveComponentProxy AudioGameplayVolume.Default__AGVPrimitiveComponentProxy
// (Public, ClassDefaultObject, ArchetypeObject)

class UAGVPrimitiveComponentProxy* UAGVPrimitiveComponentProxy::GetDefaultObj()
{
	static class UAGVPrimitiveComponentProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<UAGVPrimitiveComponentProxy*>(UAGVPrimitiveComponentProxy::StaticClass()->DefaultObject);

	return Default;
}


// Class AudioGameplayVolume.AGVConditionProxy
// (None)

class UClass* UAGVConditionProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AGVConditionProxy");

	return Clss;
}


// AGVConditionProxy AudioGameplayVolume.Default__AGVConditionProxy
// (Public, ClassDefaultObject, ArchetypeObject)

class UAGVConditionProxy* UAGVConditionProxy::GetDefaultObj()
{
	static class UAGVConditionProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<UAGVConditionProxy*>(UAGVConditionProxy::StaticClass()->DefaultObject);

	return Default;
}


// Class AudioGameplayVolume.AudioGameplayVolumeSubsystem
// (None)

class UClass* UAudioGameplayVolumeSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioGameplayVolumeSubsystem");

	return Clss;
}


// AudioGameplayVolumeSubsystem AudioGameplayVolume.Default__AudioGameplayVolumeSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioGameplayVolumeSubsystem* UAudioGameplayVolumeSubsystem::GetDefaultObj()
{
	static class UAudioGameplayVolumeSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioGameplayVolumeSubsystem*>(UAudioGameplayVolumeSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Class AudioGameplayVolume.FilterVolumeComponent
// (None)

class UClass* UFilterVolumeComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FilterVolumeComponent");

	return Clss;
}


// FilterVolumeComponent AudioGameplayVolume.Default__FilterVolumeComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UFilterVolumeComponent* UFilterVolumeComponent::GetDefaultObj()
{
	static class UFilterVolumeComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UFilterVolumeComponent*>(UFilterVolumeComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function AudioGameplayVolume.FilterVolumeComponent.SetInteriorLPF
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Volume                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InterpolateTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFilterVolumeComponent::SetInteriorLPF(float Volume, float InterpolateTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FilterVolumeComponent", "SetInteriorLPF");

	Params::UFilterVolumeComponent_SetInteriorLPF_Params Parms{};

	Parms.Volume = Volume;
	Parms.InterpolateTime = InterpolateTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioGameplayVolume.FilterVolumeComponent.SetExteriorLPF
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Volume                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InterpolateTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFilterVolumeComponent::SetExteriorLPF(float Volume, float InterpolateTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FilterVolumeComponent", "SetExteriorLPF");

	Params::UFilterVolumeComponent_SetExteriorLPF_Params Parms{};

	Parms.Volume = Volume;
	Parms.InterpolateTime = InterpolateTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AudioGameplayVolume.SubmixSendVolumeComponent
// (None)

class UClass* USubmixSendVolumeComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SubmixSendVolumeComponent");

	return Clss;
}


// SubmixSendVolumeComponent AudioGameplayVolume.Default__SubmixSendVolumeComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class USubmixSendVolumeComponent* USubmixSendVolumeComponent::GetDefaultObj()
{
	static class USubmixSendVolumeComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<USubmixSendVolumeComponent*>(USubmixSendVolumeComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function AudioGameplayVolume.SubmixSendVolumeComponent.SetSubmixSendSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FAudioVolumeSubmixSendSettings>NewSubmixSendSettings                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void USubmixSendVolumeComponent::SetSubmixSendSettings(TArray<struct FAudioVolumeSubmixSendSettings>& NewSubmixSendSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixSendVolumeComponent", "SetSubmixSendSettings");

	Params::USubmixSendVolumeComponent_SetSubmixSendSettings_Params Parms{};

	Parms.NewSubmixSendSettings = NewSubmixSendSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


