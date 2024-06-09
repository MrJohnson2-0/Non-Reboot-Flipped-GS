#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class Tailgate.TailgateGameState
// (Actor)

class UClass* ATailgateGameState::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TailgateGameState");

	return Clss;
}


// TailgateGameState Tailgate.Default__TailgateGameState
// (Public, ClassDefaultObject, ArchetypeObject)

class ATailgateGameState* ATailgateGameState::GetDefaultObj()
{
	static class ATailgateGameState* Default = nullptr;

	if (!Default)
		Default = static_cast<ATailgateGameState*>(ATailgateGameState::StaticClass()->DefaultObject);

	return Default;
}


// Class Tailgate.TailgateMultiplierSystem
// (None)

class UClass* UTailgateMultiplierSystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TailgateMultiplierSystem");

	return Clss;
}


// TailgateMultiplierSystem Tailgate.Default__TailgateMultiplierSystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UTailgateMultiplierSystem* UTailgateMultiplierSystem::GetDefaultObj()
{
	static class UTailgateMultiplierSystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UTailgateMultiplierSystem*>(UTailgateMultiplierSystem::StaticClass()->DefaultObject);

	return Default;
}


// Class Tailgate.TailgateTargetBase
// (Actor)

class UClass* ATailgateTargetBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TailgateTargetBase");

	return Clss;
}


// TailgateTargetBase Tailgate.Default__TailgateTargetBase
// (Public, ClassDefaultObject, ArchetypeObject)

class ATailgateTargetBase* ATailgateTargetBase::GetDefaultObj()
{
	static class ATailgateTargetBase* Default = nullptr;

	if (!Default)
		Default = static_cast<ATailgateTargetBase*>(ATailgateTargetBase::StaticClass()->DefaultObject);

	return Default;
}


// Class Tailgate.TailgateTargetDefinition
// (None)

class UClass* UTailgateTargetDefinition::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TailgateTargetDefinition");

	return Clss;
}


// TailgateTargetDefinition Tailgate.Default__TailgateTargetDefinition
// (Public, ClassDefaultObject, ArchetypeObject)

class UTailgateTargetDefinition* UTailgateTargetDefinition::GetDefaultObj()
{
	static class UTailgateTargetDefinition* Default = nullptr;

	if (!Default)
		Default = static_cast<UTailgateTargetDefinition*>(UTailgateTargetDefinition::StaticClass()->DefaultObject);

	return Default;
}


// Class Tailgate.TailgateTargetSpawnCondition
// (None)

class UClass* UTailgateTargetSpawnCondition::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TailgateTargetSpawnCondition");

	return Clss;
}


// TailgateTargetSpawnCondition Tailgate.Default__TailgateTargetSpawnCondition
// (Public, ClassDefaultObject, ArchetypeObject)

class UTailgateTargetSpawnCondition* UTailgateTargetSpawnCondition::GetDefaultObj()
{
	static class UTailgateTargetSpawnCondition* Default = nullptr;

	if (!Default)
		Default = static_cast<UTailgateTargetSpawnCondition*>(UTailgateTargetSpawnCondition::StaticClass()->DefaultObject);

	return Default;
}


// Class Tailgate.TailgateTargetSpawnerDefinition
// (None)

class UClass* UTailgateTargetSpawnerDefinition::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TailgateTargetSpawnerDefinition");

	return Clss;
}


// TailgateTargetSpawnerDefinition Tailgate.Default__TailgateTargetSpawnerDefinition
// (Public, ClassDefaultObject, ArchetypeObject)

class UTailgateTargetSpawnerDefinition* UTailgateTargetSpawnerDefinition::GetDefaultObj()
{
	static class UTailgateTargetSpawnerDefinition* Default = nullptr;

	if (!Default)
		Default = static_cast<UTailgateTargetSpawnerDefinition*>(UTailgateTargetSpawnerDefinition::StaticClass()->DefaultObject);

	return Default;
}


// Class Tailgate.TailgateWaveDefinition
// (None)

class UClass* UTailgateWaveDefinition::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TailgateWaveDefinition");

	return Clss;
}


// TailgateWaveDefinition Tailgate.Default__TailgateWaveDefinition
// (Public, ClassDefaultObject, ArchetypeObject)

class UTailgateWaveDefinition* UTailgateWaveDefinition::GetDefaultObj()
{
	static class UTailgateWaveDefinition* Default = nullptr;

	if (!Default)
		Default = static_cast<UTailgateWaveDefinition*>(UTailgateWaveDefinition::StaticClass()->DefaultObject);

	return Default;
}


// Class Tailgate.TailgateWaveDirector
// (Actor)

class UClass* ATailgateWaveDirector::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TailgateWaveDirector");

	return Clss;
}


// TailgateWaveDirector Tailgate.Default__TailgateWaveDirector
// (Public, ClassDefaultObject, ArchetypeObject)

class ATailgateWaveDirector* ATailgateWaveDirector::GetDefaultObj()
{
	static class ATailgateWaveDirector* Default = nullptr;

	if (!Default)
		Default = static_cast<ATailgateWaveDirector*>(ATailgateWaveDirector::StaticClass()->DefaultObject);

	return Default;
}

}


