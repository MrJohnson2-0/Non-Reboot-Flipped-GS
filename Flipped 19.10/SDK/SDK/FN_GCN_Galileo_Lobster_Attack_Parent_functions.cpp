#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCN_Galileo_Lobster_Attack_Parent.GCN_Galileo_Lobster_Attack_Parent_C
// (None)

class UClass* UGCN_Galileo_Lobster_Attack_Parent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCN_Galileo_Lobster_Attack_Parent_C");

	return Clss;
}


// GCN_Galileo_Lobster_Attack_Parent_C GCN_Galileo_Lobster_Attack_Parent.Default__GCN_Galileo_Lobster_Attack_Parent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGCN_Galileo_Lobster_Attack_Parent_C* UGCN_Galileo_Lobster_Attack_Parent_C::GetDefaultObj()
{
	static class UGCN_Galileo_Lobster_Attack_Parent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGCN_Galileo_Lobster_Attack_Parent_C*>(UGCN_Galileo_Lobster_Attack_Parent_C::StaticClass()->DefaultObject);

	return Default;
}

}


