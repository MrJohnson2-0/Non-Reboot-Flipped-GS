#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FoleyLib_Cosmos.FoleyLib_Cosmos_C
// (None)

class UClass* UFoleyLib_Cosmos_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FoleyLib_Cosmos_C");

	return Clss;
}


// FoleyLib_Cosmos_C FoleyLib_Cosmos.Default__FoleyLib_Cosmos_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFoleyLib_Cosmos_C* UFoleyLib_Cosmos_C::GetDefaultObj()
{
	static class UFoleyLib_Cosmos_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFoleyLib_Cosmos_C*>(UFoleyLib_Cosmos_C::StaticClass()->DefaultObject);

	return Default;
}

}


