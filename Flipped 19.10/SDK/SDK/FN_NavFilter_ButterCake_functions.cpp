#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NavFilter_ButterCake.NavFilter_ButterCake_C
// (None)

class UClass* UNavFilter_ButterCake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavFilter_ButterCake_C");

	return Clss;
}


// NavFilter_ButterCake_C NavFilter_ButterCake.Default__NavFilter_ButterCake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNavFilter_ButterCake_C* UNavFilter_ButterCake_C::GetDefaultObj()
{
	static class UNavFilter_ButterCake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNavFilter_ButterCake_C*>(UNavFilter_ButterCake_C::StaticClass()->DefaultObject);

	return Default;
}

}


