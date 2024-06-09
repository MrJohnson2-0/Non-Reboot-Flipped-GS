#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x2E8 - 0x2B0)
// Class SpecialEventGameplayUI.FortGameplayCinematicHostWidget
class UFortGameplayCinematicHostWidget : public UFortHUDElementWidget
{
public:
	class FName                                  IntroWidgetEntryName;                              // 0x2B0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FCinematicWidgetData>          WidgetEntries;                                     // 0x2B8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class UAthenaLoadingScreenItemDefinition*    LoadingScreenDefinition;                           // 0x2C8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3B4F[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortGameplayCinematicHostWidget* GetDefaultObj();

};

// 0x20 (0x350 - 0x330)
// Class SpecialEventGameplayUI.FortGameplayCinematicWidget
class UFortGameplayCinematicWidget : public UCommonActivatableWidget
{
public:
	uint8                                        Pad_3B50[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bSkipCinematics;                                   // 0x338(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3B51[0x17];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortGameplayCinematicWidget* GetDefaultObj();

	void OnStartCinematic();
	void OnCinematicFinished();
};

// 0x20 (0x350 - 0x330)
// Class SpecialEventGameplayUI.FortGameplayIntroPanelWidget
class UFortGameplayIntroPanelWidget : public UCommonActivatableWidget
{
public:
	uint8                                        Pad_3B52[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortGameplayIntroPanelWidget* GetDefaultObj();

	void OnWaitingForReadyForGameplay();
	void OnWaitingForPawn();
	void OnWaitingForMinTime();
	void OnStartIntro();
	void OnIntroFinished();
};

}


