#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA0 (0x350 - 0x2B0)
// Class MotherGameplayUI.AvocadoEaterHealthBarWidget
class UAvocadoEaterHealthBarWidget : public UFortHUDElementWidget
{
public:
	struct FEventMessageTag                      AttachedMessageTag;                                // 0x2B0(0x8)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FEventMessageTag                      DetachedMessageTag;                                // 0x2B8(0x8)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FEventMessageTag                      SetMarkerPositionMessageTag;                       // 0x2C0(0x8)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FEventMessageTag                      TargetDamagedMessageTag;                           // 0x2C8(0x8)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_D2C[0x80];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAvocadoEaterHealthBarWidget* GetDefaultObj();

	void OnTargetDamaged();
	void OnSetMarkerPosition(float MarkerPosition);
	void OnParasiteDetached();
	void OnParasiteAttached();
};

// 0x20 (0x2E0 - 0x2C0)
// Class MotherGameplayUI.FortGravyGoblinReticleExtensionWidget
class UFortGravyGoblinReticleExtensionWidget : public UFortWeaponReticleExtensionWidgetBase
{
public:
	struct FEventMessageTag                      ItemActivatableTag;                                // 0x2C0(0x8)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FEventMessageTag                      ItemInactivatableTag;                              // 0x2C8(0x8)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_D32[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortGravyGoblinReticleExtensionWidget* GetDefaultObj();

	void OnItemInactivatable();
	void OnItemActivatable();
};

// 0x0 (0x2C0 - 0x2C0)
// Class MotherGameplayUI.FortLlamaRoasterReticleExtensionWidget
class UFortLlamaRoasterReticleExtensionWidget : public UFortWeaponReticleExtensionWidgetBase
{
public:

	static class UClass* StaticClass();
	static class UFortLlamaRoasterReticleExtensionWidget* GetDefaultObj();

};

// 0x30 (0x90 - 0x60)
// Class MotherGameplayUI.FortMobileActionBBE_GravyGoblinRotate
class UFortMobileActionBBE_GravyGoblinRotate : public UFortMobileActionButtonBehaviorExtension
{
public:
	struct FEventMessageTag                      HeldObjectRotatableTag;                            // 0x60(0x8)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FEventMessageTag                      HeldObjectUnrotatableTag;                          // 0x68(0x8)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTag                          GravyGoblinTag;                                    // 0x70(0x8)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_D38[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortMobileActionBBE_GravyGoblinRotate* GetDefaultObj();

};

// 0x78 (0x338 - 0x2C0)
// Class MotherGameplayUI.FortPaddleGingerReticleExtensionWidget
class UFortPaddleGingerReticleExtensionWidget : public UFortWeaponReticleExtensionWidgetBase
{
public:
	struct FEventMessageTag                      PropIndexChangedTag;                               // 0x2C0(0x8)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FEventMessageTag                      PropActivatedTag;                                  // 0x2C8(0x8)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortKeybindWidget*                    Keybind_ActivateAction;                            // 0x2D0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortKeybindWidget*                    Keybind_CycleCategoryAction;                       // 0x2D8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortKeybindWidget*                    Keybind_CyclePropAction;                           // 0x2E0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_D55[0x50];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortPaddleGingerReticleExtensionWidget* GetDefaultObj();

	void OnPropIndexChanged(class FText& CategoryText, int32 PropIndex, int32 MaxPropCount, int32 CategoryIndex, int32 MaxCategoryCount);
	void OnPropActivationChanged(bool Activated);
};

// 0x0 (0x2C0 - 0x2C0)
// Class MotherGameplayUI.FortReactorGradeReticleExtensionWidget
class UFortReactorGradeReticleExtensionWidget : public UFortWeaponReticleExtensionWidgetBase
{
public:

	static class UClass* StaticClass();
	static class UFortReactorGradeReticleExtensionWidget* GetDefaultObj();

	void OnUpdateChargeToMin(float ChargePercent);
	void OnUpdateChargeToAutoDischarge(float ChargePercent);
	void OnMinimumChargeReached();
};

}


