#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0xD0 - 0xB0)
// BlueprintGeneratedClass VictoryCrownsKillFeedExtension.VictoryCrownsKillFeedExtension_C
class UVictoryCrownsKillFeedExtension_C : public UFortGameStateComponent_KillFeedExtension
{
public:
	class FString                                OverrideVictimStyle;                               // 0xB0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                OverrideKillerStyle;                               // 0xC0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UVictoryCrownsKillFeedExtension_C* GetDefaultObj();

	class FString CheckForOverrideVictimStyle(class AFortPlayerStateAthena* VictimPlayerStateAthena, const class FString& VictimStyle, bool CallFunc_IsValid_ReturnValue, class AFortGameStateAthena* CallFunc_GetGameStateAthena_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UFortGameStateComponent_VictoryCrowns* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsCrownBearer_ReturnValue);
	class FString CheckForOverrideKillerStyle(class AFortPlayerStateAthena* KillerPlayerStateAthena, const class FString& KillerStyle, bool CallFunc_IsValid_ReturnValue, class AFortGameStateAthena* CallFunc_GetGameStateAthena_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UFortGameStateComponent_VictoryCrowns* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsCrownBearer_ReturnValue);
};

}


