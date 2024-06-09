#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class SoundLibrary.SoundLibraryContext
// (None)

class UClass* USoundLibraryContext::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SoundLibraryContext");

	return Clss;
}


// SoundLibraryContext SoundLibrary.Default__SoundLibraryContext
// (Public, ClassDefaultObject, ArchetypeObject)

class USoundLibraryContext* USoundLibraryContext::GetDefaultObj()
{
	static class USoundLibraryContext* Default = nullptr;

	if (!Default)
		Default = static_cast<USoundLibraryContext*>(USoundLibraryContext::StaticClass()->DefaultObject);

	return Default;
}


// Class SoundLibrary.SoundLibraryAnimContext
// (None)

class UClass* USoundLibraryAnimContext::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SoundLibraryAnimContext");

	return Clss;
}


// SoundLibraryAnimContext SoundLibrary.Default__SoundLibraryAnimContext
// (Public, ClassDefaultObject, ArchetypeObject)

class USoundLibraryAnimContext* USoundLibraryAnimContext::GetDefaultObj()
{
	static class USoundLibraryAnimContext* Default = nullptr;

	if (!Default)
		Default = static_cast<USoundLibraryAnimContext*>(USoundLibraryAnimContext::StaticClass()->DefaultObject);

	return Default;
}


// Function SoundLibrary.SoundLibraryAnimContext.ConfigureContext
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class AActor*                      OwningActor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAnimSequenceBase*           InAnimation                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSoundLibraryAnimContextSettingsInSettings                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void USoundLibraryAnimContext::ConfigureContext(class AActor* OwningActor, class UAnimSequenceBase* InAnimation, struct FSoundLibraryAnimContextSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundLibraryAnimContext", "ConfigureContext");

	Params::USoundLibraryAnimContext_ConfigureContext_Params Parms{};

	Parms.OwningActor = OwningActor;
	Parms.InAnimation = InAnimation;
	Parms.InSettings = InSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SoundLibrary.SoundLibraryAnimNotifyHelper
// (None)

class UClass* USoundLibraryAnimNotifyHelper::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SoundLibraryAnimNotifyHelper");

	return Clss;
}


// SoundLibraryAnimNotifyHelper SoundLibrary.Default__SoundLibraryAnimNotifyHelper
// (Public, ClassDefaultObject, ArchetypeObject)

class USoundLibraryAnimNotifyHelper* USoundLibraryAnimNotifyHelper::GetDefaultObj()
{
	static class USoundLibraryAnimNotifyHelper* Default = nullptr;

	if (!Default)
		Default = static_cast<USoundLibraryAnimNotifyHelper*>(USoundLibraryAnimNotifyHelper::StaticClass()->DefaultObject);

	return Default;
}


// Class SoundLibrary.AnimNotify_SoundLibrary
// (None)

class UClass* UAnimNotify_SoundLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimNotify_SoundLibrary");

	return Clss;
}


// AnimNotify_SoundLibrary SoundLibrary.Default__AnimNotify_SoundLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UAnimNotify_SoundLibrary* UAnimNotify_SoundLibrary::GetDefaultObj()
{
	static class UAnimNotify_SoundLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimNotify_SoundLibrary*>(UAnimNotify_SoundLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Class SoundLibrary.AnimNotifyState_SoundLibrary
// (None)

class UClass* UAnimNotifyState_SoundLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimNotifyState_SoundLibrary");

	return Clss;
}


// AnimNotifyState_SoundLibrary SoundLibrary.Default__AnimNotifyState_SoundLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UAnimNotifyState_SoundLibrary* UAnimNotifyState_SoundLibrary::GetDefaultObj()
{
	static class UAnimNotifyState_SoundLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimNotifyState_SoundLibrary*>(UAnimNotifyState_SoundLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Class SoundLibrary.SoundLibraryComponent
// (None)

class UClass* USoundLibraryComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SoundLibraryComponent");

	return Clss;
}


// SoundLibraryComponent SoundLibrary.Default__SoundLibraryComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class USoundLibraryComponent* USoundLibraryComponent::GetDefaultObj()
{
	static class USoundLibraryComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<USoundLibraryComponent*>(USoundLibraryComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class SoundLibrary.SoundLibrarySubsystem
// (None)

class UClass* USoundLibrarySubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SoundLibrarySubsystem");

	return Clss;
}


// SoundLibrarySubsystem SoundLibrary.Default__SoundLibrarySubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class USoundLibrarySubsystem* USoundLibrarySubsystem::GetDefaultObj()
{
	static class USoundLibrarySubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<USoundLibrarySubsystem*>(USoundLibrarySubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Function SoundLibrary.SoundLibrarySubsystem.RemoveLibrary
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Actor                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class USoundLibrary>   Library                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USoundLibrarySubsystem::RemoveLibrary(class AActor* Actor, TSubclassOf<class USoundLibrary> Library)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundLibrarySubsystem", "RemoveLibrary");

	Params::USoundLibrarySubsystem_RemoveLibrary_Params Parms{};

	Parms.Actor = Actor;
	Parms.Library = Library;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SoundLibrary.SoundLibrarySubsystem.RemoveLibraries
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Actor                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<TSubclassOf<class USoundLibrary>>Libraries                                                        (Parm, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)

void USoundLibrarySubsystem::RemoveLibraries(class AActor* Actor, const TArray<TSubclassOf<class USoundLibrary>>& Libraries)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundLibrarySubsystem", "RemoveLibraries");

	Params::USoundLibrarySubsystem_RemoveLibraries_Params Parms{};

	Parms.Actor = Actor;
	Parms.Libraries = Libraries;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SoundLibrary.SoundLibrarySubsystem.PlaySound
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class USoundLibraryContext*        Context                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSoundLibraryPlaySoundResultOutResults                                                       (Parm, OutParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void USoundLibrarySubsystem::PlaySound(class USoundLibraryContext* Context, struct FSoundLibraryPlaySoundResult* OutResults)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundLibrarySubsystem", "PlaySound");

	Params::USoundLibrarySubsystem_PlaySound_Params Parms{};

	Parms.Context = Context;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutResults != nullptr)
		*OutResults = std::move(Parms.OutResults);

}


// Function SoundLibrary.SoundLibrarySubsystem.EnableEventsForActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Actor                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USoundLibrarySubsystem::EnableEventsForActor(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundLibrarySubsystem", "EnableEventsForActor");

	Params::USoundLibrarySubsystem_EnableEventsForActor_Params Parms{};

	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SoundLibrary.SoundLibrarySubsystem.DisableEventsForActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Actor                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USoundLibrarySubsystem::DisableEventsForActor(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundLibrarySubsystem", "DisableEventsForActor");

	Params::USoundLibrarySubsystem_DisableEventsForActor_Params Parms{};

	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SoundLibrary.SoundLibrarySubsystem.AddLibrary
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Actor                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class USoundLibrary>   Library                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USoundLibrarySubsystem::AddLibrary(class AActor* Actor, TSubclassOf<class USoundLibrary> Library)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundLibrarySubsystem", "AddLibrary");

	Params::USoundLibrarySubsystem_AddLibrary_Params Parms{};

	Parms.Actor = Actor;
	Parms.Library = Library;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SoundLibrary.SoundLibrarySubsystem.AddLibraries
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Actor                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<TSubclassOf<class USoundLibrary>>Libraries                                                        (Parm, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)

void USoundLibrarySubsystem::AddLibraries(class AActor* Actor, const TArray<TSubclassOf<class USoundLibrary>>& Libraries)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundLibrarySubsystem", "AddLibraries");

	Params::USoundLibrarySubsystem_AddLibraries_Params Parms{};

	Parms.Actor = Actor;
	Parms.Libraries = Libraries;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SoundLibrary.SimpleSoundLibraryContext
// (None)

class UClass* USimpleSoundLibraryContext::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SimpleSoundLibraryContext");

	return Clss;
}


// SimpleSoundLibraryContext SoundLibrary.Default__SimpleSoundLibraryContext
// (Public, ClassDefaultObject, ArchetypeObject)

class USimpleSoundLibraryContext* USimpleSoundLibraryContext::GetDefaultObj()
{
	static class USimpleSoundLibraryContext* Default = nullptr;

	if (!Default)
		Default = static_cast<USimpleSoundLibraryContext*>(USimpleSoundLibraryContext::StaticClass()->DefaultObject);

	return Default;
}


// Function SoundLibrary.SimpleSoundLibraryContext.ConfigureContext
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class AActor*                      OwningActor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSimpleSoundLibraryContextSettingsInSettings                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void USimpleSoundLibraryContext::ConfigureContext(class AActor* OwningActor, struct FSimpleSoundLibraryContextSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SimpleSoundLibraryContext", "ConfigureContext");

	Params::USimpleSoundLibraryContext_ConfigureContext_Params Parms{};

	Parms.OwningActor = OwningActor;
	Parms.InSettings = InSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SoundLibrary.AttachedSoundLibraryContext
// (None)

class UClass* UAttachedSoundLibraryContext::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AttachedSoundLibraryContext");

	return Clss;
}


// AttachedSoundLibraryContext SoundLibrary.Default__AttachedSoundLibraryContext
// (Public, ClassDefaultObject, ArchetypeObject)

class UAttachedSoundLibraryContext* UAttachedSoundLibraryContext::GetDefaultObj()
{
	static class UAttachedSoundLibraryContext* Default = nullptr;

	if (!Default)
		Default = static_cast<UAttachedSoundLibraryContext*>(UAttachedSoundLibraryContext::StaticClass()->DefaultObject);

	return Default;
}


// Function SoundLibrary.AttachedSoundLibraryContext.ConfigureContext
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class AActor*                      OwningActor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAttachedSoundLibraryContextSettingsInSettings                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UAttachedSoundLibraryContext::ConfigureContext(class AActor* OwningActor, struct FAttachedSoundLibraryContextSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AttachedSoundLibraryContext", "ConfigureContext");

	Params::UAttachedSoundLibraryContext_ConfigureContext_Params Parms{};

	Parms.OwningActor = OwningActor;
	Parms.InSettings = InSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SoundLibrary.SoundLibrary
// (None)

class UClass* USoundLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SoundLibrary");

	return Clss;
}


// SoundLibrary SoundLibrary.Default__SoundLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class USoundLibrary* USoundLibrary::GetDefaultObj()
{
	static class USoundLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<USoundLibrary*>(USoundLibrary::StaticClass()->DefaultObject);

	return Default;
}

}


