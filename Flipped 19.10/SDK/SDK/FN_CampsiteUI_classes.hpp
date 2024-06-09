#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x280 - 0x270)
// Class CampsiteUI.CampsiteMarkerInfoBase
class UCampsiteMarkerInfoBase : public UCommonUserWidget
{
public:
	TWeakObjectPtr<class AFortPlayerStateAthena> WeakPSA;                                           // 0x270(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      Text_PlayerName;                                   // 0x278(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UCampsiteMarkerInfoBase* GetDefaultObj();

	void SetPlayerState(class AFortPlayerStateAthena* InPlayerState);
	void OnSetPlayerState(class AFortPlayerStateAthena* PSA);
};

}


