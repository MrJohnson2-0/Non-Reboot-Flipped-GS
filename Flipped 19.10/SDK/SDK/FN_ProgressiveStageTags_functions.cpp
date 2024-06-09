#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ProgressiveStageTags.ProgressiveStageTags_C
// (None)

class UClass* UProgressiveStageTags_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProgressiveStageTags_C");

	return Clss;
}


// ProgressiveStageTags_C ProgressiveStageTags.Default__ProgressiveStageTags_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UProgressiveStageTags_C* UProgressiveStageTags_C::GetDefaultObj()
{
	static class UProgressiveStageTags_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UProgressiveStageTags_C*>(UProgressiveStageTags_C::StaticClass()->DefaultObject);

	return Default;
}

}


