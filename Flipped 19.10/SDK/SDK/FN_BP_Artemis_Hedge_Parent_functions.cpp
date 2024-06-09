#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Artemis_Hedge_Parent.BP_Artemis_Hedge_Parent_C
// (Actor)

class UClass* ABP_Artemis_Hedge_Parent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Artemis_Hedge_Parent_C");

	return Clss;
}


// BP_Artemis_Hedge_Parent_C BP_Artemis_Hedge_Parent.Default__BP_Artemis_Hedge_Parent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Artemis_Hedge_Parent_C* ABP_Artemis_Hedge_Parent_C::GetDefaultObj()
{
	static class ABP_Artemis_Hedge_Parent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Artemis_Hedge_Parent_C*>(ABP_Artemis_Hedge_Parent_C::StaticClass()->DefaultObject);

	return Default;
}

}


