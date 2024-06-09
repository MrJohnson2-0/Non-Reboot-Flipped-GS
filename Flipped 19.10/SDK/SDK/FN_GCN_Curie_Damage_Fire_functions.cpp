#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCN_Curie_Damage_Fire.GCN_Curie_Damage_Fire_C
// (None)

class UClass* UGCN_Curie_Damage_Fire_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCN_Curie_Damage_Fire_C");

	return Clss;
}


// GCN_Curie_Damage_Fire_C GCN_Curie_Damage_Fire.Default__GCN_Curie_Damage_Fire_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGCN_Curie_Damage_Fire_C* UGCN_Curie_Damage_Fire_C::GetDefaultObj()
{
	static class UGCN_Curie_Damage_Fire_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGCN_Curie_Damage_Fire_C*>(UGCN_Curie_Damage_Fire_C::StaticClass()->DefaultObject);

	return Default;
}

}


