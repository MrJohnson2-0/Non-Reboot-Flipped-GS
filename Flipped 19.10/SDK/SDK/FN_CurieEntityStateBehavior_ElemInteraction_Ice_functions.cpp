#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CurieEntityStateBehavior_ElemInteraction_Ice.CurieEntityStateBehavior_ElemInteraction_Ice_C
// (None)

class UClass* UCurieEntityStateBehavior_ElemInteraction_Ice_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CurieEntityStateBehavior_ElemInteraction_Ice_C");

	return Clss;
}


// CurieEntityStateBehavior_ElemInteraction_Ice_C CurieEntityStateBehavior_ElemInteraction_Ice.Default__CurieEntityStateBehavior_ElemInteraction_Ice_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCurieEntityStateBehavior_ElemInteraction_Ice_C* UCurieEntityStateBehavior_ElemInteraction_Ice_C::GetDefaultObj()
{
	static class UCurieEntityStateBehavior_ElemInteraction_Ice_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCurieEntityStateBehavior_ElemInteraction_Ice_C*>(UCurieEntityStateBehavior_ElemInteraction_Ice_C::StaticClass()->DefaultObject);

	return Default;
}

}


