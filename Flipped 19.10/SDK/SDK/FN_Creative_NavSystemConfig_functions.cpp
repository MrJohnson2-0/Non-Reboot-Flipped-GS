#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Creative_NavSystemConfig.Creative_NavSystemConfig_C
// (Actor)

class UClass* ACreative_NavSystemConfig_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Creative_NavSystemConfig_C");

	return Clss;
}


// Creative_NavSystemConfig_C Creative_NavSystemConfig.Default__Creative_NavSystemConfig_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACreative_NavSystemConfig_C* ACreative_NavSystemConfig_C::GetDefaultObj()
{
	static class ACreative_NavSystemConfig_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACreative_NavSystemConfig_C*>(ACreative_NavSystemConfig_C::StaticClass()->DefaultObject);

	return Default;
}

}


