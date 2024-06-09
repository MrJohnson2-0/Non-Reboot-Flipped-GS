#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Bed_parent_Container_Athena_NoSearch.Bed_parent_Container_Athena_NoSearch_C
// (Actor)

class UClass* ABed_parent_Container_Athena_NoSearch_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Bed_parent_Container_Athena_NoSearch_C");

	return Clss;
}


// Bed_parent_Container_Athena_NoSearch_C Bed_parent_Container_Athena_NoSearch.Default__Bed_parent_Container_Athena_NoSearch_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABed_parent_Container_Athena_NoSearch_C* ABed_parent_Container_Athena_NoSearch_C::GetDefaultObj()
{
	static class ABed_parent_Container_Athena_NoSearch_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABed_parent_Container_Athena_NoSearch_C*>(ABed_parent_Container_Athena_NoSearch_C::StaticClass()->DefaultObject);

	return Default;
}

}


