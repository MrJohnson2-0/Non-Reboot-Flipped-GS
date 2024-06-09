#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0xB0 (0xB0 - 0x0)
// Function CraftingInteractContextInfoWidget.CraftingInteractContextInfoWidget_C.SetCraftingPreviewImage
struct UCraftingInteractContextInfoWidget_C_SetCraftingPreviewImage_Params
{
public:
	struct FItemAndCount                         ItemAndCount;                                      // 0x0(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	class UTexture*                              ItemIcon;                                          // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortRarityItemData                   CallFunc_BPGetRarityDataForItemDef_ReturnValue;    // 0x30(0x80)(None)
};

// 0x28 (0x28 - 0x0)
// Function CraftingInteractContextInfoWidget.CraftingInteractContextInfoWidget_C.SetCraftingResult
struct UCraftingInteractContextInfoWidget_C_SetCraftingResult_Params
{
public:
	class UFortInteractContextInfo*              ContextInfo;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FItemAndCount                         CraftingResult;                                    // 0x8(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function CraftingInteractContextInfoWidget.CraftingInteractContextInfoWidget_C.SetDefaultText
struct UCraftingInteractContextInfoWidget_C_SetDefaultText_Params
{
public:
	class UFortInteractContextInfo*              ContextInfo;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function CraftingInteractContextInfoWidget.CraftingInteractContextInfoWidget_C.OnLoaded_5CA0AB9C4E28FABDE17BA4B37923A52F
struct UCraftingInteractContextInfoWidget_C_OnLoaded_5CA0AB9C4E28FABDE17BA4B37923A52F_Params
{
public:
	class UObject*                               Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function CraftingInteractContextInfoWidget.CraftingInteractContextInfoWidget_C.OnContextInfoUpdated
struct UCraftingInteractContextInfoWidget_C_OnContextInfoUpdated_Params
{
public:
	class UFortInteractContextInfo*              ContextInfo;                                       // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA0 (0xA0 - 0x0)
// Function CraftingInteractContextInfoWidget.CraftingInteractContextInfoWidget_C.ExecuteUbergraph_CraftingInteractContextInfoWidget
struct UCraftingInteractContextInfoWidget_C_ExecuteUbergraph_CraftingInteractContextInfoWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_75A6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               Temp_object_Variable;                              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            K2Node_DynamicCast_AsTexture_2D;                   // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_75A7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x1C(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_75A8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortInteractContextInfo*              K2Node_Event_ContextInfo;                          // 0x30(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_75A9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortPickupInteractOverrideComponent_Crafting* CallFunc_GetComponentByClass_ReturnValue;          // 0x48(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               K2Node_CustomEvent_Loaded;                         // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_75AA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FItemAndCount>                 CallFunc_GetCraftingResultsForRowName_OutResults;  // 0x60(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x74(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_75AB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UTexture2D>             CallFunc_GetSmallPreviewImage_ReturnValue;         // 0x78(0x28)(UObjectWrapper, HasGetValueTypeHash)
};

}
}


