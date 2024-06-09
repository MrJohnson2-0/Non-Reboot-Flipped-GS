#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x498 - 0x490)
// WidgetBlueprintGeneratedClass ControllerActionsMenu.ControllerActionsMenu_C
class UControllerActionsMenu_C : public UFortControllerActionsMenu
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x490(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UControllerActionsMenu_C* GetDefaultObj();

	void BP_OnActivated();
	void ExecuteUbergraph_ControllerActionsMenu(int32 EntryPoint);
};

}


