#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x338 - 0x320)
// WidgetBlueprintGeneratedClass AthenaFloatSliderVariantPicker.AthenaFloatSliderVariantPicker_C
class UAthenaFloatSliderVariantPicker_C : public UFortFloatSliderVariantPicker
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x320(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UOverlay*                              Panel_Value;                                       // 0x328(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USimpleMaterialProgressBar_C*          Progress;                                          // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAthenaFloatSliderVariantPicker_C* GetDefaultObj();

	void OnUpdateValue(float NormalizedValue, bool bIsLocked);
	void ExecuteUbergraph_AthenaFloatSliderVariantPicker(int32 EntryPoint, float K2Node_Event_NormalizedValue, bool K2Node_Event_bIsLocked, const struct FLinearColor& CallFunc_SelectColor_ReturnValue);
};

}


