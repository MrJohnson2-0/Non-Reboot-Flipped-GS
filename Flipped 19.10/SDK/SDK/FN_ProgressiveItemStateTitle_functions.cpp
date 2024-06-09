#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ProgressiveItemStateTitle.ProgressiveItemStateTitle_C
// (None)

class UClass* UProgressiveItemStateTitle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProgressiveItemStateTitle_C");

	return Clss;
}


// ProgressiveItemStateTitle_C ProgressiveItemStateTitle.Default__ProgressiveItemStateTitle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UProgressiveItemStateTitle_C* UProgressiveItemStateTitle_C::GetDefaultObj()
{
	static class UProgressiveItemStateTitle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UProgressiveItemStateTitle_C*>(UProgressiveItemStateTitle_C::StaticClass()->DefaultObject);

	return Default;
}

}


