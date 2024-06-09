#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BGA_Rift_Portal_VM.BGA_Rift_Portal_VM_C
// (Actor)

class UClass* ABGA_Rift_Portal_VM_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BGA_Rift_Portal_VM_C");

	return Clss;
}


// BGA_Rift_Portal_VM_C BGA_Rift_Portal_VM.Default__BGA_Rift_Portal_VM_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABGA_Rift_Portal_VM_C* ABGA_Rift_Portal_VM_C::GetDefaultObj()
{
	static class ABGA_Rift_Portal_VM_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABGA_Rift_Portal_VM_C*>(ABGA_Rift_Portal_VM_C::StaticClass()->DefaultObject);

	return Default;
}

}


