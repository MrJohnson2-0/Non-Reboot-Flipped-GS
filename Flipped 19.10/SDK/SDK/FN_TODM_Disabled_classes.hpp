#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x1128 - 0x1120)
// BlueprintGeneratedClass TODM_Disabled.TODM_Disabled_C
class ATODM_Disabled_C : public AMASTER_TODM_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1120(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ATODM_Disabled_C* GetDefaultObj();

	void UserConstructionScript();
	void DisableLightAndFog(bool Enable);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_TODM_Disabled(int32 EntryPoint, bool K2Node_CustomEvent_Enable, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetShadowQuality_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess);
};

}


