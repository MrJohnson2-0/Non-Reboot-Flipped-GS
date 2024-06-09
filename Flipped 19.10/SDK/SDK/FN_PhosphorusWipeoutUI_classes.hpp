#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x320 - 0x310)
// Class PhosphorusWipeoutUI.PhosphorusKnockBackWidget
class UPhosphorusKnockBackWidget : public UPhosphorusWidgetBase
{
public:
	class AFortAthenaMutator_PhosphorusWipeout*  CachedPhosphorusWipeoutMutator;                    // 0x310(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AFortAthenaMutator_Knockback*          CachedKnockbackMutator;                            // 0x318(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UPhosphorusKnockBackWidget* GetDefaultObj();

	void PhosphorusPhaseChangedEvent(class AFortAthenaMutator_Phosphorus* Mutator, enum class EPhosphorusPhase Phase);
	void KnockBackFromAllPlayersReceivedEvent(struct FKnockbackMutatorData& KnockbackData);
};

}


