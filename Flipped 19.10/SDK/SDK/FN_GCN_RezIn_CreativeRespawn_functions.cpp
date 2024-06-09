#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCN_RezIn_CreativeRespawn.GCN_RezIn_CreativeRespawn_C
// (Actor)

class UClass* AGCN_RezIn_CreativeRespawn_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCN_RezIn_CreativeRespawn_C");

	return Clss;
}


// GCN_RezIn_CreativeRespawn_C GCN_RezIn_CreativeRespawn.Default__GCN_RezIn_CreativeRespawn_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGCN_RezIn_CreativeRespawn_C* AGCN_RezIn_CreativeRespawn_C::GetDefaultObj()
{
	static class AGCN_RezIn_CreativeRespawn_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGCN_RezIn_CreativeRespawn_C*>(AGCN_RezIn_CreativeRespawn_C::StaticClass()->DefaultObject);

	return Default;
}

}


