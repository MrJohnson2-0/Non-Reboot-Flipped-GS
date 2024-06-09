#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ATM_parent_Container_Athena_NoSearch.ATM_parent_Container_Athena_NoSearch_C
// (Actor)

class UClass* AATM_parent_Container_Athena_NoSearch_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ATM_parent_Container_Athena_NoSearch_C");

	return Clss;
}


// ATM_parent_Container_Athena_NoSearch_C ATM_parent_Container_Athena_NoSearch.Default__ATM_parent_Container_Athena_NoSearch_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AATM_parent_Container_Athena_NoSearch_C* AATM_parent_Container_Athena_NoSearch_C::GetDefaultObj()
{
	static class AATM_parent_Container_Athena_NoSearch_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AATM_parent_Container_Athena_NoSearch_C*>(AATM_parent_Container_Athena_NoSearch_C::StaticClass()->DefaultObject);

	return Default;
}

}


