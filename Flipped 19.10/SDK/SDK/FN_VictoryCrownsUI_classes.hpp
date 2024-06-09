#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x90 (0x140 - 0xB0)
// Class VictoryCrownsUI.FortUIManagerComponent_VictoryCrowns
class UFortUIManagerComponent_VictoryCrowns : public UFortControllerComponent
{
public:
	TSubclassOf<class UVictoryCrownsIndicator>   VictoryCrownsIndicatorClass;                       // 0xB0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FUserWidgetPool                       IndicatorPool;                                     // 0xB8(0x88)(Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortUIManagerComponent_VictoryCrowns* GetDefaultObj();

	void RebuildBearerIndicators(TArray<class AFortPlayerStateAthena*>& CrownBearerList);
	void HandleGamePhaseStepChanged(TScriptInterface<class IFortSafeZoneInterface>& SafeZoneInterface, enum class EAthenaGamePhaseStep GamePhaseStep);
};

// 0x10 (0x280 - 0x270)
// Class VictoryCrownsUI.VictoryCrownsBearerInfoBase
class UVictoryCrownsBearerInfoBase : public UCommonUserWidget
{
public:
	TWeakObjectPtr<class AFortPlayerStateAthena> WeakPSA;                                           // 0x270(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      Text_PlayerName;                                   // 0x278(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UVictoryCrownsBearerInfoBase* GetDefaultObj();

	void SetPlayerState(class AFortPlayerStateAthena* InPlayerState);
	void OnSetPlayerState(class AFortPlayerStateAthena* PSA);
};

// 0x28 (0x310 - 0x2E8)
// Class VictoryCrownsUI.VictoryCrownsIndicator
class UVictoryCrownsIndicator : public UFortActorIndicatorWidget
{
public:
	uint8                                        Pad_3E2F[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UVictoryCrownsIndicator* GetDefaultObj();

	void OnTargetActorChanged(class AActor* TargetedActor);
	void OnScreenClampChanged(bool bIsClamped);
	void OnDistanceChanged(int32 Distance);
	class AFortPlayerStateAthena* GetIndicatedPlayerStateAthena();
};

// 0x10 (0x2C0 - 0x2B0)
// Class VictoryCrownsUI.VictoryCrownsPlayerInfoWidget
class UVictoryCrownsPlayerInfoWidget : public UFortHUDElementWidget
{
public:
	uint8                                        Pad_3E33[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UVictoryCrownsPlayerInfoWidget* GetDefaultObj();

	void OnPlayerVictoryCrownStatusChanged(bool bHasCrown);
	void HandleCrownBearerListChanged(TArray<class AFortPlayerStateAthena*>& CrownBearerList);
};

// 0x38 (0x368 - 0x330)
// Class VictoryCrownsUI.VictoryCrownsPreGameWidget
class UVictoryCrownsPreGameWidget : public UCommonActivatableWidget
{
public:
	class UDynamicEntryBox*                      EntryBox_BearerList;                               // 0x330(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonActionWidget*                   TipActionWidget;                                   // 0x338(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDataTableRowHandle                   CloseObjectInputAction;                            // 0x340(0x10)(Edit, NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3E47[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UVictoryCrownsPreGameWidget* GetDefaultObj();

	void UnregisterCloseButtonInput();
	void StartFadeOut();
	void RegisterCloseButtonInput();
	void RebuildBearerList(TArray<class AFortPlayerStateAthena*>& CrownBearerList);
	void OnInputMethodChanged(enum class ECommonInputType CurrentInput);
	void OnCloseActionsComplete();
	void OnButtonCloseProgress(float Progress);
	void OnButtonClose();
	void HandleGamePhaseStepChanged(TScriptInterface<class IFortSafeZoneInterface>& SafeZoneInterface, enum class EAthenaGamePhaseStep GamePhaseStep);
	void FadeOutTimerFinished();
};

}


