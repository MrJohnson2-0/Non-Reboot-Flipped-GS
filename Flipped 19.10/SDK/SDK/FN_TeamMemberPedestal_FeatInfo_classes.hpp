#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0xF50 - 0xF40)
// WidgetBlueprintGeneratedClass TeamMemberPedestal_FeatInfo.TeamMemberPedestal_FeatInfo_C
class UTeamMemberPedestal_FeatInfo_C : public UFortTeamMemberPedestalFeatInfo
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xF40(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      FeatInfoSet;                                       // 0xF48(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UTeamMemberPedestal_FeatInfo_C* GetDefaultObj();

	void OnAnimationFinished(class UWidgetAnimation* Animation);
	void OnFeatDefinitionSet();
	void ExecuteUbergraph_TeamMemberPedestal_FeatInfo(int32 EntryPoint, class UWidgetAnimation* K2Node_Event_Animation, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
};

}


