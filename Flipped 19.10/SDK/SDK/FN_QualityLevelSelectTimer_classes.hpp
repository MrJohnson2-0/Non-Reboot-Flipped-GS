#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x2C8 - 0x2B8)
// WidgetBlueprintGeneratedClass QualityLevelSelectTimer.QualityLevelSelectTimer_C
class UQualityLevelSelectTimer_C : public UFortHUDQualityLevelSelectTimer
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        TextScaleUnderOneSecond;                           // 0x2C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TextScaleOverOneSecond;                            // 0x2C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UQualityLevelSelectTimer_C* GetDefaultObj();

	void UpdateTextScale(float TimeRemaining, bool Temp_bool_Variable, bool CallFunc_Greater_FloatFloat_ReturnValue, float K2Node_Select_Default, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, bool CallFunc_NotEqual_FloatFloat_ReturnValue);
	void OnProgressStarted(float Duration);
	void OnProgressEnded();
	void OnTimeRemainingChanged(float TimeRemaining);
	void OnInitialized();
	void ExecuteUbergraph_QualityLevelSelectTimer(int32 EntryPoint, float K2Node_Event_Duration, float K2Node_Event_TimeRemaining);
};

}


