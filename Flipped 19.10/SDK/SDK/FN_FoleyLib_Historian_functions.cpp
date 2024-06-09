#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FoleyLib_Historian.FoleyLib_Historian_C
// (None)

class UClass* UFoleyLib_Historian_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FoleyLib_Historian_C");

	return Clss;
}


// FoleyLib_Historian_C FoleyLib_Historian.Default__FoleyLib_Historian_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFoleyLib_Historian_C* UFoleyLib_Historian_C::GetDefaultObj()
{
	static class UFoleyLib_Historian_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFoleyLib_Historian_C*>(UFoleyLib_Historian_C::StaticClass()->DefaultObject);

	return Default;
}

}


