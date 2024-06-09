#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x268 - 0x248)
// WidgetBlueprintGeneratedClass CraftingInteractContextInfoWidget.CraftingInteractContextInfoWidget_C
class UCraftingInteractContextInfoWidget_C : public UFortInteractContextInfoWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x248(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonTextBlock*                      ActionText;                                        // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ItemPreviewImage;                                  // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterialExpressionTextureObjectParameter* Image;                                             // 0x260(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCraftingInteractContextInfoWidget_C* GetDefaultObj();

	void SetCraftingPreviewImage(struct FItemAndCount& ItemAndCount, class UTexture* ItemIcon, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, const struct FFortRarityItemData& CallFunc_BPGetRarityDataForItemDef_ReturnValue);
	void SetCraftingResult(class UFortInteractContextInfo*& ContextInfo, struct FItemAndCount& CraftingResult);
	void SetDefaultText(class UFortInteractContextInfo*& ContextInfo);
	void OnLoaded_5CA0AB9C4E28FABDE17BA4B37923A52F(class UObject* Loaded);
	void OnContextInfoUpdated(class UFortInteractContextInfo* ContextInfo);
	void ExecuteUbergraph_CraftingInteractContextInfoWidget(int32 EntryPoint, class UObject* Temp_object_Variable, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortInteractContextInfo* K2Node_Event_ContextInfo, bool CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UFortPickupInteractOverrideComponent_Crafting* CallFunc_GetComponentByClass_ReturnValue, class UObject* K2Node_CustomEvent_Loaded, bool CallFunc_IsValid_ReturnValue_1, TArray<struct FItemAndCount>& CallFunc_GetCraftingResultsForRowName_OutResults, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_GetSmallPreviewImage_ReturnValue);
};

}


