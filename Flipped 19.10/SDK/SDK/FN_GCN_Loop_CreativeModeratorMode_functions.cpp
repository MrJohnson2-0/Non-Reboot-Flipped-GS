#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCN_Loop_CreativeModeratorMode.GCN_Loop_CreativeModeratorMode_C
// (Actor)

class UClass* AGCN_Loop_CreativeModeratorMode_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCN_Loop_CreativeModeratorMode_C");

	return Clss;
}


// GCN_Loop_CreativeModeratorMode_C GCN_Loop_CreativeModeratorMode.Default__GCN_Loop_CreativeModeratorMode_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGCN_Loop_CreativeModeratorMode_C* AGCN_Loop_CreativeModeratorMode_C::GetDefaultObj()
{
	static class AGCN_Loop_CreativeModeratorMode_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGCN_Loop_CreativeModeratorMode_C*>(AGCN_Loop_CreativeModeratorMode_C::StaticClass()->DefaultObject);

	return Default;
}

}


