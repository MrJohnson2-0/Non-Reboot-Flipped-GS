#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x40 - 0x30)
// BlueprintGeneratedClass TreeSeasonColor_Data.TreeSeasonColor_Data_C
class UTreeSeasonColor_Data_C : public UPrimaryDataAsset
{
public:
	TArray<struct FTree_SeasonColorStruct>       TreeSeasonData;                                    // 0x30(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UTreeSeasonColor_Data_C* GetDefaultObj();

};

}

