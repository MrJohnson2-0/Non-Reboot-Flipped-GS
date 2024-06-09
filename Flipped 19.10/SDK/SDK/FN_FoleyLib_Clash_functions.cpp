#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FoleyLib_Clash.FoleyLib_Clash_C
// (None)

class UClass* UFoleyLib_Clash_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FoleyLib_Clash_C");

	return Clss;
}


// FoleyLib_Clash_C FoleyLib_Clash.Default__FoleyLib_Clash_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFoleyLib_Clash_C* UFoleyLib_Clash_C::GetDefaultObj()
{
	static class UFoleyLib_Clash_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFoleyLib_Clash_C*>(UFoleyLib_Clash_C::StaticClass()->DefaultObject);

	return Default;
}

}


