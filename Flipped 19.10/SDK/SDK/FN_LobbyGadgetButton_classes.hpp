#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x59 (0x2C9 - 0x270)
// WidgetBlueprintGeneratedClass LobbyGadgetButton.LobbyGadgetButton_C
class ULobbyGadgetButton_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UPanelButton_C*                        Button;                                            // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                EmptySlot;                                         // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortMultiSizeItemCard*                Item;                                              // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UFortWorldItemDefinition*>      DesignTestItemDefinitions;                         // 0x290(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UFortWorldItem*                        GadgetItem;                                        // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnButtonClicked;                                   // 0x2A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnButtonHovered;                                   // 0x2B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         bLocked;                                           // 0x2C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ULobbyGadgetButton_C* GetDefaultObj();

	void Focus(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue);
	void GetLocked(bool* bLocked);
	void SetLocked(bool bLocked, bool CallFunc_Not_PreBool_ReturnValue);
	void GetGadgetItem(class UFortWorldItem** GadgetItem);
	void Refresh(class UFortWorldItem* WorldItem, bool CallFunc_IsValid_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__Button_K2Node_ComponentBoundEvent_81_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__Button_K2Node_ComponentBoundEvent_96_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void ExecuteUbergraph_LobbyGadgetButton(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class UCommonButtonLegacy* K2Node_ComponentBoundEvent_Button_1, int32 CallFunc_Array_Length_ReturnValue, class UCommonButtonLegacy* K2Node_ComponentBoundEvent_Button, int32 CallFunc_RandomInteger_ReturnValue, class UFortWorldItemDefinition* CallFunc_Array_Get_Item, class UFortItem* CallFunc_CreateTemporaryItemInstanceBP_ReturnValue);
	void OnButtonHovered__DelegateSignature(class ULobbyGadgetButton_C* GadgetButton);
	void OnButtonClicked__DelegateSignature(class ULobbyGadgetButton_C* GadgetButton);
};

}


