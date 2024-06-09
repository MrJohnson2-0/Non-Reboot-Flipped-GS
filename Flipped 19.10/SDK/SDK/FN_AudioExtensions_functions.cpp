#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class AudioExtensions.SoundfieldEncodingSettingsBase
// (None)

class UClass* USoundfieldEncodingSettingsBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SoundfieldEncodingSettingsBase");

	return Clss;
}


// SoundfieldEncodingSettingsBase AudioExtensions.Default__SoundfieldEncodingSettingsBase
// (Public, ClassDefaultObject, ArchetypeObject)

class USoundfieldEncodingSettingsBase* USoundfieldEncodingSettingsBase::GetDefaultObj()
{
	static class USoundfieldEncodingSettingsBase* Default = nullptr;

	if (!Default)
		Default = static_cast<USoundfieldEncodingSettingsBase*>(USoundfieldEncodingSettingsBase::StaticClass()->DefaultObject);

	return Default;
}


// Class AudioExtensions.SpatializationPluginSourceSettingsBase
// (None)

class UClass* USpatializationPluginSourceSettingsBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpatializationPluginSourceSettingsBase");

	return Clss;
}


// SpatializationPluginSourceSettingsBase AudioExtensions.Default__SpatializationPluginSourceSettingsBase
// (Public, ClassDefaultObject, ArchetypeObject)

class USpatializationPluginSourceSettingsBase* USpatializationPluginSourceSettingsBase::GetDefaultObj()
{
	static class USpatializationPluginSourceSettingsBase* Default = nullptr;

	if (!Default)
		Default = static_cast<USpatializationPluginSourceSettingsBase*>(USpatializationPluginSourceSettingsBase::StaticClass()->DefaultObject);

	return Default;
}


// Class AudioExtensions.AudioParameterInterface
// (None)

class UClass* IAudioParameterInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioParameterInterface");

	return Clss;
}


// AudioParameterInterface AudioExtensions.Default__AudioParameterInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IAudioParameterInterface* IAudioParameterInterface::GetDefaultObj()
{
	static class IAudioParameterInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IAudioParameterInterface*>(IAudioParameterInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function AudioExtensions.AudioParameterInterface.SetTriggerParameter
// (Native, Public, BlueprintCallable)
// Parameters:
// class FName                        InName                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IAudioParameterInterface::SetTriggerParameter(class FName InName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioParameterInterface", "SetTriggerParameter");

	Params::IAudioParameterInterface_SetTriggerParameter_Params Parms{};

	Parms.InName = InName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioExtensions.AudioParameterInterface.SetStringParameter
// (Native, Public, BlueprintCallable)
// Parameters:
// class FName                        InName                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InValue                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IAudioParameterInterface::SetStringParameter(class FName InName, const class FString& InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioParameterInterface", "SetStringParameter");

	Params::IAudioParameterInterface_SetStringParameter_Params Parms{};

	Parms.InName = InName;
	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioExtensions.AudioParameterInterface.SetStringArrayParameter
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InName                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              InValue                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void IAudioParameterInterface::SetStringArrayParameter(class FName InName, TArray<class FString>& InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioParameterInterface", "SetStringArrayParameter");

	Params::IAudioParameterInterface_SetStringArrayParameter_Params Parms{};

	Parms.InName = InName;
	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioExtensions.AudioParameterInterface.SetObjectParameter
// (Native, Public, BlueprintCallable)
// Parameters:
// class FName                        InName                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IAudioParameterInterface::SetObjectParameter(class FName InName, class UObject* InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioParameterInterface", "SetObjectParameter");

	Params::IAudioParameterInterface_SetObjectParameter_Params Parms{};

	Parms.InName = InName;
	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioExtensions.AudioParameterInterface.SetObjectArrayParameter
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InName                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UObject*>             InValue                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void IAudioParameterInterface::SetObjectArrayParameter(class FName InName, TArray<class UObject*>& InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioParameterInterface", "SetObjectArrayParameter");

	Params::IAudioParameterInterface_SetObjectArrayParameter_Params Parms{};

	Parms.InName = InName;
	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioExtensions.AudioParameterInterface.SetIntParameter
// (Native, Public, BlueprintCallable)
// Parameters:
// class FName                        InName                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InInt                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IAudioParameterInterface::SetIntParameter(class FName InName, int32 InInt)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioParameterInterface", "SetIntParameter");

	Params::IAudioParameterInterface_SetIntParameter_Params Parms{};

	Parms.InName = InName;
	Parms.InInt = InInt;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioExtensions.AudioParameterInterface.SetIntArrayParameter
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InName                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int32>                      InValue                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void IAudioParameterInterface::SetIntArrayParameter(class FName InName, TArray<int32>& InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioParameterInterface", "SetIntArrayParameter");

	Params::IAudioParameterInterface_SetIntArrayParameter_Params Parms{};

	Parms.InName = InName;
	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioExtensions.AudioParameterInterface.SetFloatParameter
// (Native, Public, BlueprintCallable)
// Parameters:
// class FName                        InName                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InFloat                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IAudioParameterInterface::SetFloatParameter(class FName InName, float InFloat)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioParameterInterface", "SetFloatParameter");

	Params::IAudioParameterInterface_SetFloatParameter_Params Parms{};

	Parms.InName = InName;
	Parms.InFloat = InFloat;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioExtensions.AudioParameterInterface.SetFloatArrayParameter
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InName                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<float>                      InValue                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void IAudioParameterInterface::SetFloatArrayParameter(class FName InName, TArray<float>& InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioParameterInterface", "SetFloatArrayParameter");

	Params::IAudioParameterInterface_SetFloatArrayParameter_Params Parms{};

	Parms.InName = InName;
	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioExtensions.AudioParameterInterface.SetBoolParameter
// (Native, Public, BlueprintCallable)
// Parameters:
// class FName                        InName                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               InBool                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IAudioParameterInterface::SetBoolParameter(class FName InName, bool InBool)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioParameterInterface", "SetBoolParameter");

	Params::IAudioParameterInterface_SetBoolParameter_Params Parms{};

	Parms.InName = InName;
	Parms.InBool = InBool;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioExtensions.AudioParameterInterface.SetBoolArrayParameter
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InName                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<bool>                       InValue                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void IAudioParameterInterface::SetBoolArrayParameter(class FName InName, TArray<bool>& InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioParameterInterface", "SetBoolArrayParameter");

	Params::IAudioParameterInterface_SetBoolArrayParameter_Params Parms{};

	Parms.InName = InName;
	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioExtensions.AudioParameterInterface.ResetParameters
// (Native, Public, BlueprintCallable)
// Parameters:

void IAudioParameterInterface::ResetParameters()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioParameterInterface", "ResetParameters");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class AudioExtensions.AudioCodecEncoderSettings
// (None)

class UClass* UAudioCodecEncoderSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioCodecEncoderSettings");

	return Clss;
}


// AudioCodecEncoderSettings AudioExtensions.Default__AudioCodecEncoderSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioCodecEncoderSettings* UAudioCodecEncoderSettings::GetDefaultObj()
{
	static class UAudioCodecEncoderSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioCodecEncoderSettings*>(UAudioCodecEncoderSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class AudioExtensions.AudioEndpointSettingsBase
// (None)

class UClass* UAudioEndpointSettingsBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioEndpointSettingsBase");

	return Clss;
}


// AudioEndpointSettingsBase AudioExtensions.Default__AudioEndpointSettingsBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioEndpointSettingsBase* UAudioEndpointSettingsBase::GetDefaultObj()
{
	static class UAudioEndpointSettingsBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioEndpointSettingsBase*>(UAudioEndpointSettingsBase::StaticClass()->DefaultObject);

	return Default;
}


// Class AudioExtensions.OcclusionPluginSourceSettingsBase
// (None)

class UClass* UOcclusionPluginSourceSettingsBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OcclusionPluginSourceSettingsBase");

	return Clss;
}


// OcclusionPluginSourceSettingsBase AudioExtensions.Default__OcclusionPluginSourceSettingsBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UOcclusionPluginSourceSettingsBase* UOcclusionPluginSourceSettingsBase::GetDefaultObj()
{
	static class UOcclusionPluginSourceSettingsBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UOcclusionPluginSourceSettingsBase*>(UOcclusionPluginSourceSettingsBase::StaticClass()->DefaultObject);

	return Default;
}


// Class AudioExtensions.ReverbPluginSourceSettingsBase
// (None)

class UClass* UReverbPluginSourceSettingsBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ReverbPluginSourceSettingsBase");

	return Clss;
}


// ReverbPluginSourceSettingsBase AudioExtensions.Default__ReverbPluginSourceSettingsBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UReverbPluginSourceSettingsBase* UReverbPluginSourceSettingsBase::GetDefaultObj()
{
	static class UReverbPluginSourceSettingsBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UReverbPluginSourceSettingsBase*>(UReverbPluginSourceSettingsBase::StaticClass()->DefaultObject);

	return Default;
}


// Class AudioExtensions.SoundModulatorBase
// (None)

class UClass* USoundModulatorBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SoundModulatorBase");

	return Clss;
}


// SoundModulatorBase AudioExtensions.Default__SoundModulatorBase
// (Public, ClassDefaultObject, ArchetypeObject)

class USoundModulatorBase* USoundModulatorBase::GetDefaultObj()
{
	static class USoundModulatorBase* Default = nullptr;

	if (!Default)
		Default = static_cast<USoundModulatorBase*>(USoundModulatorBase::StaticClass()->DefaultObject);

	return Default;
}


// Class AudioExtensions.SoundfieldEndpointSettingsBase
// (None)

class UClass* USoundfieldEndpointSettingsBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SoundfieldEndpointSettingsBase");

	return Clss;
}


// SoundfieldEndpointSettingsBase AudioExtensions.Default__SoundfieldEndpointSettingsBase
// (Public, ClassDefaultObject, ArchetypeObject)

class USoundfieldEndpointSettingsBase* USoundfieldEndpointSettingsBase::GetDefaultObj()
{
	static class USoundfieldEndpointSettingsBase* Default = nullptr;

	if (!Default)
		Default = static_cast<USoundfieldEndpointSettingsBase*>(USoundfieldEndpointSettingsBase::StaticClass()->DefaultObject);

	return Default;
}


// Class AudioExtensions.SoundfieldEffectSettingsBase
// (None)

class UClass* USoundfieldEffectSettingsBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SoundfieldEffectSettingsBase");

	return Clss;
}


// SoundfieldEffectSettingsBase AudioExtensions.Default__SoundfieldEffectSettingsBase
// (Public, ClassDefaultObject, ArchetypeObject)

class USoundfieldEffectSettingsBase* USoundfieldEffectSettingsBase::GetDefaultObj()
{
	static class USoundfieldEffectSettingsBase* Default = nullptr;

	if (!Default)
		Default = static_cast<USoundfieldEffectSettingsBase*>(USoundfieldEffectSettingsBase::StaticClass()->DefaultObject);

	return Default;
}


// Class AudioExtensions.SoundfieldEffectBase
// (None)

class UClass* USoundfieldEffectBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SoundfieldEffectBase");

	return Clss;
}


// SoundfieldEffectBase AudioExtensions.Default__SoundfieldEffectBase
// (Public, ClassDefaultObject, ArchetypeObject)

class USoundfieldEffectBase* USoundfieldEffectBase::GetDefaultObj()
{
	static class USoundfieldEffectBase* Default = nullptr;

	if (!Default)
		Default = static_cast<USoundfieldEffectBase*>(USoundfieldEffectBase::StaticClass()->DefaultObject);

	return Default;
}


// Class AudioExtensions.AudioPcmEncoderSettings
// (None)

class UClass* UAudioPcmEncoderSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioPcmEncoderSettings");

	return Clss;
}


// AudioPcmEncoderSettings AudioExtensions.Default__AudioPcmEncoderSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioPcmEncoderSettings* UAudioPcmEncoderSettings::GetDefaultObj()
{
	static class UAudioPcmEncoderSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioPcmEncoderSettings*>(UAudioPcmEncoderSettings::StaticClass()->DefaultObject);

	return Default;
}

}


