#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCL_BoostJumpPack_Hovering_Papaya.GCL_BoostJumpPack_Hovering_Papaya_C
// (Actor)

class UClass* AGCL_BoostJumpPack_Hovering_Papaya_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCL_BoostJumpPack_Hovering_Papaya_C");

	return Clss;
}


// GCL_BoostJumpPack_Hovering_Papaya_C GCL_BoostJumpPack_Hovering_Papaya.Default__GCL_BoostJumpPack_Hovering_Papaya_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGCL_BoostJumpPack_Hovering_Papaya_C* AGCL_BoostJumpPack_Hovering_Papaya_C::GetDefaultObj()
{
	static class AGCL_BoostJumpPack_Hovering_Papaya_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGCL_BoostJumpPack_Hovering_Papaya_C*>(AGCL_BoostJumpPack_Hovering_Papaya_C::StaticClass()->DefaultObject);

	return Default;
}

}


