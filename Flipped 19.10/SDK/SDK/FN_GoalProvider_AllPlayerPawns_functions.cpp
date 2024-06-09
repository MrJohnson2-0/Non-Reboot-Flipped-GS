#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GoalProvider_AllPlayerPawns.GoalProvider_AllPlayerPawns_C
// (None)

class UClass* UGoalProvider_AllPlayerPawns_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GoalProvider_AllPlayerPawns_C");

	return Clss;
}


// GoalProvider_AllPlayerPawns_C GoalProvider_AllPlayerPawns.Default__GoalProvider_AllPlayerPawns_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGoalProvider_AllPlayerPawns_C* UGoalProvider_AllPlayerPawns_C::GetDefaultObj()
{
	static class UGoalProvider_AllPlayerPawns_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGoalProvider_AllPlayerPawns_C*>(UGoalProvider_AllPlayerPawns_C::StaticClass()->DefaultObject);

	return Default;
}

}


