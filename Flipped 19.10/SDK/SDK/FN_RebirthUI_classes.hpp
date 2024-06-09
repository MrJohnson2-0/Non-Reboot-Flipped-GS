#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x320 - 0x308)
// Class RebirthUI.RebirthLimitedLivesWidgetBase
class URebirthLimitedLivesWidgetBase : public ULTMWidgetBase
{
public:
	TWeakObjectPtr<class AFortAthenaMutator_Rebirth> RebirthMutator;                                    // 0x308(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class AFortPlayerStateAthena> ViewedPlayerState;                                 // 0x310(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EFortRarity                       CurrentRarity;                                     // 0x318(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3939[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CurrentLivesRemaining;                             // 0x31C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class URebirthLimitedLivesWidgetBase* GetDefaultObj();

	void UpdateWidgetRarity(bool bPlayAnimations);
	void HandlePlayerRaritiesUpdated();
	void HandlePawnChanged();
	void HandleLastLife();
};

}


