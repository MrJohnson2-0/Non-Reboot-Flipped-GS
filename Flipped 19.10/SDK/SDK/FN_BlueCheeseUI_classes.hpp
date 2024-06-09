#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x310 - 0x308)
// Class BlueCheeseUI.BlueCheeseWidgetBase
class UBlueCheeseWidgetBase : public ULTMWidgetBase
{
public:
	class AFortAthenaMutator_BlueCheese*         CachedBlueCheeseMutator;                           // 0x308(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UBlueCheeseWidgetBase* GetDefaultObj();

	void OnMutatorAvailable(class AFortGameplayMutator* MutatorActor);
	void MutatorReady();
	class AFortAthenaMutator_BlueCheese* GetBlueCheeseMutator();
};

}


