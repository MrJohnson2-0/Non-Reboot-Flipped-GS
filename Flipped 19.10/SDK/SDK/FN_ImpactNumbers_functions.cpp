#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ImpactNumbers.ImpactNumbers_C
// (Actor)

class UClass* AImpactNumbers_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ImpactNumbers_C");

	return Clss;
}


// ImpactNumbers_C ImpactNumbers.Default__ImpactNumbers_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AImpactNumbers_C* AImpactNumbers_C::GetDefaultObj()
{
	static class AImpactNumbers_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AImpactNumbers_C*>(AImpactNumbers_C::StaticClass()->DefaultObject);

	return Default;
}

}


