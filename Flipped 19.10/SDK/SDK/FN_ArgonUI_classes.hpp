#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x310 - 0x308)
// Class ArgonUI.ArgonWidgetBase
class UArgonWidgetBase : public ULTMWidgetBase
{
public:
	class AFortAthenaMutator_Argon*              ArgonMutator;                                      // 0x308(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UArgonWidgetBase* GetDefaultObj();

	void UnbindFromMutator_BP();
	TArray<class AFortPlayerStateAthena*> GetTeamPlayerStates(uint8 Team);
	void BindToMutator_BP();
};

// 0x20 (0x330 - 0x310)
// Class ArgonUI.ArgonHUDAlertWidget
class UArgonHUDAlertWidget : public UArgonWidgetBase
{
public:
	float                                        DisplayPlayerFinishedMessageTime;                  // 0x310(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3748[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FArgonFinishedPlayerInfo>      PlayerFinishedMessageQueue;                        // 0x318(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3749[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UArgonHUDAlertWidget* GetDefaultObj();

	void OnPlayerFinished(struct FArgonFinishedPlayerInfo& FinishedPlayerInfo);
	void ForceHidePlayerFinishedMessage();
	void DisplayPlayerFinishedMessage(const struct FArgonFinishedPlayerInfo& FinishedInfo);
};

// 0x10 (0x320 - 0x310)
// Class ArgonUI.ArgonLeaderboardWidget
class UArgonLeaderboardWidget : public UArgonWidgetBase
{
public:
	TArray<struct FArgonLeaderboardData>         LeaderboardEntries;                                // 0x310(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UArgonLeaderboardWidget* GetDefaultObj();

	void UpdateLeaderboardUI();
	void OnRacingPlayersByPlaceChanged();
	void OnAnyTeamTicketCountChanged();
};

}


