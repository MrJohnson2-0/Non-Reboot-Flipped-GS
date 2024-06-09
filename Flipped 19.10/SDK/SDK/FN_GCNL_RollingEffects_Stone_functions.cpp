#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCNL_RollingEffects_Stone.GCNL_RollingEffects_Stone_C
// (Actor)

class UClass* AGCNL_RollingEffects_Stone_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCNL_RollingEffects_Stone_C");

	return Clss;
}


// GCNL_RollingEffects_Stone_C GCNL_RollingEffects_Stone.Default__GCNL_RollingEffects_Stone_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGCNL_RollingEffects_Stone_C* AGCNL_RollingEffects_Stone_C::GetDefaultObj()
{
	static class AGCNL_RollingEffects_Stone_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGCNL_RollingEffects_Stone_C*>(AGCNL_RollingEffects_Stone_C::StaticClass()->DefaultObject);

	return Default;
}

}


