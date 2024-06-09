#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x18 - 0x0)
// UserDefinedStruct DataTrackerParameterData.DataTrackerParameterData
struct FDataTrackerParameterData
{
public:
	enum class E_DataTrackerTagTypes             Type_4_CF035C87466B64CD227DA6806FC20AA0;           // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_719A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          Tag_8_61F575734DB64A573924BCAFD5B4423F;            // 0x4(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	float                                        Value_5_E5013D364BA60BD90AECCF88EFF313A4;          // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AttackSpeed_13_C792F853487F8768F5EC91A10AE35BF9;   // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ReleaseSpeed_14_3B43A34E49AB27C329C287B6FDF1FDE7;  // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


