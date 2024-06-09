#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x2C8 - 0x2C0)
// Class CorruptionGameplayCodeUI.FortPowerupReticleExtensionWidget
class UFortPowerupReticleExtensionWidget : public UFortWeaponReticleExtensionWidgetBase
{
public:
	enum class EPowerupHeatState                 LastPowerupHeatState;                              // 0x2C0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1977[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortPowerupReticleExtensionWidget* GetDefaultObj();

	float GetOverheatingMaxValue();
	float GetCurrentOverheatValue();
	float GetCurrentOverheatPercent();
};

}


