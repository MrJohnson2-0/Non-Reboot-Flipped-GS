#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x310 - 0x308)
// Class PhosphorusUI.PhosphorusWidgetBase
class UPhosphorusWidgetBase : public ULTMWidgetBase
{
public:
	class AFortAthenaMutator_Phosphorus*         CachedPhosphorusMutator;                           // 0x308(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UPhosphorusWidgetBase* GetDefaultObj();

	void SetAvatarImageFromPlayerState(class AFortPlayerStateAthena* PlayerState, class UFortLazyImage* AvatarImage);
	void OnMutatorAvailable(class AFortGameplayMutator* MutatorActor);
	void MutatorReady();
	class AFortAthenaMutator_Phosphorus* GetPhosphorusMutator();
};

// 0x30 (0x340 - 0x310)
// Class PhosphorusUI.PhosphorusEndOfRoundWidget
class UPhosphorusEndOfRoundWidget : public UPhosphorusWidgetBase
{
public:
	struct FScalableFloat                        PostRoundFadeOutDuration;                          // 0x310(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	int32                                        CurrentRound;                                      // 0x338(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3770[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPhosphorusEndOfRoundWidget* GetDefaultObj();

	void SetWidgetVisibility(bool bNewVisibility);
	void OnPhosphorusPhaseChanged(class AFortAthenaMutator_Phosphorus* PhosphorusMutator, enum class EPhosphorusPhase NewPhase);
	void OnNewRoundStarted();
	void FadeOutScreen();
};

// 0x0 (0x310 - 0x310)
// Class PhosphorusUI.PhosphorusHUDWidget
class UPhosphorusHUDWidget : public UPhosphorusWidgetBase
{
public:

	static class UClass* StaticClass();
	static class UPhosphorusHUDWidget* GetDefaultObj();

	void OnPhosphorusPlayerEliminated_BP(class AFortPlayerStateAthena* PlayerEliminated);
	void OnPhosphorusLocalSquadWiped_BP();
	void OnPhosphorusEnemySquadWiped_BP();
};

// 0x0 (0x310 - 0x310)
// Class PhosphorusUI.PhosphorusSquadWipedWidget
class UPhosphorusSquadWipedWidget : public UPhosphorusWidgetBase
{
public:

	static class UClass* StaticClass();
	static class UPhosphorusSquadWipedWidget* GetDefaultObj();

	void OnLocalPlayerSquadWiped();
	void HandleSquadWipedVisibilityChanged(bool bNewVisibility);
};

}


