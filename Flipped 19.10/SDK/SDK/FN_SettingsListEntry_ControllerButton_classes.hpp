#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x2E0 - 0x2D0)
// WidgetBlueprintGeneratedClass SettingsListEntry_ControllerButton.SettingsListEntry_ControllerButton_C
class USettingsListEntry_ControllerButton_C : public UFortSettingsListEntrySetting_ControllerButton
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USimpleCommonButton_C*                 Button_ControllerAction;                           // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class USettingsListEntry_ControllerButton_C* GetDefaultObj();

	void OnSettingAssigned(class FText& ActionText);
	void BndEvt__Button_ControllerAction_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void ExecuteUbergraph_SettingsListEntry_ControllerButton(int32 EntryPoint, class FText K2Node_Event_ActionText, class UCommonButtonLegacy* K2Node_ComponentBoundEvent_Button);
};

}


