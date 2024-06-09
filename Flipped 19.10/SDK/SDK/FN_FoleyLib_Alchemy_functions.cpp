#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FoleyLib_Alchemy.FoleyLib_Alchemy_C
// (None)

class UClass* UFoleyLib_Alchemy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FoleyLib_Alchemy_C");

	return Clss;
}


// FoleyLib_Alchemy_C FoleyLib_Alchemy.Default__FoleyLib_Alchemy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFoleyLib_Alchemy_C* UFoleyLib_Alchemy_C::GetDefaultObj()
{
	static class UFoleyLib_Alchemy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFoleyLib_Alchemy_C*>(UFoleyLib_Alchemy_C::StaticClass()->DefaultObject);

	return Default;
}

}


