#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCN_CollisionEffects_Boulder.GCN_CollisionEffects_Boulder_C
// (None)

class UClass* UGCN_CollisionEffects_Boulder_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCN_CollisionEffects_Boulder_C");

	return Clss;
}


// GCN_CollisionEffects_Boulder_C GCN_CollisionEffects_Boulder.Default__GCN_CollisionEffects_Boulder_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGCN_CollisionEffects_Boulder_C* UGCN_CollisionEffects_Boulder_C::GetDefaultObj()
{
	static class UGCN_CollisionEffects_Boulder_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGCN_CollisionEffects_Boulder_C*>(UGCN_CollisionEffects_Boulder_C::StaticClass()->DefaultObject);

	return Default;
}

}


