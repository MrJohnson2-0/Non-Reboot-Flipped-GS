#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SoundLibrary_CornStalks.SoundLibrary_CornStalks_C
// (None)

class UClass* USoundLibrary_CornStalks_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SoundLibrary_CornStalks_C");

	return Clss;
}


// SoundLibrary_CornStalks_C SoundLibrary_CornStalks.Default__SoundLibrary_CornStalks_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USoundLibrary_CornStalks_C* USoundLibrary_CornStalks_C::GetDefaultObj()
{
	static class USoundLibrary_CornStalks_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USoundLibrary_CornStalks_C*>(USoundLibrary_CornStalks_C::StaticClass()->DefaultObject);

	return Default;
}

}


