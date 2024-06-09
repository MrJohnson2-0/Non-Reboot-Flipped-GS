#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NPC_Wildlife_Controller_Parent.NPC_Wildlife_Controller_Parent_C
// (Actor)

class UClass* ANPC_Wildlife_Controller_Parent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NPC_Wildlife_Controller_Parent_C");

	return Clss;
}


// NPC_Wildlife_Controller_Parent_C NPC_Wildlife_Controller_Parent.Default__NPC_Wildlife_Controller_Parent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ANPC_Wildlife_Controller_Parent_C* ANPC_Wildlife_Controller_Parent_C::GetDefaultObj()
{
	static class ANPC_Wildlife_Controller_Parent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ANPC_Wildlife_Controller_Parent_C*>(ANPC_Wildlife_Controller_Parent_C::StaticClass()->DefaultObject);

	return Default;
}

}


