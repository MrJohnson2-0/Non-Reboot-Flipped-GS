#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x2C0 - 0x2B0)
// Class SidewaysCodeUI.SidewaysWidgetBase
class USidewaysWidgetBase : public UFortHUDElementWidget
{
public:
	class AFortPlayspaceReplicatedState*         ReplicatedState;                                   // 0x2B0(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ESidewaysState                    CurrentSidewaysState;                              // 0x2B8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1541[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USidewaysWidgetBase* GetDefaultObj();

	void OnSidewaysStateChanged(class USidewaysStateComponent* SidewaysStateComponent, class ASidewaysPlayspace* NewPlayspace, enum class ESidewaysState OldState, enum class ESidewaysState NewState);
	void OnParamUpdated(struct FGameplayTag& UpdatedParam);
	void OnExitSideways();
	void OnEnterSideways(class ASidewaysPlayspace* Playspace);
	bool IsValidPlayspace(class ASidewaysPlayspace* Playspace);
	void InitializeVariables();
	void HandleFortPawnChanged(class AFortPawn* PossessedPawn);
	void ConfigureUIFromPlayspace(class ASidewaysPlayspace* Playspace);
};

}


