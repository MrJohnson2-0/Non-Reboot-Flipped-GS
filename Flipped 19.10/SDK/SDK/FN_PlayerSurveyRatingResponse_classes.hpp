#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x388 - 0x378)
// WidgetBlueprintGeneratedClass PlayerSurveyRatingResponse.PlayerSurveyRatingResponse_C
class UPlayerSurveyRatingResponse_C : public UFortPlayerSurveyRatingResponseBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x378(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UPlayerSurveyHorizontalIndicator_C*    PlayerSurveyHorizontalIndicator;                   // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UPlayerSurveyRatingResponse_C* GetDefaultObj();

	void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
	void OnResponsesSet_BP();
	void ExecuteUbergraph_PlayerSurveyRatingResponse(int32 EntryPoint, const struct FFocusEvent& K2Node_Event_InFocusEvent, int32 CallFunc_GetNumEntries_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, float CallFunc_SelectFloat_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue);
};

}


