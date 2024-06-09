#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass NPCConvertedIndicatorMarker.NPCConvertedIndicatorMarker_C
// (None)

class UClass* UNPCConvertedIndicatorMarker_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NPCConvertedIndicatorMarker_C");

	return Clss;
}


// NPCConvertedIndicatorMarker_C NPCConvertedIndicatorMarker.Default__NPCConvertedIndicatorMarker_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNPCConvertedIndicatorMarker_C* UNPCConvertedIndicatorMarker_C::GetDefaultObj()
{
	static class UNPCConvertedIndicatorMarker_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNPCConvertedIndicatorMarker_C*>(UNPCConvertedIndicatorMarker_C::StaticClass()->DefaultObject);

	return Default;
}

}


