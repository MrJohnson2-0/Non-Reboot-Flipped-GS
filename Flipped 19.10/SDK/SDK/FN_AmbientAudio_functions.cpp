#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class AmbientAudio.AmbientAudioComponent
// (None)

class UClass* UAmbientAudioComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AmbientAudioComponent");

	return Clss;
}


// AmbientAudioComponent AmbientAudio.Default__AmbientAudioComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UAmbientAudioComponent* UAmbientAudioComponent::GetDefaultObj()
{
	static class UAmbientAudioComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UAmbientAudioComponent*>(UAmbientAudioComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function AmbientAudio.AmbientAudioComponent.SetPriority
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InPriority                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAmbientAudioComponent::SetPriority(int32 InPriority)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AmbientAudioComponent", "SetPriority");

	Params::UAmbientAudioComponent_SetPriority_Params Parms{};

	Parms.InPriority = InPriority;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AmbientAudio.AmbientAudioComponent.SetCrossfadeTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InCrossfadeTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAmbientAudioComponent::SetCrossfadeTime(float InCrossfadeTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AmbientAudioComponent", "SetCrossfadeTime");

	Params::UAmbientAudioComponent_SetCrossfadeTime_Params Parms{};

	Parms.InCrossfadeTime = InCrossfadeTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AmbientAudio.AmbientAudioComponent.SetAmbientAsset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAmbientAudioDataAsset*      InAmbientAsset                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAmbientAudioComponent::SetAmbientAsset(class UAmbientAudioDataAsset* InAmbientAsset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AmbientAudioComponent", "SetAmbientAsset");

	Params::UAmbientAudioComponent_SetAmbientAsset_Params Parms{};

	Parms.InAmbientAsset = InAmbientAsset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AmbientAudio.AmbientAudioDataAsset
// (None)

class UClass* UAmbientAudioDataAsset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AmbientAudioDataAsset");

	return Clss;
}


// AmbientAudioDataAsset AmbientAudio.Default__AmbientAudioDataAsset
// (Public, ClassDefaultObject, ArchetypeObject)

class UAmbientAudioDataAsset* UAmbientAudioDataAsset::GetDefaultObj()
{
	static class UAmbientAudioDataAsset* Default = nullptr;

	if (!Default)
		Default = static_cast<UAmbientAudioDataAsset*>(UAmbientAudioDataAsset::StaticClass()->DefaultObject);

	return Default;
}


// Class AmbientAudio.AmbientAudioSubsystem
// (None)

class UClass* UAmbientAudioSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AmbientAudioSubsystem");

	return Clss;
}


// AmbientAudioSubsystem AmbientAudio.Default__AmbientAudioSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UAmbientAudioSubsystem* UAmbientAudioSubsystem::GetDefaultObj()
{
	static class UAmbientAudioSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UAmbientAudioSubsystem*>(UAmbientAudioSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Function AmbientAudio.AmbientAudioSubsystem.RemoveGameplayTag
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTag                GameplayTag                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAmbientAudioSubsystem::RemoveGameplayTag(const struct FGameplayTag& GameplayTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AmbientAudioSubsystem", "RemoveGameplayTag");

	Params::UAmbientAudioSubsystem_RemoveGameplayTag_Params Parms{};

	Parms.GameplayTag = GameplayTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AmbientAudio.AmbientAudioSubsystem.RemoveAmbientEntry
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        AmbientName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              CrossfadeOverride                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAmbientAudioSubsystem::RemoveAmbientEntry(class FName AmbientName, float CrossfadeOverride)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AmbientAudioSubsystem", "RemoveAmbientEntry");

	Params::UAmbientAudioSubsystem_RemoveAmbientEntry_Params Parms{};

	Parms.AmbientName = AmbientName;
	Parms.CrossfadeOverride = CrossfadeOverride;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AmbientAudio.AmbientAudioSubsystem.AddGameplayTag
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTag                GameplayTag                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAmbientAudioSubsystem::AddGameplayTag(const struct FGameplayTag& GameplayTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AmbientAudioSubsystem", "AddGameplayTag");

	Params::UAmbientAudioSubsystem_AddGameplayTag_Params Parms{};

	Parms.GameplayTag = GameplayTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AmbientAudio.AmbientAudioSubsystem.AddAmbientEntry
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        AmbientName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAmbientAudioDataAsset*      Asset                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Priority                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              CrossfadeTime                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAmbientAudioSubsystem::AddAmbientEntry(class FName AmbientName, class UAmbientAudioDataAsset* Asset, int32 Priority, float CrossfadeTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AmbientAudioSubsystem", "AddAmbientEntry");

	Params::UAmbientAudioSubsystem_AddAmbientEntry_Params Parms{};

	Parms.AmbientName = AmbientName;
	Parms.Asset = Asset;
	Parms.Priority = Priority;
	Parms.CrossfadeTime = CrossfadeTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AmbientAudio.AmbientVolume
// (Actor)

class UClass* AAmbientVolume::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AmbientVolume");

	return Clss;
}


// AmbientVolume AmbientAudio.Default__AmbientVolume
// (Public, ClassDefaultObject, ArchetypeObject)

class AAmbientVolume* AAmbientVolume::GetDefaultObj()
{
	static class AAmbientVolume* Default = nullptr;

	if (!Default)
		Default = static_cast<AAmbientVolume*>(AAmbientVolume::StaticClass()->DefaultObject);

	return Default;
}


// Function AmbientAudio.AmbientVolume.SetPriority
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              NewPriority                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AAmbientVolume::SetPriority(int32 NewPriority)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AmbientVolume", "SetPriority");

	Params::AAmbientVolume_SetPriority_Params Parms{};

	Parms.NewPriority = NewPriority;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AmbientAudio.AmbientVolume.SetEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bNewEnabled                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AAmbientVolume::SetEnabled(bool bNewEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AmbientVolume", "SetEnabled");

	Params::AAmbientVolume_SetEnabled_Params Parms{};

	Parms.bNewEnabled = bNewEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AmbientAudio.AmbientVolume.SetCrossfadeTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewCrossfadeTime                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AAmbientVolume::SetCrossfadeTime(float NewCrossfadeTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AmbientVolume", "SetCrossfadeTime");

	Params::AAmbientVolume_SetCrossfadeTime_Params Parms{};

	Parms.NewCrossfadeTime = NewCrossfadeTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AmbientAudio.AmbientVolume.SetAmbientAsset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAmbientAudioDataAsset*      NewAmbientAsset                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AAmbientVolume::SetAmbientAsset(class UAmbientAudioDataAsset* NewAmbientAsset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AmbientVolume", "SetAmbientAsset");

	Params::AAmbientVolume_SetAmbientAsset_Params Parms{};

	Parms.NewAmbientAsset = NewAmbientAsset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AmbientAudio.AmbientVolume.OnRep_bEnabled
// (Native, Protected)
// Parameters:

void AAmbientVolume::OnRep_bEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AmbientVolume", "OnRep_bEnabled");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}

}


