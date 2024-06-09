#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BBE_CampsiteAlternateUse.BBE_CampsiteAlternateUse_C
// (None)

class UClass* UBBE_CampsiteAlternateUse_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BBE_CampsiteAlternateUse_C");

	return Clss;
}


// BBE_CampsiteAlternateUse_C BBE_CampsiteAlternateUse.Default__BBE_CampsiteAlternateUse_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBBE_CampsiteAlternateUse_C* UBBE_CampsiteAlternateUse_C::GetDefaultObj()
{
	static class UBBE_CampsiteAlternateUse_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBBE_CampsiteAlternateUse_C*>(UBBE_CampsiteAlternateUse_C::StaticClass()->DefaultObject);

	return Default;
}

}


