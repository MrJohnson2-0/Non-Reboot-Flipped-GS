#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x398 - 0x378)
// WidgetBlueprintGeneratedClass ProgressiveStageListView.ProgressiveStageListView_C
class UProgressiveStageListView_C : public UFortProgressiveStageList
{
public:
	class UProgressiveStageWidget_C*             ProgressiveStageList;                              // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressiveStageWidget_C*             ProgressiveStageList_1;                            // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressiveStageWidget_C*             ProgressiveStageList_2;                            // 0x388(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VBox_StagesContainer;                              // 0x390(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UProgressiveStageListView_C* GetDefaultObj();

	void ClearStageWidgets();
	class UFortProgressiveStageWidget* AddStageWidget(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_HasAnyChildren_ReturnValue, class UProgressiveStageWidget_C* CallFunc_Create_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue);
};

}


