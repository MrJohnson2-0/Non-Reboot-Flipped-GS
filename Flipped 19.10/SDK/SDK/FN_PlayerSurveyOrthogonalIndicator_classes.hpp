#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x258 - 0x248)
// WidgetBlueprintGeneratedClass PlayerSurveyOrthogonalIndicator.PlayerSurveyOrthogonalIndicator_C
class UPlayerSurveyOrthogonalIndicator_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x248(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonActionWidget*                   InputActionWidget_Move;                            // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UPlayerSurveyOrthogonalIndicator_C* GetDefaultObj();

	void UpdateGamepadControlsVisibility(enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue);
	void BndEvt__InputActionWidget_Move_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature(bool bUsingGamepad);
	void ExecuteUbergraph_PlayerSurveyOrthogonalIndicator(int32 EntryPoint, bool K2Node_ComponentBoundEvent_bUsingGamepad);
};

}


