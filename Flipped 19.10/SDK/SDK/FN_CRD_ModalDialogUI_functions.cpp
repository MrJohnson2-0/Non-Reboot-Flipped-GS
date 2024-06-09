#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class CRD_ModalDialogUI.CreativeModalDialogWidget
// (None)

class UClass* UCreativeModalDialogWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CreativeModalDialogWidget");

	return Clss;
}


// CreativeModalDialogWidget CRD_ModalDialogUI.Default__CreativeModalDialogWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UCreativeModalDialogWidget* UCreativeModalDialogWidget::GetDefaultObj()
{
	static class UCreativeModalDialogWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UCreativeModalDialogWidget*>(UCreativeModalDialogWidget::StaticClass()->DefaultObject);

	return Default;
}

}


