#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ProgressiveItemDetails.ProgressiveItemDetails_C
// (None)

class UClass* UProgressiveItemDetails_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProgressiveItemDetails_C");

	return Clss;
}


// ProgressiveItemDetails_C ProgressiveItemDetails.Default__ProgressiveItemDetails_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UProgressiveItemDetails_C* UProgressiveItemDetails_C::GetDefaultObj()
{
	static class UProgressiveItemDetails_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UProgressiveItemDetails_C*>(UProgressiveItemDetails_C::StaticClass()->DefaultObject);

	return Default;
}

}


