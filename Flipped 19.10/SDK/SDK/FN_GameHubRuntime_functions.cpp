#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class GameHubRuntime.GameHubBaseMutator
// (Actor)

class UClass* AGameHubBaseMutator::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameHubBaseMutator");

	return Clss;
}


// GameHubBaseMutator GameHubRuntime.Default__GameHubBaseMutator
// (Public, ClassDefaultObject, ArchetypeObject)

class AGameHubBaseMutator* AGameHubBaseMutator::GetDefaultObj()
{
	static class AGameHubBaseMutator* Default = nullptr;

	if (!Default)
		Default = static_cast<AGameHubBaseMutator*>(AGameHubBaseMutator::StaticClass()->DefaultObject);

	return Default;
}


// Class GameHubRuntime.GameHubPlayerSpawningComponent
// (None)

class UClass* UGameHubPlayerSpawningComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameHubPlayerSpawningComponent");

	return Clss;
}


// GameHubPlayerSpawningComponent GameHubRuntime.Default__GameHubPlayerSpawningComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameHubPlayerSpawningComponent* UGameHubPlayerSpawningComponent::GetDefaultObj()
{
	static class UGameHubPlayerSpawningComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameHubPlayerSpawningComponent*>(UGameHubPlayerSpawningComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class GameHubRuntime.GameHubPlayspace
// (Actor)

class UClass* AGameHubPlayspace::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameHubPlayspace");

	return Clss;
}


// GameHubPlayspace GameHubRuntime.Default__GameHubPlayspace
// (Public, ClassDefaultObject, ArchetypeObject)

class AGameHubPlayspace* AGameHubPlayspace::GetDefaultObj()
{
	static class AGameHubPlayspace* Default = nullptr;

	if (!Default)
		Default = static_cast<AGameHubPlayspace*>(AGameHubPlayspace::StaticClass()->DefaultObject);

	return Default;
}

}


