#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x320 - 0x2B0)
// Class XpEverywhereUI.XpEverywhereAccoladesWidget
class UXpEverywhereAccoladesWidget : public UFortHUDElementWidget
{
public:
	uint8                                        Pad_3E79[0x60];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortPrioritizedWidgetData            PrioritizationData;                                // 0x310(0x2)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3E7A[0xE];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UXpEverywhereAccoladesWidget* GetDefaultObj();

	void OpenWidget(class UFortAccoladeItemDefinition* AccoladeDef, int32 XPValue, class FText& DisplayName, TSoftObjectPtr<class UTexture2D>& AccoladeLargePreviewImageOverride, class FText& SimulatedName, class FText& SimulatedText, enum class EFortSimulatedXPSize SimulatedXpSize);
	void OnStompedByOtherWidget();
	void OnEventAdded();
	bool HasMoreXPEvents();
	void CloseWidget();
};

// 0xE8 (0x418 - 0x330)
// Class XpEverywhereUI.XpEverywhereBar
class UXpEverywhereBar : public UCommonActivatableWidget
{
public:
	bool                                         bXpBarAlwaysActive;                                // 0x330(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3E7F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortSocialAvatarIcon*                 SocialAvatarIcon;                                  // 0x338(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3E80[0xD8];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UXpEverywhereBar* GetDefaultObj();

	void OnXpBarUpdated(int32 ShownXP, int32 ShownLevel, int32 NewDesiredXP, int32 NewDesiredLevel, int32 NewRemainingRestXP);
	void OnXpBarInitialized(int32 CurrentXp, int32 CurrentLevel, int32 CurrentRemainingRestXP);
	int32 GetTotalXpRequiredForLevel(int32 InLevel);
	void DoneUpdatingXpBar();
};

// 0x8 (0x338 - 0x330)
// Class XpEverywhereUI.XpEverywhereLevelUpWidget
class UXpEverywhereLevelUpWidget : public UCommonActivatableWidget
{
public:
	uint8                                        Pad_3E81[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UXpEverywhereLevelUpWidget* GetDefaultObj();

	void OnShowWidget(int32 NewLevel);
	void DoneLevelingUp();
	void DisplayLevelUpRewards();
};

// 0x18 (0x2C8 - 0x2B0)
// Class XpEverywhereUI.XpEverywhereReticleWidget
class UXpEverywhereReticleWidget : public UFortHUDElementWidget
{
public:
	uint8                                        Pad_3E86[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UXpEverywhereReticleWidget* GetDefaultObj();

	void UpdateXPSource(class FText& NewSourceText);
	void UpdateXPAmount(int32 NewAmount, class USoundCue* Cue, enum class EFortSimulatedXPSize SimulatedXpSize);
	void UpdateRestXP(int32 RestXpRemaining);
	void HandleProfileUpdated();
	void ForwardEvents();
};

// 0x90 (0x340 - 0x2B0)
// Class XpEverywhereUI.XpEverywhereRewardWidget
class UXpEverywhereRewardWidget : public UFortHUDElementWidget
{
public:
	uint8                                        Pad_3E87[0x48];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UFortNotificationEntry>    DefaultEntryClass;                                 // 0x2F8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasPrioritizedWidgetFocus;                        // 0x300(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3E88[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortNotificationEntry*                ActiveWidget;                                      // 0x308(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UFortNotificationEntry*>        WidgetQueue;                                       // 0x310(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	class UVerticalBox*                          NotificationUpdatesBox;                            // 0x320(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FXpEverywhereNotificationWidgetClass> NotificationClassPoolData;                         // 0x328(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FFortPrioritizedWidgetData            PrioritizationData;                                // 0x338(0x2)(Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_3E89[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UXpEverywhereRewardWidget* GetDefaultObj();

	void HandleNotificationUpdateFinished();
};

// 0xC0 (0x170 - 0xB0)
// Class XpEverywhereUI.XpEverywhereUIComponent
class UXpEverywhereUIComponent : public UActorComponent
{
public:
	uint8                                        Pad_3E8A[0x90];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 XpEverywhereHiddenElementTags;                     // 0x140(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3E8B[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UXpEverywhereUIComponent* GetDefaultObj();

};

}


