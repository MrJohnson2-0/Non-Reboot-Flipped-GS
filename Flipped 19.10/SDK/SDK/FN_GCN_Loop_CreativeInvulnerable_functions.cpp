#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCN_Loop_CreativeInvulnerable.GCN_Loop_CreativeInvulnerable_C
// (Actor)

class UClass* AGCN_Loop_CreativeInvulnerable_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCN_Loop_CreativeInvulnerable_C");

	return Clss;
}


// GCN_Loop_CreativeInvulnerable_C GCN_Loop_CreativeInvulnerable.Default__GCN_Loop_CreativeInvulnerable_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGCN_Loop_CreativeInvulnerable_C* AGCN_Loop_CreativeInvulnerable_C::GetDefaultObj()
{
	static class AGCN_Loop_CreativeInvulnerable_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGCN_Loop_CreativeInvulnerable_C*>(AGCN_Loop_CreativeInvulnerable_C::StaticClass()->DefaultObject);

	return Default;
}

}


