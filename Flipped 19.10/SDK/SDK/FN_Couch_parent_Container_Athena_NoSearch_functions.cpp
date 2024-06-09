#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Couch_parent_Container_Athena_NoSearch.Couch_parent_Container_Athena_NoSearch_C
// (Actor)

class UClass* ACouch_parent_Container_Athena_NoSearch_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Couch_parent_Container_Athena_NoSearch_C");

	return Clss;
}


// Couch_parent_Container_Athena_NoSearch_C Couch_parent_Container_Athena_NoSearch.Default__Couch_parent_Container_Athena_NoSearch_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACouch_parent_Container_Athena_NoSearch_C* ACouch_parent_Container_Athena_NoSearch_C::GetDefaultObj()
{
	static class ACouch_parent_Container_Athena_NoSearch_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACouch_parent_Container_Athena_NoSearch_C*>(ACouch_parent_Container_Athena_NoSearch_C::StaticClass()->DefaultObject);

	return Default;
}

}


