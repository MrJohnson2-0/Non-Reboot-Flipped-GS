#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class MoleHubRuntime.MoleHubBaseMutator
// (Actor)

class UClass* AMoleHubBaseMutator::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleHubBaseMutator");

	return Clss;
}


// MoleHubBaseMutator MoleHubRuntime.Default__MoleHubBaseMutator
// (Public, ClassDefaultObject, ArchetypeObject)

class AMoleHubBaseMutator* AMoleHubBaseMutator::GetDefaultObj()
{
	static class AMoleHubBaseMutator* Default = nullptr;

	if (!Default)
		Default = static_cast<AMoleHubBaseMutator*>(AMoleHubBaseMutator::StaticClass()->DefaultObject);

	return Default;
}


// Class MoleHubRuntime.MoleHubPlayerSpawningComponent
// (None)

class UClass* UMoleHubPlayerSpawningComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleHubPlayerSpawningComponent");

	return Clss;
}


// MoleHubPlayerSpawningComponent MoleHubRuntime.Default__MoleHubPlayerSpawningComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoleHubPlayerSpawningComponent* UMoleHubPlayerSpawningComponent::GetDefaultObj()
{
	static class UMoleHubPlayerSpawningComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoleHubPlayerSpawningComponent*>(UMoleHubPlayerSpawningComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class MoleHubRuntime.MoleHubPlayspace
// (Actor)

class UClass* AMoleHubPlayspace::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleHubPlayspace");

	return Clss;
}


// MoleHubPlayspace MoleHubRuntime.Default__MoleHubPlayspace
// (Public, ClassDefaultObject, ArchetypeObject)

class AMoleHubPlayspace* AMoleHubPlayspace::GetDefaultObj()
{
	static class AMoleHubPlayspace* Default = nullptr;

	if (!Default)
		Default = static_cast<AMoleHubPlayspace*>(AMoleHubPlayspace::StaticClass()->DefaultObject);

	return Default;
}

}


