#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0xF08 - 0xEF0)
// WidgetBlueprintGeneratedClass AthenaBoundActionButton.AthenaBoundActionButton_C
class UAthenaBoundActionButton_C : public UFortBoundActionButton
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xEF0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               ContentBorder;                                     // 0xEF8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             InputActionIconScale;                              // 0xF00(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAthenaBoundActionButton_C* GetDefaultObj();

	void UpdateInputActionIconSize(float Temp_float_Variable, float Temp_float_Variable_1, class UCommonInputSubsystem* CallFunc_GetContext_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool Temp_bool_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, float K2Node_Select_Default);
	void Construct();
	void OnUpdateInputAction();
	void ExecuteUbergraph_AthenaBoundActionButton(int32 EntryPoint);
};

}


